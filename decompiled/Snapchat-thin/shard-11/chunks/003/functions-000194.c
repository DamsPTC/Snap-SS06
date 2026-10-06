/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083ac93c; end: 1083ac96b;  */

bool FUN_1083ac93c(long param_1,float **param_2,float **param_3,float *param_4,undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  float **ppfVar12;
  float **ppfVar13;
  long lVar14;
  uint uVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  double dVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float *apfStack_130 [2];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  long lStack_b0;
  ulong uVar30;
  
  lVar14 = *(long *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x24);
  fVar26 = *(float *)(param_1 + 0x28);
  fVar20 = *(float *)(param_1 + 0x20);
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar16 = param_4;
  ppfVar13 = param_3;
  func_0x0001083a630c();
  uVar18 = (uint)ppfVar13;
  if (((ulong)pfVar16 & 1) != 0) {
    bVar8 = false;
    goto LAB_108406214;
  }
  iVar10 = (int)apfStack_130;
  FUN_108376ad8();
  ppfVar13 = param_3;
  if (param_5 == (undefined8 *)0x0) {
    func_0x000108406554();
    if (iVar10 != 0) {
      bVar8 = false;
      if (((float)uStack_108 == (float)uStack_100) &&
         (bVar8 = false, !NAN(uStack_108._4_4_) && !NAN(uStack_100._4_4_))) {
        bVar8 = uStack_108._4_4_ == uStack_100._4_4_;
      }
      if (bVar8) {
        uVar21 = func_0x0001084065a4(uStack_100 & 0xffffffff,0x3f8020c5);
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar21);
        func_0x000108406560();
        func_0x000108406514();
        goto LAB_108405ee8;
      }
    }
  }
  else {
    uStack_120 = *param_5;
    lStack_118 = param_5[1];
    fVar22 = 1.0;
    if (param_4[1] * 0.5 != 0.0) {
      fVar22 = param_4[1] * 0.5;
    }
    fVar28 = param_4[2] * fVar22;
    if (*(char *)((long)param_4 + 0xe) != '\0') {
      fVar28 = fVar22;
    }
    puVar11 = &uStack_120;
    func_0x00010816882c(fVar28,fVar28);
    func_0x000108406554();
    if ((int)puVar11 == 0) {
      func_0x000108406520();
      if (((ulong)puVar11 & 1) != 0) {
        pfVar16 = *param_3;
        uStack_108 = *(undefined8 *)(pfVar16 + 10);
        uStack_100 = *(ulong *)(pfVar16 + 0x10);
        lStack_f8 = uStack_100 + (long)(int)pfVar16[0x12];
        uStack_f0 = 0;
        if (*(long *)(pfVar16 + 0x16) != 0) {
          uStack_f0 = *(long *)(pfVar16 + 0x16) + -4;
        }
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        func_0x000108406580();
        dVar37 = 0.0;
        while( true ) {
          iVar10 = (int)puVar11;
          func_0x000108406580();
          if (iVar10 != 1) break;
          fVar31 = (float)uStack_c8;
          fVar29 = uStack_c8._4_4_;
          fVar22 = (float)uStack_d0;
          fVar28 = uStack_d0._4_4_;
          dVar23 = (double)_fmod(dVar37,(double)fVar26);
          puVar11 = &uStack_d0;
          FUN_1084063c4(fVar26,(float)dVar23,puVar11,&uStack_120);
          if ((int)puVar11 != 0) {
            if ((int)apfStack_130[0][0xc] < 1) {
LAB_108405eb4:
              func_0x00010840656c();
            }
            else {
              lVar1 = *(long *)(apfStack_130[0] + 10) + (ulong)(uint)apfStack_130[0][0xc] * 8;
              fVar27 = *(float *)(lVar1 + -4);
              bVar8 = false;
              if ((*(float *)(lVar1 + -8) == (float)uStack_d0) &&
                 (bVar8 = false, !NAN(fVar27) && !NAN(uStack_d0._4_4_))) {
                bVar8 = fVar27 == uStack_d0._4_4_;
              }
              if (!bVar8) goto LAB_108405eb4;
            }
            func_0x000108406514();
          }
          dVar37 = dVar37 + (double)ABS((fVar31 - fVar22) + (fVar29 - fVar28));
        }
        if (apfStack_130[0][0x12] != 0.0) goto LAB_108405ee8;
      }
    }
    else {
      puVar11 = &uStack_108;
      FUN_1084063c4(fVar26,0,puVar11,&uStack_120);
      iVar10 = (int)puVar11;
      if (iVar10 != 0) {
        func_0x000108406560();
        func_0x000108406514();
LAB_108405ee8:
        func_0x000108406520();
        if (iVar10 != 0) {
          ppfVar12 = param_3;
          FUN_108377324();
          ppfVar13 = apfStack_130;
          if (((uVar4 & 1) != 0) || ((int)ppfVar12 == 0)) goto LAB_108406020;
          FUN_10837dd94(&uStack_108,param_3,0);
          FUN_10837de14(&uStack_108);
          fVar22 = (float)func_0x000108406578();
          uVar17 = 0;
          do {
            fVar28 = *(float *)(lVar14 + uVar17 * 4);
            uVar30 = (ulong)(uint)fVar28;
            if (fVar22 <= fVar28) {
              if ((((uint)(fVar22 <= 0.0) ^ (uint)uVar17) & 1) == 0) goto LAB_108405f80;
              goto LAB_10840601c;
            }
            uVar17 = uVar17 + 1;
            fVar22 = fVar22 - fVar28;
          } while (uVar3 != uVar17);
          if ((uVar3 & 1) != 0) {
LAB_108405f80:
            fVar22 = (float)FUN_108377828(param_3,0);
            fVar28 = (float)uVar30;
            uStack_108 = CONCAT44(fVar28,fVar22);
            do {
              fVar31 = (float)func_0x00010840658c();
              bVar8 = false;
              if (fVar22 == fVar31) {
                bVar8 = false;
                if (!NAN(fVar28) && !NAN((float)uVar30)) {
                  bVar8 = fVar28 == (float)uVar30;
                }
              }
            } while (bVar8);
            do {
              fVar31 = (float)func_0x000108406598();
              bVar8 = false;
              if (fVar22 == fVar31) {
                bVar8 = false;
                if (!NAN(fVar28) && !NAN((float)uVar30)) {
                  bVar8 = fVar28 == (float)uVar30;
                }
              }
            } while (bVar8);
            func_0x00010840658c();
            uVar24 = func_0x00010840653c();
            uStack_d0 = (float *)CONCAT44(fVar28 + (float)((ulong)uVar24 >> 0x20),
                                          fVar22 + (float)uVar24);
            func_0x00010840656c();
            func_0x0001081f7a64(apfStack_130,&uStack_108);
            func_0x000108406598();
            fVar22 = (float)uStack_108;
            fVar28 = (float)((ulong)uStack_108 >> 0x20);
            uVar24 = func_0x00010840653c();
            uStack_d0 = (float *)CONCAT44(fVar28 + (float)((ulong)uVar24 >> 0x20),
                                          fVar22 + (float)uVar24);
            func_0x0001081f7a64(apfStack_130,&uStack_d0);
          }
        }
LAB_10840601c:
        ppfVar13 = apfStack_130;
      }
    }
  }
LAB_108406020:
  pfVar16 = param_4;
  FUN_10828782c();
  if (((((ulong)pfVar16 & 1) == 0) &&
      (ppfVar12 = ppfVar13, func_0x000108377358(ppfVar13,&uStack_108), (int)ppfVar12 != 0)) &&
     (*(short *)(param_4 + 3) == 0)) {
    fVar22 = (float)func_0x00010816bfdc(&uStack_108,&uStack_100);
    fVar28 = (float)uStack_100 - (float)uStack_108;
    fVar31 = (float)(uStack_100 >> 0x20) - (float)((ulong)uStack_108 >> 0x20);
    lStack_f8 = CONCAT44(fVar31,fVar28);
    if ((fVar28 == 0.0) && (fVar31 == 0.0)) goto LAB_108406084;
    uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar22);
    fVar28 = fVar28 * (1.0 / fVar22);
    fVar31 = fVar31 * (1.0 / fVar22);
    lStack_f8 = CONCAT44(fVar31,fVar28);
    if (NAN((fVar28 - fVar28) * fVar31)) goto LAB_108406084;
    uStack_f0 = CONCAT44(-(fVar28 * param_4[1] * 0.5),fVar31 * param_4[1] * 0.5);
    fVar28 = (fVar22 * (float)((int)uVar3 >> 1)) / fVar26;
    fVar22 = 1e+06;
    if (fVar28 <= 1e+06) {
      fVar22 = fVar28;
    }
    if (NAN(fVar22)) goto LAB_108406084;
    fVar22 = (float)NEON_fminnm((int)fVar22,0x4effffff);
    if (fVar22 <= -2.1474835e+09) {
      fVar22 = -2.1474835e+09;
    }
    FUN_108377c50(param_2,(int)fVar22 << 2,0,0);
    param_4[1] = -1.0;
    param_4[3] = ABS(param_4[3]);
    bVar6 = true;
  }
  else {
LAB_108406084:
    bVar6 = false;
  }
  FUN_10837dd94(&uStack_120,ppfVar13,0);
  iVar10 = 0;
  fVar22 = 0.0;
  bVar7 = true;
  bVar9 = false;
  if ((uVar4 & 1) == 0) {
    bVar7 = false;
    bVar9 = true;
    if (!NAN(fVar20)) {
      bVar7 = fVar20 < 0.0;
      bVar9 = false;
    }
  }
  do {
    uVar18 = (uint)ppfVar13;
    if (lStack_118 == 0) {
      uVar15 = 0;
      fVar28 = 0.0;
    }
    else {
      uVar15 = (uint)*(byte *)(lStack_118 + 0x44);
      fVar28 = *(float *)(lStack_118 + 0x40);
    }
    fVar22 = fVar22 + (fVar28 * (float)((int)uVar3 >> 1)) / fVar26;
    bVar8 = fVar22 <= 1e+06;
    if (1e+06 < fVar22) {
      FUN_108376d4c(param_2);
      goto LAB_108406204;
    }
    uVar18 = 1;
    uVar19 = uVar4;
    fVar29 = fVar20;
    fVar31 = 0.0;
    while (fVar31 < fVar28) {
      uVar18 = uVar19 | uVar15;
      fVar27 = fVar31 + fVar29;
      if ((uVar18 & 1) == 0) {
        iVar10 = iVar10 + 1;
        if (bVar6) {
          fVar29 = (float)uStack_e8;
          if (fVar27 <= (float)uStack_e8) {
            fVar29 = fVar27;
          }
          fVar35 = (float)((ulong)uStack_108 >> 0x20);
          fVar36 = (float)((ulong)lStack_f8 >> 0x20);
          fVar32 = (float)uStack_108 + fVar31 * (float)lStack_f8;
          fVar33 = fVar35 + fVar31 * fVar36;
          fVar34 = (float)uStack_108 + fVar29 * (float)lStack_f8;
          fVar35 = fVar35 + fVar29 * fVar36;
          auVar25._4_4_ = fVar33;
          auVar25._0_4_ = fVar32;
          auVar25._8_4_ = fVar34;
          auVar25._12_4_ = fVar35;
          auVar5._4_4_ = fVar33;
          auVar5._0_4_ = fVar32;
          auVar5._8_4_ = fVar34;
          auVar5._12_4_ = fVar35;
          auVar25 = NEON_ext(auVar25,auVar5,8,1);
          fVar31 = (float)uStack_f0;
          fVar29 = (float)((ulong)uStack_f0 >> 0x20);
          fStack_c0 = auVar25._0_4_ - fVar31;
          fStack_bc = auVar25._4_4_ - fVar29;
          fStack_b8 = auVar25._8_4_ - fVar31;
          fStack_b4 = auVar25._12_4_ - fVar29;
          uStack_c8 = CONCAT44(fVar35 + fVar29,fVar34 + fVar31);
          uStack_d0 = (float *)CONCAT44(fVar33 + fVar29,fVar32 + fVar31);
          ppfVar13 = (float **)&uStack_d0;
          FUN_108378060(param_2,ppfVar13,4,0);
        }
        else {
          ppfVar13 = param_2;
          func_0x00010837de5c(&uStack_120,param_2,1);
        }
      }
      uVar15 = 0;
      uVar2 = 0;
      if (uVar19 + 1 != uVar3) {
        uVar2 = uVar19 + 1;
      }
      fVar29 = *(float *)(lVar14 + (long)(int)uVar2 * 4);
      uVar19 = uVar2;
      fVar31 = fVar27;
    }
    if ((lStack_118 != 0) && ((bVar7 == bVar9 & *(byte *)(lStack_118 + 0x44)) != 0)) {
      ppfVar13 = param_2;
      func_0x00010837de5c(0,fVar20,&uStack_120,param_2,uVar18 & 1);
      iVar10 = iVar10 + 1;
    }
    uVar17 = 0;
    FUN_10837de6c();
    uVar18 = (uint)ppfVar13;
  } while ((uVar17 & 1) != 0);
  if (1 < iVar10) {
    *(undefined1 *)((long)param_2 + 0xc) = 1;
  }
LAB_108406204:
  FUN_10837de14(&uStack_120);
  pfVar16 = apfStack_130[0];
  FUN_10837ca5c();
LAB_108406214:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return bVar8;
  }
  ___stack_chk_fail();
  FUN_10837ca5c(apfStack_130[0]);
  fVar20 = (float)__Unwind_Resume();
  bVar8 = false;
  if ((1 < (int)uVar18) && ((uVar18 & 1) == 0)) {
    fVar26 = 0.0;
    for (uVar17 = (ulong)uVar18; uVar17 != 0; uVar17 = uVar17 - 1) {
      if (*pfVar16 < 0.0) goto LAB_1084063b8;
      fVar26 = fVar26 + *pfVar16;
      pfVar16 = pfVar16 + 1;
    }
    if (fVar26 <= 0.0) {
LAB_1084063b8:
      bVar8 = false;
    }
    else {
      bVar8 = !NAN((fVar20 - fVar20) * fVar26);
    }
  }
  return bVar8;
}



/* Entry: 1083ac96c; end: 1083acf73;  */

void FUN_1083ac96c(long param_1,uint *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(float *)(param_4 + 4) <= 0.0) || (*(int *)(param_1 + 0x18) != 2)) goto LAB_1083aca10;
  fVar11 = **(float **)(param_1 + 0x10);
  fVar14 = (*(float **)(param_1 + 0x10))[1];
  bVar1 = false;
  if ((ABS(fVar11 - fVar14) <= 0.00024414062) &&
     (bVar1 = false, !NAN(fVar11) && !NAN((float)(int)fVar11))) {
    bVar1 = fVar11 == (float)(int)fVar11;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(fVar14) && !NAN((float)(int)fVar14))) {
    bVar2 = fVar14 == (float)(int)fVar14;
  }
  if ((((!bVar2) || (func_0x000108377358(param_3,&fStack_78), (int)param_3 == 0)) ||
      (*(short *)(param_4 + 0xc) != 0)) ||
     ((uVar4 = param_5, FUN_10827a0d8(), (int)uVar4 == 0 || (param_6 == (undefined8 *)0x0))))
  goto LAB_1083aca10;
  fVar11 = fStack_70 - fStack_78;
  fVar14 = fStack_6c - fStack_74;
  if ((fVar11 != 0.0) == (fVar14 != 0.0)) goto LAB_1083aca10;
  uStack_88 = param_6[1];
  uStack_90 = *param_6;
  func_0x00010816882c(&uStack_90);
  uStack_b8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_a0 = 0x103f800000;
  FUN_10818cfd0(param_5,&uStack_c0);
  if ((int)param_5 == 0) goto LAB_1083aca10;
  FUN_108189c38(&uStack_c0,&uStack_90,1);
  if (fVar11 == 0.0) {
    fVar11 = fStack_74;
    fVar12 = fStack_6c;
    if (0.0 <= fVar14) {
      fVar11 = fStack_6c;
      fVar12 = fStack_74;
    }
    fVar13 = uStack_90._4_4_;
    if ((fVar11 <= uStack_90._4_4_) || (fVar17 = uStack_88._4_4_, uStack_88._4_4_ <= fVar12))
    goto LAB_1083aca10;
    if (fVar12 < uStack_90._4_4_) {
      fVar12 = uStack_90._4_4_ - fVar12;
      func_0x0001083ad0cc();
      fVar12 = fVar13 - fVar12;
    }
    if (fVar17 < fVar11) {
      fVar11 = fVar11 - fVar17;
      func_0x0001083ad0cc();
      fVar11 = fVar17 + fVar11;
    }
    fVar13 = fVar12;
    fStack_74 = fVar11;
    fStack_6c = fVar12;
    if (0.0 <= fVar14) {
      fVar13 = fVar11;
      fStack_74 = fVar12;
      fStack_6c = fVar11;
    }
  }
  else {
    fVar14 = fStack_78;
    fVar12 = fStack_70;
    if (0.0 <= fVar11) {
      fVar14 = fStack_70;
      fVar12 = fStack_78;
    }
    fVar13 = (float)uStack_90;
    if ((fVar14 <= (float)uStack_90) || (fVar17 = (float)uStack_88, (float)uStack_88 <= fVar12))
    goto LAB_1083aca10;
    if (fVar12 < (float)uStack_90) {
      fVar12 = (float)uStack_90 - fVar12;
      func_0x0001083ad0cc();
      fVar12 = fVar13 - fVar12;
    }
    if (fVar17 < fVar14) {
      fVar14 = fVar14 - fVar17;
      func_0x0001083ad0cc();
      fVar14 = fVar17 + fVar14;
    }
    fVar13 = fVar12;
    fStack_78 = fVar14;
    fStack_70 = fVar12;
    if (0.0 <= fVar11) {
      fVar13 = fVar14;
      fStack_78 = fVar12;
      fStack_70 = fVar14;
    }
  }
  func_0x00010816bfdc(&fStack_70,&fStack_78);
  fVar14 = fStack_74;
  fVar11 = fStack_78;
  if ((fStack_70 - fStack_78 == 0.0) && (fStack_6c - fStack_74 == 0.0)) goto LAB_1083aca10;
  fVar17 = (fStack_70 - fStack_78) * (1.0 / fVar13);
  fVar18 = (fStack_6c - fStack_74) * (1.0 / fVar13);
  fVar12 = ABS(-1.0 - fVar17);
  bVar1 = false;
  bVar2 = false;
  if (0.00024414062 < ABS(1.0 - fVar17)) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar12)) {
      bVar1 = fVar12 == 0.00024414062;
      bVar2 = 0.00024414062 <= fVar12;
    }
  }
  if (bVar2 && !bVar1) {
    fVar12 = ABS(-1.0 - fVar18);
    bVar1 = false;
    bVar2 = false;
    if (0.00024414062 < ABS(1.0 - fVar18)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar12)) {
        bVar1 = fVar12 == 0.00024414062;
        bVar2 = 0.00024414062 <= fVar12;
      }
    }
    if (!bVar2 || bVar1) {
      bVar1 = false;
      fVar12 = **(float **)(param_1 + 0x10);
      param_2[5] = (uint)(*(float *)(param_4 + 4) * 0.5);
      goto LAB_1083acc70;
    }
    if ((*(short *)(param_4 + 0xc) != 1) || (bVar1 = true, param_2 == (uint *)0x0))
    goto LAB_1083aca10;
  }
  else {
    fVar12 = *(float *)(param_4 + 4);
    param_2[5] = (uint)(**(float **)(param_1 + 0x10) * 0.5);
    bVar1 = true;
LAB_1083acc70:
    param_2[6] = (uint)(fVar12 * 0.5);
  }
  *param_2 = 0;
  fVar12 = *(float *)(param_1 + 0x20);
  if (fVar13 <= *(float *)(param_1 + 0x20)) {
    fVar12 = fVar13;
  }
  *param_2 = (uint)(*(short *)(param_4 + 0xc) == 1);
  param_2[4] = 0;
  if (fVar12 <= 0.0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      pfVar9 = *(float **)(param_1 + 0x10);
      uVar5 = 0;
      goto LAB_1083acd48;
    }
    bVar2 = false;
    uVar5 = 0;
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    pfVar9 = *(float **)(param_1 + 0x10);
    fVar15 = *pfVar9;
    if (fVar15 <= fVar12) {
      param_2[4] = 1;
    }
    uVar5 = (uint)(fVar15 <= fVar12);
    fVar13 = fVar13 - fVar12;
LAB_1083acd48:
    fVar13 = fVar13 - pfVar9[1];
    if (fVar13 < 0.0) {
      fVar13 = 0.0;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
    uVar5 = 0;
    fVar13 = fVar13 - fVar12;
  }
  fVar15 = *(float *)(param_1 + 0x28);
  fVar16 = fVar13 / fVar15;
  bVar3 = true;
  if ((fVar16 <= 1e+06) && (bVar3 = true, !NAN(fVar16 - fVar16))) {
    bVar3 = false;
  }
  if (bVar3) goto LAB_1083aca10;
  fVar16 = (float)NEON_fminnm((int)fVar16,0x4effffff);
  if (fVar16 <= -2.1474835e+09) {
    fVar16 = -2.1474835e+09;
  }
  uVar8 = (uint)fVar16;
  uVar5 = uVar5 + uVar8;
  uVar7 = (ulong)uVar5;
  param_2[4] = uVar5;
  fVar13 = fVar13 - fVar15 * (float)(int)fVar16;
  if (fVar13 <= 0.0) {
    bVar3 = false;
  }
  else if (**(float **)(param_1 + 0x10) <= fVar13) {
    bVar3 = false;
    uVar8 = uVar8 + 1;
    uVar7 = (ulong)(uVar5 + 1);
    param_2[4] = uVar5 + 1;
  }
  else {
    bVar3 = true;
  }
  puVar10 = (undefined8 *)(-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3);
  if ((int)uVar7 < 0) {
    puVar10 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *(undefined8 **)(param_2 + 2) = puVar10;
  if (fVar12 <= 0.0) {
    uVar7 = 0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    if (bVar2) goto LAB_1083aceb0;
  }
  else if (bVar2) {
    fVar15 = fVar12 * 0.5;
    fVar11 = fVar11 + fVar17 * fVar15;
    fVar13 = fVar12;
    if (**(float **)(param_1 + 0x10) <= fVar12) {
      *puVar10 = CONCAT44(fVar14 + fVar18 * fVar15,fVar11);
      uVar7 = 1;
    }
    else {
      if (!bVar1) {
        fVar15 = *(float *)(param_4 + 4) * 0.5;
      }
      FUN_1083acf74(fVar11 - fVar15,param_2 + 0x10);
      uVar7 = 0;
    }
LAB_1083aceb0:
    fVar12 = fVar13 + *(float *)(*(long *)(param_1 + 0x10) + 4);
  }
  else {
    uVar7 = 0;
  }
  if (uVar8 != 0) {
    fVar12 = fVar12 + **(float **)(param_1 + 0x10) * 0.5;
    iVar6 = (int)uVar7;
    for (; iVar6 + (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
      *(ulong *)(*(long *)(param_2 + 2) + uVar7 * 8) =
           CONCAT44(fStack_74 + fVar18 * fVar12,fStack_78 + fVar17 * fVar12);
      fVar12 = fVar12 + *(float *)(param_1 + 0x28);
    }
  }
  if (bVar3) {
    FUN_1083acf74(param_2 + 0x14);
  }
LAB_1083aca10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_108377f20();
  return;
}



/* Entry: 1083acf74; end: 1083acfa3;  */

void FUN_1083acf74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_108377f20(param_5,&uStack_20,0,0);
  return;
}



/* Entry: 1083acfa4; end: 1083ad04b;  */

undefined8 FUN_1083acfa4(long param_1,long *param_2)

{
  int iVar1;
  
  if (param_2 != (long *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 <= (int)param_2[1]) && (*param_2 != 0)) {
      _memcpy(*param_2,*(undefined8 *)(param_1 + 0x10),(long)iVar1 << 2);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_2 + 1) = iVar1;
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  }
  return 1;
}



/* Entry: 1083ad04c; end: 1083ad0af;  */

void FUN_1083ad04c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_108406368();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x30;
    __Znwm();
    FUN_1083ac82c(param_2);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1083ad0b0; end: 1083ad0d3;  */

undefined8 FUN_1083ad0b0(void)

{
  return 0;
}



/* Entry: 1083ad0d4; end: 1083ad1f3;  */

undefined8 FUN_1083ad0d4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  if (*(float *)(param_1 + 0xc) < *(float *)(param_1 + 0x10)) {
    FUN_10837dd94(0x3f800000,auStack_50,param_3,0);
    fVar6 = 0.0;
    do {
      fVar4 = 0.0;
      if (lStack_48 != 0) {
        fVar4 = *(float *)(lStack_48 + 0x40);
      }
      uVar1 = 0;
      FUN_10837de6c();
      fVar6 = fVar6 + fVar4;
    } while ((uVar1 & 1) != 0);
    fVar5 = fVar6 * *(float *)(param_1 + 0xc);
    fVar4 = fVar6 * *(float *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) == 0) {
      if (fVar5 < fVar4) {
        func_0x0001083ad3ec(fVar5,param_3);
      }
    }
    else {
      if ((fVar6 <= fVar4) || (lVar2 = param_3, func_0x0001083ad3ec(fVar4,fVar6), lVar2 != 1)) {
        uVar3 = 1;
      }
      else {
        lVar2 = param_3;
        FUN_108377324(param_3);
        uVar3 = (uint)lVar2 ^ 1;
      }
      if (0.0 < fVar5) {
        FUN_1083ad1f4(0,fVar5,param_3,param_2,uVar3);
      }
    }
    func_0x0001083ad3e4();
  }
  return 1;
}



/* Entry: 1083ad1f4; end: 1083ad2c3;  */

long FUN_1083ad1f4(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  FUN_10837dd94(0x3f800000,auStack_60,param_3,0);
  lVar2 = 1;
  fVar4 = 0.0;
  do {
    fVar3 = 0.0;
    if (lStack_58 != 0) {
      fVar3 = *(float *)(lStack_58 + 0x40);
    }
    fVar3 = fVar4 + fVar3;
    if ((param_1 < fVar3) &&
       (func_0x00010837de5c(param_1 - fVar4,param_2 - fVar4,auStack_60,param_4,param_5),
       param_2 <= fVar3)) break;
    uVar1 = 0;
    FUN_10837de6c();
    lVar2 = lVar2 + 1;
    fVar4 = fVar3;
  } while ((uVar1 & 1) != 0);
  func_0x0001083ad3e4();
  return lVar2;
}



/* Entry: 1083ad2c4; end: 1083ad31b;  */

void FUN_1083ad2c4(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0xc),param_2);
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x10),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001083ad318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* Entry: 1083ad31c; end: 1083ad3bf;  */

void FUN_1083ad31c(undefined8 *param_1,float param_2,float param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  
  if (!NAN((param_2 - param_2) * param_3)) {
    bVar1 = true;
    bVar2 = false;
    if (param_2 <= 0.0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_3)) {
        bVar1 = param_3 < 1.0;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2 || param_4 != 0) {
      fVar4 = 1.0;
      if (param_2 <= 1.0) {
        fVar4 = param_2;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar5 = 1.0;
      if (param_3 <= 1.0) {
        fVar5 = param_3;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      bVar1 = true;
      bVar2 = false;
      if (param_4 == 1) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar4) && !NAN(fVar5)) {
          bVar1 = fVar4 < fVar5;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        puVar3 = (undefined8 *)0x18;
        __Znwm();
        *(undefined4 *)(puVar3 + 1) = 1;
        *puVar3 = &PTR_FUN_110a40c28;
        *(float *)((long)puVar3 + 0xc) = fVar4;
        *(float *)(puVar3 + 2) = fVar5;
        *(int *)((long)puVar3 + 0x14) = param_4;
        goto LAB_1083ad3ac;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_1083ad3ac:
  *param_1 = puVar3;
  return;
}



/* Entry: 1083ad3c0; end: 1083ad3f7;  */

void FUN_1083ad3c0(void)

{
  return;
}



/* Entry: 1083ad3f8; end: 1083ad443;  */

undefined8 FUN_1083ad3f8(long param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (int)param_1 + 0xc;
    func_0x000108343560();
    *param_2 = iVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
  }
  return 1;
}



/* Entry: 1083ad444; end: 1083ad457;  */

bool FUN_1083ad444(long param_1)

{
  return *(int *)(param_1 + 0x1c) == 2 || *(int *)(param_1 + 0x1c) == 9;
}



/* Entry: 1083ad458; end: 1083ad49b;  */

void FUN_1083ad458(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0001083ad498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}



/* Entry: 1083ad49c; end: 1083ad5bb;  */

void FUN_1083ad49c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7,uint param_8)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a4 [100];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (0x1c < param_8) {
    *param_1 = 0;
    return;
  }
  FUN_108376234();
  uStack_40 = CONCAT44(param_3,param_2);
  uStack_38 = CONCAT44(param_5,param_4);
  uVar3 = *param_7;
  FUN_108343afc();
  FUN_108344004(auStack_a4,uVar3,3,param_6,3);
  FUN_1083441a4(auStack_a4,&uStack_40);
  fVar1 = uStack_38._4_4_;
  if (param_8 == 3) {
    if (uStack_38._4_4_ != 0.0) {
      param_8 = 3;
      if (uStack_38._4_4_ == 1.0) {
        param_8 = 1;
      }
      goto LAB_1083ad544;
    }
  }
  else if (param_8 != 2) {
    if (param_8 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      param_8 = 1;
    }
LAB_1083ad544:
    if ((((fVar1 != 0.0) || (0xd < param_8 - 3)) ||
        ((0x2163U >> (ulong)(param_8 - 3 & 0x1f) & 1) == 0)) && (fVar1 != 1.0 || param_8 != 6)) {
      puVar2 = (undefined8 *)0x20;
      __Znwm();
      *(undefined4 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR_FUN_110a40cb0;
      *(undefined8 *)((long)puVar2 + 0x14) = uStack_38;
      *(undefined8 *)((long)puVar2 + 0xc) = uStack_40;
      *(uint *)((long)puVar2 + 0x1c) = param_8;
      goto LAB_1083ad5a4;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_1083ad5a4:
  *param_1 = puVar2;
  return;
}



/* Entry: 1083ad5bc; end: 1083ad63f;  */

undefined8 FUN_1083ad5bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_94 [100];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  FUN_108387820(uVar1,0,0);
  uStack_28 = *(undefined8 *)(param_1 + 0x14);
  uStack_30 = *(undefined8 *)(param_1 + 0xc);
  FUN_108343afc();
  FUN_108344004(auStack_94,uVar1,3,param_2[3],2);
  FUN_1083441a4(auStack_94,&uStack_30);
  func_0x000108387d70(*param_2,param_2[1],&uStack_30);
  FUN_1083337ec(*(undefined4 *)(param_1 + 0x1c),*param_2);
  return 1;
}



/* Entry: 1083ad640; end: 1083ad6a7;  */

void FUN_1083ad640(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_108343500();
  uStack_38 = 0;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uStack_24 = param_5;
  FUN_1083ad49c(param_1,&uStack_30,&uStack_38,param_7);
  FUN_10810a400(&uStack_38);
  return;
}



/* Entry: 1083ad6a8; end: 1083ad6e3;  */

void FUN_1083ad6a8(void)

{
  return;
}



/* Entry: 1083ad6e4; end: 1083ad873;  */

undefined1 *
FUN_1083ad6e4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long *param_5,long param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 *puStack_928;
  undefined4 uStack_920;
  undefined1 **ppuStack_918;
  undefined1 *puStack_910;
  undefined4 uStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined8 *puStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 *puStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined4 uStack_8a0;
  undefined1 auStack_898 [32];
  undefined1 *puStack_878;
  undefined8 uStack_870;
  undefined1 auStack_868 [2048];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1082cd5d8(auStack_868,0x800);
  puStack_878 = auStack_898;
  uStack_870 = 0x400000000;
  uStack_8b8 = 0;
  uStack_8b0 = 0;
  uStack_8a8 = 0;
  uStack_8a0 = 0;
  puStack_8c0 = auStack_68;
  func_0x000108387d70(&puStack_8c0,auStack_68,param_6);
  uStack_8e0 = 0;
  uStack_8f8 = 0x3f000000;
  uStack_8d8 = 0x3f000000;
  uStack_908 = 0x12;
  ppuStack_918 = &puStack_8c0;
  puStack_910 = auStack_68;
  uStack_900 = param_7;
  FUN_10827f6c8(param_6);
  puStack_8e8 = &uStack_8e0;
  uStack_8f4 = param_2;
  uStack_8f0 = param_3;
  uStack_8ec = param_4;
  (**(code **)(*param_5 + 0x38))(param_5,&ppuStack_918,*(float *)(param_6 + 0xc) == 1.0);
  if ((int)param_5 == 0) {
    uStack_8d0 = 0;
    uStack_8c8 = 0;
  }
  else {
    puStack_928 = &uStack_8d0;
    uStack_920 = 0;
    FUN_108387820(&puStack_8c0,0x8f,&puStack_928);
    FUN_108388618(&puStack_8c0,0,0,1,1);
  }
  FUN_10821a944(&puStack_878);
  puVar1 = auStack_68;
  FUN_10840f740(auStack_68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail(uStack_8d0 & 0xffffffff,uStack_8d0._4_4_,(undefined4)uStack_8c8,uStack_8c8._4_4_
                   );
  FUN_10821a944(&puStack_878);
  FUN_10840f740(auStack_68);
  __Unwind_Resume(puVar1);
  return (undefined1 *)0x0;
}



/* Entry: 1083ad874; end: 1083ad87f;  */

undefined8 FUN_1083ad874(void)

{
  return 0;
}



/* Entry: 1083ad880; end: 1083ad907;  */

undefined8 * FUN_1083ad880(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a40d78;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[2] = uVar1;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[3] = uVar1;
  FUN_108344004(param_1 + 4,param_1[2],3,uVar1,3);
  return param_1;
}



/* Entry: 1083ad908; end: 1083ad95b;  */

undefined8 FUN_1083ad908(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  if ((param_3 & 1) == 0) {
    FUN_108387820(*param_2,0x72,0);
    func_0x0001083adc90();
    FUN_108387820(*param_2,6,0);
  }
  else {
    func_0x0001083adc90();
  }
  return 1;
}



/* Entry: 1083ad95c; end: 1083ad9c3;  */

void FUN_1083ad95c(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x000108343f3c(&uStack_28,*(undefined8 *)(param_1 + 0x10));
  FUN_108392d0c(param_2,uStack_28);
  func_0x0001083adca8();
  func_0x000108343f3c(&uStack_28,*(undefined8 *)(param_1 + 0x18));
  FUN_108392d0c(param_2,uStack_28);
  func_0x0001083adca8();
  return;
}



/* Entry: 1083ad9c4; end: 1083ada83;  */

void FUN_1083ad9c4(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if ((bRam0000000113827190 & 1) == 0) {
    iVar3 = 0x13827190;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000108343ac8(&uStack_28);
      func_0x000108343a94(auStack_30);
      func_0x0001083adcb0(0x113827108);
      func_0x0001083adc74();
      func_0x0001083adc6c();
      ___cxa_guard_release(0x113827190);
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113827110,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113827110 = iRam0000000113827110 + 1;
    }
  } while (cVar1 != '\0');
  uStack_28 = 0;
  func_0x0001083adc9c(0x113827108);
  return;
}



/* Entry: 1083ada84; end: 1083adb43;  */

void FUN_1083ada84(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if ((bRam0000000113827220 & 1) == 0) {
    iVar3 = 0x13827220;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_108343a94(&uStack_28);
      func_0x000108343ac8(auStack_30);
      func_0x0001083adcb0(0x113827198);
      func_0x0001083adc74();
      func_0x0001083adc6c();
      ___cxa_guard_release(0x113827220);
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138271a0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam00000001138271a0 = iRam00000001138271a0 + 1;
    }
  } while (cVar1 != '\0');
  uStack_28 = 0;
  func_0x0001083adc9c(0x113827198);
  return;
}



/* Entry: 1083adb44; end: 1083adb47;  */

long FUN_1083adb44(long param_1)

{
  FUN_10810a400(param_1 + 0x18);
  FUN_10810a400(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083adb48; end: 1083adb5b;  */

void FUN_1083adb48(void)

{
  FUN_1083adb78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083adb5c; end: 1083adb77;  */

undefined8 FUN_1083adb5c(void)

{
  return 0;
}



/* Entry: 1083adb78; end: 1083adba7;  */

long FUN_1083adb78(long param_1)

{
  FUN_10810a400(param_1 + 0x18);
  FUN_10810a400(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083adba8; end: 1083adbb3;  */

void FUN_1083adba8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083adbb4; end: 1083adc0f;  */

undefined8 FUN_1083adbb4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  uStack_30 = *param_3;
  *param_3 = 0;
  FUN_1083ad880(param_1,&uStack_28,&uStack_30);
  func_0x0001083adc74();
  func_0x0001083adc6c();
  return param_1;
}



/* Entry: 1083adc10; end: 1083adc5f;  */

long * FUN_1083adc10(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083adc60; end: 1083adcbb;  */

void FUN_1083adc60(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *in_stack_00000000;
  
  if (in_stack_00000000 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *in_stack_00000000;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(in_stack_00000000,0x10);
    if (bVar3) {
      *in_stack_00000000 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083adcbc; end: 1083add6b;  */

undefined8 * FUN_1083adcbc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a40e10;
  uVar1 = *param_2;
  *param_2 = 0;
  uStack_28 = 0;
  param_1[2] = uVar1;
  FUN_108115b2c(&uStack_28);
  uVar1 = *param_3;
  *param_3 = 0;
  uStack_30 = 0;
  param_1[3] = uVar1;
  FUN_108115b2c(&uStack_30);
  return param_1;
}



/* Entry: 1083add6c; end: 1083adde3;  */

void FUN_1083add6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_1083adf34(uVar1);
  plVar2 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3);
  if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083addd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
              (*(long **)(param_1 + 0x10),param_2,(uint)param_3 & (uint)uVar1);
    return;
  }
  return;
}



/* Entry: 1083adde4; end: 1083ade27;  */

void FUN_1083adde4(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001083ade24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1083ade28; end: 1083adecf;  */

void FUN_1083ade28(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar5 = *param_3;
  if (lVar5 == 0) {
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = param_2;
  }
  else {
    lVar4 = 0x20;
    __Znwm();
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *param_3;
    }
    *param_3 = 0;
    lStack_40 = lVar5;
    lStack_38 = param_2;
    FUN_1083adcbc();
    *param_1 = lVar4;
    FUN_108115b2c(&lStack_40);
    FUN_108115b2c(&lStack_38);
  }
  return;
}



/* Entry: 1083aded0; end: 1083aded3;  */

long FUN_1083aded0(long param_1)

{
  FUN_10829ba9c(param_1 + 0x18);
  FUN_10829ba9c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083aded4; end: 1083adee7;  */

void FUN_1083aded4(void)

{
  FUN_1083adf04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083adee8; end: 1083adf03;  */

undefined8 FUN_1083adee8(void)

{
  return 0;
}



/* Entry: 1083adf04; end: 1083adf33;  */

long FUN_1083adf04(long param_1)

{
  FUN_10829ba9c(param_1 + 0x18);
  FUN_10829ba9c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083adf34; end: 1083adf3f;  */

void FUN_1083adf34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083adf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* Entry: 1083adf40; end: 1083ae047;  */

undefined8 * FUN_1083adf40(undefined8 *param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  bool bVar2;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a40ea8;
  bVar2 = 0.00024414062 <= ABS(*(float *)(param_2 + 0x3c));
  bVar1 = ABS(*(float *)(param_2 + 0x3c)) == 0.00024414062;
  if ((((bVar2 && !bVar1) || (FUN_1083ae29c(*(undefined4 *)(param_2 + 0x40)), bVar2 && !bVar1)) ||
      (FUN_1083ae29c(*(undefined4 *)(param_2 + 0x44)), bVar2 && !bVar1)) ||
     (FUN_1083ae29c(*(float *)(param_2 + 0x48) + -1.0), bVar2 && !bVar1)) {
    bVar1 = false;
  }
  else {
    FUN_1083ae29c(*(undefined4 *)(param_2 + 0x4c));
    bVar1 = !bVar2 || bVar1;
  }
  *(bool *)((long)param_1 + 0x5c) = bVar1;
  *(undefined1 *)((long)param_1 + 0x5d) = param_3;
  *(undefined1 *)((long)param_1 + 0x5e) = param_4;
  _memcpy((long)param_1 + 0xc);
  return param_1;
}



/* Entry: 1083ae048; end: 1083ae04f;  */

void FUN_1083ae048(undefined8 *param_1,float *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  float *pfStack_28;
  
  uStack_29 = 0;
  fVar3 = *param_2 - *param_2;
  for (lVar1 = 4; lVar1 != 0x50; lVar1 = lVar1 + 4) {
    fVar3 = fVar3 * *(float *)((long)param_2 + lVar1);
  }
  if (NAN(fVar3)) {
    uVar2 = 0;
  }
  else {
    uStack_2a = param_3;
    pfStack_28 = param_2;
    FUN_1083ae200(&uStack_38,&pfStack_28,&uStack_29,&uStack_2a);
    uVar2 = uStack_38;
    uStack_38 = 0;
    FUN_1083ae24c(&uStack_38);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1083ae050; end: 1083ae07b;  */

undefined8 FUN_1083ae050(long param_1,long param_2)

{
  if (param_2 != 0) {
    _memcpy(param_2,param_1 + 0xc,0x50);
  }
  return 1;
}



/* Entry: 1083ae07c; end: 1083ae13f;  */

undefined8 FUN_1083ae07c(long param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  
  if (param_3 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x5c);
  }
  cVar1 = *(char *)(param_1 + 0x5d);
  cVar2 = *(char *)(param_1 + 0x5e);
  uVar5 = *param_2;
  if ((param_3 & 1) == 0) {
    func_0x0001083ae2ac(uVar5,0x72);
  }
  if (cVar1 == '\x01') {
    func_0x0001083ae2ac(uVar5,0xb4);
    FUN_108387820(uVar5,0xad,param_1 + 0xc);
    uVar3 = 0xb5;
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0xc;
    uVar3 = 0xad;
  }
  FUN_108387820(uVar5,uVar3,param_1);
  uVar4 = 3;
  if (cVar2 == '\0') {
    uVar4 = 4;
  }
  func_0x0001083ae2ac(uVar5,uVar4);
  if ((bVar6 & 1) == 0) {
    func_0x0001083ae2ac(uVar5,6);
  }
  return 1;
}



/* Entry: 1083ae140; end: 1083ae1cb;  */

void FUN_1083ae140(undefined8 *param_1,float *param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  float *pfStack_28;
  
  fVar3 = *param_2 - *param_2;
  for (lVar1 = 4; lVar1 != 0x50; lVar1 = lVar1 + 4) {
    fVar3 = fVar3 * *(float *)((long)param_2 + lVar1);
  }
  if (NAN(fVar3)) {
    uVar2 = 0;
  }
  else {
    uStack_2a = param_4;
    uStack_29 = param_3;
    pfStack_28 = param_2;
    FUN_1083ae200(&uStack_38,&pfStack_28,&uStack_29,&uStack_2a);
    uVar2 = uStack_38;
    uStack_38 = 0;
    FUN_1083ae24c(&uStack_38);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1083ae1cc; end: 1083ae1ff;  */

void FUN_1083ae1cc(undefined8 *param_1,float *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  float *pfStack_28;
  
  uStack_29 = 0;
  fVar3 = *param_2 - *param_2;
  for (lVar1 = 4; lVar1 != 0x50; lVar1 = lVar1 + 4) {
    fVar3 = fVar3 * *(float *)((long)param_2 + lVar1);
  }
  if (NAN(fVar3)) {
    uVar2 = 0;
  }
  else {
    uStack_2a = param_3;
    pfStack_28 = param_2;
    FUN_1083ae200(&uStack_38,&pfStack_28,&uStack_29,&uStack_2a);
    uVar2 = uStack_38;
    uStack_38 = 0;
    FUN_1083ae24c(&uStack_38);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1083ae200; end: 1083ae24b;  */

void FUN_1083ae200(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_1083adf40();
  *param_1 = uVar1;
  return;
}



/* Entry: 1083ae24c; end: 1083ae29b;  */

long * FUN_1083ae24c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083ae29c; end: 1083ae2cb;  */

void FUN_1083ae29c(void)

{
  return;
}



/* Entry: 1083ae2cc; end: 1083ae34f;  */

undefined8 *
FUN_1083ae2cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a40f40;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[2] = uVar1;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[3] = uVar1;
  FUN_108394f9c(param_1 + 4,param_4,param_4 + param_5 * 8);
  return param_1;
}



/* Entry: 1083ae350; end: 1083ae4c3;  */

void FUN_1083ae350(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long alStack_d8 [15];
  undefined1 uStack_5f;
  int *piStack_58;
  
  FUN_1083431b0(alStack_d8);
  iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + 8) + 0x30);
  iVar2 = *(int *)(alStack_d8[0] + 0xc);
  FUN_108392f34(alStack_d8);
  if (iVar1 <= iVar2) {
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_108393498(lVar5,0);
    if (lVar5 != 0) {
      piStack_58 = *(int **)(param_1 + 0x18);
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      lVar7 = (*(long *)(*(long *)(param_1 + 0x10) + 0x48) - lVar6) / 0x28;
      if (piStack_58 != (int *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
          if (bVar4) {
            *piStack_58 = *piStack_58 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_1083935fc(lVar6,lVar7,&piStack_58,0,param_2[3],param_2[1]);
      FUN_108154c48(&piStack_58);
      FUN_1083be2e8(alStack_d8,0x113254e20);
      uStack_5f = 1;
      lStack_f8 = *(long *)(param_1 + 0x20);
      lStack_f0 = *(long *)(param_1 + 0x28) - lStack_f8 >> 3;
      lStack_e8 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
      lStack_e0 = *(long *)(*(long *)(param_1 + 0x10) + 0x78) - lStack_e8 >> 3;
      uStack_138 = *param_2;
      uStack_130 = param_2[1];
      ppuStack_140 = &PTR_FUN_110a3fb50;
      uStack_128 = *(undefined4 *)(param_2 + 2);
      uStack_120 = param_2[3];
      uStack_118 = 0;
      uStack_108 = param_2[6];
      uStack_110 = 0;
      plStack_100 = alStack_d8;
      FUN_1083faefc(lVar5,uStack_138,uStack_130,&ppuStack_140,lVar6,lVar7);
    }
  }
  return;
}



/* Entry: 1083ae4c4; end: 1083ae4d3;  */

byte FUN_1083ae4c4(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 0x10) + 0x88) >> 7;
}



/* Entry: 1083ae4d4; end: 1083ae583;  */

void FUN_1083ae4d4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) - 500U < 0x1d) {
    (**(code **)(*param_2 + 0x38))();
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,0);
    plVar3 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x20);
    plVar1 = (long *)*plVar3;
    if (-1 < *(char *)((long)plVar3 + 0x17)) {
      plVar1 = plVar3;
    }
    lVar4 = (long)plVar1;
    _strlen(plVar1);
    (**(code **)(*param_2 + 0x50))(param_2,plVar1,lVar4);
  }
  FUN_108392d0c(param_2,*(undefined8 *)(param_1 + 0x18));
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x0001083953a0();
  (**(code **)(*param_2 + 0x38))();
  for (lVar4 = (lVar2 - lVar4 >> 3) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    (**(code **)(*unaff_x20 + 0x58))(unaff_x20,*unaff_x19);
    unaff_x19 = unaff_x19 + 1;
  }
  return;
}



/* Entry: 1083ae584; end: 1083ae58b;  */

undefined8 FUN_1083ae584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1083ae58c; end: 1083ae71b;  */

void FUN_1083ae58c(long *param_1,float param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float fStack_4c;
  long alStack_48 [3];
  
  alStack_48[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_3;
  fStack_4c = param_2;
  if (((lVar5 == 0) && (*param_4 == 0)) || (NAN(param_2))) {
    *param_1 = 0;
  }
  else {
    lVar6 = *param_4;
    if ((lVar5 == lVar6) || (param_2 <= 0.0)) {
      *param_3 = 0;
      *param_1 = lVar5;
    }
    else if (1.0 <= param_2) {
      *param_4 = 0;
      *param_1 = lVar6;
    }
    else {
      uVar4 = 0x20e;
      FUN_10835c894(0x20e);
      alStack_48[0] = *param_3;
      if (alStack_48[0] != 0) {
        piVar1 = (int *)(alStack_48[0] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      alStack_48[1] = *param_4;
      if (alStack_48[1] != 0) {
        piVar1 = (int *)(alStack_48[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_108346318(&uStack_60,&fStack_4c,4);
      uStack_58 = uStack_60;
      uStack_60 = 0;
      FUN_108394648(param_1,uVar4,&uStack_58,alStack_48,2);
      func_0x0001083ae808();
      func_0x0001083ae800();
      lVar5 = 8;
      do {
        param_3 = (long *)((long)alStack_48 + lVar5);
        FUN_108115b2c();
        lVar5 = lVar5 + -8;
      } while (lVar5 != -8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_48[2]) {
    ___stack_chk_fail();
    func_0x0001083ae808();
    func_0x0001083ae800();
    lVar5 = 8;
    do {
      FUN_108115b2c((long)alStack_48 + lVar5);
      lVar5 = lVar5 + -8;
    } while (lVar5 != -8);
    func_0x0001083ae810();
    pcStack_68 = FUN_1083ae71c;
    uVar4 = 0x20f;
    lStack_80 = lVar5;
    plStack_78 = param_3;
    puStack_70 = &stack0xfffffffffffffff0;
    FUN_10835c894(0x20f);
    func_0x0001083463dc(&uStack_90);
    uStack_88 = uStack_90;
    uStack_90 = 0;
    FUN_1083948e4(extraout_x8,uVar4,&uStack_88);
    func_0x0001083ae808();
    func_0x0001083ae800();
    return;
  }
  return;
}



/* Entry: 1083ae71c; end: 1083ae783;  */

void FUN_1083ae71c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x20f;
  FUN_10835c894(0x20f);
  func_0x0001083463dc(&uStack_30);
  uStack_28 = uStack_30;
  uStack_30 = 0;
  FUN_1083948e4(param_1,uVar1,&uStack_28);
  func_0x0001083ae808();
  func_0x0001083ae800();
  return;
}



/* Entry: 1083ae784; end: 1083ae787;  */

undefined8 * FUN_1083ae784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40f40;
  func_0x000108166098(param_1 + 4);
  FUN_108154c48(param_1 + 3);
  FUN_108154c00(param_1 + 2);
  return param_1;
}



/* Entry: 1083ae788; end: 1083ae79b;  */

void FUN_1083ae788(void)

{
  FUN_1083ae7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083ae79c; end: 1083ae7b7;  */

undefined8 FUN_1083ae79c(void)

{
  return 0;
}



/* Entry: 1083ae7b8; end: 1083ae7ff;  */

undefined8 * FUN_1083ae7b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40f40;
  func_0x000108166098(param_1 + 4);
  FUN_108154c48(param_1 + 3);
  FUN_108154c00(param_1 + 2);
  return param_1;
}



/* Entry: 1083ae800; end: 1083ae817;  */

void FUN_1083ae800(void)

{
  func_0x0001078be09c();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x000106f47128();
  }
  return;
}



/* Entry: 1083ae818; end: 1083ae8c7;  */

undefined8 FUN_1083ae818(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  if ((param_3 & 1) == 0) {
    FUN_108387820(uVar4,0x72,0);
  }
  plVar3 = (long *)param_2[1];
  func_0x0001081865ac(plVar3,0x20,8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  *plVar3 = lVar1 + lVar2;
  plVar3[1] = lVar1 + lVar2 * 2;
  plVar3[2] = lVar1 + lVar2 * 3;
  plVar3[3] = lVar1;
  FUN_108387820(uVar4,0xa3,plVar3);
  if ((param_3 == 0) || (*(char *)(plVar3[3] + 0xff) != -1)) {
    FUN_108387820(uVar4,6,0);
  }
  return 1;
}



/* Entry: 1083ae8c8; end: 1083ae8e7;  */

void FUN_1083ae8c8(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001083ae8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0x400);
  return;
}



/* Entry: 1083ae8e8; end: 1083ae92f;  */

void FUN_1083ae8e8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1083ae974(&uStack_28);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_1083aea84(&uStack_28);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1083ae930; end: 1083ae973;  */

void FUN_1083ae930(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_108344394(auStack_28);
  FUN_1083ae8e8(param_1,auStack_28);
  func_0x0001083aeaf0();
  return;
}



/* Entry: 1083ae974; end: 1083aea1b;  */

void FUN_1083ae974(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  lVar5 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR_DAT_110a40fd8;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[2] = lVar5;
  *param_1 = puVar4;
  func_0x0001083aeaf0();
  return;
}



/* Entry: 1083aea1c; end: 1083aea37;  */

undefined8 FUN_1083aea1c(void)

{
  return 0;
}



/* Entry: 1083aea38; end: 1083aea83;  */

long * FUN_1083aea38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083aea84; end: 1083aeacf;  */

long * FUN_1083aea84(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083aead0; end: 1083aeaf7;  */

void FUN_1083aead0(void)

{
  return;
}



/* Entry: 1083aeaf8; end: 1083aebab;  */

void FUN_1083aeaf8(undefined8 param_1,undefined8 *param_2,long *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if (*(char *)((long)param_2 + 0x1c) == '\x01') {
    FUN_108343cc4(*param_3,&uStack_50);
  }
  else {
    uStack_50 = *param_2;
    uStack_48 = (undefined4)param_2[1];
    uStack_3c = *(undefined8 *)((long)param_2 + 0x14);
    uStack_44 = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  }
  puVar1 = (undefined8 *)(*param_3 + 0x28);
  if (*(char *)((long)param_2 + 0x44) == '\0') {
    puVar1 = param_2 + 4;
  }
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  uStack_60 = *(undefined4 *)(puVar1 + 4);
  if ((*(byte *)((long)param_2 + 0x4c) & 1) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 9);
  }
  else {
    uVar2 = 2;
  }
  *param_4 = uVar2;
  FUN_108343830(param_1,&uStack_50,&uStack_80);
  return;
}



/* Entry: 1083aebac; end: 1083aec4f;  */

void FUN_1083aebac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_5c [16];
  undefined1 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  FUN_108333b64(auStack_38);
  uStack_40 = *param_3;
  *param_3 = 0;
  uStack_48 = *param_4;
  *param_4 = 0;
  auStack_5c[0] = 0;
  uStack_4c = 0;
  FUN_1083aec50(param_1,auStack_38,&uStack_40,&uStack_48,param_5,auStack_5c,0);
  func_0x0001083afd88();
  func_0x0001083afd80();
  FUN_108154c6c(auStack_38);
  return;
}



/* Entry: 1083aec50; end: 1083aee9b;  */

void FUN_1083aec50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,undefined8 *****param_7,undefined8 **param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined1 param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar11;
  undefined4 uVar12;
  undefined8 ****ppppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 *puStack_130;
  undefined8 ***pppuStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *puStack_a8;
  ulong auStack_a0 [2];
  undefined8 ***pppuStack_90;
  undefined8 *puStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar5 = param_6;
  pppppuVar8 = param_7;
  ppuVar9 = param_8;
  puVar10 = param_9;
  func_0x0001083afd98();
  uVar6 = *puVar5;
  uStack_58 = extraout_x8;
  if (uVar6 == 0) {
    FUN_108333b64(&ppppuStack_80,3);
    pppppuVar8 = (undefined8 *****)ppppuStack_80;
    ppppuStack_80 = (undefined8 ****)0x0;
    FUN_108166224(param_6);
    func_0x0001083afd90();
    uVar6 = *param_6;
  }
  uStack_78 = param_9[1];
  ppppuVar13 = (undefined8 ****)*param_9;
  uStack_70 = *(undefined1 *)(param_9 + 2);
  ppppuStack_80 = ppppuVar13;
  func_0x0001083afd4c();
  uVar12 = SUB84(ppppuVar13,0);
  (*extraout_x8_00)();
  uVar16 = (undefined4)param_4;
  uVar17 = (undefined4)param_5;
  uVar15 = (undefined4)param_3;
  if ((uVar6 >> 0x20 & 1) == 0) {
LAB_1083aecd8:
    pppuStack_68 = *param_7;
    *param_7 = (undefined8 ****)0x0;
    puStack_60 = *param_8;
    *param_8 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)0x60;
    __Znwm();
    uVar6 = *param_6;
    if (uVar6 != 0) {
      piVar1 = (int *)(uVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar10 = (undefined8 *)0x0;
    auStack_a0[0] = uVar6;
    FUN_108355794(puVar7,&pppuStack_68,2,0);
    *puVar7 = &PTR_FUN_110a41070;
    auStack_a0[0] = 0;
    puVar7[8] = uVar6;
    uVar14 = *param_10;
    puVar7[10] = param_10[1];
    puVar7[9] = uVar14;
    *(undefined4 *)(puVar7 + 0xb) = *(undefined4 *)(param_10 + 2);
    *(undefined1 *)((long)puVar7 + 0x5c) = param_11;
    FUN_108154c6c(auStack_a0);
    auStack_a0[1] = 0;
    pppppuVar8 = &ppppuStack_80;
    ppuVar9 = &puStack_a8;
    puStack_a8 = puVar7;
    func_0x0001083afdb4();
    func_0x0001083afd44();
    func_0x0001083afd88();
    lVar11 = 8;
    do {
      FUN_10811e834();
      uVar16 = (undefined4)param_4;
      uVar17 = (undefined4)param_5;
      uVar12 = (undefined4)uVar14;
      uVar15 = (undefined4)param_3;
      lVar11 = lVar11 + -8;
    } while (lVar11 != -8);
    in_ZR = 1;
  }
  else {
    iVar4 = (int)uVar6;
    if (iVar4 == 0) {
      FUN_1083b0da0(param_1);
      goto LAB_1083aedf8;
    }
    in_ZR = iVar4 == 2;
    if ((bool)in_ZR) {
      pppuStack_90 = *param_7;
      *param_7 = (undefined8 ****)0x0;
      pppppuVar8 = &ppppuStack_80;
      ppuVar9 = (undefined8 **)(auStack_a0 + 2);
      func_0x0001083afdb4();
    }
    else {
      in_ZR = iVar4 == 1;
      if (!(bool)in_ZR) goto LAB_1083aecd8;
      puStack_88 = *param_8;
      *param_8 = (undefined8 *)0x0;
      pppppuVar8 = &ppppuStack_80;
      ppuVar9 = &puStack_88;
      func_0x0001083afdb4();
    }
    FUN_10811e834();
  }
LAB_1083aedf8:
  func_0x0001083afd30(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = auStack_a0 + 2;
  FUN_10811e834(puVar5);
  func_0x0001083afd00();
  FUN_1083ac048(&lStack_118);
  if (lStack_118 == 0) {
    *extraout_x8_01 = 0;
  }
  else {
    lStack_120 = lStack_118;
    lStack_118 = 0;
    pppuStack_128 = *pppppuVar8;
    *pppppuVar8 = (undefined8 ****)0x0;
    puStack_130 = *ppuVar9;
    *ppuVar9 = (undefined8 *)0x0;
    uStack_134 = 1;
    uStack_144 = uVar12;
    uStack_140 = uVar15;
    uStack_13c = uVar16;
    uStack_138 = uVar17;
    FUN_1083aec50(extraout_x8_01,&lStack_120,&pppuStack_128,&puStack_130,puVar10,&uStack_144,puVar5)
    ;
    func_0x0001083afd80();
    FUN_10811e834(&pppuStack_128);
    func_0x0001083afd90();
  }
  FUN_108154c6c(&lStack_118);
  return;
}



/* Entry: 1083aee9c; end: 1083aef97;  */

void FUN_1083aee9c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  FUN_1083ac048(&lStack_68);
  if (lStack_68 == 0) {
    *param_1 = 0;
  }
  else {
    lStack_70 = lStack_68;
    lStack_68 = 0;
    uStack_78 = *param_7;
    *param_7 = 0;
    uStack_80 = *param_8;
    *param_8 = 0;
    uStack_84 = 1;
    uStack_94 = param_2;
    uStack_90 = param_3;
    uStack_8c = param_4;
    uStack_88 = param_5;
    FUN_1083aec50(param_1,&lStack_70,&uStack_78,&uStack_80,param_9,&uStack_94,param_6);
    func_0x0001083afd80();
    FUN_10811e834(&uStack_78);
    func_0x0001083afd90();
  }
  FUN_108154c6c(&lStack_68);
  return;
}



/* Entry: 1083aef98; end: 1083af023;  */

void FUN_1083aef98(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uStack_30 = *param_3;
    *param_3 = 0;
    FUN_1083af024(&uStack_28,param_2,&uStack_30);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_108167c3c(param_3,uVar1);
    func_0x0001083afd44();
    FUN_10811e834(&uStack_30);
  }
  uVar1 = *param_3;
  *param_3 = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 1083af024; end: 1083af05f;  */

void FUN_1083af024(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  FUN_1083b0cc8(param_1,3,&uStack_28);
  func_0x0001083afd44();
  return;
}



/* Entry: 1083af060; end: 1083af08f;  */

undefined8 * FUN_1083af060(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110a41070;
  FUN_108154c6c(param_1 + 8);
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083af090; end: 1083af0a3;  */

void FUN_1083af090(void)

{
  FUN_1083af060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083af0a4; end: 1083af0b7;  */

undefined8 FUN_1083af0a4(void)

{
  return 0;
}



/* Entry: 1083af0b8; end: 1083af17b;  */

void FUN_1083af0b8(void)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001083afda8();
  FUN_1083559b0();
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    (**(code **)(*unaff_x19 + 0x38))();
    func_0x0001083afce0(*(undefined4 *)(unaff_x20 + 0x48));
    func_0x0001083afce0(*(undefined4 *)(unaff_x20 + 0x4c));
    func_0x0001083afce0(*(undefined4 *)(unaff_x20 + 0x50));
    func_0x0001083afce0(*(undefined4 *)(unaff_x20 + 0x54));
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x20);
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 0x40);
    func_0x0001083afd4c();
    (*extraout_x8)();
    if ((uVar1 >> 0x20 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0001083af15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x58))();
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001083af178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1083af17c; end: 1083af307;  */

ulong FUN_1083af17c(ulong param_1,float param_2,undefined4 param_3,undefined4 param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong *unaff_x19;
  long unaff_x20;
  undefined4 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x0001083afda8();
  func_0x0001083afcf0();
  if ((param_5 >> 0x20 & 1) == 0) {
    if ((*(char *)(unaff_x20 + 0x58) != '\x01') || (*(float *)(unaff_x20 + 0x54) != 0.0)) {
      return 0xce000000ce000000;
    }
    param_2 = *(float *)(unaff_x20 + 0x4c);
    param_1 = (ulong)(uint)*(float *)(unaff_x20 + 0x50);
    bVar3 = *(float *)(unaff_x20 + 0x50) == 0.0;
    bVar4 = param_2 == 0.0;
  }
  else {
    iVar5 = (int)param_5;
    if (iVar5 < 0xf) {
      bVar3 = (1L << ((long)iVar5 & 0x3fU) & 0xa3U) != 0 ||
              (param_5 << 0x20 == 0x600000000 || param_5 << 0x20 == 0xa00000000);
      bVar4 = (*(uint *)(&UNK_10df1c57c + (long)iVar5 * 8) & 0xfffffff7) == 0;
    }
    else {
      bVar3 = false;
      bVar4 = false;
    }
  }
  if (*(int *)(unaff_x20 + 0x30) < 2) {
LAB_1083af270:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1083af274);
    (*pcVar2)();
  }
  if (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) == 0) {
    uStack_38 = unaff_x19[1];
    param_1 = *unaff_x19;
    uStack_40 = param_1;
  }
  else {
    func_0x0001083afd4c();
    (*extraout_x8)();
    uStack_40 = CONCAT44(param_2,(int)param_1);
    uStack_38 = CONCAT44(param_4,param_3);
    if (*(int *)(unaff_x20 + 0x30) < 1) goto LAB_1083af270;
  }
  uVar7 = (undefined4)param_1;
  if (**(long **)(unaff_x20 + 0x10) == 0) {
    uStack_48 = unaff_x19[1];
    uStack_50 = *unaff_x19;
  }
  else {
    func_0x0001083afd4c();
    (*extraout_x8_00)();
    uStack_50 = CONCAT44(param_2,uVar7);
    uStack_48 = CONCAT44(param_4,param_3);
  }
  if (bVar3) {
    uVar1 = uStack_40;
    if (bVar4) {
      puVar6 = &uStack_40;
      FUN_10838ed10(puVar6,&uStack_50);
      uVar1 = uStack_40;
      if ((int)puVar6 == 0) {
        return 0;
      }
    }
  }
  else {
    uVar1 = uStack_50;
    if (!bVar4) {
      func_0x00010838ed50(&uStack_50,&uStack_40);
      uVar1 = uStack_50;
    }
  }
  return uVar1 & 0xffffffff;
}



/* Entry: 1083af308; end: 1083af30f;  */

undefined8 FUN_1083af308(void)

{
  return 2;
}



/* Entry: 1083af310; end: 1083af35b;  */

bool FUN_1083af310(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x0001083afcf0();
  if ((uVar2 >> 0x20 & 1) == 0) {
    if (*(char *)(param_1 + 0x58) == '\x01') {
      bVar1 = *(float *)(param_1 + 0x54) != 0.0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1083af35c; end: 1083af75f;  */

void FUN_1083af35c(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long **pplVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int iVar13;
  long *plStack_328;
  long *plStack_320;
  undefined1 uStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [152];
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar8 = param_2;
  lVar11 = param_3;
  func_0x0001083afd98();
  uStack_298 = *(undefined8 *)(lVar11 + 0x138);
  uStack_2a0 = *(undefined8 *)(lVar11 + 0x130);
  uStack_290 = 1;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar8 + 0x70))(&lStack_150);
  uVar6 = (char)uStack_140 == '\x01';
  if ((bool)uVar6) {
    plVar8 = &lStack_150;
    func_0x00010821b838(plVar8,param_3 + 200);
    if (((ulong)plVar8 & 1) != 0) goto LAB_1083af3ec;
    FUN_10833dd8c(param_1);
  }
  else {
    uStack_148 = *(undefined8 *)(param_3 + 0xd0);
    lStack_150 = *(long *)(param_3 + 200);
    uStack_140 = CONCAT31(uStack_140._1_3_,1);
LAB_1083af3ec:
    FUN_1083415ec(&uStack_2a0,param_3);
    uStack_1d0 = uStack_148;
    lStack_1d8 = lStack_150;
    puStack_70 = auStack_108;
    uStack_68 = 0x200000000;
    puStack_58 = auStack_60;
    uStack_50 = 0x200000000;
    lStack_110 = param_3;
    FUN_108355e28(&lStack_310,param_2,0,&uStack_2a0);
    plStack_328 = (long *)((ulong)plStack_328 & 0xffffffffffffff00);
    uStack_318 = 0;
    func_0x0001083afd08();
    func_0x0001083afde0();
    FUN_108355e28(&lStack_310,param_2,1,&uStack_2a0);
    plStack_328 = (long *)((ulong)plStack_328 & 0xffffffffffffff00);
    uStack_318 = 0;
    func_0x0001083afd08();
    func_0x0001083afde0();
    uStack_308 = uStack_148;
    lStack_310 = lStack_150;
    uStack_300 = uStack_140;
    plVar9 = &lStack_110;
    plVar8 = &lStack_310;
    FUN_10835a390();
    bVar4 = false;
    uVar6 = true;
    bVar5 = false;
    if ((int)plVar9 < (int)plVar8) {
      iVar7 = (int)((ulong)plVar9 >> 0x20);
      iVar13 = (int)((ulong)plVar8 >> 0x20);
      bVar5 = SBORROW4(iVar13,iVar7);
      bVar4 = iVar13 - iVar7 < 0;
      uVar6 = iVar13 == iVar7;
    }
    plStack_328 = plVar9;
    plStack_320 = plVar8;
    if ((bool)uVar6 || bVar4 != bVar5) {
      FUN_10833dd8c(param_1);
    }
    else {
      plVar8 = &lStack_110;
      pplVar12 = &plStack_328;
      FUN_108359ff4(plVar8,pplVar12,0);
      if (pplVar12 == (long **)0x0) goto LAB_1083af6d0;
      lStack_130 = *plVar8;
      if (lStack_130 != 0) {
        piVar1 = (int *)(lStack_130 + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar6 = pplVar12 == (long **)0x1;
      if ((bool)uVar6) goto LAB_1083af6d0;
      lStack_138 = plVar8[1];
      if (lStack_138 == 0) {
        lStack_138 = 0;
LAB_1083af518:
        plVar8 = param_2;
        (**(code **)(*param_2 + 0x50))();
        if (((((ulong)plVar8 & 1) != 0) || (lStack_130 != 0)) || (lStack_138 != 0)) {
          uVar10 = param_2[8];
          func_0x0001083afd4c();
          (*extraout_x8_00)();
          if ((uVar10 >> 0x20 & 1) != 0) {
            iVar7 = (int)uVar10;
            uVar6 = iVar7 == 0xe;
            if (iVar7 < 0xf) {
              if ((lStack_130 == 0) ||
                 (uVar6 = 7 < *(uint *)(&UNK_10df1c580 + (long)iVar7 * 8) ||
                          (1 << (ulong)(*(uint *)(&UNK_10df1c580 + (long)iVar7 * 8) & 0x1f) & 0x8aU)
                          == 0, (bool)uVar6)) {
                if ((lStack_138 == 0) ||
                   (uVar6 = (*(uint *)(&UNK_10df1c57c + (long)iVar7 * 8) & 0xfffffff7) == 1,
                   !(bool)uVar6)) goto LAB_1083af5cc;
                plVar8 = &lStack_138;
                lStack_310 = lStack_138;
              }
              else {
                plVar8 = &lStack_130;
                lStack_310 = lStack_130;
              }
              *plVar8 = 0;
              goto LAB_1083af66c;
            }
          }
LAB_1083af5cc:
          if (lStack_130 == 0) {
            func_0x0001083afde8();
            lVar11 = lStack_130;
            lStack_130 = lStack_310;
            lStack_310 = 0;
            func_0x0001083afcb4(lVar11);
            func_0x0001083afd78();
          }
          if (lStack_138 == 0) {
            func_0x0001083afde8();
            lVar11 = lStack_138;
            lStack_138 = lStack_310;
            lStack_310 = 0;
            func_0x0001083afcb4(lVar11);
            func_0x0001083afd78();
          }
          goto LAB_1083af610;
        }
        lStack_310 = 0;
      }
      else {
        piVar1 = (int *)(lStack_138 + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lStack_130 == 0) goto LAB_1083af518;
LAB_1083af610:
        lStack_120 = lStack_130;
        lStack_128 = lStack_138;
        lStack_118 = param_2[8];
        if (lStack_118 != 0) {
          piVar1 = (int *)(lStack_118 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_138 = 0;
        lStack_130 = 0;
        FUN_1083ba5cc(&lStack_310,&lStack_118,&lStack_120,&lStack_128);
        func_0x000106f47224(&lStack_128);
        func_0x000106f47224(&lStack_120);
        FUN_108154c6c(&lStack_118);
      }
LAB_1083af66c:
      func_0x000106f47224(&lStack_138);
      func_0x000106f47224(&lStack_130);
      FUN_10835a3d8(param_1,&lStack_110,&lStack_310,&plStack_328,0);
      func_0x0001083afd78();
    }
    FUN_108359fc8(&lStack_110);
    FUN_108341670(&uStack_2a0);
  }
  func_0x0001083afd30(uStack_48);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_1083af6d0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1083af6d4);
  (*pcVar3)();
}



/* Entry: 1083af760; end: 1083af86f;  */

void FUN_1083af760(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long **pplVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *unaff_x19;
  long *unaff_x20;
  uint uVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  long *plStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  byte bStack_80;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  pplVar8 = &plStack_b0;
  puVar6 = param_4;
  func_0x0001083afda8();
  func_0x0001083afd98();
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uVar2 = *(char *)(puVar6 + 2) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar2) {
    uStack_a8 = param_4[1];
    plStack_b0 = (long *)*param_4;
    cStack_a0 = *(char *)(puVar6 + 2);
    (**(code **)(*unaff_x20 + 0x70))(&uStack_90);
    param_1 = unaff_x20;
    if ((bStack_80 & 1) == 0) goto LAB_1083af80c;
    uStack_70 = uStack_90;
    uStack_6f = uStack_8f;
    uStack_68 = uStack_88;
    uStack_67 = uStack_87;
    param_1 = (long *)&uStack_70;
    func_0x00010821b838(param_1,param_3);
    if (((ulong)param_1 & 1) == 0) {
      plVar4 = (long *)0x0;
      uVar7 = 0;
      unaff_x19 = pplVar8;
      goto LAB_1083af84c;
    }
  }
  else {
LAB_1083af80c:
    uStack_68 = (undefined1)param_3[1];
    uStack_67 = (undefined7)((ulong)param_3[1] >> 8);
    uStack_70 = (undefined1)*param_3;
    uStack_6f = (undefined7)((ulong)*param_3 >> 8);
  }
  func_0x0001083afd58();
  uVar7 = 0;
  func_0x000108355d18();
  plStack_58 = param_1;
  uStack_50 = uVar7;
  func_0x0001083afd58();
  uVar7 = 1;
  func_0x000108355d18();
  plStack_b0 = param_1;
  uStack_a8 = uVar7;
  FUN_10838eae0(&plStack_58,&plStack_b0);
  plVar4 = plStack_58;
  uVar7 = uStack_50;
LAB_1083af84c:
  func_0x0001083afd30(uStack_38,plVar4,uVar7);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  plVar5 = plVar4;
  func_0x0001083afcf0();
  if (((ulong)plVar5 >> 0x20 & 1) == 0) {
    if (((char)plVar4[0xb] != '\x01') || (*(float *)((long)plVar4 + 0x54) != 0.0)) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
      return;
    }
    uVar9 = (uint)(*(float *)(plVar4 + 10) == 0.0);
    bVar3 = *(float *)((long)plVar4 + 0x4c) == 0.0;
  }
  else if ((int)plVar5 < 0xf) {
    lVar1 = (long)(int)plVar5 * 8;
    uVar9 = (uint)(*(uint *)(&UNK_10df1c580 + lVar1) < 7) &
            0x45U >> (ulong)(*(uint *)(&UNK_10df1c580 + lVar1) & 0x1f);
    bVar3 = (*(uint *)(&UNK_10df1c57c + lVar1) & 0xfffffff7) == 0;
  }
  else {
    bVar3 = false;
    uVar9 = 0;
  }
  uStack_128 = unaff_x19[1];
  uStack_130 = *unaff_x19;
  uStack_120 = *(uint *)(unaff_x19 + 2);
  func_0x000108355db4(&uStack_110,plVar4,1,uVar7,&uStack_130);
  uStack_148 = unaff_x19[1];
  uStack_150 = *unaff_x19;
  uStack_140 = *(undefined4 *)(unaff_x19 + 2);
  func_0x000108355db4(&uStack_130,plVar4,0,uVar7,&uStack_150);
  if (uVar9 == 0) {
    if (!bVar3) {
      if (((char)uStack_100 == '\x01') && ((uStack_120 & 0xff) != 0)) {
        FUN_10838eae0(&uStack_130,&uStack_110);
      }
      else if ((uStack_120 & 0xff) != 0) {
        uStack_120 = uStack_120 & 0xffffff00;
      }
    }
    extraout_x8_00[1] = uStack_128;
    *extraout_x8_00 = uStack_130;
    uStack_100 = uStack_120;
  }
  else {
    if (bVar3) {
      if (((uStack_100 & 1) == 0) && ((uStack_120 & 0xff) != 0)) {
        uStack_108 = uStack_128;
        uStack_110 = uStack_130;
        uStack_100 = CONCAT31(uStack_100._1_3_,1);
      }
      else if ((uStack_120 & 0xff) != 0) {
        puVar6 = &uStack_110;
        func_0x00010821b838(puVar6,&uStack_130);
        if (((ulong)puVar6 & 1) == 0) {
          *extraout_x8_00 = 0;
          extraout_x8_00[1] = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          return;
        }
      }
    }
    extraout_x8_00[1] = uStack_108;
    *extraout_x8_00 = uStack_110;
  }
  *(uint *)(extraout_x8_00 + 2) = uStack_100;
  return;
}



/* Entry: 1083af870; end: 1083afa1f;  */

void FUN_1083af870(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  
  uVar3 = param_2;
  func_0x0001083afcf0();
  if ((uVar3 >> 0x20 & 1) == 0) {
    if ((*(char *)(param_2 + 0x58) != '\x01') || (*(float *)(param_2 + 0x54) != 0.0)) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    uVar5 = (uint)(*(float *)(param_2 + 0x50) == 0.0);
    bVar2 = *(float *)(param_2 + 0x4c) == 0.0;
  }
  else if ((int)uVar3 < 0xf) {
    lVar1 = (long)(int)uVar3 * 8;
    uVar5 = (uint)(*(uint *)(&UNK_10df1c580 + lVar1) < 7) &
            0x45U >> (ulong)(*(uint *)(&UNK_10df1c580 + lVar1) & 0x1f);
    bVar2 = (*(uint *)(&UNK_10df1c57c + lVar1) & 0xfffffff7) == 0;
  }
  else {
    bVar2 = false;
    uVar5 = 0;
  }
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = *(uint *)(param_4 + 2);
  func_0x000108355db4(&uStack_60,param_2,1,param_3,&uStack_80);
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  uStack_90 = *(undefined4 *)(param_4 + 2);
  func_0x000108355db4(&uStack_80,param_2,0,param_3,&uStack_a0);
  if (uVar5 == 0) {
    if (!bVar2) {
      if (((char)uStack_50 == '\x01') && ((uStack_70 & 0xff) != 0)) {
        FUN_10838eae0(&uStack_80,&uStack_60);
      }
      else if ((uStack_70 & 0xff) != 0) {
        uStack_70 = uStack_70 & 0xffffff00;
      }
    }
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    uStack_50 = uStack_70;
  }
  else {
    if (bVar2) {
      if (((uStack_50 & 1) == 0) && ((uStack_70 & 0xff) != 0)) {
        uStack_58 = uStack_78;
        uStack_60 = uStack_80;
        uStack_50 = CONCAT31(uStack_50._1_3_,1);
      }
      else if ((uStack_70 & 0xff) != 0) {
        puVar4 = &uStack_60;
        func_0x00010821b838(puVar4,&uStack_80);
        if (((ulong)puVar4 & 1) == 0) {
          *param_1 = 0;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          return;
        }
      }
    }
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
  }
  *(uint *)(param_1 + 2) = uStack_50;
  return;
}



/* Entry: 1083afa20; end: 1083afaab;  */

long FUN_1083afa20(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_c8 [104];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_108341774(auStack_c8);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = *(undefined1 *)(param_3 + 2);
  uStack_40 = param_5[1];
  uStack_48 = *param_5;
  uStack_38 = param_5[2];
  uStack_4c = param_4;
  FUN_1083afaac(param_1 + 0xa0,auStack_c8);
  FUN_1083414c4(auStack_c8);
  return param_1;
}



/* Entry: 1083afaac; end: 1083afb47;  */

long * FUN_1083afaac(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar3 = (long *)(*param_1 + (long)(int)param_1[1] * 0x98);
    func_0x0001083afdbc();
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1083afba8(0x3ff8000000000000,param_1,1);
    plVar3 = plVar1 + (long)(int)param_1[1] * 0x13;
    func_0x0001083afdbc();
    FUN_1083afbcc(param_1,plVar1,uVar2);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return plVar3;
}



/* Entry: 1083afb48; end: 1083afba7;  */

void FUN_1083afb48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001083afda8();
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  _memcpy(param_1 + 1,param_2 + 1,0x48);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  return;
}



/* Entry: 1083afba8; end: 1083afbcb;  */

void FUN_1083afba8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)(*(uint *)(param_1 + 1) ^ 0x7fffffff) < (int)param_2) {
    func_0x00010bdb1a68();
    pcStack_18 = FUN_1083afbcc;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_1083afc58();
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    param_3 = param_3 / 0x98;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *param_1 = param_2;
    *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  pcStack_18 = (code *)0x7fffffff;
  puStack_20 = (undefined1 *)0x98;
  FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
  return;
}



/* Entry: 1083afbcc; end: 1083afc27;  */

void FUN_1083afbcc(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  FUN_1083afc58();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x98;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1083afc28; end: 1083afc57;  */

void FUN_1083afc28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x98;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083afc58; end: 1083afcb3;  */

void FUN_1083afc58(void)

{
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x0001083afda8();
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < (int)unaff_x20[1]; lVar2 = lVar2 + 1) {
    FUN_1083afb48(unaff_x19,*unaff_x20 + lVar1);
    FUN_1083414c4(*unaff_x20 + lVar1);
    unaff_x19 = unaff_x19 + 0x98;
    lVar1 = lVar1 + 0x98;
  }
  return;
}



/* Entry: 1083afcb4; end: 1083afdf3;  */

void FUN_1083afcb4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083afcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083afdf4; end: 1083b0013;  */

void FUN_1083afdf4(undefined8 *param_1,float param_2,float param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (0.0 <= param_3) {
    bVar1 = true;
    if ((0.0 <= param_2) && (bVar1 = true, !NAN((param_2 - param_2) * param_3))) {
      bVar1 = false;
    }
    if (!bVar1) {
      if ((int)param_4 == 3) {
        uVar3 = *param_5;
        *param_5 = 0;
        *param_1 = uVar3;
      }
      else {
        if ((*(byte *)(param_6 + 0x10) & 1) == 0) {
          puVar2 = (undefined8 *)0x50;
          __Znwm();
          uStack_48 = *param_5;
          *param_5 = 0;
          func_0x0001083b07c4();
          *puVar2 = &PTR_FUN_110a41110;
          *(float *)(puVar2 + 8) = param_2;
          *(float *)((long)puVar2 + 0x44) = param_3;
          *(int *)(puVar2 + 9) = (int)param_4;
          func_0x0001083b07bc();
          uStack_48 = 0;
          *param_1 = puVar2;
          FUN_1083b0014(&uStack_48);
          return;
        }
        uStack_50 = *param_5;
        *param_5 = 0;
        *param_1 = 0;
        FUN_1083b0cc8(&uStack_48,param_6,param_4,&uStack_50);
        uVar3 = uStack_48;
        uStack_48 = 0;
        FUN_108167c3c(param_1,uVar3);
        func_0x0001083b07bc();
        FUN_10811e834(&uStack_50);
      }
      puVar2 = (undefined8 *)0x50;
      __Znwm();
      uStack_48 = *param_1;
      *param_1 = 0;
      func_0x0001083b07c4();
      *puVar2 = &PTR_FUN_110a41110;
      *(float *)(puVar2 + 8) = param_2;
      *(float *)((long)puVar2 + 0x44) = param_3;
      *(undefined4 *)(puVar2 + 9) = 3;
      func_0x0001083b07bc();
      uStack_58 = 0;
      FUN_108167c3c(param_1,puVar2);
      FUN_1083b0014(&uStack_58);
      if (*(char *)(param_6 + 0x10) != '\x01') {
        return;
      }
      uStack_60 = *param_1;
      *param_1 = 0;
      FUN_1083b0cc8(&uStack_48,param_6,3,&uStack_60);
      uVar3 = uStack_48;
      uStack_48 = 0;
      FUN_108167c3c(param_1,uVar3);
      func_0x0001083b07bc();
      FUN_10811e834(&uStack_60);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b0014; end: 1083b0063;  */

long * FUN_1083b0014(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083b0064; end: 1083b0067;  */

undefined8 * FUN_1083b0064(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b0068; end: 1083b007b;  */

void FUN_1083b0068(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


