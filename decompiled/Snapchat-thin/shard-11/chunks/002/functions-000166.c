/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10831f074; end: 10831f09b;  */

void FUN_10831f074(undefined8 param_1)

{
  func_0x00010831f4f0();
  func_0x00010831f3cc(param_1,&PTR_DAT_110a3c100);
  func_0x00010831f2c0();
  return;
}



/* Entry: 10831f09c; end: 10831f0a7;  */

undefined ** FUN_10831f09c(void)

{
  return &PTR_DAT_110a3c100;
}



/* Entry: 10831f0a8; end: 10831f0e3;  */

long FUN_10831f0a8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010831f49c(uVar1);
  return param_1;
}



/* Entry: 10831f0e4; end: 10831f6a7;  */

void FUN_10831f0e4(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010831f0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x19 + 0x88) + 0x18))(*(long **)(unaff_x19 + 0x88),&DAT_10f68e8ec,1)
  ;
  return;
}



/* Entry: 10831f6a8; end: 10831f75f;  */

undefined8 *
FUN_10831f6a8(undefined8 *param_1,uint param_2,int param_3,ulong *param_4,undefined4 param_5,
             undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
             undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a3c188;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(uint *)((long)param_1 + 0x34) = param_2 & 0xffff | param_3 << 0x10;
  uVar1 = *param_4;
  *param_4 = uVar1 + 1;
  param_1[7] = param_4;
  param_1[8] = uVar1;
  param_1[9] = uVar1 & 0xffffffffffff |
               (ulong)(*(uint *)((long)param_1 + 0x34) >> 0x10 & 0xff) << 0x30 |
               (ulong)*(uint *)((long)param_1 + 0x34) << 0x38;
  param_1[10] = 0;
  *(int *)(param_1 + 0xb) = (int)param_7;
  *(int *)((long)param_1 + 0x5c) = (int)param_8;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)((long)param_1 + 100) = param_6;
  FUN_10829592c(param_1 + 0xd,param_7,param_8);
  *(uint *)(param_1 + 0x13) =
       *(int *)(param_1 + 0xb) * *(int *)(param_1 + 0xc) & 0xffffU |
       *(int *)((long)param_1 + 100) * *(int *)((long)param_1 + 0x5c) * 0x10000;
  *(undefined4 *)((long)param_1 + 0x9c) = param_9;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = param_11;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



/* Entry: 10831f760; end: 10831f79b;  */

undefined8 * FUN_10831f760(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3c188;
  _free(param_1[10]);
  FUN_10840f118(param_1 + 0xf);
  return param_1;
}



/* Entry: 10831f79c; end: 10831f79f;  */

undefined8 * FUN_10831f79c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3c188;
  _free(param_1[10]);
  FUN_10840f118(param_1 + 0xf);
  return param_1;
}



/* Entry: 10831f7a0; end: 10831f7b3;  */

void FUN_10831f7a0(void)

{
  FUN_10831f760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10831f7b4; end: 10831f877;  */

long FUN_10831f7b4(long param_1,int param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  short sStack_54;
  short sStack_52;
  
  lVar1 = param_1 + 0x68;
  FUN_108320974();
  if ((int)lVar1 != 0) {
    iStack_64 = (int)sStack_54;
    param_2 = iStack_64 + param_2;
    iStack_60 = (int)sStack_52;
    param_3 = iStack_60 + param_3;
    iStack_5c = (int)(short)param_2;
    iStack_58 = (int)(short)param_3;
    FUN_10838eae0(param_1 + 0xa8,&iStack_64);
    FUN_10831f878(param_4,(ulong)((uint)*(ushort *)(param_1 + 0x98) + param_2 & 0xffff) << 0x20 |
                          (ulong)((uint)*(ushort *)(param_1 + 0x9a) + param_3) << 0x30 |
                          (ulong)(((uint)*(ushort *)(param_1 + 0x9a) + (int)sStack_52) * 0x10000) |
                          (ulong)((uint)*(ushort *)(param_1 + 0x98) + (int)sStack_54) & 0xffff);
  }
  return lVar1;
}



/* Entry: 10831f878; end: 10831f8af;  */

void FUN_10831f878(long param_1,undefined8 param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xe000 | (ushort)param_2;
  *(short *)(param_1 + 10) = (short)((ulong)param_2 >> 0x10);
  *(ushort *)(param_1 + 0xc) =
       *(ushort *)(param_1 + 0xc) & 0xe000 | (ushort)((ulong)param_2 >> 0x20);
  *(short *)(param_1 + 0xe) = (short)((ulong)param_2 >> 0x30);
  return;
}



/* Entry: 10831f8b0; end: 10831f91f;  */

long FUN_10831f8b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0xa0) * (long)*(int *)(param_1 + 0x58) *
            (long)*(int *)(param_1 + 0x5c);
    FUN_10831f920();
    *(long *)(param_1 + 0x50) = lVar1;
  }
  return lVar1 + ((ulong)*(ushort *)(param_2 + 10) - (long)*(short *)(param_1 + 0x9a)) *
                 *(long *)(param_1 + 0xa0) * (long)*(int *)(param_1 + 0x58) +
         (((ulong)*(ushort *)(param_2 + 8) & 0x1fff) - (long)*(short *)(param_1 + 0x98)) *
         *(long *)(param_1 + 0xa0);
}



/* Entry: 10831f920; end: 10831f927;  */

/* WARNING: Removing unreachable block (ram,0x000108410824) */

undefined8 FUN_10831f920(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _calloc(param_1,1);
  FUN_1084107ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 10831f928; end: 10831f967;  */

void FUN_10831f928(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010831fb7c();
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1 = param_1 + 2;
  FUN_10835c5a8();
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Entry: 10831f968; end: 10831f9f7;  */

void FUN_10831f968(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  FUN_10831f8b0();
  lVar3 = *(long *)(param_1 + 0xa0) *
          ((ulong)((uint)*(ushort *)(param_2 + 0xc) - (uint)*(ushort *)(param_2 + 8)) & 0xffff);
  for (uVar1 = (uint)*(ushort *)(param_2 + 0xe) - (uint)*(ushort *)(param_2 + 10) & 0xffff;
      uVar1 != 0; uVar1 = uVar1 - 1) {
    _memcpy(lVar2,param_3,lVar3);
    lVar2 = lVar2 + *(long *)(param_1 + 0xa0) * (long)*(int *)(param_1 + 0x58);
    param_3 = param_3 + lVar3;
  }
  return;
}



/* Entry: 10831f9f8; end: 10831faef;  */

long FUN_10831f9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    return 0;
  }
  lVar1 = param_1;
  FUN_10831f7b4();
  if ((int)lVar1 != 0) {
    FUN_10831f968(param_1,param_5,param_4);
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 10831faf0; end: 10831fba3;  */

void FUN_10831faf0(long param_1,int param_2)

{
  ulong uVar1;
  
  FUN_108295980(param_1 + 0x68);
  uVar1 = **(ulong **)(param_1 + 0x38);
  **(ulong **)(param_1 + 0x38) = uVar1 + 1;
  *(ulong *)(param_1 + 0x40) = uVar1;
  *(ulong *)(param_1 + 0x48) =
       uVar1 & 0xffffffffffff | (ulong)(*(uint *)(param_1 + 0x34) >> 0x10 & 0xff) << 0x30 |
       (ulong)*(uint *)(param_1 + 0x34) << 0x38;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x50) != 0) {
      if (*(long *)(param_1 + 0xa0) * (long)*(int *)(param_1 + 0x58) *
          (long)*(int *)(param_1 + 0x5c) != 0) {
        _bzero();
      }
    }
  }
  else {
    _free();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 10831fba4; end: 10831fbe7;  */

undefined * FUN_10831fba4(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1d) {
    return (&PTR_DAT_110a3c1b8)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10831fbc0);
  (*pcVar1)();
}



/* Entry: 10831fbe8; end: 10831fcef;  */

void FUN_10831fbe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  switch(uVar1) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    *param_1 = &UNK_10f48d3f3;
    func_0x00010831fbc0();
    param_1[1] = CONCAT44(uVar2,uVar1);
    param_1[2] = param_3;
    return;
  default:
    FUN_10831fba4();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = CONCAT44(uVar2,uVar1);
    return;
  case 0xf:
    puVar4 = &DAT_10f48d31d;
    puVar5 = &UNK_10df19f10;
    break;
  case 0x10:
    puVar4 = &DAT_10f48d32b;
    puVar5 = &UNK_10df19f18;
    break;
  case 0x11:
    puVar4 = &DAT_10f48d32b;
    puVar5 = &UNK_10df19f1c;
    break;
  case 0x14:
    puVar4 = &DAT_10f48d31d;
    puVar5 = &UNK_10df19f14;
    break;
  case 0x19:
    FUN_10831fcf0();
    puVar4 = &UNK_10df19ef0;
    uVar3 = extraout_x8_02;
    goto code_r0x00010831fca8;
  case 0x1a:
    FUN_10831fcf0();
    puVar4 = &UNK_10df19ef8;
    uVar3 = extraout_x8;
    goto code_r0x00010831fca8;
  case 0x1b:
    FUN_10831fcf0();
    puVar4 = &UNK_10df19f00;
    uVar3 = extraout_x8_00;
    goto code_r0x00010831fca8;
  case 0x1c:
    FUN_10831fcf0();
    puVar4 = &UNK_10df19f08;
    uVar3 = extraout_x8_01;
code_r0x00010831fca8:
    *param_1 = uVar3;
    param_1[1] = puVar4;
    uVar3 = 2;
    goto code_r0x00010831fce0;
  }
  *param_1 = puVar4;
  param_1[1] = puVar5;
  uVar3 = 1;
code_r0x00010831fce0:
  param_1[2] = uVar3;
  return;
}



/* Entry: 10831fcf0; end: 10831fcfb;  */

void FUN_10831fcf0(void)

{
  return;
}



/* Entry: 10831fcfc; end: 10831fe3b;  */

void FUN_10831fcfc(uint param_1)

{
  uint uVar1;
  long *extraout_x8;
  ulong uVar2;
  float fVar3;
  
  func_0x0001083207b8();
  if (0 < (int)param_1) {
    uVar1 = param_1;
    func_0x000108320794();
    func_0x0001083207d8();
    func_0x0001083207b0();
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)extraout_x8[1] = 0xff;
      for (uVar2 = 1; uVar2 < param_1 - 1; uVar2 = uVar2 + 1) {
        fVar3 = ((1.0 / (float)param_1) * ((float)(uVar2 & 0xffffffff) + 0.5) * -6.0 + 3.0) *
                0.70710677;
        _erff();
        fVar3 = (float)NEON_fminnm((float)(double)(long)((fVar3 + 1.0) * 0.5 * 255.0 + 0.5),
                                   0x4effffff);
        if (fVar3 <= -2.1474835e+09) {
          fVar3 = -2.1474835e+09;
        }
        *(char *)(extraout_x8[1] + uVar2) = (char)(int)fVar3;
      }
      *(undefined1 *)(extraout_x8[1] + (ulong)(param_1 - 1)) = 0;
      if (*extraout_x8 != 0) {
        func_0x000108320800();
      }
    }
  }
  return;
}



/* Entry: 10831fe3c; end: 10831fe83;  */

int FUN_10831fe3c(float param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((param_1 <= 5.368709e+08) && (bVar2 = true, !NAN(param_1 - param_1))) {
    bVar2 = false;
  }
  if (bVar2) {
    return 0;
  }
  iVar1 = 1 << (ulong)(-(int)LZCOUNT((int)param_1 * 2 + -1) & 0x1f);
  if (iVar1 < 0x21) {
    iVar1 = 0x20;
  }
  return iVar1;
}



/* Entry: 10831fe84; end: 108320167;  */

void FUN_10831fe84(long *param_1,float param_2,float param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *apfStack_a8 [3];
  
  uVar11 = param_4;
  func_0x0001083207b8();
  func_0x000108320794();
  func_0x0001083207d8();
  func_0x0001083207b0();
  if ((uVar11 & 1) != 0) {
    lVar17 = param_1[1];
    fVar22 = (float)NEON_fminnm((int)(param_2 * 6.0),0x4effffff);
    if (fVar22 <= -2.1474835e+09) {
      fVar22 = -2.1474835e+09;
    }
    uVar15 = (int)fVar22 + 1;
    uVar2 = uVar15 & 0xfffffffe;
    uVar1 = uVar2 + (int)param_4;
    FUN_108320168(apfStack_a8,uVar1 + uVar2);
    uVar3 = (int)uVar15 >> 1;
    lVar20 = (long)(int)uVar3;
    pfVar4 = apfStack_a8[0] + (int)uVar3;
    pfVar10 = apfStack_a8[0];
    FUN_108320318(apfStack_a8[0],uVar3);
    fVar22 = 0.0;
    uVar18 = (ulong)(uVar3 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
    pfVar19 = apfStack_a8[0];
    for (uVar11 = uVar18; uVar11 != 0; uVar11 = uVar11 - 1) {
      fVar23 = *pfVar19 / (param_2 + param_2);
      *pfVar19 = fVar23;
      fVar22 = fVar22 + fVar23;
      pfVar19[lVar20] = fVar22;
      pfVar19 = pfVar19 + 1;
    }
    pfVar19 = apfStack_a8[0] + (int)uVar2;
    fVar22 = (float)(int)-uVar3 + 0.5;
    fVar23 = -param_3;
    uVar13 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    uVar11 = uVar13 << 2;
    pfVar12 = pfVar19;
    while (uVar13 != 0) {
      fVar25 = 0.0;
      bVar7 = false;
      bVar8 = false;
      bVar9 = false;
      if (fVar23 <= fVar22) {
        bVar7 = false;
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar22) && !NAN(param_3)) {
          bVar7 = fVar22 < param_3;
          bVar8 = fVar22 == param_3;
          bVar9 = false;
        }
      }
      if (bVar8 || bVar7 != bVar9) {
        fVar24 = SQRT(-(fVar22 * fVar22) + param_3 * param_3) + -0.5;
        if (0.0 <= fVar24) {
          fVar25 = (float)NEON_fminnm((int)fVar24,0x4effffff);
          if (fVar25 <= -2.1474835e+09) {
            fVar25 = -2.1474835e+09;
          }
          iVar14 = (int)fVar25;
          fVar25 = 0.5;
          if (iVar14 < (int)(uVar3 - 1)) {
            fVar25 = (fVar24 - (float)iVar14) * (pfVar4 + iVar14)[1] +
                     pfVar4[iVar14] * (1.0 - (fVar24 - (float)iVar14));
          }
        }
        else {
          fVar25 = (fVar24 + 0.5) * *pfVar4;
        }
      }
      *pfVar12 = fVar25;
      fVar22 = fVar22 + 1.0;
      uVar11 = uVar11 - 4;
      pfVar12 = pfVar12 + 1;
      uVar13 = uVar11;
    }
    lVar16 = (long)(int)param_4 + -1;
    uVar15 = (uint)lVar16;
    lVar21 = lVar20 * 4 + (long)(int)uVar2 * 4;
    for (uVar11 = 0; uVar11 != (uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)); uVar11 = uVar11 + 1)
    {
      fVar22 = ((float)(uVar11 & 0xffffffff) + 0.5) - (float)(int)uVar3;
      fVar25 = 0.0;
      pfVar12 = apfStack_a8[0] + lVar20;
      pfVar4 = pfVar19;
      for (uVar13 = uVar18; uVar5 = uVar18, pfVar6 = apfStack_a8[0], uVar13 != 0;
          uVar13 = uVar13 - 1) {
        pfVar12 = pfVar12 + -1;
        bVar7 = false;
        bVar8 = false;
        bVar9 = false;
        if (fVar23 <= fVar22) {
          bVar7 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar22) && !NAN(param_3)) {
            bVar7 = fVar22 < param_3;
            bVar8 = fVar22 == param_3;
            bVar9 = false;
          }
        }
        if (bVar8 || bVar7 != bVar9) {
          fVar25 = fVar25 + *pfVar12 * *pfVar4;
        }
        fVar22 = fVar22 + 1.0;
        pfVar4 = pfVar4 + 1;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        bVar7 = false;
        bVar8 = false;
        bVar9 = false;
        if (fVar23 <= fVar22) {
          bVar7 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar22) && !NAN(param_3)) {
            bVar7 = fVar22 < param_3;
            bVar8 = fVar22 == param_3;
            bVar9 = false;
          }
        }
        if (bVar8 || bVar7 != bVar9) {
          fVar25 = fVar25 + *pfVar6 * *(float *)((long)pfVar6 + lVar21);
        }
        fVar22 = fVar22 + 1.0;
        pfVar6 = pfVar6 + 1;
      }
      FUN_10832038c(fVar25 + fVar25);
      *(char *)(lVar17 + uVar11) = (char)pfVar10;
      pfVar19 = pfVar19 + 1;
      lVar21 = lVar21 + 4;
    }
    *(undefined1 *)(lVar17 + lVar16) = 0;
    if (*param_1 != 0) {
      func_0x000108320800();
    }
    FUN_1081fdf34(apfStack_a8);
  }
  return;
}



/* Entry: 108320168; end: 1083201c3;  */

long * FUN_108320168(long *param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < param_2) {
    param_1[1] = (long)param_2;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (long)param_2 << 2;
      __Znam();
    }
    *param_1 = lVar2;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083201b4);
  (*pcVar1)();
}



/* Entry: 1083201c4; end: 108320317;  */

void FUN_1083201c4(long *param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  long lStack_78;
  ulong uStack_70;
  
  uVar10 = param_2;
  func_0x0001083207b8();
  func_0x000108320794();
  func_0x0001083207d8();
  func_0x0001083207b0();
  if ((uVar10 & 1) != 0) {
    lVar6 = param_1[1];
    iVar4 = (int)param_2;
    uVar1 = iVar4 / 2;
    FUN_108320168(&lStack_78,uVar1);
    fVar11 = (float)iVar4 / 6.0;
    lVar3 = lStack_78;
    FUN_108320318(lStack_78,uVar1);
    uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    uVar9 = uVar1;
    iVar8 = iVar4;
    for (uVar10 = uVar7; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar9 = uVar9 - 1;
      iVar8 = iVar8 + -1;
      if (uStack_70 <= (ulong)(long)(int)uVar9) goto LAB_1083202fc;
      *(float *)(lStack_78 + (long)(int)uVar9 * 4) =
           *(float *)(lStack_78 + (long)(int)uVar9 * 4) / (fVar11 + fVar11);
      func_0x0001083207f4();
      *(char *)(lVar6 + iVar8) = (char)lVar3;
    }
    puVar5 = (undefined1 *)(lVar6 + (int)uVar1);
    for (uVar10 = 0; puVar5 = puVar5 + -1, uVar7 != uVar10; uVar10 = uVar10 + 1) {
      if (uStack_70 <= uVar10) {
LAB_1083202fc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108320300);
        (*pcVar2)();
      }
      func_0x0001083207f4(*(undefined4 *)(lStack_78 + uVar10 * 4));
      *puVar5 = (char)lVar3;
    }
    *(undefined1 *)(lVar6 + iVar4 + -1) = 0;
    if (*param_1 != 0) {
      func_0x000108320800();
    }
    FUN_1081fdf34(&lStack_78);
  }
  return;
}



/* Entry: 108320318; end: 10832038b;  */

float FUN_108320318(float param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  fVar4 = 0.5;
  for (uVar1 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    fVar2 = (1.0 / param_1) * (1.0 / param_1) * -0.5 * fVar4 * fVar4;
    _expf();
    fVar3 = fVar3 + fVar2;
    *param_2 = fVar2;
    fVar4 = fVar4 + 1.0;
    param_2 = param_2 + 1;
  }
  return fVar3;
}



/* Entry: 10832038c; end: 1083203bf;  */

int FUN_10832038c(float param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (int)(fVar1 * 255.0 + 0.5);
}



/* Entry: 1083203c0; end: 108320787;  */

void FUN_1083203c0(undefined8 param_1,undefined8 param_2,float *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  int iStack_b8;
  int iStack_b4;
  float *apfStack_a8 [3];
  
  pfVar7 = param_3;
  FUN_108287f0c();
  uVar6 = (uint)pfVar7;
  uVar1 = uVar6 << 1 | 1;
  fVar18 = param_3[4];
  iVar2 = *param_4;
  iVar3 = param_4[1];
  apfStack_a8[0] =
       (float *)(-(ulong)((uVar6 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  if ((int)uVar6 < 0) {
    apfStack_a8[0] = (float *)0xffffffffffffffff;
  }
  __Znam();
  FUN_108320788(param_2,pfVar7,apfStack_a8[0],(long)(int)uVar1);
  fVar17 = (float)param_2 * 6.0;
  FUN_10831fe3c(fVar17);
  FUN_10831fcfc(auStack_e0);
  if ((iStack_b8 >= 1 && iStack_b4 != 0) && (iStack_b8 < 1 || -1 < iStack_b4)) {
    uStack_f0 = 0;
    uStack_108 = 0;
    lStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_118 = 0;
    lStack_120 = 0;
    uStack_128 = *(undefined8 *)param_4;
    lStack_138 = 0;
    lStack_130 = 0x200000001;
    plVar8 = &lStack_120;
    func_0x00010821afec(plVar8,&lStack_138);
    func_0x0001083207b0();
    if (((ulong)plVar8 & 1) == 0) {
      func_0x00010832080c();
    }
    else {
      lStack_138 = 0;
      lStack_130 = 0;
      uStack_128 = 0;
      func_0x0001073b504c(&lStack_138,(long)*param_4);
      for (uVar13 = 0; (int)uVar13 < *param_4; uVar13 = uVar13 + 1) {
        fVar14 = (float)uVar13;
        bVar5 = true;
        if ((*param_3 <= fVar14) && (bVar5 = false, !NAN(param_3[2]) && !NAN(fVar14))) {
          bVar5 = param_3[2] < fVar14;
        }
        if (bVar5) {
          func_0x0001083207cc();
        }
        else if (fVar18 + *param_3 <= fVar14 + 0.5) {
          func_0x0001083207cc();
        }
        else {
          func_0x0001083207cc();
        }
      }
      uVar6 = uVar6 * 2 + 1;
      for (uVar12 = 0; (long)uVar12 <= (long)(iVar3 / 2); uVar12 = uVar12 + 1) {
        lVar9 = lStack_118 + lStack_110 * uVar12;
        for (lVar10 = 0; lVar10 <= iVar2 / 2; lVar10 = lVar10 + 1) {
          uVar13 = (int)uVar1 / -2 + (uint)lVar10;
          fVar18 = 0.0;
          pfVar7 = apfStack_a8[0];
          for (uVar11 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
              uVar11 = uVar11 - 1) {
            if ((-1 < (int)uVar13) && ((int)uVar13 < (int)((ulong)(lStack_130 - lStack_138) >> 2)))
            {
              fVar15 = *(float *)(lStack_138 + (ulong)uVar13 * 4);
              fVar14 = 0.0;
              if (0.0 <= fVar15) {
                fVar15 = ((float)iStack_b8 / fVar17) *
                         ((fVar15 - (float)(uVar12 & 0xffffffff)) + -0.5);
                if (0.0 <= fVar15) {
                  if (fVar15 < (float)(iStack_b8 + -1)) {
                    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lStack_d8 + (int)fVar15));
                    fVar16 = (float)NEON_ucvtf((uint)((byte *)(lStack_d8 + (int)fVar15))[1]);
                    fVar14 = (float)(uint)(int)((fVar15 - (float)(int)fVar15) * fVar16 +
                                               (1.0 - (fVar15 - (float)(int)fVar15)) * fVar14);
                  }
                }
                else {
                  fVar14 = 255.0;
                }
              }
              fVar18 = fVar18 + fVar14 * *pfVar7;
            }
            uVar13 = uVar13 + 1;
            pfVar7 = pfVar7 + 1;
          }
          uVar4 = (undefined1)(int)(fVar18 + 0.5);
          *(undefined1 *)(lVar9 + lVar10) = uVar4;
          *(undefined1 *)(lVar9 + (int)(*param_4 + ~(uint)lVar10)) = uVar4;
        }
        _memcpy(lStack_118 + lStack_110 * (int)(param_4[1] + ~(uint)uVar12));
      }
      if (lStack_120 != 0) {
        func_0x000108320800();
      }
      FUN_1083304b8(param_1,&lStack_120);
      func_0x0001056d1ce4(&lStack_138);
    }
    FUN_108330548(&lStack_120);
  }
  else {
    func_0x00010832080c();
  }
  FUN_108330548(auStack_e0);
  FUN_1081fdf34(apfStack_a8);
  return;
}



/* Entry: 108320788; end: 108320973;  */

void FUN_108320788(float param_1,uint param_2,float *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_94;
  
  uVar9 = 0;
  uVar2 = param_2 << 1;
  uVar1 = param_2 << 1 | 1;
  fVar12 = 1.0;
  if (0 < (int)param_2) {
    fVar12 = 1.0 / (param_1 * (param_1 + param_1));
  }
  iStack_94 = 0;
  fVar13 = 0.0;
  pfVar7 = param_3;
  for (; (long)uVar9 <= (long)(int)uVar2; uVar9 = uVar9 + 1) {
    fVar10 = (float)(int)((int)uVar9 - param_2);
    pfVar6 = pfVar7;
    uVar8 = uVar9;
    iVar4 = iStack_94;
    for (lVar5 = 0; lVar5 < 1; lVar5 = lVar5 + 1) {
      if (param_4 <= uVar8) goto LAB_108337568;
      fVar11 = -((float)iVar4 * (float)iVar4 * 1.0) - fVar12 * fVar10 * fVar10;
      _expf();
      *pfVar6 = fVar11;
      fVar13 = fVar13 + fVar11;
      pfVar6 = (float *)((long)pfVar6 +
                        (-(ulong)((param_2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                        (ulong)uVar2 << 2) + 4);
      uVar8 = uVar8 + (long)(int)uVar2 + 1;
      iVar4 = iVar4 + 1;
    }
    pfVar7 = pfVar7 + 1;
  }
  lVar5 = (long)(int)(uVar2 | 1);
  uVar9 = param_4;
  pfVar7 = param_3;
  while( true ) {
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(param_3 + (int)uVar1,(param_4 - (long)(int)uVar1) * 4);
      return;
    }
    if (uVar9 == 0) break;
    *pfVar7 = (1.0 / fVar13) * *pfVar7;
    uVar9 = uVar9 - 1;
    lVar5 = lVar5 + -1;
    pfVar7 = pfVar7 + 1;
  }
LAB_108337568:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10833756c);
  (*pcVar3)();
}



/* Entry: 108320974; end: 108320ad3;  */

undefined8 FUN_108320974(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iStack_64;
  
  if (*(uint *)(param_1 + 8) < (uint)param_2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc) < (uint)param_3) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0;
    uVar5 = 0;
    iVar4 = *(uint *)(param_1 + 8) + 1;
    iVar7 = *(uint *)(param_1 + 0xc) + 1;
    uVar1 = *(uint *)(param_1 + 0x24);
    iVar8 = -1;
    for (lVar9 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0xc - lVar9 != 0;
        lVar9 = lVar9 + 0xc) {
      lVar3 = param_1;
      FUN_108320ad4(param_1,iVar6,param_2,param_3,&iStack_64);
      if ((int)lVar3 != 0) {
        if (iStack_64 < iVar7) {
          lVar3 = *(long *)(param_1 + 0x18);
        }
        else if ((iStack_64 != iVar7) ||
                (lVar3 = *(long *)(param_1 + 0x18), iVar4 <= *(int *)(lVar3 + lVar9 + 8)))
        goto LAB_108320a58;
        iVar4 = ((undefined4 *)(lVar3 + lVar9))[2];
        uVar5 = *(undefined4 *)(lVar3 + lVar9);
        iVar7 = iStack_64;
        iVar8 = iVar6;
      }
LAB_108320a58:
      iVar6 = iVar6 + 1;
    }
    if (iVar8 == -1) {
      uVar2 = 0;
      *param_4 = 0;
    }
    else {
      FUN_108320b6c(param_1,iVar8,uVar5,iVar7,param_2,param_3);
      *(short *)param_4 = (short)uVar5;
      *(short *)((long)param_4 + 2) = (short)iVar7;
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (uint)param_3 * (uint)param_2;
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 108320ad4; end: 108320b6b;  */

undefined8 FUN_108320ad4(long param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x24))) {
    piVar3 = (int *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0xc);
    if (*(int *)(param_1 + 8) < *piVar3 + param_3) {
      return 0;
    }
    iVar2 = piVar3[1];
    piVar3 = (int *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0xc + 8);
    while( true ) {
      if (param_3 < 1) {
        *param_5 = iVar2;
        return 1;
      }
      if (*(int *)(param_1 + 0x24) <= (int)param_2) break;
      if (iVar2 <= piVar3[-1]) {
        iVar2 = piVar3[-1];
      }
      if (*(int *)(param_1 + 0xc) < iVar2 + param_4) {
        return 0;
      }
      param_3 = param_3 - *piVar3;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 3;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108320b6c);
  (*pcVar1)();
}



/* Entry: 108320b6c; end: 108320c9b;  */

void FUN_108320b6c(long param_1,ulong param_2,undefined4 param_3,int param_4,undefined4 param_5,
                  int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  iStack_48 = param_6 + param_4;
  uStack_4c = param_3;
  uStack_44 = param_5;
  FUN_10840f3c0(param_1 + 0x10,param_2,1,&uStack_4c);
  iVar10 = (int)param_2;
  uVar1 = iVar10 + 1;
  while (iVar5 = *(int *)(param_1 + 0x24), (int)uVar1 < iVar5) {
    if ((iVar10 < -1) || (iVar10 == -1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108320c9c);
      (*pcVar4)();
    }
    piVar6 = (int *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0xc);
    iVar3 = *piVar6;
    piVar8 = (int *)(*(long *)(param_1 + 0x18) + (param_2 & 0xffffffff) * 0xc);
    iVar2 = piVar8[2] + *piVar8;
    if (iVar2 <= iVar3) break;
    *piVar6 = iVar2;
    iVar2 = piVar6[2] + (iVar3 - iVar2);
    piVar6[2] = iVar2;
    if (0 < iVar2) break;
    FUN_10840f220(param_1 + 0x10,(ulong)uVar1,1);
  }
  uVar11 = 0;
  do {
    uVar12 = uVar11;
    do {
      uVar11 = uVar12;
      if (iVar5 + -1 <= (int)uVar11) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x18) + uVar11 * 0xc;
      uVar12 = (ulong)((int)uVar11 + 1);
      lVar9 = *(long *)(param_1 + 0x18) + uVar12 * 0xc;
    } while (*(int *)(lVar7 + 4) != *(int *)(lVar9 + 4));
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + *(int *)(lVar9 + 8);
    FUN_10840f220(param_1 + 0x10,uVar12,1);
    iVar5 = *(int *)(param_1 + 0x24);
  } while( true );
}



/* Entry: 108320c9c; end: 108320cdb;  */

void FUN_108320c9c(void)

{
  func_0x000108320cfc();
  return;
}



/* Entry: 108320cdc; end: 108320d07;  */

float FUN_108320cdc(long param_1)

{
  return (float)*(int *)(param_1 + 0x28) /
         ((float)*(int *)(param_1 + 8) * (float)*(int *)(param_1 + 0xc));
}



/* Entry: 108320d08; end: 108320dcf;  */

void FUN_108320d08(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  
  do {
    iVar3 = iRam0000000113254de8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113254de8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113254de8 = iRam0000000113254de8 + 1;
    }
  } while (cVar1 != '\0');
  if (iVar3 < 0x10000) {
    return;
  }
  FUN_10841076c(&UNK_10f48d410);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108320d60);
  (*pcVar4)();
}



/* Entry: 108320dd0; end: 108320dd7;  */

void FUN_108320dd0(void)

{
  return;
}



/* Entry: 108320dd8; end: 108320e87;  */

void FUN_108320dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long alStack_60 [3];
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  plVar1 = alStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108323670(alStack_60,param_2,param_3);
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_DAT_110a3c418;
  FUN_108323598(alStack_60,appuStack_48);
  FUN_108320f5c(appuStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_108320f5c(appuStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_60);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000108320e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}



/* Entry: 108320e88; end: 108320e9b;  */

void FUN_108320e88(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108320e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 108320e9c; end: 108320ebf;  */

void FUN_108320e9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110a3c418;
  return;
}



/* Entry: 108320ec0; end: 108320ee7;  */

void FUN_108320ec0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a3c418;
  return;
}



/* Entry: 108320ee8; end: 108320f13;  */

void FUN_108320ee8(void)

{
  FUN_10841076c(&UNK_10f63757c);
  return;
}



/* Entry: 108320f14; end: 108320f4f;  */

long FUN_108320f14(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3c478);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108320f50; end: 108320f5b;  */

undefined ** FUN_108320f50(void)

{
  return &PTR_DAT_110a3c478;
}



/* Entry: 108320f5c; end: 108320fd7;  */

long * FUN_108320f5c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 108320fd8; end: 108321027;  */

uint FUN_108320fd8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if ((int)param_1 < 0x11) {
    uVar3 = 0x10;
  }
  if ((uVar3 & uVar3 - 1) == 0) {
    return uVar3;
  }
  uVar2 = 1 << (ulong)(-(int)LZCOUNT(uVar3 - 1) & 0x1f);
  if ((0x400 < (int)param_1) &&
     (uVar1 = ((int)uVar2 >> 1) + ((int)uVar2 >> 2), (int)uVar3 <= (int)uVar1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108321028; end: 108321197;  */

undefined8
FUN_108321028(undefined8 param_1,code *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined2 *param_8,long *param_9)

{
  undefined1 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 *apuStack_f0 [2];
  char cStack_d9;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  undefined1 auStack_b8 [104];
  
  FUN_1083c4fac(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,param_4);
  FUN_1083c5660(&uStack_c0,auStack_b8,param_5,auStack_d8,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  if ((uStack_c0 == 0) ||
     (uVar3 = uStack_c0, (*param_2)(uStack_c0,param_1,param_7), (uVar3 & 1) == 0)) {
    cVar2 = *(char *)((long)param_4 + 0x17);
    plVar5 = (long *)*param_4;
    FUN_1083c5610(apuStack_f0,auStack_b8,1);
    if (-1 < cVar2) {
      plVar5 = param_4;
    }
    if (-1 < cStack_d9) {
      apuStack_f0[0] = (undefined1 *)apuStack_f0;
    }
    (**(code **)(*param_9 + 0x18))(param_9,plVar5,apuStack_f0[0],0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_f0);
    uVar4 = 0;
  }
  else {
    if (param_8 != (undefined2 *)0x0) {
      uVar1 = *(undefined1 *)(uStack_c0 + 0x6a);
      *param_8 = *(undefined2 *)(uStack_c0 + 0x68);
      *(undefined1 *)(param_8 + 1) = uVar1;
    }
    uVar4 = 1;
  }
  FUN_108321198(&uStack_c0);
  FUN_1083c50f0(auStack_b8);
  return uVar4;
}



/* Entry: 108321198; end: 1083211bf;  */

undefined8 FUN_108321198(undefined8 param_1)

{
  FUN_1083211c0(param_1,0);
  return param_1;
}



/* Entry: 1083211c0; end: 1083211d7;  */

void FUN_1083211c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083ea528(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083211d8; end: 1083211f3;  */

void FUN_1083211d8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083ea528(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083211f4; end: 1083212bb;  */

void FUN_1083211f4(short *param_1,long *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  short sVar3;
  long *plVar4;
  int iVar5;
  int unaff_w22;
  int iVar6;
  byte unaff_w23;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long in_stack_ffffffffffffffd8;
  
  sVar3 = *param_1;
  if (sVar3 == 0x5443) {
    iVar5 = 0x29;
  }
  else {
    if (sVar3 == 0x3210) {
      return;
    }
    if (sVar3 == 0x5210) {
      iVar5 = 8;
    }
    else if (sVar3 == 0x5333) {
      iVar5 = 0x27;
    }
    else {
      if (sVar3 != 0x3012) {
        FUN_1083212bc(&stack0xffffffffffffffd8);
        uVar2 = *(undefined4 *)(in_stack_ffffffffffffffd8 + 8);
        FUN_1083a3ca0();
        FUN_108387820(param_2,0x62,uVar2);
        return;
      }
      iVar5 = 0xb;
    }
  }
  bVar7 = 0;
  iVar6 = 0;
  switch(iVar5) {
  case 0x12:
  case 0x13:
  case 0x33:
  case 0x37:
    bVar7 = 0;
    goto code_r0x000108387980;
  case 0x14:
    iVar6 = 0;
    bVar7 = 1;
    break;
  case 0x15:
  case 0x19:
  case 0x1d:
  case 0x21:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x35:
  case 0x36:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x78:
  case 0x7c:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0x8c:
  case 0x90:
  case 0x94:
  case 0x98:
  case 0x9c:
  case 0x9d:
    break;
  case 0x16:
  case 0x17:
  case 0x34:
  case 0x38:
    func_0x000108388e04();
    break;
  case 0x18:
    func_0x000108388df8();
    break;
  case 0x1a:
  case 0x1b:
    func_0x000108388e04();
    break;
  case 0x1c:
    func_0x000108388df8();
    break;
  case 0x1e:
  case 0x1f:
    func_0x000108388e04();
    break;
  case 0x20:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
    func_0x000108388df8();
    break;
  case 0x22:
  case 0x23:
    func_0x000108388e04();
    break;
  case 0x24:
    func_0x000108388df8();
    break;
  case 0x26:
    func_0x000108388df8();
    break;
  case 0x4f:
    bVar7 = 1;
code_r0x000108387980:
    iVar6 = 1;
    break;
  case 0x61:
    func_0x000108388e58(param_2,0x10);
    func_0x000108388e58(param_2,0);
    func_0x000108388e68();
    break;
  case 0x75:
  case 0x76:
    func_0x000108388e04();
    break;
  case 0x77:
    func_0x000108388df8();
    break;
  case 0x79:
  case 0x7a:
    func_0x000108388e04();
    break;
  case 0x7b:
    func_0x000108388df8();
    break;
  case 0x7d:
  case 0x7e:
    func_0x000108388e04();
    break;
  case 0x7f:
    func_0x000108388df8();
    break;
  case 0x81:
  case 0x82:
    func_0x000108388e04();
    break;
  case 0x83:
    func_0x000108388df8();
    break;
  case 0x85:
  case 0x86:
    func_0x000108388e04();
    break;
  case 0x87:
    func_0x000108388df8();
    break;
  case 0x89:
  case 0x8a:
    func_0x000108388e04();
    break;
  case 0x8b:
    func_0x000108388df8();
    break;
  case 0x8d:
  case 0x8e:
    func_0x000108388e04();
    break;
  case 0x8f:
    func_0x000108388df8();
    break;
  case 0x91:
  case 0x92:
    func_0x000108388e04();
    break;
  case 0x93:
    func_0x000108388df8();
    break;
  case 0x95:
  case 0x96:
    func_0x000108388e04();
    break;
  case 0x97:
    func_0x000108388df8();
    break;
  case 0x99:
  case 0x9a:
    func_0x000108388e04();
    break;
  case 0x9b:
    func_0x000108388df8();
    break;
  case 0x9e:
  case 0x9f:
    func_0x000108388e04();
    break;
  case 0xa0:
    func_0x000108388df8();
    break;
  default:
    if (iVar5 == 0xe1) {
      plVar4 = param_2;
      FUN_108387ab4();
      func_0x000108388e68();
      plRam0000000000000000 = plVar4;
      iVar6 = unaff_w22;
      bVar7 = unaff_w23;
    }
    else {
      iVar6 = 0;
      bVar7 = 0;
      if (iVar5 == 0xf2) {
        plVar4 = param_2;
        FUN_108387ab4();
        func_0x000108388e68();
        plRam0000000000000008 = plVar4;
      }
    }
  }
  plVar8 = (long *)*param_2;
  lVar9 = param_2[2];
  plVar4 = plVar8;
  func_0x0001081865e0(plVar8,0x18,8);
  plVar8[1] = (long)(plVar4 + 3);
  *plVar4 = lVar9;
  *(int *)(plVar4 + 1) = iVar5;
  plVar4[2] = 0;
  param_2[2] = (long)plVar4;
  *(int *)(param_2 + 4) = (int)param_2[4] + 1;
  if (((bVar7 & 1) == 0) && (iVar6 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(param_2[9] + 0xd);
  lVar9 = (long)(int)param_2[10] << 4;
  while( true ) {
    if (lVar9 == 0) {
      func_0x000108388900(param_2 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(long *)(pbVar1 + -0xd) == 0) break;
    pbVar1 = pbVar1 + 0x10;
    lVar9 = lVar9 + -0x10;
  }
  pbVar1[-1] = (byte)iVar6 | pbVar1[-1];
  *pbVar1 = bVar7 | *pbVar1;
  return;
}



/* Entry: 1083212bc; end: 108321323;  */

void FUN_1083212bc(undefined8 param_1,ushort *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte abStack_35 [4];
  undefined1 uStack_31;
  
  uVar3 = (uint)*param_2;
  for (lVar2 = 0; lVar2 != 4; lVar2 = lVar2 + 1) {
    bVar1 = (byte)uVar3 & 0xf;
    FUN_1082b77b4();
    abStack_35[lVar2] = bVar1;
    uVar3 = uVar3 >> 4;
  }
  uStack_31 = 0;
  FUN_1083a3348(param_1,abStack_35);
  return;
}



/* Entry: 108321324; end: 1083213db;  */

undefined1  [16]
FUN_108321324(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_5;
  uStack_28 = param_6;
  FUN_1081600e0(auStack_58,param_7,param_8);
  puVar1 = auStack_58;
  FUN_10818cfd0(puVar1,auStack_58);
  if ((int)puVar1 != 0) {
    FUN_10817500c(&uStack_30);
    uStack_68 = param_1;
    uStack_64 = param_2;
    uStack_60 = param_3;
    uStack_5c = param_4;
    FUN_108189c38(auStack_58,&uStack_68,1);
    puVar2 = &uStack_68;
    FUN_10838ed10(puVar2,param_10);
    if ((int)puVar2 != 0) {
      func_0x00010812f1a8(&uStack_68,&uStack_30);
      uStack_70 = *param_9;
      uStack_78 = 0;
      puVar3 = &uStack_30;
      func_0x00010821b838(puVar3,&uStack_78);
      if ((int)puVar3 == 0) {
        uStack_28 = 0;
        uStack_30 = 0;
      }
      goto LAB_1083213cc;
    }
  }
  uStack_30 = 0;
  uStack_28 = 0;
LAB_1083213cc:
  auVar4._8_8_ = uStack_28;
  auVar4._0_8_ = uStack_30;
  return auVar4;
}



/* Entry: 1083213dc; end: 10832140f;  */

char * FUN_1083213dc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cStack_11;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1[2] / param_2;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *param_1 / param_2;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = param_1[3] / param_2;
  }
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = param_1[1] / param_2;
  }
  cStack_11 = '\x01';
  pcVar5 = &cStack_11;
  func_0x000108154764(pcVar5,(long)((iVar1 - iVar2) + 1),(long)((iVar3 - iVar4) + 1));
  if (cStack_11 == '\0') {
    pcVar5 = (char *)0xffffffffffffffff;
  }
  return pcVar5;
}



/* Entry: 108321410; end: 108321587;  */

undefined8
FUN_108321410(undefined8 *param_1,float *param_2,float *param_3,long param_4,undefined8 *param_5,
             undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (param_2[2] <= *param_2) {
    return 2;
  }
  uVar2 = 0;
  if (((param_2[3] <= param_2[1]) || (param_3[2] <= *param_3)) || (param_3[3] <= param_3[1])) {
LAB_108321474:
    uVar1 = 2;
  }
  else {
    FUN_10814c9e0(&uStack_80,param_2,param_3,0);
    param_7[1] = uStack_78;
    *param_7 = uStack_80;
    param_7[3] = uStack_68;
    param_7[2] = uStack_70;
    param_7[4] = uStack_60;
    uStack_78 = *(undefined8 *)(param_2 + 2);
    uStack_80 = *(undefined8 *)param_2;
    uStack_88 = *(undefined8 *)(param_3 + 2);
    uStack_90 = *(undefined8 *)param_3;
    uStack_a0 = 0;
    uStack_98 = NEON_scvtf(*param_1,4);
    FUN_108281a6c(&uStack_a0,&uStack_80);
    if ((uVar2 & 1) == 0) {
      puVar3 = &uStack_80;
      FUN_10838ed10(puVar3,&uStack_a0);
      if ((int)puVar3 == 0) goto LAB_108321474;
      FUN_108364f90(param_7,&uStack_90,&uStack_80,1);
      if (param_4 == 0) goto LAB_108321500;
      lVar4 = 0;
      do {
        if (lVar4 == 0x20) goto LAB_108321500;
        fVar7 = (float)*(undefined8 *)(param_4 + lVar4);
        fVar8 = (float)((ulong)*(undefined8 *)(param_4 + lVar4) >> 0x20);
        uVar6 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(fVar8 < (float)((ulong)uStack_88 >> 0x20)),
                                             -(ushort)(fVar7 < (float)uStack_88)),
                                    CONCAT22(-(ushort)((float)((ulong)uStack_90 >> 0x20) <= fVar8),
                                             -(ushort)((float)uStack_90 <= fVar7))),2);
        lVar4 = lVar4 + 8;
      } while ((uVar6 & 1) != 0);
      uVar1 = 1;
    }
    else {
LAB_108321500:
      uVar1 = 0;
      param_3 = (float *)&uStack_90;
    }
    param_5[1] = uStack_78;
    *param_5 = uStack_80;
    uVar5 = *(undefined8 *)param_3;
    param_6[1] = *(undefined8 *)(param_3 + 2);
    *param_6 = uVar5;
  }
  return uVar1;
}



/* Entry: 108321588; end: 1083215ff;  */

bool FUN_108321588(undefined8 param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fVar2;
  
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_40 = 0x103f800000;
  FUN_108364350(&uStack_60,param_1,param_2);
  fVar1 = 0.70710677;
  fVar2 = 0.70710677;
  if (param_3 == 0) {
    fVar1 = 1.0;
  }
  FUN_108365554(&uStack_60);
  return fVar1 <= fVar2;
}



/* Entry: 108321600; end: 1083219b7;  */

int FUN_108321600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,float *param_10,undefined8 *param_11,undefined8 param_12,
                 byte param_13,undefined4 param_14,ulong param_15,long param_16)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  float *pfVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  float *pfVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  byte bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined5 uStack_2a0;
  undefined3 uStack_29b;
  undefined5 uStack_298;
  undefined3 uStack_293;
  uint uStack_290;
  undefined1 uStack_28c;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  long lStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint uStack_190;
  int iStack_18c;
  float *pfStack_188;
  float fStack_178;
  byte bStack_174;
  undefined2 uStack_173;
  undefined1 uStack_171;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float afStack_e8 [4];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined ***pppuStack_a8;
  undefined **ppuStack_a0;
  long **pplStack_98;
  undefined ***pppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_5;
  puVar19 = param_7;
  puVar11 = param_8;
  puVar21 = param_9;
  pfVar22 = param_10;
  uVar23 = param_12;
  plStack_c8 = param_6;
  (**(code **)(*param_5 + 0x28))();
  iVar20 = (int)puVar11;
  if (((ulong)plVar15 & 1) == 0) {
    plVar15 = param_6;
    (**(code **)(*param_6 + 0x18))();
    if (((ulong)plVar15 & 1) != 0) {
LAB_108321688:
      iVar10 = 0;
      lVar17 = 0;
      goto LAB_108321690;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    param_1 = 0x3f800000;
    uStack_108 = 0;
    uStack_110 = 0x3f800000;
    uStack_f8 = 0;
    uStack_100 = 0x3f800000;
    uStack_f0 = 0x103f800000;
    uStack_160 = param_6[4];
    puVar11 = &uStack_160;
    puVar21 = &uStack_d8;
    pfVar22 = afStack_e8;
    param_11 = &uStack_110;
    iVar20 = 0;
    FUN_108321410(puVar11,param_7);
    puVar19 = param_8;
    if ((int)puVar11 == 2) goto LAB_108321668;
    uStack_158 = param_6[4];
    uStack_160 = 0;
    iVar10 = (int)&uStack_d8;
    puVar11 = &uStack_160;
    FUN_108281144();
    iVar28 = (int)param_12;
    if (iVar10 != 0) {
      iVar28 = 1;
    }
    plVar15 = *(long **)(param_5[0x188] + 8);
    fVar30 = *param_10;
    bVar29 = *(byte *)(param_10 + 1);
    uStack_114 = *(undefined2 *)((long)param_10 + 5);
    uStack_112 = *(undefined1 *)((long)param_10 + 7);
    fVar31 = param_10[2];
    fVar32 = param_10[3];
    fVar33 = param_10[4];
    fVar34 = param_10[5];
    puVar19 = param_8;
    if (fVar34 != 0.0) {
      puVar19 = (undefined8 *)(ulong)param_13;
      iVar10 = (int)plVar15 + 0xf8;
      puVar11 = &uStack_110;
      FUN_108321588();
      if (iVar10 != 0) {
        fVar30 = 0.0;
        bVar29 = 0;
        fVar34 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
      }
    }
    (**(code **)(*plVar15 + 0x20))();
    if ((bVar29 & 1) == 0) {
      lVar17 = -2;
      if ((fVar33 != 1.4013e-45) && (lVar17 = 0, fVar30 != 0.0)) {
        lVar17 = -2;
      }
    }
    else {
      lVar17 = -4;
    }
    plStack_128 = (long *)0x0;
    puStack_120 = (undefined8 *)0x0;
    uStack_160 = param_6[4];
    iVar27 = (int)(lVar17 + param_16);
    iVar10 = (int)((ulong)uStack_160 >> 0x20);
    if ((int)uStack_160 <= iVar27 && iVar10 <= iVar27) {
      if (param_15 != 0) {
        uVar25 = iVar10 * (int)uStack_160;
        if ((0x3fffff < uVar25) &&
           (uVar18 = -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2,
           param_15 >> 1 <= uVar18)) {
          func_0x000108322264();
          plStack_128 = plVar15;
          puStack_120 = puVar11;
          func_0x000108322294();
          if ((ulong)((long)plVar15 * 0x800000) < uVar18) goto LAB_108321858;
        }
      }
      goto LAB_108321688;
    }
    func_0x000108322264();
    plStack_128 = plVar15;
    puStack_120 = puVar11;
    if (0x400 < iVar27) {
      FUN_1083213dc(&plStack_128,lVar17 + param_16);
      func_0x000108322294();
    }
LAB_108321858:
    plVar15 = param_6;
    (**(code **)(*param_6 + 0xf0))();
    iVar10 = (int)plVar15;
    if (iVar10 == 3) {
      pplStack_98 = &plStack_c8;
      ppuStack_a0 = &PTR_FUN_110a3c4a8;
      pppuStack_88 = &ppuStack_a0;
      puVar19 = (undefined8 *)param_6[4];
      uStack_160 = CONCAT17(uStack_112,CONCAT25(uStack_114,CONCAT14(bVar29,fVar30)));
      uStack_158 = CONCAT44(fVar32,fVar31);
      uStack_150 = CONCAT44(fVar34,fVar33);
      pfStack_188 = (float *)&uStack_160;
      func_0x000108322240();
      FUN_1083220e8(&ppuStack_a0);
    }
    else {
      uStack_130 = 0;
      param_1 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puStack_138 = (undefined8 *)0x0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puVar19 = &uStack_160;
      iVar20 = 0;
      (**(code **)(*param_6 + 0xd0))(param_6,0);
      iVar10 = (int)param_6;
      if (iVar10 == 0) {
        func_0x00010832228c();
        goto LAB_108321688;
      }
      puStack_b8 = &uStack_160;
      ppuStack_c0 = &PTR_FUN_110a3c538;
      pppuStack_a8 = &ppuStack_c0;
      uStack_173 = uStack_114;
      uStack_171 = uStack_112;
      pfStack_188 = &fStack_178;
      puVar19 = puStack_138;
      fStack_178 = fVar30;
      bStack_174 = bVar29;
      fStack_170 = fVar31;
      fStack_16c = fVar32;
      fStack_168 = fVar33;
      fStack_164 = fVar34;
      func_0x000108322240();
      FUN_1083220e8(&ppuStack_c0);
      func_0x00010832228c();
    }
    lVar17 = (long)iVar10;
    uStack_190 = (uint)param_9;
    iStack_18c = iVar28;
  }
  else {
LAB_108321668:
    lVar17 = 0;
  }
  iVar10 = 1;
LAB_108321690:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return iVar10;
  }
  ___stack_chk_fail();
  pppuVar12 = &ppuStack_c0;
  FUN_1083220e8();
  func_0x00010832228c();
  func_0x0001083222ac();
  if (*pfStack_188 != 0.0) {
    *pfStack_188 = 0.0;
    *(undefined1 *)(pfStack_188 + 1) = 0;
    pfStack_188[2] = 0.0;
    pfStack_188[3] = 0.0;
    param_1 = 1;
    pfStack_188[4] = 1.4013e-45;
    pfStack_188[5] = 0.0;
  }
  FUN_10817500c(param_11);
  iVar10 = 0;
  if (iVar20 != 0) {
    iVar10 = (int)puVar19 / iVar20;
  }
  iVar28 = 0;
  iVar27 = (int)((ulong)puVar19 >> 0x20);
  if (iVar20 != 0) {
    iVar28 = iVar27 / iVar20;
  }
  uVar18 = (ulong)(uint)(iVar28 * iVar10);
  lStack_248 = 0;
  uStack_240 = 0x100000000;
  uStack_238 = param_1;
  uStack_234 = param_2;
  uStack_230 = param_3;
  uStack_22c = param_4;
  if (0 < iVar28 * iVar10) {
    uVar13 = 0;
    FUN_108321f80(0x3ff0000000000000,0);
    FUN_108321ea4(&lStack_248,uVar13,uVar18);
  }
  iStack_2cc = 0;
  iVar24 = 0;
  do {
    if (iVar10 < iVar24) {
      FUN_10833ee74(pppuVar12,lStack_248,uStack_240 & 0xffffffff,0,0,pfStack_188,uVar23,iStack_18c);
      FUN_108321fc4(&lStack_248);
      return iStack_2cc;
    }
    iVar1 = iVar24 + 1;
    iVar3 = (int)puVar19;
    if (iVar24 != iVar10) {
      iVar3 = iVar1 * iVar20;
    }
    iVar5 = iVar24 * iVar20;
    iVar26 = 0;
    while (iVar24 = iVar1, iVar26 <= iVar28) {
      iVar24 = iVar26 + 1;
      iVar4 = iVar27;
      if (iVar26 != iVar28) {
        iVar4 = iVar24 * iVar20;
      }
      fStack_254 = (float)(iVar26 * iVar20);
      fStack_24c = (float)iVar4;
      pfVar14 = &fStack_258;
      fStack_258 = (float)iVar5;
      fStack_250 = (float)iVar3;
      FUN_1081e4b40(pfVar14,&uStack_238);
      iVar26 = iVar24;
      if (((ulong)pfVar14 & 1) != 0) {
        pfVar14 = &fStack_258;
        FUN_10838ed10(pfVar14,pfVar22);
        if ((int)pfVar14 != 0) {
          uStack_270 = 0;
          uStack_268 = 0;
          func_0x00010812f1a8(&fStack_258,&uStack_270);
          iVar24 = (int)uStack_270;
          iVar4 = uStack_270._4_4_;
          lStack_278 = CONCAT44(fStack_24c,fStack_250);
          lStack_280 = CONCAT44(fStack_254,fStack_258);
          puVar11 = puVar21;
          FUN_108189c38(puVar21,&lStack_280,1);
          if (((ulong)puVar11 & 1) != 0) {
            fVar34 = (float)iVar24;
            fVar33 = (float)iVar4;
            if ((pfStack_188[4] != 0.0) || (*(char *)(pfStack_188 + 1) == '\x01')) {
              uStack_2c0 = 0;
              uStack_2b8 = (undefined8 *)0x0;
              puVar11 = puVar19;
              if (iStack_18c != 1) {
                func_0x00010812f1a8(pfVar22,&uStack_2c0);
                puVar11 = uStack_2b8;
              }
              uStack_2b8 = puVar11;
              uVar25 = 1;
              if (*(char *)(pfStack_188 + 1) != '\0') {
                uVar25 = 2;
              }
              func_0x000108287690(&uStack_270,uVar25,uVar25);
              if ((int)uStack_2c0 - (int)uStack_270 < 1) {
                fVar30 = (float)uVar25;
              }
              else {
                fVar30 = (float)(int)(uVar25 - ((int)uStack_2c0 - (int)uStack_270));
                uStack_270 = CONCAT44(uStack_270._4_4_,(int)uStack_2c0);
              }
              if (uStack_2c0._4_4_ - uStack_270._4_4_ < 1) {
                fVar31 = (float)uVar25;
              }
              else {
                fVar31 = (float)(int)(uVar25 - (uStack_2c0._4_4_ - uStack_270._4_4_));
                uStack_270 = CONCAT44(uStack_2c0._4_4_,(int)uStack_270);
              }
              if ((int)uStack_2b8 < (int)uStack_268) {
                uStack_268 = CONCAT44(uStack_268._4_4_,(int)uStack_2b8);
              }
              if (uStack_2b8._4_4_ < uStack_268._4_4_) {
                uStack_268 = CONCAT44(uStack_2b8._4_4_,(int)uStack_268);
              }
              fVar34 = fVar34 - fVar30;
              fVar33 = fVar33 - fVar31;
            }
            plVar15 = *(long **)(lVar17 + 0x18);
            uStack_2b8 = (undefined8 *)uStack_268;
            uStack_2c0 = uStack_270;
            if (plVar15 == (long *)0x0) {
              func_0x000104bfeb48();
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x108321e54);
              (*pcVar9)();
            }
            (**(code **)(*plVar15 + 0x30))(&lStack_288,plVar15,&uStack_2c0);
            uVar18 = uStack_240;
            lVar8 = lStack_288;
            if (lStack_288 != 0) {
              uStack_290 = uStack_190 & fStack_258 <= *pfVar22;
              if (pfVar22[2] <= fStack_250 && (uStack_190 & 4) != 0) {
                uStack_290 = uStack_290 | 4;
              }
              if (fStack_254 <= pfVar22[1] && (uStack_190 & 2) != 0) {
                uStack_290 = uStack_290 | 2;
              }
              if (pfVar22[3] <= fStack_24c && (uStack_190 & 8) != 0) {
                uStack_290 = uStack_290 | 8;
              }
              fStack_258 = fStack_258 - fVar34;
              fStack_254 = fStack_254 - fVar33;
              fStack_250 = fStack_250 - fVar34;
              fStack_24c = fStack_24c - fVar33;
              lStack_288 = 0;
              uStack_2c8 = 0;
              uStack_2c0 = lVar8;
              lStack_2b0 = CONCAT44(fStack_24c,fStack_250);
              uStack_2b8 = (undefined8 *)CONCAT44(fStack_254,fStack_258);
              uStack_2a0 = (undefined5)lStack_278;
              uStack_29b = (undefined3)((ulong)lStack_278 >> 0x28);
              lStack_2a8 = lStack_280;
              uStack_298 = 0xffffffff;
              uStack_293 = 0x3f8000;
              uStack_28c = 0;
              uVar16 = uStack_240 & 0xffffffff;
              if ((int)uStack_240 < (int)(uStack_240._4_4_ >> 1)) {
                plVar15 = (long *)(lStack_248 + (long)(int)uStack_240 * 0x38);
                piVar2 = (int *)(lVar8 + 8);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
                    *piVar2 = *piVar2 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                *plVar15 = lVar8;
                *(ulong *)((long)plVar15 + 0x2d) = (ulong)CONCAT43(uStack_290,0x3f8000);
                *(ulong *)((long)plVar15 + 0x25) = CONCAT53(0xffffffff,uStack_29b);
                plVar15[4] = lStack_278;
                plVar15[3] = lStack_280;
                plVar15[2] = lStack_2b0;
                plVar15[1] = (long)uStack_2b8;
              }
              else {
                uVar13 = 1;
                FUN_108321f80(0x3ff8000000000000,uVar16,1);
                if (uStack_2c0 != 0) {
                  piVar2 = (int *)(uStack_2c0 + 8);
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar7) {
                      *piVar2 = *piVar2 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                plVar15 = (long *)(uVar16 + (uVar18 & 0xffffffff) * 0x38);
                *plVar15 = uStack_2c0;
                *(ulong *)((long)plVar15 + 0x2d) =
                     CONCAT17(uStack_28c,CONCAT43(uStack_290,uStack_293));
                *(ulong *)((long)plVar15 + 0x25) = CONCAT53(uStack_298,uStack_29b);
                plVar15[4] = CONCAT35(uStack_29b,uStack_2a0);
                plVar15[3] = lStack_2a8;
                plVar15[2] = lStack_2b0;
                plVar15[1] = (long)uStack_2b8;
                FUN_108321ea4(&lStack_248,uVar16,uVar13);
              }
              uStack_240 = CONCAT44(uStack_240._4_4_,(int)uStack_240 + 1);
              FUN_10829bb10(&uStack_2c0);
              FUN_10829bb10(&uStack_2c8);
              iStack_2cc = iStack_2cc + 1;
            }
            func_0x000106f47184(&lStack_288);
          }
        }
      }
    }
  } while( true );
}



/* Entry: 1083219b8; end: 108321ea3;  */

int FUN_1083219b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,int param_8,ulong param_9,
                 float *param_10,undefined8 param_11,undefined8 param_12,uint param_13,int param_14,
                 int *param_15)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  float *pfVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  undefined5 uStack_108;
  undefined3 uStack_103;
  uint uStack_100;
  undefined1 uStack_fc;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uStack_a8 = param_1;
  if (*param_15 != 0) {
    *param_15 = 0;
    *(undefined1 *)(param_15 + 1) = 0;
    param_15[2] = 0;
    param_15[3] = 0;
    uStack_a8 = 1;
    param_15[4] = 1;
    param_15[5] = 0;
  }
  uStack_a4 = param_2;
  uStack_a0 = param_3;
  FUN_10817500c(param_11);
  iVar6 = 0;
  if (param_8 != 0) {
    iVar6 = (int)param_7 / param_8;
  }
  iVar7 = 0;
  iVar20 = (int)((ulong)param_7 >> 0x20);
  if (param_8 != 0) {
    iVar7 = iVar20 / param_8;
  }
  uVar16 = (ulong)(uint)(iVar7 * iVar6);
  lStack_b8 = 0;
  uStack_b0 = 0x100000000;
  uStack_9c = param_4;
  if (0 < iVar7 * iVar6) {
    uVar12 = 0;
    FUN_108321f80(0x3ff0000000000000,0);
    FUN_108321ea4(&lStack_b8,uVar12,uVar16);
  }
  iStack_13c = 0;
  iVar17 = 0;
  do {
    if (iVar6 < iVar17) {
      FUN_10833ee74(param_5,lStack_b8,uStack_b0 & 0xffffffff,0,0,param_15,param_12,param_14);
      FUN_108321fc4(&lStack_b8);
      return iStack_13c;
    }
    iVar1 = iVar17 + 1;
    iVar3 = (int)param_7;
    if (iVar17 != iVar6) {
      iVar3 = iVar1 * param_8;
    }
    iVar5 = iVar17 * param_8;
    iVar19 = 0;
    while (iVar17 = iVar1, iVar19 <= iVar7) {
      iVar17 = iVar19 + 1;
      iVar4 = iVar20;
      if (iVar19 != iVar7) {
        iVar4 = iVar17 * param_8;
      }
      fStack_c4 = (float)(iVar19 * param_8);
      fStack_bc = (float)iVar4;
      pfVar13 = &fStack_c8;
      fStack_c8 = (float)iVar5;
      fStack_c0 = (float)iVar3;
      FUN_1081e4b40(pfVar13,&uStack_a8);
      iVar19 = iVar17;
      if (((ulong)pfVar13 & 1) != 0) {
        pfVar13 = &fStack_c8;
        FUN_10838ed10(pfVar13,param_10);
        if ((int)pfVar13 != 0) {
          uStack_e0 = 0;
          uStack_d8 = 0;
          func_0x00010812f1a8(&fStack_c8,&uStack_e0);
          iVar17 = (int)uStack_e0;
          iVar4 = uStack_e0._4_4_;
          lStack_e8 = CONCAT44(fStack_bc,fStack_c0);
          lStack_f0 = CONCAT44(fStack_c4,fStack_c8);
          uVar16 = param_9;
          FUN_108189c38(param_9,&lStack_f0,1);
          if ((uVar16 & 1) != 0) {
            fVar24 = (float)iVar17;
            fVar23 = (float)iVar4;
            if ((param_15[4] != 0) || ((char)param_15[1] == '\x01')) {
              uStack_130 = 0;
              uStack_128 = 0;
              uVar12 = param_7;
              if (param_14 != 1) {
                func_0x00010812f1a8(param_10,&uStack_130);
                uVar12 = uStack_128;
              }
              uStack_128 = uVar12;
              uVar18 = 1;
              if ((char)param_15[1] != '\0') {
                uVar18 = 2;
              }
              func_0x000108287690(&uStack_e0,uVar18,uVar18);
              if ((int)uStack_130 - (int)uStack_e0 < 1) {
                fVar21 = (float)uVar18;
              }
              else {
                fVar21 = (float)(int)(uVar18 - ((int)uStack_130 - (int)uStack_e0));
                uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_130);
              }
              if (uStack_130._4_4_ - uStack_e0._4_4_ < 1) {
                fVar22 = (float)uVar18;
              }
              else {
                fVar22 = (float)(int)(uVar18 - (uStack_130._4_4_ - uStack_e0._4_4_));
                uStack_e0 = CONCAT44(uStack_130._4_4_,(int)uStack_e0);
              }
              if ((int)uStack_128 < (int)uStack_d8) {
                uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uStack_128);
              }
              if (uStack_128._4_4_ < uStack_d8._4_4_) {
                uStack_d8 = CONCAT44(uStack_128._4_4_,(int)uStack_d8);
              }
              fVar24 = fVar24 - fVar21;
              fVar23 = fVar23 - fVar22;
            }
            plVar14 = *(long **)(param_6 + 0x18);
            uStack_128 = uStack_d8;
            uStack_130 = uStack_e0;
            if (plVar14 == (long *)0x0) {
              func_0x000104bfeb48();
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x108321e54);
              (*pcVar11)();
            }
            (**(code **)(*plVar14 + 0x30))(&lStack_f8,plVar14,&uStack_130);
            uVar16 = uStack_b0;
            lVar10 = lStack_f8;
            if (lStack_f8 != 0) {
              uStack_100 = param_13 & fStack_c8 <= *param_10;
              if (param_10[2] <= fStack_c0 && (param_13 & 4) != 0) {
                uStack_100 = uStack_100 | 4;
              }
              if (fStack_c4 <= param_10[1] && (param_13 & 2) != 0) {
                uStack_100 = uStack_100 | 2;
              }
              if (param_10[3] <= fStack_bc && (param_13 & 8) != 0) {
                uStack_100 = uStack_100 | 8;
              }
              fStack_c8 = fStack_c8 - fVar24;
              fStack_c4 = fStack_c4 - fVar23;
              fStack_c0 = fStack_c0 - fVar24;
              fStack_bc = fStack_bc - fVar23;
              lStack_f8 = 0;
              uStack_138 = 0;
              uStack_130 = lVar10;
              lStack_120 = CONCAT44(fStack_bc,fStack_c0);
              uStack_128 = CONCAT44(fStack_c4,fStack_c8);
              uStack_110 = (undefined5)lStack_e8;
              uStack_10b = (undefined3)((ulong)lStack_e8 >> 0x28);
              lStack_118 = lStack_f0;
              uStack_108 = 0xffffffff;
              uStack_103 = 0x3f8000;
              uStack_fc = 0;
              uVar15 = uStack_b0 & 0xffffffff;
              if ((int)uStack_b0 < (int)(uStack_b0._4_4_ >> 1)) {
                plVar14 = (long *)(lStack_b8 + (long)(int)uStack_b0 * 0x38);
                piVar2 = (int *)(lVar10 + 8);
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar9) {
                    *piVar2 = *piVar2 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                *plVar14 = lVar10;
                *(ulong *)((long)plVar14 + 0x2d) = (ulong)CONCAT43(uStack_100,0x3f8000);
                *(ulong *)((long)plVar14 + 0x25) = CONCAT53(0xffffffff,uStack_10b);
                plVar14[4] = lStack_e8;
                plVar14[3] = lStack_f0;
                plVar14[2] = lStack_120;
                plVar14[1] = uStack_128;
              }
              else {
                uVar12 = 1;
                FUN_108321f80(0x3ff8000000000000,uVar15,1);
                if (uStack_130 != 0) {
                  piVar2 = (int *)(uStack_130 + 8);
                  do {
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar9) {
                      *piVar2 = *piVar2 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                plVar14 = (long *)(uVar15 + (uVar16 & 0xffffffff) * 0x38);
                *plVar14 = uStack_130;
                *(ulong *)((long)plVar14 + 0x2d) =
                     CONCAT17(uStack_fc,CONCAT43(uStack_100,uStack_103));
                *(ulong *)((long)plVar14 + 0x25) = CONCAT53(uStack_108,uStack_10b);
                plVar14[4] = CONCAT35(uStack_10b,uStack_110);
                plVar14[3] = lStack_118;
                plVar14[2] = lStack_120;
                plVar14[1] = uStack_128;
                FUN_108321ea4(&lStack_b8,uVar15,uVar12);
              }
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
              FUN_10829bb10(&uStack_130);
              FUN_10829bb10(&uStack_138);
              iStack_13c = iStack_13c + 1;
            }
            func_0x000106f47184(&lStack_f8);
          }
        }
      }
    }
  } while( true );
}



/* Entry: 108321ea4; end: 108321f7f;  */

void FUN_108321ea4(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  for (lVar7 = 0; lVar7 < (int)param_1[1]; lVar7 = lVar7 + 1) {
    plVar2 = (long *)(*param_1 + lVar7 * 0x38);
    lVar6 = *plVar2;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar3 = (long *)(param_2 + lVar7 * 0x38);
    *plVar3 = lVar6;
    lVar8 = plVar2[2];
    lVar6 = plVar2[1];
    lVar10 = plVar2[4];
    lVar9 = plVar2[3];
    uVar11 = *(undefined8 *)((long)plVar2 + 0x25);
    *(undefined8 *)((long)plVar3 + 0x2d) = *(undefined8 *)((long)plVar2 + 0x2d);
    *(undefined8 *)((long)plVar3 + 0x25) = uVar11;
    plVar3[4] = lVar10;
    plVar3[3] = lVar9;
    plVar3[2] = lVar8;
    plVar3[1] = lVar6;
    FUN_10829bb10(*param_1 + lVar7 * 0x38);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x38;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108321f80; end: 108321fc3;  */

ulong * FUN_108321f80(ulong *param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong auStack_20 [2];
  
  puVar1 = auStack_20;
  if (param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    auStack_20[1] = 0x7fffffff;
    auStack_20[0] = 0x38;
    FUN_10840fe24(auStack_20,param_2 + (uint)param_1);
    return puVar1;
  }
  func_0x00010bdb1a68();
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar3 = uVar2 + (long)(int)param_1[1] * 0x38;
    do {
      FUN_10829bb10();
      uVar2 = uVar2 + 0x38;
    } while (uVar2 < uVar3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108321fc4; end: 108322013;  */

ulong * FUN_108321fc4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x38;
    do {
      FUN_10829bb10();
      uVar1 = uVar1 + 0x38;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108322014; end: 10832201b;  */

void FUN_108322014(void)

{
  return;
}



/* Entry: 10832201c; end: 108322043;  */

void FUN_10832201c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108322278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a3c4a8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108322044; end: 108322067;  */

void FUN_108322044(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3c4a8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108322068; end: 1083220a3;  */

void FUN_108322068(long param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x30))
            ((long *)**(undefined8 **)(param_1 + 8),0,&uStack_20);
  return;
}



/* Entry: 1083220a4; end: 1083220db;  */

long FUN_1083220a4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3c518);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1083220dc; end: 1083220e7;  */

undefined ** FUN_1083220dc(void)

{
  return &PTR_DAT_110a3c518;
}



/* Entry: 1083220e8; end: 10832212b;  */

long * FUN_1083220e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10832212c; end: 108322133;  */

void FUN_10832212c(void)

{
  return;
}



/* Entry: 108322134; end: 10832215b;  */

void FUN_108322134(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108322278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a3c538;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10832215c; end: 10832217f;  */

void FUN_10832215c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3c538;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108322180; end: 1083221fb;  */

void FUN_108322180(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_108330e64(uVar1,&uStack_70,&uStack_30);
  if ((int)uVar1 == 0) {
    func_0x000108322284();
    *param_1 = 0;
  }
  else {
    FUN_1083b7d24(param_1,&uStack_70,2);
    func_0x000108322284();
  }
  return;
}



/* Entry: 1083221fc; end: 108322233;  */

long FUN_1083221fc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3c598);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108322234; end: 10832231b;  */

undefined ** FUN_108322234(void)

{
  return &PTR_DAT_110a3c598;
}



/* Entry: 10832231c; end: 108322483;  */

void FUN_10832231c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  param_2 = param_2 / 6;
  uStack_60 = 0;
  uStack_58 = 0x100000000;
  iVar3 = (int)param_2;
  if (0 < iVar3) {
    uVar2 = 0;
    FUN_108322604(0x3ff0000000000000,0,param_2);
    func_0x000108322588(&uStack_60,uVar2,param_2);
  }
  FUN_108322678();
  for (uVar4 = 2; uVar4 <= 0x20U - (int)LZCOUNT(iVar3 + 1U >> 1); uVar4 = uVar4 + 1) {
    for (uVar1 = (uint)(1 << (ulong)(uVar4 - 1 & 0x1f)) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_108322678();
      FUN_108322678();
    }
  }
  _memcpy(param_1,uStack_60,(long)(int)uStack_58 * 6);
  FUN_108322648(&uStack_60);
  return;
}



/* Entry: 108322484; end: 1083224e3;  */

void FUN_108322484(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = NEON_fmov(0xbf800000,4);
  *param_1 = uVar4;
  pfVar1 = (float *)(param_1 + 3);
  param_1[2] = 0x3f80000000000000;
  param_1[1] = 0;
  for (uVar2 = 1; uVar2 != 0x21U - (int)LZCOUNT((int)(param_2 - 8U >> 3) - 1U >> 1);
      uVar2 = uVar2 + 1) {
    for (uVar3 = 1; (int)uVar3 < 1 << (ulong)(uVar2 & 0x1f); uVar3 = uVar3 + 2) {
      *pfVar1 = (float)uVar2;
      pfVar1[1] = (float)uVar3;
      pfVar1 = pfVar1 + 2;
    }
  }
  return;
}



/* Entry: 1083224e4; end: 108322603;  */

undefined4 * FUN_1083224e4(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  iVar1 = (int)param_1[1];
  lVar4 = (long)iVar1;
  if (iVar1 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    puVar6 = (undefined4 *)(*param_1 + (long)iVar1 * 6);
    uVar2 = *param_2;
    *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(param_2 + 1);
    *puVar6 = uVar2;
  }
  else {
    uVar5 = 1;
    FUN_108322604(0x3ff8000000000000,lVar4,1);
    puVar6 = (undefined4 *)(lVar4 + (long)(int)param_1[1] * 6);
    uVar3 = *(undefined2 *)(param_2 + 1);
    *puVar6 = *param_2;
    *(undefined2 *)(puVar6 + 1) = uVar3;
    func_0x000108322588(param_1,lVar4,uVar5);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return puVar6;
}



/* Entry: 108322604; end: 108322647;  */

undefined8 * FUN_108322604(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  if (param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 6;
    FUN_10840fe24(&uStack_20,param_2 + (uint)param_1);
    return puVar1;
  }
  func_0x00010bdb1a68();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108322648; end: 108322677;  */

undefined8 * FUN_108322648(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108322678; end: 108322683;  */

undefined4 * FUN_108322678(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  lVar1 = (long)in_stack_00000018;
  if (in_stack_00000018 < (int)(in_stack_0000001c >> 1)) {
    puVar3 = (undefined4 *)(in_stack_00000010 + (long)in_stack_00000018 * 6);
    *(undefined2 *)(puVar3 + 1) = in_stack_00000008._6_2_;
    *puVar3 = in_stack_00000008._2_4_;
  }
  else {
    uVar2 = 1;
    FUN_108322604(0x3ff8000000000000,lVar1,1);
    puVar3 = (undefined4 *)(lVar1 + (long)in_stack_00000018 * 6);
    *puVar3 = in_stack_00000008._2_4_;
    *(undefined2 *)(puVar3 + 1) = in_stack_00000008._6_2_;
    func_0x000108322588(&stack0x00000010,lVar1,uVar2);
  }
  return puVar3;
}



/* Entry: 108322684; end: 108322f07;  */

float * FUN_108322684(long param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined1 *puVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float extraout_s2;
  float extraout_s2_00;
  float fVar29;
  undefined1 auVar28 [16];
  ulong uVar30;
  float fVar32;
  undefined8 uVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_260;
  float fStack_25c;
  byte *pbStack_220;
  undefined8 *puStack_218;
  undefined4 *puStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  undefined8 *puStack_1f8;
  undefined4 *puStack_1f0;
  undefined4 uStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined1 auStack_190 [14];
  byte bStack_182;
  undefined1 auStack_180 [64];
  undefined1 *puStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [8];
  undefined1 *puStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  undefined8 auStack_e8 [3];
  undefined1 auStack_d0 [28];
  undefined1 auStack_b4 [4];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_1d0 = *param_4;
  fStack_1c0 = param_4[1];
  fStack_1c8 = -fStack_1d0;
  fStack_1cc = param_4[3];
  fStack_1bc = param_4[4];
  fStack_1c4 = -fStack_1cc;
  fStack_1b8 = -fStack_1c0;
  fStack_1b4 = -fStack_1bc;
  fVar37 = *param_5;
  uStack_1a8 = CONCAT44(param_4[5] - (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20),
                        param_4[2] - param_5[2]);
  uStack_1b0 = CONCAT44(param_5[1] - param_4[5],fVar37 - param_4[2]);
  afStack_1e0[0] = param_2;
  fStack_1a0 = fStack_1d0;
  fStack_19c = fStack_1cc;
  fStack_198 = fStack_1c0;
  fStack_194 = fStack_1bc;
  FUN_108376ad8(auStack_190);
  puStack_140 = auStack_180;
  uStack_138 = 0;
  uStack_134 = 0x10;
  puStack_128 = auStack_130;
  iStack_120 = 0;
  uStack_11c = 4;
  bStack_182 = bStack_182 | 4;
  FUN_1081e8e40(&pbStack_208,param_3);
  pbStack_220 = pbStack_208;
  puStack_210 = puStack_1f0;
  puStack_218 = puStack_1f8;
  do {
    if (pbStack_220 == pbStack_200) {
      func_0x000108376b14(param_1,auStack_190);
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfc | *(byte *)(param_3 + 0xe) & 3;
      pfVar14 = afStack_1e0;
      FUN_108322f08();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
        return pfVar14;
      }
      ___stack_chk_fail();
      FUN_108322f08(afStack_1e0);
      __Unwind_Resume(pfVar14);
      FUN_1081842d4(pfVar14 + 0x2e);
      FUN_1082e7088(pfVar14 + 0x28);
      FUN_10837ca38(pfVar14 + 0x14);
      return pfVar14;
    }
    uVar12 = (uint)*pbStack_220;
    if (uVar12 - 1 < 5) {
      switch(uVar12) {
      case 1:
        func_0x0001083232e8();
        break;
      case 2:
        func_0x0001083232d0(&puStack_140);
        uVar16 = 0;
        while (uVar12 = uStack_138, puVar5 = puStack_140, uStack_138 != 0) {
          puVar15 = puStack_140 + (long)(int)uStack_138 * 8 + -0x18;
          pfVar14 = &fStack_1d0;
          FUN_108323154(pfVar14,puVar15);
          if (((ulong)pfVar14 & 1) == 0) {
            func_0x0001083232e8();
code_r0x000108322df4:
            if ((uStack_138 & ((int)uStack_138 >> 0x1f ^ 0xffffffffU)) < 3) goto LAB_108322ec4;
            uStack_138 = uStack_138 - 3;
          }
          else {
            uVar25 = *(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -8);
            uVar4 = *(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -0x10);
            fVar37 = (float)uVar4;
            fVar23 = (float)((ulong)uVar4 >> 0x20);
            fVar37 = ((float)*(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -0x18) -
                     (fVar37 + fVar37)) + (float)uVar25;
            fVar20 = ((float)((ulong)*(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -0x18) >> 0x20
                             ) - (fVar23 + fVar23)) + (float)((ulong)uVar25 >> 0x20);
            fVar23 = fStack_1a0 * fVar37 + fStack_198 * fVar20;
            fVar20 = fStack_19c * fVar37 + fStack_194 * fVar20;
            fVar37 = fStack_198;
            if (afStack_1e0[0] * afStack_1e0[0] * 0.0625 * (fVar23 * fVar23 + fVar20 * fVar20) <=
                1.0995116e+12 || 8 < (uint)(uVar16 >> 9)) {
              FUN_1081f7aa0(auStack_190,puVar5 + (long)(int)uVar12 * 8 + -0x10,
                            puVar5 + (long)(int)uVar12 * 8 + -8);
              goto code_r0x000108322df4;
            }
            func_0x00010835158c(puVar15,auStack_e8);
            if ((uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) < 3) goto LAB_108322ec4;
            uStack_138 = uVar12 - 3;
            func_0x0001083232d0(&puStack_140);
            func_0x0001083232d0(&puStack_140);
            uVar16 = (ulong)((int)uVar16 + 1);
          }
        }
        break;
      case 3:
        uStack_1e4 = *puStack_210;
        func_0x0001083232d0(&puStack_140);
        func_0x00010819b270(&puStack_128,&uStack_1e4);
        iVar19 = 0;
        while (iVar6 = iStack_120, uVar12 = uStack_138, puVar5 = puStack_140, uStack_138 != 0) {
          if (iStack_120 == 0) goto LAB_108322ec4;
          puVar13 = (undefined8 *)(puStack_140 + (long)(int)uStack_138 * 8 + -0x18);
          fVar23 = *(float *)(puStack_128 + (long)iStack_120 * 4 + -4);
          pfVar14 = &fStack_1d0;
          FUN_108323154(pfVar14,puVar13);
          if (((ulong)pfVar14 & 1) == 0) {
            func_0x0001083232e8();
code_r0x0001083229d4:
            if (((uStack_138 & ((int)uStack_138 >> 0x1f ^ 0xffffffffU)) < 3) ||
               (uStack_138 = uStack_138 - 3, iStack_120 == 0)) goto LAB_108322ec4;
            iStack_120 = iStack_120 + -1;
          }
          else {
            fVar37 = *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0x10);
            pfVar14 = (float *)(puVar5 + (long)(int)uVar12 * 8 + -8);
            fVar27 = fStack_1a0 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0x18) +
                     fStack_198 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0x14);
            fVar29 = fStack_19c * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0x18) +
                     fStack_194 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0x14);
            uVar16 = CONCAT44(fVar29,fVar27);
            fVar20 = fStack_1a0 * fVar37 +
                     fStack_198 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0xc);
            fVar24 = fStack_19c * fVar37 +
                     fStack_194 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -0xc);
            fVar34 = fStack_1a0 * *pfVar14 +
                     fStack_198 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -4);
            fVar18 = fStack_19c * *pfVar14 +
                     fStack_194 * *(float *)(puVar5 + (long)(int)uVar12 * 8 + -4);
            uVar30 = uVar16 ^ (uVar16 ^ CONCAT44(fVar24,fVar20)) &
                              CONCAT44(-(uint)(fVar24 < fVar29),-(uint)(fVar20 < fVar27));
            uVar30 = uVar30 ^ (uVar30 ^ CONCAT44(fVar18,fVar34)) &
                              CONCAT44(-(uint)(fVar18 < (float)(uVar30 >> 0x20)),
                                       -(uint)(fVar34 < (float)uVar30));
            uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar24,fVar20)) &
                              CONCAT44(-(uint)(fVar29 < fVar24),-(uint)(fVar27 < fVar20));
            uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar18,fVar34)) &
                              CONCAT44(-(uint)((float)(uVar16 >> 0x20) < fVar18),
                                       -(uint)((float)uVar16 < fVar34));
            fVar37 = ((float)uVar30 + (float)uVar16) * 0.5;
            fVar32 = ((float)(uVar30 >> 0x20) + (float)(uVar16 >> 0x20)) * 0.5;
            fVar27 = fVar27 - fVar37;
            fVar29 = fVar29 - fVar32;
            fVar20 = fVar20 - fVar37;
            fVar24 = fVar24 - fVar32;
            fVar34 = fVar34 - fVar37;
            fVar18 = fVar18 - fVar32;
            fVar32 = fVar27 * fVar27 + fVar29 * fVar29;
            fVar33 = fVar20 * fVar20 + fVar24 * fVar24;
            fVar37 = fVar34 * fVar34 + fVar18 * fVar18;
            if (fVar37 <= fVar33) {
              fVar37 = fVar33;
            }
            if (fVar37 <= fVar32) {
              fVar37 = fVar32;
            }
            fVar34 = fVar34 + fVar27 + fVar20 * fVar23 * -2.0;
            fVar18 = fVar18 + fVar29 + fVar24 * fVar23 * -2.0;
            fVar37 = afStack_1e0[0] * SQRT(fVar37) + -1.0;
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
            fVar20 = 1.0;
            if (fVar23 <= 1.0) {
              fVar20 = fVar23;
            }
            if ((ABS(fVar23 * -2.0 + 2.0) * fVar37 +
                afStack_1e0[0] * SQRT(fVar34 * fVar34 + fVar18 * fVar18)) / (fVar20 * 4.0) <=
                1048576.0 || 0x11ff < iVar19) {
              FUN_1081f770c(fVar23,auStack_190,puVar5 + (long)(int)uVar12 * 8 + -0x10,pfVar14);
              goto code_r0x0001083229d4;
            }
            uStack_108 = *(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -0x10);
            uStack_110 = *puVar13;
            uStack_100 = *(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -8);
            bVar8 = false;
            bVar9 = true;
            bVar10 = false;
            if (!NAN(fVar23 - fVar23)) {
              bVar8 = false;
              bVar9 = false;
              bVar10 = true;
              if (!NAN(fVar23)) {
                bVar8 = fVar23 < 0.0;
                bVar9 = fVar23 == 0.0;
                bVar10 = false;
              }
            }
            if (bVar9 || bVar8 != bVar10) {
              fVar23 = 1.0;
            }
            puVar11 = &uStack_110;
            fStack_f8 = fVar23;
            FUN_108352a8c(0x3f000000,puVar11,auStack_e8);
            if (((ulong)puVar11 & 1) == 0) {
              uStack_110 = *puVar13;
              uStack_108 = *(undefined8 *)pfVar14;
              func_0x0001081f7a64(auStack_190,&uStack_108);
            }
            else {
              if ((uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) < 3) goto LAB_108322ec4;
              uStack_138 = uVar12 - 3;
              iStack_120 = iVar6 + -1;
              func_0x0001083232d0(&puStack_140);
              func_0x00010819b270(&puStack_128,auStack_b4);
              func_0x0001083232d0(&puStack_140);
              func_0x00010819b270(&puStack_128,auStack_d0);
              iVar19 = iVar19 + 1;
            }
          }
        }
        break;
      case 4:
        func_0x0001083232d8(&puStack_140);
        uVar16 = 0;
        while (uVar12 = uStack_138, puVar5 = puStack_140, uStack_138 != 0) {
          uVar25 = *(undefined8 *)(puStack_140 + (long)(int)uStack_138 * 8 + -0x20);
          fVar34 = fStack_1c0;
          func_0x000108323244();
          fVar20 = fStack_1cc;
          fVar23 = fStack_1d0;
          fVar24 = fStack_1d0;
          fVar32 = fVar37;
          func_0x000108323244(fStack_1d0,uVar25);
          uVar4 = *(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -0x18);
          fVar17 = (float)uVar4;
          fVar21 = (float)((ulong)uVar4 >> 0x20);
          fVar18 = fVar17;
          fVar33 = fVar32;
          func_0x0001083232e0();
          fVar27 = fVar23;
          fVar29 = fVar20;
          func_0x000108323244(fVar23,uVar4);
          uVar30 = *(ulong *)(puVar5 + (long)(int)uVar12 * 8 + -8);
          uVar31 = *(undefined8 *)(puVar5 + (long)(int)uVar12 * 8 + -0x10);
          fVar34 = fVar34 + fVar24;
          fVar35 = extraout_s1 + extraout_s1_00;
          fVar36 = extraout_s2 + extraout_s2_00;
          fVar37 = fVar37 + fVar32;
          fVar24 = extraout_s1_01;
          func_0x0001083232c0();
          fVar18 = fVar18 + fVar27;
          uVar4 = CONCAT44(fVar24 + fVar29,fVar18);
          func_0x0001083232e0();
          func_0x0001083232c0();
          fVar32 = (float)uVar31;
          fVar22 = (float)((ulong)uVar31 >> 0x20);
          fVar24 = fVar32;
          fVar29 = fVar22;
          func_0x0001083232e0();
          func_0x0001083232c0();
          fVar27 = fVar23;
          func_0x000108323244(fVar23,uVar31);
          func_0x0001083232c0();
          fVar18 = fVar18 + fVar27;
          func_0x000108323244(fVar23,uVar30 & 0xffffffff,uVar31);
          func_0x0001083232c0();
          func_0x000108323258(fVar34,uVar4);
          func_0x0001083232c0();
          func_0x000108323258(fVar18,CONCAT44(fVar29 + fVar20,fVar24 + fVar23));
          func_0x000108323258(fVar34,CONCAT44(extraout_s1_02,fVar18));
          func_0x0001083232c0();
          auVar26._4_4_ = -(uint)((float)((ulong)uStack_1b0 >> 0x20) < fVar35);
          auVar26._0_4_ = -(uint)((float)uStack_1b0 < fVar34);
          auVar26._8_4_ = -(uint)((float)uStack_1a8 < fVar36);
          auVar26._12_4_ = -(uint)((float)((ulong)uStack_1a8 >> 0x20) < fVar37);
          iVar19 = NEON_uminv(auVar26,4);
          if (iVar19 == 0) {
            func_0x0001081f7a64(auStack_190,puVar5 + (long)(int)uVar12 * 8 + -8);
            fVar37 = fVar33;
code_r0x000108322cf0:
            if ((uStack_138 & ((int)uStack_138 >> 0x1f ^ 0xffffffffU)) < 4) goto LAB_108322ec4;
            uStack_138 = uStack_138 - 4;
          }
          else {
            fStack_260 = (float)uVar25;
            fStack_25c = (float)((ulong)uVar25 >> 0x20);
            fVar37 = (fStack_260 - (fVar17 + fVar17)) + fVar32;
            fVar23 = (fStack_25c - (fVar21 + fVar21)) + fVar22;
            fVar34 = (fVar17 - (fVar32 + fVar32)) + (float)uVar30;
            fVar18 = (fVar21 - (fVar22 + fVar22)) + (float)(uVar30 >> 0x20);
            fVar20 = fStack_1a0 * fVar37 + fStack_198 * fVar23;
            fVar23 = fStack_19c * fVar37 + fStack_194 * fVar23;
            fVar24 = fStack_1a0 * fVar34 + fStack_198 * fVar18;
            fVar34 = fStack_19c * fVar34 + fStack_194 * fVar18;
            fVar20 = fVar20 * fVar20;
            fVar23 = fVar23 * fVar23;
            fVar24 = fVar24 * fVar24;
            fVar34 = fVar34 * fVar34;
            auVar28._4_4_ = fVar23;
            auVar28._0_4_ = fVar20;
            auVar28._8_4_ = fVar24;
            auVar28._12_4_ = fVar34;
            auVar1._4_4_ = fVar23;
            auVar1._0_4_ = fVar20;
            auVar1._8_4_ = fVar24;
            auVar1._12_4_ = fVar34;
            auVar26 = NEON_ext(auVar28,auVar1,4,1);
            auVar2._4_4_ = fVar23;
            auVar2._0_4_ = fVar20;
            auVar2._8_4_ = fVar24;
            auVar2._12_4_ = fVar34;
            auVar3._4_4_ = fVar23;
            auVar3._0_4_ = fVar20;
            auVar3._8_4_ = fVar24;
            auVar3._12_4_ = fVar34;
            auVar28 = NEON_ext(auVar2,auVar3,8,1);
            fVar20 = auVar26._0_4_ + fVar20;
            fVar23 = auVar26._4_4_ + auVar28._4_4_;
            if (fVar23 <= fVar20) {
              fVar23 = fVar20;
            }
            if (afStack_1e0[0] * afStack_1e0[0] * 0.5625 * fVar23 <= 1.0995116e+12 ||
                8 < (uint)(uVar16 >> 9)) {
              func_0x00010817abc4(auStack_190,puVar5 + (long)(int)uVar12 * 8 + -0x18,
                                  puVar5 + (long)(int)uVar12 * 8 + -0x10,
                                  puVar5 + (long)(int)uVar12 * 8 + -8);
              goto code_r0x000108322cf0;
            }
            FUN_108351de8(puVar5 + (long)(int)uVar12 * 8 + -0x20,auStack_e8);
            if ((uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) < 4) goto LAB_108322ec4;
            uStack_138 = uVar12 - 4;
            func_0x0001083232d8(&puStack_140);
            func_0x0001083232d8(&puStack_140);
            uVar16 = (ulong)((int)uVar16 + 1);
          }
        }
        break;
      case 5:
        FUN_108377ec8(auStack_190,puStack_218,puStack_218 + -1);
      }
    }
    else {
      if (uVar12 != 0) {
LAB_108322ec4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x108322ec8);
        (*pcVar7)();
      }
      auStack_e8[0] = *puStack_218;
      FUN_10817abbc(auStack_190,auStack_e8);
    }
    func_0x0001081e8ec8(&pbStack_220);
  } while( true );
}



/* Entry: 108322f08; end: 108322f3f;  */

long FUN_108322f08(long param_1)

{
  FUN_1081842d4(param_1 + 0xb8);
  FUN_1082e7088(param_1 + 0xa0);
  FUN_10837ca38(param_1 + 0x50);
  return param_1;
}



/* Entry: 108322f40; end: 1083230f3;  */

undefined8 FUN_108322f40(undefined8 *param_1,float *param_2,undefined1 *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar7;
  ulong uVar6;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  
  fVar13 = (float)*param_1;
  fVar11 = (float)((ulong)*param_1 >> 0x20);
  fVar2 = (float)param_1[1];
  fVar4 = (float)((ulong)param_1[1] >> 0x20);
  fVar8 = fVar2 - fVar13;
  fVar9 = fVar4 - fVar11;
  fVar12 = (float)param_1[2];
  fVar2 = fVar12 - fVar2;
  fVar14 = (float)((ulong)param_1[2] >> 0x20);
  fVar4 = fVar14 - fVar4;
  fVar15 = fVar2 - fVar8;
  fVar16 = fVar4 - fVar9;
  uVar18 = NEON_fmov(0xc0400000,4);
  fVar17 = ((float)param_1[3] - fVar13) + fVar2 * (float)uVar18;
  fVar19 = ((float)((ulong)param_1[3] >> 0x20) - fVar11) + fVar4 * (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_rev64(CONCAT44(fVar16,fVar15),4);
  uVar5 = NEON_rev64(CONCAT44(fVar9,fVar8),4);
  fVar2 = (float)((ulong)uVar5 >> 0x20);
  fVar4 = (float)uVar5 * fVar15 - fVar2 * fVar16;
  fVar7 = (float)uVar18 * fVar17 - (float)((ulong)uVar18 >> 0x20) * fVar19;
  fVar3 = ((float)uVar5 * fVar17 - fVar2 * fVar19) * -0.5;
  fVar2 = -fVar4 * fVar7 + fVar3 * fVar3;
  fVar20 = fVar7 * 0.00024414062;
  if (-(fVar20 * fVar20) <= fVar2) {
    *param_3 = fVar2 <= fVar20 * fVar20;
    if (fVar2 <= fVar20 * fVar20) {
      if (((fVar7 != 0.0) || (fVar3 != 0.0)) || (fVar4 != 0.0)) {
        fVar4 = fVar3 / fVar7;
        goto LAB_108322fc0;
      }
      uVar6 = CONCAT44(fVar14 - fVar11,fVar12 - fVar13);
      uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(fVar9,fVar8)) &
                      ~CONCAT44(-(uint)(fVar9 == 0.0),-(uint)(fVar8 == 0.0));
      fVar2 = (float)uVar6;
      fVar7 = (float)(uVar6 >> 0x20);
      fVar13 = fVar2 * fVar15 + fVar7 * fVar16;
      fVar3 = -fVar13;
      fVar4 = fVar8 * fVar2 + fVar9 * fVar7;
      fVar7 = fVar2 * fVar17 + fVar7 * fVar19;
      fVar8 = -fVar4 * fVar7 + fVar13 * fVar13;
      fVar2 = 0.0;
      if (0.0 <= fVar8) {
        fVar2 = fVar8;
      }
    }
    fVar3 = fVar3 + (float)((uint)SQRT(fVar2) ^ ((uint)SQRT(fVar2) ^ (uint)fVar3) & 0x80000000);
    fVar7 = fVar3 / fVar7;
    fVar4 = fVar4 / fVar3;
    uVar6 = CONCAT44(-(uint)(fVar4 < 0.9995117),-(uint)(fVar7 < 0.9995117)) &
            CONCAT44(-(uint)(0.00048828125 < fVar4),-(uint)(0.00048828125 < fVar7));
    iVar10 = (int)(uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      if (iVar10 == 0) {
        return 0;
      }
      *param_2 = fVar4;
    }
    else {
      bVar1 = true;
      if ((iVar10 != 0) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar4))) {
        bVar1 = fVar7 == fVar4;
      }
      if (!bVar1) {
        uVar6 = NEON_rev64(CONCAT44(fVar4,fVar7),4);
        *(ulong *)param_2 =
             CONCAT44(fVar4,fVar7) ^
             (CONCAT44(fVar4,fVar7) ^ uVar6) &
             CONCAT44(-(uint)(fVar4 < fVar7),-(uint)(fVar4 < fVar7));
        return 2;
      }
      *param_2 = fVar7;
    }
  }
  else {
    *param_3 = 0;
    fVar4 = fVar4 / fVar3;
LAB_108322fc0:
    if (0x3f7fbfff < (uint)(fVar4 + -0.00048828125)) {
      return 0;
    }
    *param_2 = fVar4;
  }
  return 1;
}



/* Entry: 1083230f4; end: 108323153;  */

void FUN_1083230f4(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x0001082d3680(0x3ff8000000000000);
  lVar2 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar2 + param_2;
  puVar1 = (undefined8 *)(*param_1 + (long)(int)lVar2 * 8);
  for (uVar3 = (ulong)param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 108323154; end: 108323243;  */

bool FUN_108323154(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar12 = (float)param_1[3];
  fVar14 = (float)((ulong)param_1[3] >> 0x20);
  fVar2 = (float)param_1[2];
  fVar7 = (float)((ulong)param_1[2] >> 0x20);
  fVar5 = fVar2;
  fVar10 = fVar7;
  FUN_108323244(fVar2,param_2[1]);
  func_0x0001083232c0();
  fVar3 = fVar2;
  FUN_108323244(fVar2,param_2[3]);
  func_0x0001083232c0();
  FUN_108323244(fVar2,param_2[5]);
  func_0x0001083232c0();
  fVar11 = (float)param_1[1];
  fVar13 = (float)((ulong)param_1[1] >> 0x20);
  fVar4 = (float)*param_1;
  fVar8 = (float)((ulong)*param_1 >> 0x20);
  fVar2 = fVar4;
  fVar9 = fVar8;
  FUN_108323244(fVar4,*param_2);
  func_0x0001083232c0();
  fVar5 = fVar5 + fVar2;
  fVar10 = fVar10 + fVar9;
  fVar12 = fVar12 + fVar11;
  fVar14 = fVar14 + fVar13;
  fVar2 = fVar4;
  FUN_108323244(fVar4,param_2[2]);
  func_0x0001083232c0();
  FUN_108323244(fVar4,param_2[4]);
  func_0x0001083232c0();
  func_0x000108323258(fVar5,CONCAT44(fVar7 + fVar8,fVar3 + fVar2));
  func_0x0001083232c0();
  func_0x000108323258();
  func_0x0001083232c0();
  auVar1._4_4_ = -(uint)((float)((ulong)param_1[4] >> 0x20) < fVar10);
  auVar1._0_4_ = -(uint)((float)param_1[4] < fVar5);
  auVar1._8_4_ = -(uint)((float)param_1[5] < fVar12);
  auVar1._12_4_ = -(uint)((float)((ulong)param_1[5] >> 0x20) < fVar14);
  iVar6 = NEON_uminv(auVar1,4);
  return iVar6 != 0;
}



/* Entry: 108323244; end: 1083232ef;  */

float FUN_108323244(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 1083232f0; end: 108323347;  */

void FUN_1083232f0(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_108323348(auStack_68,param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 108323348; end: 108323597;  */

void FUN_108323348(undefined8 param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  
  uVar6 = 0;
  iVar9 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 1;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  uVar8 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  *(ulong *)(param_2 + 0x10) = uVar8;
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  *(long **)(param_2 + 0x18) = plVar1;
  do {
    if (uVar8 <= uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                (param_1,param_2 + 0x20);
      return;
    }
    if (param_2[0x38] == 1) {
LAB_108323400:
      FUN_108323760(param_2);
    }
    else if (param_2[0x39] == 1) {
      puVar5 = *(undefined **)(param_2 + 0x40);
LAB_108323420:
      FUN_1083237c4(param_2,puVar5);
    }
    else {
      pbVar4 = param_2;
      func_0x000108323850(param_2,"#");
      if ((((ulong)pbVar4 & 1) != 0) ||
         (pbVar4 = param_2, func_0x000108323850(param_2,"//"), (int)pbVar4 != 0))
      goto LAB_108323400;
      pbVar4 = param_2;
      func_0x000108323850(param_2,&UNK_10f48d507);
      iVar3 = (int)pbVar4;
      puVar5 = &UNK_10f48d50a;
      if (iVar3 != 0) goto LAB_108323420;
      cVar2 = *(char *)(*(long *)(param_2 + 0x18) + *(long *)(param_2 + 8));
      if (cVar2 == '}') {
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
        func_0x000108323af4();
LAB_1083234c8:
        func_0x000108323b08();
      }
      else {
        if (cVar2 != '{') {
          if ((cVar2 == ';') && (*param_2 != 0)) {
            FUN_108323918(param_2);
            goto LAB_1083234c8;
          }
          if ((cVar2 == ',') && (*param_2 != 0)) {
            FUN_108323918(param_2);
LAB_1083234e8:
            func_0x000108323b08();
          }
          else {
            func_0x000108323afc();
            if (iVar3 == 0) {
              pbVar4 = param_2;
              func_0x000108323850(param_2,&DAT_10f68e8ec);
              iVar3 = (int)pbVar4;
              if (iVar3 == 0) {
                func_0x000108323afc();
                if (iVar3 != 0) goto LAB_1083234f8;
                if ((iVar9 == 0) &&
                   (pbVar4 = param_2, func_0x000108323850(param_2,";"), (int)pbVar4 != 0)) {
                  func_0x000108323af4();
                  iVar9 = 0;
                }
                else {
                  uVar7 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + *(long *)(param_2 + 8));
                  if ((1 < uVar7 - 9) && ((uVar7 != 0x20 || ((*param_2 & 1) == 0))))
                  goto LAB_1083234e8;
                  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
                }
              }
              else {
                iVar9 = iVar9 + 1;
              }
            }
            else {
LAB_1083234f8:
              iVar9 = iVar9 + -1;
            }
          }
          goto LAB_108323424;
        }
        func_0x000108323af4();
        func_0x000108323b08();
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      }
      func_0x000108323af4();
    }
LAB_108323424:
    uVar6 = *(ulong *)(param_2 + 8);
    uVar8 = *(ulong *)(param_2 + 0x10);
  } while( true );
}



/* Entry: 108323598; end: 108323643;  */

void FUN_108323598(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0x100000000;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  FUN_1083a3f34(plVar1,&UNK_10f48d4c7,0,&lStack_30);
  lVar2 = 0;
  while (lVar2 < (int)uStack_28) {
    FUN_108323644(param_2,lVar2 + 1,*(long *)(lStack_30 + lVar2 * 8) + 8);
    lVar2 = lVar2 + 1;
  }
  FUN_10815dbb8(&lStack_30);
  return;
}



/* Entry: 108323644; end: 10832366f;  */

void FUN_108323644(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_20 = param_3;
  uStack_14 = param_2;
  FUN_1083239d4(param_1,&uStack_14,&uStack_20);
  return;
}



/* Entry: 108323670; end: 10832375f;  */

void FUN_108323670(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  long lStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c278b8(param_1,&UNK_10f48d4c9);
  func_0x000107c278b8(auStack_70,param_2);
  ppuStack_58 = &PTR_FUN_110a3c5b8;
  pppuStack_40 = &ppuStack_58;
  lStack_50 = param_1;
  FUN_108323598(auStack_70,&ppuStack_58);
  FUN_108320f5c(&ppuStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  lVar3 = param_1;
  FUN_1083d416c(param_1,&UNK_10f48d4fc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
  __Unwind_Resume();
  while( true ) {
    uVar1 = *(ulong *)(lVar3 + 8);
    if (*(ulong *)(lVar3 + 0x10) <= uVar1) {
      return;
    }
    cVar2 = *(char *)(*(long *)(lVar3 + 0x18) + uVar1);
    *(ulong *)(lVar3 + 8) = uVar1 + 1;
    if (cVar2 == '\n') break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (lVar3 + 0x20,(long)*(char *)(*(long *)(lVar3 + 0x18) + uVar1));
    *(undefined1 *)(lVar3 + 0x38) = 1;
  }
  FUN_1083238d4(lVar3);
  *(undefined1 *)(lVar3 + 0x38) = 0;
  return;
}



/* Entry: 108323760; end: 1083237c3;  */

void FUN_108323760(long param_1)

{
  ulong uVar1;
  char cVar2;
  
  while( true ) {
    uVar1 = *(ulong *)(param_1 + 8);
    if (*(ulong *)(param_1 + 0x10) <= uVar1) {
      return;
    }
    cVar2 = *(char *)(*(long *)(param_1 + 0x18) + uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 1;
    if (cVar2 == '\n') break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 0x20,(long)*(char *)(*(long *)(param_1 + 0x18) + uVar1));
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  FUN_1083238d4(param_1);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1083237c4; end: 1083238d3;  */

void FUN_1083237c4(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  while( true ) {
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_1 + 8)) {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x18) + *(ulong *)(param_1 + 8)) == '\n') {
      FUN_1083238d4(param_1);
      FUN_108323988(param_1);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
    puVar1 = param_1;
    func_0x000108323850(param_1,param_2);
    if ((int)puVar1 != 0) break;
    *param_1 = 0;
    func_0x000108323ad8();
    param_1[0x39] = 1;
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
  param_1[0x39] = 0;
  return;
}



/* Entry: 1083238d4; end: 1083238ef;  */

void FUN_1083238d4(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    return;
  }
  *param_1 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)
            (param_1 + 0x20,10);
  return;
}



/* Entry: 1083238f0; end: 108323917;  */

void FUN_1083238f0(undefined1 *param_1)

{
  FUN_108323988();
  func_0x000108323ad8();
  *param_1 = 0;
  return;
}



/* Entry: 108323918; end: 108323987;  */

void FUN_108323918(char *param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (*param_1 == '\x01') {
    pcVar2 = param_1 + 0x20;
    uVar4 = (ulong)param_1[0x37];
    if ((long)uVar4 < 0) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      if (uVar4 < 2) {
        return;
      }
      pcVar5 = *(char **)pcVar2;
      cVar1 = pcVar5[uVar4 - 1];
    }
    else {
      if ((byte)param_1[0x37] < 2) {
        return;
      }
      cVar1 = pcVar2[uVar4 - 1];
      pcVar5 = pcVar2;
    }
    if ((cVar1 == '\n') && (pcVar5[uVar4 - 2] == '}')) {
      *param_1 = '\0';
      if ((long)param_1[0x37] < 0) {
        lVar3 = *(long *)(param_1 + 0x28) + -1;
        *(long *)(param_1 + 0x28) = lVar3;
        pcVar2 = *(char **)pcVar2;
      }
      else {
        lVar3 = (long)param_1[0x37] + -1;
        param_1[0x37] = (byte)lVar3 & 0x7f;
      }
      pcVar2[lVar3] = '\0';
      return;
    }
  }
  return;
}



/* Entry: 108323988; end: 1083239d3;  */

void FUN_108323988(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\x01') {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 4); iVar1 = iVar1 + 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1 + 0x20,9)
      ;
    }
  }
  return;
}



/* Entry: 1083239d4; end: 1083239f3;  */

void FUN_1083239d4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083239e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 1083239f4; end: 1083239fb;  */

void FUN_1083239f4(void)

{
  return;
}



/* Entry: 1083239fc; end: 108323a2f;  */

void FUN_1083239fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a3c5b8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108323a30; end: 108323a5b;  */

void FUN_108323a30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3c5b8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108323a5c; end: 108323a8f;  */

void FUN_108323a5c(long param_1)

{
  FUN_1083d416c(*(undefined8 *)(param_1 + 8),&UNK_10f48d50d);
  return;
}


