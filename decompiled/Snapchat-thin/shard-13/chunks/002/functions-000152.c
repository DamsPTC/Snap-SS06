/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a24d408; end: 10a24d4f3;  */

long * FUN_10a24d408(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)0x88;
  __Znwm();
  plVar1[0xd] = 0;
  plVar1[0xc] = 0;
  plVar1[0xf] = 0;
  plVar1[0xe] = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[9] = 0;
  plVar1[8] = 0;
  plVar1[0xb] = 0;
  plVar1[10] = 0;
  *(undefined8 *)((long)plVar1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((long)plVar1 + 0x84) = 0;
  lVar3 = *param_1;
  *(long **)(lVar3 + 8) = plVar1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  lVar3 = param_1[2];
  param_1[2] = lVar3 + 1;
  *(char *)(plVar1 + 0xe) = (char)param_2;
  plVar4 = param_1 + 3;
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    if (lVar3 + 1 == 0) {
      if ((param_2 & 1) == 0) goto LAB_10a24d4b4;
    }
    else if (param_2 == *(byte *)(param_1[1] + 0x70)) goto LAB_10a24d4b4;
    do {
      plVar4 = (long *)*plVar4;
    } while (*(byte *)(plVar4[2] + 0x70) == param_2);
    plVar4 = (long *)plVar4[1];
  }
LAB_10a24d4b4:
  plVar2 = (long *)0x18;
  __Znwm();
  plVar2[2] = (long)plVar1;
  lVar3 = *plVar4;
  *(long **)(lVar3 + 8) = plVar2;
  *plVar2 = lVar3;
  *plVar4 = (long)plVar2;
  plVar2[1] = (long)plVar4;
  param_1[5] = lVar5 + 1;
  return plVar1;
}



/* Entry: 10a24d4f4; end: 10a24d553;  */

void FUN_10a24d4f4(long *param_1)

{
  int iStack_14;
  
  if ((char)param_1[0xc] != '\x01' || param_1[1] != *param_1) {
    iStack_14 = (int)((ulong)(param_1[1] - *param_1) >> 3) * -0x3d70a3d7 + -1;
    FUN_109febd04(param_1 + 3,&iStack_14);
    return;
  }
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  return;
}



/* Entry: 10a24d554; end: 10a24d7df;  */

void FUN_10a24d554(float param_1,float *param_2,float *param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  FUN_10a24da00();
  pfVar15 = param_2;
  FUN_10a24d004();
  fVar18 = param_2[0x2f];
  fVar19 = param_2[0x30];
  uVar10 = (ulong)(uint)(fVar18 + fVar19);
  fVar20 = param_1 * (fVar18 + fVar19);
  lVar8 = *(long *)(param_2 + 0x4a);
  pfVar4 = *(float **)(param_2 + 0x46);
  if (pfVar15 <= (float *)((lVar8 - (long)pfVar4 >> 2) * -0x5555555555555555)) {
    pfVar9 = *(float **)(param_2 + 0x48);
    lVar8 = (long)pfVar9 - (long)pfVar4 >> 2;
    pfVar6 = (float *)(lVar8 * -0x5555555555555555);
    pfVar12 = pfVar4;
    pfVar11 = pfVar6;
    if (pfVar15 <= pfVar6) {
      pfVar11 = pfVar15;
    }
    for (; pfVar11 != (float *)0x0; pfVar11 = (float *)((long)pfVar11 - 1)) {
      *pfVar12 = fVar18;
      pfVar12[1] = fVar19;
      pfVar12[2] = fVar20;
      pfVar12 = pfVar12 + 3;
    }
    lVar8 = (long)pfVar15 + lVar8 * 0x5555555555555555;
    if (pfVar15 < pfVar6 || lVar8 == 0) {
      pfVar12 = pfVar4 + (long)pfVar15 * 3;
    }
    else {
      pfVar12 = pfVar9 + lVar8 * 3;
      do {
        *pfVar9 = fVar18;
        pfVar9[1] = fVar19;
        pfVar9[2] = fVar20;
        pfVar9 = pfVar9 + 3;
      } while (pfVar9 != pfVar12);
    }
LAB_10a24d6a8:
    *(float **)(param_2 + 0x48) = pfVar12;
    if (pfVar15 != (float *)0x0) {
      lVar8 = *(long *)(param_2 + 0xc);
      if (lVar8 != *(long *)(param_2 + 0xe)) {
        pfVar9 = (float *)0x0;
        uVar10 = (*(long *)(param_2 + 0xe) - lVar8 >> 3) * -0x70a3d70a3d70a3d7;
        lVar1 = *(long *)(param_2 + 0x18);
        pfVar11 = (float *)(*(long *)(param_2 + 0x1a) - lVar1 >> 3);
        pfVar12 = (float *)(((long)pfVar12 - (long)pfVar4 >> 2) * -0x5555555555555555);
        do {
          if (pfVar9 == (float *)0x0) {
            uVar5 = 0;
          }
          else {
            if (pfVar11 <= (float *)((long)pfVar9 - 1U)) goto LAB_10a24d7d8;
            uVar5 = *(long *)(lVar1 + (long)((long)pfVar9 - 1U) * 8) + 1;
          }
          uVar13 = uVar10 - 1;
          if (pfVar9 < pfVar11) {
            uVar13 = *(ulong *)(lVar1 + (long)pfVar9 * 8);
          }
          uVar16 = 0;
          if (uVar5 <= uVar13) {
            uVar16 = 0;
            if (uVar5 <= uVar10) {
              uVar16 = uVar10 - uVar5;
            }
            if (uVar16 <= uVar13 - uVar5) goto LAB_10a24d7d8;
            lVar14 = (uVar13 - uVar5) + 1;
            pfVar6 = (float *)(lVar8 + 0x78 + uVar5 * 200);
            uVar16 = 0;
            do {
              uVar17 = NEON_rev64(*(undefined8 *)(pfVar6 + -2),4);
              fVar18 = (float)uVar17 * (float)*(undefined8 *)(pfVar6 + -2);
              fVar19 = (float)((ulong)uVar17 >> 0x20) * *pfVar6;
              uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar19,fVar18)) &
                                CONCAT44(-(uint)((float)(uVar16 >> 0x20) < fVar19),
                                         -(uint)((float)uVar16 < fVar18));
              pfVar6 = pfVar6 + 0x32;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          fVar18 = (float)(uVar16 >> 0x20);
          if ((0.0 < (float)uVar16) || (0.0 < fVar18)) {
            if (pfVar12 < pfVar9 || (long)pfVar12 - (long)pfVar9 == 0) {
LAB_10a24d7d8:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a24d7dc);
              (*pcVar2)();
            }
            *(ulong *)(pfVar4 + (long)pfVar9 * 3) = uVar16;
            (pfVar4 + (long)pfVar9 * 3)[2] = param_1 * (fVar18 + (float)uVar16);
          }
          pfVar9 = (float *)((long)pfVar9 + 1);
        } while (pfVar9 != pfVar15);
      }
    }
    return;
  }
  if (pfVar4 != (float *)0x0) {
    *(float **)(param_2 + 0x48) = pfVar4;
    __ZdlPv();
    lVar8 = 0;
    param_2[0x46] = 0.0;
    param_2[0x47] = 0.0;
    param_2[0x48] = 0.0;
    param_2[0x49] = 0.0;
    param_2[0x4a] = 0.0;
    param_2[0x4b] = 0.0;
  }
  if (pfVar15 < (float *)0x1555555555555556) {
    param_3 = (float *)((lVar8 >> 2) * 0x5555555555555556);
    if (param_3 < pfVar15 || (long)param_3 - (long)pfVar15 == 0) {
      param_3 = pfVar15;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar8 >> 2) * -0x5555555555555555)) {
      param_3 = (float *)0x1555555555555555;
    }
    if (param_3 < (float *)0x1555555555555556) {
      pfVar4 = param_2 + 0x46;
      FUN_10a20c864();
      *(float **)(param_2 + 0x46) = pfVar4;
      *(float **)(param_2 + 0x4a) = pfVar4 + (long)param_3 * 3;
      pfVar12 = pfVar4 + (long)pfVar15 * 3;
      pfVar9 = pfVar4;
      do {
        *pfVar9 = fVar18;
        pfVar9[1] = fVar19;
        pfVar9[2] = fVar20;
        pfVar9 = pfVar9 + 3;
      } while (pfVar9 != pfVar12);
      goto LAB_10a24d6a8;
    }
  }
  FUN_10a20c850();
  pfVar4[6] = 1.0;
  if (*(long *)(pfVar4 + 4) != 0) {
    bVar3 = true;
    if ((1.0 <= param_3[2] - *param_3) && (bVar3 = false, !NAN(param_3[3] - param_3[1]))) {
      bVar3 = param_3[3] - param_3[1] < 1.0;
    }
    if (bVar3) {
      pfVar4[6] = 0.0;
      if (*(long *)(pfVar4 + 4) != 0) {
        pfVar15 = *(float **)(pfVar4 + 2);
        plVar7 = *(long **)(*(long *)pfVar4 + 8);
        lVar8 = *(long *)pfVar15;
        *(long **)(lVar8 + 8) = plVar7;
        *plVar7 = lVar8;
        pfVar4[4] = 0.0;
        pfVar4[5] = 0.0;
        while (pfVar15 != pfVar4) {
          pfVar9 = *(float **)(pfVar15 + 2);
          func_0x00010a208aac(pfVar15 + 4);
          __ZdlPv(pfVar15);
          pfVar15 = pfVar9;
        }
      }
      return;
    }
    for (pfVar15 = *(float **)(pfVar4 + 2); pfVar15 != pfVar4; pfVar15 = *(float **)(pfVar15 + 2)) {
      FUN_10a24d554(uVar10,pfVar15 + 4);
    }
    FUN_10a209054(pfVar4);
    if ((0.0 < (float)uVar10) && (pfVar15 = *(float **)(pfVar4 + 2), pfVar15 != pfVar4)) {
      fVar19 = (param_3[3] - param_3[1]) / (float)uVar10;
      fVar18 = 0.0;
      do {
        while (*(long *)(pfVar15 + 0x10) == *(long *)(pfVar15 + 0x12)) {
LAB_10a24d90c:
          pfVar15 = *(float **)(pfVar15 + 2);
          if (pfVar15 == pfVar4) {
            if (fVar18 != 0.0) {
              fVar18 = (param_3[2] - *param_3) / fVar18;
              if (fVar19 <= fVar18) {
                fVar18 = fVar19;
              }
              pfVar4[6] = fVar18;
              return;
            }
            return;
          }
        }
        pfVar9 = *(float **)(pfVar15 + 0x28);
        pfVar12 = *(float **)(pfVar15 + 0x2a);
        if (pfVar9 != pfVar12) {
          fVar20 = 0.0;
          pfVar11 = pfVar9;
          do {
            pfVar6 = pfVar11 + 2;
            if (fVar20 <= pfVar11[1] - *pfVar11) {
              fVar20 = pfVar11[1] - *pfVar11;
            }
            pfVar11 = pfVar6;
          } while (pfVar6 != pfVar12);
          if (fVar18 < fVar20) {
            fVar18 = 0.0;
            do {
              pfVar11 = pfVar9 + 2;
              if (fVar18 <= pfVar9[1] - *pfVar9) {
                fVar18 = pfVar9[1] - *pfVar9;
              }
              pfVar9 = pfVar11;
            } while (pfVar11 != pfVar12);
          }
          goto LAB_10a24d90c;
        }
        if (0.0 <= fVar18) goto LAB_10a24d90c;
        pfVar15 = *(float **)(pfVar15 + 2);
        fVar18 = 0.0;
        if (pfVar15 == pfVar4) {
          return;
        }
      } while( true );
    }
  }
  return;
}



/* Entry: 10a24d7e0; end: 10a24d9ff;  */

void FUN_10a24d7e0(undefined8 param_1,long *param_2,float *param_3)

{
  float *pfVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar7;
  
  *(undefined4 *)(param_2 + 3) = 0x3f800000;
  if (param_2[2] != 0) {
    bVar2 = true;
    if ((1.0 <= param_3[2] - *param_3) && (bVar2 = false, !NAN(param_3[3] - param_3[1]))) {
      bVar2 = param_3[3] - param_3[1] < 1.0;
    }
    if (bVar2) {
      *(undefined4 *)(param_2 + 3) = 0;
      if (param_2[2] != 0) {
        plVar8 = (long *)param_2[1];
        plVar3 = *(long **)(*param_2 + 8);
        lVar4 = *plVar8;
        *(long **)(lVar4 + 8) = plVar3;
        *plVar3 = lVar4;
        param_2[2] = 0;
        while (plVar8 != param_2) {
          plVar3 = (long *)plVar8[1];
          func_0x00010a208aac(plVar8 + 2);
          __ZdlPv(plVar8);
          plVar8 = plVar3;
        }
      }
      return;
    }
    for (plVar8 = (long *)param_2[1]; plVar8 != param_2; plVar8 = (long *)plVar8[1]) {
      FUN_10a24d554(param_1,plVar8 + 2);
    }
    FUN_10a209054(param_2);
    if ((0.0 < (float)param_1) && (plVar8 = (long *)param_2[1], plVar8 != param_2)) {
      fVar9 = (param_3[3] - param_3[1]) / (float)param_1;
      fVar10 = 0.0;
      do {
        while (plVar8[8] != plVar8[9]) {
          pfVar5 = (float *)plVar8[0x14];
          pfVar1 = (float *)plVar8[0x15];
          if (pfVar5 != pfVar1) {
            fVar11 = 0.0;
            pfVar6 = pfVar5;
            do {
              pfVar7 = pfVar6 + 2;
              if (fVar11 <= pfVar6[1] - *pfVar6) {
                fVar11 = pfVar6[1] - *pfVar6;
              }
              pfVar6 = pfVar7;
            } while (pfVar7 != pfVar1);
            if (fVar10 < fVar11) {
              fVar10 = 0.0;
              do {
                pfVar6 = pfVar5 + 2;
                if (fVar10 <= pfVar5[1] - *pfVar5) {
                  fVar10 = pfVar5[1] - *pfVar5;
                }
                pfVar5 = pfVar6;
              } while (pfVar6 != pfVar1);
            }
            break;
          }
          if (0.0 <= fVar10) break;
          plVar8 = (long *)plVar8[1];
          fVar10 = 0.0;
          if (plVar8 == param_2) {
            return;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != param_2);
      if (fVar10 != 0.0) {
        fVar10 = (param_3[2] - *param_3) / fVar10;
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        *(float *)(param_2 + 3) = fVar10;
      }
    }
  }
  return;
}



/* Entry: 10a24da00; end: 10a24e353;  */

void FUN_10a24da00(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  int *piVar24;
  int *piVar25;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack_17c;
  long lStack_170;
  float afStack_168 [2];
  long lStack_160;
  undefined1 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  int *piStack_118;
  int *piStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  int *piVar26;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    uVar7 = param_1;
    FUN_10a24d004();
    if (uVar7 != 0) {
      uVar18 = 0;
      uVar22 = 0;
      do {
        lVar21 = *(long *)(param_1 + 0x48);
        lVar20 = *(long *)(param_1 + 0x50);
        lVar11 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30);
        if (lVar11 != 0) {
          uVar10 = (lVar11 >> 3) * -0x70a3d70a3d70a3d7;
          if ((lVar21 != lVar20 && uVar18 <= uVar10) && (lVar21 == lVar20 || uVar10 - uVar18 != 0))
          {
            lStack_150 = (lVar20 - lVar21 >> 3) * -0x5555555555555555 + -1;
            FUN_10a0fd7d0(param_1 + 0x78,&lStack_150);
            uVar10 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) *
                     -0x70a3d70a3d70a3d7;
          }
          else if (uVar10 < uVar18 || uVar10 - uVar18 == 0) goto LAB_10a24daec;
          lStack_150 = uVar10 - 1;
          FUN_10a0fd7d0(param_1 + 0x60,&lStack_150);
          lVar21 = *(long *)(param_1 + 0x48);
          lVar20 = *(long *)(param_1 + 0x50);
        }
LAB_10a24daec:
        lStack_148 = *(long *)(param_1 + 0xb0);
        lStack_150 = 0;
        lStack_140 = CONCAT71(lStack_140._1_7_,1);
        FUN_10a20699c(param_1 + 0x48,&lStack_150);
        lVar11 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3;
        uVar18 = lVar11 * -0x70a3d70a3d70a3d7;
        lVar27 = *(long *)(param_1 + 0x20);
        if (lVar27 != param_1 + 0x18) {
          lStack_170 = 0;
          fVar31 = 0.0;
          do {
            lVar28 = *(long *)(lVar27 + 0x10);
            uVar19 = (ulong)*(int *)(lVar28 + 0x74);
            uVar10 = uVar22 - uVar19;
            if (uVar19 <= uVar22) {
              lVar14 = *(long *)(lVar28 + 0x40);
              uVar13 = *(long *)(lVar28 + 0x48) - lVar14 >> 2;
              if (uVar22 <= uVar19 + uVar13) {
                if (*(char *)(lVar28 + 0x70) == '\x01') {
                  if (uVar10 < uVar13) {
                    uVar15 = *(uint *)(lVar14 + uVar10 * 4);
                  }
                  else {
                    uVar15 = 0;
                  }
                  if (uVar22 == uVar19) {
                    iVar9 = (int)((ulong)(*(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10)) >> 3)
                            * -0x3d70a3d7;
                  }
                  else {
                    if (uVar13 <= uVar10 - 1) goto LAB_10a24e2b4;
                    iVar9 = *(int *)(lVar14 + (uVar10 - 1) * 4);
                  }
                  uVar17 = iVar9 - 1;
                }
                else {
                  if (uVar22 == uVar19) {
                    uVar15 = 0;
                  }
                  else {
                    if (uVar13 <= uVar10 - 1) goto LAB_10a24e2b4;
                    uVar15 = *(int *)(lVar14 + (uVar10 - 1) * 4) + 1;
                  }
                  if (uVar10 < uVar13) {
                    uVar17 = *(uint *)(lVar14 + uVar10 * 4);
                  }
                  else {
                    uVar17 = (int)((ulong)(*(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10)) >> 3
                                  ) * -0x3d70a3d7 - 1;
                  }
                }
                if ((*(long *)(param_1 + 0x10) == 0) ||
                   (*(char *)(*(long *)(param_1 + 8) + 0x70) != '\x01')) {
                  lVar14 = *(long *)(lVar28 + 0x10);
                  lVar12 = *(long *)(lVar28 + 0x18);
                  uVar10 = (lVar12 - lVar14 >> 3) * -0x70a3d70a3d70a3d7;
                  if ((int)uVar15 < (int)uVar10 && (int)uVar15 <= (int)uVar17) {
                    uVar19 = 0;
                    uStack_17c = 0;
                    uVar13 = (long)(int)uVar15;
                    do {
                      if ((*(ulong *)(lVar28 + 0x60) <= uVar13) ||
                         ((*(ulong *)(*(long *)(lVar28 + 0x58) + (uVar13 >> 6) * 8) >>
                           (uVar13 & 0x3f) & 1) == 0)) {
                        if (uVar10 <= uVar13) goto LAB_10a24e2b4;
                        plVar23 = (long *)(lVar14 + uVar13 * 200);
                        if ((char)plVar23[6] == '\x01') {
                          uVar10 = plVar23[5];
                        }
                        else {
                          uVar10 = 0xffffffffffffffff;
                        }
                        if (uVar19 <= uVar10) {
                          uStack_17c = (undefined4)plVar23[0x16];
                          uVar19 = uVar10;
                        }
                        uVar10 = (lVar12 - lVar14 >> 3) * -0x70a3d70a3d70a3d7;
                        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a24e2b4;
                        lStack_150 = *plVar23;
                        lStack_140 = 0;
                        uStack_138 = 0;
                        lStack_148 = 0;
                        FUN_10a0ca588(&lStack_148,plVar23[1],plVar23[2],plVar23[2] - plVar23[1] >> 2
                                     );
                        lStack_130 = plVar23[4];
                        uStack_120 = plVar23[6];
                        lStack_128 = plVar23[5];
                        piStack_110 = (int *)0x0;
                        uStack_108 = 0;
                        piStack_118 = (int *)0x0;
                        FUN_10a0e9a40(&piStack_118,plVar23[7],plVar23[8],
                                      plVar23[8] - plVar23[7] >> 2);
                        piVar24 = piStack_110;
                        plStack_f8 = (long *)plVar23[0xb];
                        lStack_100 = plVar23[10];
                        if (plVar23[0xb] != 0) {
                          plVar1 = (long *)(plVar23[0xb] + 8);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar4) {
                              *plVar1 = *plVar1 + 1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                        }
                        lStack_e8 = plVar23[0xd];
                        lStack_f0 = plVar23[0xc];
                        lStack_d8 = plVar23[0xf];
                        lStack_e0 = plVar23[0xe];
                        lVar14 = plVar23[0x15];
                        lStack_b0 = plVar23[0x14];
                        lStack_98 = plVar23[0x17];
                        lStack_a0 = plVar23[0x16];
                        uStack_90 = (undefined1)plVar23[0x18];
                        uStack_a8._0_4_ = (float)lVar14;
                        fVar29 = (float)uStack_a8;
                        uStack_a8._4_4_ = (float)((ulong)lVar14 >> 0x20);
                        fVar32 = (float)plVar23[0x10];
                        fVar30 = (fVar31 + uStack_a8._4_4_) - fVar32;
                        fVar33 = *(float *)(lVar28 + 0x78);
                        uStack_d0 = CONCAT44((float)((ulong)plVar23[0x10] >> 0x20) + 0.0,
                                             fVar32 + fVar30);
                        uStack_c8 = CONCAT44((float)((ulong)plVar23[0x11] >> 0x20) + 0.0,
                                             (float)plVar23[0x11] + fVar30);
                        uStack_c0 = CONCAT44((float)((ulong)plVar23[0x12] >> 0x20) + 0.0,
                                             (float)plVar23[0x12] + fVar30);
                        uStack_b8 = CONCAT44((float)((ulong)plVar23[0x13] >> 0x20) + 0.0,
                                             (float)plVar23[0x13] + fVar30);
                        uStack_a8 = lVar14;
                        if ((piStack_118 != piStack_110) &&
                           (piVar25 = piStack_118, lVar14 = lStack_128, (uStack_120 & 1) != 0)) {
                          do {
                            piVar26 = piVar25 + 1;
                            afStack_168[0] = fVar31 + (float)*piVar25;
                            afStack_168[1] = 0.0;
                            uStack_158 = 1;
                            lStack_160 = lVar14 + 1;
                            FUN_10a20699c(param_1 + 0x48,afStack_168);
                            piVar25 = piVar26;
                            lVar14 = lVar14 + 1;
                          } while (piVar26 != piVar24);
                        }
                        fVar29 = fVar29 + fVar33;
                        fVar31 = fVar31 + fVar29;
                        if (fVar29 <= 0.0) {
                          if (((((char)uStack_120 == '\x01') &&
                               (lVar14 = *(long *)(param_1 + 0x50),
                               *(long *)(param_1 + 0x48) != lVar14)) &&
                              (*(char *)(lVar14 + -8) == '\x01')) &&
                             (*(long *)(lVar14 + -0x10) == lStack_128)) {
                            *(long *)(lVar14 + -0x10) =
                                 *(long *)(lVar14 + -0x10) + (long)(int)lStack_a0;
                          }
                        }
                        else {
                          bVar8 = 0;
                          if (*(long *)(param_1 + 0x10) != 0) {
                            bVar8 = *(byte *)(*(long *)(param_1 + 8) + 0x70);
                          }
                          FUN_10a253648(fVar31,bVar8 & 1,lVar28 + 0x10,param_1,uVar13,uVar19,
                                        uStack_17c);
                        }
                        lStack_98 = lStack_170;
                        FUN_10a20a72c(param_1 + 0x30,&lStack_150);
                        plVar23 = plStack_f8;
                        if (plStack_f8 != (long *)0x0) {
                          plVar1 = plStack_f8 + 1;
                          do {
                            lVar14 = *plVar1;
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar4) {
                              *plVar1 = lVar14 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (lVar14 == 0) {
                            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                          }
                        }
                        if (piStack_118 != (int *)0x0) {
                          piStack_110 = piStack_118;
                          __ZdlPv();
                        }
                        if (lStack_148 != 0) {
                          lStack_140 = lStack_148;
                          __ZdlPv();
                        }
                        lVar14 = *(long *)(lVar28 + 0x10);
                        lVar12 = *(long *)(lVar28 + 0x18);
                      }
                      uVar2 = uVar13 + 1;
                      uVar10 = (lVar12 - lVar14 >> 3) * -0x70a3d70a3d70a3d7;
                      bVar4 = (long)uVar13 < (long)(int)uVar17;
                      uVar13 = uVar2;
                    } while ((long)uVar2 < (long)(int)uVar10 && bVar4);
                  }
                }
                else if ((-1 < (int)uVar17) && ((int)uVar15 <= (int)uVar17)) {
                  uVar19 = 0;
                  uVar5 = 0;
                  uVar10 = (ulong)uVar17;
                  do {
                    if ((*(ulong *)(lVar28 + 0x60) <= uVar10) ||
                       ((*(ulong *)(*(long *)(lVar28 + 0x58) + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f)
                        & 1) == 0)) {
                      uVar13 = (*(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10) >> 3) *
                               -0x70a3d70a3d70a3d7;
                      if (uVar13 < uVar10 || uVar13 - uVar10 == 0) goto LAB_10a24e2b4;
                      plVar23 = (long *)(*(long *)(lVar28 + 0x10) + uVar10 * 200);
                      if ((char)plVar23[6] == '\x01') {
                        uVar13 = plVar23[5];
                      }
                      else {
                        uVar13 = 0xffffffffffffffff;
                      }
                      if (uVar19 <= uVar13) {
                        uVar5 = (undefined4)plVar23[0x16];
                        uVar19 = uVar13;
                      }
                      lStack_150 = *plVar23;
                      lStack_140 = 0;
                      uStack_138 = 0;
                      lStack_148 = 0;
                      FUN_10a0ca588(&lStack_148,plVar23[1],plVar23[2],plVar23[2] - plVar23[1] >> 2);
                      lStack_130 = plVar23[4];
                      uStack_120 = plVar23[6];
                      lStack_128 = plVar23[5];
                      piStack_110 = (int *)0x0;
                      uStack_108 = 0;
                      piStack_118 = (int *)0x0;
                      FUN_10a0e9a40(&piStack_118,plVar23[7],plVar23[8],plVar23[8] - plVar23[7] >> 2)
                      ;
                      plStack_f8 = (long *)plVar23[0xb];
                      lStack_100 = plVar23[10];
                      if (plVar23[0xb] != 0) {
                        plVar1 = (long *)(plVar23[0xb] + 8);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar4) {
                            *plVar1 = *plVar1 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      lStack_e8 = plVar23[0xd];
                      lStack_f0 = plVar23[0xc];
                      lStack_d8 = plVar23[0xf];
                      lStack_e0 = plVar23[0xe];
                      lVar14 = plVar23[0x15];
                      lStack_b0 = plVar23[0x14];
                      lStack_98 = plVar23[0x17];
                      lStack_a0 = plVar23[0x16];
                      uStack_90 = (undefined1)plVar23[0x18];
                      uStack_a8._0_4_ = (float)lVar14;
                      uStack_a8._4_4_ = (float)((ulong)lVar14 >> 0x20);
                      fVar32 = (float)uStack_a8 + *(float *)(lVar28 + 0x78);
                      fVar31 = fVar31 - fVar32;
                      fVar30 = (float)plVar23[0x10];
                      fVar29 = (uStack_a8._4_4_ + fVar31) - fVar30;
                      uStack_d0 = CONCAT44((float)((ulong)plVar23[0x10] >> 0x20) + 0.0,
                                           fVar30 + fVar29);
                      uStack_c8 = CONCAT44((float)((ulong)plVar23[0x11] >> 0x20) + 0.0,
                                           (float)plVar23[0x11] + fVar29);
                      uStack_c0 = CONCAT44((float)((ulong)plVar23[0x12] >> 0x20) + 0.0,
                                           (float)plVar23[0x12] + fVar29);
                      uStack_b8 = CONCAT44((float)((ulong)plVar23[0x13] >> 0x20) + 0.0,
                                           (float)plVar23[0x13] + fVar29);
                      uStack_a8 = lVar14;
                      if ((piStack_118 != piStack_110) &&
                         (piVar24 = piStack_110, lVar14 = lStack_128, (uStack_120 & 1) != 0)) {
                        do {
                          piVar24 = piVar24 + -1;
                          afStack_168[0] = fVar31 + (float)*piVar24;
                          afStack_168[1] = 0.0;
                          uStack_158 = 1;
                          lStack_160 = lVar14 + 1;
                          FUN_10a20699c(param_1 + 0x48,afStack_168);
                          lVar14 = lVar14 + 1;
                        } while (piVar24 != piStack_118);
                      }
                      if (fVar32 <= 0.0) {
                        if (((((char)uStack_120 == '\x01') &&
                             (lVar14 = *(long *)(param_1 + 0x50),
                             *(long *)(param_1 + 0x48) != lVar14)) &&
                            (*(char *)(lVar14 + -8) == '\x01')) &&
                           (*(long *)(lVar14 + -0x10) == lStack_128)) {
                          *(long *)(lVar14 + -0x10) =
                               *(long *)(lVar14 + -0x10) + (long)(int)lStack_a0;
                        }
                      }
                      else {
                        bVar8 = 0;
                        if (*(long *)(param_1 + 0x10) != 0) {
                          bVar8 = *(byte *)(*(long *)(param_1 + 8) + 0x70);
                        }
                        FUN_10a253648(fVar31,bVar8 & 1,lVar28 + 0x10,param_1,uVar10,uVar19,uVar5);
                      }
                      lStack_98 = lStack_170;
                      FUN_10a20a72c(param_1 + 0x30,&lStack_150);
                      plVar23 = plStack_f8;
                      if (plStack_f8 != (long *)0x0) {
                        plVar1 = plStack_f8 + 1;
                        do {
                          lVar14 = *plVar1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar4) {
                            *plVar1 = lVar14 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (lVar14 == 0) {
                          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                        }
                      }
                      if (piStack_118 != (int *)0x0) {
                        piStack_110 = piStack_118;
                        __ZdlPv();
                      }
                      if (lStack_148 != 0) {
                        lStack_140 = lStack_148;
                        __ZdlPv();
                      }
                    }
                    bVar4 = (long)(ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) <
                            (long)uVar10;
                    uVar10 = uVar10 - 1;
                  } while (bVar4);
                }
                lStack_170 = lStack_170 + 1;
              }
            }
            lVar27 = *(long *)(lVar27 + 8);
          } while (lVar27 != param_1 + 0x18);
          uVar10 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) *
                   -0x70a3d70a3d70a3d7;
          lVar27 = uVar10 + lVar11 * 0x70a3d70a3d70a3d7;
          if (uVar18 <= uVar10 && lVar27 != 0) {
            pcVar16 = (char *)(*(long *)(param_1 + 0x30) + lVar11 * 8 + 0x30);
            uVar10 = 0xffffffffffffffff;
            do {
              uVar19 = uVar10;
              if ((*pcVar16 == '\x01') &&
                 (uVar19 = *(ulong *)(pcVar16 + -8), uVar10 <= *(ulong *)(pcVar16 + -8))) {
                uVar19 = uVar10;
              }
              pcVar16 = pcVar16 + 200;
              lVar27 = lVar27 + -1;
              uVar10 = uVar19;
            } while (lVar27 != 0);
            if (uVar19 != 0xffffffffffffffff) {
              if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) <=
                  (ulong)(lVar20 - lVar21)) {
LAB_10a24e2b4:
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10a24e2b8);
                (*pcVar6)();
              }
              lVar21 = *(long *)(param_1 + 0x48) + (lVar20 - lVar21);
              *(ulong *)(lVar21 + 8) = uVar19;
              *(undefined1 *)(lVar21 + 0x10) = 1;
            }
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar7);
    }
    FUN_10a253434(param_1);
  }
  return;
}



/* Entry: 10a24e354; end: 10a24e643;  */

undefined8 *
FUN_10a24e354(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  ulong uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar5 = param_4;
  FUN_10a24da00();
  puVar6 = (undefined8 *)param_4[6];
  if (puVar6 == (undefined8 *)param_4[7]) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    return puVar5;
  }
  uVar17 = 0;
  lVar11 = (long)param_4[7] - (long)puVar6;
  uVar9 = (lVar11 >> 3) * -0x70a3d70a3d70a3d7;
  pfVar13 = (float *)(puVar6 + 0x14);
  do {
    if (param_4[2] == 0) {
      pfVar14 = (float *)param_4[0x12];
      pfVar15 = (float *)param_4[0x13];
LAB_10a24e3fc:
      if (pfVar15 == pfVar14) goto LAB_10a24e614;
      fVar18 = pfVar13[-2] - *pfVar13;
      fVar20 = *pfVar14;
    }
    else {
      pfVar14 = (float *)param_4[0x12];
      pfVar15 = (float *)param_4[0x13];
      if (*(char *)(param_4[1] + 0x70) != '\x01') goto LAB_10a24e3fc;
      if (pfVar15 == pfVar14) goto LAB_10a24e614;
      fVar18 = pfVar14[1] - pfVar13[-4];
      fVar20 = *pfVar13;
    }
    if (param_2 < param_3 * (fVar18 - fVar20)) {
      if ((uVar17 == 0) || (*(int *)(param_5 + 0x18) < 0x152)) goto LAB_10a24e4b8;
      break;
    }
    uVar17 = uVar17 + 1;
    pfVar13 = pfVar13 + 0x32;
    if (uVar9 - uVar17 == 0) {
      *param_1 = *(undefined8 *)((long)puVar6 + lVar11 + -200);
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      lVar7 = *(long *)((long)puVar6 + lVar11 + -0xc0);
      lVar8 = *(long *)((long)puVar6 + lVar11 + -0xb8);
      FUN_10a0ca588(param_1 + 1,lVar7,lVar8,lVar8 - lVar7 >> 2);
      param_1[4] = *(undefined8 *)((long)puVar6 + lVar11 + -0xa8);
      uVar19 = *(undefined8 *)((long)puVar6 + lVar11 + -0x98);
      uVar10 = *(undefined8 *)((long)puVar6 + lVar11 + -0xa0);
      param_1[7] = 0;
      param_1[6] = uVar19;
      param_1[5] = uVar10;
      param_1[8] = 0;
      param_1[9] = 0;
      FUN_10a0e9a40();
      lVar7 = *(long *)((long)puVar6 + lVar11 + -0x70);
      uVar10 = *(undefined8 *)((long)puVar6 + lVar11 + -0x78);
      param_1[0xb] = *(undefined8 *)((long)puVar6 + lVar11 + -0x70);
      param_1[10] = uVar10;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar10 = *(undefined8 *)((long)puVar6 + lVar11 + -0x68);
      uVar21 = *(undefined8 *)((long)puVar6 + lVar11 + -0x50);
      uVar19 = *(undefined8 *)((long)puVar6 + lVar11 + -0x58);
      param_1[0xd] = *(undefined8 *)((long)puVar6 + lVar11 + -0x60);
      param_1[0xc] = uVar10;
      param_1[0xf] = uVar21;
      param_1[0xe] = uVar19;
      uVar19 = *(undefined8 *)((long)puVar6 + lVar11 + -0x30);
      uVar10 = *(undefined8 *)((long)puVar6 + lVar11 + -0x38);
      uVar22 = *(undefined8 *)((long)puVar6 + lVar11 + -0x20);
      uVar21 = *(undefined8 *)((long)puVar6 + lVar11 + -0x28);
      uVar24 = *(undefined8 *)((long)puVar6 + lVar11 + -0x10);
      uVar23 = *(undefined8 *)((long)puVar6 + lVar11 + -0x18);
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((long)puVar6 + lVar11 + -8);
      param_1[0x15] = uVar22;
      param_1[0x14] = uVar21;
      param_1[0x17] = uVar24;
      param_1[0x16] = uVar23;
      param_1[0x13] = uVar19;
      param_1[0x12] = uVar10;
      uVar10 = *(undefined8 *)((long)puVar6 + lVar11 + -0x48);
      param_1[0x11] = *(undefined8 *)((long)puVar6 + lVar11 + -0x40);
      param_1[0x10] = uVar10;
      *(undefined1 *)(param_1 + 0x19) = 1;
      return param_1;
    }
  } while( true );
  while( true ) {
    if (*(char *)(puVar6 + (uVar12 & 0xffffffff) * 0x19 + 0x18) != '\x01') goto LAB_10a24e4b8;
    bVar3 = (long)uVar17 < 2;
    uVar17 = uVar12;
    if (bVar3) break;
    uVar12 = uVar17 - 1;
    if (uVar9 < (uVar12 & 0xffffffff) || uVar9 - (uVar12 & 0xffffffff) == 0) goto LAB_10a24e614;
  }
  iVar16 = 0;
  goto LAB_10a24e4d4;
LAB_10a24e4b8:
  iVar16 = (int)uVar17;
  if (0 < iVar16) {
    uVar17 = (ulong)(iVar16 - 1);
    if (uVar9 < uVar17 || uVar9 - uVar17 == 0) {
LAB_10a24e614:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a24e618);
      (*pcVar4)();
    }
    puVar6 = puVar6 + uVar17 * 0x19;
  }
LAB_10a24e4d4:
  uVar10 = *puVar6;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  FUN_10a0ca588(&uStack_120,puVar6[1],puVar6[2],(long)(puVar6[2] - puVar6[1]) >> 2);
  uStack_108 = puVar6[4];
  uStack_f8 = puVar6[6];
  uStack_100 = puVar6[5];
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  FUN_10a0e9a40(&uStack_f0,puVar6[7],puVar6[8],(long)(puVar6[8] - puVar6[7]) >> 2);
  uStack_d0 = puVar6[0xb];
  uStack_d8 = puVar6[10];
  if (puVar6[0xb] != 0) {
    plVar1 = (long *)(puVar6[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c0 = puVar6[0xd];
  uStack_c8 = puVar6[0xc];
  uStack_b0 = puVar6[0xf];
  uStack_b8 = puVar6[0xe];
  uStack_a0 = puVar6[0x11];
  uStack_a8 = puVar6[0x10];
  uStack_80 = puVar6[0x15];
  uStack_88 = puVar6[0x14];
  uStack_70 = puVar6[0x17];
  uStack_78 = puVar6[0x16];
  uStack_68 = *(undefined1 *)(puVar6 + 0x18);
  uStack_90 = puVar6[0x13];
  uStack_98 = puVar6[0x12];
  func_0x00010a209ec8(param_4 + 6,(long)iVar16);
  FUN_10a253264(param_4);
  puVar6 = param_4;
  FUN_10a253434(param_4);
  *(undefined1 *)(param_4 + 0x22) = 1;
  *param_1 = uVar10;
  param_1[2] = uStack_118;
  param_1[1] = uStack_120;
  param_1[4] = uStack_108;
  param_1[3] = uStack_110;
  param_1[6] = uStack_f8;
  param_1[5] = uStack_100;
  param_1[8] = uStack_e8;
  param_1[7] = uStack_f0;
  param_1[10] = uStack_d8;
  param_1[9] = uStack_e0;
  param_1[0xb] = uStack_d0;
  param_1[0xd] = uStack_c0;
  param_1[0xc] = uStack_c8;
  param_1[0xf] = uStack_b0;
  param_1[0xe] = uStack_b8;
  param_1[0x15] = uStack_80;
  param_1[0x14] = uStack_88;
  param_1[0x17] = uStack_70;
  param_1[0x16] = uStack_78;
  *(undefined1 *)(param_1 + 0x18) = uStack_68;
  param_1[0x11] = uStack_a0;
  param_1[0x10] = uStack_a8;
  param_1[0x13] = uStack_90;
  param_1[0x12] = uStack_98;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return puVar6;
}



/* Entry: 10a24e644; end: 10a24e957;  */

undefined8 *
FUN_10a24e644(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar7 = param_4;
  FUN_10a24da00();
  plVar14 = param_4 + 6;
  puVar3 = (undefined8 *)*plVar14;
  if (puVar3 == (undefined8 *)param_4[7]) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  else {
    lVar8 = (long)param_4[7] - (long)puVar3;
    uVar10 = (lVar8 >> 3) * -0x70a3d70a3d70a3d7;
    pcVar11 = (char *)(puVar3 + (uVar10 & 0xffffffff) * 0x19 + 0x31);
    uVar13 = (uVar10 & 0xffffffff) + 2;
    do {
      uVar12 = uVar13;
      uVar13 = uVar12 - 3;
      if ((int)uVar13 < 0) {
        *param_1 = *puVar3;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        FUN_10a0ca588(param_1 + 1,puVar3[1],puVar3[2],(long)(puVar3[2] - puVar3[1]) >> 2);
        param_1[4] = puVar3[4];
        uVar17 = puVar3[6];
        uVar9 = puVar3[5];
        param_1[7] = 0;
        param_1[6] = uVar17;
        param_1[5] = uVar9;
        param_1[8] = 0;
        param_1[9] = 0;
        FUN_10a0e9a40();
        lVar8 = puVar3[0xb];
        uVar9 = puVar3[10];
        param_1[0xb] = puVar3[0xb];
        param_1[10] = uVar9;
        if (lVar8 != 0) {
          plVar14 = (long *)(lVar8 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar9 = puVar3[0xc];
        uVar19 = puVar3[0xf];
        uVar17 = puVar3[0xe];
        param_1[0xd] = puVar3[0xd];
        param_1[0xc] = uVar9;
        param_1[0xf] = uVar19;
        param_1[0xe] = uVar17;
        uVar17 = puVar3[0x13];
        uVar9 = puVar3[0x12];
        uVar20 = puVar3[0x15];
        uVar19 = puVar3[0x14];
        uVar22 = puVar3[0x17];
        uVar21 = puVar3[0x16];
        *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(puVar3 + 0x18);
        param_1[0x15] = uVar20;
        param_1[0x14] = uVar19;
        param_1[0x17] = uVar22;
        param_1[0x16] = uVar21;
        param_1[0x13] = uVar17;
        param_1[0x12] = uVar9;
        uVar9 = puVar3[0x10];
        param_1[0x11] = puVar3[0x11];
        param_1[0x10] = uVar9;
        *(undefined1 *)(param_1 + 0x19) = 1;
        return param_1;
      }
      if ((param_4[2] == 0) || (*(char *)(param_4[1] + 0x70) != '\x01')) {
        if ((param_4[0x13] == param_4[0x12]) ||
           (uVar13 = uVar13 & 0x7fffffff, uVar10 < uVar13 || uVar10 - uVar13 == 0))
        goto LAB_10a24e924;
        fVar16 = *(float *)(param_4[0x12] + 4) - *(float *)(puVar3 + uVar13 * 0x19 + 0x12);
        fVar18 = *(float *)(puVar3 + uVar13 * 0x19 + 0x14);
      }
      else {
        uVar13 = uVar13 & 0x7fffffff;
        if ((uVar10 < uVar13 || uVar10 - uVar13 == 0) ||
           ((float *)param_4[0x13] == (float *)param_4[0x12])) {
LAB_10a24e924:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a24e928);
          (*pcVar6)();
        }
        fVar16 = *(float *)(puVar3 + uVar13 * 0x19 + 0x13) -
                 *(float *)(puVar3 + uVar13 * 0x19 + 0x14);
        fVar18 = *(float *)param_4[0x12];
      }
      pcVar11 = pcVar11 + -200;
      uVar13 = uVar12 - 1;
    } while (param_3 * (fVar16 - fVar18) <= param_2);
    uVar12 = uVar12 - 2;
    uVar15 = uVar12 & 0xffffffff;
    if ((0x151 < *(int *)(param_5 + 0x18)) && (uVar15 <= uVar10 && uVar10 - uVar15 != 0)) {
      uVar2 = uVar10;
      if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
        uVar2 = uVar13;
      }
      do {
        uVar15 = uVar12;
        if (*pcVar11 != '\x01') break;
        uVar12 = uVar12 + 1;
        pcVar11 = pcVar11 + 200;
        uVar15 = uVar2;
      } while (uVar12 <= uVar10 && uVar10 - uVar12 != 0);
      uVar15 = uVar15 & 0xffffffff;
    }
    puVar7 = puVar3 + uVar15 * 0x19;
    if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
      puVar7 = (undefined8 *)((long)puVar3 + lVar8 + -200);
    }
    uVar9 = *puVar7;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    FUN_10a0ca588(&uStack_120,puVar7[1],puVar7[2],(long)(puVar7[2] - puVar7[1]) >> 2);
    uStack_108 = puVar7[4];
    uStack_f8 = puVar7[6];
    uStack_100 = puVar7[5];
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    FUN_10a0e9a40(&uStack_f0,puVar7[7],puVar7[8],(long)(puVar7[8] - puVar7[7]) >> 2);
    uStack_d0 = puVar7[0xb];
    uStack_d8 = puVar7[10];
    if (puVar7[0xb] != 0) {
      plVar1 = (long *)(puVar7[0xb] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_c0 = puVar7[0xd];
    uStack_c8 = puVar7[0xc];
    uStack_b0 = puVar7[0xf];
    uStack_b8 = puVar7[0xe];
    uStack_a0 = puVar7[0x11];
    uStack_a8 = puVar7[0x10];
    uStack_80 = puVar7[0x15];
    uStack_88 = puVar7[0x14];
    uStack_70 = puVar7[0x17];
    uStack_78 = puVar7[0x16];
    uStack_68 = *(undefined1 *)(puVar7 + 0x18);
    uStack_90 = puVar7[0x13];
    uStack_98 = puVar7[0x12];
    FUN_10a208e24(plVar14,*plVar14,*plVar14 + uVar15 * 200);
    FUN_10a253264(param_4);
    puVar7 = param_4;
    FUN_10a253434(param_4);
    *(undefined1 *)(param_4 + 0x22) = 1;
    *param_1 = uVar9;
    param_1[2] = uStack_118;
    param_1[1] = uStack_120;
    param_1[4] = uStack_108;
    param_1[3] = uStack_110;
    param_1[6] = uStack_f8;
    param_1[5] = uStack_100;
    param_1[8] = uStack_e8;
    param_1[7] = uStack_f0;
    param_1[10] = uStack_d8;
    param_1[9] = uStack_e0;
    param_1[0xb] = uStack_d0;
    param_1[0xd] = uStack_c0;
    param_1[0xc] = uStack_c8;
    param_1[0xf] = uStack_b0;
    param_1[0xe] = uStack_b8;
    param_1[0x15] = uStack_80;
    param_1[0x14] = uStack_88;
    param_1[0x17] = uStack_70;
    param_1[0x16] = uStack_78;
    *(undefined1 *)(param_1 + 0x18) = uStack_68;
    param_1[0x11] = uStack_a0;
    param_1[0x10] = uStack_a8;
    param_1[0x13] = uStack_90;
    param_1[0x12] = uStack_98;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return puVar7;
}



/* Entry: 10a24e958; end: 10a24f237;  */

void FUN_10a24e958(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong unaff_x19;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  ulong uStack_170;
  ulong uStack_160;
  undefined8 uStack_150;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  float fStack_110;
  float fStack_10c;
  float fStack_104;
  float fStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  byte bStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  float fStack_a8;
  uint uStack_a4;
  ushort uStack_a0;
  byte bStack_98;
  
  if (*(long *)(param_1 + 0x30) != *(long *)(param_1 + 0x38)) {
    uVar19 = 0;
    lVar13 = *(long *)(param_1 + 0x60);
    lVar12 = *(long *)(param_1 + 0x68) - lVar13;
    do {
      if (uVar19 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(long *)(lVar13 + uVar19 * 8 + -8) + 1;
      }
      if (uVar19 < (ulong)(lVar12 >> 3)) {
        uVar15 = *(ulong *)(lVar13 + uVar19 * 8);
      }
      else {
        uVar15 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) * -0x70a3d70a3d70a3d7
                 - 1;
      }
      fStack_d0 = (float)((uint)fStack_d0 & 0xffffff00);
      bStack_98 = 0;
      uStack_170 = unaff_x19 & 0xffffffffffffff00;
      fStack_110 = (float)((uint)fStack_110 & 0xffffff00);
      bStack_d8 = 0;
      if (uVar18 <= uVar15) {
        bVar4 = false;
        fVar25 = 0.0;
        uStack_160 = 0x7f7fffff;
        do {
          if ((ulong)((*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3) *
                     -0x70a3d70a3d70a3d7) <= uVar18) break;
          lVar13 = *(long *)(param_1 + 0x30) + uVar18 * 200;
          plVar14 = (long *)(lVar13 + 0x50);
          lVar12 = *plVar14;
          if (lVar12 == 0) {
            if ((bStack_98 & 1) != 0) {
LAB_10a24eae4:
              FUN_10a253a80(param_1 + 0x130,&fStack_d0);
              plVar2 = plStack_b0;
              fVar21 = fStack_a8;
              if (bStack_98 == 1) {
                if (plStack_b0 != (long *)0x0) {
                  plVar1 = plStack_b0 + 1;
                  do {
                    lVar12 = *plVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar4) {
                      *plVar1 = lVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar12 == 0) {
                    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                  }
                }
                bVar4 = false;
                bStack_98 = 0;
                goto LAB_10a24ed44;
              }
LAB_10a24ecf8:
              fStack_a8 = fVar21;
              bVar4 = false;
              goto LAB_10a24ed44;
            }
            bVar5 = bStack_d8 & 1;
joined_r0x00010a24eda0:
            fVar21 = fStack_10c;
            if ((bVar5 != 0) &&
               (FUN_10a253a80(param_1 + 0x130,&fStack_110), plVar14 = plStack_f0,
               fVar21 = fStack_10c, bStack_d8 == 1)) {
              if (plStack_f0 != (long *)0x0) {
                plVar2 = plStack_f0 + 1;
                do {
                  lVar13 = *plVar2;
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar13 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                }
              }
              bStack_d8 = 0;
              fVar21 = fStack_10c;
            }
          }
          else {
            lVar10 = lVar12;
            FUN_10a26ab18(lVar12,4);
            if (lVar10 == 0) {
              if (bStack_98 != 0) goto LAB_10a24eae4;
            }
            else if (bStack_98 == 0) {
              bVar4 = false;
LAB_10a24eb44:
              uStack_150 = CONCAT44((*(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac)) +
                                    *(float *)(lVar13 + 0xa8),
                                    *(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac));
              uStack_148 = 0;
              fStack_144 = (float)*(undefined8 *)(lVar13 + 0x60);
              fStack_140 = (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
              plStack_130 = *(long **)(lVar13 + 0x58);
              if (plStack_130 != (long *)0x0) {
                plVar2 = plStack_130 + 1;
                do {
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = *plVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uStack_128 = CONCAT44(*(undefined4 *)(lVar13 + 0x7c),*(undefined4 *)(lVar13 + 0x70));
              uStack_120 = (ushort)bVar4;
              uStack_13c = (int)uVar19;
              lStack_138 = lVar12;
              FUN_10a253c40(&fStack_d0,&uStack_150);
              plVar2 = plStack_130;
              if (plStack_130 != (long *)0x0) {
                plVar1 = plStack_130 + 1;
                do {
                  lVar12 = *plVar1;
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar8) {
                    *plVar1 = lVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plStack_130 + 0x10))(plStack_130);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                }
              }
              uStack_160 = *(ulong *)(lVar13 + 0x60);
            }
            else {
              if ((1e-06 <= ABS(fStack_c0 - *(float *)(lVar13 + 100))) ||
                 (1e-06 <= ABS(fStack_c4 - *(float *)(lVar13 + 0x60)))) {
                bVar8 = false;
              }
              else {
                bVar8 = ABS(fStack_a8 - *(float *)(lVar13 + 0x70)) < 1e-06;
              }
              fVar20 = fStack_c0;
              if (param_2 != 0) {
                uVar11 = uStack_b8;
                FUN_10a2537e0(uStack_b8,plVar14);
                plVar2 = plStack_b0;
                if ((int)uVar11 == 0) {
                  if ((bStack_98 & 1) == 0) {
                    FUN_10a04f808();
                    goto LAB_10a24f1c8;
                  }
                  uStack_150 = CONCAT44(fStack_cc,fStack_d0);
                  fStack_144 = fStack_c4;
                  fStack_140 = fStack_c0;
                  plStack_130 = plStack_b0;
                  lStack_138 = uStack_b8;
                  if (plStack_b0 != (long *)0x0) {
                    plVar1 = plStack_b0 + 1;
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *plVar1 = *plVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  uStack_128 = CONCAT44(uStack_a4,fStack_a8);
                  uStack_120._0_1_ = (undefined1)uStack_a0;
                  uStack_120 = CONCAT11(bVar8,(undefined1)uStack_120);
                  FUN_10a253a80(param_1 + 0x130,&uStack_150);
                  if (bVar8) {
                    uStack_170 = (*(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130) >> 3) *
                                 0x6db6db6db6db6db7 - 1;
                  }
                  if (plVar2 != (long *)0x0) {
                    plVar1 = plVar2 + 1;
                    do {
                      lVar12 = *plVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *plVar1 = lVar12 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar12 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                    }
                  }
                  lVar12 = *plVar14;
                  bVar4 = bVar8;
                  goto LAB_10a24eb44;
                }
                fVar20 = fStack_c0;
                if (bStack_98 == 0) goto LAB_10a24f1c8;
              }
              fVar6 = fStack_c4;
              fVar22 = *(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac);
              if (fStack_d0 <= fVar22) {
                fVar22 = fStack_d0;
              }
              fVar23 = (*(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac)) +
                       *(float *)(lVar13 + 0xa8);
              if (fVar23 <= fStack_cc) {
                fVar23 = fStack_cc;
              }
              uVar24 = *(ulong *)(lVar13 + 0x60);
              uStack_160 = uStack_160 ^
                           (uStack_160 ^ uVar24) &
                           CONCAT44(-(uint)((float)(uStack_160 >> 0x20) < (float)(uVar24 >> 0x20)),
                                    -(uint)((float)uVar24 < (float)uStack_160));
              fStack_c4 = (float)uStack_160;
              fStack_c0 = (float)(uStack_160 >> 0x20);
              fVar21 = *(float *)(lVar13 + 0x70);
              if (*(float *)(lVar13 + 0x70) <= fStack_a8) {
                fVar21 = fStack_a8;
              }
              if (uStack_a4 <= *(uint *)(lVar13 + 0x7c)) {
                uStack_a4 = *(uint *)(lVar13 + 0x7c);
              }
              fStack_d0 = fVar22;
              fStack_cc = fVar23;
              if (!bVar4) goto LAB_10a24ecf8;
              if (((1e-06 <= ABS(fStack_c0 - fVar20)) || (1e-06 <= ABS(fStack_c4 - fVar6))) ||
                 (1e-06 <= ABS(fVar21 - fStack_a8))) {
                uVar24 = (*(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130) >> 3) *
                         0x6db6db6db6db6db7;
                fStack_a8 = fVar21;
                if (uVar24 < uStack_170 || uVar24 - uStack_170 == 0) goto LAB_10a24f1c8;
                bVar4 = false;
                *(undefined1 *)(*(long *)(param_1 + 0x130) + uStack_170 * 0x38 + 0x31) = 0;
                uStack_a0 = uStack_a0 & 0xff00;
              }
              else {
                bVar4 = true;
                fStack_a8 = fVar21;
              }
            }
LAB_10a24ed44:
            bVar5 = bStack_d8;
            lVar12 = *plVar14;
            if (lVar12 == 0) {
              bVar5 = bStack_d8 & 1;
              goto joined_r0x00010a24eda0;
            }
            lVar10 = lVar12;
            FUN_10a26ab18(lVar12,5);
            if (lVar10 == 0) goto joined_r0x00010a24eda0;
            bVar16 = 0;
            if (bVar5 == 0) {
LAB_10a24ef1c:
              uStack_150 = CONCAT44((*(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac)) +
                                    *(float *)(lVar13 + 0xa8),
                                    *(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac));
              uStack_148 = 0;
              fStack_144 = (float)*(undefined8 *)(lVar13 + 0x68);
              fStack_140 = (float)((ulong)*(undefined8 *)(lVar13 + 0x68) >> 0x20);
              plStack_130 = *(long **)(lVar13 + 0x58);
              if (plStack_130 != (long *)0x0) {
                plVar14 = plStack_130 + 1;
                do {
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar8) {
                    *plVar14 = *plVar14 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uStack_128 = CONCAT44(*(undefined4 *)(lVar13 + 0x7c),*(undefined4 *)(lVar13 + 0x70));
              uStack_120 = (ushort)bVar16;
              uStack_13c = (int)uVar19;
              lStack_138 = lVar12;
              FUN_10a253c40(&fStack_110,&uStack_150);
              plVar14 = plStack_130;
              if (plStack_130 != (long *)0x0) {
                plVar2 = plStack_130 + 1;
                do {
                  lVar12 = *plVar2;
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plStack_130 + 0x10))(plStack_130);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                }
              }
              fVar25 = *(float *)(lVar13 + 0x70);
              fVar21 = fStack_10c;
            }
            else {
              if ((1e-06 <= ABS(fStack_100 - *(float *)(lVar13 + 0x6c))) ||
                 (1e-06 <= ABS(fStack_104 - *(float *)(lVar13 + 0x68)))) {
                uVar17 = 0;
              }
              else {
                uVar17 = (uint)(ABS(fVar25 - *(float *)(lVar13 + 0x70)) < 1e-06);
              }
              bVar16 = (byte)uVar17;
              if (param_2 == 0) {
                uVar9 = 1;
              }
              else {
                uVar11 = uStack_f8;
                FUN_10a2537e0(uStack_f8,plVar14);
                uVar9 = (uint)uVar11;
              }
              plVar2 = plStack_f0;
              if ((uVar17 & uVar9) != 1) {
                if ((bStack_d8 & 1) == 0) {
                  FUN_10a04f808();
                  goto LAB_10a24f1c8;
                }
                uStack_150 = CONCAT44(fStack_10c,fStack_110);
                plStack_130 = plStack_f0;
                lStack_138 = uStack_f8;
                if (plStack_f0 != (long *)0x0) {
                  plVar1 = plStack_f0 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar8) {
                      *plVar1 = *plVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                uStack_128 = uStack_e8;
                uStack_120 = uStack_e0;
                if (uVar17 != 0) {
                  uStack_120._0_1_ = (undefined1)uStack_e0;
                  uStack_120 = CONCAT11(1,(undefined1)uStack_120);
                }
                FUN_10a253a80(param_1 + 0x130,&uStack_150);
                if (plVar2 != (long *)0x0) {
                  plVar1 = plVar2 + 1;
                  do {
                    lVar12 = *plVar1;
                    cVar3 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar8) {
                      *plVar1 = lVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar12 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                  }
                }
                lVar12 = *plVar14;
                goto LAB_10a24ef1c;
              }
              if ((bStack_d8 & 1) == 0) {
LAB_10a24f1c8:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10a24f1cc);
                (*pcVar7)();
              }
              fVar20 = *(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac);
              if (fStack_110 <= fVar20) {
                fVar20 = fStack_110;
              }
              fVar21 = (*(float *)(lVar13 + 0x90) - *(float *)(lVar13 + 0xac)) +
                       *(float *)(lVar13 + 0xa8);
              fStack_110 = fVar20;
              if (fVar21 <= fStack_10c) {
                fVar21 = fStack_10c;
              }
            }
          }
          fStack_10c = fVar21;
          bVar8 = uVar18 != uVar15;
          uVar18 = uVar18 + 1;
        } while (bVar8);
        if ((bStack_98 & 1) != 0) {
          FUN_10a253a80(param_1 + 0x130,&fStack_d0);
        }
      }
      if (((bStack_d8 == 1) &&
          (FUN_10a253a80(param_1 + 0x130,&fStack_110), plVar14 = plStack_f0, bStack_d8 == 1)) &&
         (plStack_f0 != (long *)0x0)) {
        plVar2 = plStack_f0 + 1;
        do {
          lVar13 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      plVar14 = plStack_b0;
      if ((bStack_98 == 1) && (plStack_b0 != (long *)0x0)) {
        plVar2 = plStack_b0 + 1;
        do {
          lVar13 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      uVar19 = uVar19 + 1;
      lVar13 = *(long *)(param_1 + 0x60);
      lVar12 = *(long *)(param_1 + 0x68) - lVar13;
      unaff_x19 = uStack_170;
    } while (uVar19 <= (ulong)(lVar12 >> 3));
  }
  return;
}



/* Entry: 10a24f238; end: 10a24f5ef;  */

long * FUN_10a24f238(float param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                    long param_6,int param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 uVar18;
  long *plVar19;
  float *pfVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  float fVar30;
  float unaff_s10;
  float unaff_s11;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uStack_134;
  
  plVar8 = param_2;
  FUN_10a24da00();
  if (1.1920929e-07 <= ABS(param_1 + -1.0)) {
    uVar14 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_2 + 0xbc) >> 0x20) * param_1,
                      (float)*(undefined8 *)((long)param_2 + 0xbc) * param_1);
    *(ulong *)((long)param_2 + 0xbc) = uVar14;
    puVar2 = (undefined8 *)param_2[0x24];
    for (puVar10 = (undefined8 *)param_2[0x23]; puVar10 != puVar2;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc)) {
      *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) * param_1,(float)*puVar10 * param_1);
      uVar14 = (ulong)(uint)(param_1 * *(float *)(puVar10 + 1));
      *(float *)(puVar10 + 1) = param_1 * *(float *)(puVar10 + 1);
    }
    if (param_2[6] != param_2[7]) {
      lVar21 = param_2[0xc];
      if (param_2[0xd] - lVar21 != -8) {
        uVar11 = 0;
        uVar13 = param_2[0xd] - lVar21 >> 3;
        do {
          if (uVar11 == 0) {
            uVar16 = 0;
          }
          else {
            if (uVar13 <= uVar11 - 1) goto LAB_10a24f5ec;
            uVar16 = *(long *)(lVar21 + (uVar11 - 1) * 8) + 1;
          }
          if (uVar11 < uVar13) {
            uVar13 = *(ulong *)(lVar21 + uVar11 * 8);
            lVar21 = param_2[6];
            uVar14 = (param_2[7] - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
          }
          else {
            lVar21 = param_2[6];
            uVar14 = (param_2[7] - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
            uVar13 = uVar14 - 1;
          }
          if (uVar14 <= uVar16) {
LAB_10a24f5ec:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a24f5f0);
            (*pcVar5)();
          }
          fVar26 = param_1 * *(float *)(lVar21 + uVar16 * 200 + 0x80);
          uVar14 = (ulong)(uint)fVar26;
          if (uVar16 <= uVar13) {
            lVar15 = uVar16 * 200 + 0x70;
            do {
              lVar21 = lVar21 + lVar15;
              *(ulong *)(lVar21 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20) * param_1,
                            (float)*(undefined8 *)(lVar21 + 0x18) * param_1);
              *(ulong *)(lVar21 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) * param_1,
                            (float)*(undefined8 *)(lVar21 + 0x10) * param_1);
              uVar17 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7;
              if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10a24f5ec;
              lVar21 = param_2[6] + lVar15;
              *(ulong *)(lVar21 + 0x28) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x28) >> 0x20) * param_1,
                            (float)*(undefined8 *)(lVar21 + 0x28) * param_1);
              *(ulong *)(lVar21 + 0x20) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x20) >> 0x20) * param_1,
                            (float)*(undefined8 *)(lVar21 + 0x20) * param_1);
              uVar17 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7;
              if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10a24f5ec;
              lVar21 = param_2[6] + lVar15;
              fVar34 = (float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20);
              fVar30 = (float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20);
              auVar27._0_4_ = (float)*(undefined8 *)(lVar21 + 0x10) - fVar26;
              auVar27._4_4_ = fVar30 - 0.0;
              auVar27._8_4_ = (float)*(undefined8 *)(lVar21 + 0x18) - fVar26;
              auVar27._12_4_ = fVar34 - 0.0;
              auVar27 = NEON_rev64(auVar27,4);
              *(ulong *)(lVar21 + 0x18) = CONCAT44(fVar34 + 0.0,auVar27._12_4_);
              *(ulong *)(lVar21 + 0x10) = CONCAT44(fVar30 + 0.0,auVar27._4_4_);
              uVar17 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7;
              if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10a24f5ec;
              lVar21 = param_2[6] + lVar15;
              fVar34 = (float)((ulong)*(undefined8 *)(lVar21 + 0x28) >> 0x20);
              fVar30 = (float)((ulong)*(undefined8 *)(lVar21 + 0x20) >> 0x20);
              auVar28._0_4_ = (float)*(undefined8 *)(lVar21 + 0x20) - fVar26;
              auVar28._4_4_ = fVar30 - 0.0;
              auVar28._8_4_ = (float)*(undefined8 *)(lVar21 + 0x28) - fVar26;
              auVar28._12_4_ = fVar34 - 0.0;
              auVar27 = NEON_rev64(auVar28,4);
              *(ulong *)(lVar21 + 0x28) = CONCAT44(fVar34 + 0.0,auVar27._12_4_);
              *(ulong *)(lVar21 + 0x20) = CONCAT44(fVar30 + 0.0,auVar27._4_4_);
              uVar17 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7;
              if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10a24f5ec;
              lVar21 = param_2[6] + lVar15;
              uVar4 = *(undefined8 *)(lVar21 + 0x30);
              *(ulong *)(lVar21 + 0x30) =
                   CONCAT44((float)((ulong)uVar4 >> 0x20) * param_1,(float)uVar4 * param_1);
              lVar21 = param_2[6];
              uVar17 = (param_2[7] - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
              if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10a24f5ec;
              pfVar12 = (float *)(lVar21 + lVar15);
              *(ulong *)(pfVar12 + 0xe) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + 0xe) >> 0x20) * param_1,
                            (float)*(undefined8 *)(pfVar12 + 0xe) * param_1);
              *pfVar12 = param_1 * *pfVar12;
            } while ((uVar16 + 1 < uVar17) &&
                    (lVar15 = lVar15 + 200, bVar6 = uVar16 < uVar13, uVar16 = uVar16 + 1, bVar6));
          }
          lVar21 = param_2[0xf];
          if (uVar11 == 0) {
            uVar13 = 0;
            uVar16 = param_2[0x10] - lVar21 >> 3;
          }
          else {
            uVar16 = param_2[0x10] - lVar21 >> 3;
            if (uVar16 <= uVar11 - 1) goto LAB_10a24f5ec;
            uVar13 = *(long *)(lVar21 + (uVar11 - 1) * 8) + 1;
          }
          if (uVar11 < uVar16) {
            uVar16 = *(ulong *)(lVar21 + uVar11 * 8);
            lVar21 = param_2[9];
            uVar17 = (param_2[10] - lVar21 >> 3) * -0x5555555555555555;
          }
          else {
            lVar21 = param_2[9];
            uVar17 = (param_2[10] - lVar21 >> 3) * -0x5555555555555555;
            uVar16 = uVar17 - 1;
          }
          if (uVar13 < uVar17 && uVar13 <= uVar16) {
            lVar15 = uVar13 * 0x18;
            do {
              *(ulong *)(lVar21 + lVar15) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + lVar15) >> 0x20) * param_1,
                            (float)*(undefined8 *)(lVar21 + lVar15) * param_1);
              lVar21 = param_2[9];
              uVar17 = (param_2[10] - lVar21 >> 3) * -0x5555555555555555;
              if (uVar17 < uVar13 || uVar17 - uVar13 == 0) goto LAB_10a24f5ec;
              *(float *)(lVar21 + lVar15) = *(float *)(lVar21 + lVar15) - fVar26;
              lVar21 = param_2[9];
              uVar17 = uVar13 + 1;
              lVar15 = lVar15 + 0x18;
              bVar6 = uVar13 < uVar16;
              uVar13 = uVar17;
            } while (uVar17 < (ulong)((param_2[10] - lVar21 >> 3) * -0x5555555555555555) && bVar6);
          }
          puVar10 = (undefined8 *)param_2[0x26];
          puVar2 = (undefined8 *)param_2[0x27];
          if (puVar10 != puVar2) {
            fVar26 = -fVar26;
            uVar14 = CONCAT44(fVar26,fVar26);
            do {
              if (uVar11 == *(uint *)((long)puVar10 + 0x14)) {
                *puVar10 = CONCAT44(fVar26 + (float)((ulong)*puVar10 >> 0x20) * param_1,
                                    fVar26 + (float)*puVar10 * param_1);
                *(ulong *)((long)puVar10 + 0xc) =
                     CONCAT44((float)((ulong)*(undefined8 *)((long)puVar10 + 0xc) >> 0x20) * param_1
                              ,(float)*(undefined8 *)((long)puVar10 + 0xc) * param_1);
                *(float *)(puVar10 + 5) = param_1 * *(float *)(puVar10 + 5);
              }
              puVar10 = puVar10 + 7;
            } while (puVar10 != puVar2);
          }
          uVar11 = uVar11 + 1;
          lVar21 = param_2[0xc];
          uVar13 = param_2[0xd] - lVar21 >> 3;
        } while (uVar11 < uVar13 + 1);
      }
      plVar8 = param_2;
      if (param_2[6] != param_2[7]) {
        lVar21 = param_2[0xc];
        uVar13 = param_2[0xd] - lVar21 >> 3;
        param_2[0x13] = param_2[0x12];
        uVar11 = 0;
        puVar24 = (undefined4 *)param_2[0x12];
        do {
          iVar9 = (int)param_5;
          if (uVar11 == 0) {
            uVar16 = 0;
          }
          else {
            if (uVar13 <= uVar11 - 1) goto LAB_10a25363c;
            uVar16 = *(long *)(lVar21 + (uVar11 - 1) * 8) + 1;
          }
          if (uVar11 < uVar13) {
            uVar13 = *(ulong *)(lVar21 + uVar11 * 8);
          }
          else {
            uVar13 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7 - 1;
          }
          if (uVar13 < uVar16) {
            uVar29 = 0x7f7fffff;
            fVar26 = -3.4028235e+38;
          }
          else {
            uVar17 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7;
            uVar14 = 0;
            if (uVar16 <= uVar17) {
              uVar14 = uVar17 - uVar16;
            }
            if (uVar14 <= uVar13 - uVar16) {
LAB_10a25363c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a253640);
              (*pcVar5)();
            }
            pfVar12 = (float *)(param_2[6] + uVar16 * 200 + 0xa0);
            lVar21 = (uVar13 - uVar16) + 1;
            fVar30 = -3.4028235e+38;
            uVar13 = 0x7f7fffff;
            uVar16 = 0x7f7fffff;
            fVar26 = fVar30;
            do {
              fVar34 = pfVar12[-8] + *pfVar12;
              bVar6 = (float)uVar13 <= fVar34;
              uVar17 = (ulong)(uint)fVar34;
              if (bVar6) {
                uVar17 = uVar16;
              }
              uVar29 = (undefined4)uVar17;
              uVar14 = (ulong)(uint)fVar34;
              if (bVar6) {
                uVar14 = uVar13;
              }
              fVar34 = pfVar12[-6] - *pfVar12;
              fVar31 = fVar34;
              if (fVar34 <= fVar30) {
                fVar34 = fVar30;
                fVar31 = fVar26;
              }
              fVar26 = fVar31;
              fVar30 = fVar34;
              pfVar12 = pfVar12 + 0x32;
              lVar21 = lVar21 + -1;
              uVar13 = uVar14;
              uVar16 = uVar17;
            } while (lVar21 != 0);
          }
          fVar30 = (float)uVar14;
          if ((undefined4 *)param_2[0x14] <= puVar24) {
            plVar19 = (long *)param_2[0x12];
            lVar15 = (long)puVar24 - (long)plVar19;
            lVar21 = lVar15 >> 3;
            uVar13 = lVar21 + 1;
            if (uVar13 >> 0x3d == 0) {
              uVar17 = param_2[0x14] - (long)plVar19;
              uVar16 = (long)uVar17 >> 2;
              if (uVar16 <= uVar13) {
                uVar16 = uVar13;
              }
              if (0x7ffffffffffffff7 < uVar17) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 >> 0x3d == 0) {
                lVar7 = uVar16 << 3;
                __Znwm();
                puVar24 = (undefined4 *)(lVar7 + lVar15);
                *puVar24 = uVar29;
                puVar24[1] = fVar26;
                puVar25 = puVar24 + 2;
                plVar8 = (long *)(puVar24 + lVar21 * -2);
                param_3 = plVar19;
                _memcpy();
                param_2[0x12] = (long)(puVar24 + lVar21 * -2);
                param_2[0x13] = (long)puVar25;
                param_2[0x14] = lVar7 + uVar16 * 8;
                if (plVar19 != (long *)0x0) {
                  __ZdlPv();
                  plVar8 = plVar19;
                }
                goto LAB_10a253600;
              }
            }
            else {
              FUN_10a26ab04();
            }
            func_0x000109ffded8();
            if ((int)plVar8 == 0) {
              lVar21 = *param_3;
              uVar14 = (param_3[1] - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
              if (iVar9 + 1 < (int)uVar14) {
                if ((char)param_3[0xc] == '\0') {
                  iVar9 = iVar9 + 1;
                }
                goto LAB_10a2536d4;
              }
LAB_10a2536f0:
              uVar14 = param_6 + param_7;
              uVar18 = 1;
            }
            else {
              if (iVar9 < 1) goto LAB_10a2536f0;
              lVar21 = *param_3;
              uVar14 = (param_3[1] - lVar21 >> 3) * -0x70a3d70a3d70a3d7;
              iVar9 = iVar9 - (uint)*(byte *)(param_3 + 0xc);
LAB_10a2536d4:
              if (uVar14 <= (ulong)(long)iVar9) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2537dc);
                (*pcVar5)();
              }
              lVar21 = lVar21 + (long)iVar9 * 200;
              uVar14 = *(ulong *)(lVar21 + 0x28);
              uVar18 = *(undefined1 *)(lVar21 + 0x30);
            }
            pfVar12 = *(float **)(param_4 + 0x50);
            if (pfVar12 < *(float **)(param_4 + 0x58)) {
              *pfVar12 = fVar30;
              pfVar12[1] = 0.0;
              *(ulong *)(pfVar12 + 2) = uVar14;
              pfVar20 = pfVar12 + 6;
              *(undefined1 *)(pfVar12 + 4) = uVar18;
LAB_10a2537c0:
              *(float **)(param_4 + 0x50) = pfVar20;
              return plVar8;
            }
            uVar13 = (long)pfVar12 - *(long *)(param_4 + 0x48);
            uVar11 = ((long)uVar13 >> 3) * -0x5555555555555555 + 1;
            if (uVar11 < 0xaaaaaaaaaaaaaab) {
              lVar21 = (long)*(float **)(param_4 + 0x58) - *(long *)(param_4 + 0x48) >> 3;
              uVar16 = lVar21 * 0x5555555555555556;
              if (uVar16 < uVar11 || uVar16 - uVar11 == 0) {
                uVar16 = uVar11;
              }
              if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
                uVar16 = 0xaaaaaaaaaaaaaaa;
              }
              lVar21 = param_4 + 0x48;
              FUN_10a20c6b0();
              pfVar12 = (float *)(lVar21 + uVar13);
              *pfVar12 = fVar30;
              pfVar12[1] = 0.0;
              *(ulong *)(pfVar12 + 2) = uVar14;
              *(undefined1 *)(pfVar12 + 4) = uVar18;
              pfVar20 = pfVar12 + 6;
              lVar15 = (long)pfVar12 - (*(long *)(param_4 + 0x50) - *(long *)(param_4 + 0x48));
              _memcpy(lVar15);
              plVar8 = *(long **)(param_4 + 0x48);
              *(long *)(param_4 + 0x48) = lVar15;
              *(float **)(param_4 + 0x50) = pfVar20;
              *(ulong *)(param_4 + 0x58) = lVar21 + uVar16 * 0x18;
              if (plVar8 != (long *)0x0) {
                __ZdlPv();
              }
              goto LAB_10a2537c0;
            }
            FUN_10a20c69c();
            fVar26 = 0.0;
            if ((plVar8 == (long *)0x0) || (FUN_10a1cc830(), plVar8 == (long *)0x0)) {
              plVar8 = (long *)0x1;
            }
            else {
              lVar21 = plVar8[3];
              ___dynamic_cast(lVar21,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
              plVar8 = (long *)plVar8[4];
              if (plVar8 == (long *)0x0) {
                fVar26 = *(float *)(lVar21 + 0xc);
                unaff_s11 = *(float *)(lVar21 + 0x10);
                unaff_s10 = *(float *)(lVar21 + 0x14);
                fVar30 = *(float *)(lVar21 + 0x1c);
                uVar13 = (ulong)*(byte *)(lVar21 + 0x18);
                uVar14 = (ulong)*(byte *)(lVar21 + 0x20);
                plVar8 = (long *)0x0;
              }
              else {
                plVar19 = plVar8 + 1;
                do {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar6) {
                    *plVar19 = *plVar19 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                fVar26 = *(float *)(lVar21 + 0xc);
                unaff_s11 = *(float *)(lVar21 + 0x10);
                unaff_s10 = *(float *)(lVar21 + 0x14);
                uVar13 = (ulong)*(byte *)(lVar21 + 0x18);
                fVar30 = *(float *)(lVar21 + 0x1c);
                uVar14 = (ulong)*(byte *)(lVar21 + 0x20);
                do {
                  lVar21 = *plVar19;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar6) {
                    *plVar19 = lVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                }
                plVar8 = (long *)0x0;
              }
            }
            lVar21 = *param_3;
            if (lVar21 == 0) {
              return plVar8;
            }
            uStack_134 = 0xc;
            FUN_10a1cc830(lVar21,&uStack_134);
            if (lVar21 == 0) {
              return plVar8;
            }
            lVar15 = *(long *)(lVar21 + 0x18);
            ___dynamic_cast(lVar15,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
            plVar19 = *(long **)(lVar21 + 0x20);
            if (plVar19 == (long *)0x0) {
              fVar33 = *(float *)(lVar15 + 0xc);
              fVar34 = *(float *)(lVar15 + 0x10);
              fVar32 = *(float *)(lVar15 + 0x14);
              fVar31 = *(float *)(lVar15 + 0x1c);
              uVar22 = (uint)*(byte *)(lVar15 + 0x20);
              uVar23 = (uint)*(byte *)(lVar15 + 0x18);
            }
            else {
              plVar1 = plVar19 + 1;
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              fVar33 = *(float *)(lVar15 + 0xc);
              fVar34 = *(float *)(lVar15 + 0x10);
              fVar32 = *(float *)(lVar15 + 0x14);
              uVar23 = (uint)*(byte *)(lVar15 + 0x18);
              fVar31 = *(float *)(lVar15 + 0x1c);
              uVar22 = (uint)*(byte *)(lVar15 + 0x20);
              do {
                lVar21 = *plVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar21 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
              }
            }
            if ((int)plVar8 == 0 && (((uint)uVar13 ^ uVar23) & 1) == 0) {
              if ((uVar13 & 1) == 0) {
                if ((((uint)uVar14 ^ uVar22) & 1) != 0) goto LAB_10a253984;
              }
              else {
                if ((uVar23 & 1) == 0) goto LAB_10a253a7c;
                iVar9 = 0;
                fVar26 = fVar26 - fVar33;
                fVar34 = unaff_s11 - fVar34;
                if (fVar26 < 0.0) {
                  fVar26 = -fVar26;
                }
                if (fVar34 < 0.0) {
                  fVar34 = -fVar34;
                }
                while ((fVar33 = fVar34, iVar9 == 1 || (fVar33 = fVar26, iVar9 != 2))) {
                  bVar6 = fVar33 < 1e-06;
                  while (iVar9 = iVar9 + 1, !bVar6) {
                    bVar6 = false;
                    if (iVar9 == 2) {
                      return (long *)0x0;
                    }
                  }
                }
                if (1e-06 <= ABS(unaff_s10 - fVar32)) {
                  return (long *)0x0;
                }
                if ((((uint)uVar14 ^ uVar22) & 1) != 0) {
                  return (long *)0x0;
                }
              }
              if ((uVar14 & 1) != 0) {
                if ((uVar22 & 1) == 0) {
LAB_10a253a7c:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a253a80);
                  (*pcVar5)();
                }
                if (1e-06 <= ABS(fVar30 - fVar31)) goto LAB_10a253984;
              }
              plVar8 = (long *)0x1;
            }
            else {
LAB_10a253984:
              plVar8 = (long *)0x0;
            }
            return plVar8;
          }
          puVar25 = puVar24 + 2;
          *puVar24 = uVar29;
          puVar24[1] = fVar26;
          lVar15 = param_4;
LAB_10a253600:
          param_2[0x13] = (long)puVar25;
          lVar21 = param_2[0xc];
          uVar13 = param_2[0xd] - lVar21 >> 3;
          bVar6 = uVar11 < uVar13;
          param_4 = lVar15;
          uVar11 = uVar11 + 1;
          puVar24 = puVar25;
        } while (bVar6);
      }
      return plVar8;
    }
  }
  return plVar8;
}



/* Entry: 10a24f5f0; end: 10a24f74b;  */

void FUN_10a24f5f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    fVar12 = 0.0;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    if (*(float **)(lVar9 + 0x130) == *(float **)(lVar9 + 0x128)) {
LAB_10a24f748:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a24f74c);
      (*pcVar3)();
    }
    fVar11 = **(float **)(lVar9 + 0x128);
    if (lVar9 == param_1) {
      fVar12 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = 0.0;
      fVar12 = 0.0;
      do {
        FUN_10a24f74c(fVar10,lVar9 + 0x10);
        plVar1 = (long *)(lVar9 + 0x128);
        plVar2 = (long *)(lVar9 + 0x130);
        lVar9 = *(long *)(lVar9 + 8);
        lVar8 = *plVar2 - *plVar1;
        if (lVar8 != 0) {
          uVar4 = (lVar8 >> 2) * -0x5555555555555555;
          pfVar5 = (float *)(*plVar1 + 8);
          uVar6 = 1;
          uVar7 = uVar4;
          lVar8 = lVar9;
          do {
            if ((lVar8 == param_1) && (uVar7 == 1)) {
              fVar12 = pfVar5[-1];
              lVar8 = param_1;
            }
            else if ((lVar8 == param_1) || (uVar7 != 1)) {
              if (uVar4 < uVar6 || uVar4 - uVar6 == 0) goto LAB_10a24f748;
              fVar10 = fVar10 + pfVar5[1] + pfVar5[-1] + (*pfVar5 - (pfVar5[-1] + pfVar5[-2]));
            }
            else {
              if (*(float **)(lVar9 + 0x130) == *(float **)(lVar9 + 0x128)) goto LAB_10a24f748;
              fVar10 = fVar10 + **(float **)(lVar9 + 0x128) +
                                pfVar5[-1] + (*pfVar5 - (pfVar5[-1] + pfVar5[-2]));
              lVar8 = lVar9;
            }
            uVar6 = uVar6 + 1;
            pfVar5 = pfVar5 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      } while (lVar9 != param_1);
    }
    fVar12 = fVar12 + fVar11 + fVar10;
  }
  *(float *)(param_1 + 0x1c) = fVar12;
  return;
}



/* Entry: 10a24f74c; end: 10a24fa03;  */

void FUN_10a24f74c(float param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar2 = param_2;
  FUN_10a24d004();
  if (*(long *)(param_2 + 0x30) != *(long *)(param_2 + 0x38) && uVar2 != 0) {
    fVar10 = 0.0;
    uVar4 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x60);
      if (uVar4 == 0) {
        uVar6 = 0;
        uVar9 = *(long *)(param_2 + 0x68) - lVar8 >> 3;
      }
      else {
        uVar9 = *(long *)(param_2 + 0x68) - lVar8 >> 3;
        if (uVar9 <= uVar4 - 1) goto LAB_10a24fa00;
        uVar6 = *(long *)(lVar8 + (uVar4 - 1) * 8) + 1;
      }
      if (uVar4 < uVar9) {
        uVar9 = *(ulong *)(lVar8 + uVar4 * 8);
      }
      else {
        uVar9 = (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x70a3d70a3d70a3d7 -
                1;
      }
      fVar11 = param_1 + fVar10;
      if (uVar6 <= uVar9) {
        lVar8 = uVar6 * 200;
        do {
          uVar3 = (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x70a3d70a3d70a3d7
          ;
          if (uVar3 < uVar6 || uVar3 - uVar6 == 0) goto LAB_10a24fa00;
          lVar5 = *(long *)(param_2 + 0x30) + lVar8;
          fVar13 = (float)((ulong)*(undefined8 *)(lVar5 + 0x88) >> 0x20);
          fVar12 = (float)((ulong)*(undefined8 *)(lVar5 + 0x80) >> 0x20);
          auVar14._0_4_ = (float)*(undefined8 *)(lVar5 + 0x80) + 0.0;
          auVar14._4_4_ = fVar12 + fVar11;
          auVar14._8_4_ = (float)*(undefined8 *)(lVar5 + 0x88) + 0.0;
          auVar14._12_4_ = fVar13 + fVar11;
          auVar14 = NEON_rev64(auVar14,4);
          *(ulong *)(lVar5 + 0x88) = CONCAT44(fVar13 - fVar11,auVar14._12_4_);
          *(ulong *)(lVar5 + 0x80) = CONCAT44(fVar12 - fVar11,auVar14._4_4_);
          uVar3 = (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x70a3d70a3d70a3d7
          ;
          if (uVar3 < uVar6 || uVar3 - uVar6 == 0) goto LAB_10a24fa00;
          lVar5 = *(long *)(param_2 + 0x30) + lVar8;
          fVar13 = (float)((ulong)*(undefined8 *)(lVar5 + 0x98) >> 0x20);
          fVar12 = (float)((ulong)*(undefined8 *)(lVar5 + 0x90) >> 0x20);
          auVar15._0_4_ = (float)*(undefined8 *)(lVar5 + 0x90) + 0.0;
          auVar15._4_4_ = fVar12 + fVar11;
          auVar15._8_4_ = (float)*(undefined8 *)(lVar5 + 0x98) + 0.0;
          auVar15._12_4_ = fVar13 + fVar11;
          auVar14 = NEON_rev64(auVar15,4);
          *(ulong *)(lVar5 + 0x98) = CONCAT44(fVar13 - fVar11,auVar14._12_4_);
          *(ulong *)(lVar5 + 0x90) = CONCAT44(fVar12 - fVar11,auVar14._4_4_);
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 200;
        } while (uVar9 + 1 != uVar6);
      }
      lVar5 = *(long *)(param_2 + 0x138);
      for (lVar8 = *(long *)(param_2 + 0x130); lVar8 != lVar5; lVar8 = lVar8 + 0x38) {
        if (*(int *)(lVar8 + 0x14) == (int)uVar4) {
          *(float *)(lVar8 + 8) = *(float *)(lVar8 + 8) - fVar11;
        }
      }
      uVar6 = uVar4 + 1;
      if (uVar6 < uVar2) {
        lVar8 = *(long *)(param_2 + 0x118);
        uVar9 = (*(long *)(param_2 + 0x120) - lVar8 >> 2) * -0x5555555555555555;
        if ((uVar9 < uVar4 || uVar9 - uVar4 == 0) || (uVar9 < uVar6 || uVar9 - uVar6 == 0))
        goto LAB_10a24fa00;
        pfVar7 = (float *)(lVar8 + uVar4 * 0xc);
        fVar10 = fVar10 + *(float *)(lVar8 + uVar6 * 0xc) +
                          pfVar7[1] + (pfVar7[2] - (pfVar7[1] + *pfVar7));
      }
      uVar4 = uVar6;
    } while (uVar6 != uVar2);
  }
  lVar8 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != lVar8) {
    uVar4 = 0;
    uVar6 = 0;
    fVar10 = 0.0;
    lVar5 = 4;
    do {
      *(float *)(lVar8 + lVar5) = *(float *)(lVar8 + lVar5) - (param_1 + fVar10);
      uVar9 = uVar6;
      if (((uVar6 < (ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 3)) &&
          (uVar4 == *(ulong *)(*(long *)(param_2 + 0x78) + uVar6 * 8))) &&
         (uVar9 = uVar6 + 1, uVar9 < uVar2)) {
        lVar8 = *(long *)(param_2 + 0x118);
        uVar3 = (*(long *)(param_2 + 0x120) - lVar8 >> 2) * -0x5555555555555555;
        if ((uVar3 < uVar6 || uVar3 - uVar6 == 0) || (uVar3 < uVar9 || uVar3 - uVar9 == 0)) {
LAB_10a24fa00:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a24fa04);
          (*pcVar1)();
        }
        pfVar7 = (float *)(lVar8 + uVar6 * 0xc);
        fVar10 = fVar10 + *(float *)(lVar8 + uVar9 * 0xc) +
                          pfVar7[1] + (pfVar7[2] - (pfVar7[1] + *pfVar7));
      }
      uVar6 = uVar9;
      uVar4 = uVar4 + 1;
      lVar8 = *(long *)(param_2 + 0x48);
      lVar5 = lVar5 + 0x18;
    } while (uVar4 < (ulong)((*(long *)(param_2 + 0x50) - lVar8 >> 3) * -0x5555555555555555));
  }
  return;
}



/* Entry: 10a24fa04; end: 10a24fb8f;  */

void FUN_10a24fa04(long param_1,long param_2,undefined8 param_3,int param_4,float *param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  for (lVar4 = *(long *)(param_1 + 8); lVar4 != param_1; lVar4 = *(long *)(lVar4 + 8)) {
    FUN_10a24fb90(lVar4 + 0x10,param_2,param_3);
  }
  fVar7 = param_5[1];
  fVar6 = fVar7 + *(float *)(param_1 + 0x1c);
  param_5[3] = fVar6;
  fVar5 = fVar6 - fVar7;
  if (param_4 == 0) {
    fVar8 = *(float *)(param_2 + 4);
  }
  else {
    if (param_4 != 1) {
      fVar5 = *(float *)(param_2 + 0xc);
      goto LAB_10a24faa4;
    }
    fVar8 = (*(float *)(param_2 + 4) + *(float *)(param_2 + 0xc)) * 0.5;
    fVar5 = fVar5 * 0.5;
  }
  fVar5 = fVar5 + fVar8;
LAB_10a24faa4:
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = *(long *)(param_1 + 8);
    if (*(float **)(lVar4 + 0x130) != *(float **)(lVar4 + 0x128)) {
      if (lVar4 != param_1) {
        fVar6 = fVar5 - **(float **)(lVar4 + 0x128);
        do {
          lVar1 = *(long *)(lVar4 + 0x48);
          for (lVar3 = *(long *)(lVar4 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 200) {
            *(ulong *)(lVar3 + 0x88) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x88) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x88) + 0.0);
            *(ulong *)(lVar3 + 0x80) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x80) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x80) + 0.0);
            *(ulong *)(lVar3 + 0x98) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x98) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x98) + 0.0);
            *(ulong *)(lVar3 + 0x90) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x90) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x90) + 0.0);
          }
          lVar1 = *(long *)(lVar4 + 0x60);
          for (lVar3 = *(long *)(lVar4 + 0x58); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
            *(float *)(lVar3 + 4) = fVar6 + *(float *)(lVar3 + 4);
          }
          lVar1 = *(long *)(lVar4 + 0x148);
          for (lVar3 = *(long *)(lVar4 + 0x140); lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
            *(float *)(lVar3 + 8) = fVar6 + *(float *)(lVar3 + 8);
          }
          lVar4 = *(long *)(lVar4 + 8);
        } while (lVar4 != param_1);
        fVar6 = param_5[3];
        fVar7 = param_5[1];
      }
      *param_5 = *param_5 + 0.0;
      param_5[1] = fVar7 + (fVar5 - fVar6);
      param_5[2] = param_5[2] + 0.0;
      param_5[3] = fVar6 + (fVar5 - fVar6);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a24fb90);
  (*pcVar2)();
}



/* Entry: 10a24fb90; end: 10a24ff0b;  */

float * FUN_10a24fb90(ulong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     ulong param_6,int param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  long *plVar19;
  undefined1 uVar20;
  float *pfVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  float unaff_s10;
  float unaff_s11;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uStack_134;
  
  pfVar7 = param_2;
  pfVar8 = param_3;
  pfVar9 = param_4;
  FUN_10a24da00();
  iVar10 = (int)param_4;
  if (*(long *)(param_2 + 0xc) == *(long *)(param_2 + 0xe)) {
    pfVar8 = *(float **)(param_2 + 0x12);
    pfVar9 = *(float **)(param_2 + 0x14);
    if (pfVar8 != pfVar9) {
      if (iVar10 == 2) {
        fVar27 = param_3[2];
      }
      else if (iVar10 == 1) {
        fVar27 = (*param_3 + param_3[2]) * 0.5;
      }
      else {
        fVar27 = *param_3;
      }
      do {
        pfVar17 = pfVar8 + 6;
        *pfVar8 = fVar27 + *pfVar8;
        pfVar8 = pfVar17;
      } while (pfVar17 != pfVar9);
    }
    return pfVar7;
  }
  lVar22 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x1a) - lVar22 != -8) {
    uVar12 = 0;
    uVar16 = *(long *)(param_2 + 0x1a) - lVar22 >> 3;
    param_1 = 0x3f000000;
    do {
      if (uVar12 == 0) {
        pfVar7 = (float *)0x0;
      }
      else {
        if (uVar16 <= uVar12 - 1) goto LAB_10a24fec8;
        pfVar7 = (float *)(*(long *)(lVar22 + (uVar12 - 1) * 8) + 1);
      }
      if (uVar12 < uVar16) {
        pfVar17 = *(float **)(lVar22 + uVar12 * 8);
      }
      else {
        pfVar17 = (float *)((*(long *)(param_2 + 0xe) - *(long *)(param_2 + 0xc) >> 3) *
                            -0x70a3d70a3d70a3d7 + -1);
      }
      lVar22 = *(long *)(param_2 + 0x1e);
      if (uVar12 == 0) {
        pfVar21 = (float *)0x0;
        uVar16 = *(long *)(param_2 + 0x20) - lVar22 >> 3;
      }
      else {
        uVar16 = *(long *)(param_2 + 0x20) - lVar22 >> 3;
        if (uVar16 <= uVar12 - 1) goto LAB_10a24fec8;
        pfVar21 = (float *)(*(long *)(lVar22 + (uVar12 - 1) * 8) + 1);
      }
      if (uVar12 < uVar16) {
        pfVar18 = *(float **)(lVar22 + uVar12 * 8);
      }
      else {
        pfVar18 = (float *)((*(long *)(param_2 + 0x14) - *(long *)(param_2 + 0x12) >> 3) *
                            -0x5555555555555555 + -1);
      }
      lVar22 = *(long *)(param_2 + 0xc);
      pfVar8 = (float *)((*(long *)(param_2 + 0xe) - lVar22 >> 3) * -0x70a3d70a3d70a3d7);
      pfVar9 = pfVar8;
      if ((float *)((long)pfVar17 + 1U) <= pfVar8) {
        pfVar9 = (float *)((long)pfVar17 + 1);
      }
      if (pfVar7 != pfVar9) {
        lVar11 = lVar22 + (long)pfVar7 * 200;
        do {
          param_6 = (ulong)*(byte *)(lVar11 + 0xc0);
          if ((*(byte *)(lVar11 + 0xc0) & 1) == 0) goto LAB_10a24fcec;
          lVar11 = lVar11 + 200;
        } while (lVar11 != lVar22 + (long)pfVar9 * 200);
      }
      pfVar9 = *(float **)(param_2 + 0x12);
      if (pfVar18 < (float *)((*(long *)(param_2 + 0x14) - (long)pfVar9 >> 3) * -0x5555555555555555)
          && pfVar21 <= pfVar18) {
        fVar29 = pfVar9[(long)pfVar21 * 6];
        param_5 = (float *)((long)pfVar18 * 0x18);
        fVar28 = pfVar9[(long)pfVar18 * 6];
        fVar27 = fVar28;
        if (fVar29 <= fVar28) {
          fVar27 = fVar29;
        }
        if (fVar28 <= fVar29) {
          fVar28 = fVar29;
        }
      }
      else {
LAB_10a24fcec:
        param_5 = (float *)(*(long *)(param_2 + 0x26) - *(long *)(param_2 + 0x24));
        if ((ulong)((long)param_5 >> 3) <= uVar12) {
LAB_10a24fec8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a24fecc);
          (*pcVar5)();
        }
        pfVar9 = (float *)(*(long *)(param_2 + 0x24) + uVar12 * 8);
        fVar27 = *pfVar9;
        fVar28 = pfVar9[1];
      }
      fVar28 = fVar28 - fVar27;
      if (iVar10 == 2) {
        fVar29 = param_3[2];
LAB_10a24fd60:
        fVar29 = fVar29 - fVar28;
      }
      else {
        if (iVar10 == 1) {
          fVar29 = (*param_3 + param_3[2]) * 0.5;
          fVar28 = fVar28 * 0.5;
          goto LAB_10a24fd60;
        }
        fVar29 = *param_3;
      }
      fVar29 = fVar29 - fVar27;
      if ((pfVar7 < pfVar8) && (pfVar7 <= pfVar17)) {
        pfVar8 = (float *)((long)pfVar7 * 200);
        do {
          uVar31 = *(undefined8 *)((long)pfVar8 + lVar22 + 0x88);
          uVar30 = *(undefined8 *)((long)pfVar8 + lVar22 + 0x80);
          *(ulong *)((long)pfVar8 + lVar22 + 0x88) =
               CONCAT44((float)((ulong)uVar31 >> 0x20) + 0.0,(float)uVar31 + fVar29);
          *(ulong *)((long)pfVar8 + lVar22 + 0x80) =
               CONCAT44((float)((ulong)uVar30 >> 0x20) + 0.0,(float)uVar30 + fVar29);
          lVar22 = *(long *)(param_2 + 0xc);
          pfVar9 = (float *)((*(long *)(param_2 + 0xe) - lVar22 >> 3) * -0x70a3d70a3d70a3d7);
          if (pfVar9 < pfVar7 || (long)pfVar9 - (long)pfVar7 == 0) goto LAB_10a24fec8;
          uVar31 = *(undefined8 *)((long)pfVar8 + lVar22 + 0x98);
          uVar30 = *(undefined8 *)((long)pfVar8 + lVar22 + 0x90);
          *(ulong *)((long)pfVar8 + lVar22 + 0x98) =
               CONCAT44((float)((ulong)uVar31 >> 0x20) + 0.0,(float)uVar31 + fVar29);
          *(ulong *)((long)pfVar8 + lVar22 + 0x90) =
               CONCAT44((float)((ulong)uVar30 >> 0x20) + 0.0,(float)uVar30 + fVar29);
          lVar22 = *(long *)(param_2 + 0xc);
          pfVar9 = (float *)((*(long *)(param_2 + 0xe) - lVar22 >> 3) * -0x70a3d70a3d70a3d7);
          param_5 = (float *)((long)pfVar7 + 1);
          pfVar8 = pfVar8 + 0x32;
          bVar6 = pfVar7 < pfVar17;
          pfVar7 = param_5;
        } while (param_5 < pfVar9 && bVar6);
      }
      lVar22 = *(long *)(param_2 + 0x12);
      if (pfVar21 < (float *)((*(long *)(param_2 + 0x14) - lVar22 >> 3) * -0x5555555555555555) &&
          pfVar21 <= pfVar18) {
        lVar11 = (long)pfVar21 * 0x18;
        do {
          *(float *)(lVar22 + lVar11) = fVar29 + *(float *)(lVar22 + lVar11);
          pfVar7 = (float *)((long)pfVar21 + 1);
          lVar22 = *(long *)(param_2 + 0x12);
          pfVar8 = (float *)((*(long *)(param_2 + 0x14) - lVar22 >> 3) * -0x5555555555555555);
          lVar11 = lVar11 + 0x18;
          bVar6 = pfVar21 < pfVar18;
          pfVar21 = pfVar7;
        } while (pfVar7 < pfVar8 && bVar6);
      }
      puVar3 = *(undefined8 **)(param_2 + 0x4e);
      for (puVar2 = *(undefined8 **)(param_2 + 0x4c); puVar2 != puVar3; puVar2 = puVar2 + 7) {
        if (uVar12 == *(uint *)((long)puVar2 + 0x14)) {
          *puVar2 = CONCAT44(fVar29 + (float)((ulong)*puVar2 >> 0x20),fVar29 + (float)*puVar2);
        }
      }
      uVar12 = uVar12 + 1;
      lVar22 = *(long *)(param_2 + 0x18);
      uVar16 = *(long *)(param_2 + 0x1a) - lVar22 >> 3;
    } while (uVar12 < uVar16 + 1);
  }
  pfVar7 = param_2;
  if (*(long *)(param_2 + 0xc) != *(long *)(param_2 + 0xe)) {
    lVar22 = *(long *)(param_2 + 0x18);
    uVar16 = *(long *)(param_2 + 0x1a) - lVar22 >> 3;
    *(undefined4 **)(param_2 + 0x26) = *(undefined4 **)(param_2 + 0x24);
    uVar12 = 0;
    puVar25 = *(undefined4 **)(param_2 + 0x24);
    do {
      iVar10 = (int)param_5;
      if (uVar12 == 0) {
        uVar14 = 0;
      }
      else {
        if (uVar16 <= uVar12 - 1) goto LAB_10a25363c;
        uVar14 = *(long *)(lVar22 + (uVar12 - 1) * 8) + 1;
      }
      if (uVar12 < uVar16) {
        uVar16 = *(ulong *)(lVar22 + uVar12 * 8);
      }
      else {
        uVar16 = (*(long *)(param_2 + 0xe) - *(long *)(param_2 + 0xc) >> 3) * -0x70a3d70a3d70a3d7 -
                 1;
      }
      if (uVar16 < uVar14) {
        uVar32 = 0x7f7fffff;
        fVar27 = -3.4028235e+38;
      }
      else {
        uVar15 = (*(long *)(param_2 + 0xe) - *(long *)(param_2 + 0xc) >> 3) * -0x70a3d70a3d70a3d7;
        uVar13 = 0;
        if (uVar14 <= uVar15) {
          uVar13 = uVar15 - uVar14;
        }
        if (uVar13 <= uVar16 - uVar14) {
LAB_10a25363c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a253640);
          (*pcVar5)();
        }
        pfVar17 = (float *)(*(long *)(param_2 + 0xc) + uVar14 * 200 + 0xa0);
        lVar22 = (uVar16 - uVar14) + 1;
        fVar28 = -3.4028235e+38;
        uVar16 = 0x7f7fffff;
        uVar14 = 0x7f7fffff;
        fVar27 = fVar28;
        do {
          fVar29 = pfVar17[-8] + *pfVar17;
          bVar6 = (float)uVar16 <= fVar29;
          uVar13 = (ulong)(uint)fVar29;
          if (bVar6) {
            uVar13 = uVar14;
          }
          uVar32 = (undefined4)uVar13;
          param_1 = (ulong)(uint)fVar29;
          if (bVar6) {
            param_1 = uVar16;
          }
          fVar29 = pfVar17[-6] - *pfVar17;
          fVar33 = fVar29;
          if (fVar29 <= fVar28) {
            fVar29 = fVar28;
            fVar33 = fVar27;
          }
          fVar27 = fVar33;
          fVar28 = fVar29;
          pfVar17 = pfVar17 + 0x32;
          lVar22 = lVar22 + -1;
          uVar16 = param_1;
          uVar14 = uVar13;
        } while (lVar22 != 0);
      }
      fVar28 = (float)param_1;
      if (*(undefined4 **)(param_2 + 0x28) <= puVar25) {
        pfVar21 = *(float **)(param_2 + 0x24);
        pfVar17 = (float *)((long)puVar25 - (long)pfVar21);
        lVar22 = (long)pfVar17 >> 3;
        uVar16 = lVar22 + 1;
        if (uVar16 >> 0x3d == 0) {
          uVar13 = (long)*(undefined4 **)(param_2 + 0x28) - (long)pfVar21;
          uVar14 = (long)uVar13 >> 2;
          if (uVar14 <= uVar16) {
            uVar14 = uVar16;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 >> 0x3d == 0) {
            lVar11 = uVar14 << 3;
            __Znwm();
            puVar25 = (undefined4 *)(lVar11 + (long)pfVar17);
            *puVar25 = uVar32;
            puVar25[1] = fVar27;
            puVar26 = puVar25 + 2;
            pfVar7 = (float *)(puVar25 + lVar22 * -2);
            pfVar8 = pfVar21;
            _memcpy();
            *(undefined4 **)(param_2 + 0x24) = puVar25 + lVar22 * -2;
            *(undefined4 **)(param_2 + 0x26) = puVar26;
            *(ulong *)(param_2 + 0x28) = lVar11 + uVar14 * 8;
            if (pfVar21 != (float *)0x0) {
              __ZdlPv();
              pfVar7 = pfVar21;
            }
            goto LAB_10a253600;
          }
        }
        else {
          FUN_10a26ab04();
        }
        func_0x000109ffded8();
        if ((int)pfVar7 == 0) {
          lVar22 = *(long *)pfVar8;
          uVar12 = (*(long *)(pfVar8 + 2) - lVar22 >> 3) * -0x70a3d70a3d70a3d7;
          if (iVar10 + 1 < (int)uVar12) {
            if (*(char *)(pfVar8 + 0x18) == '\0') {
              iVar10 = iVar10 + 1;
            }
            goto LAB_10a2536d4;
          }
LAB_10a2536f0:
          param_6 = param_6 + (long)param_7;
          uVar20 = 1;
        }
        else {
          if (iVar10 < 1) goto LAB_10a2536f0;
          lVar22 = *(long *)pfVar8;
          uVar12 = (*(long *)(pfVar8 + 2) - lVar22 >> 3) * -0x70a3d70a3d70a3d7;
          iVar10 = iVar10 - (uint)*(byte *)(pfVar8 + 0x18);
LAB_10a2536d4:
          if (uVar12 <= (ulong)(long)iVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2537dc);
            (*pcVar5)();
          }
          lVar22 = lVar22 + (long)iVar10 * 200;
          param_6 = *(ulong *)(lVar22 + 0x28);
          uVar20 = *(undefined1 *)(lVar22 + 0x30);
        }
        pfVar17 = *(float **)(pfVar9 + 0x14);
        if (pfVar17 < *(float **)(pfVar9 + 0x16)) {
          *pfVar17 = fVar28;
          pfVar17[1] = 0.0;
          *(ulong *)(pfVar17 + 2) = param_6;
          pfVar8 = pfVar17 + 6;
          *(undefined1 *)(pfVar17 + 4) = uVar20;
LAB_10a2537c0:
          *(float **)(pfVar9 + 0x14) = pfVar8;
          return pfVar7;
        }
        uVar16 = (long)pfVar17 - *(long *)(pfVar9 + 0x12);
        uVar12 = ((long)uVar16 >> 3) * -0x5555555555555555 + 1;
        if (uVar12 < 0xaaaaaaaaaaaaaab) {
          lVar22 = (long)*(float **)(pfVar9 + 0x16) - *(long *)(pfVar9 + 0x12) >> 3;
          uVar14 = lVar22 * 0x5555555555555556;
          if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
            uVar14 = uVar12;
          }
          if (0x555555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
            uVar14 = 0xaaaaaaaaaaaaaaa;
          }
          pfVar17 = pfVar9 + 0x12;
          FUN_10a20c6b0();
          pfVar7 = (float *)((long)pfVar17 + uVar16);
          *pfVar7 = fVar28;
          pfVar7[1] = 0.0;
          *(ulong *)(pfVar7 + 2) = param_6;
          *(undefined1 *)(pfVar7 + 4) = uVar20;
          pfVar8 = pfVar7 + 6;
          lVar22 = (long)pfVar7 - (*(long *)(pfVar9 + 0x14) - *(long *)(pfVar9 + 0x12));
          _memcpy(lVar22);
          pfVar7 = *(float **)(pfVar9 + 0x12);
          *(long *)(pfVar9 + 0x12) = lVar22;
          *(float **)(pfVar9 + 0x14) = pfVar8;
          *(float **)(pfVar9 + 0x16) = pfVar17 + uVar14 * 6;
          if (pfVar7 != (float *)0x0) {
            __ZdlPv();
          }
          goto LAB_10a2537c0;
        }
        FUN_10a20c69c();
        fVar27 = 0.0;
        if ((pfVar7 == (float *)0x0) || (FUN_10a1cc830(), pfVar7 == (float *)0x0)) {
          pfVar9 = (float *)0x1;
        }
        else {
          lVar22 = *(long *)(pfVar7 + 6);
          ___dynamic_cast(lVar22,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
          plVar19 = *(long **)(pfVar7 + 8);
          if (plVar19 == (long *)0x0) {
            fVar27 = *(float *)(lVar22 + 0xc);
            unaff_s11 = *(float *)(lVar22 + 0x10);
            unaff_s10 = *(float *)(lVar22 + 0x14);
            fVar28 = *(float *)(lVar22 + 0x1c);
            uVar16 = (ulong)*(byte *)(lVar22 + 0x18);
            param_6 = (ulong)*(byte *)(lVar22 + 0x20);
            pfVar9 = (float *)0x0;
          }
          else {
            plVar1 = plVar19 + 1;
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            fVar27 = *(float *)(lVar22 + 0xc);
            unaff_s11 = *(float *)(lVar22 + 0x10);
            unaff_s10 = *(float *)(lVar22 + 0x14);
            uVar16 = (ulong)*(byte *)(lVar22 + 0x18);
            fVar28 = *(float *)(lVar22 + 0x1c);
            param_6 = (ulong)*(byte *)(lVar22 + 0x20);
            do {
              lVar22 = *plVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
            pfVar9 = (float *)0x0;
          }
        }
        lVar22 = *(long *)pfVar8;
        if (lVar22 == 0) {
          return pfVar9;
        }
        uStack_134 = 0xc;
        FUN_10a1cc830(lVar22,&uStack_134);
        if (lVar22 == 0) {
          return pfVar9;
        }
        lVar11 = *(long *)(lVar22 + 0x18);
        ___dynamic_cast(lVar11,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
        plVar19 = *(long **)(lVar22 + 0x20);
        if (plVar19 == (long *)0x0) {
          fVar35 = *(float *)(lVar11 + 0xc);
          fVar29 = *(float *)(lVar11 + 0x10);
          fVar34 = *(float *)(lVar11 + 0x14);
          fVar33 = *(float *)(lVar11 + 0x1c);
          uVar23 = (uint)*(byte *)(lVar11 + 0x20);
          uVar24 = (uint)*(byte *)(lVar11 + 0x18);
        }
        else {
          plVar1 = plVar19 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          fVar35 = *(float *)(lVar11 + 0xc);
          fVar29 = *(float *)(lVar11 + 0x10);
          fVar34 = *(float *)(lVar11 + 0x14);
          uVar24 = (uint)*(byte *)(lVar11 + 0x18);
          fVar33 = *(float *)(lVar11 + 0x1c);
          uVar23 = (uint)*(byte *)(lVar11 + 0x20);
          do {
            lVar22 = *plVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar22 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        if ((int)pfVar9 == 0 && (((uint)uVar16 ^ uVar24) & 1) == 0) {
          if ((uVar16 & 1) == 0) {
            if ((((uint)param_6 ^ uVar23) & 1) != 0) goto LAB_10a253984;
          }
          else {
            if ((uVar24 & 1) == 0) goto LAB_10a253a7c;
            iVar10 = 0;
            fVar27 = fVar27 - fVar35;
            fVar29 = unaff_s11 - fVar29;
            if (fVar27 < 0.0) {
              fVar27 = -fVar27;
            }
            if (fVar29 < 0.0) {
              fVar29 = -fVar29;
            }
            while ((fVar35 = fVar29, iVar10 == 1 || (fVar35 = fVar27, iVar10 != 2))) {
              bVar6 = fVar35 < 1e-06;
              while (iVar10 = iVar10 + 1, !bVar6) {
                bVar6 = false;
                if (iVar10 == 2) {
                  return (float *)0x0;
                }
              }
            }
            if (1e-06 <= ABS(unaff_s10 - fVar34)) {
              return (float *)0x0;
            }
            if ((((uint)param_6 ^ uVar23) & 1) != 0) {
              return (float *)0x0;
            }
          }
          if ((param_6 & 1) != 0) {
            if ((uVar23 & 1) == 0) {
LAB_10a253a7c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a253a80);
              (*pcVar5)();
            }
            if (1e-06 <= ABS(fVar28 - fVar33)) goto LAB_10a253984;
          }
          pfVar8 = (float *)0x1;
        }
        else {
LAB_10a253984:
          pfVar8 = (float *)0x0;
        }
        return pfVar8;
      }
      puVar26 = puVar25 + 2;
      *puVar25 = uVar32;
      puVar25[1] = fVar27;
      pfVar17 = pfVar9;
LAB_10a253600:
      *(undefined4 **)(param_2 + 0x26) = puVar26;
      lVar22 = *(long *)(param_2 + 0x18);
      uVar16 = *(long *)(param_2 + 0x1a) - lVar22 >> 3;
      bVar6 = uVar12 < uVar16;
      pfVar9 = pfVar17;
      uVar12 = uVar12 + 1;
      puVar25 = puVar26;
    } while (bVar6);
  }
  return pfVar7;
}



/* Entry: 10a24ff0c; end: 10a250187;  */

void FUN_10a24ff0c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined8 uStack_a7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 - lVar1 != 0) {
    if (param_1[2] == 0) {
      ppuStack_1b0 = &ppuStack_1b0;
      ppuStack_198 = &ppuStack_198;
      uStack_1a0 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_108 = 0;
      uStack_a7 = 0;
      uStack_a8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_af = 0;
      uStack_b8 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_f0 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      ppuStack_1a8 = ppuStack_1b0;
      ppuStack_190 = ppuStack_198;
      if ((uint *)param_2[4] == (uint *)param_2[3]) goto LAB_10a25016c;
      uStack_f8 = (ulong)*(uint *)param_2[3] << 0x20;
      if ((undefined4 *)param_2[7] == (undefined4 *)param_2[6]) goto LAB_10a25016c;
      uStack_f0 = *(undefined4 *)param_2[6];
      FUN_10a24d2d4(param_1,&ppuStack_1b0);
      func_0x00010a208aac(&ppuStack_1b0);
    }
    else {
      if ((undefined4 *)param_2[4] == (undefined4 *)param_2[3]) {
LAB_10a25016c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a250170);
        (*pcVar4)();
      }
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + 0xcc) = *(undefined4 *)param_2[3];
      if ((undefined4 *)param_2[7] == (undefined4 *)param_2[6]) goto LAB_10a25016c;
      *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)param_2[6];
    }
    lVar10 = 0;
    lVar5 = 0;
    uVar11 = lVar2 - lVar1 >> 2;
    uVar9 = 1;
    do {
      uVar6 = uVar9 - 1;
      uStack_1a0 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a7 = 0;
      uStack_af = 0;
      uStack_a8 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      ppuStack_1b0 = &ppuStack_1b0;
      ppuStack_1a8 = &ppuStack_1b0;
      ppuStack_198 = &ppuStack_198;
      ppuStack_190 = &ppuStack_198;
      if ((ulong)(param_2[1] - *param_2 >> 2) <= uVar6) goto LAB_10a25016c;
      uVar3 = *(uint *)(*param_2 + lVar10);
      uStack_f8 = (ulong)uVar3;
      lVar5 = lVar5 + 1;
      lVar1 = param_2[3];
      uVar8 = param_2[4] - lVar1 >> 2;
      if (uVar9 < uVar11) {
        if (uVar8 <= uVar9) goto LAB_10a25016c;
        uStack_f8 = CONCAT44(*(undefined4 *)(lVar1 + uVar9 * 4),uVar3);
        if ((ulong)(param_2[7] - param_2[6] >> 2) <= uVar9) goto LAB_10a25016c;
        puVar7 = (undefined4 *)(param_2[6] + lVar5 * 4);
      }
      else {
        if (uVar8 <= uVar6) goto LAB_10a25016c;
        uStack_f8 = CONCAT44(*(undefined4 *)(lVar1 + lVar10),uVar3);
        if ((ulong)(param_2[7] - param_2[6] >> 2) <= uVar6) goto LAB_10a25016c;
        puVar7 = (undefined4 *)(param_2[6] + lVar10);
      }
      uStack_f0 = *puVar7;
      FUN_10a24d2d4(param_1,&ppuStack_1b0);
      func_0x00010a208aac(&ppuStack_1b0);
      lVar10 = lVar10 + 4;
      uVar9 = uVar9 + 1;
    } while (uVar9 - uVar11 != 1);
  }
  return;
}



/* Entry: 10a250188; end: 10a25025f;  */

void FUN_10a250188(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[2] == 0) {
    ppuStack_178 = &ppuStack_178;
    ppuStack_160 = &ppuStack_160;
    uStack_168 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppuStack_170 = ppuStack_178;
    ppuStack_158 = ppuStack_160;
    FUN_10a24d2d4(param_1,&ppuStack_178);
    func_0x00010a208aac(&ppuStack_178);
    if (param_1[2] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a25024c);
      (*pcVar1)();
    }
  }
  FUN_10a24d408(*param_1 + 0x10,param_2);
  return;
}



/* Entry: 10a250260; end: 10a2502ff;  */

void FUN_10a250260(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_1) {
    uVar2 = 0;
    do {
      lVar6 = *(long *)(lVar1 + 0x18);
      if (lVar6 == lVar1 + 0x10) {
LAB_10a2502e0:
        uVar4 = uVar2 + (long)*(int *)(lVar1 + 200);
        uVar3 = uVar4;
      }
      else {
        bVar7 = false;
        uVar3 = 0;
        uVar4 = 0xffffffffffffffff;
        do {
          for (lVar9 = *(long *)(lVar6 + 0x10); lVar9 != *(long *)(lVar6 + 0x18);
              lVar9 = lVar9 + 200) {
            uVar5 = uVar4;
            if (*(char *)(lVar9 + 0x30) == '\x01') {
              uVar8 = *(ulong *)(lVar9 + 0x28);
              uVar5 = uVar8;
              if (uVar4 <= uVar8) {
                uVar5 = uVar4;
              }
              uVar8 = uVar8 + (long)*(int *)(lVar9 + 0xb0);
              if (uVar3 <= uVar8) {
                uVar3 = uVar8;
              }
              bVar7 = true;
            }
            uVar4 = uVar5;
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while (lVar6 != lVar1 + 0x10);
        if (!bVar7) goto LAB_10a2502e0;
      }
      uVar2 = uVar3;
      *(ulong *)(lVar1 + 0xc0) = uVar4;
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1);
  }
  return;
}



/* Entry: 10a250300; end: 10a250bbb;  */

void FUN_10a250300(float param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong unaff_x24;
  long lVar15;
  undefined1 uVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  ulong uStack_210;
  undefined4 uStack_204;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  long lStack_198;
  long lStack_190;
  long *plStack_178;
  ulong uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined8 uStack_c0;
  long *plStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  uStack_c8 = 0xffffffff;
  uStack_c4 = 1;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_ac = 0;
  fStack_a8 = 0.0;
  uStack_9c = 0;
  uStack_98 = 0;
  fStack_a4 = 0.0;
  uStack_a0 = 0;
  fStack_b0 = 1.0;
  uStack_94 = 0;
  uVar18 = 0;
  plStack_f8 = (long *)0x0;
  uStack_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_e0 = 0x3f800000;
  uStack_d8 = 0;
  uStack_1d0 = 0;
  plVar14 = param_3 + 0xb;
  FUN_10a208574(plVar14,&uStack_1d0);
  if (plVar14 != (long *)0x0) {
    FUN_10a24ff0c(param_2,plVar14 + 3);
  }
  lVar15 = *param_3;
  if (param_3[1] == lVar15) {
    uVar10 = 0;
  }
  else {
    uVar13 = 0;
    uVar16 = 0;
    bVar6 = false;
    plVar14 = (long *)0x0;
    fVar19 = 0.0;
    do {
      plVar11 = param_3 + 3;
      FUN_10a283ff0(plVar11,lVar15 + uVar13 * 0x28);
      if (plVar11 == (long *)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
LAB_10a250b08:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a250b0c);
        (*pcVar7)();
      }
      lVar15 = param_3[8];
      uVar10 = (param_3[9] - lVar15 >> 2) * -0x5555555555555555;
      if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a250b08;
      plVar8 = param_3 + 0xb;
      uStack_1d0 = uVar13;
      FUN_10a208574(plVar8,&uStack_1d0);
      if ((uVar13 != 0) && (plVar8 != (long *)0x0)) {
        if (bVar6) {
          *(undefined1 *)((long)plVar14 + 0x72) = 0;
        }
        FUN_10a24ff0c(param_2,plVar8 + 3);
        bVar6 = false;
      }
      plVar8 = param_3 + 0x10;
      uStack_1d0 = uVar13;
      func_0x00010a208614(plVar8,&uStack_1d0);
      if (plVar8 != (long *)0x0) {
        if (bVar6) {
          *(undefined1 *)((long)plVar14 + 0x72) = uVar16;
        }
        plVar14 = param_2;
        FUN_10a250188(param_2,(int)plVar8[3] == 1);
        uStack_c8 = (undefined4)plVar8[3];
        uStack_c4 = *(undefined2 *)((long)plVar8 + 0x1c);
        FUN_10a2086b4(&uStack_c0,plVar8 + 4);
        uStack_98 = (undefined4)plVar8[9];
        uStack_94 = (undefined4)((ulong)plVar8[9] >> 0x20);
        uStack_a0 = (undefined4)plVar8[8];
        uStack_9c = (undefined4)((ulong)plVar8[8] >> 0x20);
        fStack_a8 = (float)plVar8[7];
        fStack_a4 = (float)((ulong)plVar8[7] >> 0x20);
        fStack_b0 = (float)plVar8[6];
        uStack_ac = (undefined4)((ulong)plVar8[6] >> 0x20);
        plStack_1c8 = (long *)0x0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        plStack_1c0 = (long *)0x0;
        fStack_1b0 = 1.0;
        fStack_1ac = 0.0;
        fStack_1a8 = 0.0;
        uStack_1a4 = 0;
        FUN_10a2086b4(&uStack_1d0,&uStack_c0);
        plVar8 = plStack_f8;
        plStack_f8 = plStack_1c8;
        uStack_100 = uStack_1d0;
        uStack_1b8 = CONCAT44(uStack_94,uStack_98);
        plStack_1c0 = (long *)CONCAT44(uStack_9c,uStack_a0);
        fStack_1b0 = fStack_b0;
        fStack_1ac = fStack_a8;
        fStack_1a8 = fStack_a4;
        uStack_1a4 = uStack_ac;
        uStack_1d0 = 0;
        plStack_1c8 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar12 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_1c8;
        uStack_d8 = CONCAT44(uStack_1a4,fStack_1a8);
        uStack_e0 = CONCAT44(fStack_1ac,fStack_1b0);
        uStack_e8 = uStack_1b8;
        plStack_f0 = plStack_1c0;
        if (plStack_1c8 != (long *)0x0) {
          plVar1 = plStack_1c8 + 1;
          do {
            lVar12 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        *(float *)((long)plVar14 + 0x7c) = fStack_b0;
        *(float *)(plVar14 + 0x10) = fStack_a8;
        *(float *)((long)plVar14 + 0x84) = fStack_a4;
        fVar19 = 0.0;
        fVar17 = fStack_b0;
        if ((char)uStack_c4 == '\x01') {
          fVar17 = fStack_b0 * param_1 * (fStack_a8 + fStack_a4);
          *(float *)(plVar14 + 0xf) = fVar17;
        }
        uVar18 = (ulong)(uint)fVar17;
        bVar6 = true;
      }
      lVar15 = lVar15 + uVar13 * 0xc;
      plVar8 = (long *)plVar11[7];
      fVar17 = fVar19;
      if (plVar8[5] == plVar8[3] || plVar8[6] == plVar8[4]) {
        if (!bVar6) goto LAB_10a250b08;
        FUN_10a24d4f4(plVar14 + 2);
        lVar12 = *param_3;
        uVar10 = (param_3[1] - lVar12 >> 3) * -0x3333333333333333;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a250b08;
        (**(code **)(*(long *)plVar11[7] + 0x50))();
        uVar10 = (param_3[0x19] - param_3[0x18] >> 3) * -0x5555555555555555;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a250b08;
        plVar8 = (long *)(param_3[0x18] + uVar13 * 0x18);
        lStack_200 = 0;
        lStack_1f8 = 0;
        uStack_1f0 = 0;
        lVar2 = *plVar8;
        lVar3 = plVar8[1];
        FUN_10a0e9a40(&lStack_200,lVar2,lVar3,lVar3 - lVar2 >> 2);
        if (((ulong)(param_3[0x16] - param_3[0x15] >> 2) <= uVar13) ||
           ((ulong)(param_3[0x1c] - param_3[0x1b] >> 2) <= uVar13)) goto LAB_10a250b08;
        unaff_x24 = unaff_x24 & 0xffffffffffffff00 | 1;
        FUN_10a250bbc(&uStack_1d0,fVar19,0,uVar18,0,0,lVar15,plVar11 + 7,lVar12 + uVar13 * 0x28,
                      &lStack_200,(long)*(int *)(param_3[0x15] + uVar13 * 4),unaff_x24,1,
                      *(undefined4 *)(param_3[0x1b] + uVar13 * 4),&uStack_100);
        FUN_10a208000(plVar14 + 2,&uStack_1d0);
        plVar8 = plStack_178;
        if (plStack_178 != (long *)0x0) {
          plVar1 = plStack_178 + 1;
          do {
            lVar12 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (lStack_198 != 0) {
          lStack_190 = lStack_198;
          __ZdlPv();
        }
        if (plStack_1c8 != (long *)0x0) {
          plStack_1c0 = plStack_1c8;
          __ZdlPv();
        }
        if (lStack_200 != 0) {
          lStack_1f8 = lStack_200;
          __ZdlPv();
        }
LAB_10a2508a8:
        uVar16 = 1;
      }
      else {
        if ((!bVar6) ||
           (lVar12 = *param_3, uVar10 = (param_3[1] - lVar12 >> 3) * -0x3333333333333333,
           uVar10 < uVar13 || uVar10 - uVar13 == 0)) goto LAB_10a250b08;
        (**(code **)(*plVar8 + 0x50))();
        uVar10 = (param_3[0x19] - param_3[0x18] >> 3) * -0x5555555555555555;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_10a250b08;
        plVar8 = (long *)(param_3[0x18] + uVar13 * 0x18);
        lStack_1e8 = 0;
        lStack_1e0 = 0;
        uStack_1d8 = 0;
        lVar2 = *plVar8;
        lVar3 = plVar8[1];
        FUN_10a0e9a40(&lStack_1e8,lVar2,lVar3,lVar3 - lVar2 >> 2);
        if (((ulong)(param_3[0x16] - param_3[0x15] >> 2) <= uVar13) ||
           ((ulong)(param_3[0x1c] - param_3[0x1b] >> 2) <= uVar13)) goto LAB_10a250b08;
        uStack_210 = uStack_210 & 0xffffffffffffff00 | 1;
        FUN_10a250bbc(&uStack_1d0,fVar19,0,uVar18,0,0,lVar15,plVar11 + 7,lVar12 + uVar13 * 0x28,
                      &lStack_1e8,(long)*(int *)(param_3[0x15] + uVar13 * 4),uStack_210,0,
                      *(undefined4 *)(param_3[0x1b] + uVar13 * 4),&uStack_100);
        FUN_10a208000(plVar14 + 2,&uStack_1d0);
        plVar8 = plStack_178;
        if (plStack_178 != (long *)0x0) {
          plVar1 = plStack_178 + 1;
          do {
            lVar12 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (lStack_198 != 0) {
          lStack_190 = lStack_198;
          __ZdlPv();
        }
        if (plStack_1c8 != (long *)0x0) {
          plStack_1c0 = plStack_1c8;
          __ZdlPv();
        }
        if (lStack_1e8 != 0) {
          lStack_1e0 = lStack_1e8;
          __ZdlPv();
        }
        if (uStack_c4._1_1_ == '\x01') {
          FUN_10a24d4f4(plVar14 + 2);
          goto LAB_10a2508a8;
        }
        uVar16 = 0;
      }
      iVar4 = *(int *)(lVar15 + 8);
      (**(code **)(*(long *)plVar11[7] + 0x50))();
      fVar17 = fVar17 * (float)iVar4 * (float)uStack_e0;
      if ((char)uStack_c4 == '\x01') {
        fVar17 = fVar17 + *(float *)(plVar14 + 0xf);
      }
      uVar18 = (ulong)(uint)fVar17;
      fVar19 = fVar19 + fVar17;
      uVar13 = uVar13 + 1;
      lVar15 = *param_3;
      uVar10 = (param_3[1] - lVar15 >> 3) * -0x3333333333333333;
      bVar6 = true;
    } while (uVar13 <= uVar10 && uVar10 - uVar13 != 0);
    *(undefined1 *)((long)plVar14 + 0x72) = 0;
  }
  param_3 = param_3 + 0xb;
  uStack_1d0 = uVar10;
  FUN_10a208574(param_3,&uStack_1d0);
  if ((param_3 != (long *)0x0) && (uStack_1d0 != 0)) {
    FUN_10a24ff0c(param_2,param_3 + 3);
  }
  plVar14 = (long *)param_2[1];
  if (plVar14 != param_2) {
    bVar9 = 0;
    do {
      plVar11 = (long *)plVar14[6];
      while (plVar11 != plVar14 + 5) {
        if ((bVar9 & 1) != 0) {
          uStack_204 = 0xffffffff;
          func_0x0001078db2bc((undefined8 *)(plVar11[2] + 0x28),*(undefined8 *)(plVar11[2] + 0x28),
                              &uStack_204);
        }
        lVar15 = 0x71;
        if (*(char *)(plVar11[2] + 0x70) == '\0') {
          lVar15 = 0x72;
        }
        bVar9 = *(byte *)(plVar11[2] + lVar15);
        plVar11 = (long *)plVar11[1];
      }
      plVar14 = (long *)plVar14[1];
    } while (plVar14 != param_2);
  }
  FUN_10a250260(param_2);
  if (*(int *)(param_4 + 0x18) < 0x152) {
    while ((param_2[2] != 0 && (*(long *)(param_2[1] + 0x20) == 0))) {
      FUN_10a208380(param_2);
    }
    while ((param_2[2] != 0 && (*(long *)(*param_2 + 0x20) == 0))) {
      func_0x00010a2083c8(param_2);
    }
    for (plVar14 = (long *)param_2[1]; plVar14 != param_2; plVar14 = (long *)plVar14[1]) {
      if (plVar14[4] != 0) {
        lVar15 = plVar14[3];
        plVar11 = (long *)(lVar15 + 0x10);
        if ((*plVar11 != *(long *)(lVar15 + 0x18)) &&
           (plVar8 = (long *)(plVar14[2] + 0x10), *plVar8 != *(long *)(plVar14[2] + 0x18))) {
          plVar1 = plVar11;
          if (*(char *)(lVar15 + 0x70) == '\0') {
            plVar1 = plVar8;
            plVar8 = plVar11;
          }
          FUN_10a250ea8(plVar8,plVar1);
        }
      }
    }
  }
  plVar14 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar11 = plStack_f8 + 1;
    do {
      lVar15 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 1;
    do {
      lVar15 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  return;
}



/* Entry: 10a250bbc; end: 10a250ea7;  */

void FUN_10a250bbc(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,long *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined8 param_11,undefined1 param_12,int param_13,
                  undefined4 param_14,long param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  fVar13 = *(float *)(param_15 + 0x20);
  param_4 = param_4 * fVar13;
  plVar8 = (long *)*param_8;
  lVar1 = plVar8[5];
  lVar3 = plVar8[6];
  lVar2 = plVar8[3];
  lVar4 = plVar8[4];
  fVar9 = param_4 * (*param_7 - param_5);
  fVar12 = param_2 + fVar9;
  param_3 = param_3 + param_4 * (param_6 + param_7[1]);
  plVar6 = plVar8;
  ___dynamic_cast(plVar8,&PTR_DAT_110c48fb0,&PTR_DAT_110c46458,0);
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar8;
    ___dynamic_cast(plVar8,&PTR_DAT_110c48fb0,&PTR_DAT_110bc8520,0);
    if (plVar6 != (long *)0x0) {
      fVar14 = *(float *)(plVar6 + 0x17);
      (**(code **)(*plVar8 + 0x50))(plVar8);
      fVar12 = fVar12 + fVar13 * fVar14 * fVar9;
    }
  }
  else {
    (**(code **)(*plVar8 + 0x50))(plVar8);
    param_8 = (long *)*param_8;
    fVar12 = fVar12 + fVar13 * fVar9 * (float)lVar2;
    fVar9 = (float)param_8[4];
    fVar14 = (float)(param_8[6] - param_8[4]) - fVar9;
    (**(code **)(*param_8 + 0x50))();
    param_3 = param_3 + fVar13 * -(fVar14 * fVar9);
  }
  fVar14 = param_4 * (float)(lVar1 - lVar2) + fVar12;
  fVar13 = param_7[2];
  fVar9 = fVar14;
  if ((param_13 != 0) && (ABS(fVar14 - fVar12) < 1.1920929e-07)) {
    fVar9 = (fVar12 - (fVar12 - param_2)) + param_4 * (float)(int)fVar13;
  }
  piVar5 = (int *)param_10[1];
  for (piVar7 = (int *)*param_10; piVar7 != piVar5; piVar7 = piVar7 + 1) {
    *piVar7 = (int)(long)(param_4 * (float)*piVar7);
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x3f800000;
  uStack_b8 = 0;
  FUN_10a2086b4(&uStack_e0,param_15);
  uStack_d0 = CONCAT44((float)((ulong)*(undefined8 *)(param_15 + 0x10) >> 0x20) * param_4,
                       (float)*(undefined8 *)(param_15 + 0x10) * param_4);
  uStack_c8 = CONCAT44((float)((ulong)*(undefined8 *)(param_15 + 0x18) >> 0x20) * param_4,
                       (float)*(undefined8 *)(param_15 + 0x18) * param_4);
  uStack_c0 = *(undefined8 *)(param_15 + 0x20);
  uStack_b8 = *(undefined8 *)(param_15 + 0x28);
  *param_1 = *param_9;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_10a0ca588();
  uVar11 = *param_10;
  param_1[8] = param_10[1];
  param_1[7] = uVar11;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  param_1[0xd] = uStack_c8;
  param_1[0xc] = uStack_d0;
  fVar10 = param_4 * (float)(lVar3 - lVar4) + param_3;
  param_1[4] = param_9[4];
  param_1[5] = param_11;
  *(undefined1 *)(param_1 + 6) = param_12;
  param_1[9] = param_10[2];
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  param_1[0xf] = uStack_b8;
  param_1[0xe] = uStack_c0;
  *(float *)(param_1 + 0x10) = fVar12;
  *(float *)((long)param_1 + 0x84) = param_3;
  *(float *)(param_1 + 0x11) = fVar14;
  *(float *)((long)param_1 + 0x8c) = fVar10;
  *(float *)(param_1 + 0x12) = fVar12;
  *(float *)((long)param_1 + 0x94) = param_3;
  *(float *)(param_1 + 0x13) = fVar9;
  *(float *)((long)param_1 + 0x9c) = fVar10;
  *(float *)(param_1 + 0x14) = param_5 * param_4;
  *(float *)((long)param_1 + 0xa4) = param_6 * param_4;
  *(float *)(param_1 + 0x15) = param_4 * (float)(int)fVar13;
  *(float *)((long)param_1 + 0xac) = fVar12 - param_2;
  *(undefined4 *)(param_1 + 0x16) = param_14;
  param_1[0x17] = 0;
  *(char *)(param_1 + 0x18) = (char)param_13;
  return;
}



/* Entry: 10a250ea8; end: 10a2510f7;  */

/* WARNING: Possible PIC construction at 0x00010a250f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2510d0) */

void FUN_10a250ea8(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long *unaff_x19;
  long *unaff_x20;
  int *piVar16;
  ulong unaff_x21;
  ulong uVar17;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = *param_1;
  uVar17 = (param_1[1] - lVar3 >> 3) * -0x70a3d70a3d70a3d7;
  if (0 < (int)uVar17) {
    uVar9 = 0;
    lVar15 = 0xc0;
    do {
      if (uVar17 - uVar9 == 0) goto LAB_10a251008;
      if (*(char *)(lVar3 + lVar15) != '\x01') {
        if ((int)uVar9 == 0) goto LAB_10a250f44;
        goto LAB_10a250f1c;
      }
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 200;
    } while ((uVar17 & 0x7fffffff) != uVar9);
    uVar9 = uVar17;
    if ((int)uVar17 != 0) {
LAB_10a250f1c:
      FUN_10a208e24(param_1,lVar3,lVar3 + (uVar9 & 0xffffffff) * 200);
      uVar7 = 0;
      unaff_x30 = 0x10a250f44;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      uVar17 = uVar9;
      unaff_x19 = param_2;
      unaff_x20 = param_1;
      unaff_x21 = uVar9;
      unaff_x22 = 0x8f5c28f5c28f5c29;
      unaff_x29 = puVar1;
      param_2 = param_1;
      goto SUB_10a25100c;
    }
  }
LAB_10a250f44:
  lVar3 = *param_2;
  uVar11 = (param_2[1] - lVar3 >> 3) * -0x70a3d70a3d70a3d7;
  uVar10 = (uint)uVar11;
  uVar2 = uVar10 & (int)uVar10 >> 0x1f;
  uVar9 = uVar11;
  uVar17 = uVar11;
  do {
    uVar17 = uVar17 - 1;
    uVar13 = (uint)uVar9;
    uVar9 = (ulong)(uVar13 - 1);
    uVar7 = uVar2;
    uVar14 = uVar2 - 1;
    if ((int)uVar13 < 1) break;
    if (uVar11 < (uVar17 & 0xffffffff) || uVar11 - (uVar17 & 0xffffffff) == 0) {
LAB_10a251008:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a25100c);
      (*pcVar6)();
    }
    uVar7 = uVar13;
    uVar14 = uVar13 - 1;
  } while ((*(byte *)(lVar3 + (uVar17 & 0xffffffff) * 200 + 0xc0) & 1) != 0);
  if (uVar7 == uVar10) {
    return;
  }
  FUN_10a208e24(param_2,lVar3 + (long)(int)uVar14 * 200 + 200);
  uVar9 = (ulong)(uint)((int)((ulong)(param_2[1] - *param_2) >> 3) * -0x3d70a3d7);
  uVar17 = 0;
SUB_10a25100c:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  piVar16 = (int *)param_2[3];
  piVar4 = (int *)param_2[4];
  piVar12 = piVar16;
  if (piVar16 == piVar4) {
LAB_10a2510b4:
    if (piVar4 < piVar16) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2510f8);
      (*pcVar6)();
    }
    if (piVar16 != piVar4) {
      param_2[4] = (long)piVar16;
    }
  }
  else {
    do {
      iVar5 = *piVar12;
      if (iVar5 < (int)uVar7 || (int)uVar9 <= iVar5) {
        if ((int)uVar7 <= iVar5) goto LAB_10a251058;
      }
      else {
        iVar5 = -1;
LAB_10a251058:
        iVar8 = (int)uVar17;
        if (iVar5 < (int)uVar7) {
          iVar8 = 0;
        }
        *piVar12 = iVar5 - iVar8;
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar4);
    do {
      if (*piVar16 < 0) {
        piVar12 = piVar16;
        if (piVar16 != piVar4) {
          while (piVar12 = piVar12 + 1, piVar12 != piVar4) {
            if (-1 < *piVar12) {
              *piVar16 = *piVar12;
              piVar16 = piVar16 + 1;
            }
          }
        }
        goto LAB_10a2510b4;
      }
      piVar16 = piVar16 + 1;
    } while (piVar16 != piVar4);
  }
  return;
}



/* Entry: 10a2510f8; end: 10a25117b;  */

float FUN_10a2510f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0.0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == param_1) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
    do {
      lVar3 = *(long *)(lVar2 + 0x128);
      lVar1 = *(long *)(lVar2 + 0x130);
      if (lVar3 != lVar1) {
        do {
          fVar4 = fVar4 + *(float *)(lVar3 + 8);
          lVar3 = lVar3 + 0xc;
        } while (lVar3 != lVar1);
        fVar5 = *(float *)(lVar1 + -0xc) + *(float *)(lVar1 + -8);
        fVar6 = *(float *)(lVar1 + -4);
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_1);
  }
  return fVar4 - (fVar6 - fVar5);
}



/* Entry: 10a25117c; end: 10a25129f;  */

void FUN_10a25117c(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fStack_44;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = lVar5 + 0x10;
      FUN_10a24d004(lVar2);
      lVar3 = lVar2 + lVar3;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_2);
  }
  func_0x0001073b504c(param_1,lVar3);
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = lVar5 + 0x10;
      FUN_10a24d004(lVar2);
      lVar3 = lVar2 + lVar3;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_2);
  }
  func_0x0001073b504c(param_1 + 3,lVar3);
  for (lVar5 = *(long *)(param_2 + 8); lVar5 != param_2; lVar5 = *(long *)(lVar5 + 8)) {
    pfVar1 = *(float **)(lVar5 + 0x130);
    for (pfVar4 = *(float **)(lVar5 + 0x128); pfVar4 != pfVar1; pfVar4 = pfVar4 + 3) {
      fStack_44 = *pfVar4 + pfVar4[1];
      FUN_10a001c34(param_1,&fStack_44);
      FUN_10a0ca014(param_1 + 3,pfVar4 + 2);
    }
  }
  return;
}



/* Entry: 10a2512a0; end: 10a2512df;  */

long * FUN_10a2512a0(long *param_1)

{
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



/* Entry: 10a2512e0; end: 10a25145b;  */

void FUN_10a2512e0(undefined8 param_1,long *param_2,float *param_3)

{
  float *pfVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar7;
  
  *(undefined4 *)(param_2 + 3) = 0x3f800000;
  if (param_2[2] != 0) {
    bVar2 = true;
    if ((1.0 <= param_3[2] - *param_3) && (bVar2 = false, !NAN(param_3[3] - param_3[1]))) {
      bVar2 = param_3[3] - param_3[1] < 1.0;
    }
    if (bVar2) {
      *(undefined4 *)(param_2 + 3) = 0;
      if (param_2[2] != 0) {
        plVar8 = (long *)param_2[1];
        plVar3 = *(long **)(*param_2 + 8);
        lVar4 = *plVar8;
        *(long **)(lVar4 + 8) = plVar3;
        *plVar3 = lVar4;
        param_2[2] = 0;
        while (plVar8 != param_2) {
          plVar3 = (long *)plVar8[1];
          func_0x00010a208aac(plVar8 + 2);
          __ZdlPv(plVar8);
          plVar8 = plVar3;
        }
      }
      return;
    }
    for (plVar8 = (long *)param_2[1]; plVar8 != param_2; plVar8 = (long *)plVar8[1]) {
      FUN_10a24d554(param_1,plVar8 + 2);
    }
    FUN_10a2510f8(param_2);
    if ((0.0 < (float)param_1) && (plVar8 = (long *)param_2[1], plVar8 != param_2)) {
      fVar9 = (param_3[3] - param_3[1]) / (float)param_1;
      fVar10 = 0.0;
      do {
        while (plVar8[8] != plVar8[9]) {
          pfVar5 = (float *)plVar8[0x14];
          pfVar1 = (float *)plVar8[0x15];
          if (pfVar5 != pfVar1) {
            fVar11 = 0.0;
            pfVar6 = pfVar5;
            do {
              pfVar7 = pfVar6 + 2;
              if (fVar11 <= pfVar6[1] - *pfVar6) {
                fVar11 = pfVar6[1] - *pfVar6;
              }
              pfVar6 = pfVar7;
            } while (pfVar7 != pfVar1);
            if (fVar10 < fVar11) {
              fVar10 = 0.0;
              do {
                pfVar6 = pfVar5 + 2;
                if (fVar10 <= pfVar5[1] - *pfVar5) {
                  fVar10 = pfVar5[1] - *pfVar5;
                }
                pfVar5 = pfVar6;
              } while (pfVar6 != pfVar1);
            }
            break;
          }
          if (0.0 <= fVar10) break;
          plVar8 = (long *)plVar8[1];
          fVar10 = 0.0;
          if (plVar8 == param_2) {
            return;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != param_2);
      if (fVar10 != 0.0) {
        fVar10 = (param_3[2] - *param_3) / fVar10;
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        *(float *)(param_2 + 3) = fVar10;
      }
    }
  }
  return;
}



/* Entry: 10a25145c; end: 10a251b4b;  */

void FUN_10a25145c(undefined8 param_1,long *param_2,float *param_3,int param_4,int param_5,
                  uint param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  float *pfVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfStack_270;
  float *pfStack_268;
  long lStack_258;
  long lStack_250;
  undefined1 auStack_240 [208];
  undefined1 auStack_170 [208];
  float *pfVar10;
  
  *(undefined4 *)(param_2 + 3) = 0x3f800000;
  if (((param_4 == 3) && (param_3[2] - *param_3 < 1.0)) ||
     ((param_5 == 2 && (param_3[3] - param_3[1] < 1.0)))) {
    if (param_2[2] != 0) {
      plVar15 = (long *)param_2[1];
      plVar5 = *(long **)(*param_2 + 8);
      lVar7 = *plVar15;
      *(long **)(lVar7 + 8) = plVar5;
      *plVar5 = lVar7;
      param_2[2] = 0;
      while (plVar15 != param_2) {
        plVar5 = (long *)plVar15[1];
        func_0x00010a208aac(plVar15 + 2);
        __ZdlPv(plVar15);
        plVar15 = plVar5;
      }
    }
    return;
  }
  if (param_5 == 2) {
    fVar21 = (param_3[2] - *param_3) * 0.975;
    if ((param_4 == 2) && (plVar15 = (long *)param_2[1], plVar15 != param_2)) {
      uVar13 = 1;
      do {
        plVar5 = plVar15 + 2;
        func_0x00010a24d95c(fVar21,(int)param_2[3],plVar5,1);
        uVar13 = uVar13 & (uint)plVar5;
        plVar15 = (long *)plVar15[1];
      } while (plVar15 != param_2);
    }
    else {
      uVar13 = 1;
    }
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a24d554(param_1,plVar15 + 2);
    }
    uVar19 = param_1;
    FUN_10a2510f8(param_2);
    if ((uVar13 == 0) && (plVar15 = (long *)param_2[1], plVar15 != param_2)) {
      fVar18 = 1.1754944e-38;
      do {
        pfVar6 = (float *)plVar15[0x14];
        fVar16 = 0.0;
        while (pfVar6 != (float *)plVar15[0x15]) {
          pfVar9 = pfVar6 + 2;
          fVar20 = *pfVar6;
          pfVar2 = pfVar6 + 1;
          pfVar6 = pfVar9;
          if (fVar16 <= *pfVar2 - fVar20) {
            fVar16 = *pfVar2 - fVar20;
          }
        }
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
        fVar18 = fVar16;
        plVar15 = (long *)plVar15[1];
      } while (plVar15 != param_2);
    }
    else {
      fVar18 = 1.1754944e-38;
    }
    fVar16 = (param_3[3] - param_3[1]) / (float)uVar19;
    if (fVar21 / fVar18 <= fVar16) {
      fVar16 = fVar21 / fVar18;
    }
    if (fVar16 < 1.0) {
      if (param_4 == 2) {
        iVar14 = 0;
        fVar22 = 1.0;
        fVar18 = fVar16;
        fVar20 = fVar16;
        fVar17 = (fVar16 + 1.0) * 0.5;
        do {
          fVar16 = fVar17;
          plVar15 = (long *)param_2[1];
          if (plVar15 != param_2) {
            do {
              plVar5 = plVar15 + 2;
              func_0x00010a24d95c(fVar21,fVar16,plVar5,1);
              if (((ulong)plVar5 & 1) == 0) goto LAB_10a2516cc;
              plVar15 = (long *)plVar15[1];
            } while (plVar15 != param_2);
            plVar15 = (long *)param_2[1];
          }
          for (; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
            FUN_10a24d554(param_1,plVar15 + 2);
          }
          uVar19 = param_1;
          FUN_10a2510f8(param_2);
          fVar17 = fVar16 * (float)uVar19;
          if (fVar17 <= param_3[3] - param_3[1]) {
            fVar17 = (param_3[3] - param_3[1]) / fVar17;
            if (ABS(fVar17 + -1.0) < 1e-06) break;
            fVar17 = fVar16 * fVar17;
            fVar20 = fVar16;
            if ((fVar22 < fVar17) || (fVar18 = fVar16, ABS(fVar17 - fVar22) < 1e-06)) {
              fVar17 = (fVar16 + fVar22) * 0.5;
              fVar18 = fVar16;
            }
          }
          else {
LAB_10a2516cc:
            fVar17 = (fVar20 + fVar16) * 0.5;
            fVar22 = fVar16;
          }
          fVar16 = fVar18;
          iVar14 = iVar14 + 1;
          fVar18 = fVar16;
        } while (iVar14 != 0x10);
      }
      *(float *)(param_2 + 3) = fVar16;
    }
  }
  if (param_4 < 4) {
    if (param_4 == 1) {
      for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
        FUN_10a24e354(auStack_170,param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_8);
        FUN_10a20a078(auStack_170);
      }
    }
    else if (param_4 == 2) {
      plVar15 = (long *)param_2[1];
      if (plVar15 != param_2) {
        uVar13 = 0;
        if ((param_6 & 0x100) != 0) {
          uVar13 = param_6;
        }
        do {
          func_0x00010a24d95c(param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,uVar13 & 0xff);
          plVar15 = (long *)plVar15[1];
        } while (plVar15 != param_2);
      }
    }
    else if (param_4 == 3) {
      for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
        FUN_10a24da00(plVar15 + 2);
        pfVar6 = (float *)plVar15[0x14];
        pfVar2 = (float *)plVar15[0x15];
        if (pfVar6 == pfVar2) {
          fVar21 = 0.0;
          fVar18 = param_3[2] - *param_3;
          if (fVar18 < *(float *)(param_2 + 3) * 0.0) goto LAB_10a2517f8;
        }
        else {
          fVar21 = 0.0;
          pfVar9 = pfVar6;
          do {
            pfVar10 = pfVar9 + 2;
            if (fVar21 <= pfVar9[1] - *pfVar9) {
              fVar21 = pfVar9[1] - *pfVar9;
            }
            pfVar9 = pfVar10;
          } while (pfVar10 != pfVar2);
          fVar18 = param_3[2] - *param_3;
          if (fVar18 < fVar21 * *(float *)(param_2 + 3)) {
            fVar21 = 0.0;
            do {
              pfVar9 = pfVar6 + 2;
              if (fVar21 <= pfVar6[1] - *pfVar6) {
                fVar21 = pfVar6[1] - *pfVar6;
              }
              pfVar6 = pfVar9;
            } while (pfVar9 != pfVar2);
LAB_10a2517f8:
            *(float *)(param_2 + 3) = fVar18 / fVar21;
          }
        }
      }
    }
  }
  else if (param_4 == 4) {
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a251b4c(param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_7,param_2 + 4,0,param_8)
      ;
    }
  }
  else if (param_4 == 6) {
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a24e644(auStack_240,param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_8);
      FUN_10a20a078(auStack_240);
    }
  }
  else if (param_4 == 5) {
    for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
      FUN_10a251b4c(param_3[2] - *param_3,(int)param_2[3],plVar15 + 2,param_7,param_2 + 4,1,param_8)
      ;
    }
  }
  for (plVar15 = (long *)param_2[1]; plVar15 != param_2; plVar15 = (long *)plVar15[1]) {
    FUN_10a24d554(param_1,plVar15 + 2);
  }
  if (param_5 == 1) {
    FUN_10a25117c(&pfStack_270,param_2);
    uVar12 = 1;
    if ((pfStack_270 != pfStack_268) && (0.0 < param_3[3] - param_3[1])) {
      fVar21 = *(float *)(param_2 + 3);
      if ((fVar21 <= 0.0) || (uVar8 = (long)pfStack_268 - (long)pfStack_270 >> 2, uVar8 < 2)) {
        uVar12 = 1;
      }
      else {
        fVar16 = fVar21 * *pfStack_270;
        uVar11 = 1;
        fVar18 = *pfStack_270;
        do {
          pfVar6 = pfStack_270 + uVar11;
          fVar16 = fVar16 + fVar21 * (*pfVar6 + ((float)param_1 + -1.0) * fVar18);
          uVar12 = uVar11;
          if (param_3[3] - param_3[1] < fVar16) break;
          uVar11 = uVar11 + 1;
          uVar12 = uVar8;
          fVar18 = *pfVar6;
        } while (uVar8 != uVar11);
        uVar12 = uVar12 & 0xffffffff;
      }
    }
    plVar15 = (long *)param_2[1];
    if (plVar15 != param_2) {
      uVar8 = 0;
      do {
        plVar5 = plVar15 + 2;
        FUN_10a24d004();
        uVar8 = (long)plVar5 + uVar8;
        plVar3 = (long *)(uVar8 - uVar12);
        if (uVar12 <= uVar8 && plVar3 != (long *)0x0) {
          lVar7 = (long)plVar5 - (long)plVar3;
          if (plVar5 < plVar3 || lVar7 == 0) {
            func_0x00010a209e50(param_2,plVar15,param_2);
            break;
          }
          lVar1 = plVar15[0xe];
          uVar12 = lVar7 - 1;
          if (uVar12 < (ulong)(plVar15[0xf] - lVar1 >> 3)) {
            func_0x00010a209ec8(plVar15 + 8,*(long *)(lVar1 + uVar12 * 8) + 1);
            lVar1 = plVar15[0x11];
            if (uVar12 < (ulong)(plVar15[0x12] - lVar1 >> 3)) {
              FUN_10a209f54(plVar15 + 0xb,*(long *)(lVar1 + uVar12 * 8) + 1);
              func_0x000107380640(plVar15 + 0xe,uVar12);
              func_0x000107380640(plVar15 + 0x11,uVar12);
              func_0x00010a209f90(plVar15 + 0x25,lVar7);
              func_0x00010a209e50(param_2,plVar15[1],param_2);
              break;
            }
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a251b30);
          (*pcVar4)();
        }
        plVar15 = (long *)plVar15[1];
      } while (plVar15 != param_2);
    }
    if (lStack_258 != 0) {
      lStack_250 = lStack_258;
      __ZdlPv();
    }
    if (pfStack_270 != (float *)0x0) {
      pfStack_268 = pfStack_270;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a251b4c; end: 10a25279f;  */

void FUN_10a251b4c(float param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 **param_5,uint param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 **ppuVar11;
  undefined8 ***pppuVar12;
  undefined4 uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_510;
  long *plStack_508;
  undefined8 **ppuStack_500;
  undefined2 uStack_4f8;
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  char cStack_4d8;
  undefined4 uStack_4d0;
  undefined1 auStack_4c8 [8];
  long *plStack_4c0;
  undefined8 **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  float fStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  byte bStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined2 uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  char cStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  
  FUN_10a24da00();
  plVar20 = (long *)(param_3 + 0x30);
  puVar3 = (undefined8 *)*plVar20;
  puVar4 = *(undefined8 **)(param_3 + 0x38);
  if (puVar3 == puVar4) {
    return;
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)*(byte *)(*(long *)(param_3 + 8) + 0x70);
  }
  pfVar15 = *(float **)(param_3 + 0x90);
  fVar21 = 0.0;
  while (pfVar15 != *(float **)(param_3 + 0x98)) {
    pfVar16 = pfVar15 + 2;
    fVar22 = *pfVar15;
    pfVar8 = pfVar15 + 1;
    pfVar15 = pfVar16;
    if (fVar21 <= *pfVar8 - fVar22) {
      fVar21 = *pfVar8 - fVar22;
    }
  }
  if (fVar21 < param_1) {
    return;
  }
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_158 = 0;
  lStack_160 = 0;
  uStack_14f = 0;
  uStack_148 = 0;
  uStack_157 = 0;
  uStack_150 = 0;
  lStack_130 = 0;
  lStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  plStack_118 = (long *)0x0;
  uStack_108 = 0;
  uStack_b8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  fStack_100 = 1.0;
  uStack_cc = 0;
  if (param_6 == 0) {
    uStack_170 = puVar4[-0x19];
    if (&uStack_170 == puVar4 + -0x19) {
      uStack_150 = (undefined1)puVar4[-0x15];
      uStack_14f = (undefined7)((ulong)puVar4[-0x15] >> 8);
      uStack_140 = *(undefined1 *)(puVar4 + -0x13);
      uStack_148 = (undefined1)puVar4[-0x14];
      uStack_147 = (undefined7)((ulong)puVar4[-0x14] >> 8);
    }
    else {
      func_0x00010a14ddc8((ulong)&uStack_170 | 8,puVar4[-0x18],puVar4[-0x17],
                          (long)(puVar4[-0x17] - puVar4[-0x18]) >> 2);
      uStack_150 = (undefined1)puVar4[-0x15];
      uStack_14f = (undefined7)((ulong)puVar4[-0x15] >> 8);
      uStack_140 = *(undefined1 *)(puVar4 + -0x13);
      uStack_148 = (undefined1)puVar4[-0x14];
      uStack_147 = (undefined7)((ulong)puVar4[-0x14] >> 8);
      FUN_10a0ea4a0(&lStack_138,puVar4[-0x12],puVar4[-0x11],
                    (long)(puVar4[-0x11] - puVar4[-0x12]) >> 2);
    }
    FUN_10a2086b4(&uStack_120,puVar4 + -0xf);
    uStack_108 = puVar4[-0xc];
    uStack_110 = puVar4[-0xd];
    uStack_f8 = (undefined4)puVar4[-10];
    uStack_f4 = (undefined4)((ulong)puVar4[-10] >> 0x20);
    fStack_100 = (float)puVar4[-0xb];
    uStack_fc = (undefined4)((ulong)puVar4[-0xb] >> 0x20);
    uStack_e8 = (undefined4)puVar4[-8];
    uStack_e4 = (undefined4)((ulong)puVar4[-8] >> 0x20);
    uStack_f0 = (undefined4)puVar4[-9];
    uStack_ec = (undefined4)((ulong)puVar4[-9] >> 0x20);
    uStack_c8 = puVar4[-4];
    uStack_b8 = puVar4[-2];
    uStack_c0 = puVar4[-3];
    uStack_b0 = *(undefined1 *)(puVar4 + -1);
    uStack_d8 = (undefined4)puVar4[-6];
    uStack_d4 = (undefined4)((ulong)puVar4[-6] >> 0x20);
    uStack_e0 = (undefined4)puVar4[-7];
    uStack_dc = (undefined4)((ulong)puVar4[-7] >> 0x20);
    uStack_d0 = (undefined4)puVar4[-5];
    uStack_cc = (undefined4)((ulong)puVar4[-5] >> 0x20);
  }
  else {
    uStack_170 = *puVar3;
    if (&uStack_170 == puVar3) {
      uStack_140 = *(undefined1 *)(puVar3 + 6);
      uStack_150 = (undefined1)puVar3[4];
      uStack_14f = (undefined7)((ulong)puVar3[4] >> 8);
      uStack_148 = (undefined1)puVar3[5];
      uStack_147 = (undefined7)((ulong)puVar3[5] >> 8);
    }
    else {
      func_0x00010a14ddc8((ulong)&uStack_170 | 8,puVar3[1],puVar3[2],
                          (long)(puVar3[2] - puVar3[1]) >> 2);
      uStack_140 = *(undefined1 *)(puVar3 + 6);
      uStack_150 = (undefined1)puVar3[4];
      uStack_14f = (undefined7)((ulong)puVar3[4] >> 8);
      uStack_148 = (undefined1)puVar3[5];
      uStack_147 = (undefined7)((ulong)puVar3[5] >> 8);
      FUN_10a0ea4a0(&lStack_138,puVar3[7],puVar3[8],(long)(puVar3[8] - puVar3[7]) >> 2);
    }
    FUN_10a2086b4(&uStack_120,puVar3 + 10);
    uStack_108 = puVar3[0xd];
    uStack_110 = puVar3[0xc];
    uStack_f8 = (undefined4)puVar3[0xf];
    uStack_f4 = (undefined4)((ulong)puVar3[0xf] >> 0x20);
    fStack_100 = (float)puVar3[0xe];
    uStack_fc = (undefined4)((ulong)puVar3[0xe] >> 0x20);
    uStack_e8 = (undefined4)puVar3[0x11];
    uStack_e4 = (undefined4)((ulong)puVar3[0x11] >> 0x20);
    uStack_f0 = (undefined4)puVar3[0x10];
    uStack_ec = (undefined4)((ulong)puVar3[0x10] >> 0x20);
    uStack_c8 = puVar3[0x15];
    uStack_b8 = puVar3[0x17];
    uStack_c0 = puVar3[0x16];
    uStack_b0 = *(undefined1 *)(puVar3 + 0x18);
    uStack_d8 = (undefined4)puVar3[0x13];
    uStack_d4 = (undefined4)((ulong)puVar3[0x13] >> 0x20);
    uStack_e0 = (undefined4)puVar3[0x12];
    uStack_dc = (undefined4)((ulong)puVar3[0x12] >> 0x20);
    uStack_d0 = (undefined4)puVar3[0x14];
    uStack_cc = (undefined4)((ulong)puVar3[0x14] >> 0x20);
  }
  FUN_10a20a0cc(&ppuStack_1b8,&uStack_120,uStack_f4);
  fVar21 = fStack_100;
  do {
    plStack_3f0 = (long *)0x0;
    uStack_408 = 0;
    lStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    ppuStack_430 = (undefined8 **)0x0;
    uStack_418 = 0;
    uStack_420 = 0;
    *(undefined8 *)(param_3 + 200) = 0;
    *(undefined2 *)(param_3 + 0xd0) = 0;
    func_0x00010a20a7e0(param_3 + 0xd8,&uStack_420);
    *(undefined4 *)(param_3 + 0xf8) = (undefined4)uStack_400;
    func_0x00010a20a77c(param_3 + 0x100,&uStack_3f8);
    plVar2 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      plVar1 = plStack_3f0 + 1;
      do {
        lVar17 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (((char)uStack_408 == '\x01') && (lStack_410 < 0)) {
      __ZdlPv(uStack_420);
    }
    ppuVar11 = param_5;
    FUN_10a283110(param_5,&ppuStack_1b8,param_4);
    puStack_1c8 = (undefined8 *)0x0;
    puStack_1d0 = (undefined8 *)0x0;
    uStack_1c0 = 0;
    FUN_10a20b6d0(&puStack_1d0,*ppuVar11,ppuVar11[1],
                  ((long)ppuVar11[1] - (long)*ppuVar11 >> 3) * -0x70a3d70a3d70a3d7);
    while( true ) {
      puVar3 = puStack_1d0;
      if (puStack_1d0 == puStack_1c8) goto LAB_10a252600;
      fVar22 = param_1 - (float)param_2 * fVar21 * *(float *)(puStack_1d0 + 0x15);
      if (0.0 <= fVar22) break;
      lVar17 = *(long *)(param_3 + 0x30);
      lVar19 = *(long *)(param_3 + 0x38);
      if ((ulong)((lVar19 - lVar17 >> 3) * -0x70a3d70a3d70a3d7) < 2) goto LAB_10a2525e4;
      if (param_6 == 0) {
        if (lVar17 == lVar19) goto LAB_10a2526e8;
        lVar17 = lVar19 + -200;
        FUN_10a208a14(lVar17);
        *(long *)(param_3 + 0x38) = lVar17;
        if (*(long *)(param_3 + 0x30) == lVar17) goto LAB_10a2526e8;
        lVar19 = lVar19 + -400;
      }
      else {
        if (lVar19 == lVar17) goto LAB_10a2526e8;
        lVar14 = lVar17 + 200;
        func_0x00010a208f94(&ppuStack_500,lVar14,lVar19,lVar17);
        lVar17 = *(long *)(param_3 + 0x38);
        while (lVar17 != lVar14) {
          lVar17 = lVar17 + -200;
          FUN_10a208a14(lVar17);
        }
        *(long *)(param_3 + 0x38) = lVar14;
        lVar19 = *(long *)(param_3 + 0x30);
        if (lVar19 == lVar14) goto LAB_10a2526e8;
      }
      FUN_10a20a0cc(&ppuStack_430,lVar19 + 0x50,*(undefined4 *)(lVar19 + 0x7c));
      ppuStack_1b8 = ppuStack_430;
      uStack_1b0 = (undefined2)uStack_428;
      func_0x00010a20a7e0(auStack_1a8,&uStack_420);
      plVar2 = plStack_178;
      plStack_178 = plStack_3f0;
      uStack_180 = uStack_3f8;
      uStack_188 = (undefined4)uStack_400;
      uStack_3f8 = 0;
      plStack_3f0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      plVar2 = plStack_3f0;
      if (plStack_3f0 != (long *)0x0) {
        plVar1 = plStack_3f0 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if (((char)uStack_408 == '\x01') && (lStack_410 < 0)) {
        __ZdlPv(uStack_420);
      }
      fVar21 = *(float *)(lVar19 + 0x70);
      ppuVar11 = param_5;
      FUN_10a283110(param_5,&ppuStack_1b8,param_4);
      if (&puStack_1d0 != ppuVar11) {
        FUN_10a20b910(&puStack_1d0,*ppuVar11,ppuVar11[1],
                      ((long)ppuVar11[1] - (long)*ppuVar11 >> 3) * -0x70a3d70a3d70a3d7);
      }
    }
    if (puStack_1c8 == puStack_1d0) {
LAB_10a2526e8:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a2526ec);
      (*pcVar10)();
    }
    uStack_360 = *puStack_1d0;
    lStack_350 = 0;
    uStack_348 = 0;
    lStack_358 = 0;
    FUN_10a0ca588(&lStack_358,puStack_1d0[1],puStack_1d0[2],
                  (long)(puStack_1d0[2] - puStack_1d0[1]) >> 2);
    uStack_340 = puVar3[4];
    uStack_330 = puVar3[6];
    uStack_338 = puVar3[5];
    lStack_320 = 0;
    uStack_318 = 0;
    lStack_328 = 0;
    FUN_10a0e9a40(&lStack_328,puVar3[7],puVar3[8],(long)(puVar3[8] - puVar3[7]) >> 2);
    uStack_250 = uStack_318;
    lStack_258 = lStack_320;
    lStack_260 = lStack_328;
    plStack_240 = (long *)puVar3[0xb];
    uStack_248 = puVar3[10];
    if (puVar3[0xb] != 0) {
      plVar2 = (long *)(puVar3[0xb] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_2f8 = puVar3[0xd];
    uStack_300 = puVar3[0xc];
    uStack_2e8 = puVar3[0xf];
    uStack_2f0 = puVar3[0xe];
    uStack_2d8 = puVar3[0x11];
    uStack_2e0 = puVar3[0x10];
    uStack_2b8 = puVar3[0x15];
    uStack_2c0 = puVar3[0x14];
    uStack_2a8 = puVar3[0x17];
    uStack_2b0 = puVar3[0x16];
    uStack_2a0 = *(undefined1 *)(puVar3 + 0x18);
    uStack_2c8 = puVar3[0x13];
    uStack_2d0 = puVar3[0x12];
    if (1.1920929e-07 <= ABS(fVar21 + -1.0)) {
      uStack_218 = CONCAT44((float)((ulong)uStack_2e0 >> 0x20) * fVar21,(float)uStack_2e0 * fVar21);
      uStack_210 = CONCAT44((float)((ulong)uStack_2d8 >> 0x20) * fVar21,(float)uStack_2d8 * fVar21);
      uStack_208 = CONCAT44((float)((ulong)uStack_2d0 >> 0x20) * fVar21,(float)uStack_2d0 * fVar21);
      uStack_200 = CONCAT44((float)((ulong)uStack_2c8 >> 0x20) * fVar21,(float)uStack_2c8 * fVar21);
      uStack_1f8 = CONCAT44((float)((ulong)uStack_2c0 >> 0x20) * fVar21,(float)uStack_2c0 * fVar21);
      uStack_1f0 = CONCAT44((float)((ulong)uStack_2b8 >> 0x20) * fVar21,(float)uStack_2b8 * fVar21);
      uVar9 = (ulong)uStack_2f0 >> 0x20;
      uStack_2f0 = CONCAT44((int)uVar9,fVar21);
      uStack_1e8 = uStack_2b0;
      uStack_1e0 = uStack_2a8;
      uStack_1d8 = uStack_2a0;
      uStack_2e0 = uStack_218;
      uStack_2d8 = uStack_210;
      uStack_2d0 = uStack_208;
      uStack_2c8 = uStack_200;
      uStack_2c0 = uStack_1f8;
      uStack_2b8 = uStack_1f0;
    }
    else {
      uStack_210 = puVar3[0x11];
      uStack_218 = puVar3[0x10];
      uStack_200 = puVar3[0x13];
      uStack_208 = puVar3[0x12];
      uStack_1f0 = puVar3[0x15];
      uStack_1f8 = puVar3[0x14];
      uStack_1e8 = puVar3[0x16];
      uStack_1e0 = puVar3[0x17];
      uStack_1d8 = *(undefined1 *)(puVar3 + 0x18);
    }
    uStack_268 = uStack_330;
    uStack_270 = uStack_338;
    uStack_280 = uStack_348;
    lStack_288 = lStack_350;
    lStack_290 = lStack_358;
    uStack_298 = uStack_360;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    lStack_320 = 0;
    lStack_328 = 0;
    uStack_348 = 0;
    lStack_350 = 0;
    lStack_358 = 0;
    uStack_278 = uStack_340;
    lVar17 = *(long *)(param_3 + 0x30);
    lVar19 = *(long *)(param_3 + 0x38);
    ppuStack_430 = (undefined8 **)((ulong)ppuStack_430 & 0xffffffffffffff00);
    bStack_368 = 0;
    uStack_238 = uStack_300;
    uStack_230 = uStack_2f8;
    uStack_228 = uStack_2f0;
    uStack_220 = uStack_2e8;
    if (lVar17 == lVar19) {
LAB_10a2523fc:
      plVar2 = plStack_240;
      if (lVar17 != lVar19) {
        if (param_6 == 0) {
          lVar17 = lVar19 + -200;
        }
        fVar22 = -(float)uStack_1f0;
        if (((param_6 ^ uVar18) & 1) == 0) {
          fVar22 = *(float *)(lVar17 + 0xa8);
        }
        fVar22 = (uStack_1f0._4_4_ +
                 (*(float *)(lVar17 + 0x80) - *(float *)(lVar17 + 0xac)) + fVar22) -
                 (float)uStack_218;
        uStack_218 = CONCAT44((float)((ulong)uStack_218 >> 0x20) + 0.0,(float)uStack_218 + fVar22);
        uStack_210 = CONCAT44((float)((ulong)uStack_210 >> 0x20) + 0.0,(float)uStack_210 + fVar22);
        uStack_208 = CONCAT44((float)((ulong)uStack_208 >> 0x20) + 0.0,(float)uStack_208 + fVar22);
        uStack_200 = CONCAT44((float)((ulong)uStack_200 >> 0x20) + 0.0,(float)uStack_200 + fVar22);
      }
      if ((bStack_368 & 1) == 0) {
        plStack_240 = (long *)0x0;
        uStack_248 = 0;
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 1;
          do {
            lVar17 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      else {
        uVar13 = (undefined4)uStack_228;
        FUN_10a2086b4(&uStack_248,&uStack_3e0);
        uStack_220 = CONCAT44(uStack_3b4,uStack_3b8);
        uStack_230 = uStack_3c8;
        uStack_238 = uStack_3d0;
        uStack_228 = CONCAT44(uStack_3bc,uVar13);
      }
      lVar17 = *(long *)(param_3 + 0x30);
      if (lVar17 != *(long *)(param_3 + 0x38)) {
        lVar19 = lVar17;
        if (param_6 == 0) {
          lVar19 = *(long *)(param_3 + 0x38) + -200;
        }
        uStack_1e0 = *(undefined8 *)(lVar19 + 0xb8);
      }
      if (param_6 == 0) {
        FUN_10a20a72c(plVar20,&uStack_298);
      }
      else {
        FUN_10a20a504(plVar20,lVar17,&uStack_298);
      }
      *(undefined1 *)(param_3 + 0x110) = 1;
      *(undefined8 ***)(param_3 + 200) = ppuStack_1b8;
      *(undefined2 *)(param_3 + 0xd0) = uStack_1b0;
      func_0x00010a1cca60(param_3 + 0xd8,auStack_1a8);
      *(undefined4 *)(param_3 + 0xf8) = uStack_188;
      FUN_10a1c2cac(param_3 + 0x100,&uStack_180);
      FUN_10a253434(param_3);
      bVar7 = true;
    }
    else {
      if (param_6 == 0) {
        FUN_10a24e354(&ppuStack_500,fVar22,param_2,param_3,param_7);
      }
      else {
        FUN_10a24e644(&ppuStack_500,fVar22,param_2,param_3,param_7);
      }
      FUN_10a20bbf8(&ppuStack_430,&ppuStack_500);
      FUN_10a20a078(&ppuStack_500);
      if (bStack_368 == 1) {
        plStack_508 = plStack_3d8;
        uStack_510 = uStack_3e0;
        uVar13 = uStack_3b4;
        fVar22 = fStack_3c0;
        if (plStack_3d8 != (long *)0x0) {
          plVar2 = plStack_3d8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        uStack_510 = 0;
        plStack_508 = (long *)0x0;
        uVar13 = 0;
        fVar22 = 1.0;
      }
      FUN_10a20a0cc(&ppuStack_500,&uStack_510,uVar13);
      plVar2 = plStack_508;
      if (plStack_508 != (long *)0x0) {
        plVar1 = plStack_508 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_508 + 0x10))(plStack_508);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      pppuVar12 = &ppuStack_1b8;
      FUN_10a20a46c(pppuVar12,&ppuStack_500);
      if (((int)pppuVar12 == 0) || (1.1920929e-07 <= ABS(fVar21 - fVar22))) {
        ppuStack_1b8 = ppuStack_500;
        uStack_1b0 = uStack_4f8;
        func_0x00010a1cca60(auStack_1a8,auStack_4f0);
        uStack_188 = uStack_4d0;
        FUN_10a1c2cac(&uStack_180,auStack_4c8);
        bVar6 = false;
        fVar21 = fVar22;
      }
      else {
        bVar6 = true;
      }
      plVar2 = plStack_4c0;
      if (plStack_4c0 != (long *)0x0) {
        plVar1 = plStack_4c0 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((cStack_4d8 == '\x01') && (cStack_4d9 < '\0')) {
        __ZdlPv(auStack_4f0[0]);
      }
      bVar7 = false;
      if (bVar6) {
        lVar17 = *(long *)(param_3 + 0x30);
        lVar19 = *(long *)(param_3 + 0x38);
        goto LAB_10a2523fc;
      }
    }
    FUN_10a20a078(&ppuStack_430);
    plVar2 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      plVar1 = plStack_240 + 1;
      do {
        lVar17 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (lStack_260 != 0) {
      lStack_258 = lStack_260;
      __ZdlPv();
    }
    if (lStack_290 != 0) {
      lStack_288 = lStack_290;
      __ZdlPv();
    }
    ppuStack_430 = &puStack_1d0;
    func_0x00010a208c30(&ppuStack_430);
  } while (!bVar7);
LAB_10a252610:
  plVar20 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar2 = plStack_178 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if ((cStack_190 == '\x01') && (cStack_191 < '\0')) {
    __ZdlPv(auStack_1a8[0]);
  }
  plVar20 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar2 = plStack_118 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  return;
LAB_10a2525e4:
  while (lVar19 != lVar17) {
    lVar19 = lVar19 + -200;
    FUN_10a208a14(lVar19);
  }
  *(long *)(param_3 + 0x38) = lVar17;
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_3 + 0x48);
  FUN_10a253434(param_3);
LAB_10a252600:
  ppuStack_430 = &puStack_1d0;
  func_0x00010a208c30(&ppuStack_430);
  goto LAB_10a252610;
}



/* Entry: 10a2527a0; end: 10a2528fb;  */

void FUN_10a2527a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    fVar12 = 0.0;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    if (*(float **)(lVar9 + 0x130) == *(float **)(lVar9 + 0x128)) {
LAB_10a2528f8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2528fc);
      (*pcVar3)();
    }
    fVar11 = **(float **)(lVar9 + 0x128);
    if (lVar9 == param_1) {
      fVar12 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = 0.0;
      fVar12 = 0.0;
      do {
        FUN_10a24f74c(fVar10,lVar9 + 0x10);
        plVar1 = (long *)(lVar9 + 0x128);
        plVar2 = (long *)(lVar9 + 0x130);
        lVar9 = *(long *)(lVar9 + 8);
        lVar8 = *plVar2 - *plVar1;
        if (lVar8 != 0) {
          uVar4 = (lVar8 >> 2) * -0x5555555555555555;
          pfVar5 = (float *)(*plVar1 + 8);
          uVar6 = 1;
          uVar7 = uVar4;
          lVar8 = lVar9;
          do {
            if ((lVar8 == param_1) && (uVar7 == 1)) {
              fVar12 = pfVar5[-1];
              lVar8 = param_1;
            }
            else if ((lVar8 == param_1) || (uVar7 != 1)) {
              if (uVar4 < uVar6 || uVar4 - uVar6 == 0) goto LAB_10a2528f8;
              fVar10 = fVar10 + pfVar5[1] + pfVar5[-1] + (*pfVar5 - (pfVar5[-1] + pfVar5[-2]));
            }
            else {
              if (*(float **)(lVar9 + 0x130) == *(float **)(lVar9 + 0x128)) goto LAB_10a2528f8;
              fVar10 = fVar10 + **(float **)(lVar9 + 0x128) +
                                pfVar5[-1] + (*pfVar5 - (pfVar5[-1] + pfVar5[-2]));
              lVar8 = lVar9;
            }
            uVar6 = uVar6 + 1;
            pfVar5 = pfVar5 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      } while (lVar9 != param_1);
    }
    fVar12 = fVar12 + fVar11 + fVar10;
  }
  *(float *)(param_1 + 0x1c) = fVar12;
  return;
}



/* Entry: 10a2528fc; end: 10a252a87;  */

void FUN_10a2528fc(long param_1,long param_2,undefined8 param_3,int param_4,float *param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  for (lVar4 = *(long *)(param_1 + 8); lVar4 != param_1; lVar4 = *(long *)(lVar4 + 8)) {
    FUN_10a24fb90(lVar4 + 0x10,param_2,param_3);
  }
  fVar7 = param_5[1];
  fVar6 = fVar7 + *(float *)(param_1 + 0x1c);
  param_5[3] = fVar6;
  fVar5 = fVar6 - fVar7;
  if (param_4 == 0) {
    fVar8 = *(float *)(param_2 + 4);
  }
  else {
    if (param_4 != 1) {
      fVar5 = *(float *)(param_2 + 0xc);
      goto LAB_10a25299c;
    }
    fVar8 = (*(float *)(param_2 + 4) + *(float *)(param_2 + 0xc)) * 0.5;
    fVar5 = fVar5 * 0.5;
  }
  fVar5 = fVar5 + fVar8;
LAB_10a25299c:
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = *(long *)(param_1 + 8);
    if (*(float **)(lVar4 + 0x130) != *(float **)(lVar4 + 0x128)) {
      if (lVar4 != param_1) {
        fVar6 = fVar5 - **(float **)(lVar4 + 0x128);
        do {
          lVar1 = *(long *)(lVar4 + 0x48);
          for (lVar3 = *(long *)(lVar4 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 200) {
            *(ulong *)(lVar3 + 0x88) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x88) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x88) + 0.0);
            *(ulong *)(lVar3 + 0x80) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x80) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x80) + 0.0);
            *(ulong *)(lVar3 + 0x98) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x98) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x98) + 0.0);
            *(ulong *)(lVar3 + 0x90) =
                 CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(lVar3 + 0x90) >> 0x20),
                          (float)*(undefined8 *)(lVar3 + 0x90) + 0.0);
          }
          lVar1 = *(long *)(lVar4 + 0x60);
          for (lVar3 = *(long *)(lVar4 + 0x58); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
            *(float *)(lVar3 + 4) = fVar6 + *(float *)(lVar3 + 4);
          }
          lVar1 = *(long *)(lVar4 + 0x148);
          for (lVar3 = *(long *)(lVar4 + 0x140); lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
            *(float *)(lVar3 + 8) = fVar6 + *(float *)(lVar3 + 8);
          }
          lVar4 = *(long *)(lVar4 + 8);
        } while (lVar4 != param_1);
        fVar6 = param_5[3];
        fVar7 = param_5[1];
      }
      *param_5 = *param_5 + 0.0;
      param_5[1] = fVar7 + (fVar5 - fVar6);
      param_5[2] = param_5[2] + 0.0;
      param_5[3] = fVar6 + (fVar5 - fVar6);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a252a88);
  (*pcVar2)();
}



/* Entry: 10a252a88; end: 10a252dab;  */

void FUN_10a252a88(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar10 = *(long *)(param_2 + 8);
  if (lVar10 != param_2) {
    lVar11 = 0;
    do {
      FUN_10a24da00(lVar10 + 0x10);
      lVar5 = *(long *)(lVar10 + 0x40);
      if (*(long *)(lVar10 + 0x48) != lVar5) {
        uVar12 = 0;
        uVar9 = 0;
        do {
          if ((uVar9 < (ulong)(*(long *)(lVar10 + 0x78) - *(long *)(lVar10 + 0x70) >> 3)) &&
             (*(ulong *)(*(long *)(lVar10 + 0x70) + uVar9 * 8) < uVar12)) {
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 1;
          }
          lVar6 = param_3 + 0x18;
          FUN_10a283ff0(lVar6,lVar5 + uVar12 * 200);
          if (lVar6 == 0) {
            lVar5 = param_2 + 0x20;
            func_0x00010a2840dc(lVar5,lVar10 + 0xd8);
            if (lVar5 != 0) {
              uVar7 = (*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 3) *
                      -0x70a3d70a3d70a3d7;
              if (uVar7 < uVar12 || uVar7 - uVar12 == 0) goto LAB_10a252d70;
              lVar5 = lVar5 + 0x70;
              FUN_10a283ff0(lVar5,*(long *)(lVar10 + 0x40) + uVar12 * 200);
              if (lVar5 != 0) {
                lVar6 = *(long *)(lVar10 + 0x40);
                uVar7 = (*(long *)(lVar10 + 0x48) - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
                if (uVar7 < uVar12 || uVar7 - uVar12 == 0) goto LAB_10a252d70;
                lVar8 = lVar6 + uVar12 * 200;
                uStack_c8 = *(undefined8 *)(lVar8 + 0x88);
                uStack_d0 = *(undefined8 *)(lVar8 + 0x80);
                uStack_b8 = *(undefined8 *)(lVar8 + 0x98);
                uStack_c0 = *(undefined8 *)(lVar8 + 0x90);
                uStack_b0 = *(undefined8 *)(lVar8 + 0xa0);
                lStack_a8 = lVar5 + 0x38;
                uStack_a0 = uStack_a0 & 0xffffffffffffff00;
                uStack_98 = 0;
                uStack_88 = *(undefined8 *)(lVar8 + 0xb8);
                plStack_78 = *(long **)(lVar8 + 0x58);
                uStack_80 = *(undefined8 *)(lVar8 + 0x50);
                if (*(long *)(lVar8 + 0x58) != 0) {
                  plVar1 = (long *)(*(long *)(lVar8 + 0x58) + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar3) {
                      *plVar1 = *plVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  lVar6 = *(long *)(lVar10 + 0x40);
                  uVar7 = (*(long *)(lVar10 + 0x48) - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
                }
                lStack_90 = lVar11;
                if (uVar7 <= uVar12) goto LAB_10a252d70;
                lVar6 = lVar6 + uVar12 * 200;
                uStack_70 = *(undefined4 *)(lVar6 + 0x70);
                uStack_6c = *(undefined8 *)(lVar6 + 0xa8);
                FUN_10a252dac(param_1,&uStack_d0);
                if (plStack_78 != (long *)0x0) {
                  plVar1 = plStack_78 + 1;
                  do {
                    lVar5 = *plVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar3) {
                      *plVar1 = lVar5 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  goto LAB_10a252bfc;
                }
              }
            }
          }
          else {
            lVar5 = *(long *)(lVar10 + 0x40);
            uVar7 = (*(long *)(lVar10 + 0x48) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
            if (uVar7 < uVar12 || uVar7 - uVar12 == 0) {
LAB_10a252d70:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a252d74);
              (*pcVar4)();
            }
            lVar8 = lVar5 + uVar12 * 200;
            uStack_c8 = *(undefined8 *)(lVar8 + 0x88);
            uStack_d0 = *(undefined8 *)(lVar8 + 0x80);
            uStack_b8 = *(undefined8 *)(lVar8 + 0x98);
            uStack_c0 = *(undefined8 *)(lVar8 + 0x90);
            uStack_b0 = *(undefined8 *)(lVar8 + 0xa0);
            lStack_a8 = lVar6 + 0x38;
            uStack_a0 = *(ulong *)(lVar8 + 0x28);
            uStack_98 = *(undefined1 *)(lVar8 + 0x30);
            uStack_88 = *(undefined8 *)(lVar8 + 0xb8);
            plStack_78 = *(long **)(lVar8 + 0x58);
            uStack_80 = *(undefined8 *)(lVar8 + 0x50);
            if (*(long *)(lVar8 + 0x58) != 0) {
              plVar1 = (long *)(*(long *)(lVar8 + 0x58) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = *plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              lVar5 = *(long *)(lVar10 + 0x40);
              uVar7 = (*(long *)(lVar10 + 0x48) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
            }
            lStack_90 = lVar11;
            if (uVar7 <= uVar12) goto LAB_10a252d70;
            lVar5 = lVar5 + uVar12 * 200;
            uStack_70 = *(undefined4 *)(lVar5 + 0x70);
            uStack_6c = *(undefined8 *)(lVar5 + 0xa8);
            FUN_10a252dac(param_1,&uStack_d0);
            if (plStack_78 != (long *)0x0) {
              plVar1 = plStack_78 + 1;
              do {
                lVar5 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
LAB_10a252bfc:
              plVar1 = plStack_78;
              if (lVar5 == 0) {
                (**(code **)(*plStack_78 + 0x10))(plStack_78);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
          }
          uVar12 = uVar12 + 1;
          lVar5 = *(long *)(lVar10 + 0x40);
          uVar7 = (*(long *)(lVar10 + 0x48) - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
        } while (uVar12 <= uVar7 && uVar7 - uVar12 != 0);
      }
      lVar11 = lVar11 + 1;
      lVar10 = *(long *)(lVar10 + 8);
    } while (lVar10 != param_2);
  }
  return;
}



/* Entry: 10a252dac; end: 10a252e1b;  */

void FUN_10a252dac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    uVar6 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    puVar1[7] = param_2[7];
    puVar1[6] = uVar6;
    puVar1[9] = uVar8;
    puVar1[8] = uVar7;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
    uVar2 = param_2[10];
    puVar1[0xb] = param_2[0xb];
    puVar1[10] = uVar2;
    param_2[10] = 0;
    param_2[0xb] = 0;
    uVar2 = param_2[0xc];
    *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    puVar1[0xc] = uVar2;
    puVar1 = puVar1 + 0xe;
  }
  else {
    puVar1 = param_1;
    FUN_10a26a710();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a252e1c; end: 10a252eab;  */

void FUN_10a252e1c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = param_2;
  while (lVar1 = *(long *)(lVar1 + 8), lVar1 != param_2) {
    FUN_10a20d41c(param_1,param_1[1],*(long *)(lVar1 + 0x140),*(long *)(lVar1 + 0x148),
                  (*(long *)(lVar1 + 0x148) - *(long *)(lVar1 + 0x140) >> 3) * 0x6db6db6db6db6db7);
  }
  return;
}



/* Entry: 10a252eac; end: 10a253263;  */

/* WARNING: Removing unreachable block (ram,0x00010a25339c) */

void FUN_10a252eac(float param_1,float param_2,long *param_3,int param_4,byte *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined ***pppuVar3;
  uint *puVar4;
  undefined **ppuVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  undefined *puVar16;
  undefined *puVar17;
  int iStack_110;
  byte bStack_10c;
  uint uStack_108;
  undefined1 uStack_104;
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_3[7] = param_3[6];
  param_3[10] = 0;
  pppuVar3 = (undefined ***)(param_3 + 9);
  pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
  func_0x000108adee10(pppuVar3,(param_3[1] - *param_3 >> 3) * -0x70a3d70a3d70a3d7,&pcStack_c0);
  lVar7 = param_3[1];
  if (*param_3 != lVar7) {
    uStack_108 = uStack_108 & 0xffffff00;
    uStack_104 = 0;
    if ((char)param_3[0xc] == '\x01') {
      uVar14 = (ulong)((int)((ulong)(lVar7 - *param_3) >> 3) * -0x3d70a3d7 - 1);
      iVar6 = -1;
      ppuStack_f8 = &PTR_DAT_110bb7540;
      pcStack_100 = (code *)0x10a282df4;
      ppuStack_b8 = &PTR_DAT_110bb7528;
      pcStack_c0 = FUN_10a282dd4;
    }
    else {
      uVar14 = 0;
      iVar6 = 1;
      ppuStack_f8 = &PTR_DAT_110bb7570;
      pcStack_100 = (code *)0x10a282eb8;
      ppuStack_b8 = &PTR_DAT_110bb7558;
      pcStack_c0 = (code *)0x10a282e6c;
      plStack_b0 = param_3;
    }
    plStack_f0 = param_3;
    while( true ) {
      uVar13 = (uint)uVar14;
      uVar8 = uVar14;
      (*pcStack_c0)(uVar14,&pcStack_c0);
      if ((uVar8 & 1) == 0) break;
      uVar8 = (param_3[1] - *param_3 >> 3) * -0x70a3d70a3d70a3d7;
      if (uVar8 < (ulong)(long)(int)uVar13 || uVar8 - (long)(int)uVar13 == 0) goto LAB_10a253218;
      lVar7 = *param_3 + (long)(int)uVar13 * 200;
      if ((*param_5 & 1) == 0) {
        fVar15 = *(float *)(param_5 + 4);
LAB_10a2530cc:
        *(float *)(param_5 + 4) =
             fVar15 + param_2 * (*(float *)(lVar7 + 0xa8) + *(float *)(param_3 + 0xd));
        param_5[8] = 1;
      }
      else {
        fVar15 = *(float *)(param_5 + 4);
        if ((param_5[8] != 1) ||
           (fVar15 + param_2 * ((*(float *)(lVar7 + 0xac) +
                                (*(float *)(lVar7 + 0x88) - *(float *)(lVar7 + 0x80))) -
                               *(float *)(lVar7 + 0xa0)) <= param_1)) goto LAB_10a2530cc;
        puVar4 = &uStack_108;
        (*pcStack_100)(puVar4,uVar14,&pcStack_100);
        iStack_110 = (int)puVar4;
        bStack_10c = (byte)((ulong)puVar4 >> 0x20);
        if (((ulong)puVar4 >> 0x20 & 1) == 0) {
          if (param_4 == 0) {
            iStack_110 = uVar13 - iVar6;
            bStack_10c = 1;
            goto LAB_10a2530fc;
          }
          if (param_4 != 1) goto LAB_10a253218;
          *param_5 = 0;
          uVar14 = (param_3[1] - *param_3 >> 3) * -0x70a3d70a3d70a3d7;
          if (uVar14 < (ulong)(long)(int)uVar13 || uVar14 - (long)(int)uVar13 == 0)
          goto LAB_10a253218;
          *(float *)(param_5 + 4) =
               *(float *)(param_5 + 4) +
               param_2 * (*(float *)(*param_3 + (long)(int)uVar13 * 200 + 0xa8) +
                         *(float *)(param_3 + 0xd));
        }
        else {
LAB_10a2530fc:
          func_0x000109febdc8(param_3 + 6,&iStack_110);
          if ((bStack_10c & 1) == 0) {
LAB_10a253218:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a25321c);
            (*pcVar1)();
          }
          uVar8 = (ulong)iStack_110;
          uVar14 = (long)iVar6 + uVar8;
          lVar7 = uVar14 * 200 + 0xc0;
          while( true ) {
            uVar13 = (uint)uVar8;
            iVar2 = iVar6 + uVar13;
            (*pcStack_c0)(iVar2,&pcStack_c0);
            if (iVar2 == 0) break;
            uVar8 = (param_3[1] - *param_3 >> 3) * -0x70a3d70a3d70a3d7;
            if (uVar8 < uVar14 || uVar8 - uVar14 == 0) goto LAB_10a253218;
            if (*(char *)(*param_3 + lVar7) != '\x01') break;
            if ((ulong)param_3[10] <= uVar14) goto LAB_10a253218;
            uVar8 = uVar14 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(param_3[9] + uVar8) = *(ulong *)(param_3[9] + uVar8) | 1L << (uVar14 & 0x3f);
            uVar8 = (ulong)(uVar13 + iVar6);
            uVar14 = uVar14 + (long)iVar6;
            lVar7 = lVar7 + (long)iVar6 * 200;
          }
          param_5[8] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          uStack_104 = 1;
          uStack_108 = uVar13;
        }
      }
      uVar14 = (ulong)(uVar13 + iVar6);
    }
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    pppuVar3 = &ppuStack_b8;
    (*(code *)*ppuStack_b8)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar10 = pppuVar3[9];
  ppuVar5 = pppuVar3[10];
  if (ppuVar10 == ppuVar5) {
LAB_10a2532e8:
    if (ppuVar10 != ppuVar5) {
      ppuVar9 = ppuVar10 + 3;
      ppuVar12 = ppuVar10;
      if (ppuVar10 + 3 != ppuVar5) {
        do {
          ppuVar11 = ppuVar9;
          if (*(char *)(ppuVar12 + 5) == '\x01') {
            ppuVar9 = pppuVar3[6];
            if (ppuVar9 != pppuVar3[7]) {
              do {
                if (((*(char *)(ppuVar9 + 6) == '\x01') && (ppuVar9[5] <= ppuVar12[4])) &&
                   (ppuVar12[4] <= ppuVar9[5] + *(int *)(ppuVar9 + 0x16))) goto LAB_10a25335c;
                ppuVar9 = ppuVar9 + 0x19;
              } while (ppuVar9 != pppuVar3[7]);
            }
          }
          else {
LAB_10a25335c:
            puVar17 = ppuVar11[1];
            puVar16 = *ppuVar11;
            ppuVar10[2] = ppuVar11[2];
            ppuVar10[1] = puVar17;
            *ppuVar10 = puVar16;
            ppuVar10 = ppuVar10 + 3;
          }
          ppuVar9 = ppuVar11 + 3;
          ppuVar12 = ppuVar11;
        } while (ppuVar11 + 3 != ppuVar5);
        ppuVar5 = pppuVar3[10];
      }
      if (ppuVar5 < ppuVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2533c4);
        (*pcVar1)();
      }
      if (ppuVar10 != ppuVar5) {
        pppuVar3[10] = ppuVar10;
      }
    }
  }
  else {
    do {
      if (*(char *)(ppuVar10 + 2) == '\x01') {
        ppuVar9 = pppuVar3[6];
        if (ppuVar9 == pppuVar3[7]) goto LAB_10a2532e8;
        while (((*(char *)(ppuVar9 + 6) != '\x01' || (ppuVar10[1] < ppuVar9[5])) ||
               (ppuVar9[5] + *(int *)(ppuVar9 + 0x16) < ppuVar10[1]))) {
          ppuVar9 = ppuVar9 + 0x19;
          if (ppuVar9 == pppuVar3[7]) goto LAB_10a2532e8;
        }
      }
      ppuVar10 = ppuVar10 + 3;
    } while (ppuVar10 != ppuVar5);
  }
  return;
}



/* Entry: 10a253264; end: 10a253433;  */

/* WARNING: Removing unreachable block (ram,0x00010a25339c) */

void FUN_10a253264(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  if (puVar5 == puVar3) {
LAB_10a2532e8:
    if (puVar5 != puVar3) {
      puVar1 = puVar5 + 3;
      puVar7 = puVar5;
      if (puVar5 + 3 != puVar3) {
        do {
          puVar6 = puVar1;
          if (*(char *)(puVar7 + 5) == '\x01') {
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 != *(long *)(param_1 + 0x38)) {
              do {
                if (((*(char *)(lVar4 + 0x30) == '\x01') &&
                    (*(ulong *)(lVar4 + 0x28) <= (ulong)puVar7[4])) &&
                   ((ulong)puVar7[4] <= *(ulong *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0xb0)))
                goto LAB_10a25335c;
                lVar4 = lVar4 + 200;
              } while (lVar4 != *(long *)(param_1 + 0x38));
            }
          }
          else {
LAB_10a25335c:
            uVar9 = puVar6[1];
            uVar8 = *puVar6;
            puVar5[2] = puVar6[2];
            puVar5[1] = uVar9;
            *puVar5 = uVar8;
            puVar5 = puVar5 + 3;
          }
          puVar1 = puVar6 + 3;
          puVar7 = puVar6;
        } while (puVar6 + 3 != puVar3);
        puVar3 = *(undefined8 **)(param_1 + 0x50);
      }
      if (puVar3 < puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2533c4);
        (*pcVar2)();
      }
      if (puVar5 != puVar3) {
        *(undefined8 **)(param_1 + 0x50) = puVar5;
      }
    }
  }
  else {
    do {
      if (*(char *)(puVar5 + 2) == '\x01') {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 == *(long *)(param_1 + 0x38)) goto LAB_10a2532e8;
        while (((*(char *)(lVar4 + 0x30) != '\x01' || ((ulong)puVar5[1] < *(ulong *)(lVar4 + 0x28)))
               || (*(ulong *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0xb0) < (ulong)puVar5[1]))) {
          lVar4 = lVar4 + 200;
          if (lVar4 == *(long *)(param_1 + 0x38)) goto LAB_10a2532e8;
        }
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar3);
  }
  return;
}



/* Entry: 10a253434; end: 10a253647;  */

long * FUN_10a253434(ulong param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                    long param_6,int param_7)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  long *plVar15;
  long lVar16;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float unaff_s10;
  float unaff_s11;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uStack_134;
  
  plVar6 = param_2;
  if (param_2[6] != param_2[7]) {
    lVar18 = param_2[0xc];
    uVar10 = param_2[0xd] - lVar18 >> 3;
    param_2[0x13] = param_2[0x12];
    uVar12 = 0;
    puVar21 = (undefined4 *)param_2[0x12];
    do {
      iVar7 = (int)param_5;
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        if (uVar10 <= uVar12 - 1) goto LAB_10a25363c;
        uVar11 = *(long *)(lVar18 + (uVar12 - 1) * 8) + 1;
      }
      if (uVar12 < uVar10) {
        uVar10 = *(ulong *)(lVar18 + uVar12 * 8);
      }
      else {
        uVar10 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7 - 1;
      }
      if (uVar10 < uVar11) {
        uVar23 = 0x7f7fffff;
        fVar25 = -3.4028235e+38;
      }
      else {
        uVar13 = (param_2[7] - param_2[6] >> 3) * -0x70a3d70a3d70a3d7;
        uVar9 = 0;
        if (uVar11 <= uVar13) {
          uVar9 = uVar13 - uVar11;
        }
        if (uVar9 <= uVar10 - uVar11) {
LAB_10a25363c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a253640);
          (*pcVar3)();
        }
        pfVar8 = (float *)(param_2[6] + uVar11 * 200 + 0xa0);
        lVar18 = (uVar10 - uVar11) + 1;
        fVar24 = -3.4028235e+38;
        uVar10 = 0x7f7fffff;
        uVar11 = 0x7f7fffff;
        fVar25 = fVar24;
        do {
          fVar29 = pfVar8[-8] + *pfVar8;
          bVar4 = (float)uVar10 <= fVar29;
          uVar9 = (ulong)(uint)fVar29;
          if (bVar4) {
            uVar9 = uVar11;
          }
          uVar23 = (undefined4)uVar9;
          param_1 = (ulong)(uint)fVar29;
          if (bVar4) {
            param_1 = uVar10;
          }
          fVar29 = pfVar8[-6] - *pfVar8;
          fVar26 = fVar29;
          if (fVar29 <= fVar24) {
            fVar29 = fVar24;
            fVar26 = fVar25;
          }
          fVar25 = fVar26;
          fVar24 = fVar29;
          pfVar8 = pfVar8 + 0x32;
          lVar18 = lVar18 + -1;
          uVar10 = param_1;
          uVar11 = uVar9;
        } while (lVar18 != 0);
      }
      fVar24 = (float)param_1;
      if ((undefined4 *)param_2[0x14] <= puVar21) {
        plVar15 = (long *)param_2[0x12];
        lVar16 = (long)puVar21 - (long)plVar15;
        lVar18 = lVar16 >> 3;
        uVar10 = lVar18 + 1;
        if (uVar10 >> 0x3d == 0) {
          uVar9 = param_2[0x14] - (long)plVar15;
          uVar11 = (long)uVar9 >> 2;
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar11 = 0x1fffffffffffffff;
          }
          if (uVar11 >> 0x3d == 0) {
            lVar5 = uVar11 << 3;
            __Znwm();
            puVar21 = (undefined4 *)(lVar5 + lVar16);
            *puVar21 = uVar23;
            puVar21[1] = fVar25;
            puVar22 = puVar21 + 2;
            plVar6 = (long *)(puVar21 + lVar18 * -2);
            param_3 = plVar15;
            _memcpy();
            param_2[0x12] = (long)(puVar21 + lVar18 * -2);
            param_2[0x13] = (long)puVar22;
            param_2[0x14] = lVar5 + uVar11 * 8;
            if (plVar15 != (long *)0x0) {
              __ZdlPv();
              plVar6 = plVar15;
            }
            goto LAB_10a253600;
          }
        }
        else {
          FUN_10a26ab04();
        }
        func_0x000109ffded8();
        if ((int)plVar6 == 0) {
          lVar18 = *param_3;
          uVar12 = (param_3[1] - lVar18 >> 3) * -0x70a3d70a3d70a3d7;
          if (iVar7 + 1 < (int)uVar12) {
            if ((char)param_3[0xc] == '\0') {
              iVar7 = iVar7 + 1;
            }
            goto LAB_10a2536d4;
          }
LAB_10a2536f0:
          uVar12 = param_6 + param_7;
          uVar14 = 1;
        }
        else {
          if (iVar7 < 1) goto LAB_10a2536f0;
          lVar18 = *param_3;
          uVar12 = (param_3[1] - lVar18 >> 3) * -0x70a3d70a3d70a3d7;
          iVar7 = iVar7 - (uint)*(byte *)(param_3 + 0xc);
LAB_10a2536d4:
          if (uVar12 <= (ulong)(long)iVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2537dc);
            (*pcVar3)();
          }
          lVar18 = lVar18 + (long)iVar7 * 200;
          uVar12 = *(ulong *)(lVar18 + 0x28);
          uVar14 = *(undefined1 *)(lVar18 + 0x30);
        }
        pfVar8 = *(float **)(param_4 + 0x50);
        if (pfVar8 < *(float **)(param_4 + 0x58)) {
          *pfVar8 = fVar24;
          pfVar8[1] = 0.0;
          *(ulong *)(pfVar8 + 2) = uVar12;
          pfVar17 = pfVar8 + 6;
          *(undefined1 *)(pfVar8 + 4) = uVar14;
LAB_10a2537c0:
          *(float **)(param_4 + 0x50) = pfVar17;
          return plVar6;
        }
        uVar11 = (long)pfVar8 - *(long *)(param_4 + 0x48);
        uVar10 = ((long)uVar11 >> 3) * -0x5555555555555555 + 1;
        if (uVar10 < 0xaaaaaaaaaaaaaab) {
          lVar18 = (long)*(float **)(param_4 + 0x58) - *(long *)(param_4 + 0x48) >> 3;
          uVar9 = lVar18 * 0x5555555555555556;
          if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
            uVar9 = uVar10;
          }
          if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
            uVar9 = 0xaaaaaaaaaaaaaaa;
          }
          lVar18 = param_4 + 0x48;
          FUN_10a20c6b0();
          pfVar8 = (float *)(lVar18 + uVar11);
          *pfVar8 = fVar24;
          pfVar8[1] = 0.0;
          *(ulong *)(pfVar8 + 2) = uVar12;
          *(undefined1 *)(pfVar8 + 4) = uVar14;
          pfVar17 = pfVar8 + 6;
          lVar16 = (long)pfVar8 - (*(long *)(param_4 + 0x50) - *(long *)(param_4 + 0x48));
          _memcpy(lVar16);
          plVar6 = *(long **)(param_4 + 0x48);
          *(long *)(param_4 + 0x48) = lVar16;
          *(float **)(param_4 + 0x50) = pfVar17;
          *(ulong *)(param_4 + 0x58) = lVar18 + uVar9 * 0x18;
          if (plVar6 != (long *)0x0) {
            __ZdlPv();
          }
          goto LAB_10a2537c0;
        }
        FUN_10a20c69c();
        fVar25 = 0.0;
        if ((plVar6 == (long *)0x0) || (FUN_10a1cc830(), plVar6 == (long *)0x0)) {
          plVar6 = (long *)0x1;
        }
        else {
          lVar18 = plVar6[3];
          ___dynamic_cast(lVar18,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
          plVar6 = (long *)plVar6[4];
          if (plVar6 == (long *)0x0) {
            fVar25 = *(float *)(lVar18 + 0xc);
            unaff_s11 = *(float *)(lVar18 + 0x10);
            unaff_s10 = *(float *)(lVar18 + 0x14);
            fVar24 = *(float *)(lVar18 + 0x1c);
            uVar11 = (ulong)*(byte *)(lVar18 + 0x18);
            uVar12 = (ulong)*(byte *)(lVar18 + 0x20);
            plVar6 = (long *)0x0;
          }
          else {
            plVar15 = plVar6 + 1;
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = *plVar15 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            fVar25 = *(float *)(lVar18 + 0xc);
            unaff_s11 = *(float *)(lVar18 + 0x10);
            unaff_s10 = *(float *)(lVar18 + 0x14);
            uVar11 = (ulong)*(byte *)(lVar18 + 0x18);
            fVar24 = *(float *)(lVar18 + 0x1c);
            uVar12 = (ulong)*(byte *)(lVar18 + 0x20);
            do {
              lVar18 = *plVar15;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *plVar15 = lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
            plVar6 = (long *)0x0;
          }
        }
        lVar18 = *param_3;
        if (lVar18 == 0) {
          return plVar6;
        }
        uStack_134 = 0xc;
        FUN_10a1cc830(lVar18,&uStack_134);
        if (lVar18 == 0) {
          return plVar6;
        }
        lVar16 = *(long *)(lVar18 + 0x18);
        ___dynamic_cast(lVar16,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
        plVar15 = *(long **)(lVar18 + 0x20);
        if (plVar15 == (long *)0x0) {
          fVar28 = *(float *)(lVar16 + 0xc);
          fVar29 = *(float *)(lVar16 + 0x10);
          fVar27 = *(float *)(lVar16 + 0x14);
          fVar26 = *(float *)(lVar16 + 0x1c);
          uVar19 = (uint)*(byte *)(lVar16 + 0x20);
          uVar20 = (uint)*(byte *)(lVar16 + 0x18);
        }
        else {
          plVar1 = plVar15 + 1;
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          fVar28 = *(float *)(lVar16 + 0xc);
          fVar29 = *(float *)(lVar16 + 0x10);
          fVar27 = *(float *)(lVar16 + 0x14);
          uVar20 = (uint)*(byte *)(lVar16 + 0x18);
          fVar26 = *(float *)(lVar16 + 0x1c);
          uVar19 = (uint)*(byte *)(lVar16 + 0x20);
          do {
            lVar18 = *plVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        if ((int)plVar6 == 0 && (((uint)uVar11 ^ uVar20) & 1) == 0) {
          if ((uVar11 & 1) == 0) {
            if ((((uint)uVar12 ^ uVar19) & 1) != 0) goto LAB_10a253984;
          }
          else {
            if ((uVar20 & 1) == 0) goto LAB_10a253a7c;
            iVar7 = 0;
            fVar25 = fVar25 - fVar28;
            fVar29 = unaff_s11 - fVar29;
            if (fVar25 < 0.0) {
              fVar25 = -fVar25;
            }
            if (fVar29 < 0.0) {
              fVar29 = -fVar29;
            }
            while ((fVar28 = fVar29, iVar7 == 1 || (fVar28 = fVar25, iVar7 != 2))) {
              bVar4 = fVar28 < 1e-06;
              while (iVar7 = iVar7 + 1, !bVar4) {
                bVar4 = false;
                if (iVar7 == 2) {
                  return (long *)0x0;
                }
              }
            }
            if (1e-06 <= ABS(unaff_s10 - fVar27)) {
              return (long *)0x0;
            }
            if ((((uint)uVar12 ^ uVar19) & 1) != 0) {
              return (long *)0x0;
            }
          }
          if ((uVar12 & 1) != 0) {
            if ((uVar19 & 1) == 0) {
LAB_10a253a7c:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a253a80);
              (*pcVar3)();
            }
            if (1e-06 <= ABS(fVar24 - fVar26)) goto LAB_10a253984;
          }
          plVar6 = (long *)0x1;
        }
        else {
LAB_10a253984:
          plVar6 = (long *)0x0;
        }
        return plVar6;
      }
      puVar22 = puVar21 + 2;
      *puVar21 = uVar23;
      puVar21[1] = fVar25;
      lVar16 = param_4;
LAB_10a253600:
      param_2[0x13] = (long)puVar22;
      lVar18 = param_2[0xc];
      uVar10 = param_2[0xd] - lVar18 >> 3;
      bVar4 = uVar12 < uVar10;
      param_4 = lVar16;
      uVar12 = uVar12 + 1;
      puVar21 = puVar22;
    } while (bVar4);
  }
  return plVar6;
}



/* Entry: 10a253648; end: 10a2537df;  */

long FUN_10a253648(float param_1,long param_2,long *param_3,long param_4,int param_5,long param_6,
                  int param_7)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 uVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float unaff_s10;
  float unaff_s11;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_c4;
  
  if ((int)param_2 == 0) {
    lVar8 = *param_3;
    uVar10 = (param_3[1] - lVar8 >> 3) * -0x70a3d70a3d70a3d7;
    if ((int)uVar10 <= param_5 + 1) goto LAB_10a2536f0;
    if ((char)param_3[0xc] == '\0') {
      param_5 = param_5 + 1;
    }
LAB_10a2536d4:
    if (uVar10 <= (ulong)(long)param_5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2537dc);
      (*pcVar4)();
    }
    lVar8 = lVar8 + (long)param_5 * 200;
    uVar10 = *(ulong *)(lVar8 + 0x28);
    uVar13 = *(undefined1 *)(lVar8 + 0x30);
  }
  else {
    if (0 < param_5) {
      lVar8 = *param_3;
      uVar10 = (param_3[1] - lVar8 >> 3) * -0x70a3d70a3d70a3d7;
      param_5 = param_5 - (uint)*(byte *)(param_3 + 0xc);
      goto LAB_10a2536d4;
    }
LAB_10a2536f0:
    uVar10 = param_6 + param_7;
    uVar13 = 1;
  }
  pfVar2 = *(float **)(param_4 + 0x50);
  if (pfVar2 < *(float **)(param_4 + 0x58)) {
    *pfVar2 = param_1;
    pfVar2[1] = 0.0;
    *(ulong *)(pfVar2 + 2) = uVar10;
    pfVar15 = pfVar2 + 6;
    *(undefined1 *)(pfVar2 + 4) = uVar13;
LAB_10a2537c0:
    *(float **)(param_4 + 0x50) = pfVar15;
    return param_2;
  }
  uVar16 = (long)pfVar2 - *(long *)(param_4 + 0x48);
  uVar9 = ((long)uVar16 >> 3) * -0x5555555555555555 + 1;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    lVar8 = (long)*(float **)(param_4 + 0x58) - *(long *)(param_4 + 0x48) >> 3;
    uVar11 = lVar8 * 0x5555555555555556;
    if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
      uVar11 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    lVar8 = param_4 + 0x48;
    FUN_10a20c6b0();
    pfVar2 = (float *)(lVar8 + uVar16);
    *pfVar2 = param_1;
    pfVar2[1] = 0.0;
    *(ulong *)(pfVar2 + 2) = uVar10;
    *(undefined1 *)(pfVar2 + 4) = uVar13;
    pfVar15 = pfVar2 + 6;
    lVar14 = (long)pfVar2 - (*(long *)(param_4 + 0x50) - *(long *)(param_4 + 0x48));
    _memcpy(lVar14);
    param_2 = *(long *)(param_4 + 0x48);
    *(long *)(param_4 + 0x48) = lVar14;
    *(float **)(param_4 + 0x50) = pfVar15;
    *(ulong *)(param_4 + 0x58) = lVar8 + uVar11 * 0x18;
    if (param_2 != 0) {
      __ZdlPv();
    }
    goto LAB_10a2537c0;
  }
  FUN_10a20c69c();
  fVar19 = 0.0;
  if ((param_2 == 0) || (FUN_10a1cc830(), param_2 == 0)) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x18);
    ___dynamic_cast(lVar8,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
    plVar12 = *(long **)(param_2 + 0x20);
    if (plVar12 == (long *)0x0) {
      fVar19 = *(float *)(lVar8 + 0xc);
      unaff_s11 = *(float *)(lVar8 + 0x10);
      unaff_s10 = *(float *)(lVar8 + 0x14);
      param_1 = *(float *)(lVar8 + 0x1c);
      uVar16 = (ulong)*(byte *)(lVar8 + 0x18);
      uVar10 = (ulong)*(byte *)(lVar8 + 0x20);
      lVar8 = 0;
    }
    else {
      plVar1 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      fVar19 = *(float *)(lVar8 + 0xc);
      unaff_s11 = *(float *)(lVar8 + 0x10);
      unaff_s10 = *(float *)(lVar8 + 0x14);
      uVar16 = (ulong)*(byte *)(lVar8 + 0x18);
      param_1 = *(float *)(lVar8 + 0x1c);
      uVar10 = (ulong)*(byte *)(lVar8 + 0x20);
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      lVar8 = 0;
    }
  }
  lVar14 = *param_3;
  if (lVar14 == 0) {
    return lVar8;
  }
  uStack_c4 = 0xc;
  FUN_10a1cc830(lVar14,&uStack_c4);
  if (lVar14 == 0) {
    return lVar8;
  }
  lVar6 = *(long *)(lVar14 + 0x18);
  ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
  plVar12 = *(long **)(lVar14 + 0x20);
  if (plVar12 == (long *)0x0) {
    fVar22 = *(float *)(lVar6 + 0xc);
    fVar23 = *(float *)(lVar6 + 0x10);
    fVar21 = *(float *)(lVar6 + 0x14);
    fVar20 = *(float *)(lVar6 + 0x1c);
    uVar17 = (uint)*(byte *)(lVar6 + 0x20);
    uVar18 = (uint)*(byte *)(lVar6 + 0x18);
  }
  else {
    plVar1 = plVar12 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar22 = *(float *)(lVar6 + 0xc);
    fVar23 = *(float *)(lVar6 + 0x10);
    fVar21 = *(float *)(lVar6 + 0x14);
    uVar18 = (uint)*(byte *)(lVar6 + 0x18);
    fVar20 = *(float *)(lVar6 + 0x1c);
    uVar17 = (uint)*(byte *)(lVar6 + 0x20);
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if ((int)lVar8 == 0 && (((uint)uVar16 ^ uVar18) & 1) == 0) {
    if ((uVar16 & 1) == 0) {
      if ((((uint)uVar10 ^ uVar17) & 1) != 0) goto LAB_10a253984;
    }
    else {
      if ((uVar18 & 1) == 0) goto LAB_10a253a7c;
      iVar7 = 0;
      fVar19 = fVar19 - fVar22;
      fVar23 = unaff_s11 - fVar23;
      if (fVar19 < 0.0) {
        fVar19 = -fVar19;
      }
      if (fVar23 < 0.0) {
        fVar23 = -fVar23;
      }
      while ((fVar22 = fVar23, iVar7 == 1 || (fVar22 = fVar19, iVar7 != 2))) {
        bVar5 = fVar22 < 1e-06;
        while (iVar7 = iVar7 + 1, !bVar5) {
          bVar5 = false;
          if (iVar7 == 2) {
            return 0;
          }
        }
      }
      if (1e-06 <= ABS(unaff_s10 - fVar21)) {
        return 0;
      }
      if ((((uint)uVar10 ^ uVar17) & 1) != 0) {
        return 0;
      }
    }
    if ((uVar10 & 1) != 0) {
      if ((uVar17 & 1) == 0) {
LAB_10a253a7c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a253a80);
        (*pcVar4)();
      }
      if (1e-06 <= ABS(param_1 - fVar20)) goto LAB_10a253984;
    }
    lVar8 = 1;
  }
  else {
LAB_10a253984:
    lVar8 = 0;
  }
  return lVar8;
}



/* Entry: 10a2537e0; end: 10a253a7f;  */

int FUN_10a2537e0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  byte unaff_w21;
  byte unaff_w22;
  byte bVar9;
  byte bVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  fVar11 = 0.0;
  if (param_1 == 0) {
LAB_10a2538ac:
    iVar7 = 1;
  }
  else {
    uStack_88 = 0xc;
    FUN_10a1cc830(param_1,&uStack_88);
    if (param_1 == 0) goto LAB_10a2538ac;
    lVar5 = *(long *)(param_1 + 0x18);
    ___dynamic_cast(lVar5,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 == (long *)0x0) {
      fVar11 = *(float *)(lVar5 + 0xc);
      unaff_s11 = *(float *)(lVar5 + 0x10);
      unaff_s10 = *(float *)(lVar5 + 0x14);
      unaff_s8 = *(float *)(lVar5 + 0x1c);
      unaff_w22 = *(byte *)(lVar5 + 0x18);
      unaff_w21 = *(byte *)(lVar5 + 0x20);
      iVar7 = 0;
    }
    else {
      plVar1 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      fVar11 = *(float *)(lVar5 + 0xc);
      unaff_s11 = *(float *)(lVar5 + 0x10);
      unaff_s10 = *(float *)(lVar5 + 0x14);
      unaff_w22 = *(byte *)(lVar5 + 0x18);
      unaff_s8 = *(float *)(lVar5 + 0x1c);
      unaff_w21 = *(byte *)(lVar5 + 0x20);
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
      iVar7 = 0;
    }
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return iVar7;
  }
  uStack_84 = 0xc;
  FUN_10a1cc830(lVar5,&uStack_84);
  if (lVar5 == 0) {
    return iVar7;
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
  plVar8 = *(long **)(lVar5 + 0x20);
  if (plVar8 == (long *)0x0) {
    fVar14 = *(float *)(lVar6 + 0xc);
    fVar15 = *(float *)(lVar6 + 0x10);
    fVar13 = *(float *)(lVar6 + 0x14);
    fVar12 = *(float *)(lVar6 + 0x1c);
    bVar9 = *(byte *)(lVar6 + 0x20);
    bVar10 = *(byte *)(lVar6 + 0x18);
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    fVar14 = *(float *)(lVar6 + 0xc);
    fVar15 = *(float *)(lVar6 + 0x10);
    fVar13 = *(float *)(lVar6 + 0x14);
    bVar10 = *(byte *)(lVar6 + 0x18);
    fVar12 = *(float *)(lVar6 + 0x1c);
    bVar9 = *(byte *)(lVar6 + 0x20);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (iVar7 == 0 && ((unaff_w22 ^ bVar10) & 1) == 0) {
    if ((unaff_w22 & 1) == 0) {
      if (((unaff_w21 ^ bVar9) & 1) != 0) goto LAB_10a253984;
    }
    else {
      if ((bVar10 & 1) == 0) goto LAB_10a253a7c;
      iVar7 = 0;
      fVar11 = fVar11 - fVar14;
      fVar15 = unaff_s11 - fVar15;
      if (fVar11 < 0.0) {
        fVar11 = -fVar11;
      }
      if (fVar15 < 0.0) {
        fVar15 = -fVar15;
      }
      while ((fVar14 = fVar15, iVar7 == 1 || (fVar14 = fVar11, iVar7 != 2))) {
        bVar4 = fVar14 < 1e-06;
        while (iVar7 = iVar7 + 1, !bVar4) {
          bVar4 = false;
          if (iVar7 == 2) {
            return 0;
          }
        }
      }
      if (1e-06 <= ABS(unaff_s10 - fVar13)) {
        return 0;
      }
      if (((unaff_w21 ^ bVar9) & 1) != 0) {
        return 0;
      }
    }
    if ((unaff_w21 & 1) != 0) {
      if ((bVar9 & 1) == 0) {
LAB_10a253a7c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a253a80);
        (*pcVar3)();
      }
      if (1e-06 <= ABS(unaff_s8 - fVar12)) goto LAB_10a253984;
    }
    iVar7 = 1;
  }
  else {
LAB_10a253984:
    iVar7 = 0;
  }
  return iVar7;
}



/* Entry: 10a253a80; end: 10a253c3f;  */

long *** FUN_10a253a80(long ***param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long ***ppplVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  ulong uVar9;
  long **pplVar10;
  long *plVar11;
  long **pplStack_58;
  long *plStack_50;
  long *plStack_48;
  long **pplStack_40;
  long **pplStack_38;
  
  pplVar7 = param_1[1];
  if (pplVar7 < param_1[2]) {
    plVar11 = (long *)param_2[1];
    plVar6 = (long *)*param_2;
    pplVar7[2] = (long *)param_2[2];
    pplVar7[1] = plVar11;
    *pplVar7 = plVar6;
    lVar5 = param_2[4];
    plVar6 = (long *)param_2[3];
    pplVar7[4] = (long *)param_2[4];
    pplVar7[3] = plVar6;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar6 = (long *)param_2[5];
    *(short *)(pplVar7 + 6) = (short)param_2[6];
    pplVar7[5] = plVar6;
    pplVar7 = pplVar7 + 7;
    ppplVar3 = param_1;
  }
  else {
    lVar5 = (long)pplVar7 - (long)*param_1;
    uVar4 = (lVar5 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar4) {
      FUN_10a20d888();
      func_0x00010a20d960(&pplStack_58);
      __Unwind_Resume();
      pplVar7 = (long **)param_2[2];
      pplVar10 = (long **)*param_2;
      param_1[1] = (long **)param_2[1];
      *param_1 = pplVar10;
      param_1[2] = pplVar7;
      if (*(char *)(param_1 + 7) == '\x01') {
        func_0x00010a208730(param_1 + 3,param_2 + 3);
        lVar5 = param_2[6];
        param_1[5] = (long **)param_2[5];
        *(short *)(param_1 + 6) = (short)lVar5;
      }
      else {
        pplVar7 = (long **)param_2[3];
        param_1[4] = (long **)param_2[4];
        param_1[3] = pplVar7;
        param_2[3] = 0;
        param_2[4] = 0;
        pplVar7 = (long **)param_2[5];
        *(short *)(param_1 + 6) = (short)param_2[6];
        param_1[5] = pplVar7;
        *(undefined1 *)(param_1 + 7) = 1;
      }
      return param_1;
    }
    lVar8 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar9 = lVar8 * -0x2492492492492492;
    if (uVar9 < uVar4 || uVar9 - uVar4 == 0) {
      uVar9 = uVar4;
    }
    if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
      uVar9 = 0x492492492492492;
    }
    pplStack_38 = (long **)param_1;
    if (uVar9 == 0) {
      ppplVar3 = (long ***)0x0;
    }
    else {
      ppplVar3 = param_1;
      FUN_10a20d89c();
    }
    plStack_50 = (long *)((long)ppplVar3 + lVar5);
    lVar8 = param_2[1];
    lVar5 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = lVar8;
    *plStack_50 = lVar5;
    lVar5 = param_2[4];
    lVar8 = param_2[3];
    plStack_50[4] = param_2[4];
    plStack_50[3] = lVar8;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar5 = param_2[5];
    *(short *)(plStack_50 + 6) = (short)param_2[6];
    plStack_50[5] = lVar5;
    pplVar7 = (long **)(plStack_50 + 7);
    pplVar10 = (long **)((long)plStack_50 + ((long)*param_1 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar3;
    plStack_48 = (long *)pplVar7;
    pplStack_40 = (long **)(ppplVar3 + uVar9 * 7);
    func_0x00010a20d8e4(param_1,*param_1,param_1[1],pplVar10);
    pplStack_58 = *param_1;
    *param_1 = pplVar10;
    param_1[1] = pplVar7;
    pplStack_40 = param_1[2];
    param_1[2] = (long **)(ppplVar3 + uVar9 * 7);
    ppplVar3 = &pplStack_58;
    plStack_50 = (long *)pplStack_58;
    plStack_48 = (long *)pplStack_58;
    func_0x00010a20d960(ppplVar3);
  }
  param_1[1] = pplVar7;
  return ppplVar3;
}



/* Entry: 10a253c40; end: 10a253cc3;  */

undefined8 * FUN_10a253c40(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[2];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = uVar2;
  if (*(char *)(param_1 + 7) == '\x01') {
    func_0x00010a208730(param_1 + 3,param_2 + 3);
    uVar1 = *(undefined2 *)(param_2 + 6);
    param_1[5] = param_2[5];
    *(undefined2 *)(param_1 + 6) = uVar1;
  }
  else {
    uVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_2[3] = 0;
    param_2[4] = 0;
    uVar2 = param_2[5];
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
    param_1[5] = uVar2;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}



/* Entry: 10a253cc4; end: 10a2541bb;  */

void FUN_10a253cc4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6474dd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f64697a;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6474ee;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64697a;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a253e24(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6474f7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64697a;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a253e24();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f647500;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64697a;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a253e24();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a2541bc; end: 10a254217;  */

undefined8 * FUN_10a2541bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb6a98;
  param_1[3] = &PTR_FUN_110bb6ac0;
  FUN_10a26ac48(param_1 + 0x10);
  FUN_10a26aca4(param_1 + 0xd);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a254218; end: 10a25421b;  */

undefined8 * FUN_10a254218(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb6a98;
  param_1[3] = &PTR_FUN_110bb6ac0;
  FUN_10a26ac48(param_1 + 0x10);
  FUN_10a26aca4(param_1 + 0xd);
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a25421c; end: 10a25428b;  */

void FUN_10a25421c(void)

{
  FUN_10a2541bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a25428c; end: 10a254397;  */

ulong FUN_10a25428c(int *param_1)

{
  ulong uVar1;
  
  uVar1 = (long)*param_1 + 0x9e3779b9;
  uVar1 = (long)param_1[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (long)param_1[2] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (long)param_1[3] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (ulong)(uint)param_1[4] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (long)param_1[5] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (ulong)*(byte *)(param_1 + 6) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (ulong)(uint)param_1[7] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  return (ulong)(uint)param_1[8] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
}



/* Entry: 10a254398; end: 10a254617;  */

void FUN_10a254398(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined4 uStack_28;
  
  if (*param_1 != 0) {
    plVar5 = param_1;
    plStack_30 = param_1;
    __ZSt19uncaught_exceptionsv();
    uStack_28 = SUB84(plVar5,0);
    FUN_109d1a244(param_1);
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25449c);
      (*pcVar4)();
    }
    plVar9 = *(long **)(lVar6 + 0xa0);
    uVar8 = *(undefined8 *)(lVar6 + 0x98);
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    uStack_40 = uVar8;
    plStack_38 = plVar9;
    FUN_10a00e5c4(param_1 + 2,&uStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar9 = plStack_38 + 1;
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a258714(&plStack_30);
  }
  return;
}



/* Entry: 10a254618; end: 10a254653;  */

undefined8 * FUN_10a254618(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a254654; end: 10a2567e7;  */

void FUN_10a254654(long *param_1,long param_2,long param_3,long ******param_4,long ******param_5,
                  undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined **ppuVar8;
  long lVar9;
  long ***ppplVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  undefined1 uVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  undefined8 *puVar19;
  long ***ppplVar20;
  long lVar21;
  long *****ppppplVar22;
  ulong uVar23;
  long ***ppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long *plVar27;
  long *plVar28;
  long ****pppplVar29;
  long ****pppplVar30;
  long ******pppppplVar31;
  long ******pppppplVar32;
  long ***ppplVar33;
  long ***ppplVar34;
  long *plVar35;
  char *pcVar36;
  long ****pppplVar37;
  ulong uVar38;
  long ******pppppplVar39;
  byte bVar40;
  float fVar41;
  undefined1 auStack_3c0 [8];
  long *plStack_3b8;
  long *plStack_3b0;
  long *****ppppplStack_3a8;
  long *****ppppplStack_3a0;
  undefined7 uStack_398;
  char cStack_391;
  byte bStack_378;
  char acStack_370 [2];
  undefined2 uStack_36e;
  int iStack_36c;
  ulong uStack_368;
  long *plStack_360;
  undefined1 uStack_358;
  long *****ppppplStack_350;
  long *****ppppplStack_348;
  long *****ppppplStack_340;
  long *****ppppplStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  long *****ppppplStack_320;
  long *****ppppplStack_318;
  undefined8 uStack_310;
  long *****ppppplStack_300;
  long *****ppppplStack_2f8;
  undefined8 uStack_2f0;
  long *****ppppplStack_2e0;
  long *****ppppplStack_2d8;
  long ****pppplStack_2d0;
  long ****pppplStack_2c8;
  long ****pppplStack_2c0;
  char cStack_2b8;
  undefined4 uStack_2b0;
  undefined2 uStack_2ac;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined **appuStack_298 [7];
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined **appuStack_250 [8];
  long *****ppppplStack_210;
  long *****ppppplStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  long ****pppplStack_1f0;
  char cStack_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined **appuStack_1c8 [7];
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **appuStack_180 [8];
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  char cStack_118;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined **appuStack_f8 [7];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  FUN_10ad055a0();
  if ((int)lVar9 != 0) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar35 = (long *)*ppuVar8;
      if ((plVar35 == (long *)0x0) || ((**(code **)(*plVar35 + 0x18))(), plVar35 == (long *)0x0))
      goto LAB_10a2546d0;
      plVar35 = plVar35 + 7;
    }
    else {
      plVar35 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar35 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppplStack_3a8,&UNK_10f64762e);
      if (*(char *)((long)param_6 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppplStack_340,*param_6,param_6[1]);
      }
      else {
        ppppplStack_338 = (long *****)param_6[1];
        ppppplStack_340 = (long *****)*param_6;
        uStack_330 = (long *****)param_6[2];
      }
      if (cStack_391 < '\0') {
        ppppplStack_140 = (long *****)"null";
        if ((long ******)ppppplStack_3a0 != (long ******)0x0) {
          ppppplStack_140 = ppppplStack_3a8;
        }
      }
      else {
        ppppplStack_140 = (long *****)"null";
        if (cStack_391 != '\0') {
          ppppplStack_140 = (long *****)&ppppplStack_3a8;
        }
      }
      if ((long)uStack_330 < 0) {
        ppppplStack_210 = (long *****)"null";
        if ((long ******)ppppplStack_338 != (long ******)0x0) {
          ppppplStack_210 = ppppplStack_340;
        }
      }
      else {
        ppppplStack_210 = (long *****)"null";
        if (uStack_330._7_1_ != '\0') {
          ppppplStack_210 = (long *****)&ppppplStack_340;
        }
      }
      FUN_10a224324(&ppppplStack_140,&ppppplStack_210);
      if (cStack_391 < '\0') {
        if ((long ******)ppppplStack_3a0 != (long ******)0x0) {
          func_0x000107c3192c(&ppppplStack_140,ppppplStack_3a8);
          goto LAB_10a2562b0;
        }
LAB_10a2560f0:
        uVar16 = 0;
        ppppplStack_140 = (long *****)((ulong)ppppplStack_140 & 0xffffffffffffff00);
      }
      else {
        if (cStack_391 == '\0') goto LAB_10a2560f0;
        ppppplStack_138 = ppppplStack_3a0;
        ppppplStack_140 = ppppplStack_3a8;
        pppplStack_130 = (long ****)CONCAT17(cStack_391,uStack_398);
LAB_10a2562b0:
        uVar16 = 1;
      }
      pppplStack_128 = (long ****)CONCAT71(pppplStack_128._1_7_,uVar16);
      if ((long)uStack_330 < 0) {
        if ((long ******)ppppplStack_338 != (long ******)0x0) {
          func_0x000107c3192c(&ppppplStack_210,ppppplStack_340);
          goto LAB_10a2563d0;
        }
LAB_10a2562dc:
        uVar16 = 0;
        ppppplStack_210 = (long *****)((ulong)ppppplStack_210 & 0xffffffffffffff00);
      }
      else {
        if (uStack_330._7_1_ == '\0') goto LAB_10a2562dc;
        ppppplStack_208 = ppppplStack_338;
        ppppplStack_210 = ppppplStack_340;
        pppplStack_200 = (long ****)uStack_330;
LAB_10a2563d0:
        uVar16 = 1;
      }
      pppplStack_1f8 = (long ****)CONCAT71(pppplStack_1f8._1_7_,uVar16);
      FUN_10a234a0c(&ppppplStack_140,&ppppplStack_210);
      goto LAB_10a25645c;
    }
  }
LAB_10a2546d0:
  __ZNSt3__15mutex4lockEv(param_2);
  if ((param_4 != (long ******)0x0) &&
     (pppppplVar17 = *(long *******)(param_2 + 0x48), pppppplVar17 != (long ******)0x0)) {
    uVar23 = (long)pppppplVar17 - 1;
    if (((ulong)pppppplVar17 & uVar23) == 0) {
      pppppplVar25 = (long ******)(uVar23 & (ulong)param_4);
    }
    else {
      pppppplVar25 = param_4;
      if (pppppplVar17 <= param_4) {
        uVar38 = 0;
        if (pppppplVar17 != (long ******)0x0) {
          uVar38 = (ulong)param_4 / (ulong)pppppplVar17;
        }
        pppppplVar25 = (long ******)((long)param_4 - uVar38 * (long)pppppplVar17);
      }
    }
    puVar19 = *(undefined8 **)(*(long *)(param_2 + 0x40) + (long)pppppplVar25 * 8);
    if ((puVar19 != (undefined8 *)0x0) && (plVar35 = (long *)*puVar19, plVar35 != (long *)0x0)) {
      bVar40 = POPCOUNT((char)pppppplVar17) + POPCOUNT((char)((ulong)pppppplVar17 >> 8)) +
               POPCOUNT((char)((ulong)pppppplVar17 >> 0x10)) +
               POPCOUNT((char)((ulong)pppppplVar17 >> 0x18)) +
               POPCOUNT((char)((ulong)pppppplVar17 >> 0x20)) +
               POPCOUNT((char)((ulong)pppppplVar17 >> 0x28)) +
               POPCOUNT((char)((ulong)pppppplVar17 >> 0x30)) +
               POPCOUNT((char)((ulong)pppppplVar17 >> 0x38));
LAB_10a254760:
      pppppplVar31 = (long ******)plVar35[1];
      if (pppppplVar31 == param_4) {
        if ((long ******)plVar35[2] != param_4) goto LAB_10a2547a4;
        *param_1 = 0;
        param_1[1] = 0;
        lVar9 = plVar35[4];
        if (lVar9 != 0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          param_1[1] = lVar9;
          if (lVar9 == 0) {
            lVar9 = *param_1;
          }
          else {
            lVar9 = plVar35[3];
            *param_1 = lVar9;
          }
          if (lVar9 != 0) goto LAB_10a255da4;
          pppppplVar17 = *(long *******)(param_2 + 0x48);
          bVar40 = POPCOUNT((char)pppppplVar17) + POPCOUNT((char)((ulong)pppppplVar17 >> 8)) +
                   POPCOUNT((char)((ulong)pppppplVar17 >> 0x10)) +
                   POPCOUNT((char)((ulong)pppppplVar17 >> 0x18)) +
                   POPCOUNT((char)((ulong)pppppplVar17 >> 0x20)) +
                   POPCOUNT((char)((ulong)pppppplVar17 >> 0x28)) +
                   POPCOUNT((char)((ulong)pppppplVar17 >> 0x30)) +
                   POPCOUNT((char)((ulong)pppppplVar17 >> 0x38));
        }
        lVar9 = *plVar35;
        pppppplVar25 = (long ******)plVar35[1];
        if (bVar40 < 2) {
          pppppplVar25 = (long ******)((ulong)pppppplVar25 & (long)pppppplVar17 - 1U);
        }
        else if (pppppplVar17 <= pppppplVar25) {
          uVar23 = 0;
          if (pppppplVar17 != (long ******)0x0) {
            uVar23 = (ulong)pppppplVar25 / (ulong)pppppplVar17;
          }
          pppppplVar25 = (long ******)((long)pppppplVar25 - uVar23 * (long)pppppplVar17);
        }
        plVar27 = *(long **)(*(long *)(param_2 + 0x40) + (long)pppppplVar25 * 8);
        do {
          plVar28 = plVar27;
          plVar27 = (long *)*plVar28;
        } while ((long *)*plVar28 != plVar35);
        if (plVar28 == (long *)(param_2 + 0x50)) {
LAB_10a25486c:
          if (lVar9 == 0) {
LAB_10a2548a4:
            *(undefined8 *)(*(long *)(param_2 + 0x40) + (long)pppppplVar25 * 8) = 0;
            lVar9 = *plVar35;
            goto LAB_10a2548ac;
          }
          pppppplVar31 = *(long *******)(lVar9 + 8);
          if (bVar40 < 2) {
            pppppplVar39 = (long ******)((ulong)pppppplVar31 & (long)pppppplVar17 - 1U);
          }
          else {
            pppppplVar39 = pppppplVar31;
            if (pppppplVar17 <= pppppplVar31) {
              uVar23 = 0;
              if (pppppplVar17 != (long ******)0x0) {
                uVar23 = (ulong)pppppplVar31 / (ulong)pppppplVar17;
              }
              pppppplVar39 = (long ******)((long)pppppplVar31 - uVar23 * (long)pppppplVar17);
            }
          }
          if (pppppplVar39 != pppppplVar25) goto LAB_10a2548a4;
LAB_10a2548b4:
          if (bVar40 < 2) {
            pppppplVar31 = (long ******)((ulong)pppppplVar31 & (long)pppppplVar17 - 1U);
          }
          else if (pppppplVar17 <= pppppplVar31) {
            uVar23 = 0;
            if (pppppplVar17 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar31 / (ulong)pppppplVar17;
            }
            pppppplVar31 = (long ******)((long)pppppplVar31 - uVar23 * (long)pppppplVar17);
          }
          if (pppppplVar31 != pppppplVar25) {
            *(long **)(*(long *)(param_2 + 0x40) + (long)pppppplVar31 * 8) = plVar28;
            lVar9 = *plVar35;
          }
        }
        else {
          pppppplVar31 = (long ******)plVar28[1];
          if (bVar40 < 2) {
            pppppplVar31 = (long ******)((ulong)pppppplVar31 & (long)pppppplVar17 - 1U);
          }
          else if (pppppplVar17 <= pppppplVar31) {
            uVar23 = 0;
            if (pppppplVar17 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar31 / (ulong)pppppplVar17;
            }
            pppppplVar31 = (long ******)((long)pppppplVar31 - uVar23 * (long)pppppplVar17);
          }
          if (pppppplVar31 != pppppplVar25) goto LAB_10a25486c;
LAB_10a2548ac:
          if (lVar9 != 0) {
            pppppplVar31 = *(long *******)(lVar9 + 8);
            goto LAB_10a2548b4;
          }
        }
        *plVar28 = lVar9;
        *plVar35 = 0;
        *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + -1;
        if (plVar35[4] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        __ZdlPv(plVar35);
        FUN_10a1cbb34(param_1);
        goto LAB_10a25491c;
      }
      if (((ulong)pppppplVar17 & uVar23) == 0) {
        pppppplVar31 = (long ******)((ulong)pppppplVar31 & uVar23);
      }
      else if (pppppplVar17 <= pppppplVar31) {
        uVar38 = 0;
        if (pppppplVar17 != (long ******)0x0) {
          uVar38 = (ulong)pppppplVar31 / (ulong)pppppplVar17;
        }
        pppppplVar31 = (long ******)((long)pppppplVar31 - uVar38 * (long)pppppplVar17);
      }
      if (pppppplVar31 == pppppplVar25) goto LAB_10a2547a4;
    }
  }
LAB_10a25491c:
  pppppplVar17 = (long ******)(param_2 + 0x68);
  pppppplVar25 = pppppplVar17;
  func_0x000107c2b05c(pppppplVar17,param_5);
  pppppplVar31 = *(long *******)(param_2 + 0x70);
  if (pppppplVar31 != (long ******)0x0) {
    pcVar36 = (char *)((long)pppppplVar31 + -1);
    if (((ulong)pppppplVar31 & (ulong)pcVar36) == 0) {
      pppppplVar39 = (long ******)((ulong)pcVar36 & (ulong)pppppplVar25);
    }
    else {
      pppppplVar39 = pppppplVar25;
      if (pppppplVar31 <= pppppplVar25) {
        uVar23 = 0;
        if (pppppplVar31 != (long ******)0x0) {
          uVar23 = (ulong)pppppplVar25 / (ulong)pppppplVar31;
        }
        pppppplVar39 = (long ******)((long)pppppplVar25 - uVar23 * (long)pppppplVar31);
      }
    }
    if (((*pppppplVar17)[(long)pppppplVar39] != (long ****)0x0) &&
       (pppplVar37 = (long ****)*(*pppppplVar17)[(long)pppppplVar39], pppplVar37 != (long ****)0x0))
    {
LAB_10a254978:
      pppppplVar18 = (long ******)pppplVar37[1];
      if (pppppplVar18 == pppppplVar25) {
        pppppplVar18 = pppppplVar17;
        func_0x000107c2b068(pppppplVar17,pppplVar37 + 2,param_5);
        if (((ulong)pppppplVar18 & 1) == 0) goto LAB_10a2549c4;
        *param_1 = 0;
        param_1[1] = 0;
        ppplVar10 = pppplVar37[6];
        if (ppplVar10 != (long ***)0x0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          param_1[1] = (long)ppplVar10;
          if (ppplVar10 == (long ***)0x0) {
            ppplVar10 = (long ***)*param_1;
          }
          else {
            ppplVar10 = pppplVar37[5];
            *param_1 = (long)ppplVar10;
          }
          if (ppplVar10 != (long ***)0x0) goto LAB_10a255da4;
        }
        ppplVar24 = *(long ****)(param_2 + 0x70);
        ppplVar10 = *pppplVar37;
        ppplVar20 = pppplVar37[1];
        uVar23 = (long)ppplVar24 - 1;
        if (((ulong)ppplVar24 & uVar23) == 0) {
          ppplVar20 = (long ***)(uVar23 & (ulong)ppplVar20);
        }
        else if (ppplVar24 <= ppplVar20) {
          uVar38 = 0;
          if (ppplVar24 != (long ***)0x0) {
            uVar38 = (ulong)ppplVar20 / (ulong)ppplVar24;
          }
          ppplVar20 = (long ***)((long)ppplVar20 - uVar38 * (long)ppplVar24);
        }
        pppplVar29 = (*pppppplVar17)[(long)ppplVar20];
        do {
          pppplVar30 = pppplVar29;
          pppplVar29 = (long ****)*pppplVar30;
        } while ((long ****)*pppplVar30 != pppplVar37);
        if (pppplVar30 == (long ****)(param_2 + 0x78)) {
LAB_10a254a80:
          if (ppplVar10 == (long ***)0x0) {
LAB_10a254ab4:
            (*pppppplVar17)[(long)ppplVar20] = (long ****)0x0;
            ppplVar10 = *pppplVar37;
            goto LAB_10a254abc;
          }
          ppplVar33 = (long ***)ppplVar10[1];
          if (((ulong)ppplVar24 & uVar23) == 0) {
            ppplVar34 = (long ***)((ulong)ppplVar33 & uVar23);
          }
          else {
            ppplVar34 = ppplVar33;
            if (ppplVar24 <= ppplVar33) {
              uVar38 = 0;
              if (ppplVar24 != (long ***)0x0) {
                uVar38 = (ulong)ppplVar33 / (ulong)ppplVar24;
              }
              ppplVar34 = (long ***)((long)ppplVar33 - uVar38 * (long)ppplVar24);
            }
          }
          if (ppplVar34 != ppplVar20) goto LAB_10a254ab4;
LAB_10a254ac4:
          if (((ulong)ppplVar24 & uVar23) == 0) {
            ppplVar33 = (long ***)((ulong)ppplVar33 & uVar23);
          }
          else if (ppplVar24 <= ppplVar33) {
            uVar23 = 0;
            if (ppplVar24 != (long ***)0x0) {
              uVar23 = (ulong)ppplVar33 / (ulong)ppplVar24;
            }
            ppplVar33 = (long ***)((long)ppplVar33 - uVar23 * (long)ppplVar24);
          }
          if (ppplVar33 != ppplVar20) {
            (*pppppplVar17)[(long)ppplVar33] = pppplVar30;
            ppplVar10 = *pppplVar37;
          }
        }
        else {
          ppplVar33 = pppplVar30[1];
          if (((ulong)ppplVar24 & uVar23) == 0) {
            ppplVar33 = (long ***)((ulong)ppplVar33 & uVar23);
          }
          else if (ppplVar24 <= ppplVar33) {
            uVar38 = 0;
            if (ppplVar24 != (long ***)0x0) {
              uVar38 = (ulong)ppplVar33 / (ulong)ppplVar24;
            }
            ppplVar33 = (long ***)((long)ppplVar33 - uVar38 * (long)ppplVar24);
          }
          if (ppplVar33 != ppplVar20) goto LAB_10a254a80;
LAB_10a254abc:
          if (ppplVar10 != (long ***)0x0) {
            ppplVar33 = (long ***)ppplVar10[1];
            goto LAB_10a254ac4;
          }
        }
        *pppplVar30 = ppplVar10;
        *pppplVar37 = (long ***)0x0;
        *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x80) + -1;
        FUN_10a284220(pppplVar37 + 2);
        __ZdlPv(pppplVar37);
        FUN_10a1cbb34(param_1);
        goto LAB_10a254b24;
      }
      if (((ulong)pppppplVar31 & (ulong)pcVar36) == 0) {
        pppppplVar18 = (long ******)((ulong)pppppplVar18 & (ulong)pcVar36);
      }
      else if (pppppplVar31 <= pppppplVar18) {
        uVar23 = 0;
        if (pppppplVar31 != (long ******)0x0) {
          uVar23 = (ulong)pppppplVar18 / (ulong)pppppplVar31;
        }
        pppppplVar18 = (long ******)((long)pppppplVar18 - uVar23 * (long)pppppplVar31);
      }
      if (pppppplVar18 == pppppplVar39) goto LAB_10a2549c4;
    }
  }
LAB_10a254b24:
  *param_1 = 0;
  param_1[1] = 0;
  ppppplStack_2d8 = (long *****)param_6[1];
  ppppplStack_2e0 = (long *****)*param_6;
  pppplStack_2d0 = (long ****)param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  pppplStack_2c8 = (long ****)((ulong)pppplStack_2c8 & 0xffffffffffffff00);
  cStack_2b8 = *(char *)(param_6 + 5) == '\x01';
  if ((bool)cStack_2b8) {
    pppplStack_2c0 = (long ****)param_6[4];
    pppplStack_2c8 = (long ****)param_6[3];
    param_6[3] = 0;
    param_6[4] = 0;
  }
  uStack_2b0 = *(undefined4 *)(param_6 + 6);
  uStack_2ac = *(undefined2 *)((long)param_6 + 0x34);
  uStack_2a8 = param_6[7];
  puStack_2a0 = (undefined *)param_6[8];
  appuStack_298[0] = &PTR_DAT_110ae9180;
  plVar35 = param_6 + 9;
  (**(code **)(*plVar35 + 0x10))(appuStack_298,plVar35);
  param_6[8] = &UNK_1053a6a3c;
  (**(code **)*plVar35)(plVar35);
  *plVar35 = (long)&PTR_DAT_110ae9180;
  plVar27 = param_6 + 0x12;
  uStack_260 = param_6[0x10];
  puStack_258 = (undefined *)param_6[0x11];
  appuStack_250[0] = &PTR_DAT_110ae9180;
  (**(code **)(*plVar27 + 0x10))(appuStack_250,plVar27);
  param_6[0x11] = &UNK_1053a6a3c;
  plVar35 = plVar27;
  (**(code **)*plVar27)();
  iVar7 = (int)plVar35;
  *plVar27 = (long)&PTR_DAT_110ae9180;
  FUN_10ad055a0();
  if (iVar7 != 0) {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar35 = (long *)*ppuVar8;
      if ((plVar35 == (long *)0x0) || ((**(code **)(*plVar35 + 0x18))(), plVar35 == (long *)0x0))
      goto LAB_10a254c38;
      plVar35 = plVar35 + 7;
    }
    else {
      plVar35 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar35 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppplStack_3a8,&UNK_10f647648);
      if ((long)pppplStack_2d0 < 0) {
        func_0x000107c3192c(&ppppplStack_340,ppppplStack_2e0,ppppplStack_2d8);
      }
      else {
        ppppplStack_338 = ppppplStack_2d8;
        ppppplStack_340 = ppppplStack_2e0;
        uStack_330 = (long *****)pppplStack_2d0;
      }
      if (cStack_391 < '\0') {
        ppppplStack_140 = (long *****)"null";
        if ((long ******)ppppplStack_3a0 != (long ******)0x0) {
          ppppplStack_140 = ppppplStack_3a8;
        }
      }
      else {
        ppppplStack_140 = (long *****)"null";
        if (cStack_391 != '\0') {
          ppppplStack_140 = (long *****)&ppppplStack_3a8;
        }
      }
      if ((long)uStack_330 < 0) {
        ppppplStack_210 = (long *****)"null";
        if ((long ******)ppppplStack_338 != (long ******)0x0) {
          ppppplStack_210 = ppppplStack_340;
        }
      }
      else {
        ppppplStack_210 = (long *****)"null";
        if (uStack_330._7_1_ != '\0') {
          ppppplStack_210 = (long *****)&ppppplStack_340;
        }
      }
      FUN_10a224324(&ppppplStack_140,&ppppplStack_210);
      if (cStack_391 < '\0') {
        if ((long ******)ppppplStack_3a0 != (long ******)0x0) {
          func_0x000107c3192c(&ppppplStack_140,ppppplStack_3a8);
          goto LAB_10a2562f8;
        }
LAB_10a25617c:
        uVar16 = 0;
        ppppplStack_140 = (long *****)((ulong)ppppplStack_140 & 0xffffffffffffff00);
      }
      else {
        if (cStack_391 == '\0') goto LAB_10a25617c;
        ppppplStack_138 = ppppplStack_3a0;
        ppppplStack_140 = ppppplStack_3a8;
        pppplStack_130 = (long ****)CONCAT17(cStack_391,uStack_398);
LAB_10a2562f8:
        uVar16 = 1;
      }
      pppplStack_128 = (long ****)CONCAT71(pppplStack_128._1_7_,uVar16);
      if ((long)uStack_330 < 0) {
        if ((long ******)ppppplStack_338 != (long ******)0x0) {
          func_0x000107c3192c(&ppppplStack_210,ppppplStack_340);
          goto LAB_10a2563f8;
        }
LAB_10a256324:
        uVar16 = 0;
        ppppplStack_210 = (long *****)((ulong)ppppplStack_210 & 0xffffffffffffff00);
      }
      else {
        if (uStack_330._7_1_ == '\0') goto LAB_10a256324;
        ppppplStack_208 = ppppplStack_338;
        ppppplStack_210 = ppppplStack_340;
        pppplStack_200 = (long ****)uStack_330;
LAB_10a2563f8:
        uVar16 = 1;
      }
      pppplStack_1f8 = (long ****)CONCAT71(pppplStack_1f8._1_7_,uVar16);
      FUN_10a234a0c(&ppppplStack_140,&ppppplStack_210);
      goto LAB_10a25645c;
    }
  }
LAB_10a254c38:
  plVar35 = *(long **)(param_3 + 0x268);
  ppuVar8 = &PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d738;
  if ((plVar35 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar35 == (long *)0x0)
     ) {
    ppppplStack_350 = (long *****)0x0;
    ppppplStack_348 = (long *****)0x0;
  }
  else {
    if (*(long *)(param_3 + 0x260) == 0) {
      ppppplStack_350 = (long *****)0x0;
      ppppplStack_348 = (long *****)0x0;
    }
    else {
      func_0x00010a152370(&ppppplStack_140);
      ppppplStack_350 = (long *****)0x0;
      ppppplStack_348 = (long *****)0x0;
      if ((long ******)ppppplStack_138 != (long ******)0x0) {
        pppppplVar25 = (long ******)ppppplStack_138;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (pppppplVar25 != (long ******)0x0) {
          ppppplStack_350 = ppppplStack_140;
        }
        ppppplStack_348 = (long *****)pppppplVar25;
        if ((long ******)ppppplStack_138 != (long ******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    plVar27 = plVar35 + 1;
    do {
      lVar9 = *plVar27;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar2) {
        *plVar27 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar35);
    }
    puVar5 = PTR___tlv_bootstrap_11340d750;
    if ((long ******)ppppplStack_350 != (long ******)0x0) {
      ppuVar11 = ppuVar8;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      if (((ulong)*ppuVar11 & 1) == 0) {
        ppuVar11 = ppuVar12;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
        ppuVar11 = ppuVar8;
        (*(code *)puVar5)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      FUN_10a15217c();
    }
  }
  puVar5 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = ppuVar8;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  if (((ulong)*ppuVar11 & 1) == 0) {
    ppuVar11 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
    (*(code *)puVar5)();
    *(undefined1 *)ppuVar8 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar19 = (undefined8 *)ppuVar12[2];
  if (puVar19 == (undefined8 *)0x0) {
    acStack_370[0] = '\0';
    plStack_360 = (long *)0x0;
    uStack_358 = 0;
  }
  else {
    cVar1 = *(char *)(puVar19[1] + 0x17);
    uStack_36e = 7;
    ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
    acStack_370[0] = cVar1;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar7 = *(int *)ppuVar8;
    if (*(int *)ppuVar8 == 0) {
      ppppplStack_140 = (long *****)0x0;
      _pthread_threadid_np(0,&ppppplStack_140);
      *(int *)ppuVar8 = (int)ppppplStack_140;
      iVar7 = (int)ppppplStack_140;
    }
    lVar9 = lRam00000001137eade0;
    plStack_360 = (long *)0x0;
    uStack_358 = 0;
    iStack_36c = iVar7;
    if (cVar1 != '\0') {
      lVar21 = puVar19[1];
      bVar40 = *(byte *)(lVar21 + 0x42) | *(byte *)(lVar21 + 0x43);
      if (((bVar40 & 1) != 0) || (*(char *)(lVar21 + 0x40) == '\x01')) {
        uVar23 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar38 = cntvct_el0;
        if (uVar23 != 1000000000) {
          uVar3 = 0;
          if (uVar23 != 0) {
            uVar3 = uVar38 / uVar23;
          }
          uVar4 = 0;
          if (uVar23 != 0) {
            uVar4 = ((uVar38 - uVar3 * uVar23) * 1000000000) / uVar23;
          }
          uVar38 = uVar4 + uVar3 * 1000000000;
        }
        uStack_368 = uVar38;
        if (((bVar40 & 1) != 0) &&
           (puVar13 = puVar19, FUN_10a1333cc(), puVar13 != (undefined8 *)0x0)) {
          uVar16 = 3;
          if (lRam00000001137eade0 != lVar9) {
            uVar16 = 5;
          }
          lVar21 = 0;
          if (lRam00000001137eade0 != lVar9) {
            lVar21 = lVar9;
          }
          *puVar13 = &UNK_10f648666;
          puVar13[1] = lVar21;
          puVar13[2] = uVar38;
          *(int *)(puVar13 + 3) = iVar7;
          *(undefined2 *)((long)puVar13 + 0x1c) = 7;
          *(undefined1 *)((long)puVar13 + 0x1e) = uVar16;
          if ((*(byte *)(puVar19 + 0x38) & 1) == 0) goto LAB_10a25645c;
          puVar19[0x18] = puVar19[0x18] + 1;
        }
      }
      if (*(char *)(puVar19[1] + 0x41) == '\x01') {
        plVar35 = (long *)puVar19[0xb];
        if (plVar35 != (long *)0x0) {
          plVar27 = plVar35;
          (**(code **)(*plVar35 + 0x10))(plVar35,&UNK_10f648666);
          plStack_360 = plVar27;
        }
        uStack_358 = plVar35 != (long *)0x0;
      }
    }
  }
  pppppplVar25 = param_5;
  FUN_10a0f1b8c(&ppppplStack_3a8,param_5,0);
  iVar7 = (int)pppppplVar25;
  if ((bStack_378 & 1) == 0) {
    ppppplStack_138 = param_5[1];
    ppppplStack_140 = *param_5;
    if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
      ppppplStack_138 = (long *****)(ulong)*(byte *)((long)param_5 + 0x17);
      ppppplStack_140 = (long *****)param_5;
    }
    pppppplVar25 = &ppppplStack_140;
    FUN_10a159054(pppppplVar25,&UNK_10f409c0c,4);
    if (((ulong)pppppplVar25 & 1) == 0) {
      ppppplStack_138 = param_5[1];
      ppppplStack_140 = *param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        ppppplStack_138 = (long *****)(ulong)*(byte *)((long)param_5 + 0x17);
        ppppplStack_140 = (long *****)param_5;
      }
      pppppplVar25 = &ppppplStack_140;
      FUN_10a159054(pppppplVar25,&DAT_10f2e7c75,4);
      if (((ulong)pppppplVar25 & 1) != 0) goto LAB_10a254fcc;
      ppppplStack_138 = param_5[1];
      ppppplStack_140 = *param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        ppppplStack_138 = (long *****)(ulong)*(byte *)((long)param_5 + 0x17);
        ppppplStack_140 = (long *****)param_5;
      }
      pppppplVar25 = &ppppplStack_140;
      FUN_10a159054(pppppplVar25,&UNK_10f56e82a,5);
      if (((ulong)pppppplVar25 & 1) != 0) goto LAB_10a254fcc;
      ppppplStack_138 = param_5[1];
      ppppplStack_140 = *param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        ppppplStack_138 = (long *****)(ulong)*(byte *)((long)param_5 + 0x17);
        ppppplStack_140 = (long *****)param_5;
      }
      pppppplVar25 = &ppppplStack_140;
      FUN_10a159054(pppppplVar25,&UNK_10f409c11,5);
      iVar7 = 0;
      if ((int)pppppplVar25 != 0) goto LAB_10a254fcc;
    }
    else {
LAB_10a254fcc:
      ppppplVar14 = param_5[1];
      pppppplVar25 = (long ******)*param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        ppppplVar14 = (long *****)(ulong)*(byte *)((long)param_5 + 0x17);
        pppppplVar25 = param_5;
      }
      pppppplVar31 = (long ******)((long)pppppplVar25 + (long)ppppplVar14);
      pppppplVar39 = pppppplVar31;
      pppppplVar18 = pppppplVar25;
      pppppplVar32 = pppppplVar31;
      if (ppppplVar14 != (long *****)0x0) {
        do {
          while (pppppplVar39 = pppppplVar18, pppppplVar26 = (long ******)((long)pppppplVar39 + 1),
                *(char *)pppppplVar39 != '.') {
            pppppplVar39 = pppppplVar32;
            pppppplVar18 = pppppplVar26;
            if (pppppplVar26 == pppppplVar31) goto LAB_10a255038;
          }
          pppppplVar18 = (long ******)((long)pppppplVar39 + 1);
          pppppplVar32 = pppppplVar39;
        } while (pppppplVar26 != pppppplVar31);
      }
LAB_10a255038:
      lVar9 = (long)pppppplVar39 - (long)pppppplVar25;
      if (pppppplVar39 == pppppplVar31) {
        lVar9 = -1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&ppppplStack_210,param_5,0,lVar9,&ppppplStack_140);
      pppppplVar25 = (long ******)ppppplStack_208;
      if (-1 < (long)pppplStack_200) {
        pppppplVar25 = (long ******)((ulong)pppplStack_200 >> 0x38);
      }
      FUN_10a003c90(&ppppplStack_340,(char *)((long)pppppplVar25 + 4),&ppppplStack_300);
      pppppplVar31 = (long ******)ppppplStack_340;
      if (-1 < (long)uStack_330) {
        pppppplVar31 = &ppppplStack_340;
      }
      if (pppppplVar25 != (long ******)0x0) {
        pppppplVar39 = (long ******)ppppplStack_210;
        if (-1 < (long)pppplStack_200) {
          pppppplVar39 = &ppppplStack_210;
        }
        _memmove(pppppplVar31,pppppplVar39,pppppplVar25);
      }
      builtin_strncpy((char *)((long)pppppplVar31 + (long)pppppplVar25),".pvr",5);
      FUN_10a0f1b8c(&ppppplStack_140,&ppppplStack_340,0);
      pppppplVar25 = &ppppplStack_3a8;
      FUN_10a26ad00(pppppplVar25,&ppppplStack_140);
      iVar7 = (int)pppppplVar25;
      if ((char)uStack_110 == '\x01') {
        iVar7 = (int)&ppppplStack_140;
        FUN_10a0f1ea0();
      }
      if ((long)uStack_330 < 0) {
        pppppplVar25 = (long ******)ppppplStack_340;
        __ZdlPv();
        iVar7 = (int)pppppplVar25;
      }
      if ((bStack_378 & 1) == 0) {
        pppppplVar25 = (long ******)ppppplStack_208;
        if (-1 < (long)pppplStack_200) {
          pppppplVar25 = (long ******)((ulong)pppplStack_200 >> 0x38);
        }
        FUN_10a003c90(&ppppplStack_340,(char *)((long)pppppplVar25 + 5),&ppppplStack_300);
        pppppplVar31 = (long ******)ppppplStack_340;
        if (-1 < (long)uStack_330) {
          pppppplVar31 = &ppppplStack_340;
        }
        if (pppppplVar25 != (long ******)0x0) {
          pppppplVar39 = (long ******)ppppplStack_210;
          if (-1 < (long)pppplStack_200) {
            pppppplVar39 = &ppppplStack_210;
          }
          _memmove(pppppplVar31,pppppplVar39,pppppplVar25);
        }
        builtin_strncpy((char *)((long)pppppplVar31 + (long)pppppplVar25),".webp",6);
        FUN_10a0f1b8c(&ppppplStack_140,&ppppplStack_340,0);
        pppppplVar25 = &ppppplStack_3a8;
        FUN_10a26ad00(pppppplVar25,&ppppplStack_140);
        iVar7 = (int)pppppplVar25;
        if ((char)uStack_110 == '\x01') {
          iVar7 = (int)&ppppplStack_140;
          FUN_10a0f1ea0();
        }
        if ((long)uStack_330 < 0) {
          pppppplVar25 = (long ******)ppppplStack_340;
          __ZdlPv();
          iVar7 = (int)pppppplVar25;
        }
      }
      if ((long)pppplStack_200 < 0) {
        pppppplVar25 = (long ******)ppppplStack_210;
        __ZdlPv();
        iVar7 = (int)pppppplVar25;
      }
    }
    if ((bStack_378 & 1) != 0) goto LAB_10a2551dc;
  }
  else {
LAB_10a2551dc:
    FUN_10ad055a0();
    if (iVar7 != 0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar8 == (undefined *)0x0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar35 = (long *)*ppuVar8;
        if ((plVar35 == (long *)0x0) || ((**(code **)(*plVar35 + 0x18))(), plVar35 == (long *)0x0))
        goto LAB_10a255210;
        plVar35 = plVar35 + 7;
      }
      else {
        plVar35 = (long *)(*ppuVar8 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar35 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&ppppplStack_340,&UNK_10f64768e);
        if ((long)pppplStack_2d0 < 0) {
          func_0x000107c3192c(&ppppplStack_300,ppppplStack_2e0,ppppplStack_2d8);
        }
        else {
          ppppplStack_2f8 = ppppplStack_2d8;
          ppppplStack_300 = ppppplStack_2e0;
          uStack_2f0 = (long *****)pppplStack_2d0;
        }
        if ((long)uStack_330 < 0) {
          ppppplStack_140 = (long *****)"null";
          if ((long ******)ppppplStack_338 != (long ******)0x0) {
            ppppplStack_140 = ppppplStack_340;
          }
        }
        else {
          ppppplStack_140 = (long *****)"null";
          if (uStack_330._7_1_ != '\0') {
            ppppplStack_140 = (long *****)&ppppplStack_340;
          }
        }
        if ((long)uStack_2f0 < 0) {
          ppppplStack_210 = (long *****)"null";
          if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
            ppppplStack_210 = ppppplStack_300;
          }
        }
        else {
          ppppplStack_210 = (long *****)"null";
          if (uStack_2f0._7_1_ != '\0') {
            ppppplStack_210 = (long *****)&ppppplStack_300;
          }
        }
        FUN_10a224324(&ppppplStack_140,&ppppplStack_210);
        if ((long)uStack_330 < 0) {
          if ((long ******)ppppplStack_338 != (long ******)0x0) {
            func_0x000107c3192c(&ppppplStack_140,ppppplStack_340);
            goto LAB_10a256340;
          }
LAB_10a256208:
          uVar16 = 0;
          ppppplStack_140 = (long *****)((ulong)ppppplStack_140 & 0xffffffffffffff00);
        }
        else {
          if (uStack_330._7_1_ == '\0') goto LAB_10a256208;
          ppppplStack_138 = ppppplStack_338;
          ppppplStack_140 = ppppplStack_340;
          pppplStack_130 = (long ****)uStack_330;
LAB_10a256340:
          uVar16 = 1;
        }
        pppplStack_128 = (long ****)CONCAT71(pppplStack_128._1_7_,uVar16);
        if ((long)uStack_2f0 < 0) {
          if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
            func_0x000107c3192c(&ppppplStack_210,ppppplStack_300);
            goto LAB_10a256420;
          }
LAB_10a25636c:
          uVar16 = 0;
          ppppplStack_210 = (long *****)((ulong)ppppplStack_210 & 0xffffffffffffff00);
        }
        else {
          if (uStack_2f0._7_1_ == '\0') goto LAB_10a25636c;
          ppppplStack_208 = ppppplStack_2f8;
          ppppplStack_210 = ppppplStack_300;
          pppplStack_200 = (long ****)uStack_2f0;
LAB_10a256420:
          uVar16 = 1;
        }
        pppplStack_1f8 = (long ****)CONCAT71(pppplStack_1f8._1_7_,uVar16);
        FUN_10a234a0c(&ppppplStack_140,&ppppplStack_210);
        goto LAB_10a25645c;
      }
    }
LAB_10a255210:
    if ((bStack_378 & 1) == 0) goto LAB_10a25645c;
    plVar35 = (long *)0x38;
    __Znwm();
    FUN_10a0f2a50();
    ppppplStack_208 = ppppplStack_2d8;
    ppppplStack_210 = ppppplStack_2e0;
    pppplStack_200 = pppplStack_2d0;
    ppppplStack_2e0 = (long *****)0x0;
    ppppplStack_2d8 = (long *****)0x0;
    pppplStack_2d0 = (long ****)0x0;
    pppppplVar25 = &ppppplStack_210;
    pppplStack_1f8 = (long ****)((ulong)pppplStack_1f8 & 0xffffffffffffff00);
    cStack_1e8 = cStack_2b8 == '\x01';
    if ((bool)cStack_1e8) {
      pppplStack_1f0 = pppplStack_2c0;
      pppplStack_1f8 = pppplStack_2c8;
      pppplStack_2c8 = (long ****)0x0;
      pppplStack_2c0 = (long ****)0x0;
    }
    uStack_1e0 = uStack_2b0;
    uStack_1dc = uStack_2ac;
    appuStack_1c8[0] = &PTR_DAT_110ae9180;
    uStack_1d8 = uStack_2a8;
    puStack_1d0 = puStack_2a0;
    plStack_3b0 = plVar35;
    (*(code *)appuStack_298[0][2])(appuStack_1c8,appuStack_298);
    puStack_2a0 = &UNK_1053a6a3c;
    (*(code *)*appuStack_298[0])(appuStack_298);
    appuStack_298[0] = &PTR_DAT_110ae9180;
    appuStack_180[0] = &PTR_DAT_110ae9180;
    uStack_190 = uStack_260;
    puStack_188 = puStack_258;
    (*(code *)appuStack_250[0][2])(appuStack_180,appuStack_250);
    puStack_258 = &UNK_1053a6a3c;
    iVar7 = (int)appuStack_250;
    (*(code *)*appuStack_250[0])();
    appuStack_250[0] = &PTR_DAT_110ae9180;
    FUN_10ad055a0();
    if (iVar7 != 0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar8 == (undefined *)0x0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar35 = (long *)*ppuVar8;
        if ((plVar35 == (long *)0x0) || ((**(code **)(*plVar35 + 0x18))(), plVar35 == (long *)0x0))
        goto LAB_10a255338;
        plVar35 = plVar35 + 7;
      }
      else {
        plVar35 = (long *)(*ppuVar8 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar35 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&ppppplStack_300,&UNK_10f6476ad);
        if ((long)pppplStack_200 < 0) {
          func_0x000107c3192c(&ppppplStack_320,ppppplStack_210,ppppplStack_208);
        }
        else {
          ppppplStack_318 = ppppplStack_208;
          ppppplStack_320 = ppppplStack_210;
          uStack_310 = (long *****)pppplStack_200;
        }
        if ((long)uStack_2f0 < 0) {
          ppppplStack_140 = (long *****)"null";
          if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
            ppppplStack_140 = ppppplStack_300;
          }
        }
        else {
          ppppplStack_140 = (long *****)"null";
          if (uStack_2f0._7_1_ != '\0') {
            ppppplStack_140 = (long *****)&ppppplStack_300;
          }
        }
        if ((long)uStack_310 < 0) {
          ppppplStack_340 = (long *****)"null";
          if ((long ******)ppppplStack_318 != (long ******)0x0) {
            ppppplStack_340 = ppppplStack_320;
          }
        }
        else {
          ppppplStack_340 = (long *****)"null";
          if (uStack_310._7_1_ != '\0') {
            ppppplStack_340 = (long *****)&ppppplStack_320;
          }
        }
        FUN_10a224324(&ppppplStack_140,&ppppplStack_340);
        if ((long)uStack_2f0 < 0) {
          if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
            func_0x000107c3192c(&ppppplStack_140,ppppplStack_300);
            goto LAB_10a256388;
          }
LAB_10a256294:
          uVar16 = 0;
          ppppplStack_140 = (long *****)((ulong)ppppplStack_140 & 0xffffffffffffff00);
        }
        else {
          if (uStack_2f0._7_1_ == '\0') goto LAB_10a256294;
          ppppplStack_138 = ppppplStack_2f8;
          ppppplStack_140 = ppppplStack_300;
          pppplStack_130 = (long ****)uStack_2f0;
LAB_10a256388:
          uVar16 = 1;
        }
        pppplStack_128 = (long ****)CONCAT71(pppplStack_128._1_7_,uVar16);
        if ((long)uStack_310 < 0) {
          if ((long ******)ppppplStack_318 != (long ******)0x0) {
            func_0x000107c3192c(&ppppplStack_340,ppppplStack_320);
            goto LAB_10a256448;
          }
LAB_10a2563b4:
          uStack_328 = 0;
          ppppplStack_340 = (long *****)((ulong)ppppplStack_340 & 0xffffffffffffff00);
        }
        else {
          if (uStack_310._7_1_ == '\0') goto LAB_10a2563b4;
          ppppplStack_338 = ppppplStack_318;
          ppppplStack_340 = ppppplStack_320;
          uStack_330 = uStack_310;
LAB_10a256448:
          uStack_328 = 1;
        }
        FUN_10a234a0c(&ppppplStack_140,&ppppplStack_340);
        goto LAB_10a25645c;
      }
    }
LAB_10a255338:
    ppppplVar14 = (long *****)0x90;
    __Znwm();
    FUN_10a1b11d8();
    ppppplStack_320 =
         (long *****)(CONCAT71(ppppplStack_320._1_7_,(undefined1)uStack_1e0) & 0xffffffffffffff01);
    ppppplStack_140 = ppppplVar14;
    FUN_10a1cad34(&ppppplStack_340,&ppppplStack_300,&ppppplStack_140,&ppppplStack_320);
    ppppplVar14 = ppppplStack_140;
    ppppplStack_140 = (long *****)0x0;
    if (ppppplVar14 != (long *****)0x0) {
      func_0x00010a0e32bc(&ppppplStack_140);
    }
    ppppplStack_138 = ppppplStack_208;
    ppppplStack_140 = ppppplStack_210;
    pppplStack_130 = pppplStack_200;
    ppppplStack_210 = (long *****)0x0;
    ppppplStack_208 = (long *****)0x0;
    pppplStack_200 = (long ****)0x0;
    pppplStack_128 = (long ****)((ulong)pppplStack_128 & 0xffffffffffffff00);
    cStack_118 = cStack_1e8 == '\x01';
    if ((bool)cStack_118) {
      pppplStack_120 = pppplStack_1f0;
      pppplStack_128 = pppplStack_1f8;
      pppplStack_1f8 = (long ****)0x0;
      pppplStack_1f0 = (long ****)0x0;
    }
    uStack_110 = uStack_1e0;
    uStack_10c = uStack_1dc;
    pppppplVar31 = &ppppplStack_140;
    appuStack_f8[0] = &PTR_DAT_110ae9180;
    uStack_108 = uStack_1d8;
    puStack_100 = puStack_1d0;
    (*(code *)appuStack_1c8[0][2])(appuStack_f8,appuStack_1c8);
    puStack_1d0 = &UNK_1053a6a3c;
    (*(code *)*appuStack_1c8[0])(appuStack_1c8);
    appuStack_1c8[0] = &PTR_DAT_110ae9180;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    uStack_c0 = uStack_190;
    puStack_b8 = puStack_188;
    (*(code *)appuStack_180[0][2])(appuStack_b0,appuStack_180);
    puStack_188 = &UNK_1053a6a3c;
    (*(code *)*appuStack_180[0])(appuStack_180);
    appuStack_180[0] = &PTR_DAT_110ae9180;
    FUN_10a25684c(auStack_3c0);
    func_0x0001092ba41c(&uStack_c0);
    func_0x0001092ba41c(&uStack_108);
    if ((cStack_118 == '\x01') && ((long *****)pppplStack_120 != (long *****)0x0)) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pppplStack_130 < 0) {
      __ZdlPv(ppppplStack_140);
    }
    ppppplVar14 = ppppplStack_338;
    if ((long ******)ppppplStack_338 != (long ******)0x0) {
      pppppplVar39 = (long ******)(ppppplStack_338 + 1);
      do {
        ppppplVar22 = *pppppplVar39;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppplVar39,0x10);
        if (bVar2) {
          *pppppplVar39 = (long *****)((long)ppppplVar22 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppplVar22 == (long *****)0x0) {
        (*(code *)(*ppppplStack_338)[2])(ppppplStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar14);
      }
    }
    func_0x0001092ba41c(&uStack_190);
    func_0x0001092ba41c(&uStack_1d8);
    if ((cStack_1e8 == '\x01') && ((long *****)pppplStack_1f0 != (long *****)0x0)) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pppplStack_200 < 0) {
      __ZdlPv(ppppplStack_210);
    }
    if (plStack_3b0 != (long *)0x0) {
      (**(code **)(*plStack_3b0 + 8))();
    }
    if (bStack_378 == 1) {
      FUN_10a0f1ea0(&ppppplStack_3a8);
    }
    FUN_10a2842d8(acStack_370);
    ppppplVar14 = ppppplStack_348;
    if ((long ******)ppppplStack_348 != (long ******)0x0) {
      pppppplVar39 = (long ******)(ppppplStack_348 + 1);
      do {
        ppppplVar22 = *pppppplVar39;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppplVar39,0x10);
        if (bVar2) {
          *pppppplVar39 = (long *****)((long)ppppplVar22 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppppplVar22 == (long *****)0x0) {
        (*(code *)(*ppppplStack_348)[2])(ppppplStack_348);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar14);
      }
    }
    FUN_10a2567e8(param_1,auStack_3c0);
    if (plStack_3b8 != (long *)0x0) {
      plVar35 = plStack_3b8 + 1;
      do {
        lVar9 = *plVar35;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar2) {
          *plVar35 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3b8);
      }
    }
    func_0x0001092ba41c(&uStack_260);
    func_0x0001092ba41c(&uStack_2a8);
    if ((cStack_2b8 == '\x01') && ((long *****)pppplStack_2c0 != (long *****)0x0)) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pppplStack_2d0 < 0) {
      __ZdlPv(ppppplStack_2e0);
    }
    ppppplVar14 = (long *****)*param_1;
    ppppplVar22 = (long *****)param_1[1];
    if (ppppplVar22 == (long *****)0x0) {
      if (param_4 != (long ******)0x0) goto LAB_10a255648;
    }
    else {
      ppppplVar15 = ppppplVar22 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
        if (bVar2) {
          *ppppplVar15 = (long ****)((long)*ppppplVar15 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (param_4 != (long ******)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
          if (bVar2) {
            *ppppplVar15 = (long ****)((long)*ppppplVar15 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_10a255648:
        pppppplVar39 = *(long *******)(param_2 + 0x48);
        if (pppppplVar39 != (long ******)0x0) {
          uVar23 = (long)pppppplVar39 - 1;
          if (((ulong)pppppplVar39 & uVar23) == 0) {
            pppppplVar25 = (long ******)(uVar23 & (ulong)param_4);
          }
          else {
            pppppplVar25 = param_4;
            if (pppppplVar39 <= param_4) {
              uVar38 = 0;
              if (pppppplVar39 != (long ******)0x0) {
                uVar38 = (ulong)param_4 / (ulong)pppppplVar39;
              }
              pppppplVar25 = (long ******)((long)param_4 - uVar38 * (long)pppppplVar39);
            }
          }
          plVar35 = *(long **)(*(long *)(param_2 + 0x40) + (long)pppppplVar25 * 8);
          if (plVar35 != (long *)0x0) {
            do {
              while( true ) {
                plVar35 = (long *)*plVar35;
                if (plVar35 == (long *)0x0) goto LAB_10a255734;
                pppppplVar18 = (long ******)plVar35[1];
                if (pppppplVar18 != param_4) break;
                if ((long ******)plVar35[2] == param_4) {
                  if (ppppplVar22 != (long *****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar22);
                  }
                  goto LAB_10a2559bc;
                }
              }
              if (((ulong)pppppplVar39 & uVar23) == 0) {
                pppppplVar18 = (long ******)((ulong)pppppplVar18 & uVar23);
              }
              else if (pppppplVar39 <= pppppplVar18) {
                uVar38 = 0;
                if (pppppplVar39 != (long ******)0x0) {
                  uVar38 = (ulong)pppppplVar18 / (ulong)pppppplVar39;
                }
                pppppplVar18 = (long ******)((long)pppppplVar18 - uVar38 * (long)pppppplVar39);
              }
            } while (pppppplVar18 == pppppplVar25);
          }
        }
LAB_10a255734:
        pppppplVar31 = (long ******)0x28;
        __Znwm();
        *pppppplVar31 = (long *****)0x0;
        pppppplVar31[1] = (long *****)param_4;
        pppppplVar31[2] = (long *****)param_4;
        pppppplVar31[3] = ppppplVar14;
        pppppplVar31[4] = ppppplVar22;
        fVar41 = (float)(*(long *)(param_2 + 0x58) + 1);
        if ((pppppplVar39 == (long ******)0x0) ||
           (*(float *)(param_2 + 0x60) * (float)pppppplVar39 < fVar41)) {
          uVar23 = 1;
          if ((long ******)0x2 < pppppplVar39) {
            uVar23 = (ulong)(((ulong)pppppplVar39 & (long)pppppplVar39 - 1U) != 0);
          }
          pppppplVar25 = (long ******)(uVar23 | (long)pppppplVar39 << 1);
          pppppplVar18 = (long ******)(long)(fVar41 / *(float *)(param_2 + 0x60));
          if (pppppplVar25 <= pppppplVar18) {
            pppppplVar25 = pppppplVar18;
          }
          if ((long)pppppplVar25 - 1U == 0) {
            pppppplVar25 = (long ******)0x2;
          }
          else if (((ulong)pppppplVar25 & (long)pppppplVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pppppplVar39 = *(long *******)(param_2 + 0x48);
          }
          if (pppppplVar39 < pppppplVar25) {
LAB_10a2557d0:
            if ((ulong)pppppplVar25 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a25645c;
            }
            lVar9 = (long)pppppplVar25 << 3;
            __Znwm();
            lVar21 = *(long *)(param_2 + 0x40);
            *(long *)(param_2 + 0x40) = lVar9;
            if (lVar21 != 0) {
              __ZdlPv();
            }
            pppppplVar39 = (long ******)0x0;
            *(long *******)(param_2 + 0x48) = pppppplVar25;
            do {
              *(undefined8 *)(*(long *)(param_2 + 0x40) + (long)pppppplVar39 * 8) = 0;
              pppppplVar39 = (long ******)((long)pppppplVar39 + 1);
            } while (pppppplVar25 != pppppplVar39);
            plVar35 = *(long **)(param_2 + 0x50);
            pppppplVar39 = pppppplVar25;
            if (plVar35 != (long *)0x0) {
              pppppplVar18 = (long ******)plVar35[1];
              uVar23 = (long)pppppplVar25 - 1;
              if (((ulong)pppppplVar25 & uVar23) == 0) {
                pppppplVar18 = (long ******)((ulong)pppppplVar18 & uVar23);
              }
              else if (pppppplVar25 <= pppppplVar18) {
                uVar38 = 0;
                if (pppppplVar25 != (long ******)0x0) {
                  uVar38 = (ulong)pppppplVar18 / (ulong)pppppplVar25;
                }
                pppppplVar18 = (long ******)((long)pppppplVar18 - uVar38 * (long)pppppplVar25);
              }
              *(undefined8 **)(*(long *)(param_2 + 0x40) + (long)pppppplVar18 * 8) =
                   (undefined8 *)(param_2 + 0x50);
              plVar27 = (long *)*plVar35;
              while (plVar27 != (long *)0x0) {
                pppppplVar32 = (long ******)plVar27[1];
                if (((ulong)pppppplVar25 & uVar23) == 0) {
                  pppppplVar32 = (long ******)((ulong)pppppplVar32 & uVar23);
                }
                else if (pppppplVar25 <= pppppplVar32) {
                  uVar38 = 0;
                  if (pppppplVar25 != (long ******)0x0) {
                    uVar38 = (ulong)pppppplVar32 / (ulong)pppppplVar25;
                  }
                  pppppplVar32 = (long ******)((long)pppppplVar32 - uVar38 * (long)pppppplVar25);
                }
                plVar28 = plVar27;
                if (pppppplVar32 != pppppplVar18) {
                  lVar9 = *(long *)(param_2 + 0x40);
                  if (*(long *)(lVar9 + (long)pppppplVar32 * 8) == 0) {
                    *(long **)(lVar9 + (long)pppppplVar32 * 8) = plVar35;
                    pppppplVar18 = pppppplVar32;
                  }
                  else {
                    *plVar35 = *plVar27;
                    *plVar27 = **(undefined8 **)(lVar9 + (long)pppppplVar32 * 8);
                    **(long **)(lVar9 + (long)pppppplVar32 * 8) = (long)plVar27;
                    plVar28 = plVar35;
                  }
                }
                plVar35 = plVar28;
                plVar27 = (long *)*plVar28;
              }
            }
          }
          else if (pppppplVar25 < pppppplVar39) {
            pppppplVar18 = (long ******)
                           (long)((float)*(ulong *)(param_2 + 0x58) / *(float *)(param_2 + 0x60));
            if ((pppppplVar39 < (long ******)0x3) ||
               (((ulong)pppppplVar39 & (long)pppppplVar39 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ******)0x1 < pppppplVar18) {
              pppppplVar18 = (long ******)(1L << (-LZCOUNT((long)pppppplVar18 + -1) & 0x3fU));
            }
            if (pppppplVar25 <= pppppplVar18) {
              pppppplVar25 = pppppplVar18;
            }
            if (pppppplVar25 < pppppplVar39) {
              if (pppppplVar25 != (long ******)0x0) goto LAB_10a2557d0;
              lVar9 = *(long *)(param_2 + 0x40);
              *(undefined8 *)(param_2 + 0x40) = 0;
              if (lVar9 != 0) {
                __ZdlPv();
              }
              *(undefined8 *)(param_2 + 0x48) = 0;
              pppppplVar39 = (long ******)0x0;
            }
            else {
              pppppplVar39 = *(long *******)(param_2 + 0x48);
            }
          }
          if (((ulong)pppppplVar39 & (long)pppppplVar39 - 1U) == 0) {
            pppppplVar25 = (long ******)((long)pppppplVar39 - 1U & (ulong)param_4);
          }
          else {
            pppppplVar25 = param_4;
            if (pppppplVar39 <= param_4) {
              uVar23 = 0;
              if (pppppplVar39 != (long ******)0x0) {
                uVar23 = (ulong)param_4 / (ulong)pppppplVar39;
              }
              pppppplVar25 = (long ******)((long)param_4 - uVar23 * (long)pppppplVar39);
            }
          }
        }
        lVar9 = *(long *)(param_2 + 0x40);
        puVar19 = *(undefined8 **)(lVar9 + (long)pppppplVar25 * 8);
        if (puVar19 == (undefined8 *)0x0) {
          puVar19 = (undefined8 *)(param_2 + 0x50);
          *pppppplVar31 = (long *****)*puVar19;
          *puVar19 = pppppplVar31;
          *(undefined8 **)(lVar9 + (long)pppppplVar25 * 8) = puVar19;
          if (*pppppplVar31 != (long *****)0x0) {
            pppppplVar25 = (long ******)(*pppppplVar31)[1];
            if (((ulong)pppppplVar39 & (long)pppppplVar39 - 1U) == 0) {
              pppppplVar25 = (long ******)((ulong)pppppplVar25 & (long)pppppplVar39 - 1U);
            }
            else if (pppppplVar39 <= pppppplVar25) {
              uVar23 = 0;
              if (pppppplVar39 != (long ******)0x0) {
                uVar23 = (ulong)pppppplVar25 / (ulong)pppppplVar39;
              }
              pppppplVar25 = (long ******)((long)pppppplVar25 - uVar23 * (long)pppppplVar39);
            }
            puVar19 = (undefined8 *)(*(long *)(param_2 + 0x40) + (long)pppppplVar25 * 8);
            goto LAB_10a2559ac;
          }
        }
        else {
          *pppppplVar31 = (long *****)*puVar19;
LAB_10a2559ac:
          *puVar19 = pppppplVar31;
        }
        *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
      }
    }
LAB_10a2559bc:
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppplStack_140,*param_5,param_5[1]);
    }
    else {
      ppppplStack_138 = param_5[1];
      ppppplStack_140 = *param_5;
      pppplStack_130 = (long ****)param_5[2];
    }
    if (ppppplVar22 != (long *****)0x0) {
      ppppplVar15 = ppppplVar22 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
        if (bVar2) {
          *ppppplVar15 = (long ****)((long)*ppppplVar15 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_5 = pppppplVar17;
    pppplStack_128 = (long ****)ppppplVar14;
    pppplStack_120 = (long ****)ppppplVar22;
    func_0x000107c2b05c(pppppplVar17,&ppppplStack_140);
    pppppplVar25 = *(long *******)(param_2 + 0x70);
    if (pppppplVar25 != (long ******)0x0) {
      pcVar36 = (char *)((long)pppppplVar25 + -1);
      if (((ulong)pppppplVar25 & (ulong)pcVar36) == 0) {
        pppppplVar31 = (long ******)((ulong)pcVar36 & (ulong)param_5);
      }
      else {
        pppppplVar31 = param_5;
        if (pppppplVar25 <= param_5) {
          uVar23 = 0;
          if (pppppplVar25 != (long ******)0x0) {
            uVar23 = (ulong)param_5 / (ulong)pppppplVar25;
          }
          pppppplVar31 = (long ******)((long)param_5 - uVar23 * (long)pppppplVar25);
        }
      }
      if ((*pppppplVar17)[(long)pppppplVar31] != (long ****)0x0) {
        for (ppplVar10 = *(*pppppplVar17)[(long)pppppplVar31]; ppplVar10 != (long ***)0x0;
            ppplVar10 = (long ***)*ppplVar10) {
          pppppplVar39 = (long ******)ppplVar10[1];
          if (pppppplVar39 == param_5) {
            pppppplVar39 = pppppplVar17;
            func_0x000107c2b068(pppppplVar17,ppplVar10 + 2,&ppppplStack_140);
            if (((ulong)pppppplVar39 & 1) != 0) goto LAB_10a255d7c;
          }
          else {
            if (((ulong)pppppplVar25 & (ulong)pcVar36) == 0) {
              pppppplVar39 = (long ******)((ulong)pppppplVar39 & (ulong)pcVar36);
            }
            else if (pppppplVar25 <= pppppplVar39) {
              uVar23 = 0;
              if (pppppplVar25 != (long ******)0x0) {
                uVar23 = (ulong)pppppplVar39 / (ulong)pppppplVar25;
              }
              pppppplVar39 = (long ******)((long)pppppplVar39 - uVar23 * (long)pppppplVar25);
            }
            if (pppppplVar39 != pppppplVar31) break;
          }
        }
      }
    }
    pppppplVar39 = (long ******)0x38;
    __Znwm();
    pppplStack_200 = (long ****)0x0;
    *pppppplVar39 = (long *****)0x0;
    pppppplVar39[1] = (long *****)param_5;
    ppppplStack_210 = (long *****)pppppplVar39;
    ppppplStack_208 = (long *****)pppppplVar17;
    if ((long)pppplStack_130 < 0) {
      func_0x000107c3192c(pppppplVar39 + 2,ppppplStack_140,ppppplStack_138);
    }
    else {
      pppppplVar39[3] = ppppplStack_138;
      pppppplVar39[2] = ppppplStack_140;
      pppppplVar39[4] = (long *****)pppplStack_130;
    }
    pppppplVar39[6] = (long *****)pppplStack_120;
    pppppplVar39[5] = (long *****)pppplStack_128;
    pppplStack_128 = (long ****)0x0;
    pppplStack_120 = (long ****)0x0;
    pppplStack_200 = (long ****)CONCAT71(pppplStack_200._1_7_,1);
    fVar41 = (float)(*(long *)(param_2 + 0x80) + 1);
    if ((pppppplVar25 == (long ******)0x0) ||
       (*(float *)(param_2 + 0x88) * (float)pppppplVar25 < fVar41)) {
      uVar23 = 1;
      if ((long ******)0x2 < pppppplVar25) {
        uVar23 = (ulong)(((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) != 0);
      }
      pppppplVar31 = (long ******)(uVar23 | (long)pppppplVar25 << 1);
      pppppplVar25 = (long ******)(long)(fVar41 / *(float *)(param_2 + 0x88));
      if (pppppplVar31 <= pppppplVar25) {
        pppppplVar31 = pppppplVar25;
      }
      if ((char *)((long)pppppplVar31 + -1) == (char *)0x0) {
        pppppplVar31 = (long ******)0x2;
      }
      else if (((ulong)pppppplVar31 & (ulong)((long)pppppplVar31 + -1)) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      pppppplVar25 = *(long *******)(param_2 + 0x70);
      if (pppppplVar25 < pppppplVar31) {
LAB_10a255b90:
        pppppplVar25 = pppppplVar31;
        if ((ulong)pppppplVar25 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a25645c;
        }
        ppppplVar14 = (long *****)((long)pppppplVar25 << 3);
        __Znwm();
        ppppplVar15 = *pppppplVar17;
        *pppppplVar17 = ppppplVar14;
        if (ppppplVar15 != (long *****)0x0) {
          __ZdlPv();
        }
        pppppplVar31 = (long ******)0x0;
        *(long *******)(param_2 + 0x70) = pppppplVar25;
        do {
          (*pppppplVar17)[(long)pppppplVar31] = (long ****)0x0;
          pppppplVar31 = (long ******)((long)pppppplVar31 + 1);
        } while (pppppplVar25 != pppppplVar31);
        pppplVar37 = *(long *****)(param_2 + 0x78);
        if (pppplVar37 != (long ****)0x0) {
          pppppplVar31 = (long ******)pppplVar37[1];
          pcVar36 = (char *)((long)pppppplVar25 + -1);
          if (((ulong)pppppplVar25 & (ulong)pcVar36) == 0) {
            pppppplVar31 = (long ******)((ulong)pppppplVar31 & (ulong)pcVar36);
          }
          else if (pppppplVar25 <= pppppplVar31) {
            uVar23 = 0;
            if (pppppplVar25 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar31 / (ulong)pppppplVar25;
            }
            pppppplVar31 = (long ******)((long)pppppplVar31 - uVar23 * (long)pppppplVar25);
          }
          (*pppppplVar17)[(long)pppppplVar31] = (long ****)(param_2 + 0x78);
          pppplVar29 = (long ****)*pppplVar37;
          while (pppplVar29 != (long ****)0x0) {
            pppppplVar18 = (long ******)pppplVar29[1];
            if (((ulong)pppppplVar25 & (ulong)pcVar36) == 0) {
              pppppplVar18 = (long ******)((ulong)pppppplVar18 & (ulong)pcVar36);
            }
            else if (pppppplVar25 <= pppppplVar18) {
              uVar23 = 0;
              if (pppppplVar25 != (long ******)0x0) {
                uVar23 = (ulong)pppppplVar18 / (ulong)pppppplVar25;
              }
              pppppplVar18 = (long ******)((long)pppppplVar18 - uVar23 * (long)pppppplVar25);
            }
            pppplVar30 = pppplVar29;
            if (pppppplVar18 != pppppplVar31) {
              ppppplVar14 = *pppppplVar17;
              if (ppppplVar14[(long)pppppplVar18] == (long ****)0x0) {
                ppppplVar14[(long)pppppplVar18] = pppplVar37;
                pppppplVar31 = pppppplVar18;
              }
              else {
                *pppplVar37 = *pppplVar29;
                *pppplVar29 = *ppppplVar14[(long)pppppplVar18];
                *ppppplVar14[(long)pppppplVar18] = (long ***)pppplVar29;
                pppplVar30 = pppplVar37;
              }
            }
            pppplVar37 = pppplVar30;
            pppplVar29 = (long ****)*pppplVar30;
          }
        }
      }
      else if (pppppplVar31 < pppppplVar25) {
        pppppplVar18 = (long ******)
                       (long)((float)*(ulong *)(param_2 + 0x80) / *(float *)(param_2 + 0x88));
        if ((pppppplVar25 < (long ******)0x3) ||
           (((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long ******)0x1 < pppppplVar18) {
          pppppplVar18 = (long ******)(1L << (-LZCOUNT((char *)((long)pppppplVar18 + -1)) & 0x3fU));
        }
        if (pppppplVar31 <= pppppplVar18) {
          pppppplVar31 = pppppplVar18;
        }
        if (pppppplVar31 < pppppplVar25) {
          if (pppppplVar31 != (long ******)0x0) goto LAB_10a255b90;
          ppppplVar14 = *pppppplVar17;
          *pppppplVar17 = (long *****)0x0;
          if (ppppplVar14 != (long *****)0x0) {
            __ZdlPv();
          }
          pppppplVar25 = (long ******)0x0;
          *(undefined8 *)(param_2 + 0x70) = 0;
        }
        else {
          pppppplVar25 = *(long *******)(param_2 + 0x70);
        }
      }
      if (((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) == 0) {
        pppppplVar31 = (long ******)((ulong)((long)pppppplVar25 + -1) & (ulong)param_5);
      }
      else {
        pppppplVar31 = param_5;
        if (pppppplVar25 <= param_5) {
          uVar23 = 0;
          if (pppppplVar25 != (long ******)0x0) {
            uVar23 = (ulong)param_5 / (ulong)pppppplVar25;
          }
          pppppplVar31 = (long ******)((long)param_5 - uVar23 * (long)pppppplVar25);
        }
      }
    }
    ppppplVar14 = *pppppplVar17;
    pppplVar37 = ppppplVar14[(long)pppppplVar31];
    if (pppplVar37 == (long ****)0x0) {
      pppplVar37 = (long ****)(param_2 + 0x78);
      *pppppplVar39 = (long *****)*pppplVar37;
      *pppplVar37 = (long ***)pppppplVar39;
      ppppplVar14[(long)pppppplVar31] = pppplVar37;
      if (*pppppplVar39 != (long *****)0x0) {
        pppppplVar31 = (long ******)(*pppppplVar39)[1];
        if (((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) == 0) {
          pppppplVar31 = (long ******)((ulong)pppppplVar31 & (ulong)((long)pppppplVar25 + -1));
        }
        else if (pppppplVar25 <= pppppplVar31) {
          uVar23 = 0;
          if (pppppplVar25 != (long ******)0x0) {
            uVar23 = (ulong)pppppplVar31 / (ulong)pppppplVar25;
          }
          pppppplVar31 = (long ******)((long)pppppplVar31 - uVar23 * (long)pppppplVar25);
        }
        (*pppppplVar17)[(long)pppppplVar31] = (long ****)pppppplVar39;
      }
    }
    else {
      *pppppplVar39 = (long *****)*pppplVar37;
      *pppplVar37 = (long ***)pppppplVar39;
    }
    *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x80) + 1;
LAB_10a255d7c:
    if ((long *****)pppplStack_120 != (long *****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pppplStack_130 < 0) {
      __ZdlPv(ppppplStack_140);
    }
    if (ppppplVar22 != (long *****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar22);
    }
LAB_10a255da4:
    __ZNSt3__15mutex6unlockEv(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppplStack_140,&UNK_10f647665,param_5);
  FUN_10a0029c0(&ppppplStack_140);
LAB_10a25645c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a256460);
  (*pcVar6)();
LAB_10a2547a4:
  plVar35 = (long *)*plVar35;
  if (plVar35 == (long *)0x0) goto LAB_10a25491c;
  goto LAB_10a254760;
LAB_10a2549c4:
  pppplVar37 = (long ****)*pppplVar37;
  if (pppplVar37 == (long ****)0x0) goto LAB_10a254b24;
  goto LAB_10a254978;
}



/* Entry: 10a2567e8; end: 10a25684b;  */

undefined8 * FUN_10a2567e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a25684c; end: 10a25864f;  */

/* WARNING: Removing unreachable block (ram,0x00010a257d30) */
/* WARNING: Removing unreachable block (ram,0x00010a257d40) */
/* WARNING: Removing unreachable block (ram,0x00010a25798c) */
/* WARNING: Removing unreachable block (ram,0x00010a258070) */
/* WARNING: Removing unreachable block (ram,0x00010a258078) */
/* WARNING: Removing unreachable block (ram,0x00010a258100) */
/* WARNING: Removing unreachable block (ram,0x00010a258108) */
/* WARNING: Removing unreachable block (ram,0x00010a257d60) */
/* WARNING: Removing unreachable block (ram,0x00010a257d70) */
/* WARNING: Removing unreachable block (ram,0x00010a25818c) */
/* WARNING: Removing unreachable block (ram,0x00010a258194) */
/* WARNING: Removing unreachable block (ram,0x00010a25809c) */
/* WARNING: Removing unreachable block (ram,0x00010a2580ac) */
/* WARNING: Removing unreachable block (ram,0x00010a257e54) */
/* WARNING: Removing unreachable block (ram,0x00010a257e5c) */
/* WARNING: Removing unreachable block (ram,0x00010a257b90) */
/* WARNING: Removing unreachable block (ram,0x00010a257b98) */
/* WARNING: Removing unreachable block (ram,0x00010a257ba0) */
/* WARNING: Removing unreachable block (ram,0x00010a257ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a257bb4) */
/* WARNING: Removing unreachable block (ram,0x00010a257bbc) */
/* WARNING: Removing unreachable block (ram,0x00010a257bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a257bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a257ee0) */
/* WARNING: Removing unreachable block (ram,0x00010a257ee8) */

void FUN_10a25684c(long *param_1,int param_2,long param_3,long *param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined **ppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined **ppuVar24;
  undefined1 uVar25;
  long lVar26;
  undefined8 ***pppuVar27;
  ulong uVar28;
  undefined8 ****ppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 *****pppppuVar31;
  undefined8 *puVar32;
  undefined8 ******ppppppuVar33;
  undefined8 *****pppppuVar34;
  undefined8 *****pppppuVar35;
  undefined8 *****pppppuVar36;
  byte bVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  undefined8 ****ppppuVar41;
  int iStack_168;
  undefined8 *****pppppuStack_110;
  undefined8 ******ppppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 *****pppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 *****pppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 uStack_88;
  
  FUN_10ad055a0();
  if (param_2 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar23 = (long *)*ppuVar16;
      if ((plVar23 == (long *)0x0) || ((**(code **)(*plVar23 + 0x18))(), plVar23 == (long *)0x0))
      goto LAB_10a2568b4;
      plVar23 = plVar23 + 7;
    }
    else {
      plVar23 = (long *)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar23 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppuStack_98,&UNK_10f6476cb);
      if (*(char *)((long)param_5 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppppuStack_e0,*param_5,param_5[1]);
      }
      else {
        ppppuStack_d8 = (undefined8 ****)param_5[1];
        ppppppuStack_e0 = (undefined8 ******)*param_5;
        uStack_d0 = (undefined8 *****)param_5[2];
      }
      pppppuStack_c0 = (undefined8 *****)"null";
      if (uStack_88._7_1_ != '\0') {
        pppppuStack_c0 = &pppppuStack_98;
      }
      if ((long)uStack_d0 < 0) {
        ppppppuStack_100 = (undefined8 ******)"null";
        if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
          ppppppuStack_100 = ppppppuStack_e0;
        }
      }
      else {
        ppppppuStack_100 = (undefined8 ******)"null";
        if (uStack_d0._7_1_ != '\0') {
          ppppppuStack_100 = &ppppppuStack_e0;
        }
      }
      FUN_10a224324(&pppppuStack_c0,&ppppppuStack_100);
      if (uStack_88._7_1_ == '\0') {
        pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
      }
      else {
        pppppuStack_b8 = pppppuStack_90;
        pppppuStack_c0 = pppppuStack_98;
        uStack_b0 = uStack_88;
      }
      pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,uStack_88._7_1_ != '\0');
      if ((long)uStack_d0 < 0) {
        if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
          func_0x000107c3192c(&ppppppuStack_100,ppppppuStack_e0);
          goto LAB_10a25800c;
        }
LAB_10a257fa8:
        uVar25 = 0;
        ppppppuStack_100 = (undefined8 ******)((ulong)ppppppuStack_100 & 0xffffffffffffff00);
      }
      else {
        if (uStack_d0._7_1_ == '\0') goto LAB_10a257fa8;
        ppppuStack_f8 = ppppuStack_d8;
        ppppppuStack_100 = ppppppuStack_e0;
        ppppuStack_f0 = uStack_d0;
LAB_10a25800c:
        uVar25 = 1;
      }
      ppppuStack_e8 = (undefined8 ****)CONCAT71(ppppuStack_e8._1_7_,uVar25);
      FUN_10a234a0c(&pppppuStack_c0,&ppppppuStack_100);
      goto LAB_10a258298;
    }
  }
LAB_10a2568b4:
  pppppuVar35 = *(undefined8 ******)(param_3 + 0x228);
  pppppuVar17 = (undefined8 *****)*param_4;
  iVar4 = *(int *)pppppuVar17;
  uVar15 = *(uint *)(pppppuVar17 + 7);
  pppppuVar34 = (undefined8 *****)(ulong)uVar15;
  iVar13 = *(int *)((long)pppppuVar17 + 0x3c);
  ppppuVar30 = pppppuVar17[7];
  ppppuVar41 = pppppuVar17[8];
  iVar38 = *(int *)(pppppuVar17 + 8);
  iVar12 = *(int *)(pppppuVar17 + 9);
  FUN_10a318988();
  uVar14 = *(undefined4 *)(*param_4 + 4);
  iVar39 = (int)pppppuVar17;
  if ((*(byte *)(*param_4 + 0x50) & 1) == 0) {
    if (0x26 < iVar39 - 0x30U) {
      pppppuVar19 = pppppuVar35;
      (*(code *)(*pppppuVar35)[10])(pppppuVar35);
      FUN_10a16954c(pppppuVar34,iVar13,pppppuVar17,pppppuVar19,0);
      uVar40 = (uint)pppppuVar34 ^ 1;
      goto LAB_10a25693c;
    }
    uVar40 = 1;
LAB_10a256960:
    bVar37 = 1;
    uVar28 = (ulong)(iVar39 - 0x20U);
    if (iVar39 - 0x20U < 0x37) {
      if ((1L << (uVar28 & 0x3f) & 0x66061980000000U) == 0) {
        if ((1L << (uVar28 & 0x3f) & 5U) == 0) {
          if ((1L << (uVar28 & 0x3f) & 0x18000000U) != 0) {
            pppppuVar17 = pppppuVar35;
            (*(code *)(*pppppuVar35)[0xd])();
            if (*(char *)((long)pppppuVar17 + 0x91) == '\x01') {
              FUN_10ad4ae18();
              bVar37 = *(byte *)((long)pppppuVar17 + 0x29);
            }
            else {
              bVar37 = *(byte *)(pppppuVar17 + 0x12) >> 2 & 1;
            }
          }
        }
        else {
          pppppuVar17 = pppppuVar35;
          (*(code *)(*pppppuVar35)[0xd])();
          bVar37 = *(byte *)((long)pppppuVar17 + 0x86);
        }
      }
      else {
        pppppuVar17 = pppppuVar35;
        (*(code *)(*pppppuVar35)[0xd])();
        if ((*(byte *)((long)pppppuVar17 + 0x91) & 1) == 0) {
          bVar37 = *(byte *)(pppppuVar17 + 0x12) >> 5 & 1;
        }
        else {
          bVar37 = 0;
        }
      }
    }
  }
  else {
    uVar40 = 3;
    pppppuVar34 = pppppuVar17;
LAB_10a25693c:
    pppppuVar17 = pppppuVar34;
    if (2 < iVar39 - 0x23U) goto LAB_10a256960;
    pppppuVar17 = pppppuVar35;
    (*(code *)(*pppppuVar35)[0xd])();
    bVar37 = *(byte *)((long)pppppuVar17 + 0x83);
  }
  lVar26 = *(long *)(*(long *)(*param_4 + 8) + 0x50);
  if (lVar26 != 0) {
    *(bool *)(lVar26 + 0x99) = iVar4 == 0;
  }
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        pppppuVar17 = pppppuVar35;
        (*(code *)(*pppppuVar35)[0xd])();
        bVar37 = bVar37 & *(byte *)((long)pppppuVar17 + 0x85);
        iVar38 = iVar12;
        goto LAB_10a256ae0;
      }
LAB_10a256ab4:
      pppppuVar17 = (undefined8 *****)&UNK_10f6476ed;
      FUN_10a0ee06c();
    }
    iVar38 = 1;
  }
  else if (iVar4 == 2) {
    pppppuVar17 = pppppuVar35;
    (*(code *)(*pppppuVar35)[0xd])();
    bVar37 = bVar37 & *(byte *)((long)pppppuVar17 + 0x84);
  }
  else if (iVar4 != 3) goto LAB_10a256ab4;
LAB_10a256ae0:
  iVar10 = (int)pppppuVar17;
  FUN_10ad055a0();
  if (iVar10 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar23 = (long *)*ppuVar16;
      if ((plVar23 == (long *)0x0) || ((**(code **)(*plVar23 + 0x18))(), plVar23 == (long *)0x0))
      goto LAB_10a256b14;
      plVar23 = plVar23 + 7;
    }
    else {
      plVar23 = (long *)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar23 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppuStack_98,&UNK_10f647702);
      if (*(char *)((long)param_5 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppppuStack_e0,*param_5,param_5[1]);
      }
      else {
        ppppuStack_d8 = (undefined8 ****)param_5[1];
        ppppppuStack_e0 = (undefined8 ******)*param_5;
        uStack_d0 = (undefined8 *****)param_5[2];
      }
      pppppuStack_c0 = (undefined8 *****)"null";
      if (uStack_88._7_1_ != '\0') {
        pppppuStack_c0 = &pppppuStack_98;
      }
      if ((long)uStack_d0 < 0) {
        ppppppuStack_100 = (undefined8 ******)"null";
        if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
          ppppppuStack_100 = ppppppuStack_e0;
        }
      }
      else {
        ppppppuStack_100 = (undefined8 ******)"null";
        if (uStack_d0._7_1_ != '\0') {
          ppppppuStack_100 = &ppppppuStack_e0;
        }
      }
      FUN_10a224324(&pppppuStack_c0,&ppppppuStack_100);
      if (uStack_88._7_1_ != '\0') {
        uStack_b0 = uStack_88;
        pppppuStack_b8 = pppppuStack_90;
        pppppuStack_c0 = pppppuStack_98;
      }
      else {
        pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
      }
      pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,uStack_88._7_1_ != '\0');
      if ((long)uStack_d0 < 0) {
        if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
          func_0x000107c3192c(&ppppppuStack_100,ppppppuStack_e0);
          goto LAB_10a258034;
        }
LAB_10a257ff0:
        uVar25 = 0;
        ppppppuStack_100 = (undefined8 ******)((ulong)ppppppuStack_100 & 0xffffffffffffff00);
      }
      else {
        if (uStack_d0._7_1_ == '\0') goto LAB_10a257ff0;
        ppppuStack_f8 = ppppuStack_d8;
        ppppppuStack_100 = ppppppuStack_e0;
        ppppuStack_f0 = uStack_d0;
LAB_10a258034:
        uVar25 = 1;
      }
      ppppuStack_e8 = (undefined8 ****)CONCAT71(ppppuStack_e8._1_7_,uVar25);
      FUN_10a234a0c(&pppppuStack_c0,&ppppppuStack_100);
      goto LAB_10a258298;
    }
  }
LAB_10a256b14:
  uVar11 = (undefined4)*param_4;
  FUN_10a318aa8();
  if (*(char *)(*param_4 + 0x50) == '\x01') {
    iStack_168 = *(int *)(*param_4 + 0x4c) + 1;
  }
  else {
    iStack_168 = 0;
  }
  FUN_109d1b010(&pppppuStack_c0);
  pppppuVar34 = pppppuStack_b8;
  pppppuVar17 = pppppuStack_c0;
  pppppuStack_110 = pppppuStack_c0;
  puVar18 = (undefined8 *)0x108;
  __Znwm();
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &PTR_DAT_110bb7660;
  puVar32 = puVar18 + 3;
  puVar18[4] = 0;
  *puVar32 = 0;
  puVar18[6] = 0;
  puVar18[5] = 0;
  puVar18[8] = 0;
  puVar18[7] = 0;
  puVar18[10] = 0;
  puVar18[9] = 0;
  puVar18[0xc] = 0;
  puVar18[0xb] = 0;
  puVar18[0xe] = 0;
  puVar18[0xd] = 0;
  puVar18[0x10] = 0;
  puVar18[0xf] = 0;
  puVar18[0x12] = 0;
  puVar18[0x11] = 0;
  puVar18[0x14] = 0;
  puVar18[0x13] = 0;
  puVar18[0x16] = 0;
  puVar18[0x15] = 0;
  puVar18[0x18] = 0;
  puVar18[0x17] = 0;
  puVar18[0x1a] = 0;
  puVar18[0x19] = 0;
  puVar18[0x1c] = 0;
  puVar18[0x1b] = 0;
  puVar18[0x1e] = 0;
  puVar18[0x1d] = 0;
  puVar18[0x20] = 0;
  puVar18[0x1f] = 0;
  *param_1 = (long)puVar32;
  param_1[1] = (long)puVar18;
  puVar18[4] = pppppuVar34;
  puVar18[9] = ppppuVar30;
  puVar18[10] = ppppuVar41;
  *(int *)(puVar18 + 0xb) = iVar12;
  *(int *)((long)puVar18 + 0x5c) = iVar4;
  *(int *)(puVar18 + 0xc) = iVar39;
  *(undefined4 *)((long)puVar18 + 100) = uVar14;
  pppppuVar34 = pppppuVar35;
  (*(code *)(*pppppuVar35)[10])();
  puVar18 = puVar18 + 7;
  FUN_10a026ab4(puVar18,param_3 + 0xf8);
  iVar12 = (int)puVar18;
  if ((bVar37 & pppppuVar34 != (undefined8 *****)0x0) == 0) {
    FUN_10ad055a0();
    if (iVar12 != 0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar16 == (undefined *)0x0) {
        ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar23 = (long *)*ppuVar16;
        if ((plVar23 == (long *)0x0) || ((**(code **)(*plVar23 + 0x18))(), plVar23 == (long *)0x0))
        goto LAB_10a256d2c;
        plVar23 = plVar23 + 7;
      }
      else {
        plVar23 = (long *)(*ppuVar16 + 8);
      }
      if (((uint)*(undefined8 *)(*plVar23 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c2b054(&pppppuStack_98,&UNK_10f647727);
        if (*(char *)((long)param_5 + 0x17) < '\0') {
          func_0x000107c3192c(&ppppppuStack_e0,*param_5,param_5[1]);
        }
        else {
          ppppuStack_d8 = (undefined8 ****)param_5[1];
          ppppppuStack_e0 = (undefined8 ******)*param_5;
          uStack_d0 = (undefined8 *****)param_5[2];
        }
        ppppppuStack_100 = (undefined8 ******)0x10f29b0c6;
        pppppuStack_c0 = ppppppuStack_100;
        if (uStack_88._7_1_ != '\0') {
          pppppuStack_c0 = &pppppuStack_98;
        }
        if ((long)uStack_d0 < 0) {
          if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
            ppppppuStack_100 = ppppppuStack_e0;
          }
        }
        else if (uStack_d0._7_1_ != '\0') {
          ppppppuStack_100 = &ppppppuStack_e0;
        }
        FUN_10a224324(&pppppuStack_c0,&ppppppuStack_100);
        if (uStack_88._7_1_ == '\0') {
          pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
        }
        else {
          pppppuStack_b8 = pppppuStack_90;
          pppppuStack_c0 = pppppuStack_98;
          uStack_b0 = uStack_88;
        }
        pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,uStack_88._7_1_ != '\0');
        if ((long)uStack_d0 < 0) {
          if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
            func_0x000107c3192c(&ppppppuStack_100,ppppppuStack_e0);
            goto LAB_10a25825c;
          }
LAB_10a2581f4:
          uVar25 = 0;
          ppppppuStack_100 = (undefined8 ******)((ulong)ppppppuStack_100 & 0xffffffffffffff00);
        }
        else {
          if (uStack_d0._7_1_ == '\0') goto LAB_10a2581f4;
          ppppuStack_f8 = ppppuStack_d8;
          ppppppuStack_100 = ppppppuStack_e0;
          ppppuStack_f0 = uStack_d0;
LAB_10a25825c:
          uVar25 = 1;
        }
        ppppuStack_e8 = (undefined8 ****)CONCAT71(ppppuStack_e8._1_7_,uVar25);
        FUN_10a234a0c(&pppppuStack_c0,&ppppppuStack_100);
        goto LAB_10a258298;
      }
      puVar32 = (undefined8 *)*param_1;
    }
LAB_10a256d2c:
    FUN_10a026ab4(puVar32 + 2,puVar32 + 4);
    goto LAB_10a257b88;
  }
  pppppuVar19 = (undefined8 *****)0xc0;
  __Znwm();
  pppppuVar19[2] = (undefined8 ****)0x0;
  pppppuVar19[1] = (undefined8 ****)0x0;
  *pppppuVar19 = (undefined8 ****)&PTR_FUN_110bb7610;
  pppppuVar19[3] = pppppuVar35;
  *(int *)(pppppuVar19 + 4) = iVar4;
  *(uint *)((long)pppppuVar19 + 0x24) = uVar15;
  *(int *)(pppppuVar19 + 5) = iVar13;
  *(int *)((long)pppppuVar19 + 0x2c) = iVar38;
  *(int *)(pppppuVar19 + 6) = iVar39;
  *(undefined4 *)((long)pppppuVar19 + 0x34) = uVar11;
  pppppuVar19[7] = (undefined8 ****)0x100000004;
  *(uint *)(pppppuVar19 + 8) = uVar40;
  *(int *)((long)pppppuVar19 + 0x44) = iStack_168;
  *(undefined1 *)(pppppuVar19 + 9) = 0;
  pppppuVar19[0xb] = (undefined8 ****)0x0;
  pppppuVar19[10] = (undefined8 ****)0x0;
  pppppuVar19[0xd] = (undefined8 ****)0x0;
  pppppuVar19[0xc] = (undefined8 ****)0x0;
  pppppuVar19[0xf] = (undefined8 ****)0x0;
  pppppuVar19[0xe] = (undefined8 ****)0x0;
  pppppuVar19[0x11] = (undefined8 ****)0x0;
  pppppuVar19[0x10] = (undefined8 ****)0x0;
  pppppuVar19[0x13] = (undefined8 ****)0x0;
  pppppuVar19[0x12] = (undefined8 ****)0x0;
  pppppuVar19[0x15] = (undefined8 ****)0x0;
  pppppuVar19[0x14] = (undefined8 ****)0x0;
  pppppuVar19[0x17] = (undefined8 ****)0x0;
  pppppuVar19[0x16] = (undefined8 ****)0x0;
  ppppuVar30 = (undefined8 ****)*param_4;
  ppppuVar41 = (undefined8 ****)param_4[1];
  if (ppppuVar41 == (undefined8 ****)0x0) {
    pppppuVar19[0xb] = ppppuVar30;
    pppppuVar19[0xc] = (undefined8 ****)0x0;
  }
  else {
    ppppuVar29 = ppppuVar41 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar29,0x10);
      if (bVar7) {
        *ppppuVar29 = (undefined8 ***)((long)*ppppuVar29 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    ppppuVar29 = pppppuVar19[0xc];
    pppppuVar19[0xb] = ppppuVar30;
    pppppuVar19[0xc] = ppppuVar41;
    if (ppppuVar29 != (undefined8 ****)0x0) {
      ppppuVar30 = ppppuVar29 + 1;
      do {
        pppuVar27 = *ppppuVar30;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar30,0x10);
        if (bVar7) {
          *ppppuVar30 = (undefined8 ***)((long)pppuVar27 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppuVar27 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuVar29)[2])(ppppuVar29);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar29);
      }
    }
  }
  (*(code *)(*pppppuVar35)[8])();
  pppppuVar19[0xe] = pppppuVar35;
  ppppuVar41 = *(undefined8 *****)(param_3 + 0x268);
  ppppuVar30 = *(undefined8 *****)(param_3 + 0x260);
  if (*(long *)(param_3 + 0x268) != 0) {
    plVar23 = (long *)(*(long *)(param_3 + 0x268) + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *plVar23 = *plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppuVar29 = pppppuVar19[0x12];
  pppppuVar19[0x12] = ppppuVar41;
  pppppuVar19[0x11] = ppppuVar30;
  if (ppppuVar29 != (undefined8 ****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  iVar13 = (int)ppppuVar29;
  ppppuVar30 = pppppuVar19[0xd];
  if (ppppuVar30 != (undefined8 ****)0x0) {
    ppppuVar41 = ppppuVar30 + 1;
    do {
      pppuVar27 = *ppppuVar41;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar41,0x10);
      if (bVar7) {
        *ppppuVar41 = (undefined8 ***)((long)pppuVar27 - 4);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((ulong)pppuVar27 & 0x1fffffffc) == 4) {
      ppppuVar29 = ppppuVar30;
      (*(code *)(*ppppuVar30)[2])();
      iVar13 = (int)ppppuVar29;
      do {
        pppuVar27 = *ppppuVar41;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar41,0x10);
        if (bVar7) {
          *ppppuVar41 = (undefined8 ***)((long)pppuVar27 - 1U);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((undefined8 ***)((long)pppuVar27 - 1U) == (undefined8 ***)0x0) {
        (*(code *)(*ppppuVar30)[1])();
        iVar13 = (int)ppppuVar30;
      }
    }
  }
  pppppuVar19[0xd] = pppppuVar17;
  pppppuStack_110 = (undefined8 ******)0x0;
  FUN_10ad055a0();
  if (iVar13 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar23 = (long *)*ppuVar16;
      if ((plVar23 == (long *)0x0) || ((**(code **)(*plVar23 + 0x18))(), plVar23 == (long *)0x0))
      goto LAB_10a256e54;
      plVar23 = plVar23 + 7;
    }
    else {
      plVar23 = (long *)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar23 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppuStack_98,&UNK_10f64774c);
      if (*(char *)((long)param_5 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppppuStack_e0,*param_5,param_5[1]);
      }
      else {
        ppppuStack_d8 = (undefined8 ****)param_5[1];
        ppppppuStack_e0 = (undefined8 ******)*param_5;
        uStack_d0 = (undefined8 *****)param_5[2];
      }
      pppppuStack_c0 = (undefined8 *****)"null";
      if (uStack_88._7_1_ != '\0') {
        pppppuStack_c0 = &pppppuStack_98;
      }
      if ((long)uStack_d0 < 0) {
        ppppppuStack_100 = (undefined8 ******)"null";
        if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
          ppppppuStack_100 = ppppppuStack_e0;
        }
      }
      else {
        ppppppuStack_100 = (undefined8 ******)"null";
        if (uStack_d0._7_1_ != '\0') {
          ppppppuStack_100 = &ppppppuStack_e0;
        }
      }
      FUN_10a224324(&pppppuStack_c0,&ppppppuStack_100);
      if (uStack_88._7_1_ == '\0') {
        pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
      }
      else {
        pppppuStack_b8 = pppppuStack_90;
        pppppuStack_c0 = pppppuStack_98;
        uStack_b0 = uStack_88;
      }
      pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,uStack_88._7_1_ != '\0');
      if ((long)uStack_d0 < 0) {
        if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
          func_0x000107c3192c(&ppppppuStack_100,ppppppuStack_e0);
          goto LAB_10a258284;
        }
LAB_10a258240:
        uVar25 = 0;
        ppppppuStack_100 = (undefined8 ******)((ulong)ppppppuStack_100 & 0xffffffffffffff00);
      }
      else {
        if (uStack_d0._7_1_ == '\0') goto LAB_10a258240;
        ppppuStack_f8 = ppppuStack_d8;
        ppppppuStack_100 = ppppppuStack_e0;
        ppppuStack_f0 = uStack_d0;
LAB_10a258284:
        uVar25 = 1;
      }
      ppppuStack_e8 = (undefined8 ****)CONCAT71(ppppuStack_e8._1_7_,uVar25);
      FUN_10a234a0c(&pppppuStack_c0,&ppppppuStack_100);
      goto LAB_10a258298;
    }
  }
LAB_10a256e54:
  if (*(char *)(param_5 + 5) == '\x01') {
    ppppuVar41 = (undefined8 ****)param_5[4];
    ppppuVar30 = (undefined8 ****)param_5[3];
    if (param_5[4] != 0) {
      plVar23 = (long *)(param_5[4] + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *plVar23 = *plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppppuVar29 = pppppuVar19[0x10];
    pppppuVar19[0x10] = ppppuVar41;
    pppppuVar19[0xf] = ppppuVar30;
    if (ppppuVar29 != (undefined8 ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  lVar26 = *param_1;
  FUN_10a1087d0(lVar26 + 0x50,param_5 + 7);
  FUN_10a1087d0(lVar26 + 0xa0,param_5 + 0x10);
  if (((*(byte *)(lVar26 + 0x98) & 1) == 0) || ((*(byte *)(lVar26 + 0xe8) & 1) == 0))
  goto LAB_10a258298;
  pppppuVar36 = *(undefined8 ******)(lVar26 + 0x50);
  pppppuVar31 = *(undefined8 ******)(lVar26 + 0xa0);
  pppppuVar17 = pppppuVar36;
  (*(code *)(*pppppuVar36)[3])();
  pppppuVar35 = pppppuVar31;
  (*(code *)(*pppppuVar31)[3])();
  ppppppuStack_100 = (undefined8 ******)((ulong)ppppppuStack_100 & 0xffffffffffffff00);
  ppppuStack_f8 = (undefined8 ****)((ulong)ppppuStack_f8 & 0xffffffffffffff00);
  if (pppppuVar17 == (undefined8 *****)0x0) {
    uVar25 = 0;
    pppppuStack_c0 = (undefined8 *****)((ulong)pppppuStack_c0 & 0xffffffffffffff00);
  }
  else {
    pppppuStack_c0 = (undefined8 *****)pppppuVar17[7];
    if ((undefined8 ******)pppppuStack_c0 != (undefined8 ******)0x0) {
      ppppppuVar33 = (undefined8 ******)(pppppuStack_c0 + 1);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
        if (bVar7) {
          *ppppppuVar33 = (undefined8 *****)((long)*ppppppuVar33 + 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uVar25 = 1;
  }
  pppppuStack_b8 = (undefined8 *****)CONCAT71(pppppuStack_b8._1_7_,uVar25);
  if (pppppuVar35 == (undefined8 *****)0x0) {
    uVar25 = 0;
    uStack_b0 = (undefined8 *****)((ulong)uStack_b0 & 0xffffffffffffff00);
  }
  else {
    uStack_b0 = (undefined8 *****)pppppuVar35[7];
    if (uStack_b0 != (undefined8 *****)0x0) {
      pppppuVar17 = uStack_b0 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
        if (bVar7) {
          *pppppuVar17 = (undefined8 ****)((long)*pppppuVar17 + 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uVar25 = 1;
  }
  bVar7 = false;
  lVar26 = 0;
  pppppuStack_a8 = (undefined8 *****)CONCAT71(pppppuStack_a8._1_7_,uVar25);
  do {
    if (*(char *)((long)&pppppuStack_b8 + lVar26) == '\x01') {
      if (bVar7) {
        FUN_109d16cc4(&pppppuStack_98,&ppppppuStack_100);
        ppppppuVar33 = ppppppuStack_100;
        if (ppppppuStack_100 != (undefined8 ******)0x0) {
          ppppppuVar20 = ppppppuStack_100 + 1;
          do {
            pppppuVar17 = *ppppppuVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
            if (bVar7) {
              *ppppppuVar20 = (undefined8 *****)((long)pppppuVar17 - 4);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (((ulong)pppppuVar17 & 0x1fffffffc) == 4) {
            (*(code *)(*ppppppuStack_100)[2])(ppppppuStack_100);
            do {
              pppppuVar17 = *ppppppuVar20;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
              if (bVar7) {
                *ppppppuVar20 = (undefined8 *****)((long)pppppuVar17 - 1U);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((undefined8 *****)((long)pppppuVar17 - 1U) == (undefined8 *****)0x0) {
              (*(code *)(*ppppppuVar33)[1])(ppppppuVar33);
            }
          }
        }
      }
      else {
        pppppuStack_98 = *(undefined8 ******)((long)&pppppuStack_c0 + lVar26);
        if ((undefined8 ******)pppppuStack_98 != (undefined8 ******)0x0) {
          ppppppuVar33 = (undefined8 ******)(pppppuStack_98 + 1);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
            if (bVar7) {
              *ppppppuVar33 = (undefined8 *****)((long)*ppppppuVar33 + 4);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        ppppuStack_f8 = (undefined8 ****)CONCAT71(ppppuStack_f8._1_7_,1);
      }
      bVar7 = true;
      ppppppuStack_100 = (undefined8 ******)pppppuStack_98;
    }
    lVar26 = lVar26 + 0x10;
  } while (lVar26 != 0x20);
  ppppppuVar33 = (undefined8 ******)&ppppuStack_a0;
  do {
    ppppppuVar20 = ppppppuVar33 + -1;
    ppppppuVar33 = ppppppuVar33 + -2;
    if ((*(char *)ppppppuVar20 == '\x01') &&
       (pppppuVar17 = *ppppppuVar33, pppppuVar17 != (undefined8 *****)0x0)) {
      pppppuVar35 = pppppuVar17 + 1;
      do {
        ppppuVar30 = *pppppuVar35;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar5) {
          *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 + -4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)ppppuVar30 & 0x1fffffffc) == 4) {
        (*(code *)(*pppppuVar17)[2])(pppppuVar17);
        do {
          ppppuVar30 = *pppppuVar35;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
          if (bVar5) {
            *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((undefined8 ****)((long)ppppuVar30 + -1) == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar17)[1])(pppppuVar17);
        }
      }
    }
  } while (ppppppuVar33 != &pppppuStack_c0);
  if (bVar7) {
    FUN_109d16cc4(&pppppuStack_c0,pppppuVar19 + 0xd,&ppppppuStack_100);
    ppppuVar30 = pppppuVar19[0xd];
    if (ppppuVar30 != (undefined8 ****)0x0) {
      ppppuVar41 = ppppuVar30 + 1;
      do {
        pppuVar27 = *ppppuVar41;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar41,0x10);
        if (bVar7) {
          *ppppuVar41 = (undefined8 ***)((long)pppuVar27 - 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)pppuVar27 & 0x1fffffffc) == 4) {
        (*(code *)(*ppppuVar30)[2])(ppppuVar30);
        do {
          pppuVar27 = *ppppuVar41;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppuVar41,0x10);
          if (bVar7) {
            *ppppuVar41 = (undefined8 ***)((long)pppuVar27 - 1U);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((undefined8 ***)((long)pppuVar27 - 1U) == (undefined8 ***)0x0) {
          (*(code *)(*ppppuVar30)[1])(ppppuVar30);
        }
      }
    }
    ppppppuVar33 = ppppppuStack_100;
    pppppuVar19[0xd] = pppppuStack_c0;
    if (ppppppuStack_100 != (undefined8 ******)0x0) {
      ppppppuVar20 = ppppppuStack_100 + 1;
      do {
        pppppuVar17 = *ppppppuVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
        if (bVar7) {
          *ppppppuVar20 = (undefined8 *****)((long)pppppuVar17 - 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)pppppuVar17 & 0x1fffffffc) == 4) {
        (*(code *)(*ppppppuStack_100)[2])(ppppppuStack_100);
        do {
          pppppuVar17 = *ppppppuVar20;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
          if (bVar7) {
            *ppppppuVar20 = (undefined8 *****)((long)pppppuVar17 - 1U);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((undefined8 *****)((long)pppppuVar17 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*ppppppuVar33)[1])(ppppppuVar33);
        }
      }
    }
  }
  if (pppppuVar19 != (undefined8 *****)0x0) {
    pppppuVar17 = pppppuVar19 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
      if (bVar7) {
        *pppppuVar17 = (undefined8 ****)((long)*pppppuVar17 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppuVar20 = (undefined8 ******)0x118;
  ppppppuStack_100 = (undefined8 ******)(pppppuVar19 + 3);
  ppppuStack_f8 = pppppuVar19;
  ppppuStack_f0 = pppppuVar34;
  ppppuStack_e8 = pppppuVar31;
  __Znwm();
  *ppppppuVar20 = (undefined8 *****)FUN_10a2abf1c;
  ppppppuVar20[1] = (undefined8 *****)FUN_10a2ac934;
  pppppuVar17 = (undefined8 *****)0xb0;
  __Znwm();
  pppppuVar34 = pppppuVar17 + 1;
  pppppuVar17[2] = (undefined8 ****)0x0;
  *pppppuVar34 = (undefined8 ****)0x200000006;
  ppppppuVar33 = ppppppuVar20 + 0x1c;
  *(undefined2 *)(pppppuVar17 + 3) = 4;
  pppppuVar35 = (undefined8 *****)0x0;
  pppppuVar31 = (undefined8 *****)0x0;
  pppppuVar17[5] = (undefined8 ****)0x0;
  pppppuVar17[4] = (undefined8 ****)0x0;
  pppppuVar17[7] = (undefined8 ****)0x0;
  pppppuVar17[6] = (undefined8 ****)0x0;
  pppppuVar17[9] = (undefined8 ****)0x0;
  pppppuVar17[8] = (undefined8 ****)0x0;
  pppppuVar17[0xb] = (undefined8 ****)0x0;
  pppppuVar17[10] = (undefined8 ****)0x0;
  pppppuVar17[0xd] = (undefined8 ****)0x0;
  pppppuVar17[0xc] = (undefined8 ****)0x0;
  pppppuVar17[0xf] = (undefined8 ****)0x0;
  pppppuVar17[0xe] = (undefined8 ****)0x0;
  pppppuVar17[0x10] = (undefined8 ****)0x0;
  pppppuVar17[0x11] = pppppuVar17 + 3;
  pppppuVar17[0x12] = (undefined8 ****)0x0;
  *pppppuVar17 = (undefined8 ****)&PTR_DAT_110bb6af8;
  *(undefined1 *)(pppppuVar17 + 0x13) = 0;
  *(undefined1 *)(pppppuVar17 + 0x15) = 0;
  ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  ppppppuVar20[3] = pppppuVar31;
  ppppppuVar20[2] = pppppuVar35;
  ppppppuVar20[5] = pppppuVar31;
  ppppppuVar20[4] = pppppuVar35;
  ppppppuVar20[6] = (undefined8 *****)0x0;
  FUN_109d18960(ppppppuVar20 + 2,*ppuVar16,0);
  ppppppuVar20[7] = pppppuVar17;
  ppppppuVar20[8] = pppppuVar17;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
    if (bVar7) {
      *pppppuVar34 = (undefined8 ****)((long)*pppppuVar34 + 4);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  ppppppuVar20[0x20] = ppppppuStack_100;
  ppppppuVar20[0x21] = (undefined8 *****)ppppuStack_f8;
  ppppppuVar20[0xd] = ppppppuStack_100;
  ppppppuVar20[0xe] = (undefined8 *****)ppppuStack_f8;
  ppppppuStack_100 = (undefined8 *******)0x0;
  ppppuStack_f8 = (undefined8 *****)0x0;
  ppppppuVar20[0x10] = (undefined8 *****)ppppuStack_e8;
  ppppppuVar20[0xf] = (undefined8 *****)ppppuStack_f0;
  ppppppuVar20[9] = pppppuVar36;
  *(code *)(ppppppuVar20 + 10) = (code)0x0;
  *(code *)(ppppppuVar20 + 0x22) = (code)0x0;
  pppppuStack_98 = (undefined8 ******)0x0;
  FUN_109d18960(ppppppuVar20 + 2,pppppuVar36,&pppppuStack_98);
  if ((undefined8 ******)pppppuStack_98 != (undefined8 ******)0x0) {
    func_0x0001092af97c(&pppppuStack_98);
    goto LAB_10a258298;
  }
  if (((ulong)ppppppuVar20[10] & 1) == 0) {
    uStack_b0 = ppppppuVar20[9];
    pppppuStack_c0 = (undefined8 ******)0x0;
    pppppuStack_b8 = ppppppuVar20;
    (*(code *)**uStack_b0)(uStack_b0,&pppppuStack_c0);
    __ZNSt13exception_ptrD1Ev(&pppppuStack_98);
  }
  else {
    __ZNSt13exception_ptrD1Ev(&pppppuStack_98);
    pppppuVar34 = ppppppuVar20[0x20];
    ppppuVar30 = pppppuVar34[0xf];
    if ((ppppuVar30 == (undefined8 ****)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), ppppuVar30 == (undefined8 ****)0x0)) {
      ppppppuVar20[0x1a] = (undefined8 *****)0x0;
      ppppppuVar20[0x1b] = (undefined8 *****)0x0;
    }
    else {
      if (pppppuVar34[0xe] == (undefined8 ****)0x0) {
        ppppppuVar20[0x1a] = (undefined8 *****)0x0;
        ppppppuVar20[0x1b] = (undefined8 *****)0x0;
      }
      else {
        func_0x00010a152370(&pppppuStack_c0);
        ppppppuVar20[0x1a] = (undefined8 *****)0x0;
        ppppppuVar20[0x1b] = (undefined8 *****)0x0;
        if ((undefined8 ******)pppppuStack_b8 != (undefined8 ******)0x0) {
          ppppppuVar21 = (undefined8 ******)pppppuStack_b8;
          __ZNSt3__119__shared_weak_count4lockEv();
          ppppppuVar20[0x1b] = ppppppuVar21;
          if (ppppppuVar21 != (undefined8 ******)0x0) {
            ppppppuVar20[0x1a] = pppppuStack_c0;
          }
          if ((undefined8 ******)pppppuStack_b8 != (undefined8 ******)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      ppppuVar41 = ppppuVar30 + 1;
      do {
        pppuVar27 = *ppppuVar41;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar41,0x10);
        if (bVar7) {
          *ppppuVar41 = (undefined8 ***)((long)pppuVar27 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppuVar27 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuVar30)[2])(ppppuVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar30);
      }
      puVar8 = PTR___tlv_bootstrap_11340d750;
      if (ppppppuVar20[0x1a] != (undefined8 *****)0x0) {
        ppuVar16 = &PTR___tlv_bootstrap_11340d750;
        ppuVar22 = ppuVar16;
        (*(code *)PTR___tlv_bootstrap_11340d750)();
        ppuVar24 = &PTR___tlv_bootstrap_11340d738;
        if (((ulong)*ppuVar22 & 1) == 0) {
          (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
          __tlv_atexit(0x10a132a8c,ppuVar24,0x100000000);
          (*(code *)puVar8)();
          *(undefined1 *)ppuVar16 = 1;
        }
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        FUN_10a15217c();
      }
    }
    FUN_10a26af30(ppppppuVar20 + 9);
    pppppuVar34 = ppppppuVar20[0xe];
    pppppuVar35 = ppppppuVar20[0xf];
    pppppuVar31 = ppppppuVar20[0xd];
    ppppppuVar20[0x1c] = pppppuVar31;
    ppppppuVar20[0x1d] = pppppuVar34;
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar34 = pppppuVar34 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
        if (bVar7) {
          *pppppuVar34 = (undefined8 ****)((long)*pppppuVar34 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    pppppuVar36 = ppppppuVar20[0x10];
    FUN_10a26b13c(pppppuVar31,&PTR_DAT_110bb6b20);
    uVar14 = SUB84(pppppuVar31,0);
    ppppppuVar20[0x18] = ppppppuVar33;
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)(ppppppuVar20 + 0x19) = uVar14;
    pppppuVar34 = ppppppuVar20[0x1c];
    if (*(int *)((long)pppppuVar35 + 0x734) != 1) {
      uVar11 = *(undefined4 *)((long)pppppuVar34 + 0x1c);
      uVar2 = *(uint *)(pppppuVar34[8] + 6);
      uVar14 = *(undefined4 *)((long)pppppuVar34[8] + 0x34);
      uVar40 = uVar2;
      FUN_109fc8e58(uVar2,uVar14,uVar11);
      uVar15 = (int)pppppuVar34[8] + 0x18;
      FUN_10a1a5510();
      if (uVar40 <= uVar15) {
        uVar40 = uVar15;
      }
      ppppuVar30 = (undefined8 ****)(ulong)uVar40;
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&DAT_10f647544,&DAT_10f64867e,0xe9,&UNK_10f648724,param_8,param_9,
                            ppppuVar30,uVar2,uVar14,uVar11);
      }
      FUN_10a1738b8(&pppppuStack_c0,pppppuVar35,ppppuVar30);
      pppppuVar35 = *ppppppuVar33;
      FUN_10a0e65b0(pppppuVar35 + 0x10,&pppppuStack_c0);
      pppppuVar34 = pppppuStack_b8;
      pppppuVar35[0x12] = uStack_b0;
      if ((undefined8 ******)pppppuStack_b8 != (undefined8 ******)0x0) {
        ppppppuVar21 = (undefined8 ******)(pppppuStack_b8 + 1);
        do {
          pppppuVar35 = *ppppppuVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar21,0x10);
          if (bVar7) {
            *ppppppuVar21 = (undefined8 *****)((long)pppppuVar35 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppppuVar35 == (undefined8 *****)0x0) {
          (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar34);
        }
      }
      ppppuVar41 = (*ppppppuVar33)[0x10];
      func_0x00010b0ae4b8(&pppppuStack_c0,&UNK_10f648774,0x3a);
      if ((long)uStack_b0._7_1_ < 0) {
        ppppppuVar20[0x16] = pppppuStack_c0;
        ppppppuVar20[0x17] = pppppuStack_b8;
        if (ppppuVar41 != (undefined8 ****)0x0) {
          __ZdlPv();
          goto LAB_10a25759c;
        }
      }
      else {
        ppppppuVar20[0x16] = &pppppuStack_c0;
        ppppppuVar20[0x17] = (undefined8 *****)(long)uStack_b0._7_1_;
        if (ppppuVar41 != (undefined8 ****)0x0) {
LAB_10a25759c:
          ppppuVar41 = (*ppppppuVar33)[0x10];
          (*(code *)(*ppppuVar41)[6])(ppppuVar41,2,0,0);
          func_0x00010b0ae4b8(&pppppuStack_c0,&UNK_10f6487af,0x37);
          if ((long)uStack_b0._7_1_ < 0) {
            ppppppuVar20[0x14] = pppppuStack_c0;
            ppppppuVar20[0x15] = pppppuStack_b8;
            if (ppppuVar41 != (undefined8 ****)0x0) {
              __ZdlPv();
              goto LAB_10a2575fc;
            }
          }
          else {
            ppppppuVar20[0x14] = &pppppuStack_c0;
            ppppppuVar20[0x15] = (undefined8 *****)(long)uStack_b0._7_1_;
            if (ppppuVar41 != (undefined8 ****)0x0) {
LAB_10a2575fc:
              pppppuVar34 = *ppppppuVar33;
              ppppuVar41 = (undefined8 ****)
                           ((long)ppppuVar41 + (ulong)*(uint *)(pppppuVar34 + 0x12));
              pppppuVar34[0x13] = ppppuVar41;
              pppppuVar34[0x14] = ppppuVar30;
              goto LAB_10a25760c;
            }
          }
          FUN_10a0edfc4(ppppppuVar20 + 0x14);
          goto LAB_10a258298;
        }
      }
      FUN_10a0edfc4(ppppppuVar20 + 0x16);
LAB_10a258298:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a25829c);
      (*pcVar9)();
    }
    ppppuVar41 = pppppuVar34[0x13];
    ppppuVar30 = pppppuVar34[0x14];
LAB_10a25760c:
    ppppuVar29 = pppppuVar34[8];
    FUN_10a318c10(ppppuVar29,ppppuVar41,ppppuVar30);
    if (((ulong)ppppuVar29 & 1) == 0) {
      pppuVar27 = (*ppppppuVar33)[8][1];
      if (*(char *)((long)pppuVar27 + 0x87) < '\0') {
        func_0x000107c3192c(ppppppuVar20 + 0x11,pppuVar27[0xe],pppuVar27[0xf]);
      }
      else {
        pppppuVar34 = (undefined8 *****)pppuVar27[0xf];
        pppppuVar17 = (undefined8 *****)pppuVar27[0xe];
        ppppppuVar20[0x13] = (undefined8 *****)pppuVar27[0x10];
        ppppppuVar20[0x12] = pppppuVar34;
        ppppppuVar20[0x11] = pppppuVar17;
      }
      FUN_10a0ee900(&pppppuStack_c0,&UNK_10f6487e7,0x2e);
      FUN_10a26b2e0(&pppppuStack_c0);
      goto LAB_10a258298;
    }
    FUN_10a26b13c(*ppppppuVar33,&PTR_DAT_110bb6b38);
    pppppppuVar3 = (undefined8 *******)ppppppuVar20[0x1c];
    pppppuVar34 = ppppppuVar20[0x1d];
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar35 = pppppuVar34 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar7) {
          *pppppuVar35 = (undefined8 ****)((long)*pppppuVar35 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppppuVar30 = pppppuVar36[2];
    pppppuStack_b8 = (undefined8 ******)0x0;
    uStack_b0 = (undefined8 *****)0x0;
    if (ppppuVar30 == (undefined8 ****)0x0) {
      ppppppuStack_e0 = (undefined8 *******)0x0;
      ppppuStack_d8 = (undefined8 *****)0x0;
      pppppuVar35 = (undefined8 *****)0xd8;
      __Znwm();
      pppppuVar35[2] = (undefined8 ****)0x0;
      pppppuVar35[1] = (undefined8 ****)0x200000006;
      *(undefined2 *)(pppppuVar35 + 3) = 4;
      pppppuVar35[5] = (undefined8 ****)0x0;
      pppppuVar35[4] = (undefined8 ****)0x0;
      pppppuVar35[7] = (undefined8 ****)0x0;
      pppppuVar35[6] = (undefined8 ****)0x0;
      pppppuVar35[9] = (undefined8 ****)0x0;
      pppppuVar35[8] = (undefined8 ****)0x0;
      pppppuVar35[0xb] = (undefined8 ****)0x0;
      pppppuVar35[10] = (undefined8 ****)0x0;
      pppppuVar35[0xd] = (undefined8 ****)0x0;
      pppppuVar35[0xc] = (undefined8 ****)0x0;
      pppppuVar35[0xf] = (undefined8 ****)0x0;
      pppppuVar35[0xe] = (undefined8 ****)0x0;
      pppppuVar35[0x10] = (undefined8 ****)0x0;
      pppppuVar35[0x11] = pppppuVar35 + 3;
      pppppuVar35[0x12] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar35 + 0x13) = 0;
      *(undefined1 *)(pppppuVar35 + 0x15) = 0;
      *pppppuVar35 = (undefined8 ****)&PTR_DAT_110bb6c00;
      pppppuStack_c0 = pppppuVar35 + 0x16;
      *pppppuStack_c0 = pppppppuVar3;
      pppppuVar35[0x17] = pppppuVar34;
      *(undefined1 *)(pppppuVar35 + 0x19) = 1;
      pppppuVar35[0x1a] = (undefined8 ****)0x0;
      pppppuStack_a8 = (undefined8 *****)FUN_10a26b3f8;
      pppppuStack_b8 = pppppuVar35;
      uStack_b0 = pppppuVar35;
    }
    else {
      pppppuStack_98 = (undefined8 ******)0x0;
      ppppppuStack_e0 = pppppppuVar3;
      ppppuStack_d8 = pppppuVar34;
      (*(code *)(*ppppuVar30)[5])(ppppuVar30,0,&pppppuStack_98);
      if ((undefined8 ******)pppppuStack_98 != (undefined8 ******)0x0) {
        func_0x0001092af97c(&pppppuStack_98);
        goto LAB_10a258298;
      }
      ppppppuStack_e0 = (undefined8 *******)0x0;
      ppppuStack_d8 = (undefined8 *****)0x0;
      pppppuVar35 = (undefined8 *****)0xe0;
      __Znwm();
      pppppuVar35[2] = (undefined8 ****)0x0;
      pppppuVar35[1] = (undefined8 ****)0x200000006;
      *(undefined2 *)(pppppuVar35 + 3) = 4;
      pppppuVar35[5] = (undefined8 ****)0x0;
      pppppuVar35[4] = (undefined8 ****)0x0;
      pppppuVar35[7] = (undefined8 ****)0x0;
      pppppuVar35[6] = (undefined8 ****)0x0;
      pppppuVar35[9] = (undefined8 ****)0x0;
      pppppuVar35[8] = (undefined8 ****)0x0;
      pppppuVar35[0xb] = (undefined8 ****)0x0;
      pppppuVar35[10] = (undefined8 ****)0x0;
      pppppuVar35[0xd] = (undefined8 ****)0x0;
      pppppuVar35[0xc] = (undefined8 ****)0x0;
      pppppuVar35[0xf] = (undefined8 ****)0x0;
      pppppuVar35[0xe] = (undefined8 ****)0x0;
      pppppuVar35[0x10] = (undefined8 ****)0x0;
      pppppuVar35[0x11] = pppppuVar35 + 3;
      pppppuVar35[0x12] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar35 + 0x13) = 0;
      *(undefined1 *)(pppppuVar35 + 0x15) = 0;
      *pppppuVar35 = (undefined8 ****)&PTR_FUN_110bb6bc8;
      pppppuVar35[0x16] = pppppppuVar3;
      pppppuVar35[0x17] = pppppuVar34;
      *(undefined1 *)(pppppuVar35 + 0x19) = 1;
      pppppuVar35[0x1a] = (undefined8 ****)0x0;
      pppppuVar35[0x1b] = ppppuVar30;
      if ((undefined8 ******)pppppuStack_b8 != (undefined8 ******)0x0) {
        ppppppuVar33 = (undefined8 ******)(pppppuStack_b8 + 1);
        do {
          pppppuVar34 = *ppppppuVar33;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
          if (bVar7) {
            *ppppppuVar33 = (undefined8 *****)((long)pppppuVar34 - 4);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (((ulong)pppppuVar34 & 0x1fffffffc) == 4) {
          do {
            pppppuVar34 = *ppppppuVar33;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
            if (bVar7) {
              *ppppppuVar33 = (undefined8 *****)((long)pppppuVar34 - 1U);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((undefined8 *****)((long)pppppuVar34 - 1U) == (undefined8 *****)0x0) {
            (*(code *)(*pppppuStack_b8)[1])();
          }
        }
      }
      pppppuStack_b8 = pppppuVar35;
      if (uStack_b0 != (undefined8 *****)0x0) {
        func_0x0001092b4274(&uStack_b0);
      }
      pppppuStack_a8 = (undefined8 *****)FUN_10a26b3c8;
      pppppuStack_c0 = pppppuVar35 + 0x16;
      uStack_b0 = pppppuVar35;
      __ZNSt13exception_ptrD1Ev(&pppppuStack_98);
    }
    pppppuVar34 = pppppuStack_c0;
    if ((undefined8 *****)pppppuStack_c0[4] != (undefined8 *****)0x0) {
      func_0x0001092b4274();
    }
    pppppuVar34[4] = uStack_b0;
    uStack_b0 = (undefined8 *****)0x0;
    pppppuStack_98 = pppppuStack_a8;
    pppppuStack_90 = pppppuStack_c0;
    uStack_88 = pppppuVar36;
    (*(code *)**pppppuVar36)(pppppuVar36,&pppppuStack_98);
    ppppppuVar20[0x1f] = pppppuStack_b8;
    pppppuStack_b8 = (undefined8 ******)0x0;
    if ((uStack_b0 != (undefined8 *****)0x0) &&
       (func_0x0001092b4274(&uStack_b0), (undefined8 ******)pppppuStack_b8 != (undefined8 ******)0x0
       )) {
      ppppppuVar33 = (undefined8 ******)(pppppuStack_b8 + 1);
      do {
        pppppuVar34 = *ppppppuVar33;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
        if (bVar7) {
          *ppppppuVar33 = (undefined8 *****)((long)pppppuVar34 - 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)pppppuVar34 & 0x1fffffffc) == 4) {
        do {
          pppppuVar34 = *ppppppuVar33;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
          if (bVar7) {
            *ppppppuVar33 = (undefined8 *****)((long)pppppuVar34 - 1U);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((undefined8 *****)((long)pppppuVar34 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*pppppuStack_b8)[1])();
        }
      }
    }
    ppppuVar30 = ppppuStack_d8;
    if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
      pppppuVar34 = (undefined8 *****)(ppppuStack_d8 + 1);
      do {
        ppppuVar41 = *pppppuVar34;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
        if (bVar7) {
          *pppppuVar34 = (undefined8 ****)((long)ppppuVar41 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppuVar41 == (undefined8 ****)0x0) {
        (*(code *)(*ppppuStack_d8)[2])(ppppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar30);
      }
    }
    FUN_10a26b1b4(ppppppuVar20 + 0x18);
    pppppuVar34 = ppppppuVar20[0x1d];
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar35 = pppppuVar34 + 1;
      do {
        ppppuVar30 = *pppppuVar35;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar7) {
          *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppuVar30 == (undefined8 ****)0x0) {
        (*(code *)(*pppppuVar34)[2])(pppppuVar34);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar34);
      }
    }
    FUN_10a26bfb0(ppppppuVar20 + 9);
    pppppuVar34 = ppppppuVar20[0x1b];
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar35 = pppppuVar34 + 1;
      do {
        ppppuVar30 = *pppppuVar35;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar7) {
          *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppuVar30 == (undefined8 ****)0x0) {
        (*(code *)(*pppppuVar34)[2])(pppppuVar34);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar34);
      }
    }
    ppppppuVar20[0x1e] = ppppppuVar20[0x1f];
    pppppuVar34 = ppppppuVar20[0x1f] + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
      if (bVar7) {
        *pppppuVar34 = (undefined8 ****)((long)*pppppuVar34 + 4);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((uint)ppppppuVar20[0x1e][2] >> 1 & 1) == 0) {
      *(code *)(ppppppuVar20 + 0x22) = (code)0x1;
      pppppuVar31 = ppppppuVar20[0x1e];
      pppppuVar34 = pppppuVar31 + 2;
      pppppuVar35 = ppppppuVar20[3];
      do {
        ppppuVar30 = *pppppuVar34;
        if (ppppuVar30 == (undefined8 ****)0x0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar34,0x10);
          if (bVar7) {
            *pppppuVar34 = (undefined8 ****)0x1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            pppppuStack_c0 = (undefined8 ******)0x0;
            pppppuStack_b8 = ppppppuVar20;
            uStack_b0 = pppppuVar35;
            func_0x000109d1b588(pppppuVar31 + 3,&pppppuStack_c0);
            pppppuVar31[2] = (undefined8 ****)0x0;
            goto LAB_10a257ac4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)ppppuVar30 >> 1 & 1) == 0);
    }
    pppppuVar34 = ppppppuVar20[0x1e];
    if (((uint)ppppppuVar20[0x1e][2] >> 5 & 1) != 0) {
      func_0x0001092af97c(pppppuVar34 + 0x12);
      goto LAB_10a258298;
    }
    if (((ulong)pppppuVar34[0x15] & 1) == 0) goto LAB_10a258298;
    FUN_10a26ada4(ppppppuVar20 + 2,pppppuVar34 + 0x13);
    pppppuVar34 = ppppppuVar20[0x1e];
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar35 = pppppuVar34 + 1;
      do {
        ppppuVar30 = *pppppuVar35;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar7) {
          *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 - 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)ppppuVar30 & 0x1fffffffc) == 4) {
        do {
          ppppuVar30 = *pppppuVar35;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
          if (bVar7) {
            *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 - 1U);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((undefined8 ****)((long)ppppuVar30 - 1U) == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar34)[1])();
        }
      }
    }
    pppppuVar34 = ppppppuVar20[0x1f];
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar35 = pppppuVar34 + 1;
      do {
        ppppuVar30 = *pppppuVar35;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar7) {
          *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 - 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)ppppuVar30 & 0x1fffffffc) == 4) {
        do {
          ppppuVar30 = *pppppuVar35;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
          if (bVar7) {
            *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 - 1U);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((undefined8 ****)((long)ppppuVar30 - 1U) == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar34)[1])();
        }
      }
    }
    pppppuVar34 = ppppppuVar20[0xe];
    if (pppppuVar34 != (undefined8 *****)0x0) {
      pppppuVar35 = pppppuVar34 + 1;
      do {
        ppppuVar30 = *pppppuVar35;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
        if (bVar7) {
          *pppppuVar35 = (undefined8 ****)((long)ppppuVar30 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppuVar30 == (undefined8 ****)0x0) {
        (*(code *)(*pppppuVar34)[2])(pppppuVar34);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar34);
      }
    }
    func_0x000109d1a1d0(ppppppuVar20 + 2);
    __ZdlPv(ppppppuVar20);
  }
LAB_10a257ac4:
  param_1 = (long *)*param_1;
  plVar23 = (long *)*param_1;
  if (plVar23 != (long *)0x0) {
    puVar1 = (ulong *)(plVar23 + 1);
    do {
      uVar28 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar28 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar28 & 0x1fffffffc) == 4) {
      do {
        uVar28 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar28 - 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (uVar28 - 1 == 0) {
        (**(code **)(*plVar23 + 8))();
      }
    }
  }
  ppppuVar30 = ppppuStack_f8;
  *param_1 = (long)pppppuVar17;
  if ((undefined8 *****)ppppuStack_f8 != (undefined8 *****)0x0) {
    pppppuVar17 = (undefined8 *****)(ppppuStack_f8 + 1);
    do {
      ppppuVar41 = *pppppuVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
      if (bVar7) {
        *pppppuVar17 = (undefined8 ****)((long)ppppuVar41 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuVar41 == (undefined8 ****)0x0) {
      (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar30);
    }
  }
  if (pppppuVar19 != (undefined8 *****)0x0) {
    pppppuVar17 = pppppuVar19 + 1;
    do {
      ppppuVar30 = *pppppuVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar17,0x10);
      if (bVar7) {
        *pppppuVar17 = (undefined8 ****)((long)ppppuVar30 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuVar30 == (undefined8 ****)0x0) {
      (*(code *)(*pppppuVar19)[2])(pppppuVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
    }
  }
LAB_10a257b88:
  if ((undefined8 ******)pppppuStack_110 != (undefined8 ******)0x0) {
    ppppppuVar33 = (undefined8 ******)(pppppuStack_110 + 1);
    do {
      pppppuVar17 = *ppppppuVar33;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
      if (bVar7) {
        *ppppppuVar33 = (undefined8 *****)((long)pppppuVar17 - 4);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((ulong)pppppuVar17 & 0x1fffffffc) == 4) {
      (*(code *)(*pppppuStack_110)[2])(pppppuStack_110);
      do {
        pppppuVar17 = *ppppppuVar33;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppuVar33,0x10);
        if (bVar7) {
          *ppppppuVar33 = (undefined8 *****)((long)pppppuVar17 - 1U);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((undefined8 *****)((long)pppppuVar17 - 1U) == (undefined8 *****)0x0) {
        (*(code *)(*pppppuStack_110)[1])(pppppuStack_110);
      }
    }
  }
  return;
}



/* Entry: 10a258650; end: 10a25879f;  */

long FUN_10a258650(long param_1)

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



/* Entry: 10a2587a0; end: 10a258a53;  */

undefined8 * FUN_10a2587a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined *puStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a03e114(param_1 + 3);
  *param_1 = &PTR_FUN_110bb6258;
  param_1[3] = &PTR_DAT_110bb62c0;
  param_1[7] = &PTR_DAT_110bb62e8;
  *(undefined4 *)(param_1 + 8) = 0;
  ppuVar9 = *(undefined ***)(param_2 + 0x870);
  puStack_f0 = ppuVar9[7];
  if (puStack_f0 == (undefined *)0x0) {
    puStack_f0 = ppuVar9[5];
    plVar8 = (long *)ppuVar9[6];
  }
  else {
    plVar8 = (long *)ppuVar9[8];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e8 = plVar8;
  puStack_a0 = puStack_f0;
  if (*(char *)(ppuVar9 + 10) == '\x01') {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    puStack_e0 = &UNK_1053a6a3c;
    ppuStack_d8 = &PTR_DAT_110ae9180;
    puStack_98 = &UNK_1053a6a3c;
    ppuStack_90 = &PTR_DAT_110ae9180;
    uVar4 = 0xb8;
    __Znwm();
    func_0x000109d18e28();
    param_1[9] = uVar4;
    func_0x0001092ba41c(&puStack_a0);
    pcVar6 = (code *)*ppuStack_d8;
  }
  else {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    ppuVar9 = &puStack_e0;
    puStack_e0 = &UNK_1053a6a3c;
    ppuStack_d8 = &PTR_DAT_110ae9180;
    puStack_98 = &UNK_1053a6a3c;
    ppuStack_90 = &PTR_DAT_110ae9180;
    uVar4 = 0xb8;
    __Znwm();
    func_0x000109d18d1c();
    param_1[9] = uVar4;
    func_0x0001092ba41c(&puStack_a0);
    pcVar6 = (code *)*ppuStack_d8;
  }
  (*pcVar6)(&ppuStack_d8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  puVar5 = (undefined8 *)param_1[4];
  FUN_10a5ae998(puVar5,&PTR_DAT_110b9fab0,param_2,param_1 + 3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001092ba41c(&puStack_a0);
  (*(code *)*ppuStack_d8)(ppuVar9 + 1);
  func_0x00010a06e274(&puStack_f0);
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  __Unwind_Resume();
  FUN_10a2846dc(puVar5 + 10);
  plVar8 = (long *)puVar5[9];
  puVar5[9] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  puVar5[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)puVar5[6] != (undefined8 *)0x0) {
    *(undefined8 *)puVar5[6] = 0;
  }
  func_0x00010a004e5c(puVar5 + 4);
  *puVar5 = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar5 + 1);
  return puVar5;
}



/* Entry: 10a258a54; end: 10a258ac7;  */

undefined8 * FUN_10a258a54(undefined8 *param_1)

{
  long *plVar1;
  
  FUN_10a2846dc(param_1 + 10);
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a258ac8; end: 10a258adb;  */

undefined8 * FUN_10a258ac8(undefined8 *param_1)

{
  long *plVar1;
  
  FUN_10a2846dc(param_1 + 10);
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a258adc; end: 10a258b93;  */

void FUN_10a258adc(void)

{
  FUN_10a258a54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a258b94; end: 10a258bbb;  */

void FUN_10a258b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a258ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x38))();
  return;
}



/* Entry: 10a258bbc; end: 10a258c47;  */

long FUN_10a258bbc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x00010a042b54(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 10a258c48; end: 10a25967f;  */

/* WARNING: Removing unreachable block (ram,0x00010a258e28) */

long ** FUN_10a258c48(double param_1,long param_2,long *param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long *plVar16;
  long **pplVar17;
  long **pplVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long **pplVar22;
  long *plVar23;
  long **pplVar24;
  long lVar25;
  long *plStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  plVar23 = *(long **)(param_2 + 0x880);
  lVar21 = *param_3;
  plVar3 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  if (((0x7fffffffffffffff < (ulong)param_1 ||
       0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35) &&
      0xffffffffffffe < (long)param_1 - 1U) && ABS(param_1) != 0.0) {
    func_0x00010b0ae4b8(&plStack_c0,&UNK_10f6478b2,0x13);
    FUN_10a28479c(&plStack_c0);
    goto LAB_10a259544;
  }
  if (lVar21 == 0) {
    FUN_10a284824();
    goto LAB_10a259544;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = (int)plVar23[8] + 1;
  pplVar18 = (long **)(ulong)uVar1;
  *(uint *)(plVar23 + 8) = uVar1;
  pplVar24 = &plStack_c0;
  FUN_109d1b010(&plStack_c0);
  plStack_88 = (long *)CONCAT44(uStack_b4,uStack_b8);
  plStack_90 = plStack_c0;
  lVar25 = plVar23[9];
  plStack_b0 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plStack_c0 = plStack_c0 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar5) {
        *plStack_c0 = *plStack_c0 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2 = param_2 + (long)(param_1 * 1000000.0);
  if (plVar3 != (long *)0x0) {
    plVar14 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = (undefined8 *)0x98;
  plStack_c0 = plVar23;
  uStack_b8 = uVar1;
  lStack_a8 = lVar21;
  plStack_a0 = plVar3;
  lStack_98 = param_2;
  __Znwm();
  *puVar9 = FUN_10a2ad024;
  puVar9[1] = FUN_10a2ad318;
  func_0x0001092ba17c(puVar9 + 2);
  plVar14 = plStack_b0;
  plVar19 = (long *)puVar9[7];
  plVar13 = plVar3;
  if (plVar19 != (long *)0x0) {
    plVar16 = plVar19 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      lVar21 = lStack_a8;
      plVar13 = plStack_a0;
      param_2 = lStack_98;
    } while (cVar4 != '\0');
  }
  puVar9[9] = plStack_c0;
  *(uint *)(puVar9 + 10) = uStack_b8;
  plStack_b0 = (long *)0x0;
  puVar9[0xb] = plVar14;
  puVar9[0xc] = lVar21;
  lStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  puVar9[0xd] = plVar13;
  puVar9[0xe] = param_2;
  puVar9[0xf] = lVar25;
  *(undefined1 *)(puVar9 + 0x10) = 0;
  *(undefined1 *)(puVar9 + 0x12) = 0;
  puVar10 = puVar9 + 0xf;
  func_0x0001092ba064(puVar10,puVar9);
  if (((ulong)puVar10 & 1) == 0) {
    FUN_10a26c1b0(puVar9 + 0x11,puVar9 + 9);
    puVar9[0xf] = puVar9[0x11];
    plVar14 = (long *)(puVar9[0x11] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar9[0xf] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x12) = 1;
      lVar21 = puVar9[0xf];
      plVar14 = (long *)(lVar21 + 0x10);
      uVar12 = puVar9[3];
      do {
        lVar25 = *plVar14;
        if (lVar25 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uStack_78 = 0;
            puStack_70 = puVar9;
            uStack_68 = uVar12;
            func_0x000109d1b588(lVar21 + 0x18,&uStack_78);
            *(undefined8 *)(lVar21 + 0x10) = 0;
            goto joined_r0x00010a258ff4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar25 >> 1 & 1) == 0);
    }
    plVar14 = (long *)puVar9[0xf];
    if (((uint)*(undefined8 *)(puVar9[0xf] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar14 + 0x12);
      goto LAB_10a259544;
    }
    if (plVar14 != (long *)0x0) {
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    plVar14 = (long *)puVar9[0x11];
    if (plVar14 != (long *)0x0) {
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar9 + 2);
    plVar14 = (long *)puVar9[0xd];
    if (plVar14 != (long *)0x0) {
      plVar13 = plVar14 + 1;
      do {
        lVar21 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = (long *)puVar9[0xb];
    if (plVar14 != (long *)0x0) {
      pplVar24 = (long **)(plVar14 + 1);
      do {
        plVar13 = *pplVar24;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
        if (bVar5) {
          *pplVar24 = (long *)((long)plVar13 + -4);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)plVar13 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        do {
          plVar13 = *pplVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)plVar13 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((long *)((long)plVar13 + -1) == (long *)0x0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    func_0x000109d1a1d0(puVar9 + 2);
    __ZdlPv(puVar9);
  }
joined_r0x00010a258ff4:
  if (plVar19 != (long *)0x0) {
    puVar2 = (ulong *)(plVar19 + 1);
    do {
      uVar11 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
  }
  plVar14 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar13 = plStack_a0 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_b0 + 1);
    do {
      uVar11 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  plVar14 = plStack_88;
  pplVar22 = (long **)plVar23[0xb];
  if (pplVar22 != (long **)0x0) {
    uVar11 = (long)pplVar22 - 1;
    uVar20 = (uint)pplVar22;
    if (((ulong)pplVar22 & uVar11) == 0) {
      pplVar24 = (long **)(ulong)(uVar20 - 1 & uVar1);
    }
    else {
      pplVar24 = pplVar18;
      if (pplVar22 <= pplVar18) {
        uVar6 = 0;
        if (uVar20 != 0) {
          uVar6 = uVar1 / uVar20;
        }
        pplVar24 = (long **)(ulong)(uVar1 - uVar6 * uVar20);
      }
    }
    plVar13 = *(long **)(plVar23[10] + (long)pplVar24 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10a259120;
          pplVar15 = (long **)plVar13[1];
          if (pplVar15 != pplVar18) break;
          if (*(uint *)(plVar13 + 2) == uVar1) goto LAB_10a2593cc;
        }
        if (((ulong)pplVar22 & uVar11) == 0) {
          pplVar15 = (long **)((ulong)pplVar15 & uVar11);
        }
        else if (pplVar22 <= pplVar15) {
          uVar7 = 0;
          if (pplVar22 != (long **)0x0) {
            uVar7 = (ulong)pplVar15 / (ulong)pplVar22;
          }
          pplVar15 = (long **)((long)pplVar15 - uVar7 * (long)pplVar22);
        }
      } while (pplVar15 == pplVar24);
    }
  }
LAB_10a259120:
  plVar13 = (long *)0x20;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = (long)pplVar18;
  *(uint *)(plVar13 + 2) = uVar1;
  plVar13[3] = (long)plVar14;
  if (plVar14 != (long *)0x0) {
    plVar14 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((pplVar22 != (long **)0x0) &&
     ((float)(plVar23[0xd] + 1) <= *(float *)(plVar23 + 0xe) * (float)pplVar22)) goto LAB_10a259354;
  uVar11 = 1;
  if ((long **)0x2 < pplVar22) {
    uVar11 = (ulong)(((ulong)pplVar22 & (long)pplVar22 - 1U) != 0);
  }
  pplVar24 = (long **)(uVar11 | (long)pplVar22 << 1);
  pplVar22 = (long **)(long)((float)(plVar23[0xd] + 1) / *(float *)(plVar23 + 0xe));
  if (pplVar24 <= pplVar22) {
    pplVar24 = pplVar22;
  }
  if ((long)pplVar24 - 1U == 0) {
    pplVar24 = (long **)0x2;
  }
  else if (((ulong)pplVar24 & (long)pplVar24 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  pplVar22 = (long **)plVar23[0xb];
  if (pplVar22 < pplVar24) {
LAB_10a2591d8:
    if ((ulong)pplVar24 >> 0x3d != 0) {
      func_0x000109ffded8();
LAB_10a259544:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a259548);
      (*pcVar8)();
    }
    lVar21 = (long)pplVar24 << 3;
    __Znwm();
    lVar25 = plVar23[10];
    plVar23[10] = lVar21;
    if (lVar25 != 0) {
      __ZdlPv();
    }
    pplVar22 = (long **)0x0;
    plVar23[0xb] = (long)pplVar24;
    do {
      *(undefined8 *)(plVar23[10] + (long)pplVar22 * 8) = 0;
      pplVar22 = (long **)((long)pplVar22 + 1);
    } while (pplVar24 != pplVar22);
    plVar14 = (long *)plVar23[0xc];
    pplVar22 = pplVar24;
    if (plVar14 != (long *)0x0) {
      pplVar15 = (long **)plVar14[1];
      uVar11 = (long)pplVar24 - 1;
      if (((ulong)pplVar24 & uVar11) == 0) {
        pplVar15 = (long **)((ulong)pplVar15 & uVar11);
      }
      else if (pplVar24 <= pplVar15) {
        uVar7 = 0;
        if (pplVar24 != (long **)0x0) {
          uVar7 = (ulong)pplVar15 / (ulong)pplVar24;
        }
        pplVar15 = (long **)((long)pplVar15 - uVar7 * (long)pplVar24);
      }
      *(long **)(plVar23[10] + (long)pplVar15 * 8) = plVar23 + 0xc;
      plVar19 = (long *)*plVar14;
      while (plVar19 != (long *)0x0) {
        pplVar17 = (long **)plVar19[1];
        if (((ulong)pplVar24 & uVar11) == 0) {
          pplVar17 = (long **)((ulong)pplVar17 & uVar11);
        }
        else if (pplVar24 <= pplVar17) {
          uVar7 = 0;
          if (pplVar24 != (long **)0x0) {
            uVar7 = (ulong)pplVar17 / (ulong)pplVar24;
          }
          pplVar17 = (long **)((long)pplVar17 - uVar7 * (long)pplVar24);
        }
        plVar16 = plVar19;
        if (pplVar17 != pplVar15) {
          lVar21 = plVar23[10];
          if (*(long *)(lVar21 + (long)pplVar17 * 8) == 0) {
            *(long **)(lVar21 + (long)pplVar17 * 8) = plVar14;
            pplVar15 = pplVar17;
          }
          else {
            *plVar14 = *plVar19;
            *plVar19 = **(undefined8 **)(lVar21 + (long)pplVar17 * 8);
            **(long **)(lVar21 + (long)pplVar17 * 8) = (long)plVar19;
            plVar16 = plVar14;
          }
        }
        plVar14 = plVar16;
        plVar19 = (long *)*plVar16;
      }
    }
  }
  else if (pplVar24 < pplVar22) {
    pplVar15 = (long **)(long)((float)(ulong)plVar23[0xd] / *(float *)(plVar23 + 0xe));
    if ((pplVar22 < (long **)0x3) || (((ulong)pplVar22 & (long)pplVar22 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long **)0x1 < pplVar15) {
      pplVar15 = (long **)(1L << (-LZCOUNT((long)pplVar15 + -1) & 0x3fU));
    }
    if (pplVar24 <= pplVar15) {
      pplVar24 = pplVar15;
    }
    if (pplVar24 < pplVar22) {
      if (pplVar24 != (long **)0x0) goto LAB_10a2591d8;
      lVar21 = plVar23[10];
      plVar23[10] = 0;
      if (lVar21 != 0) {
        __ZdlPv();
      }
      plVar23[0xb] = 0;
      pplVar22 = (long **)0x0;
    }
    else {
      pplVar22 = (long **)plVar23[0xb];
    }
  }
  if (((ulong)pplVar22 & (long)pplVar22 - 1U) == 0) {
    pplVar24 = (long **)(ulong)((int)pplVar22 - 1U & uVar1);
  }
  else {
    pplVar24 = pplVar18;
    if (pplVar22 <= pplVar18) {
      uVar11 = 0;
      if (pplVar22 != (long **)0x0) {
        uVar11 = (ulong)pplVar18 / (ulong)pplVar22;
      }
      pplVar24 = (long **)((long)pplVar18 - uVar11 * (long)pplVar22);
    }
  }
LAB_10a259354:
  lVar21 = plVar23[10];
  plVar14 = *(long **)(lVar21 + (long)pplVar24 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = plVar23 + 0xc;
    *plVar13 = *plVar14;
    *plVar14 = (long)plVar13;
    *(long **)(lVar21 + (long)pplVar24 * 8) = plVar14;
    if (*plVar13 != 0) {
      pplVar24 = *(long ***)(*plVar13 + 8);
      if (((ulong)pplVar22 & (long)pplVar22 - 1U) == 0) {
        pplVar24 = (long **)((ulong)pplVar24 & (long)pplVar22 - 1U);
      }
      else if (pplVar22 <= pplVar24) {
        uVar11 = 0;
        if (pplVar22 != (long **)0x0) {
          uVar11 = (ulong)pplVar24 / (ulong)pplVar22;
        }
        pplVar24 = (long **)((long)pplVar24 - uVar11 * (long)pplVar22);
      }
      *(long **)(plVar23[10] + (long)pplVar24 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar14;
    *plVar14 = (long)plVar13;
  }
  plVar23[0xd] = plVar23[0xd] + 1;
LAB_10a2593cc:
  if (plStack_88 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_88 + 1);
    do {
      uVar11 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar11 >> 0x21 == 1) {
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plStack_88 + 8))(plStack_88);
      }
    }
  }
  plVar23 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_90 + 1);
    do {
      uVar11 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar23 + 8))(plVar23);
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar23 = plVar3 + 1;
    do {
      lVar21 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return pplVar18;
}



/* Entry: 10a259680; end: 10a2596cb;  */

void FUN_10a259680(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  if ((param_2 >> 0x20 & 1) == 0) {
    return;
  }
  lVar14 = *(long *)(param_1 + 0x880);
  plVar5 = (long *)(lVar14 + 0x50);
  FUN_10a26c6bc();
  if (plVar5 == (long *)0x0) {
    return;
  }
  FUN_109d175b4(plVar5 + 3);
  uVar9 = *(ulong *)(lVar14 + 0x58);
  lVar7 = *plVar5;
  uVar8 = plVar5[1];
  uVar10 = uVar9 - 1;
  if ((uVar9 & uVar10) == 0) {
    uVar8 = uVar10 & uVar8;
  }
  else if (uVar9 <= uVar8) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar8 / uVar9;
    }
    uVar8 = uVar8 - uVar13 * uVar9;
  }
  lVar11 = *(long *)(lVar14 + 0x50);
  plVar6 = *(long **)(lVar11 + uVar8 * 8);
  do {
    plVar12 = plVar6;
    plVar6 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar5);
  if (plVar12 == (long *)(lVar14 + 0x60)) {
LAB_10a26c7dc:
    if (lVar7 == 0) {
LAB_10a26c80c:
      *(undefined8 *)(lVar11 + uVar8 * 8) = 0;
      lVar7 = *plVar5;
      goto LAB_10a26c814;
    }
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar9 & uVar10) == 0) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar9 <= uVar13) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar4 * uVar9;
    }
    if (uVar13 != uVar8) goto LAB_10a26c80c;
  }
  else {
    uVar13 = plVar12[1];
    if ((uVar9 & uVar10) == 0) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar9 <= uVar13) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar4 * uVar9;
    }
    if (uVar13 != uVar8) goto LAB_10a26c7dc;
LAB_10a26c814:
    if (lVar7 == 0) goto LAB_10a26c850;
  }
  uVar13 = *(ulong *)(lVar7 + 8);
  if ((uVar9 & uVar10) == 0) {
    uVar13 = uVar13 & uVar10;
  }
  else if (uVar9 <= uVar13) {
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = uVar13 / uVar9;
    }
    uVar13 = uVar13 - uVar10 * uVar9;
  }
  if (uVar13 != uVar8) {
    *(long **)(*(long *)(lVar14 + 0x50) + uVar13 * 8) = plVar12;
    lVar7 = *plVar5;
  }
LAB_10a26c850:
  *plVar12 = lVar7;
  *plVar5 = 0;
  *(long *)(lVar14 + 0x68) = *(long *)(lVar14 + 0x68) + -1;
  plVar6 = (long *)plVar5[3];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar8 >> 0x21 == 1) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 10a2596cc; end: 10a25974f;  */

undefined1  [16] FUN_10a2596cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f6489d5;
  return auVar1;
}



/* Entry: 10a259750; end: 10a259853;  */

void FUN_10a259750(undefined8 param_1)

{
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_b8 = &UNK_10f6478e9;
  puStack_b0 = &UNK_10f6478ee;
  puStack_a8 = &UNK_10f6478de;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_60 = 0x16c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  pcStack_c0 = FUN_10a258c48;
  ppuStack_a0 = &puStack_b8;
  FUN_10a259854(param_1,&puStack_a8,&pcStack_c0);
  puStack_a8 = &UNK_10f6478f4;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_60 = 0x16c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  pcStack_c0 = FUN_10a259680;
  puStack_b8 = &UNK_10f647901;
  ppuStack_a0 = &puStack_b8;
  func_0x00010a2598ac(param_1,&puStack_a8,&pcStack_c0);
  return;
}



/* Entry: 10a259854; end: 10a259903;  */

ulong FUN_10a259854(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a2848ac(param_1,*param_2,param_3);
  }
  return param_1;
}



/* Entry: 10a259904; end: 10a2599cf;  */

undefined8 * FUN_10a259904(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_21;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    param_1[4] = param_3[2];
    param_1[3] = uVar6;
    param_1[2] = uVar5;
  }
  FUN_10a05a5d4(param_1 + 5,&uStack_21);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  return param_1;
}



/* Entry: 10a2599d0; end: 10a259a23;  */

void FUN_10a2599d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  FUN_10a285258();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 1) == 0)) {
    FUN_10a0b4ec0(param_1 + 0x60,param_2);
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  return;
}



/* Entry: 10a259a24; end: 10a259e67;  */

/* WARNING: Removing unreachable block (ram,0x00010a259b44) */

void FUN_10a259a24(long *param_1,long **param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 ****ppppuVar5;
  code **ppcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x7;
  undefined8 ***pppuVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plStack_180;
  long *plStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 ***pppuStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  undefined8 **ppuStack_138;
  ulong uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [7];
  byte bStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_1 + 0xc;
  if (*plVar13 != param_1[0xd]) {
    puStack_148 = (undefined8 *)0x0;
    plStack_140 = (long *)0x0;
    plVar4 = (long *)param_1[1];
    if (((plVar4 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_140 = plVar4, plVar4 == (long *)0x0)) ||
       (puVar11 = (undefined8 *)*param_1, puStack_148 = puVar11, puVar11 == (undefined8 *)0x0)) {
      plVar4 = plStack_140;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        param_2 = (long **)0x4;
        func_0x00010ae06f08(1,4,&UNK_10f64790b,&UNK_10f647953,0x27,&UNK_10f64798f);
      }
    }
    else {
      pppuStack_a8 = (undefined8 ***)param_1[0xc];
      plStack_158 = (long *)param_1[0xd];
      pcStack_e8 = (code *)((ulong)pcStack_e8 & 0xffffffffffffff00);
      ppuStack_e0 = (undefined **)0x0;
      pppuStack_168 = (undefined8 ***)0x0;
      uStack_170 = 2;
      ppppuVar5 = &pppuStack_a8;
      FUN_10a285520(ppppuVar5,&plStack_158);
      ppcVar6 = &pcStack_e8;
      pppuStack_168 = ppppuVar5;
      func_0x00010945a80c(ppcVar6,"media");
      uStack_170 = *(undefined1 *)ppcVar6;
      *(undefined1 *)ppcVar6 = 2;
      pppuVar9 = (undefined8 ***)ppcVar6[1];
      ppcVar6[1] = (code *)pppuStack_168;
      pppuStack_168 = pppuVar9;
      func_0x000109380ffc(&pppuStack_168);
      FUN_10a0c32e4(&pppuStack_a8,&pcStack_e8,0xffffffff,0x20,0,0);
      ppppuVar5 = (undefined8 ****)pppuStack_a8;
      if (-1 < (char)bStack_91) {
        uStack_a0 = (ulong)bStack_91;
        ppppuVar5 = &pppuStack_a8;
      }
      FUN_10a3bf330(&ppuStack_138,ppppuVar5,uStack_a0);
      func_0x000109380ffc(&ppuStack_e0,(ulong)pcStack_e8 & 0xff);
      FUN_10a259e68(&uStack_170,param_1[5]);
      plVar7 = (long *)0x138;
      __Znwm();
      pppuStack_a8 = (undefined8 ***)ppuStack_138;
      plVar12 = plVar7 + 1;
      *plVar12 = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110b9f3b0;
      plVar4 = plVar7 + 3;
      ppuStack_138 = (undefined8 ***)0x0;
      uStack_a0 = uStack_130;
      (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
      uStack_60 = uStack_f0;
      uVar1 = param_1[3];
      plVar8 = (long *)param_1[2];
      if (-1 < (char)*(byte *)((long)param_1 + 0x27)) {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x27);
        plVar8 = param_1 + 2;
      }
      pcStack_e8 = FUN_10a28533c;
      ppuStack_e0 = &PTR_FUN_110bb7750;
      uStack_d8 = CONCAT71(uStack_16f,uStack_170);
      uStack_c8 = uStack_160;
      ppuStack_d0 = pppuStack_168;
      pppuStack_168 = (undefined8 ***)0x0;
      uStack_160 = 0;
      FUN_10a23708c(plVar4,&UNK_10f6479d0,0x2b,&UNK_10f647b49,4,&pppuStack_a8,1,in_x7,plVar8,uVar1,
                    &pcStack_e8);
      (*(code *)*ppuStack_e0)(&ppuStack_e0);
      FUN_10a042634(&pppuStack_a8);
      plStack_158 = plVar4;
      plStack_150 = plVar7;
      FUN_10a259f0c(&uStack_170);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_2 = &plStack_180;
      plStack_180 = plVar4;
      plStack_178 = plVar7;
      (**(code **)*puVar11)(puVar11);
      plVar4 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar8 = plStack_178 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        plVar8 = plStack_150 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      FUN_10a042634(&ppuStack_138);
      plVar4 = plStack_140;
    }
    FUN_10a042718();
    param_1 = plVar13;
    if (plVar4 != (long *)0x0) {
      plVar13 = plVar4 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_180);
  FUN_10a05bd88(&plStack_158);
  FUN_10a042634(&ppuStack_138);
  func_0x00010a05a8c4(&puStack_148);
  __Unwind_Resume();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar8 = (long *)0x48;
  __Znwm();
  plVar13 = param_2[0xb];
  plVar4 = param_2[0xc];
  *plVar8 = (long)(param_2 + 10);
  plVar8[1] = (long)plVar13;
  plVar8[2] = (long)&PTR_FUN_110bb6cb0;
  *plVar13 = (long)plVar8;
  param_2[0xb] = plVar8;
  param_2[0xc] = (long *)((long)plVar4 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  plVar4 = param_2[1];
  plVar13 = *param_2;
  if (param_2[1] != (long *)0x0) {
    plVar7 = param_2[1] + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)plVar8;
  param_1[2] = (long)plVar4;
  param_1[1] = (long)plVar13;
  return;
}



/* Entry: 10a259e68; end: 10a259f0b;  */

void FUN_10a259e68(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)&PTR_FUN_110bb6cb0;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a259f0c; end: 10a259f8b;  */

undefined8 * FUN_10a259f0c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a259f8c; end: 10a25a017;  */

void FUN_10a259f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined1 *apuStack_58 [3];
  
  plVar2 = (long *)0xc8;
  __Znwm();
  lVar3 = param_1;
  func_0x0001098ba4f0(param_1,param_3,param_4);
  FUN_10a289644(plVar2,param_2,lVar3);
  lVar3 = param_1 + 0x30;
  func_0x0001098bbfb0(lVar3,&stack0xffffffffffffffc8);
  if (lVar3 == 0) {
    apuStack_58[0] = &stack0xffffffffffffffc8;
    func_0x0001098bbb14(param_1 + 0x30,&stack0xffffffffffffffc8,&UNK_10dd5b8f9,apuStack_58,
                        &stack0xffffffffffffffd8);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f5864bd,&UNK_10f586536,0x22,&UNK_10f5865a6,param_7,param_8,
                          &UNK_10f5865c9,&UNK_10f5865d2,&UNK_10e4a7b05);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    return;
  }
  func_0x00010b0ae4b8(apuStack_58,&UNK_10f58648f,0x2d);
  func_0x000105687ee0(apuStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098ba3c4);
  (*pcVar1)();
}



/* Entry: 10a25a018; end: 10a25a05f;  */

long FUN_10a25a018(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  (*(code *)**(undefined8 **)(param_1 + 0x68))();
  (*(code *)**(undefined8 **)(param_1 + 0x28))();
  func_0x00010a26dc64(param_1 + 0x10,0);
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



/* Entry: 10a25a060; end: 10a25af33;  */

undefined8 FUN_10a25a060(int *param_1,long param_2,long *param_3)

{
  long *****ppppplVar1;
  int *piVar2;
  ulong uVar3;
  ulong *puVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  undefined **ppuVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  bool bVar21;
  long ****pppplVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long ****pppplStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  long ****pppplStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long ****pppplStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long ****pppplStack_e0;
  long *plStack_d8;
  undefined7 uStack_d0;
  char cStack_c9;
  long *plStack_c8;
  long ****pppplStack_c0;
  long *plStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  long lStack_78;
  
  piVar12 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((param_3 == (long *)0x0) || ((char)param_1[0x168] != '\x01')) {
    uVar20 = 0;
    iVar11 = (int)piVar12;
    goto LAB_10a25aa18;
  }
  lVar18 = 2;
  (**(code **)(*param_3 + 0x68))(param_3);
  plVar17 = param_3;
  FUN_10a25af34();
  if (((ulong)plVar17 & 1) == 0) {
    iVar11 = (int)param_1 + 0x5b0;
    FUN_10a25afb4();
  }
  else {
    plVar17 = param_3;
    FUN_10a1ed130();
    plVar25 = param_3;
    do {
      plVar19 = plVar25;
      plVar25 = (long *)plVar19[0x13];
    } while ((long *)plVar19[0x13] != (long *)0x0);
    plVar25 = *(long **)(param_1 + 0x21a);
    bVar9 = plVar25 == plVar19;
    if (!bVar9) {
      *(long **)(param_1 + 0x21a) = plVar19;
    }
    plVar13 = plVar19;
    (**(code **)(*plVar19 + 0x38))();
    if ((lVar18 == 0x1c) &&
       (((*plVar13 == 0x72656469766f7250 && plVar13[1] == 0x786554656c69462e) &&
        plVar13[2] == 0x766f725065727574) && (int)plVar13[3] == 0x72656469)) {
      (**(code **)(*param_3 + 0x90))(&ppplStack_b0,param_3);
      bVar21 = false;
      pppplVar22 = &ppplStack_b0;
      uVar24 = 0;
      plVar13 = (long *)(param_1 + 0x21c);
      do {
        lVar18 = 0;
        do {
          fVar27 = ABS(*(float *)((long)plVar13 + lVar18) - *(float *)((long)pppplVar22 + lVar18));
          bVar10 = lVar18 != 8;
          lVar18 = lVar18 + 4;
        } while (fVar27 <= 9.536743e-07 && bVar10);
        if (9.536743e-07 < fVar27) break;
        uVar3 = uVar24 + 1;
        bVar21 = 1 < uVar24;
        plVar13 = (long *)((long)plVar13 + 0xc);
        pppplVar22 = (long ****)((long)pppplVar22 + 0xc);
        uVar24 = uVar3;
      } while (uVar3 != 3);
      if (!bVar21) {
        bVar9 = false;
        *(long ****)(param_1 + 0x21e) = ppplStack_a8;
        *(long ****)(param_1 + 0x21c) = ppplStack_b0;
        *(long *)(param_1 + 0x222) = lStack_98;
        *(undefined8 *)(param_1 + 0x220) = uStack_a0;
        param_1[0x224] = (int)lStack_90;
      }
    }
    else {
      bVar9 = false;
    }
    if (plVar25 != plVar19) {
      lVar26 = plVar17[1];
      lVar18 = *plVar17;
      lVar28 = plVar17[2];
      lVar30 = plVar17[5];
      lVar29 = plVar17[4];
      *(long *)(param_1 + 0x200) = plVar17[3];
      *(long *)(param_1 + 0x1fe) = lVar28;
      *(long *)(param_1 + 0x204) = lVar30;
      *(long *)(param_1 + 0x202) = lVar29;
      *(long *)(param_1 + 0x1fc) = lVar26;
      *(long *)(param_1 + 0x1fa) = lVar18;
      lVar26 = plVar17[7];
      lVar18 = plVar17[6];
      lVar29 = plVar17[9];
      lVar28 = plVar17[8];
      lVar31 = plVar17[0xb];
      lVar30 = plVar17[10];
      uVar20 = *(undefined8 *)((long)plVar17 + 0x5c);
      *(undefined8 *)(param_1 + 0x213) = *(undefined8 *)((long)plVar17 + 100);
      *(undefined8 *)(param_1 + 0x211) = uVar20;
      *(long *)(param_1 + 0x20c) = lVar29;
      *(long *)(param_1 + 0x20a) = lVar28;
      *(long *)(param_1 + 0x210) = lVar31;
      *(long *)(param_1 + 0x20e) = lVar30;
      *(long *)(param_1 + 0x208) = lVar26;
      *(long *)(param_1 + 0x206) = lVar18;
      FUN_10a22b858(param_1 + 0x216,plVar17 + 0xe);
      func_0x0001098b7d14(&pppplStack_120,param_1 + 0x23c);
      FUN_109d1a244(&pppplStack_120);
      if ((((uint)pppplStack_120[2] >> 1 & 1) == 0) || (((uint)pppplStack_120[2] >> 5 & 1) != 0)) {
        if (((uint)pppplStack_120[2] >> 5 & 1) == 0) {
          puVar23 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar23 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar23,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(&ppplStack_b0,pppplStack_120 + 0x12);
          func_0x0001092af97c(&ppplStack_b0);
        }
        goto LAB_10a25ace8;
      }
      if ((long *****)pppplStack_120 != (long *****)0x0) {
        ppppplVar1 = (long *****)(pppplStack_120 + 1);
        do {
          pppplVar22 = *ppppplVar1;
          cVar7 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
          if (bVar21) {
            *ppppplVar1 = (long ****)((long)pppplVar22 + -4);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (((ulong)pppplVar22 & 0x1fffffffc) == 4) {
          do {
            pppplVar22 = *ppppplVar1;
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(ppppplVar1,0x10);
            if (bVar21) {
              *ppppplVar1 = (long ****)((long)pppplVar22 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((long ****)((long)pppplVar22 + -1) == (long ****)0x0) {
            (*(code *)(*pppplStack_120)[1])();
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 0x168) & 1) == 0) goto LAB_10a25ace8;
    lStack_78 = *(long *)(*(long *)(param_1 + 0x23e) + 0x210) + 0x68;
    ppplStack_a8 = (long ***)0x0;
    ppplStack_b0 = (long ***)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    bStack_80 = 0;
    piVar15 = param_1 + 0x240;
    piVar2 = param_1 + 0x298;
    bVar5 = *(byte *)(param_1 + 0x48);
    if ((*(byte *)(param_1 + 0x270) & bVar5) == 0) {
      if (bVar5 != *(byte *)(param_1 + 0x270)) {
        if (bVar5 == 0) goto LAB_10a25a32c;
LAB_10a25a280:
        FUN_10a28fbb8(param_1 + 0x242,param_1 + 0x1a);
        FUN_10ae03140(0,&UNK_10e4a7b05,0x24);
        ppuVar16 = &PTR_PTR_113300eb0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
        iVar11 = *piVar15;
        if (iVar11 == 0) {
          FUN_10a28fc60(&pppplStack_120,piVar15,piVar2);
          pppplVar22 = &ppplStack_b0;
          func_0x0001098aff74(pppplVar22,&pppplStack_120);
          *piVar15 = (int)pppplVar22;
        }
        else {
          FUN_10a28fc60(&pppplStack_120,piVar15,piVar2);
          func_0x0001098b0114(&ppplStack_b0,iVar11,&pppplStack_120);
        }
        if ((long *****)pppplStack_120 != (long *****)0x0) {
          (*(code *)(*pppplStack_120)[1])();
        }
      }
    }
    else {
      piVar14 = param_1 + 0x1a;
      FUN_10a28a860(piVar14,param_1 + 0x242);
      if (((ulong)piVar14 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x48) & 1) != 0) goto LAB_10a25a280;
LAB_10a25a32c:
        func_0x00010a28590c(piVar15,&ppplStack_b0);
      }
    }
    piVar15 = param_1 + 0x280;
    bVar5 = *(byte *)(param_1 + 0xb0);
    if ((*(byte *)(param_1 + 0x288) & bVar5) == 0) {
      if (bVar5 != *(byte *)(param_1 + 0x288)) {
        if (bVar5 == 0) goto LAB_10a25a4cc;
LAB_10a25a434:
        FUN_10a290e60(param_1 + 0x282,param_1 + 0xaa);
        FUN_10ae03140(0,&UNK_10e4a7ae5,0x1f);
        ppuVar16 = &PTR_PTR_113300eb0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
        iVar11 = *piVar15;
        if (iVar11 == 0) {
          FUN_10a290f00(&pppplStack_120,piVar15,piVar2);
          pppplVar22 = &ppplStack_b0;
          func_0x0001098aff74(pppplVar22,&pppplStack_120);
          *piVar15 = (int)pppplVar22;
        }
        else {
          FUN_10a290f00(&pppplStack_120,piVar15,piVar2);
          func_0x0001098b0114(&ppplStack_b0,iVar11,&pppplStack_120);
        }
        if ((long *****)pppplStack_120 != (long *****)0x0) {
          (*(code *)(*pppplStack_120)[1])();
        }
      }
    }
    else {
      piVar14 = param_1 + 0xaa;
      func_0x00010aacffc4(piVar14,param_1 + 0x282);
      if (((ulong)piVar14 & 1) == 0) {
        if ((*(byte *)(param_1 + 0xb0) & 1) != 0) goto LAB_10a25a434;
LAB_10a25a4cc:
        func_0x00010a2859a8(piVar15,&ppplStack_b0);
      }
    }
    piVar15 = param_1 + 0x272;
    bVar5 = *(byte *)(param_1 + 0x82);
    bVar6 = *(byte *)(param_1 + 0x27e);
    if ((bVar6 & bVar5) == 0) {
      if (bVar5 != bVar6) {
        if (bVar5 == 0) goto LAB_10a25a620;
        if (bVar6 == 0) goto LAB_10a25a584;
LAB_10a25a554:
        param_1[0x27c] = param_1[0x80];
        FUN_10a2916cc(param_1 + 0x274,*(undefined8 *)(param_1 + 0x7c),0);
LAB_10a25a598:
        FUN_10ae03140(0,&UNK_10e4a698d,0x1d);
        ppuVar16 = &PTR_PTR_113300eb0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
        iVar11 = *piVar15;
        if (iVar11 == 0) {
          FUN_10a291644(&pppplStack_140,piVar15,piVar2);
          pppplVar22 = &ppplStack_b0;
          func_0x0001098aff74(pppplVar22,&pppplStack_140);
          *piVar15 = (int)pppplVar22;
          ppppplVar1 = (long *****)pppplStack_140;
        }
        else {
          FUN_10a291644(&pppplStack_120,piVar15,piVar2);
          func_0x0001098b0114(&ppplStack_b0,iVar11,&pppplStack_120);
          ppppplVar1 = (long *****)pppplStack_120;
        }
        if (ppppplVar1 != (long *****)0x0) {
          (*(code *)(*ppppplVar1)[1])();
        }
      }
    }
    else {
      piVar14 = param_1 + 0x78;
      FUN_10a28beec(piVar14,param_1 + 0x274);
      if (((ulong)piVar14 & 1) == 0) {
        if ((char)param_1[0x82] == '\x01') {
          if ((*(byte *)(param_1 + 0x27e) & 1) != 0) goto LAB_10a25a554;
LAB_10a25a584:
          FUN_10a22ec14(param_1 + 0x274,param_1 + 0x78);
          *(undefined1 *)(param_1 + 0x27e) = 1;
          goto LAB_10a25a598;
        }
LAB_10a25a620:
        func_0x00010a285950(piVar15,&ppplStack_b0);
      }
    }
    piVar15 = param_1 + 0x6c;
    FUN_10a2927e0(piVar15,param_1 + 0x28c);
    if ((int)piVar15 != 0) {
      piVar15 = param_1 + 0x28a;
      if ((char)param_1[0x76] == '\x01') {
        FUN_10a292840(param_1 + 0x28c,param_1 + 0x6c);
        FUN_10ae03140(0,&UNK_10e4a6e3c,0x2c);
        ppuVar16 = &PTR_PTR_113300eb0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
        iVar11 = *piVar15;
        if (iVar11 == 0) {
          FUN_10a2928a0(&pppplStack_120,piVar15,piVar2);
          pppplVar22 = &ppplStack_b0;
          func_0x0001098aff74(pppplVar22,&pppplStack_120);
          *piVar15 = (int)pppplVar22;
        }
        else {
          FUN_10a2928a0(&pppplStack_120,piVar15,piVar2);
          func_0x0001098b0114(&ppplStack_b0,iVar11,&pppplStack_120);
        }
        if ((long *****)pppplStack_120 != (long *****)0x0) {
          (*(code *)(*pppplStack_120)[1])();
        }
      }
      else {
        func_0x00010a285a08(piVar15,&ppplStack_b0);
      }
    }
    bVar9 = (bool)(bVar9 ^ 1);
    if (*param_1 == 0) {
      bVar9 = true;
    }
    if ((((bVar9) || (ppplStack_b0 != ppplStack_a8)) || (lStack_98 != lStack_90)) ||
       ((bStack_80 & 1) != 0)) {
      FUN_10a25afb4(param_1 + 0x16c);
      FUN_10a25afe4(param_1 + 0x23e,&ppplStack_b0);
      if (5 < (ulong)*(byte *)(param_2 + 0x29)) goto LAB_10a25ace8;
      FUN_10aba1534(&pppplStack_c0,
                    *(undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0x29) * 8 + 0x30),param_3,0
                   );
      *param_1 = *param_1 + 1;
      pppplStack_120 = pppplStack_c0;
      uStack_110 = 0;
      plStack_118 = plVar17;
      FUN_10a25b1f0(&plStack_c8,param_1 + 0x23c,
                    (long)(*(double *)(*(long *)(param_2 + 0x850) + 8) * 1000000000.0),
                    &pppplStack_120);
      iVar11 = (int)&plStack_c8;
      FUN_109d1a244();
      if ((((uint)plStack_c8[2] >> 1 & 1) == 0) || (((uint)plStack_c8[2] >> 5 & 1) != 0)) {
        if (((uint)plStack_c8[2] >> 5 & 1) == 0) {
          puVar23 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar23 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar23,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(&pppplStack_120,plStack_c8 + 0x12);
          func_0x0001092af97c(&pppplStack_120);
        }
        goto LAB_10a25ace8;
      }
      FUN_10ad055a0();
      if (iVar11 != 0) {
        ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar16 == (undefined *)0x0) {
          ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar17 = (long *)*ppuVar16;
          if ((plVar17 == (long *)0x0) || ((**(code **)(*plVar17 + 0x18))(), plVar17 == (long *)0x0)
             ) goto LAB_10a25a85c;
          plVar17 = plVar17 + 7;
        }
        else {
          plVar17 = (long *)(*ppuVar16 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar17 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&pppplStack_e0,&UNK_10f647a0a);
          lVar18 = *(long *)(param_2 + 0x100);
          if (*(char *)(lVar18 + 0x21f) < '\0') {
            func_0x000107c3192c(&pppplStack_100,*(undefined8 *)(lVar18 + 0x208),
                                *(undefined8 *)(lVar18 + 0x210));
          }
          else {
            lStack_f8 = *(long *)(lVar18 + 0x210);
            pppplStack_100 = *(long *****)(lVar18 + 0x208);
            uStack_f0 = *(long *)(lVar18 + 0x218);
          }
          if (cStack_c9 < '\0') {
            pppplStack_120 = (long ****)"null";
            if (plStack_d8 != (long *)0x0) {
              pppplStack_120 = pppplStack_e0;
            }
          }
          else {
            pppplStack_120 = (long ****)"null";
            if (cStack_c9 != '\0') {
              pppplStack_120 = (long ****)&pppplStack_e0;
            }
          }
          if (uStack_f0 < 0) {
            pppplStack_140 = (long ****)"null";
            if (lStack_f8 != 0) {
              pppplStack_140 = pppplStack_100;
            }
          }
          else {
            pppplStack_140 = (long ****)"null";
            if (uStack_f0._7_1_ != '\0') {
              pppplStack_140 = (long ****)&pppplStack_100;
            }
          }
          FUN_10a224324(&pppplStack_120,&pppplStack_140);
          if (cStack_c9 < '\0') {
            if (plStack_d8 != (long *)0x0) {
              func_0x000107c3192c(&pppplStack_120,pppplStack_e0);
              goto LAB_10a25ac8c;
            }
LAB_10a25ac70:
            uStack_108 = 0;
            pppplStack_120 = (long ****)((ulong)pppplStack_120 & 0xffffffffffffff00);
          }
          else {
            if (cStack_c9 == '\0') goto LAB_10a25ac70;
            plStack_118 = plStack_d8;
            pppplStack_120 = pppplStack_e0;
            uStack_110 = CONCAT17(cStack_c9,uStack_d0);
LAB_10a25ac8c:
            uStack_108 = 1;
          }
          if (uStack_f0 < 0) {
            if (lStack_f8 != 0) {
              func_0x000107c3192c(&pppplStack_140,pppplStack_100);
              goto LAB_10a25acd4;
            }
LAB_10a25acb8:
            uStack_128 = 0;
            pppplStack_140 = (long ****)((ulong)pppplStack_140 & 0xffffffffffffff00);
          }
          else {
            if (uStack_f0._7_1_ == '\0') goto LAB_10a25acb8;
            lStack_138 = lStack_f8;
            pppplStack_140 = pppplStack_100;
            lStack_130 = uStack_f0;
LAB_10a25acd4:
            uStack_128 = 1;
          }
          FUN_10a234a0c(&pppplStack_120,&pppplStack_140);
          goto LAB_10a25ace8;
        }
      }
LAB_10a25a85c:
      if ((*(byte *)(param_1 + 0x1f6) & 1) == 0) {
LAB_10a25ace8:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a25acec);
        (*pcVar8)();
      }
      pppplStack_140 = (long ****)0x0;
      puVar23 = *(undefined8 **)(param_1 + 0x298);
      if (puVar23 == (undefined8 *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *puVar23;
        *puVar23 = 0;
        piVar2[0] = 0;
        piVar2[1] = 0;
      }
      plVar17 = *(long **)(param_1 + 0x186);
      *(undefined8 *)(param_1 + 0x186) = uVar20;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      puVar23 = *(undefined8 **)(param_1 + 0x29c);
      if (puVar23 == (undefined8 *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *puVar23;
        *puVar23 = 0;
        param_1[0x29c] = 0;
        param_1[0x29d] = 0;
      }
      pppplStack_120 = (long ****)0x0;
      func_0x00010a2914e4(param_1 + 0x18a,uVar20);
      func_0x00010a2914e4(&pppplStack_120,0);
      plVar17 = (long *)(param_1 + 0x1ae);
      plVar25 = *(long **)(param_1 + 0x29a);
      if (plVar25 == (long *)0x0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *plVar25;
        *plVar25 = 0;
        param_1[0x29a] = 0;
        param_1[0x29b] = 0;
      }
      plVar25 = (long *)*plVar17;
      *plVar17 = lVar18;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 8))();
      }
      pppplStack_e0 = (long ****)0x0;
      FUN_10a4d7658(plVar17,&pppplStack_e0);
      if ((long *****)pppplStack_e0 != (long *****)0x0) {
        (*(code *)(*pppplStack_e0)[1])();
      }
      puVar23 = *(undefined8 **)(param_1 + 0x29e);
      if (puVar23 == (undefined8 *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *puVar23;
        *puVar23 = 0;
        param_1[0x29e] = 0;
        param_1[0x29f] = 0;
      }
      pppplStack_120 = (long ****)0x0;
      func_0x00010a293674(param_1 + 0x1b0,uVar20);
      func_0x00010a293674(&pppplStack_120,0);
      pppplVar22 = pppplStack_140;
      pppplStack_140 = (long ****)0x0;
      if (pppplVar22 != (long ****)0x0) {
        FUN_10a2938c4(&pppplStack_140);
      }
      if (plStack_c8 != (long *)0x0) {
        puVar4 = (ulong *)(plStack_c8 + 1);
        do {
          uVar24 = *puVar4;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar9) {
            *puVar4 = uVar24 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar24 & 0x1fffffffc) == 4) {
          do {
            uVar24 = *puVar4;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar9) {
              *puVar4 = uVar24 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar24 - 1 == 0) {
            (**(code **)(*plStack_c8 + 8))();
          }
        }
      }
      if (plStack_b8 != (long *)0x0) {
        plVar17 = plStack_b8 + 1;
        do {
          lVar18 = *plVar17;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar9) {
            *plVar17 = lVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
    }
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    pppplStack_120 = &ppplStack_b0;
    iVar11 = (int)&pppplStack_120;
    FUN_10a26dd18();
  }
  uVar20 = 1;
LAB_10a25aa18:
  __ZSt19uncaught_exceptionsv();
  if ((int)piVar12 < iVar11) {
    param_1[0x29e] = 0;
    param_1[0x29f] = 0;
    param_1[0x29c] = 0;
    param_1[0x29d] = 0;
    param_1[0x29a] = 0;
    param_1[0x29b] = 0;
    param_1[0x298] = 0;
    param_1[0x299] = 0;
  }
  if ((char)param_1[0x168] == '\x01') {
    func_0x00010a231e08(param_1 + 4);
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  return uVar20;
}



/* Entry: 10a25af34; end: 10a25afb3;  */

bool FUN_10a25af34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1;
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return false;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xb0))(param_1);
  (**(code **)(*param_1 + 0xb8))(param_1);
  return ((ulong)plVar2 & 0xffffffff | (long)param_1 << 0x20) != 0x100000001;
}



/* Entry: 10a25afb4; end: 10a25afe3;  */

void FUN_10a25afb4(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    func_0x00010a4c60cc();
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_10a4c5ae8();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 10a25afe4; end: 10a25b1ef;  */

void FUN_10a25afe4(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long *plStack_28;
  
  if (((*param_2 == param_2[1]) && (param_2[3] == param_2[4])) &&
     ((*(byte *)(param_2 + 6) & 1) == 0)) {
    return;
  }
  func_0x0001098b0f24(&plStack_28,param_1);
  if (((uint)plStack_28[2] >> 1 & 1) == 0) {
    func_0x00010a2937dc(auStack_58,*param_1);
    FUN_10a012db0(auStack_40,auStack_58,&UNK_10f649633);
    FUN_10a0029c0(auStack_40);
  }
  else {
    if ((((uint)plStack_28[2] >> 1 & 1) != 0) && (((uint)plStack_28[2] >> 5 & 1) == 0)) {
      if (plStack_28 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plStack_28 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) != 4) {
        return;
      }
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 != 0) {
        return;
      }
      (**(code **)(*plStack_28 + 8))();
      return;
    }
    if (((uint)plStack_28[2] >> 5 & 1) == 0) {
      puVar5 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar5 = &PTR_DAT_110ae85c0;
      ___cxa_throw(puVar5,&PTR_DAT_110ae8598,&DAT_1092af9d8);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_40,plStack_28 + 0x12);
      func_0x0001092af97c(auStack_40);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25b148);
  (*pcVar4)();
}



/* Entry: 10a25b1f0; end: 10a25b29b;  */

void FUN_10a25b1f0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined **ppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  long *plVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = param_3[1];
  uStack_58 = *param_3;
  uStack_48 = param_3[2];
  pcStack_68 = FUN_10a293810;
  ppuStack_60 = &PTR_FUN_110bbaa10;
  func_0x0001098b7eb4(param_1,param_2,&pcStack_68);
  pppuVar6 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  pppuVar14 = pppuVar6;
  FUN_10a25b420();
  if ((int)pppuVar14 != 0) {
    lVar13 = param_2 + 0xd48;
    FUN_10a5aeb74(lVar13,&PTR_DAT_110c4f048);
    if (*(long *)(lVar13 + 8) != lVar13) {
      FUN_10a25b4c0(pppuVar6,param_2);
      pppuVar14 = (undefined ***)*pppuVar6;
      do {
        while( true ) {
          if (pppuVar14 == pppuVar6 + 1) {
            param_2 = param_2 + 0xd48;
            FUN_10a5aeb74(param_2,&PTR_DAT_110b99f08);
            lVar13 = *(long *)(param_2 + 8);
            if (lVar13 != param_2) {
              pppuVar6 = pppuVar6 + 1;
              do {
                plVar11 = *(long **)(lVar13 + 0x28);
                lVar13 = *(long *)(lVar13 + 8);
                FUN_10a25c87c(&ppuStack_c0,plVar11);
                if ((ppuStack_c0 != (undefined **)0x0) &&
                   (pppuVar10 = (undefined ***)*pppuVar6, pppuVar14 = pppuVar6,
                   pppuVar10 != (undefined ***)0x0)) {
                  do {
                    lVar1 = 8;
                    if (ppuStack_b8 <= pppuVar10[5]) {
                      lVar1 = 0;
                      pppuVar14 = pppuVar10;
                    }
                    pppuVar10 = *(undefined ****)((long)pppuVar10 + lVar1);
                  } while (pppuVar10 != (undefined ***)0x0);
                  if ((pppuVar14 != pppuVar6) && (pppuVar14[5] <= ppuStack_b8)) {
                    if (((ulong)pppuVar14[6][0xfb] & 1) == 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25c868);
                      (*pcVar4)();
                    }
                    (**(code **)(*plVar11 + 0x28))(plVar11,pppuVar14[6] + 0xb6);
                  }
                }
                ppuVar8 = ppuStack_b8;
                if (ppuStack_b8 != (undefined **)0x0) {
                  ppuVar7 = ppuStack_b8 + 1;
                  do {
                    puVar9 = *ppuVar7;
                    cVar2 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                    if (bVar5) {
                      *ppuVar7 = puVar9 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (puVar9 == (undefined *)0x0) {
                    (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
                  }
                }
              } while (lVar13 != param_2);
            }
            return;
          }
          ppuStack_c0 = (undefined **)0x0;
          ppuStack_b8 = (undefined **)0x0;
          ppuVar8 = pppuVar14[5];
          ppuVar7 = pppuVar14[6];
          if ((ppuVar8 == (undefined **)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_b8 = ppuVar8,
             ppuVar8 == (undefined **)0x0)) {
            ppuVar8 = (undefined **)0x0;
          }
          else {
            ppuVar8 = pppuVar14[4];
            ppuStack_c0 = ppuVar8;
          }
          ppuVar3 = ppuStack_b8;
          FUN_10a25a060(ppuVar7,param_2,ppuVar8);
          if (ppuVar3 == (undefined **)0x0) break;
          ppuVar8 = ppuVar3 + 1;
          do {
            puVar9 = *ppuVar8;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar5) {
              *ppuVar8 = puVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar9 != (undefined *)0x0) break;
          (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar3);
          if (((ulong)ppuVar7 & 1) == 0) goto LAB_10a25b3a8;
LAB_10a25b35c:
          pppuVar10 = (undefined ***)pppuVar14[1];
          pppuVar12 = pppuVar14;
          if ((undefined ***)pppuVar14[1] == (undefined ***)0x0) {
            do {
              pppuVar14 = (undefined ***)pppuVar12[2];
              bVar5 = (undefined ***)*pppuVar14 != pppuVar12;
              pppuVar12 = pppuVar14;
            } while (bVar5);
          }
          else {
            do {
              pppuVar14 = pppuVar10;
              pppuVar10 = (undefined ***)*pppuVar14;
            } while ((undefined ***)*pppuVar14 != (undefined ***)0x0);
          }
        }
        if (((ulong)ppuVar7 & 1) != 0) goto LAB_10a25b35c;
LAB_10a25b3a8:
        pppuVar10 = pppuVar6;
        func_0x00010a2938fc(pppuVar6,pppuVar14);
        func_0x00010a2856fc(pppuVar14 + 4);
        __ZdlPv(pppuVar14);
        pppuVar14 = pppuVar10;
      } while( true );
    }
  }
  return;
}



/* Entry: 10a25b29c; end: 10a25b41f;  */

void FUN_10a25b29c(long *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_50;
  long *plStack_48;
  
  plVar9 = param_1;
  FUN_10a25b420();
  if ((int)plVar9 != 0) {
    lVar6 = param_2 + 0xd48;
    FUN_10a5aeb74(lVar6,&PTR_DAT_110c4f048);
    if (*(long *)(lVar6 + 8) != lVar6) {
      FUN_10a25b4c0(param_1,param_2);
      plVar9 = (long *)*param_1;
      do {
        while( true ) {
          if (plVar9 == param_1 + 1) {
            param_2 = param_2 + 0xd48;
            FUN_10a5aeb74(param_2,&PTR_DAT_110b99f08);
            lVar6 = *(long *)(param_2 + 8);
            if (lVar6 != param_2) {
              param_1 = param_1 + 1;
              do {
                plVar9 = *(long **)(lVar6 + 0x28);
                lVar6 = *(long *)(lVar6 + 8);
                FUN_10a25c87c(&lStack_50,plVar9);
                if ((lStack_50 != 0) &&
                   (plVar8 = (long *)*param_1, plVar4 = param_1, plVar8 != (long *)0x0)) {
                  do {
                    lVar7 = 8;
                    if (plStack_48 <= (long *)plVar8[5]) {
                      lVar7 = 0;
                      plVar4 = plVar8;
                    }
                    plVar8 = *(long **)((long)plVar8 + lVar7);
                  } while (plVar8 != (long *)0x0);
                  if ((plVar4 != param_1) && ((long *)plVar4[5] <= plStack_48)) {
                    if ((*(byte *)(plVar4[6] + 0x7d8) & 1) == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a25c868);
                      (*pcVar2)();
                    }
                    (**(code **)(*plVar9 + 0x28))(plVar9,plVar4[6] + 0x5b0);
                  }
                }
                plVar9 = plStack_48;
                if (plStack_48 != (long *)0x0) {
                  plVar4 = plStack_48 + 1;
                  do {
                    lVar7 = *plVar4;
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar3) {
                      *plVar4 = lVar7 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar7 == 0) {
                    (**(code **)(*plStack_48 + 0x10))(plStack_48);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                  }
                }
              } while (lVar6 != param_2);
            }
            return;
          }
          lStack_50 = 0;
          plStack_48 = (long *)0x0;
          plVar4 = (long *)plVar9[5];
          uVar5 = plVar9[6];
          if ((plVar4 == (long *)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0))
          {
            lVar6 = 0;
          }
          else {
            lVar6 = plVar9[4];
            lStack_50 = lVar6;
          }
          plVar4 = plStack_48;
          FUN_10a25a060(uVar5,param_2,lVar6);
          if (plVar4 == (long *)0x0) break;
          plVar8 = plVar4 + 1;
          do {
            lVar6 = *plVar8;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 != 0) break;
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          if ((uVar5 & 1) == 0) goto LAB_10a25b3a8;
LAB_10a25b35c:
          plVar4 = (long *)plVar9[1];
          plVar8 = plVar9;
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar8[2];
              bVar3 = (long *)*plVar9 != plVar8;
              plVar8 = plVar9;
            } while (bVar3);
          }
          else {
            do {
              plVar9 = plVar4;
              plVar4 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        if ((uVar5 & 1) != 0) goto LAB_10a25b35c;
LAB_10a25b3a8:
        plVar4 = param_1;
        func_0x00010a2938fc(param_1,plVar9);
        func_0x00010a2856fc(plVar9 + 4);
        __ZdlPv(plVar9);
        plVar9 = plVar4;
      } while( true );
    }
  }
  return;
}



/* Entry: 10a25b420; end: 10a25b4bf;  */

undefined ** FUN_10a25b420(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  byte bVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long *plVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_768;
  undefined8 **ppuStack_760;
  undefined **ppuStack_758;
  undefined1 **ppuStack_750;
  code *pcStack_748;
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  long lStack_720;
  long *plStack_718;
  undefined **ppuStack_710;
  long lStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long *plStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  long lStack_680;
  long *plStack_678;
  long lStack_670;
  long *plStack_668;
  long lStack_660;
  long *plStack_658;
  undefined2 uStack_650;
  long lStack_648;
  long *plStack_640;
  long lStack_638;
  long *plStack_630;
  long *plStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined **ppuStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  undefined **ppuStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 uStack_588;
  undefined *puStack_580;
  undefined **ppuStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined4 *puStack_540;
  undefined8 uStack_530;
  undefined **ppuStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined **ppuStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined **ppuStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined **ppuStack_390;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 *puStack_278;
  code *pcStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined **appuStack_1d8 [7];
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **appuStack_190 [7];
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined **appuStack_140 [7];
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **appuStack_f8 [7];
  undefined4 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_40;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar8 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_20 = &UNK_10f63b699;
  uStack_18 = 0x28;
  if (*ppuVar8 != (undefined *)0x0) {
    plStack_30 = (long *)(*ppuVar8 + 0x10);
    if ((*plStack_30 != 0) && (lRam0000000113300e38 != -1)) {
      ppuStack_28 = &puStack_20;
      puStack_20 = (undefined *)&plStack_30;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113300e38,&ppuStack_28,FUN_10a26dd98);
    }
    return (undefined **)(ulong)(bRam0000000113300e30 & 1);
  }
  ppuVar8 = &puStack_20;
  FUN_10a0edfc4();
  pcStack_38 = FUN_10a25b4c0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = &PTR_DAT_110b99f08;
  ppuVar6 = (undefined **)(param_2 + 0xd48);
  lStack_708 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a5aeb74();
  ppuVar20 = (undefined **)ppuVar6[1];
  if (ppuVar20 != ppuVar6) {
    ppuStack_728 = ppuVar8 + 1;
    ppuVar19 = ppuVar6;
    ppuStack_738 = ppuVar8;
    ppuStack_730 = ppuVar6;
    do {
      ppuVar21 = (undefined **)ppuVar20[5];
      ppuVar13 = ppuVar21;
      FUN_10a25c87c(&ppuStack_6e0);
      ppuVar6 = ppuStack_6e0;
      if (ppuStack_6e0 != (undefined **)0x0) {
        ppuVar13 = (undefined **)0x2;
        (**(code **)(*ppuStack_6e0 + 0x68))();
        ppuVar6 = ppuStack_6e0;
        FUN_10a25af34();
        ppuVar17 = ppuStack_6d8;
        if (((ulong)ppuVar6 & 1) != 0) {
          ppuStack_6f8 = ppuStack_6d8;
          ppuStack_700 = ppuStack_6e0;
          unaff_x24 = ppuStack_728;
          if (ppuStack_6d8 != (undefined **)0x0) {
            ppuVar13 = ppuStack_6d8 + 2;
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
              if (bVar5) {
                *ppuVar13 = *ppuVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          while (ppuVar6 = (undefined **)*unaff_x24, ppuVar13 = unaff_x24, ppuStack_6e8 = ppuVar20,
                (undefined **)*unaff_x24 != (undefined **)0x0) {
            while (unaff_x24 = ppuVar6, unaff_x24[5] <= ppuStack_6d8) {
              if (ppuStack_6d8 <= unaff_x24[5]) {
                ppuVar19 = ppuStack_730;
                ppuVar6 = ppuVar21;
                ppuVar21 = unaff_x24;
                if (ppuStack_6d8 != (undefined **)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_6d8);
                  ppuVar19 = ppuStack_730;
                  ppuVar20 = ppuStack_6e8;
                }
                goto LAB_10a25c250;
              }
              ppuVar6 = (undefined **)unaff_x24[1];
              if ((undefined **)unaff_x24[1] == (undefined **)0x0) {
                ppuVar13 = unaff_x24 + 1;
                goto LAB_10a25b5c0;
              }
            }
          }
LAB_10a25b5c0:
          ppuVar20 = (undefined **)0x38;
          __Znwm();
          uStack_6b8 = 0;
          ppuVar20[5] = (undefined *)ppuStack_6f8;
          ppuVar20[4] = (undefined *)ppuStack_700;
          lVar23 = *(long *)(lStack_708 + 0x100);
          plVar7 = *(long **)(lVar23 + 0x1c8);
          ppuStack_6c8 = ppuVar20;
          ppuStack_6c0 = ppuVar8;
          (**(code **)(*plVar7 + 0x128))();
          plStack_618 = (long *)0x0;
          ppuStack_610 = (undefined **)0x0;
          ppuVar8 = (undefined **)plVar7[1];
          if ((ppuVar8 == (undefined **)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_610 = ppuVar8,
             ppuVar8 == (undefined **)0x0)) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)*plVar7;
            plStack_618 = plVar7;
          }
          ppuVar8 = ppuStack_6e0;
          FUN_10a1ed130();
          if (plVar7 == (long *)0x0) {
            ppuVar6 = ppuVar8;
            FUN_10a102184();
            plVar7 = (long *)ppuVar6[9];
            puVar11 = (undefined8 *)0xd0;
            __Znwm();
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = &PTR_DAT_110ae90f0;
            plStack_398 = (long *)&UNK_1053a6a3c;
            ppuStack_390 = &PTR_DAT_110ae9180;
            plStack_3a0 = plVar7;
            func_0x000109d18d1c(puVar11 + 3,&UNK_10f64964f,0x15,&plStack_3a0);
            func_0x0001092ba41c(&plStack_3a0);
            plStack_678 = (long *)0x0;
            lStack_680 = 0;
            plStack_668 = (long *)0x0;
            lStack_670 = 0;
            plStack_658 = (long *)0x0;
            lStack_660 = 0;
            uStack_650 = 1;
            lStack_648 = 0;
            plStack_640 = (long *)0x0;
            puStack_690 = puVar11 + 3;
            plStack_688 = puVar11;
            FUN_10ad008d8(&lStack_638);
          }
          else {
            plStack_688 = (long *)plVar7[1];
            puStack_690 = (undefined8 *)*plVar7;
            if (plVar7[1] != 0) {
              plVar9 = (long *)(plVar7[1] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plStack_678 = (long *)plVar7[3];
            lStack_680 = plVar7[2];
            if (plVar7[3] != 0) {
              plVar9 = (long *)(plVar7[3] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lStack_670 = 0;
            plStack_668 = (long *)0x0;
            plStack_658 = (long *)plVar7[7];
            lStack_660 = plVar7[6];
            if (plVar7[7] != 0) {
              plVar9 = (long *)(plVar7[7] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uStack_650 = 1;
            lStack_648 = 0;
            plStack_640 = (long *)0x0;
            plStack_630 = (long *)plVar7[0xc];
            lStack_638 = plVar7[0xb];
            if (plVar7[0xc] != 0) {
              plVar7 = (long *)(plVar7[0xc] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = *plVar7 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          plVar9 = (long *)0x80;
          ppuStack_710 = ppuVar21;
          __Znwm();
          plVar7 = plStack_640;
          lVar3 = lStack_648;
          plVar22 = plVar9 + 1;
          *plVar22 = 0;
          plVar9[2] = 0;
          *plVar9 = (long)&PTR_FUN_110bb7a18;
          plStack_718 = plVar9 + 3;
          plVar9[4] = (long)plStack_688;
          *plStack_718 = (long)puStack_690;
          puStack_690 = (undefined8 *)0x0;
          plStack_688 = (long *)0x0;
          plVar9[6] = (long)plStack_678;
          plVar9[5] = lStack_680;
          lStack_680 = 0;
          plStack_678 = (long *)0x0;
          plVar9[8] = (long)plStack_668;
          plVar9[7] = lStack_670;
          lStack_670 = 0;
          plStack_668 = (long *)0x0;
          plVar9[10] = (long)plStack_658;
          plVar9[9] = lStack_660;
          lStack_660 = 0;
          plStack_658 = (long *)0x0;
          *(undefined2 *)(plVar9 + 0xb) = uStack_650;
          lStack_648 = 0;
          plStack_640 = (long *)0x0;
          plVar9[0xd] = (long)plVar7;
          plVar9[0xc] = lVar3;
          plVar9[0xf] = (long)plStack_630;
          plVar9[0xe] = lStack_638;
          lStack_638 = 0;
          plStack_630 = (long *)0x0;
          uVar1 = *(undefined8 *)(lVar23 + 0x10);
          lVar23 = *(long *)(lVar23 + 0x18);
          if (lVar23 != 0) {
            plVar7 = (long *)(lVar23 + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = *plVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_6b0 = 0;
          plStack_6a8 = (long *)0x0;
          uStack_6a0 = 0;
          uStack_698 = 0;
          puStack_5c8 = &UNK_109896774;
          ppuStack_5c0 = &PTR_DAT_110b17068;
          puVar10 = (undefined4 *)0xa80;
          ppuStack_700 = ppuVar20;
          plStack_628 = plStack_718;
          plStack_620 = plVar9;
          uStack_5d0 = uVar1;
          uStack_5b8 = uVar1;
          lStack_5b0 = lVar23;
          __Znwm();
          puStack_580 = &UNK_109896774;
          ppuStack_578 = &PTR_DAT_110b17068;
          uStack_5b8 = 0;
          lStack_5b0 = 0;
          puStack_5c8 = &UNK_1053a6a3c;
          ppuStack_5c0 = &PTR_DAT_110ae9180;
          *puVar10 = 0;
          *(undefined1 *)(puVar10 + 4) = 0;
          *(undefined1 *)(puVar10 + 0x168) = 0;
          *(undefined1 *)(puVar10 + 0x16c) = 0;
          *(undefined1 *)(puVar10 + 0x1f6) = 0;
          *(undefined8 *)(puVar10 + 0x1f8) = 0;
          puVar24 = ppuVar8[1];
          puVar16 = *ppuVar8;
          puVar25 = ppuVar8[2];
          puVar27 = ppuVar8[5];
          puVar26 = ppuVar8[4];
          *(undefined **)(puVar10 + 0x200) = ppuVar8[3];
          *(undefined **)(puVar10 + 0x1fe) = puVar25;
          *(undefined **)(puVar10 + 0x204) = puVar27;
          *(undefined **)(puVar10 + 0x202) = puVar26;
          *(undefined **)(puVar10 + 0x1fc) = puVar24;
          *(undefined **)(puVar10 + 0x1fa) = puVar16;
          puVar24 = ppuVar8[7];
          puVar16 = ppuVar8[6];
          puVar26 = ppuVar8[9];
          puVar25 = ppuVar8[8];
          puVar28 = ppuVar8[0xb];
          puVar27 = ppuVar8[10];
          uVar29 = *(undefined8 *)((long)ppuVar8 + 0x5c);
          *(undefined8 *)(puVar10 + 0x213) = *(undefined8 *)((long)ppuVar8 + 100);
          *(undefined8 *)(puVar10 + 0x211) = uVar29;
          *(undefined **)(puVar10 + 0x20c) = puVar26;
          *(undefined **)(puVar10 + 0x20a) = puVar25;
          *(undefined **)(puVar10 + 0x210) = puVar28;
          *(undefined **)(puVar10 + 0x20e) = puVar27;
          *(undefined **)(puVar10 + 0x208) = puVar24;
          *(undefined **)(puVar10 + 0x206) = puVar16;
          *(undefined **)(puVar10 + 0x216) = ppuVar8[0xe];
          puVar16 = ppuVar8[0xf];
          *(undefined **)(puVar10 + 0x218) = puVar16;
          if (puVar16 != (undefined *)0x0) {
            plVar7 = (long *)(puVar16 + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = *plVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined8 *)(puVar10 + 0x21a) = 0;
          puVar10[0x224] = 0x3f800000;
          *(undefined8 *)(puVar10 + 0x21e) = 0;
          *(undefined8 *)(puVar10 + 0x21c) = 0x3f800000;
          *(undefined8 *)(puVar10 + 0x222) = 0;
          *(undefined8 *)(puVar10 + 0x220) = 0x3f800000;
          uStack_588 = uVar1;
          uStack_570 = uVar1;
          lStack_568 = lVar23;
          func_0x0001098b9e94(puVar10 + 0x226);
          func_0x000107c2b054(&uStack_608,&UNK_10f6479fc);
          appuStack_1d8[0] = &PTR_DAT_110ae9180;
          uStack_1e8 = uStack_588;
          puStack_1e0 = puStack_580;
          (*(code *)ppuStack_578[2])(appuStack_1d8,&ppuStack_578);
          puStack_580 = &UNK_1053a6a3c;
          (*(code *)*ppuStack_578)(&ppuStack_578);
          ppuStack_578 = &PTR_DAT_110ae9180;
          ppuStack_1a0 = &PTR_PTR_1132fed50;
          puStack_198 = &UNK_1053a6a3c;
          appuStack_190[0] = &PTR_DAT_110ae9180;
          uStack_158 = 0;
          uStack_250 = 0;
          uStack_258 = 0;
          uStack_240 = 0;
          uStack_248 = 0;
          uStack_230 = 0;
          uStack_238 = 0;
          pcStack_268 = FUN_10a26dc34;
          uStack_210 = 0;
          uStack_218 = 0;
          uStack_200 = 0;
          uStack_208 = 0;
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          ppuStack_260 = &PTR_DAT_110ae9180;
          puStack_228 = &UNK_1098ba5f4;
          ppuStack_220 = &PTR_DAT_110ae9180;
          uStack_5e8 = uStack_600;
          uStack_5f0 = uStack_608;
          lStack_5e0 = lStack_5f8;
          uStack_608 = 0;
          uStack_600 = 0;
          lStack_5f8 = 0;
          appuStack_140[0] = &PTR_DAT_110ae9180;
          uStack_150 = uStack_1e8;
          puStack_148 = puStack_1e0;
          puStack_278 = puVar10 + 0x1f8;
          (*(code *)appuStack_1d8[0][2])(appuStack_140,appuStack_1d8);
          puStack_1e0 = &UNK_1053a6a3c;
          (*(code *)*appuStack_1d8[0])(appuStack_1d8);
          appuStack_1d8[0] = &PTR_DAT_110ae9180;
          appuStack_f8[0] = &PTR_DAT_110ae9180;
          ppuStack_108 = ppuStack_1a0;
          puStack_100 = puStack_198;
          (*(code *)appuStack_190[0][2])(appuStack_f8,appuStack_190);
          puStack_198 = &UNK_1053a6a3c;
          (*(code *)*appuStack_190[0])(appuStack_190);
          appuStack_190[0] = &PTR_DAT_110ae9180;
          uStack_c0 = uStack_158;
          func_0x0001098ba404(puVar10 + 0x226,&uStack_5f0,&uStack_150,puVar10 + 0x226);
          uVar18 = (*(long *)(puVar10 + 0x230) + *(long *)(puVar10 + 0x22e)) - 1;
          lStack_720 = *(long *)(*(long *)(puVar10 + 0x228) + (uVar18 >> 4) * 8);
          func_0x0001092ba41c(&ppuStack_108);
          func_0x0001092ba41c(&uStack_150);
          if (lStack_5e0 < 0) {
            __ZdlPv(uStack_5f0);
          }
          puVar11 = (undefined8 *)0xb8;
          __Znwm();
          ppuVar8 = ppuStack_220;
          *(undefined1 *)(puVar11 + 2) = 0;
          *puVar11 = &PTR_FUN_110bb6cd8;
          if (((ulong)ppuStack_220[1] & 1) == 0) {
            puVar11[3] = 0;
            puVar11[4] = 0;
          }
          else {
            puVar12 = (undefined8 *)0x58;
            __Znwm();
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = &PTR_FUN_110bb9cf8;
            puVar12[3] = puStack_228;
            (*(code *)ppuVar8[2])(puVar12 + 4,&ppuStack_220);
            puVar11[3] = puVar12 + 3;
            puVar11[4] = puVar12;
          }
          lVar23 = lStack_720 + (uVar18 & 0xf) * 0x668;
          puVar11[5] = puStack_278;
          puVar11[7] = pcStack_268;
          (*(code *)ppuStack_260[2])(puVar11 + 8,&ppuStack_260);
          puVar11[0xf] = puStack_228;
          (*(code *)ppuStack_220[2])(puVar11 + 0x10,&ppuStack_220);
          puVar11[1] = lVar23;
          *(undefined1 *)(puVar11 + 2) = 1;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a670f,0x2b,puVar11);
          *(long *)(puVar10 + 0x23c) = lVar23;
          (*(code *)*ppuStack_220)(&ppuStack_220);
          (*(code *)*ppuStack_260)(&ppuStack_260);
          func_0x0001092ba41c(&ppuStack_1a0);
          func_0x0001092ba41c(&uStack_1e8);
          if (lStack_5f8 < 0) {
            __ZdlPv(uStack_608);
          }
          *(undefined8 **)(puVar10 + 0x23e) = *(undefined8 **)(puVar10 + 0x23c) + 2;
          *(undefined8 *)(puVar10 + 0x242) = 0;
          *(undefined8 *)(puVar10 + 0x240) = 0;
          *(undefined8 *)(puVar10 + 0x246) = 0;
          *(undefined8 *)(puVar10 + 0x244) = 0;
          *(undefined8 *)(puVar10 + 0x24a) = 0;
          *(undefined8 *)(puVar10 + 0x248) = 0;
          *(undefined8 *)(puVar10 + 0x24e) = 0;
          *(undefined8 *)(puVar10 + 0x24c) = 0;
          *(undefined8 *)(puVar10 + 0x252) = 0;
          *(undefined8 *)(puVar10 + 0x250) = 0;
          *(undefined8 *)(puVar10 + 0x256) = 0;
          *(undefined8 *)(puVar10 + 0x254) = 0;
          *(undefined8 *)(puVar10 + 0x25a) = 0;
          *(undefined8 *)(puVar10 + 600) = 0;
          *(undefined8 *)(puVar10 + 0x25e) = 0;
          *(undefined8 *)(puVar10 + 0x25c) = 0;
          *(undefined8 *)(puVar10 + 0x262) = 0;
          *(undefined8 *)(puVar10 + 0x260) = 0;
          *(undefined8 *)(puVar10 + 0x266) = 0;
          *(undefined8 *)(puVar10 + 0x264) = 0;
          *(undefined8 *)(puVar10 + 0x26a) = 0;
          *(undefined8 *)(puVar10 + 0x268) = 0;
          *(undefined8 *)(puVar10 + 0x26e) = 0;
          *(undefined8 *)(puVar10 + 0x26c) = 0;
          *(undefined8 *)(puVar10 + 0x272) = 0;
          *(undefined8 *)(puVar10 + 0x270) = 0;
          *(undefined8 *)(puVar10 + 0x276) = 0;
          *(undefined8 *)(puVar10 + 0x274) = 0;
          *(undefined8 *)(puVar10 + 0x27a) = 0;
          *(undefined8 *)(puVar10 + 0x278) = 0;
          *(undefined8 *)(puVar10 + 0x27e) = 0;
          *(undefined8 *)(puVar10 + 0x27c) = 0;
          *(undefined8 *)(puVar10 + 0x282) = 0;
          *(undefined8 *)(puVar10 + 0x280) = 0;
          *(undefined8 *)(puVar10 + 0x286) = 0;
          *(undefined8 *)(puVar10 + 0x284) = 0;
          *(undefined8 *)(puVar10 + 0x28a) = 0;
          *(undefined8 *)(puVar10 + 0x288) = 0;
          *(undefined8 *)(puVar10 + 0x28e) = 0;
          *(undefined8 *)(puVar10 + 0x28c) = 0;
          *(undefined8 *)(puVar10 + 0x292) = 0;
          *(undefined8 *)(puVar10 + 0x290) = 0;
          *(undefined8 *)(puVar10 + 0x296) = 0;
          *(undefined8 *)(puVar10 + 0x294) = 0;
          *(undefined8 *)(puVar10 + 0x29a) = 0;
          *(undefined8 *)(puVar10 + 0x298) = 0;
          *(undefined8 *)(puVar10 + 0x29e) = 0;
          *(undefined8 *)(puVar10 + 0x29c) = 0;
          **(undefined8 **)(puVar10 + 0x23c) = 0x100000001;
          uStack_2c0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_2e8 = 0;
          uStack_2f8 = 0x10a26dc44;
          ppuStack_2f0 = &PTR_DAT_110ae9180;
          uStack_2a0 = 0;
          uStack_2a8 = 0;
          uStack_290 = 0;
          uStack_298 = 0;
          uStack_280 = 0;
          uStack_288 = 0;
          puStack_2b8 = &UNK_1098ba5f4;
          ppuStack_2b0 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb0;
          __Znwm();
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[6] = 0x10a26dc44;
          puVar11[7] = &PTR_DAT_110ae9180;
          puVar11[0xe] = &UNK_1098ba5f4;
          puVar11[0xf] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_DAT_110bb7778;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a7ac1,0x23,puVar11);
          (*(code *)*ppuStack_2b0)(&ppuStack_2b0);
          (*(code *)*ppuStack_2f0)(&ppuStack_2f0);
          plStack_3a0 = plStack_718;
          do {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar5) {
              *plVar22 = *plVar22 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uStack_368 = 0;
          uStack_370 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          uStack_350 = 0;
          ppuStack_390 = (undefined **)0x0;
          uStack_380 = 0x10a26dc54;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          ppuStack_378 = &PTR_DAT_110ae9180;
          puStack_340 = &UNK_1098ba5f4;
          ppuStack_338 = &PTR_DAT_110ae9180;
          plStack_398 = plVar9;
          FUN_10a259f8c(puVar10 + 0x226,&plStack_3a0,0,0);
          ppuVar6 = ppuStack_710;
          (*(code *)*ppuStack_338)(&ppuStack_338);
          (*(code *)*ppuStack_378)(&ppuStack_378);
          ppuVar8 = ppuStack_390;
          ppuStack_390 = (undefined **)0x0;
          if (ppuVar8 != (undefined **)0x0) {
            FUN_10aac7268();
            __ZdlPv();
          }
          plVar7 = plStack_398;
          if (plStack_398 != (long *)0x0) {
            plVar9 = plStack_398 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_398 + 0x10))(plStack_398);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_3f8 = 0;
          uStack_400 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
          uStack_420 = 0x10a26dc8c;
          ppuStack_418 = &PTR_DAT_110ae9180;
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          puStack_3e0 = &UNK_1098ba5f4;
          ppuStack_3d8 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb0;
          __Znwm();
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[6] = 0x10a26dc8c;
          puVar11[7] = &PTR_DAT_110ae9180;
          puVar11[0xe] = &UNK_1098ba5f4;
          puVar11[0xf] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_FUN_110bb77e8;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a698d,0x1d,puVar11);
          (*(code *)*ppuStack_3d8)(&ppuStack_3d8);
          (*(code *)*ppuStack_418)(&ppuStack_418);
          uStack_470 = 0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          uStack_498 = 0;
          uStack_4a8 = 0x10a26dc9c;
          ppuStack_4a0 = &PTR_DAT_110ae9180;
          uStack_450 = 0;
          uStack_458 = 0;
          uStack_440 = 0;
          uStack_448 = 0;
          uStack_430 = 0;
          uStack_438 = 0;
          puStack_468 = &UNK_1098ba5f4;
          ppuStack_460 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb0;
          __Znwm();
          ppuVar8 = ppuStack_738;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[6] = 0x10a26dc9c;
          puVar11[7] = &PTR_DAT_110ae9180;
          puVar11[0xe] = &UNK_1098ba5f4;
          puVar11[0xf] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_FUN_110bb7828;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a7ae5,0x1f,puVar11);
          (*(code *)*ppuStack_460)(&ppuStack_460);
          (*(code *)*ppuStack_4a0)(&ppuStack_4a0);
          uStack_518 = 0;
          uStack_520 = 0;
          uStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          uStack_500 = 0;
          uStack_530 = 0x10a26dcac;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          ppuStack_528 = &PTR_DAT_110ae9180;
          puStack_4f0 = &UNK_1098ba5f4;
          ppuStack_4e8 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb8;
          puStack_540 = puVar10;
          __Znwm();
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = puVar10;
          puVar11[7] = 0x10a26dcac;
          puVar11[8] = &PTR_DAT_110ae9180;
          puVar11[0xf] = &UNK_1098ba5f4;
          puVar11[0x10] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_FUN_110bb7868;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a6e3c,0x2c,puVar11);
          (*(code *)*ppuStack_4e8)(&ppuStack_4e8);
          (*(code *)*ppuStack_528)(&ppuStack_528);
          ppuStack_700[6] = (undefined *)puVar10;
          func_0x0001092ba41c(&uStack_588);
          func_0x0001092ba41c(&uStack_5d0);
          plVar7 = plStack_6a8;
          if (plStack_6a8 != (long *)0x0) {
            plVar9 = plStack_6a8 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_620;
          if (plStack_620 != (long *)0x0) {
            plVar9 = plStack_620 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_620 + 0x10))(plStack_620);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_630;
          if (plStack_630 != (long *)0x0) {
            plVar9 = plStack_630 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_630 + 0x10))(plStack_630);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_640;
          if (plStack_640 != (long *)0x0) {
            plVar9 = plStack_640 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_640 + 0x10))(plStack_640);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_658;
          if (plStack_658 != (long *)0x0) {
            plVar9 = plStack_658 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_658 + 0x10))(plStack_658);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_668;
          if (plStack_668 != (long *)0x0) {
            plVar9 = plStack_668 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_668 + 0x10))(plStack_668);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_678;
          if (plStack_678 != (long *)0x0) {
            plVar9 = plStack_678 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_678 + 0x10))(plStack_678);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_688;
          if (plStack_688 != (long *)0x0) {
            plVar9 = plStack_688 + 1;
            do {
              lVar23 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar23 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_688 + 0x10))(plStack_688);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          ppuVar17 = ppuStack_610;
          if (ppuStack_610 != (undefined **)0x0) {
            ppuVar20 = ppuStack_610 + 1;
            do {
              puVar16 = *ppuVar20;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
              if (bVar5) {
                *ppuVar20 = puVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar16 == (undefined *)0x0) {
              (**(code **)(*ppuStack_610 + 0x10))(ppuStack_610);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
            }
          }
          ppuVar21 = ppuStack_6c8;
          ppuVar20 = ppuStack_6e8;
          ppuVar19 = ppuStack_730;
          uStack_6b8 = CONCAT71(uStack_6b8._1_7_,1);
          *ppuStack_6c8 = (undefined *)0x0;
          ppuStack_6c8[1] = (undefined *)0x0;
          ppuStack_6c8[2] = (undefined *)unaff_x24;
          *ppuVar13 = (undefined *)ppuStack_6c8;
          ppuVar14 = ppuStack_6c8;
          if (*(undefined **)*ppuVar8 != (undefined *)0x0) {
            *ppuVar8 = *(undefined **)*ppuVar8;
            ppuVar14 = (undefined **)*ppuVar13;
          }
          func_0x000107c2b058(ppuVar8[1],ppuVar14);
          ppuVar8[2] = ppuVar8[2] + 1;
LAB_10a25c250:
          puVar16 = ppuVar21[6];
          if ((puVar16[0x5a0] & 1) == 0) {
            FUN_10a4ca448(puVar16 + 0x10);
            puVar16[0x5a0] = 1;
          }
          ppuVar13 = (undefined **)(puVar16 + 0x10);
          (**(code **)(*ppuVar6 + 0x20))();
          unaff_x23 = ppuVar17;
        }
      }
      ppuVar21 = ppuStack_6d8;
      if (ppuStack_6d8 != (undefined **)0x0) {
        ppuVar17 = ppuStack_6d8 + 1;
        do {
          puVar16 = *ppuVar17;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar5) {
            *ppuVar17 = puVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar16 == (undefined *)0x0) {
          (**(code **)(*ppuStack_6d8 + 0x10))(ppuStack_6d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar21;
        }
      }
      ppuVar20 = (undefined **)ppuVar20[1];
    } while (ppuVar20 != ppuVar19);
  }
  ppuVar19 = (undefined **)*ppuVar8;
  if (ppuVar19 != ppuVar8 + 1) {
    ppuVar20 = (undefined **)0x113300b40;
    do {
      puVar16 = ppuVar19[6];
      if ((puVar16[0x5a0] == '\x01') && (puVar16[0x120] == '\x01')) {
        if (*(int *)(*(long *)(lStack_708 + 0xa20) + 0x18) < 0x14b) {
          ppuVar6 = ppuVar20;
          FUN_10a08f69c();
          if (((puVar16[0x5a0] & 1) == 0) || ((puVar16[0x120] & 1) == 0)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25c3ac);
            (*pcVar4)();
          }
          bVar15 = *(byte *)ppuVar6;
        }
        else {
          bVar15 = 1;
        }
        puVar16[0x100] = bVar15 & 1;
      }
      ppuVar21 = (undefined **)ppuVar19[1];
      ppuVar17 = ppuVar19;
      if ((undefined **)ppuVar19[1] == (undefined **)0x0) {
        do {
          ppuVar19 = (undefined **)ppuVar17[2];
          bVar5 = (undefined **)*ppuVar19 != ppuVar17;
          ppuVar17 = ppuVar19;
        } while (bVar5);
      }
      else {
        do {
          ppuVar19 = ppuVar21;
          ppuVar21 = (undefined **)*ppuVar19;
        } while ((undefined **)*ppuVar19 != (undefined **)0x0);
      }
    } while (ppuVar19 != ppuVar8 + 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010a2355e8(&lStack_648);
  func_0x00010a23495c(&lStack_660);
  func_0x00010a235590(&lStack_670);
  func_0x00010a235538(&lStack_680);
  func_0x00010a06e274(&puStack_690);
  func_0x00010a23575c(&plStack_618);
  if (ppuVar20[5] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a293a30(&ppuStack_6c8);
  FUN_10a05b1b0(&ppuStack_6e0);
  __Unwind_Resume();
  pcStack_748 = FUN_10a25c74c;
  ppuVar13 = ppuVar13 + 0x1a9;
  ppuStack_780 = unaff_x24;
  ppuStack_778 = unaff_x23;
  ppuStack_768 = ppuVar20;
  ppuStack_760 = &puStack_690;
  ppuStack_758 = ppuVar20 + 5;
  ppuStack_750 = &puStack_40;
  FUN_10a5aeb74(ppuVar13,&PTR_DAT_110b99f08);
  ppuVar20 = (undefined **)ppuVar13[1];
  ppuVar8 = ppuVar13;
  if (ppuVar20 != ppuVar13) {
    ppuVar6 = ppuVar6 + 1;
    do {
      ppuVar19 = (undefined **)ppuVar20[5];
      ppuVar20 = (undefined **)ppuVar20[1];
      ppuVar8 = &puStack_790;
      FUN_10a25c87c(&puStack_790,ppuVar19);
      if ((puStack_790 != (undefined *)0x0) &&
         (ppuVar17 = (undefined **)*ppuVar6, ppuVar21 = ppuVar6, ppuVar17 != (undefined **)0x0)) {
        do {
          lVar23 = 8;
          if (ppuStack_788 <= ppuVar17[5]) {
            lVar23 = 0;
            ppuVar21 = ppuVar17;
          }
          ppuVar17 = *(undefined ***)((long)ppuVar17 + lVar23);
        } while (ppuVar17 != (undefined **)0x0);
        if ((ppuVar21 != ppuVar6) && (ppuVar21[5] <= ppuStack_788)) {
          if ((ppuVar21[6][0x7d8] & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25c868);
            (*pcVar4)();
          }
          (**(code **)(*ppuVar19 + 0x28))(ppuVar19,ppuVar21[6] + 0x5b0);
          ppuVar8 = ppuVar19;
        }
      }
      ppuVar19 = ppuStack_788;
      if (ppuStack_788 != (undefined **)0x0) {
        ppuVar21 = ppuStack_788 + 1;
        do {
          puVar16 = *ppuVar21;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar5) {
            *ppuVar21 = puVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar16 == (undefined *)0x0) {
          (**(code **)(*ppuStack_788 + 0x10))(ppuStack_788);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
          ppuVar8 = ppuVar19;
        }
      }
    } while (ppuVar20 != ppuVar13);
  }
  return ppuVar8;
}



/* Entry: 10a25b4c0; end: 10a25c74b;  */

void FUN_10a25b4c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  byte bVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **unaff_x23;
  undefined **ppuVar21;
  undefined **unaff_x24;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  long lStack_760;
  long *plStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_738;
  undefined8 **ppuStack_730;
  undefined **ppuStack_728;
  undefined1 *puStack_720;
  code *pcStack_718;
  long *plStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  long lStack_6f0;
  long *plStack_6e8;
  undefined **ppuStack_6e0;
  long lStack_6d8;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  long *plStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 *puStack_660;
  long *plStack_658;
  long lStack_650;
  long *plStack_648;
  long lStack_640;
  long *plStack_638;
  long lStack_630;
  long *plStack_628;
  undefined2 uStack_620;
  long lStack_618;
  long *plStack_610;
  long lStack_608;
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  undefined **ppuStack_590;
  undefined8 uStack_588;
  long lStack_580;
  undefined8 uStack_558;
  undefined *puStack_550;
  undefined **ppuStack_548;
  undefined8 uStack_540;
  long lStack_538;
  undefined4 *puStack_510;
  undefined8 uStack_500;
  undefined **ppuStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined **ppuStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined **ppuStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined8 uStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_248;
  code *pcStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined **appuStack_1a8 [7];
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **appuStack_160 [7];
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined **appuStack_110 [7];
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **appuStack_c8 [7];
  undefined4 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = &PTR_DAT_110b99f08;
  ppuVar7 = (undefined **)(param_2 + 0xd48);
  lStack_6d8 = param_2;
  FUN_10a5aeb74();
  ppuVar19 = (undefined **)ppuVar7[1];
  if (ppuVar19 != ppuVar7) {
    ppuStack_6f8 = (undefined **)(param_1 + 1);
    ppuVar8 = ppuVar7;
    plStack_708 = param_1;
    ppuStack_700 = ppuVar7;
    do {
      ppuVar20 = (undefined **)ppuVar19[5];
      ppuVar13 = ppuVar20;
      FUN_10a25c87c(&ppuStack_6b0);
      ppuVar7 = ppuStack_6b0;
      if (ppuStack_6b0 != (undefined **)0x0) {
        ppuVar13 = (undefined **)0x2;
        (**(code **)(*ppuStack_6b0 + 0x68))();
        ppuVar7 = ppuStack_6b0;
        FUN_10a25af34();
        ppuVar21 = ppuStack_6a8;
        if (((ulong)ppuVar7 & 1) != 0) {
          ppuStack_6c8 = ppuStack_6a8;
          ppuStack_6d0 = ppuStack_6b0;
          unaff_x24 = ppuStack_6f8;
          if (ppuStack_6a8 != (undefined **)0x0) {
            ppuVar13 = ppuStack_6a8 + 2;
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
              if (bVar5) {
                *ppuVar13 = *ppuVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          while (ppuVar7 = (undefined **)*unaff_x24, ppuVar13 = unaff_x24, ppuStack_6b8 = ppuVar19,
                (undefined **)*unaff_x24 != (undefined **)0x0) {
            while (unaff_x24 = ppuVar7, unaff_x24[5] <= ppuStack_6a8) {
              if (ppuStack_6a8 <= unaff_x24[5]) {
                ppuVar8 = ppuStack_700;
                ppuVar7 = ppuVar20;
                ppuVar20 = unaff_x24;
                if (ppuStack_6a8 != (undefined **)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_6a8);
                  ppuVar8 = ppuStack_700;
                  ppuVar19 = ppuStack_6b8;
                }
                goto LAB_10a25c250;
              }
              ppuVar7 = (undefined **)unaff_x24[1];
              if ((undefined **)unaff_x24[1] == (undefined **)0x0) {
                ppuVar13 = unaff_x24 + 1;
                goto LAB_10a25b5c0;
              }
            }
          }
LAB_10a25b5c0:
          ppuVar19 = (undefined **)0x38;
          __Znwm();
          uStack_688 = 0;
          ppuVar19[5] = (undefined *)ppuStack_6c8;
          ppuVar19[4] = (undefined *)ppuStack_6d0;
          lVar22 = *(long *)(lStack_6d8 + 0x100);
          plVar6 = *(long **)(lVar22 + 0x1c8);
          ppuStack_698 = ppuVar19;
          plStack_690 = param_1;
          (**(code **)(*plVar6 + 0x128))();
          plStack_5e8 = (long *)0x0;
          ppuStack_5e0 = (undefined **)0x0;
          ppuVar7 = (undefined **)plVar6[1];
          if ((ppuVar7 == (undefined **)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_5e0 = ppuVar7,
             ppuVar7 == (undefined **)0x0)) {
            plVar6 = (long *)0x0;
          }
          else {
            plVar6 = (long *)*plVar6;
            plStack_5e8 = plVar6;
          }
          ppuVar7 = ppuStack_6b0;
          FUN_10a1ed130();
          if (plVar6 == (long *)0x0) {
            ppuVar8 = ppuVar7;
            FUN_10a102184();
            plVar6 = (long *)ppuVar8[9];
            puVar11 = (undefined8 *)0xd0;
            __Znwm();
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = &PTR_DAT_110ae90f0;
            plStack_368 = (long *)&UNK_1053a6a3c;
            ppuStack_360 = &PTR_DAT_110ae9180;
            plStack_370 = plVar6;
            func_0x000109d18d1c(puVar11 + 3,&UNK_10f64964f,0x15,&plStack_370);
            func_0x0001092ba41c(&plStack_370);
            plStack_648 = (long *)0x0;
            lStack_650 = 0;
            plStack_638 = (long *)0x0;
            lStack_640 = 0;
            plStack_628 = (long *)0x0;
            lStack_630 = 0;
            uStack_620 = 1;
            lStack_618 = 0;
            plStack_610 = (long *)0x0;
            puStack_660 = puVar11 + 3;
            plStack_658 = puVar11;
            FUN_10ad008d8(&lStack_608);
          }
          else {
            plStack_658 = (long *)plVar6[1];
            puStack_660 = (undefined8 *)*plVar6;
            if (plVar6[1] != 0) {
              plVar9 = (long *)(plVar6[1] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plStack_648 = (long *)plVar6[3];
            lStack_650 = plVar6[2];
            if (plVar6[3] != 0) {
              plVar9 = (long *)(plVar6[3] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lStack_640 = 0;
            plStack_638 = (long *)0x0;
            plStack_628 = (long *)plVar6[7];
            lStack_630 = plVar6[6];
            if (plVar6[7] != 0) {
              plVar9 = (long *)(plVar6[7] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uStack_620 = 1;
            lStack_618 = 0;
            plStack_610 = (long *)0x0;
            plStack_600 = (long *)plVar6[0xc];
            lStack_608 = plVar6[0xb];
            if (plVar6[0xc] != 0) {
              plVar6 = (long *)(plVar6[0xc] + 8);
              do {
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar5) {
                  *plVar6 = *plVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          plVar9 = (long *)0x80;
          ppuStack_6e0 = ppuVar20;
          __Znwm();
          plVar6 = plStack_610;
          lVar3 = lStack_618;
          plVar18 = plVar9 + 1;
          *plVar18 = 0;
          plVar9[2] = 0;
          *plVar9 = (long)&PTR_FUN_110bb7a18;
          plStack_6e8 = plVar9 + 3;
          plVar9[4] = (long)plStack_658;
          *plStack_6e8 = (long)puStack_660;
          puStack_660 = (undefined8 *)0x0;
          plStack_658 = (long *)0x0;
          plVar9[6] = (long)plStack_648;
          plVar9[5] = lStack_650;
          lStack_650 = 0;
          plStack_648 = (long *)0x0;
          plVar9[8] = (long)plStack_638;
          plVar9[7] = lStack_640;
          lStack_640 = 0;
          plStack_638 = (long *)0x0;
          plVar9[10] = (long)plStack_628;
          plVar9[9] = lStack_630;
          lStack_630 = 0;
          plStack_628 = (long *)0x0;
          *(undefined2 *)(plVar9 + 0xb) = uStack_620;
          lStack_618 = 0;
          plStack_610 = (long *)0x0;
          plVar9[0xd] = (long)plVar6;
          plVar9[0xc] = lVar3;
          plVar9[0xf] = (long)plStack_600;
          plVar9[0xe] = lStack_608;
          lStack_608 = 0;
          plStack_600 = (long *)0x0;
          uVar1 = *(undefined8 *)(lVar22 + 0x10);
          lVar22 = *(long *)(lVar22 + 0x18);
          if (lVar22 != 0) {
            plVar6 = (long *)(lVar22 + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_680 = 0;
          plStack_678 = (long *)0x0;
          uStack_670 = 0;
          uStack_668 = 0;
          puStack_598 = &UNK_109896774;
          ppuStack_590 = &PTR_DAT_110b17068;
          puVar10 = (undefined4 *)0xa80;
          ppuStack_6d0 = ppuVar19;
          plStack_5f8 = plStack_6e8;
          plStack_5f0 = plVar9;
          uStack_5a0 = uVar1;
          uStack_588 = uVar1;
          lStack_580 = lVar22;
          __Znwm();
          puStack_550 = &UNK_109896774;
          ppuStack_548 = &PTR_DAT_110b17068;
          uStack_588 = 0;
          lStack_580 = 0;
          puStack_598 = &UNK_1053a6a3c;
          ppuStack_590 = &PTR_DAT_110ae9180;
          *puVar10 = 0;
          *(undefined1 *)(puVar10 + 4) = 0;
          *(undefined1 *)(puVar10 + 0x168) = 0;
          *(undefined1 *)(puVar10 + 0x16c) = 0;
          *(undefined1 *)(puVar10 + 0x1f6) = 0;
          *(undefined8 *)(puVar10 + 0x1f8) = 0;
          puVar23 = ppuVar7[1];
          puVar16 = *ppuVar7;
          puVar24 = ppuVar7[2];
          puVar26 = ppuVar7[5];
          puVar25 = ppuVar7[4];
          *(undefined **)(puVar10 + 0x200) = ppuVar7[3];
          *(undefined **)(puVar10 + 0x1fe) = puVar24;
          *(undefined **)(puVar10 + 0x204) = puVar26;
          *(undefined **)(puVar10 + 0x202) = puVar25;
          *(undefined **)(puVar10 + 0x1fc) = puVar23;
          *(undefined **)(puVar10 + 0x1fa) = puVar16;
          puVar23 = ppuVar7[7];
          puVar16 = ppuVar7[6];
          puVar25 = ppuVar7[9];
          puVar24 = ppuVar7[8];
          puVar27 = ppuVar7[0xb];
          puVar26 = ppuVar7[10];
          uVar28 = *(undefined8 *)((long)ppuVar7 + 0x5c);
          *(undefined8 *)(puVar10 + 0x213) = *(undefined8 *)((long)ppuVar7 + 100);
          *(undefined8 *)(puVar10 + 0x211) = uVar28;
          *(undefined **)(puVar10 + 0x20c) = puVar25;
          *(undefined **)(puVar10 + 0x20a) = puVar24;
          *(undefined **)(puVar10 + 0x210) = puVar27;
          *(undefined **)(puVar10 + 0x20e) = puVar26;
          *(undefined **)(puVar10 + 0x208) = puVar23;
          *(undefined **)(puVar10 + 0x206) = puVar16;
          *(undefined **)(puVar10 + 0x216) = ppuVar7[0xe];
          puVar16 = ppuVar7[0xf];
          *(undefined **)(puVar10 + 0x218) = puVar16;
          if (puVar16 != (undefined *)0x0) {
            plVar6 = (long *)(puVar16 + 8);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined8 *)(puVar10 + 0x21a) = 0;
          puVar10[0x224] = 0x3f800000;
          *(undefined8 *)(puVar10 + 0x21e) = 0;
          *(undefined8 *)(puVar10 + 0x21c) = 0x3f800000;
          *(undefined8 *)(puVar10 + 0x222) = 0;
          *(undefined8 *)(puVar10 + 0x220) = 0x3f800000;
          uStack_558 = uVar1;
          uStack_540 = uVar1;
          lStack_538 = lVar22;
          func_0x0001098b9e94(puVar10 + 0x226);
          func_0x000107c2b054(&uStack_5d8,&UNK_10f6479fc);
          appuStack_1a8[0] = &PTR_DAT_110ae9180;
          uStack_1b8 = uStack_558;
          puStack_1b0 = puStack_550;
          (*(code *)ppuStack_548[2])(appuStack_1a8,&ppuStack_548);
          puStack_550 = &UNK_1053a6a3c;
          (*(code *)*ppuStack_548)(&ppuStack_548);
          ppuStack_548 = &PTR_DAT_110ae9180;
          ppuStack_170 = &PTR_PTR_1132fed50;
          puStack_168 = &UNK_1053a6a3c;
          appuStack_160[0] = &PTR_DAT_110ae9180;
          uStack_128 = 0;
          uStack_220 = 0;
          uStack_228 = 0;
          uStack_210 = 0;
          uStack_218 = 0;
          uStack_200 = 0;
          uStack_208 = 0;
          pcStack_238 = FUN_10a26dc34;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          ppuStack_230 = &PTR_DAT_110ae9180;
          puStack_1f8 = &UNK_1098ba5f4;
          ppuStack_1f0 = &PTR_DAT_110ae9180;
          uStack_5b8 = uStack_5d0;
          uStack_5c0 = uStack_5d8;
          lStack_5b0 = lStack_5c8;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          lStack_5c8 = 0;
          appuStack_110[0] = &PTR_DAT_110ae9180;
          uStack_120 = uStack_1b8;
          puStack_118 = puStack_1b0;
          puStack_248 = puVar10 + 0x1f8;
          (*(code *)appuStack_1a8[0][2])(appuStack_110,appuStack_1a8);
          puStack_1b0 = &UNK_1053a6a3c;
          (*(code *)*appuStack_1a8[0])(appuStack_1a8);
          appuStack_1a8[0] = &PTR_DAT_110ae9180;
          appuStack_c8[0] = &PTR_DAT_110ae9180;
          ppuStack_d8 = ppuStack_170;
          puStack_d0 = puStack_168;
          (*(code *)appuStack_160[0][2])(appuStack_c8,appuStack_160);
          puStack_168 = &UNK_1053a6a3c;
          (*(code *)*appuStack_160[0])(appuStack_160);
          appuStack_160[0] = &PTR_DAT_110ae9180;
          uStack_90 = uStack_128;
          func_0x0001098ba404(puVar10 + 0x226,&uStack_5c0,&uStack_120,puVar10 + 0x226);
          uVar17 = (*(long *)(puVar10 + 0x230) + *(long *)(puVar10 + 0x22e)) - 1;
          lStack_6f0 = *(long *)(*(long *)(puVar10 + 0x228) + (uVar17 >> 4) * 8);
          func_0x0001092ba41c(&ppuStack_d8);
          func_0x0001092ba41c(&uStack_120);
          if (lStack_5b0 < 0) {
            __ZdlPv(uStack_5c0);
          }
          puVar11 = (undefined8 *)0xb8;
          __Znwm();
          ppuVar19 = ppuStack_1f0;
          *(undefined1 *)(puVar11 + 2) = 0;
          *puVar11 = &PTR_FUN_110bb6cd8;
          if (((ulong)ppuStack_1f0[1] & 1) == 0) {
            puVar11[3] = 0;
            puVar11[4] = 0;
          }
          else {
            puVar12 = (undefined8 *)0x58;
            __Znwm();
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = &PTR_FUN_110bb9cf8;
            puVar12[3] = puStack_1f8;
            (*(code *)ppuVar19[2])(puVar12 + 4,&ppuStack_1f0);
            puVar11[3] = puVar12 + 3;
            puVar11[4] = puVar12;
          }
          lVar22 = lStack_6f0 + (uVar17 & 0xf) * 0x668;
          puVar11[5] = puStack_248;
          puVar11[7] = pcStack_238;
          (*(code *)ppuStack_230[2])(puVar11 + 8,&ppuStack_230);
          puVar11[0xf] = puStack_1f8;
          (*(code *)ppuStack_1f0[2])(puVar11 + 0x10,&ppuStack_1f0);
          puVar11[1] = lVar22;
          *(undefined1 *)(puVar11 + 2) = 1;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a670f,0x2b,puVar11);
          *(long *)(puVar10 + 0x23c) = lVar22;
          (*(code *)*ppuStack_1f0)(&ppuStack_1f0);
          (*(code *)*ppuStack_230)(&ppuStack_230);
          func_0x0001092ba41c(&ppuStack_170);
          func_0x0001092ba41c(&uStack_1b8);
          if (lStack_5c8 < 0) {
            __ZdlPv(uStack_5d8);
          }
          *(undefined8 **)(puVar10 + 0x23e) = *(undefined8 **)(puVar10 + 0x23c) + 2;
          *(undefined8 *)(puVar10 + 0x242) = 0;
          *(undefined8 *)(puVar10 + 0x240) = 0;
          *(undefined8 *)(puVar10 + 0x246) = 0;
          *(undefined8 *)(puVar10 + 0x244) = 0;
          *(undefined8 *)(puVar10 + 0x24a) = 0;
          *(undefined8 *)(puVar10 + 0x248) = 0;
          *(undefined8 *)(puVar10 + 0x24e) = 0;
          *(undefined8 *)(puVar10 + 0x24c) = 0;
          *(undefined8 *)(puVar10 + 0x252) = 0;
          *(undefined8 *)(puVar10 + 0x250) = 0;
          *(undefined8 *)(puVar10 + 0x256) = 0;
          *(undefined8 *)(puVar10 + 0x254) = 0;
          *(undefined8 *)(puVar10 + 0x25a) = 0;
          *(undefined8 *)(puVar10 + 600) = 0;
          *(undefined8 *)(puVar10 + 0x25e) = 0;
          *(undefined8 *)(puVar10 + 0x25c) = 0;
          *(undefined8 *)(puVar10 + 0x262) = 0;
          *(undefined8 *)(puVar10 + 0x260) = 0;
          *(undefined8 *)(puVar10 + 0x266) = 0;
          *(undefined8 *)(puVar10 + 0x264) = 0;
          *(undefined8 *)(puVar10 + 0x26a) = 0;
          *(undefined8 *)(puVar10 + 0x268) = 0;
          *(undefined8 *)(puVar10 + 0x26e) = 0;
          *(undefined8 *)(puVar10 + 0x26c) = 0;
          *(undefined8 *)(puVar10 + 0x272) = 0;
          *(undefined8 *)(puVar10 + 0x270) = 0;
          *(undefined8 *)(puVar10 + 0x276) = 0;
          *(undefined8 *)(puVar10 + 0x274) = 0;
          *(undefined8 *)(puVar10 + 0x27a) = 0;
          *(undefined8 *)(puVar10 + 0x278) = 0;
          *(undefined8 *)(puVar10 + 0x27e) = 0;
          *(undefined8 *)(puVar10 + 0x27c) = 0;
          *(undefined8 *)(puVar10 + 0x282) = 0;
          *(undefined8 *)(puVar10 + 0x280) = 0;
          *(undefined8 *)(puVar10 + 0x286) = 0;
          *(undefined8 *)(puVar10 + 0x284) = 0;
          *(undefined8 *)(puVar10 + 0x28a) = 0;
          *(undefined8 *)(puVar10 + 0x288) = 0;
          *(undefined8 *)(puVar10 + 0x28e) = 0;
          *(undefined8 *)(puVar10 + 0x28c) = 0;
          *(undefined8 *)(puVar10 + 0x292) = 0;
          *(undefined8 *)(puVar10 + 0x290) = 0;
          *(undefined8 *)(puVar10 + 0x296) = 0;
          *(undefined8 *)(puVar10 + 0x294) = 0;
          *(undefined8 *)(puVar10 + 0x29a) = 0;
          *(undefined8 *)(puVar10 + 0x298) = 0;
          *(undefined8 *)(puVar10 + 0x29e) = 0;
          *(undefined8 *)(puVar10 + 0x29c) = 0;
          **(undefined8 **)(puVar10 + 0x23c) = 0x100000001;
          uStack_290 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_2b8 = 0;
          uStack_2c8 = 0x10a26dc44;
          ppuStack_2c0 = &PTR_DAT_110ae9180;
          uStack_270 = 0;
          uStack_278 = 0;
          uStack_260 = 0;
          uStack_268 = 0;
          uStack_250 = 0;
          uStack_258 = 0;
          puStack_288 = &UNK_1098ba5f4;
          ppuStack_280 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb0;
          __Znwm();
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[6] = 0x10a26dc44;
          puVar11[7] = &PTR_DAT_110ae9180;
          puVar11[0xe] = &UNK_1098ba5f4;
          puVar11[0xf] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_DAT_110bb7778;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a7ac1,0x23,puVar11);
          (*(code *)*ppuStack_280)(&ppuStack_280);
          (*(code *)*ppuStack_2c0)(&ppuStack_2c0);
          plStack_370 = plStack_6e8;
          do {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = *plVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          ppuStack_360 = (undefined **)0x0;
          uStack_350 = 0x10a26dc54;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          ppuStack_348 = &PTR_DAT_110ae9180;
          puStack_310 = &UNK_1098ba5f4;
          ppuStack_308 = &PTR_DAT_110ae9180;
          plStack_368 = plVar9;
          FUN_10a259f8c(puVar10 + 0x226,&plStack_370,0,0);
          ppuVar7 = ppuStack_6e0;
          (*(code *)*ppuStack_308)(&ppuStack_308);
          (*(code *)*ppuStack_348)(&ppuStack_348);
          ppuVar19 = ppuStack_360;
          ppuStack_360 = (undefined **)0x0;
          if (ppuVar19 != (undefined **)0x0) {
            FUN_10aac7268();
            __ZdlPv();
          }
          plVar6 = plStack_368;
          if (plStack_368 != (long *)0x0) {
            plVar9 = plStack_368 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_368 + 0x10))(plStack_368);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3d8 = 0;
          uStack_3e0 = 0;
          uStack_3f0 = 0x10a26dc8c;
          ppuStack_3e8 = &PTR_DAT_110ae9180;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          uStack_378 = 0;
          uStack_380 = 0;
          puStack_3b0 = &UNK_1098ba5f4;
          ppuStack_3a8 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb0;
          __Znwm();
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[6] = 0x10a26dc8c;
          puVar11[7] = &PTR_DAT_110ae9180;
          puVar11[0xe] = &UNK_1098ba5f4;
          puVar11[0xf] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_FUN_110bb77e8;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a698d,0x1d,puVar11);
          (*(code *)*ppuStack_3a8)(&ppuStack_3a8);
          (*(code *)*ppuStack_3e8)(&ppuStack_3e8);
          uStack_440 = 0;
          uStack_448 = 0;
          uStack_450 = 0;
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_468 = 0;
          uStack_478 = 0x10a26dc9c;
          ppuStack_470 = &PTR_DAT_110ae9180;
          uStack_420 = 0;
          uStack_428 = 0;
          uStack_410 = 0;
          uStack_418 = 0;
          uStack_400 = 0;
          uStack_408 = 0;
          puStack_438 = &UNK_1098ba5f4;
          ppuStack_430 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb0;
          __Znwm();
          param_1 = plStack_708;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[6] = 0x10a26dc9c;
          puVar11[7] = &PTR_DAT_110ae9180;
          puVar11[0xe] = &UNK_1098ba5f4;
          puVar11[0xf] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_FUN_110bb7828;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a7ae5,0x1f,puVar11);
          (*(code *)*ppuStack_430)(&ppuStack_430);
          (*(code *)*ppuStack_470)(&ppuStack_470);
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_500 = 0x10a26dcac;
          uStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          ppuStack_4f8 = &PTR_DAT_110ae9180;
          puStack_4c0 = &UNK_1098ba5f4;
          ppuStack_4b8 = &PTR_DAT_110ae9180;
          puVar11 = (undefined8 *)0xb8;
          puStack_510 = puVar10;
          __Znwm();
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = puVar10;
          puVar11[7] = 0x10a26dcac;
          puVar11[8] = &PTR_DAT_110ae9180;
          puVar11[0xf] = &UNK_1098ba5f4;
          puVar11[0x10] = &PTR_DAT_110ae9180;
          *puVar11 = &PTR_FUN_110bb7868;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          func_0x0001098ba2b4(puVar10 + 0x226,&UNK_10e4a6e3c,0x2c,puVar11);
          (*(code *)*ppuStack_4b8)(&ppuStack_4b8);
          (*(code *)*ppuStack_4f8)(&ppuStack_4f8);
          ppuStack_6d0[6] = (undefined *)puVar10;
          func_0x0001092ba41c(&uStack_558);
          func_0x0001092ba41c(&uStack_5a0);
          plVar6 = plStack_678;
          if (plStack_678 != (long *)0x0) {
            plVar9 = plStack_678 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_678 + 0x10))(plStack_678);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_5f0;
          if (plStack_5f0 != (long *)0x0) {
            plVar9 = plStack_5f0 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_5f0 + 0x10))(plStack_5f0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_600;
          if (plStack_600 != (long *)0x0) {
            plVar9 = plStack_600 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_600 + 0x10))(plStack_600);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_610;
          if (plStack_610 != (long *)0x0) {
            plVar9 = plStack_610 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_610 + 0x10))(plStack_610);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_628;
          if (plStack_628 != (long *)0x0) {
            plVar9 = plStack_628 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_628 + 0x10))(plStack_628);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_638;
          if (plStack_638 != (long *)0x0) {
            plVar9 = plStack_638 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_638 + 0x10))(plStack_638);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_648;
          if (plStack_648 != (long *)0x0) {
            plVar9 = plStack_648 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_648 + 0x10))(plStack_648);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          plVar6 = plStack_658;
          if (plStack_658 != (long *)0x0) {
            plVar9 = plStack_658 + 1;
            do {
              lVar22 = *plVar9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar22 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_658 + 0x10))(plStack_658);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          ppuVar21 = ppuStack_5e0;
          if (ppuStack_5e0 != (undefined **)0x0) {
            ppuVar19 = ppuStack_5e0 + 1;
            do {
              puVar16 = *ppuVar19;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
              if (bVar5) {
                *ppuVar19 = puVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar16 == (undefined *)0x0) {
              (**(code **)(*ppuStack_5e0 + 0x10))(ppuStack_5e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar21);
            }
          }
          ppuVar20 = ppuStack_698;
          ppuVar19 = ppuStack_6b8;
          ppuVar8 = ppuStack_700;
          uStack_688 = CONCAT71(uStack_688._1_7_,1);
          *ppuStack_698 = (undefined *)0x0;
          ppuStack_698[1] = (undefined *)0x0;
          ppuStack_698[2] = (undefined *)unaff_x24;
          *ppuVar13 = (undefined *)ppuStack_698;
          ppuVar14 = ppuStack_698;
          if (*(long *)*param_1 != 0) {
            *param_1 = *(long *)*param_1;
            ppuVar14 = (undefined **)*ppuVar13;
          }
          func_0x000107c2b058(param_1[1],ppuVar14);
          param_1[2] = param_1[2] + 1;
LAB_10a25c250:
          puVar16 = ppuVar20[6];
          if ((puVar16[0x5a0] & 1) == 0) {
            FUN_10a4ca448(puVar16 + 0x10);
            puVar16[0x5a0] = 1;
          }
          ppuVar13 = (undefined **)(puVar16 + 0x10);
          (**(code **)(*ppuVar7 + 0x20))();
          unaff_x23 = ppuVar21;
        }
      }
      ppuVar20 = ppuStack_6a8;
      if (ppuStack_6a8 != (undefined **)0x0) {
        ppuVar21 = ppuStack_6a8 + 1;
        do {
          puVar16 = *ppuVar21;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
          if (bVar5) {
            *ppuVar21 = puVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar16 == (undefined *)0x0) {
          (**(code **)(*ppuStack_6a8 + 0x10))(ppuStack_6a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar20;
        }
      }
      ppuVar19 = (undefined **)ppuVar19[1];
    } while (ppuVar19 != ppuVar8);
  }
  plVar6 = (long *)*param_1;
  if (plVar6 != param_1 + 1) {
    ppuVar19 = (undefined **)0x113300b40;
    do {
      lVar22 = plVar6[6];
      if ((*(char *)(lVar22 + 0x5a0) == '\x01') && (*(char *)(lVar22 + 0x120) == '\x01')) {
        if (*(int *)(*(long *)(lStack_6d8 + 0xa20) + 0x18) < 0x14b) {
          ppuVar7 = ppuVar19;
          FUN_10a08f69c();
          if (((*(byte *)(lVar22 + 0x5a0) & 1) == 0) || ((*(byte *)(lVar22 + 0x120) & 1) == 0)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25c3ac);
            (*pcVar4)();
          }
          bVar15 = *(byte *)ppuVar7;
        }
        else {
          bVar15 = 1;
        }
        *(byte *)(lVar22 + 0x100) = bVar15 & 1;
      }
      plVar9 = (long *)plVar6[1];
      plVar18 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar18[2];
          bVar5 = (long *)*plVar6 != plVar18;
          plVar18 = plVar6;
        } while (bVar5);
      }
      else {
        do {
          plVar6 = plVar9;
          plVar9 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != param_1 + 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a2355e8(&lStack_618);
  func_0x00010a23495c(&lStack_630);
  func_0x00010a235590(&lStack_640);
  func_0x00010a235538(&lStack_650);
  func_0x00010a06e274(&puStack_660);
  func_0x00010a23575c(&plStack_5e8);
  if (ppuVar19[5] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a293a30(&ppuStack_698);
  FUN_10a05b1b0(&ppuStack_6b0);
  __Unwind_Resume();
  pcStack_718 = FUN_10a25c74c;
  ppuVar13 = ppuVar13 + 0x1a9;
  ppuStack_750 = unaff_x24;
  ppuStack_748 = unaff_x23;
  ppuStack_738 = ppuVar19;
  ppuStack_730 = &puStack_660;
  ppuStack_728 = ppuVar19 + 5;
  puStack_720 = &stack0xfffffffffffffff0;
  FUN_10a5aeb74(ppuVar13,&PTR_DAT_110b99f08);
  ppuVar19 = (undefined **)ppuVar13[1];
  if (ppuVar19 != ppuVar13) {
    ppuVar7 = ppuVar7 + 1;
    do {
      plVar6 = (long *)ppuVar19[5];
      ppuVar19 = (undefined **)ppuVar19[1];
      FUN_10a25c87c(&lStack_760,plVar6);
      if ((lStack_760 != 0) &&
         (ppuVar20 = (undefined **)*ppuVar7, ppuVar8 = ppuVar7, ppuVar20 != (undefined **)0x0)) {
        do {
          lVar22 = 8;
          if (plStack_758 <= ppuVar20[5]) {
            lVar22 = 0;
            ppuVar8 = ppuVar20;
          }
          ppuVar20 = *(undefined ***)((long)ppuVar20 + lVar22);
        } while (ppuVar20 != (undefined **)0x0);
        if ((ppuVar8 != ppuVar7) && (ppuVar8[5] <= plStack_758)) {
          if ((ppuVar8[6][0x7d8] & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25c868);
            (*pcVar4)();
          }
          (**(code **)(*plVar6 + 0x28))(plVar6,ppuVar8[6] + 0x5b0);
        }
      }
      plVar6 = plStack_758;
      if (plStack_758 != (long *)0x0) {
        plVar9 = plStack_758 + 1;
        do {
          lVar22 = *plVar9;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_758 + 0x10))(plStack_758);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    } while (ppuVar19 != ppuVar13);
  }
  return;
}



/* Entry: 10a25c74c; end: 10a25c87b;  */

void FUN_10a25c74c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lStack_50;
  long *plStack_48;
  
  param_2 = param_2 + 0xd48;
  FUN_10a5aeb74(param_2,&PTR_DAT_110b99f08);
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != param_2) {
    plVar1 = (long *)(param_1 + 8);
    do {
      plVar8 = *(long **)(lVar9 + 0x28);
      lVar9 = *(long *)(lVar9 + 8);
      FUN_10a25c87c(&lStack_50,plVar8);
      if ((lStack_50 != 0) && (plVar7 = (long *)*plVar1, plVar5 = plVar1, plVar7 != (long *)0x0)) {
        do {
          lVar6 = 8;
          if (plStack_48 <= (long *)plVar7[5]) {
            lVar6 = 0;
            plVar5 = plVar7;
          }
          plVar7 = *(long **)((long)plVar7 + lVar6);
        } while (plVar7 != (long *)0x0);
        if ((plVar5 != plVar1) && ((long *)plVar5[5] <= plStack_48)) {
          if ((*(byte *)(plVar5[6] + 0x7d8) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25c868);
            (*pcVar4)();
          }
          (**(code **)(*plVar8 + 0x28))(plVar8,plVar5[6] + 0x5b0);
        }
      }
      plVar8 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    } while (lVar9 != param_2);
  }
  return;
}



/* Entry: 10a25c87c; end: 10a25c95f;  */

void FUN_10a25c87c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x30))();
  FUN_10ab6e450();
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)((long)param_2 + *(long *)(*param_2 + -0x18));
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x30))();
    uVar3 = (uint)plVar5;
    if (*(byte *)((long)plVar1 + 0x19) != uVar3) {
      *(char *)((long)plVar1 + 0x19) = (char)plVar5;
      lVar2 = 0x18;
      if (uVar3 == 0) {
        lVar2 = 0x20;
      }
      (**(code **)(*plVar1 + lVar2))(plVar1);
    }
    if (uVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      func_0x00010ab6e4c8(param_1,plVar4);
      if (*param_1 != 0) {
        return;
      }
    }
    FUN_10acb4114(param_2[1],0);
  }
  return;
}



/* Entry: 10a25c960; end: 10a25cb47;  */

undefined8 * FUN_10a25c960(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  *param_1 = &PTR_FUN_110bb6310;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 1;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  puStack_78 = &UNK_10f647a45;
  uStack_70 = 0x17;
  if (param_2 != 0) {
    param_1[2] = *(undefined8 *)(param_2 + 0x100);
    *(undefined1 *)(param_1 + 5) = 1;
    PTR_DAT_113300e28 = &UNK_10f647a5d;
    if ((bRam00000001137eade8 & 1) == 0) {
      iVar2 = 0x137eade8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10a26de4c();
        uRam00000001137eadd0 = (undefined1)iVar2;
        ___cxa_guard_release(0x1137eade8);
      }
    }
    *(undefined1 *)((long)param_1 + 0x29) = uRam00000001137eadd0;
    return param_1;
  }
  FUN_10a0edfc4(&puStack_78);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a25ca7c);
  (*pcVar1)();
}



/* Entry: 10a25cb48; end: 10a25cb83;  */

long FUN_10a25cb48(long param_1)

{
  func_0x00010a26df2c(param_1 + 0x28,0);
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a25cb84; end: 10a25cc77;  */

ulong FUN_10a25cb84(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  lVar3 = *(long *)(param_1 + 8) + 0xd48;
  FUN_10a5aeb74(lVar3,&PTR_DAT_110b99f08);
  lVar8 = *(long *)(lVar3 + 8);
  if (lVar8 == lVar3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      plVar7 = *(long **)(lVar8 + 0x28);
      plVar5 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x18));
      plVar4 = plVar5;
      (**(code **)(*plVar5 + 0x30))();
      uVar2 = (uint)plVar4;
      if (*(byte *)((long)plVar5 + 0x19) != uVar2) {
        *(char *)((long)plVar5 + 0x19) = (char)plVar4;
        lVar1 = 0x18;
        if (uVar2 == 0) {
          lVar1 = 0x20;
        }
        (**(code **)(*plVar5 + lVar1))(plVar5);
      }
      if (uVar2 != 0) {
        plVar5 = plVar7;
        (**(code **)(*plVar7 + 0x30))();
        FUN_10ab6e450();
        if (plVar5 == (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
          uVar6 = (ulong)plVar7 | uVar6;
        }
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != lVar3);
  }
  return uVar6;
}



/* Entry: 10a25cc78; end: 10a25d3d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a25ced4) */
/* WARNING: Removing unreachable block (ram,0x00010a25cfa0) */

void FUN_10a25cc78(long param_1,long param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  byte bVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  char cStack_131;
  undefined **appuStack_120 [19];
  undefined8 auStack_88 [3];
  undefined1 auStack_69 [9];
  
  pppuVar10 = &ppuStack_190;
  lVar12 = *(long *)(param_1 + 8) + 0xd48;
  FUN_10a5aeb74(lVar12,&PTR_DAT_110b99f08);
  for (lVar15 = *(long *)(lVar12 + 8); lVar15 != lVar12; lVar15 = *(long *)(lVar15 + 8)) {
    plVar14 = *(long **)(lVar15 + 0x28);
    plVar16 = (long *)((long)plVar14 + *(long *)(*plVar14 + -0x18));
    plVar7 = plVar16;
    (**(code **)(*plVar16 + 0x30))();
    uVar6 = (uint)plVar7;
    if (*(byte *)((long)plVar16 + 0x19) != uVar6) {
      *(char *)((long)plVar16 + 0x19) = (char)plVar7;
      lVar1 = 0x18;
      if (uVar6 == 0) {
        lVar1 = 0x20;
      }
      (**(code **)(*plVar16 + lVar1))(plVar16);
    }
    if (uVar6 != 0) {
      plVar16 = plVar14;
      (**(code **)(*plVar14 + 0x30))();
      FUN_10ab6e450();
      if (plVar16 == (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14,param_2);
      }
    }
  }
  lVar12 = *(long *)(param_1 + 8);
  if ((*(byte *)(param_2 + 0x110) & 1) != 0) {
    if (*(int *)(*(long *)(lVar12 + 0xa20) + 0x18) < 0x14b) {
      pbVar8 = (byte *)0x113300b40;
      FUN_10a08f69c();
      if ((*(byte *)(param_2 + 0x110) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a25d37c);
        (*pcVar5)();
      }
      bVar11 = *pbVar8;
    }
    else {
      bVar11 = 1;
    }
    *(byte *)(param_2 + 0xf0) = bVar11 & 1;
    lVar12 = *(long *)(param_1 + 8);
  }
  puVar4 = &UNK_10f648a72;
  if (*(int *)(param_1 + 0x2c) != 1) {
    puVar4 = &UNK_10f648a81;
  }
  puVar3 = &UNK_10f648a62;
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar3 = puVar4;
  }
  if (*(char *)(param_2 + 0x194) == '\x01') {
    FUN_10a26e114(lVar12,&DAT_10f35c1c4,&UNK_10f648a16,puVar3);
  }
  if (*(char *)(param_2 + 0x450) == '\x01') {
    FUN_10a26e114(lVar12,&UNK_10f648a21,&UNK_10f648a16,puVar3);
  }
  if (*(char *)(param_2 + 0x4e3) == '\x01') {
    FUN_10a26e114(lVar12,&UNK_10f648a2e,&UNK_10f648a16,puVar3);
  }
  if ((*(char *)(param_2 + 0x238) == '\x01') && (*(char *)(param_2 + 0x1f8) == '\x01')) {
    for (plVar16 = *(long **)(param_2 + 0x220); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16)
    {
      lVar15 = param_2 + 0x1d0;
      FUN_10a26e2a0(lVar15,plVar16 + 2);
      if (lVar15 != 0) {
        puVar9 = auStack_88;
        func_0x000107c2b054(puVar9,&UNK_10f648a43);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
        ppuStack_188 = (undefined **)puVar9[1];
        ppuStack_190 = (undefined **)*puVar9;
        alStack_180[0] = puVar9[2];
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        pppuVar2 = (undefined ***)ppuStack_190;
        if (-1 < alStack_180[0]) {
          pppuVar2 = &ppuStack_190;
        }
        FUN_10a26e114(lVar12,pppuVar2,&UNK_10f648a16,puVar3);
        if (alStack_180[0] < 0) {
          __ZdlPv(ppuStack_190);
        }
      }
    }
  }
  lVar12 = param_2;
  FUN_10a4ca778();
  if (lVar12 != *(long *)(param_1 + 0x30)) {
    FUN_109fed7e0(&ppuStack_190);
    FUN_10a002568(&ppuStack_190,&UNK_10f647a66,0x1b);
    *(uint *)((long)pppuVar10 + *(long *)((long)*pppuVar10 + -0x18) + 8) =
         *(uint *)((long)pppuVar10 + *(long *)((long)*pppuVar10 + -0x18) + 8) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy();
    lVar15 = *(long *)(param_1 + 8);
    func_0x00010a002480(auStack_88,&ppuStack_188,auStack_69);
    if (lVar15 != 0) {
      FUN_10a76c170(*(undefined8 *)(lVar15 + 0x8d8),auStack_88);
    }
    *(long *)(param_1 + 0x30) = lVar12;
    appuStack_120[0] = &PTR_DAT_11088d708;
    ppuStack_190 = &PTR_DAT_11088d6e0;
    ppuStack_188 = &PTR_DAT_11088d7b0;
    if (cStack_131 < '\0') {
      __ZdlPv(uStack_148);
    }
    ppuStack_188 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(alStack_180);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_190,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_120);
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    uVar13 = *(undefined8 *)(param_1 + 8);
    puVar4 = &UNK_10f648a72;
    if (*(int *)(param_1 + 0x2c) != 1) {
      puVar4 = &UNK_10f648a81;
    }
    puVar3 = &UNK_10f648a62;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar3 = puVar4;
    }
    if (*(char *)(param_2 + 0x110) == '\x01') {
      FUN_10a26e388(uVar13,&DAT_10f3cea81,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x1f8) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648a93,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x238) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f581e9b,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x2b0) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648a98,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x2d0) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648aa0,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x130) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648ab0,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x48) == '\x01') {
      FUN_10a26e388(uVar13,"Image",&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x2f8) == '\x01') {
      FUN_10a26e388(uVar13,&DAT_10f58789e,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x4e7) == '\x01') {
      FUN_10a26e388(uVar13,&DAT_10f3507df,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x4e5) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648ac0,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x290) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648ac9,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x1c8) == '\x01') {
      FUN_10a26e388(uVar13,&DAT_10f648ad9,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x4d8) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648ae6,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x170) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648af1,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x199) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648afd,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x271) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648b0b,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x51) == '\x01') {
      FUN_10a26e388(uVar13,&DAT_10f54c3d6,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x4e1) == '\x01') {
      FUN_10a26e388(uVar13,&UNK_10f648b13,&UNK_10f648a16,puVar3);
    }
    if (*(char *)(param_2 + 0x4d8) == '\x01') {
      puVar4 = &UNK_10f648b24;
      if ((*(byte *)(param_2 + 0x4d5) & *(byte *)(param_2 + 0x4d4) & 1) == 0) {
        puVar4 = &UNK_10f648b35;
      }
      FUN_10a26e388(uVar13,puVar4,&UNK_10f648a16,puVar3);
    }
  }
  return;
}



/* Entry: 10a25d3d8; end: 10a25e263;  */

/* WARNING: Removing unreachable block (ram,0x00010a25da14) */
/* WARNING: Removing unreachable block (ram,0x00010a25da18) */
/* WARNING: Removing unreachable block (ram,0x00010a25da34) */

void FUN_10a25d3d8(long param_1,long param_2,int *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long **pplVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int iStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  long *plStack_68;
  
  if (param_3 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    piVar12 = param_3;
    FUN_10a22b608(param_3,param_3[0x28]);
    iVar10 = *piVar12;
  }
  *(int *)(param_1 + 0x2c) = iVar10;
  if (param_2 != 0) {
    uVar14 = *(undefined8 *)(param_1 + 8);
    puVar2 = &UNK_10f648a72;
    if (iVar10 != 1) {
      puVar2 = &UNK_10f648a81;
    }
    puVar3 = &UNK_10f648a62;
    if (iVar10 != 0) {
      puVar3 = puVar2;
    }
    if (*(long *)(param_2 + 0xe0) != 0) {
      FUN_10a26e114(uVar14,&DAT_10f35c1c4,&UNK_10f648b57,puVar3);
    }
    if (*(long *)(param_2 + 0x90) != 0) {
      FUN_10a26e114(uVar14,&UNK_10f648a21,&UNK_10f648b57,puVar3);
    }
    if (*(long *)(param_2 + 0x130) != 0) {
      FUN_10a26e114(uVar14,&UNK_10f648a2e,&UNK_10f648b57,puVar3);
    }
    if (*(char *)(param_1 + 0x29) == '\x01') {
      uVar14 = *(undefined8 *)(param_1 + 8);
      puVar2 = &UNK_10f648a72;
      if (*(int *)(param_1 + 0x2c) != 1) {
        puVar2 = &UNK_10f648a81;
      }
      puVar3 = &UNK_10f648a62;
      if (*(int *)(param_1 + 0x2c) != 0) {
        puVar3 = puVar2;
      }
      if (*(long *)(param_2 + 0x68) != 0) {
        FUN_10a26e388(uVar14,&DAT_10f3cea81,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x108) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648b61,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x78) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648a98,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x80) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648aa0,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0xa0) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648ab0,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x58) != 0) {
        FUN_10a26e388(uVar14,"Image",&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x70) != 0) {
        FUN_10a26e388(uVar14,&DAT_10f58789e,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x150) != 0) {
        FUN_10a26e388(uVar14,&DAT_10f3507df,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x158) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648ac0,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0xe8) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648ac9,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x110) != 0) {
        FUN_10a26e388(uVar14,&DAT_10f648ad9,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x148) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648b6d,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0xd0) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648af1,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0xa8) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648afd,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x128) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648b72,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x140) != 0) {
        FUN_10a26e388(uVar14,&UNK_10f648b13,&UNK_10f648b57,puVar3);
      }
      if (*(char *)(param_2 + 0x100) == '\x01') {
        FUN_10a26e388(uVar14,&UNK_10f648b0b,&UNK_10f648b57,puVar3);
      }
      if (*(long *)(param_2 + 0x60) != 0) {
        FUN_10a26e388(uVar14,&DAT_10f54c3d6,&UNK_10f648b57,puVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    func_0x00010a26df2c(param_2 + 0x128,uVar14);
  }
  *(long *)(param_1 + 0x18) = param_2;
  *(int **)(param_1 + 0x20) = param_3;
  piVar12 = *(int **)(param_2 + 0x140);
  if (piVar12 == (int *)0x0) {
    iStack_a8 = 0;
    plStack_98 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_88 = (long *)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
  }
  else {
    iStack_a8 = *piVar12;
    plStack_98 = (long *)0x0;
    uStack_90 = 0;
    plStack_a0 = (long *)0x0;
    FUN_10a26e568(&plStack_a0,*(long *)(piVar12 + 2),*(long *)(piVar12 + 4),
                  *(long *)(piVar12 + 4) - *(long *)(piVar12 + 2) >> 4);
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_10a26e568(&plStack_88,*(long *)(piVar12 + 8),*(long *)(piVar12 + 10),
                  *(long *)(piVar12 + 10) - *(long *)(piVar12 + 8) >> 4);
  }
  plVar15 = (long *)(param_1 + 0x58);
  lVar8 = *plVar15;
  lVar7 = *(long *)(param_1 + 0x60);
  while (lVar7 != lVar8) {
    lVar7 = lVar7 + -0x10;
    FUN_10a26e930();
  }
  lVar7 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x60) = lVar8;
  lVar8 = *(long *)(param_1 + 0x78);
  while (lVar8 != lVar7) {
    lVar8 = lVar8 + -0x10;
    FUN_10a26e930();
  }
  lVar16 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x78) = lVar7;
  lVar8 = *(long *)(param_1 + 0x48);
  while (lVar8 != lVar16) {
    lVar8 = lVar8 + -0x10;
    FUN_10a26e930();
  }
  *(long *)(param_1 + 0x48) = lVar16;
  if (*(int *)(param_1 + 0x38) != iStack_a8) {
    puVar13 = (undefined8 *)(param_1 + 0x88);
    plVar17 = (long *)*puVar13;
    *(int *)(param_1 + 0x38) = iStack_a8;
    plVar19 = *(long **)(param_1 + 0x90);
    for (; plVar11 = plVar19, plVar17 != plVar19; plVar17 = plVar17 + 2) {
      plVar11 = plStack_a0;
      if (plStack_a0 != plStack_98) {
        lVar8 = *plVar17;
        while (*(int *)*plVar11 != *(int *)(lVar8 + 0x88)) {
          plVar11 = plVar11 + 2;
          if (plVar11 == plStack_98) goto LAB_10a25d91c;
        }
      }
      if (plVar11 == plStack_98) {
LAB_10a25d918:
        lVar8 = *plVar17;
LAB_10a25d91c:
        *(undefined1 *)(lVar8 + 0x18) = 0;
        FUN_10a293adc(plVar15,plVar17);
        plVar11 = plVar17;
        plVar18 = plVar17;
        if (plVar17 != plVar19) goto LAB_10a25d938;
        break;
      }
      lVar8 = *plVar11;
      plVar11 = (long *)plVar11[1];
      if (plVar11 != (long *)0x0) {
        plVar18 = plVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar7 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (lVar8 == 0) goto LAB_10a25d918;
    }
    goto LAB_10a25d9fc;
  }
  goto LAB_10a25dc84;
LAB_10a25de50:
  plVar18 = plVar18 + 2;
  plVar11 = plVar17;
  if (plVar18 != plVar19) {
    plVar11 = plStack_a0;
    if (plStack_a0 == plStack_98) {
LAB_10a25de8c:
      if (plVar11 == plStack_98) goto LAB_10a25def8;
      lVar8 = *plVar11;
      plVar11 = (long *)plVar11[1];
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (lVar8 == 0) goto LAB_10a25def8;
      FUN_10a293e40(plVar17,plVar18);
      plVar17 = plVar17 + 2;
    }
    else {
      do {
        if (*(int *)*plVar11 == *(int *)(*plVar18 + 0x74)) goto LAB_10a25de8c;
        plVar11 = plVar11 + 2;
      } while (plVar11 != plStack_98);
LAB_10a25def8:
      *(undefined1 *)(*plVar18 + 0x30) = 0;
      FUN_10a293ea4(plVar15,plVar18);
    }
    goto LAB_10a25de50;
  }
  goto LAB_10a25df14;
LAB_10a25d938:
  plVar18 = plVar18 + 2;
  plVar11 = plVar17;
  if (plVar18 != plVar19) {
    plVar11 = plStack_a0;
    if (plStack_a0 == plStack_98) {
LAB_10a25d974:
      if (plVar11 == plStack_98) goto LAB_10a25d9e0;
      lVar8 = *plVar11;
      plVar11 = (long *)plVar11[1];
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (lVar8 == 0) goto LAB_10a25d9e0;
      func_0x00010a293a78(plVar17,plVar18);
      plVar17 = plVar17 + 2;
    }
    else {
      do {
        if (*(int *)*plVar11 == *(int *)(*plVar18 + 0x88)) goto LAB_10a25d974;
        plVar11 = plVar11 + 2;
      } while (plVar11 != plStack_98);
LAB_10a25d9e0:
      *(undefined1 *)(*plVar18 + 0x18) = 0;
      FUN_10a293adc(plVar15,plVar18);
    }
    goto LAB_10a25d938;
  }
LAB_10a25d9fc:
  plVar15 = *(long **)(param_1 + 0x90);
  if (plVar15 <= plVar11 && plVar11 != plVar15) {
LAB_10a25e19c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a25e1a0);
    (*pcVar6)();
  }
  if (plVar11 == plVar15) {
    plVar17 = (long *)*puVar13;
  }
  else {
    while (plVar15 != plVar11) {
      plVar15 = plVar15 + -2;
      FUN_10a26e930();
    }
    *(long **)(param_1 + 0x90) = plVar11;
    plVar17 = *(long **)(param_1 + 0x88);
    plVar15 = plVar11;
  }
  uVar14 = *(undefined8 *)(param_1 + 8);
  plVar19 = plStack_a0;
  plVar11 = plStack_98;
  if (plVar17 != plVar15) {
    do {
      plVar19 = plStack_88;
      if (plStack_88 == plStack_80) {
LAB_10a25daa8:
        if (plVar19 != plStack_80) {
          pplStack_70 = (long **)*plVar19;
          plVar19 = (long *)plVar19[1];
          if (plVar19 != (long *)0x0) {
            plVar11 = plVar19 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plStack_68 = plVar19;
          if (pplStack_70 != (long **)0x0) {
            lVar8 = *plVar17;
            *(undefined4 *)(lVar8 + 0x88) = *(undefined4 *)pplStack_70;
            FUN_10acb307c(lVar8,uVar14,&pplStack_70);
            FUN_10acb3278(lVar8);
            FUN_10a293c54((long *)(param_1 + 0x70),plVar17);
          }
          if (plVar19 != (long *)0x0) {
            plVar11 = plVar19 + 1;
            do {
              lVar8 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
        }
      }
      else {
        do {
          if (*(int *)*plVar19 == *(int *)(*plVar17 + 0x88)) goto LAB_10a25daa8;
          plVar19 = plVar19 + 2;
        } while (plVar19 != plStack_80);
      }
      plVar17 = plVar17 + 2;
    } while (plVar17 != plVar15);
    uVar14 = *(undefined8 *)(param_1 + 8);
    plVar19 = plStack_a0;
    plVar11 = plStack_98;
  }
  for (; plVar15 = plStack_98, bVar5 = plVar19 != plStack_98, plStack_98 = plVar11, bVar5;
      plVar19 = plVar19 + 2) {
    plVar17 = *(long **)(param_1 + 0x88);
    plVar11 = *(long **)(param_1 + 0x90);
    if (plVar17 == plVar11) {
LAB_10a25db94:
      if (plVar17 == plVar11) goto LAB_10a25dbd0;
      lVar8 = *plVar17;
      plVar17 = (long *)plVar17[1];
      if (plVar17 != (long *)0x0) {
        plVar11 = plVar17 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar7 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (lVar8 == 0) goto LAB_10a25dbd0;
    }
    else {
      do {
        if (*(int *)(*plVar17 + 0x88) == *(int *)*plVar19) goto LAB_10a25db94;
        plVar17 = plVar17 + 2;
      } while (plVar17 != plVar11);
LAB_10a25dbd0:
      plVar17 = (long *)0xa8;
      __Znwm();
      plVar17[2] = 0;
      pplVar9 = (long **)(plVar17 + 3);
      *plVar17 = (long)&PTR_FUN_110bb7a68;
      plVar17[1] = 0;
      FUN_10acb2ccc(pplVar9,uVar14,plVar19);
      pplStack_70 = pplVar9;
      plStack_68 = plVar17;
      FUN_10a293adc(puVar13,&pplStack_70);
      plVar17 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar11 = plStack_68 + 1;
        do {
          lVar8 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) goto LAB_10a25e19c;
      FUN_10a293c54((long *)(param_1 + 0x40),*(long *)(param_1 + 0x90) + -0x10);
    }
    plVar11 = plStack_98;
    plStack_98 = plVar15;
  }
LAB_10a25dc84:
  pplStack_70 = &plStack_88;
  FUN_10a26e6dc(&pplStack_70);
  pplStack_70 = &plStack_a0;
  FUN_10a26e6dc(&pplStack_70);
  piVar12 = *(int **)(*(long *)(param_1 + 0x18) + 0x148);
  if (piVar12 == (int *)0x0) {
    iStack_a8 = 0;
    plStack_98 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_88 = (long *)0x0;
    uStack_90 = 0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
  }
  else {
    iStack_a8 = *piVar12;
    plStack_98 = (long *)0x0;
    uStack_90 = 0;
    plStack_a0 = (long *)0x0;
    FUN_10a26e74c(&plStack_a0,*(long *)(piVar12 + 2),*(long *)(piVar12 + 4),
                  *(long *)(piVar12 + 4) - *(long *)(piVar12 + 2) >> 4);
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_10a26e74c(&plStack_88,*(long *)(piVar12 + 8),*(long *)(piVar12 + 10),
                  *(long *)(piVar12 + 10) - *(long *)(piVar12 + 8) >> 4);
  }
  plVar15 = (long *)(param_1 + 0xc0);
  lVar8 = *plVar15;
  lVar7 = *(long *)(param_1 + 200);
  while (lVar7 != lVar8) {
    lVar7 = lVar7 + -0x10;
    func_0x00010a26e988();
  }
  lVar7 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 200) = lVar8;
  lVar8 = *(long *)(param_1 + 0xe0);
  while (lVar8 != lVar7) {
    lVar8 = lVar8 + -0x10;
    func_0x00010a26e988();
  }
  lVar16 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xe0) = lVar7;
  lVar8 = *(long *)(param_1 + 0xb0);
  while (lVar8 != lVar16) {
    lVar8 = lVar8 + -0x10;
    func_0x00010a26e988();
  }
  *(long *)(param_1 + 0xb0) = lVar16;
  if (*(int *)(param_1 + 0xa0) != iStack_a8) {
    puVar13 = (undefined8 *)(param_1 + 0xf0);
    plVar17 = (long *)*puVar13;
    *(int *)(param_1 + 0xa0) = iStack_a8;
    plVar19 = *(long **)(param_1 + 0xf8);
    for (; plVar11 = plVar19, plVar17 != plVar19; plVar17 = plVar17 + 2) {
      plVar11 = plStack_a0;
      if (plStack_a0 != plStack_98) {
        lVar8 = *plVar17;
        while (*(int *)*plVar11 != *(int *)(lVar8 + 0x74)) {
          plVar11 = plVar11 + 2;
          if (plVar11 == plStack_98) goto LAB_10a25de34;
        }
      }
      if (plVar11 == plStack_98) {
LAB_10a25de30:
        lVar8 = *plVar17;
LAB_10a25de34:
        *(undefined1 *)(lVar8 + 0x30) = 0;
        FUN_10a293ea4(plVar15,plVar17);
        plVar11 = plVar17;
        plVar18 = plVar17;
        if (plVar17 != plVar19) goto LAB_10a25de50;
        break;
      }
      lVar8 = *plVar11;
      plVar11 = (long *)plVar11[1];
      if (plVar11 != (long *)0x0) {
        plVar18 = plVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar7 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (lVar8 == 0) goto LAB_10a25de30;
    }
LAB_10a25df14:
    FUN_10a293dac(puVar13,plVar11,*(undefined8 *)(param_1 + 0xf8));
    uVar14 = *(undefined8 *)(param_1 + 8);
    plVar15 = *(long **)(param_1 + 0xf0);
    plVar17 = *(long **)(param_1 + 0xf8);
    plVar19 = plStack_a0;
    plVar11 = plStack_98;
    if (plVar15 != plVar17) {
      do {
        plVar19 = plStack_88;
        if (plStack_88 == plStack_80) {
LAB_10a25df68:
          if (plVar19 == plStack_80) goto LAB_10a25dfd4;
          pplStack_70 = (long **)*plVar19;
          plStack_68 = (long *)plVar19[1];
          if (plStack_68 != (long *)0x0) {
            plVar19 = plStack_68 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *plVar19 = *plVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (pplStack_70 != (long **)0x0) {
            lVar8 = *plVar15;
            *(undefined4 *)(lVar8 + 0x74) = *(undefined4 *)pplStack_70;
            FUN_10acaf938(lVar8,uVar14,&pplStack_70);
            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x18);
            func_0x00010aa3df94(lVar8 + 0x78,&pplStack_70);
            FUN_10a29401c((long *)(param_1 + 0xd8),plVar15);
          }
        }
        else {
          do {
            if (*(int *)*plVar19 == *(int *)(*plVar15 + 0x74)) goto LAB_10a25df68;
            plVar19 = plVar19 + 2;
          } while (plVar19 != plStack_80);
LAB_10a25dfd4:
          pplStack_70 = (long **)0x0;
          plStack_68 = (long *)0x0;
        }
        plVar19 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar11 = plStack_68 + 1;
          do {
            lVar8 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar17);
      uVar14 = *(undefined8 *)(param_1 + 8);
      plVar19 = plStack_a0;
      plVar11 = plStack_98;
    }
    for (; plVar15 = plStack_98, bVar5 = plVar19 != plStack_98, plStack_98 = plVar11, bVar5;
        plVar19 = plVar19 + 2) {
      plVar17 = *(long **)(param_1 + 0xf0);
      plVar11 = *(long **)(param_1 + 0xf8);
      if (plVar17 == plVar11) {
LAB_10a25e068:
        if (plVar17 == plVar11) goto LAB_10a25e0a4;
        lVar8 = *plVar17;
        plVar17 = (long *)plVar17[1];
        if (plVar17 != (long *)0x0) {
          plVar11 = plVar17 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar7 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        if (lVar8 == 0) goto LAB_10a25e0a4;
      }
      else {
        do {
          if (*(int *)(*plVar17 + 0x74) == *(int *)*plVar19) goto LAB_10a25e068;
          plVar17 = plVar17 + 2;
        } while (plVar17 != plVar11);
LAB_10a25e0a4:
        plVar17 = (long *)0xb8;
        __Znwm();
        plVar17[2] = 0;
        pplVar9 = (long **)(plVar17 + 3);
        *plVar17 = (long)&PTR_FUN_110bb7ab8;
        plVar17[1] = 0;
        FUN_10acaf830(pplVar9,uVar14,plVar19);
        pplStack_70 = pplVar9;
        plStack_68 = plVar17;
        FUN_10a293ea4(puVar13,&pplStack_70);
        plVar17 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar11 = plStack_68 + 1;
          do {
            lVar8 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        if (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8)) goto LAB_10a25e19c;
        FUN_10a29401c((long *)(param_1 + 0xa8),*(long *)(param_1 + 0xf8) + -0x10);
      }
      plVar11 = plStack_98;
      plStack_98 = plVar15;
    }
  }
  pplStack_70 = &plStack_88;
  FUN_10a26e8c0(&pplStack_70);
  pplStack_70 = &plStack_a0;
  FUN_10a26e8c0(&pplStack_70);
  return;
}



/* Entry: 10a25e264; end: 10a25e2f3;  */

long FUN_10a25e264(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x20;
  FUN_10a26e6dc(&lStack_28);
  lStack_28 = param_1 + 8;
  FUN_10a26e6dc(&lStack_28);
  return param_1;
}



/* Entry: 10a25e2f4; end: 10a25e3f3;  */

void FUN_10a25e2f4(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(param_1 + 8) + 0xd48;
    FUN_10a5aeb74(lVar3,&PTR_DAT_110b99f08);
    lVar7 = *(long *)(lVar3 + 8);
    while (lVar7 != lVar3) {
      plVar6 = *(long **)(lVar7 + 0x28);
      lVar7 = *(long *)(lVar7 + 8);
      plVar4 = plVar6;
      (**(code **)(*plVar6 + 0x30))();
      FUN_10ab6e450();
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)((long)plVar6 + *(long *)(*plVar6 + -0x18));
        plVar5 = plVar4;
        (**(code **)(*plVar4 + 0x30))();
        uVar2 = (uint)plVar5;
        if (*(byte *)((long)plVar4 + 0x19) != uVar2) {
          *(char *)((long)plVar4 + 0x19) = (char)plVar5;
          lVar1 = 0x18;
          if (uVar2 == 0) {
            lVar1 = 0x20;
          }
          (**(code **)(*plVar4 + lVar1))(plVar4);
        }
        if (uVar2 == 0) {
          FUN_10acb4114(plVar6[1],0);
        }
        else {
          (**(code **)(*plVar6 + 0x28))(plVar6,*(undefined8 *)(param_1 + 0x18));
        }
      }
    }
  }
  return;
}



/* Entry: 10a25e3f4; end: 10a25e5e7;  */

uint FUN_10a25e3f4(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (piVar10 = *(int **)(*(long *)(param_1 + 0x18) + 0xd0), piVar10 != (int *)0x0)) &&
       (*piVar10 == 2)) {
      uVar12 = 1;
      goto LAB_10a25e588;
    }
    puVar4 = *(ulong **)(*(long *)(param_1 + 0x10) + 0x1c8);
    (**(code **)(*puVar4 + 0x80))();
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    plVar5 = (long *)puVar4[1];
    if (((plVar5 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar5, plVar5 == (long *)0x0)) ||
       (plVar6 = (long *)*puVar4, plStack_40 = plVar6, plVar6 == (long *)0x0)) {
      ppuVar7 = *(undefined ***)(*(long *)(param_1 + 0x10) + 0x1c8);
      (**(code **)(*ppuVar7 + 0xc0))();
      plVar5 = (long *)ppuVar7[1];
      if ((plVar5 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar5, plVar5 == (long *)0x0)) {
        bVar3 = true;
      }
      else {
        ppuVar8 = (undefined **)*ppuVar7;
        bVar3 = ppuVar8 == (undefined **)0x0;
        ppuStack_60 = ppuVar8;
        if (ppuVar8 != (undefined **)0x0) {
          (**(code **)(*ppuVar8 + 0x48))();
          ppuVar7 = ppuVar8;
        }
        plVar6 = plVar5 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      uVar12 = (uint)ppuVar7;
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) goto LAB_10a25e568;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x18);
      if (lVar11 == 0) {
        uVar9 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
      }
      else {
        uVar9 = *(undefined1 *)(lVar11 + 0x18);
        uStack_50 = *(undefined8 *)(lVar11 + 0x20);
        uStack_48 = *(undefined1 *)(lVar11 + 0x28);
      }
      plStack_58 = (long *)CONCAT71(plStack_58._1_7_,uVar9);
      ppuStack_60 = &PTR_DAT_110ba5598;
      (**(code **)(*plVar6 + 0x68))(plVar6,&ppuStack_60,0);
      bVar3 = false;
      uVar12 = (uint)((ulong)plVar6 >> 9) & 1;
LAB_10a25e568:
      plVar6 = plVar5 + 1;
      do {
        lVar11 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (!bVar3) goto LAB_10a25e588;
  }
  uVar12 = 0;
LAB_10a25e588:
  return uVar12 & 1;
}



/* Entry: 10a25e5e8; end: 10a25e7d3;  */

void FUN_10a25e5e8(long param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  long *plStack_48;
  
  lStack_58 = *(long *)(*param_2 + 0x210) + 0x68;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_60 = 0;
  plVar9 = (long *)(param_1 + 8);
  lVar2 = *plVar9;
  lVar3 = *(long *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x20);
  if (lVar2 == lVar3) {
    if (iVar4 != 0) {
      plStack_48 = (long *)CONCAT44(plStack_48._4_4_,iVar4);
      func_0x0001098b0050(&lStack_78,&plStack_48);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    if (iVar4 == 0) {
      plVar7 = (long *)0x28;
      __Znwm();
      *plVar7 = (long)&PTR_DAT_110bb6d30;
      plVar7[1] = param_1;
      plVar7[2] = lVar2;
      plVar7[3] = lVar3;
      plVar7[4] = *(long *)(param_1 + 0x18);
      *plVar9 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      plVar9 = &lStack_90;
      plStack_98 = plVar7;
      func_0x0001098aff74(plVar9,&plStack_98);
      plVar7 = plStack_98;
      *(int *)(param_1 + 0x20) = (int)plVar9;
      plStack_98 = (long *)0x0;
    }
    else {
      plVar7 = (long *)0x28;
      __Znwm();
      *plVar7 = (long)&PTR_DAT_110bb6d30;
      plVar7[1] = param_1;
      plVar7[2] = lVar2;
      plVar7[3] = lVar3;
      plVar7[4] = *(long *)(param_1 + 0x18);
      *plVar9 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      plStack_48 = plVar7;
      func_0x0001098b0114(&lStack_90,iVar4,&plStack_48);
      plVar7 = plStack_48;
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  func_0x0001098b0f24(&plStack_a0,param_2,&lStack_90);
  if (plStack_a0 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_a0 + 1);
    do {
      uVar8 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar8 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar8 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_a0 + 8))();
      }
    }
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  plStack_48 = &lStack_90;
  FUN_10a26dd18(&plStack_48);
  return;
}



/* Entry: 10a25e7d4; end: 10a25ec17;  */

long * FUN_10a25e7d4(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  long alStack_98 [2];
  char cStack_81;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  
  piVar4 = *(int **)(param_2 + 0x20);
  puVar15 = &UNK_10f648a81;
  if (piVar4 != (int *)0x0) {
    FUN_10a22b608(piVar4,piVar4[0x28]);
    puVar5 = &UNK_10f648a72;
    if (*piVar4 != 1) {
      puVar5 = &UNK_10f648a81;
    }
    puVar15 = &UNK_10f648a62;
    if (*piVar4 != 0) {
      puVar15 = puVar5;
    }
  }
  lVar17 = *(long *)(param_2 + 8);
  func_0x000107c2b054(alStack_98,PTR_DAT_113300e28);
  plVar7 = alStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar7,&UNK_10f647a82,0x19);
  plStack_78 = (long *)plVar7[1];
  plStack_80 = (long *)*plVar7;
  lStack_70 = plVar7[2];
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  puVar5 = puVar15;
  _strlen(puVar15);
  pplVar6 = &plStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pplVar6,puVar15,puVar5);
  plStack_d8 = pplVar6[1];
  plStack_e0 = *pplVar6;
  plStack_d0 = pplVar6[2];
  pplVar6[1] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  if (lVar17 != 0) {
    FUN_10a76c170(*(undefined8 *)(lVar17 + 0x8d8),&plStack_e0);
  }
  if ((long)plStack_d0 < 0) {
    __ZdlPv(plStack_e0);
  }
  if (lStack_70 < 0) {
    __ZdlPv(plStack_80);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(alStack_98[0]);
  }
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_10a25e9a8:
    iVar16 = 0;
  }
  else {
    plVar7 = *(long **)(*(long *)(param_2 + 0x10) + 0x1c8);
    (**(code **)(*plVar7 + 0x10))();
    if (plVar7 != (long *)0x0) {
      iVar16 = *(int *)(param_2 + 0x108);
      *(int *)(param_2 + 0x108) = iVar16 + 1;
      if (*param_4 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)(*param_4 + 0x88);
      }
      puVar13 = *(undefined8 **)(param_2 + 0x118);
      if (puVar13 < *(undefined8 **)(param_2 + 0x120)) {
        uVar20 = param_3[1];
        uVar19 = *param_3;
        uVar22 = param_3[3];
        uVar21 = param_3[2];
        uVar23 = param_3[4];
        uVar25 = param_3[7];
        uVar24 = param_3[6];
        puVar13[5] = param_3[5];
        puVar13[4] = uVar23;
        puVar13[7] = uVar25;
        puVar13[6] = uVar24;
        puVar13[1] = uVar20;
        *puVar13 = uVar19;
        puVar13[3] = uVar22;
        puVar13[2] = uVar21;
        *(undefined4 *)(puVar13 + 8) = uVar18;
        *(int *)((long)puVar13 + 0x44) = iVar16;
        puVar13 = puVar13 + 9;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x110);
        uVar9 = ((long)puVar13 - lVar17 >> 3) * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar9) {
          FUN_10a26eed0();
LAB_10a25eb68:
          func_0x000109ffded8();
          func_0x00010a2941cc(&plStack_80);
          __Unwind_Resume();
          if (plVar7[2] != 0) {
            plVar7 = *(long **)(plVar7[2] + 0x1c8);
            (**(code **)(*plVar7 + 0xc0))();
            plVar8 = (long *)plVar7[1];
            if ((plVar8 != (long *)0x0) &&
               (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) {
                plVar14 = plVar8 + 1;
                do {
                  lVar17 = *plVar14;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar3) {
                    *plVar14 = lVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar17 != 0) {
                  return (long *)0x0;
                }
                plVar14 = (long *)0x0;
              }
              else {
                plVar14 = plVar7;
                (**(code **)(*plVar7 + 0x68))(plVar7);
                plVar1 = plVar8 + 1;
                do {
                  lVar17 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar17 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar17 != 0) {
                  return plVar14;
                }
              }
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              if (plVar7 != (long *)0x0) {
                return plVar14;
              }
            }
          }
          return (long *)0x0;
        }
        lVar11 = (long)*(undefined8 **)(param_2 + 0x120) - lVar17 >> 3;
        uVar12 = lVar11 * 0x1c71c71c71c71c72;
        if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
          uVar12 = uVar9;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
          uVar12 = 0x38e38e38e38e38e;
        }
        if (0x38e38e38e38e38e < uVar12) goto LAB_10a25eb68;
        lVar11 = uVar12 * 0x48;
        __Znwm();
        puVar13 = (undefined8 *)(lVar11 + ((long)puVar13 - lVar17));
        uVar19 = *param_3;
        uVar21 = param_3[3];
        uVar20 = param_3[2];
        puVar13[1] = param_3[1];
        *puVar13 = uVar19;
        puVar13[3] = uVar21;
        puVar13[2] = uVar20;
        uVar19 = param_3[4];
        uVar21 = param_3[7];
        uVar20 = param_3[6];
        puVar13[5] = param_3[5];
        puVar13[4] = uVar19;
        puVar13[7] = uVar21;
        puVar13[6] = uVar20;
        *(undefined4 *)(puVar13 + 8) = uVar18;
        *(int *)((long)puVar13 + 0x44) = iVar16;
        puVar13 = puVar13 + 9;
        _memcpy();
        *(long *)(param_2 + 0x110) = lVar11;
        *(undefined8 **)(param_2 + 0x118) = puVar13;
        *(ulong *)(param_2 + 0x120) = lVar11 + uVar12 * 0x48;
        if (lVar17 != 0) {
          __ZdlPv(lVar17);
        }
      }
      *(undefined8 **)(param_2 + 0x118) = puVar13;
      FUN_10a25e5e8(param_2 + 0x108,plVar7);
      piVar4 = (int *)0x4;
      __Znwm();
      *piVar4 = iVar16;
      *param_1 = piVar4;
      plVar7 = (long *)0x28;
      __Znwm();
      plVar7[2] = 0;
      ppuVar10 = &PTR_FUN_110bb7b08;
      goto LAB_10a25eb00;
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x10) + 0x1c8);
    (**(code **)(*plVar7 + 0xc0))();
    plVar8 = (long *)plVar7[1];
    if ((plVar8 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar8, plVar8 == (long *)0x0))
    goto LAB_10a25e9a8;
    plStack_80 = (long *)*plVar7;
    if (plStack_80 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(param_2 + 0x108);
      *(int *)(param_2 + 0x108) = iVar16 + 1;
      plStack_d8 = (long *)param_3[1];
      plStack_e0 = (long *)*param_3;
      uStack_c8 = param_3[3];
      plStack_d0 = (long *)param_3[2];
      uStack_b8 = param_3[5];
      uStack_c0 = param_3[4];
      uStack_a8 = param_3[7];
      uStack_b0 = param_3[6];
      uStack_a0 = 0;
      if (*param_4 != 0) {
        uStack_a0 = *(undefined4 *)(*param_4 + 0x88);
      }
      iStack_9c = iVar16;
      (**(code **)(*plStack_80 + 0x58))(plStack_80,&plStack_e0);
    }
    plVar7 = plVar8 + 1;
    do {
      lVar17 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  piVar4 = (int *)0x4;
  __Znwm();
  *piVar4 = iVar16;
  *param_1 = piVar4;
  plVar7 = (long *)0x28;
  __Znwm();
  plVar7[2] = 0;
  ppuVar10 = &PTR_FUN_110bb7b68;
LAB_10a25eb00:
  *plVar7 = (long)ppuVar10;
  plVar7[1] = 0;
  plVar7[3] = (long)piVar4;
  plVar7[4] = param_2;
  param_1[1] = plVar7;
  return plVar7;
}



/* Entry: 10a25ec18; end: 10a25ed03;  */

long * FUN_10a25ec18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 0x1c8);
    (**(code **)(*plVar4 + 0xc0))();
    plVar5 = (long *)plVar4[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar7 = plVar5 + 1;
        do {
          lVar6 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          return (long *)0x0;
        }
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar4;
        (**(code **)(*plVar4 + 0x68))(plVar4);
        plVar1 = plVar5 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          return plVar7;
        }
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      if (plVar4 != (long *)0x0) {
        return plVar7;
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 10a25ed04; end: 10a25edb3;  */

void FUN_10a25ed04(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x1c8);
    (**(code **)(*plVar3 + 0xc0))();
    plVar4 = (long *)plVar3[1];
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x78))();
        }
        plVar3 = plVar4 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  return;
}



/* Entry: 10a25edb4; end: 10a25ee8b;  */

void FUN_10a25edb4(int *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  puStack_30 = &UNK_10f647a9c;
  uStack_28 = 0x17;
  if (puVar5 == (undefined8 *)0x0) {
    FUN_10a0edfc4(&puStack_30);
  }
  else {
    if ((int)param_3 == 0x7fffffff) {
      param_3 = (ulong)*(uint *)(puVar5 + 0x14);
    }
    FUN_10a22b608(puVar5,param_3);
    uVar10 = puVar5[3];
    uVar9 = puVar5[2];
    uVar8 = puVar5[5];
    uVar7 = puVar5[4];
    uVar11 = *puVar5;
    *(undefined8 *)(param_1 + 2) = puVar5[1];
    *(undefined8 *)param_1 = uVar11;
    *(undefined8 *)(param_1 + 6) = uVar10;
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)(param_1 + 10) = uVar8;
    *(undefined8 *)(param_1 + 8) = uVar7;
    uVar11 = puVar5[9];
    uVar10 = puVar5[8];
    uVar8 = puVar5[0xb];
    uVar7 = puVar5[10];
    uVar9 = *(undefined8 *)((long)puVar5 + 0x5c);
    uVar13 = puVar5[7];
    uVar12 = puVar5[6];
    *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)((long)puVar5 + 100);
    *(undefined8 *)(param_1 + 0x17) = uVar9;
    *(undefined8 *)(param_1 + 0x12) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *(undefined8 *)(param_1 + 0x16) = uVar8;
    *(undefined8 *)(param_1 + 0x14) = uVar7;
    *(undefined8 *)(param_1 + 0xe) = uVar13;
    *(undefined8 *)(param_1 + 0xc) = uVar12;
    lVar6 = puVar5[0xf];
    uVar7 = puVar5[0xe];
    *(undefined8 *)(param_1 + 0x1e) = puVar5[0xf];
    *(undefined8 *)(param_1 + 0x1c) = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*param_1 != -1) {
      return;
    }
  }
  FUN_10a00946c(&UNK_10f647ab4);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a25ee78);
  (*pcVar4)();
}



/* Entry: 10a25ee8c; end: 10a25eec7;  */

void FUN_10a25ee8c(undefined8 param_1)

{
  FUN_10a25edb4();
  func_0x00010a0eca88(param_1);
  return;
}



/* Entry: 10a25eec8; end: 10a25ef03;  */

undefined1  [16] FUN_10a25eec8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar1 = (ulong)*(uint *)(*(long *)(param_2 + 0x20) + 0xa0);
    FUN_10a25edb4(param_2,uVar1);
    func_0x00010a0eca88(param_1);
    auVar2._8_8_ = uVar1;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  auVar3._8_8_ = 9;
  auVar3._0_8_ = &UNK_10f648b81;
  return auVar3;
}



/* Entry: 10a25ef04; end: 10a25ef7b;  */

undefined1  [16] FUN_10a25ef04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f648b81;
  return auVar1;
}



/* Entry: 10a25ef7c; end: 10a25f317;  */

void FUN_10a25ef7c(ulong param_1)

{
  char ***pppcVar1;
  char ***pppcVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char **ppcStack_100;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  char **ppcStack_c0;
  char **ppcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000109887da8(&ppcStack_100,&UNK_10f648b81,9);
  pppcVar1 = (char ***)ppcStack_100;
  if (-1 < (long)uStack_f0) {
    pppcVar1 = &ppcStack_100;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9c28;
  pppcVar2 = (char ***)&UNK_10f64697a;
  if (pppcVar1 != (char ***)0x0) {
    pppcVar2 = pppcVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppcVar2);
  ppcStack_b8 = (char **)0x0;
  uStack_b0 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000019;
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_74 = 0x124;
  uStack_70 = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  ppcStack_c0 = (char **)pppcVar1;
  func_0x00010a052690(param_1 + 0x168,&ppcStack_c0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_d0 = &PTR_DAT_110bb9c28;
    uStack_c8 = 0;
    ppcStack_c0 = &PTR_DAT_110b178e0;
    ppcStack_b8 = (char **)0x0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    func_0x0001098949cc(param_1,pppcVar1,&ppuStack_d0,&ppcStack_c0);
  }
  if (uStack_f0._7_1_ < '\0') {
    __ZdlPv(ppcStack_100);
  }
  pcStack_f8 = "method";
  ppcStack_100 = (char **)0x10f27c46c;
  puStack_e8 = &DAT_10f647af8;
  uStack_f0 = &DAT_10f368f38;
  puStack_e0 = &DAT_10f647b08;
  ppcStack_c0 = (char **)&UNK_10f647add;
  uStack_b0 = 5;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000019;
  puStack_98 = &UNK_10f64697a;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_70 = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar7 = param_1;
  ppcStack_b8 = (char **)&ppcStack_100;
  FUN_10a2946b8(param_1,&ppcStack_c0);
  pcStack_f8 = "method";
  ppcStack_100 = (char **)0x10f27c46c;
  puStack_e8 = &DAT_10f647af8;
  uStack_f0 = &DAT_10f368f38;
  puStack_e0 = &DAT_10f647b08;
  ppcStack_c0 = (char **)&DAT_10f647b18;
  uStack_b0 = 5;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000019;
  puStack_98 = &UNK_10f64697a;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_70 = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  ppcStack_b8 = (char **)&ppcStack_100;
  FUN_10a2946b8();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a25f2f8;
    FUN_10a054dac(param_1,&UNK_10f647b20,FUN_10a294b48,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a25f2f8;
    FUN_10a054dac(param_1,"subscribe",FUN_10a294d98,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a25f2f8;
    FUN_10a054dac(param_1,&UNK_10f647b33,FUN_10a295028,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a25f2f8;
    FUN_10a054dac(param_1,"unsubscribe",FUN_10a2952b8,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppcStack_b8 = *(char ***)(lVar3 + -0x60);
    ppcStack_c0 = *(char ***)(lVar3 + -0x68);
    puStack_98 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_b0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_88 = *(undefined8 *)(lVar3 + -0x30);
    uStack_90 = *(undefined8 *)(lVar3 + -0x38);
    uStack_80 = *(undefined8 *)(lVar3 + -0x28);
    uStack_60 = *(undefined8 *)(lVar3 + -8);
    uStack_68 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_78 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_70 = (undefined4)uVar10;
    uStack_6c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_a8._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_a8._4_4_;
    uStack_a0._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_a0._4_4_;
    uVar7 = param_1;
    uStack_a8 = uVar9;
    uStack_a0 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppcStack_c0,param_1 + 0x1b8,&UNK_10f648b81,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a25f2f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a25f2fc);
  (*pcVar6)();
}



/* Entry: 10a25f318; end: 10a25f3f3;  */

undefined8 * FUN_10a25f318(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110bb6358;
  param_1[5] = param_2;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 2);
  puVar1[10] = puVar1 + 10;
  puVar1[0xb] = puVar1 + 10;
  puVar1[0xc] = 0;
  FUN_10a27fba8(param_1 + 6,puVar1);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return param_1;
}



/* Entry: 10a25f3f4; end: 10a25f557;  */

void FUN_10a25f3f4(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 *puStack_30;
  long *plStack_28;
  
  plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x100) + 0x1c8);
  (**(code **)(*plVar3 + 0x60))();
  puStack_30 = (undefined8 *)0x0;
  plStack_28 = (long *)0x0;
  plVar4 = (long *)plVar3[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar4;
    if (plVar4 != (long *)0x0) {
      puStack_30 = (undefined8 *)*plVar3;
      if (puStack_30 != (undefined8 *)0x0) {
        plStack_38 = (long *)param_2[1];
        uStack_40 = *param_2;
        if (param_2[1] != 0) {
          plVar3 = (long *)(param_2[1] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = *plVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        (**(code **)*puStack_30)(puStack_30,&uStack_40);
        plVar3 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 1;
          do {
            lVar5 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        goto LAB_10a25f4ec;
      }
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f647b4e,&UNK_10f647b87,0x28,&UNK_10f647be2);
  }
LAB_10a25f4ec:
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a25f558; end: 10a25f7eb;  */

code ** FUN_10a25f558(long param_1,undefined8 param_2,undefined8 param_3,code **param_4,
                     undefined8 param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  long lVar14;
  code *pcVar15;
  code **ppcVar16;
  undefined8 *puStack_350;
  code **ppcStack_348;
  code **ppcStack_340;
  code **ppcStack_338;
  code **ppcStack_330;
  code **ppcStack_328;
  undefined1 ***pppuStack_320;
  code *pcStack_318;
  code *pcStack_310;
  code **ppcStack_308;
  uint uStack_300;
  code **ppcStack_2f8;
  code *pcStack_2f0;
  code *pcStack_2e8;
  code *pcStack_2d8;
  code *apcStack_2d0 [7];
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  code **ppcStack_280;
  undefined8 uStack_278;
  code **ppcStack_270;
  code **ppcStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  code *apcStack_248 [3];
  code **ppcStack_230;
  code *apcStack_228 [3];
  code **ppcStack_210;
  undefined1 auStack_200 [152];
  long lStack_168;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long *plStack_f8;
  code **appcStack_e8 [2];
  char cStack_d1;
  undefined4 auStack_98 [2];
  code *apcStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar15 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    pcVar15 = (code *)(ulong)*(byte *)((long)param_4 + 0x17);
  }
  if ((pcVar15 == (code *)0x0) || (ppcVar16 = param_4, FUN_10a25f7ec(), ((ulong)ppcVar16 & 1) != 0))
  {
    FUN_10a25f96c(auStack_98,param_1,param_5,*param_6,param_6[1]);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      if (param_4[1] == (code *)0x0) goto LAB_10a25f640;
      param_4 = (code **)*param_4;
LAB_10a25f630:
      FUN_10a3bf330(appcStack_e8,param_4);
    }
    else {
      if (*(char *)((long)param_4 + 0x17) != '\0') goto LAB_10a25f630;
LAB_10a25f640:
      FUN_10a3bf120(appcStack_e8);
    }
    param_4 = *(code ***)(*(long *)(param_1 + 0x28) + 0x100);
    FUN_10a00ce20(auStack_118,*(undefined8 *)(param_1 + 0x30),auStack_98);
    FUN_10a295b40(&uStack_100,param_2,param_3,appcStack_e8,1,param_4 + 0x41,auStack_118);
    func_0x00010a05c07c(auStack_118);
    plVar2 = plStack_f8;
    plStack_128 = plStack_f8;
    uStack_130 = uStack_100;
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a25f3f4(param_1,&uStack_130);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar14 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_f8 != (long *)0x0) {
      plVar2 = plStack_f8 + 1;
      do {
        lVar14 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      }
    }
    FUN_10a042634(appcStack_e8);
    ppcVar16 = apcStack_90;
    (**(code **)apcStack_90[0])();
  }
  else {
    ppcVar16 = (code **)*param_6;
    auStack_98[0] = 400;
    func_0x000107c2b054(appcStack_e8,&UNK_10f647c0d);
    FUN_10a25f92c(ppcVar16,auStack_98,appcStack_e8);
    if (cStack_d1 < '\0') {
      ppcVar16 = appcStack_e8[0];
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppcVar16;
  }
  ___stack_chk_fail();
  if (cStack_d1 < '\0') {
    __ZdlPv(appcStack_e8[0]);
  }
  __Unwind_Resume();
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_10a25f7ec;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar3 = *(char *)((long)ppcVar16 + 0x17);
  ppcVar8 = (code **)*ppcVar16;
  if (-1 < (long)cVar3) {
    ppcVar8 = ppcVar16;
  }
  pcVar15 = ppcVar16[1];
  if (-1 < cVar3) {
    pcVar15 = (code *)(long)cVar3;
  }
  ppcStack_230 = (code **)0x0;
  ppcVar8 = (code **)((long)ppcVar8 + (long)pcVar15);
  ppcVar16 = apcStack_248;
  func_0x000109477bd0(apcStack_228);
  ppcVar6 = apcStack_228;
  FUN_10a2953b4(ppcVar6);
  func_0x0001094790dc(auStack_200);
  if (ppcStack_210 == apcStack_228) {
    lVar14 = 0x20;
LAB_10a25f878:
    (**(code **)(*ppcStack_210 + lVar14))();
  }
  else if (ppcStack_210 != (code **)0x0) {
    lVar14 = 0x28;
    goto LAB_10a25f878;
  }
  ppcVar7 = ppcStack_230;
  if (ppcStack_230 == apcStack_248) {
    lVar14 = 0x20;
LAB_10a25f8a4:
    (**(code **)(*ppcStack_230 + lVar14))();
  }
  else if (ppcStack_230 != (code **)0x0) {
    lVar14 = 0x28;
    goto LAB_10a25f8a4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return ppcVar6;
  }
  ___stack_chk_fail();
  func_0x000109478158(apcStack_228);
  if (ppcStack_230 == apcStack_248) {
    lVar14 = 0x20;
  }
  else {
    if (ppcStack_230 == (code **)0x0) goto LAB_10a25f924;
    lVar14 = 0x28;
  }
  (**(code **)(*ppcStack_230 + lVar14))();
LAB_10a25f924:
  ppcVar6 = ppcVar7;
  __Unwind_Resume();
  if ((ppcVar6 == (code **)0x0) || (*(char *)(ppcVar6 + 8) != '\x02')) {
    if ((ppcVar6 != (code **)0x0) && (*(char *)(ppcVar6 + 8) == '\x01')) {
      ppcVar8 = (code **)(ulong)*(uint *)ppcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010a25f964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar6)(ppcVar8,ppcVar16,ppcVar6);
      return ppcVar8;
    }
    return ppcVar6;
  }
  ppcVar13 = &pcStack_310;
  pcStack_258 = FUN_10a25f92c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar9 = ppcVar6;
  ppcVar11 = ppcVar8;
  ppcVar12 = ppcVar16;
  plStack_290 = param_6;
  uStack_288 = param_5;
  ppcStack_280 = param_4;
  uStack_278 = param_2;
  ppcStack_270 = apcStack_228;
  ppcStack_268 = ppcVar7;
  ppuStack_260 = &puStack_140;
  FUN_10a688b40();
  if (ppcVar9 == (code **)0x0) {
    ppcVar7 = (code **)0x0;
    ppcVar10 = (code **)0x0;
    if (ppcVar11 != (code **)0x0) {
      ppcStack_308 = (code **)ppcVar6[1];
      pcStack_310 = *ppcVar6;
      if (ppcVar6[1] != (code *)0x0) {
        pcVar15 = ppcVar6[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar4) {
            *(long *)pcVar15 = *(long *)pcVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_300 = *(uint *)ppcVar8;
      if (*(char *)((long)ppcVar16 + 0x17) < '\0') {
        func_0x000107c3192c(&ppcStack_2f8,*ppcVar16,ppcVar16[1]);
      }
      else {
        pcStack_2f0 = ppcVar16[1];
        ppcStack_2f8 = (code **)*ppcVar16;
        pcStack_2e8 = ppcVar16[2];
      }
      pcStack_2d8 = FUN_10a280178;
      ppcVar16 = &pcStack_2d8;
      FUN_10a2801e4(apcStack_2d0,&PTR_FUN_110bbaf30,&pcStack_310);
      ppcVar7 = &pcStack_2d8;
      FUN_10a4634ec(ppcVar11,ppcVar7);
      ppcVar10 = apcStack_2d0;
      (**(code **)apcStack_2d0[0])();
      ppcVar12 = ppcVar13;
      if ((long)pcStack_2e8 < 0) {
        ppcVar10 = ppcStack_2f8;
        __ZdlPv();
        ppcVar12 = ppcVar13;
      }
      ppcVar6 = ppcStack_308;
      if (ppcStack_308 != (code **)0x0) {
        ppcVar9 = ppcStack_308 + 1;
        do {
          pcVar15 = *ppcVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
          if (bVar4) {
            *ppcVar9 = pcVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pcVar15 == (code *)0x0) {
          (**(code **)(*ppcStack_308 + 0x10))(ppcStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppcVar10 = ppcVar6;
        }
      }
    }
  }
  else {
    *ppcVar9 = (code *)CONCAT44((int)((ulong)*ppcVar9 >> 0x20) + 1,(int)*ppcVar9 + 1);
    ppcVar10 = (code **)*ppcVar6;
    ppcVar7 = ppcVar8;
    ppcVar12 = ppcVar16;
    FUN_10a27ff08(ppcVar10,ppcVar8,ppcVar16);
    iVar5 = *(int *)((long)ppcVar9 + 4) + -1;
    *(int *)((long)ppcVar9 + 4) = iVar5;
    param_4 = ppcVar9;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar9 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    func_0x00010a004dac(&pcStack_310);
    ppcVar6 = ppcVar10;
    __Unwind_Resume();
    pcStack_318 = FUN_10a27ff08;
    ppcStack_340 = param_4;
    ppcStack_338 = ppcVar8;
    ppcStack_330 = ppcVar16;
    ppcStack_328 = ppcVar10;
    pppuStack_320 = &ppuStack_260;
    func_0x000109884c0c(&puStack_350,ppcVar6 + 1,*ppcVar6);
    func_0x000109884820(&ppcStack_348,&puStack_350,*ppcVar6);
    if (puStack_350 != (undefined8 *)0x0) {
      (**(code **)*puStack_350)();
    }
    (**(code **)(*(long *)*ppcVar6 + 0x30))(&puStack_350);
    FUN_10a280034(*ppcVar6,&puStack_350,&ppcStack_348,ppcVar7,ppcVar12);
    if (puStack_350 != (undefined8 *)0x0) {
      (**(code **)*puStack_350)();
    }
    if (ppcStack_348 != (code **)0x0) {
      (**(code **)*ppcStack_348)();
    }
    return ppcStack_348;
  }
  return ppcVar10;
}



/* Entry: 10a25f7ec; end: 10a25f92b;  */

code ** FUN_10a25f7ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  long lVar14;
  code *pcVar15;
  code **unaff_x22;
  undefined8 *puStack_220;
  code **ppcStack_218;
  code **ppcStack_210;
  code **ppcStack_208;
  code **ppcStack_200;
  code **ppcStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  code *pcStack_1e0;
  code **ppcStack_1d8;
  uint uStack_1d0;
  code **ppcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1a8;
  code *apcStack_1a0 [7];
  long lStack_168;
  undefined1 *puStack_130;
  code *pcStack_128;
  code *apcStack_118 [3];
  code **ppcStack_100;
  code *apcStack_f8 [3];
  code **ppcStack_e0;
  undefined1 auStack_d0 [152];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar2 = *(char *)((long)param_1 + 0x17);
  plVar1 = (long *)*param_1;
  if (-1 < (long)cVar2) {
    plVar1 = param_1;
  }
  lVar14 = param_1[1];
  if (-1 < cVar2) {
    lVar14 = (long)cVar2;
  }
  ppcStack_100 = (code **)0x0;
  ppcVar8 = (code **)((long)plVar1 + lVar14);
  ppcVar11 = apcStack_118;
  func_0x000109477bd0(apcStack_f8);
  ppcVar6 = apcStack_f8;
  FUN_10a2953b4(ppcVar6);
  func_0x0001094790dc(auStack_d0);
  if (ppcStack_e0 == apcStack_f8) {
    lVar14 = 0x20;
LAB_10a25f878:
    (**(code **)(*ppcStack_e0 + lVar14))();
  }
  else if (ppcStack_e0 != (code **)0x0) {
    lVar14 = 0x28;
    goto LAB_10a25f878;
  }
  ppcVar5 = ppcStack_100;
  if (ppcStack_100 == apcStack_118) {
    lVar14 = 0x20;
LAB_10a25f8a4:
    (**(code **)(*ppcStack_100 + lVar14))();
  }
  else if (ppcStack_100 != (code **)0x0) {
    lVar14 = 0x28;
    goto LAB_10a25f8a4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppcVar6;
  }
  ___stack_chk_fail();
  func_0x000109478158(apcStack_f8);
  if (ppcStack_100 == apcStack_118) {
    lVar14 = 0x20;
  }
  else {
    if (ppcStack_100 == (code **)0x0) goto LAB_10a25f924;
    lVar14 = 0x28;
  }
  (**(code **)(*ppcStack_100 + lVar14))();
LAB_10a25f924:
  __Unwind_Resume();
  if ((ppcVar5 == (code **)0x0) || (*(char *)(ppcVar5 + 8) != '\x02')) {
    if ((ppcVar5 != (code **)0x0) && (*(char *)(ppcVar5 + 8) == '\x01')) {
      ppcVar6 = (code **)(ulong)*(uint *)ppcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010a25f964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar5)(ppcVar6,ppcVar11,ppcVar5);
      return ppcVar6;
    }
    return ppcVar5;
  }
  ppcVar13 = &pcStack_1e0;
  pcStack_128 = FUN_10a25f92c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = ppcVar5;
  ppcVar9 = ppcVar8;
  ppcVar12 = ppcVar11;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    ppcVar7 = (code **)0x0;
    if (ppcVar9 != (code **)0x0) {
      ppcStack_1d8 = (code **)ppcVar5[1];
      pcStack_1e0 = *ppcVar5;
      if (ppcVar5[1] != (code *)0x0) {
        pcVar15 = ppcVar5[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar3) {
            *(long *)pcVar15 = *(long *)pcVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_1d0 = *(uint *)ppcVar8;
      if (*(char *)((long)ppcVar11 + 0x17) < '\0') {
        func_0x000107c3192c(&ppcStack_1c8,*ppcVar11,ppcVar11[1]);
      }
      else {
        pcStack_1c0 = ppcVar11[1];
        ppcStack_1c8 = (code **)*ppcVar11;
        pcStack_1b8 = ppcVar11[2];
      }
      pcStack_1a8 = FUN_10a280178;
      ppcVar11 = &pcStack_1a8;
      FUN_10a2801e4(apcStack_1a0,&PTR_FUN_110bbaf30,&pcStack_1e0);
      ppcVar10 = &pcStack_1a8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      ppcVar7 = apcStack_1a0;
      (**(code **)apcStack_1a0[0])();
      ppcVar12 = ppcVar13;
      if ((long)pcStack_1b8 < 0) {
        ppcVar7 = ppcStack_1c8;
        __ZdlPv();
        ppcVar12 = ppcVar13;
      }
      ppcVar6 = ppcStack_1d8;
      if (ppcStack_1d8 != (code **)0x0) {
        ppcVar5 = ppcStack_1d8 + 1;
        do {
          pcVar15 = *ppcVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppcVar5,0x10);
          if (bVar3) {
            *ppcVar5 = pcVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pcVar15 == (code *)0x0) {
          (**(code **)(*ppcStack_1d8 + 0x10))(ppcStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppcVar7 = ppcVar6;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    ppcVar7 = (code **)*ppcVar5;
    ppcVar10 = ppcVar8;
    ppcVar12 = ppcVar11;
    FUN_10a27ff08(ppcVar7,ppcVar8,ppcVar11);
    iVar4 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar4;
    unaff_x22 = ppcVar6;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return ppcVar7;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&pcStack_1e0);
  ppcVar6 = ppcVar7;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10a27ff08;
  ppcStack_210 = unaff_x22;
  ppcStack_208 = ppcVar8;
  ppcStack_200 = ppcVar11;
  ppcStack_1f8 = ppcVar7;
  ppuStack_1f0 = &puStack_130;
  func_0x000109884c0c(&puStack_220,ppcVar6 + 1,*ppcVar6);
  func_0x000109884820(&ppcStack_218,&puStack_220,*ppcVar6);
  if (puStack_220 != (undefined8 *)0x0) {
    (**(code **)*puStack_220)();
  }
  (**(code **)(*(long *)*ppcVar6 + 0x30))(&puStack_220);
  FUN_10a280034(*ppcVar6,&puStack_220,&ppcStack_218,ppcVar10,ppcVar12);
  if (puStack_220 != (undefined8 *)0x0) {
    (**(code **)*puStack_220)();
  }
  if (ppcStack_218 != (code **)0x0) {
    (**(code **)*ppcStack_218)();
  }
  return ppcStack_218;
}



/* Entry: 10a25f92c; end: 10a25f96b;  */

void FUN_10a25f92c(long *param_1,code **param_2,code **param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  long *unaff_x22;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  code **ppcStack_e8;
  code **ppcStack_e0;
  undefined8 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 **ppuStack_b8;
  undefined4 uStack_b0;
  undefined8 **ppuStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010a25f964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(*(undefined4 *)param_2,param_3,param_1);
      return;
    }
    return;
  }
  ppcVar11 = &pcStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  ppcVar8 = param_2;
  ppcVar10 = param_3;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_b8 = (undefined8 **)param_1[1];
      pcStack_c0 = (code *)*param_1;
      if (param_1[1] != 0) {
        plVar5 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_b0 = *(undefined4 *)param_2;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a8,*param_3,param_3[1]);
      }
      else {
        pcStack_a0 = param_3[1];
        ppuStack_a8 = (undefined8 **)*param_3;
        pcStack_98 = param_3[2];
      }
      pcStack_88 = FUN_10a280178;
      param_3 = &pcStack_88;
      FUN_10a2801e4(apuStack_80,&PTR_FUN_110bbaf30,&pcStack_c0);
      ppcVar9 = &pcStack_88;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppcVar10 = ppcVar11;
      if ((long)pcStack_98 < 0) {
        ppuVar6 = ppuStack_a8;
        __ZdlPv();
        ppcVar10 = ppcVar11;
      }
      ppuVar7 = ppuStack_b8;
      if (ppuStack_b8 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_b8 + 1;
        do {
          puVar12 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar12 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_b8)[2])(ppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*param_1;
    ppcVar9 = param_2;
    ppcVar10 = param_3;
    FUN_10a27ff08(ppuVar6,param_2,param_3);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    unaff_x22 = plVar5;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&pcStack_c0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a27ff08;
  plStack_f0 = unaff_x22;
  ppcStack_e8 = param_2;
  ppcStack_e0 = param_3;
  ppuStack_d8 = ppuVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_100,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_f8,&puStack_100,*ppuVar7);
  if (puStack_100 != (undefined8 *)0x0) {
    (**(code **)*puStack_100)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_100);
  FUN_10a280034(*ppuVar7,&puStack_100,&puStack_f8,ppcVar9,ppcVar10);
  if (puStack_100 != (undefined8 *)0x0) {
    (**(code **)*puStack_100)();
  }
  if (puStack_f8 != (undefined8 *)0x0) {
    (**(code **)*puStack_f8)();
  }
  return;
}



/* Entry: 10a25f96c; end: 10a25faa7;  */

void FUN_10a25f96c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 != (long *)0x0) {
    plVar5 = param_5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_3[1];
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_58 = param_2;
  uStack_50 = param_4;
  plStack_48 = param_5;
  FUN_10a25faa8(&uStack_70,*(undefined8 *)(param_2 + 0x30),&lStack_58);
  *param_1 = FUN_10a295cfc;
  param_1[1] = &PTR_FUN_110bb7bb8;
  param_1[2] = uStack_70;
  param_1[4] = uStack_60;
  param_1[3] = uStack_68;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10a25fd58(&uStack_70);
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
  plVar5 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a25faa8; end: 10a25fd57;  */

undefined8 * FUN_10a25faa8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar8 = *param_3;
  lVar2 = param_3[1];
  plVar10 = (long *)param_3[2];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar1 = param_3[3];
  plVar3 = (long *)param_3[4];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_a0 = &PTR_FUN_110bb6d78;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = (long *)0x48;
  lStack_c0 = lVar2;
  plStack_b8 = plVar10;
  lStack_b0 = lVar1;
  plStack_a8 = plVar3;
  lStack_98 = lVar8;
  lStack_90 = lVar2;
  plStack_88 = plVar10;
  lStack_80 = lVar1;
  plStack_78 = plVar3;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110bb6d78;
  plVar6[3] = lVar8;
  plVar6[4] = lVar2;
  plVar6[5] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6[6] = lVar1;
  plVar6[7] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar7;
  *puVar7 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar8 + 1;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar3 = plStack_b8 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uVar9 = param_2[0xb];
  puVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar12 = param_2[1];
  uVar11 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar12;
  param_1[1] = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010a07a8a8(&lStack_80);
  FUN_10a26ef68(&lStack_90);
  func_0x00010a07a8a8(&lStack_b0);
  FUN_10a26ef68(&lStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar10 = (long *)puVar7[2];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar10 != (long *)0x0) {
      if (puVar7[1] != 0) {
        FUN_10a05c0fc(puVar7[1],*puVar7);
      }
      plVar3 = plVar10 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (puVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar7;
}


