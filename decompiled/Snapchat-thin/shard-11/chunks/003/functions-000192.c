/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083a431c; end: 1083a44df;  */

void FUN_1083a431c(ulong *param_1,float *param_2,ulong *param_3,ulong param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  func_0x0001083a61e4();
  func_0x0001083a5f68();
  fVar6 = *(float *)((long)param_1 + 0xc) * 0.00024414062;
  uVar4 = (ulong)(uint)*param_2;
  uVar5 = (ulong)(uint)param_2[1];
  fVar7 = ABS(*(float *)((long)param_1 + 0x3c) - *param_2);
  bVar1 = false;
  bVar2 = true;
  if (ABS(*(float *)(param_1 + 8) - param_2[1]) <= fVar6) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar7) && !NAN(fVar6)) {
      bVar1 = fVar7 == fVar6;
      bVar2 = fVar6 <= fVar7;
    }
  }
  uVar3 = param_1[0xb] == 0x1083a64cc;
  uStack_48 = extraout_x8;
  if (((bool)uVar3) && (!bVar2 || bVar1)) goto LAB_1083a44b8;
  if (!bVar2 || bVar1) {
    if ((*(byte *)((long)unaff_x19 + 0xa1) & 1) != 0) goto LAB_1083a44b8;
    if (param_3 != (ulong *)0x0) {
      uStack_98 = param_3[1];
      uStack_a0 = *param_3;
      uStack_88 = param_3[3];
      uStack_90 = param_3[2];
      uStack_78 = param_3[5];
      uStack_80 = param_3[4];
      uStack_70 = param_3[6];
LAB_1083a43b4:
      param_1 = &uStack_a0;
      FUN_108379cc8(param_1,&fStack_68);
      uVar3 = (int)param_1 == 6;
      switch((ulong)param_1 & 0xffffffff) {
      case 0:
      case 5:
      case 6:
        goto code_r0x0001083a443c;
      case 1:
        fVar6 = fStack_60;
        fVar7 = fStack_5c;
        goto code_r0x0001083a442c;
      case 2:
      case 3:
        uVar3 = false;
        fVar6 = fStack_58;
        fVar7 = fStack_54;
        if ((fStack_68 == fStack_60) && (uVar3 = false, !NAN(fStack_64) && !NAN(fStack_5c))) {
          uVar3 = fStack_64 == fStack_5c;
        }
        break;
      case 4:
        uVar4 = (ulong)(uint)fStack_68;
        uVar5 = (ulong)(uint)fStack_64;
        uVar3 = false;
        if ((fStack_68 == fStack_60) && (uVar3 = false, !NAN(fStack_64) && !NAN(fStack_5c))) {
          uVar3 = fStack_64 == fStack_5c;
        }
        unaff_x21 = (undefined8 *)&UNK_10df1e900;
        if (!(bool)uVar3) goto LAB_1083a44b8;
        uVar3 = false;
        fVar6 = fStack_50;
        fVar7 = fStack_4c;
        if ((fStack_68 == fStack_58) && (uVar3 = false, !NAN(fStack_64) && !NAN(fStack_54))) {
          uVar3 = fStack_64 == fStack_54;
        }
        break;
      default:
        goto LAB_1083a43b4;
      }
      uVar5 = (ulong)(uint)fStack_64;
      uVar4 = (ulong)(uint)fStack_68;
      unaff_x21 = (undefined8 *)&UNK_10df1e900;
      if (!(bool)uVar3) goto LAB_1083a44b8;
code_r0x0001083a442c:
      uVar5 = (ulong)(uint)fStack_64;
      uVar4 = (ulong)(uint)fStack_68;
      bVar1 = false;
      if ((fStack_68 == fVar6) && (bVar1 = false, !NAN(fStack_64) && !NAN(fVar7))) {
        bVar1 = fStack_64 == fVar7;
      }
      if (!bVar1) {
        uVar3 = 0;
        unaff_x21 = (undefined8 *)&UNK_10df1e900;
        goto LAB_1083a44b8;
      }
      goto LAB_1083a43b4;
    }
  }
LAB_1083a4440:
  param_4 = 1;
  param_1 = unaff_x19;
  FUN_1083a3fe4(uVar4,uVar5);
  fVar7 = fStack_64;
  fVar6 = fStack_68;
  unaff_x21 = (undefined8 *)0x1;
  if ((int)param_1 != 0) {
    uStack_a0 = CONCAT44(fStack_64 + (float)(*unaff_x20 >> 0x20),fStack_68 + (float)*unaff_x20);
    func_0x0001081f7a64(unaff_x19 + 0xf,&uStack_a0);
    uVar4 = CONCAT44((float)(*unaff_x20 >> 0x20) - fVar7,(float)*unaff_x20 - fVar6);
    param_1 = unaff_x19 + 0xd;
    uStack_a0 = uVar4;
    func_0x0001081f7a64(param_1,&uStack_a0);
    *(undefined1 *)((long)unaff_x19 + 0xa1) = 1;
    *(ulong *)((long)unaff_x19 + 0x3c) = *unaff_x20;
    *(undefined8 *)((long)unaff_x19 + 0x2c) = uStack_a8;
    *(ulong *)((long)unaff_x19 + 0x1c) = CONCAT44(fStack_64,fStack_68);
    *(int *)(unaff_x19 + 10) = (int)unaff_x19[10] + 1;
  }
LAB_1083a44b8:
  func_0x0001083a5f14(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001083a622c();
    FUN_1083a4108((int)param_1[1],*(undefined4 *)((long)param_1 + 0xc),(int)param_1[2],
                  *(undefined4 *)((long)param_1 + 0x14),uVar5,uVar4,param_4,param_5);
    if ((param_4 & 1) == 0) {
      *unaff_x21 = unaff_x22;
      *unaff_x19 = *unaff_x20;
    }
    return;
  }
  return;
code_r0x0001083a443c:
  uVar4 = (ulong)(uint)*unaff_x20;
  uVar5 = (ulong)*(uint *)((long)unaff_x20 + 4);
  goto LAB_1083a4440;
}



/* Entry: 1083a44e0; end: 1083a452f;  */

void FUN_1083a44e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x0001083a622c();
  FUN_1083a4108(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),
                *(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                CONCAT44(uVar4,uVar3),CONCAT44(uVar2,uVar1),param_6,param_7);
  if ((param_6 & 1) == 0) {
    *unaff_x21 = unaff_x22;
    *unaff_x19 = *unaff_x20;
  }
  return;
}



/* Entry: 1083a4530; end: 1083a4557;  */

bool FUN_1083a4530(float param_1,float param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (param_1 + param_2) * 0.5;
  *(float *)(param_3 + 0x28) = param_1;
  *(float *)(param_3 + 0x2c) = fVar2;
  *(float *)(param_3 + 0x30) = param_2;
  *(undefined2 *)(param_3 + 0x34) = 0;
  bVar1 = false;
  if ((fVar2 < param_2) && (bVar1 = false, !NAN(param_1) && !NAN(fVar2))) {
    bVar1 = param_1 < fVar2;
  }
  return bVar1;
}



/* Entry: 1083a4558; end: 1083a460f;  */

bool FUN_1083a4558(long param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  
  uVar6 = 0;
  uVar7 = 0;
  fVar11 = -1.0;
  lVar9 = 1;
  for (lVar8 = 0; lVar10 = lVar9, lVar8 != 2; lVar8 = lVar8 + 1) {
    for (; lVar10 != 3; lVar10 = lVar10 + 1) {
      uVar13 = *(undefined8 *)(param_1 + lVar10 * 8);
      uVar15 = *(undefined8 *)(param_1 + lVar8 * 8);
      fVar12 = ABS((float)uVar13 - (float)uVar15);
      fVar14 = ABS((float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar15 >> 0x20));
      if (fVar14 <= fVar12) {
        fVar14 = fVar12;
      }
      uVar4 = (uint)lVar8;
      uVar5 = (uint)lVar10;
      if (fVar14 <= fVar11) {
        fVar14 = fVar11;
        uVar4 = uVar7;
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
      uVar7 = uVar4;
      fVar11 = fVar14;
    }
    lVar9 = lVar9 + 1;
  }
  pfVar1 = (float *)(param_1 + (ulong)(uVar6 ^ uVar7 ^ 3) * 8);
  puVar2 = (undefined4 *)(param_1 + (ulong)uVar7 * 8);
  puVar3 = (undefined4 *)(param_1 + (ulong)uVar6 * 8);
  fVar14 = *pfVar1;
  func_0x0001083a4f78(fVar14,pfVar1[1],*puVar2,puVar2[1],*puVar3,puVar3[1]);
  return fVar14 <= fVar11 * fVar11 * 5e-06;
}



/* Entry: 1083a4610; end: 1083a487f;  */

/* WARNING: Possible PIC construction at 0x0001083a4850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083a4860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083a4854) */
/* WARNING: Removing unreachable block (ram,0x0001083a4864) */
/* WARNING: Removing unreachable block (ram,0x0001083a4874) */

float * FUN_1083a4610(float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  float *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float afStack_70 [14];
  undefined8 uStack_38;
  
  pfVar4 = afStack_70;
  pfVar3 = afStack_70;
  pfVar13 = afStack_70;
  pfVar14 = afStack_70;
  pfVar2 = afStack_70;
  pfVar15 = afStack_70;
  puVar18 = &stack0xfffffffffffffff0;
  pfVar9 = param_1;
  pfVar8 = param_2;
  pfVar11 = param_3;
  func_0x0001083a5f68();
  uStack_38 = extraout_x8;
  if (((uint)pfVar11[0xd] & 1) == 0) {
    func_0x0001083a600c(param_3[10]);
    func_0x0001083a4900();
    *(undefined1 *)(param_3 + 0xd) = 1;
    pfVar11 = pfVar13;
  }
  if ((*(byte *)((long)param_3 + 0x35) & 1) == 0) {
    func_0x0001083a600c(param_3[0xc]);
    func_0x0001083a4900();
    *(undefined1 *)((long)param_3 + 0x35) = 1;
    pfVar11 = pfVar14;
  }
  func_0x0001083a5fec();
  if ((int)pfVar9 == 2) {
    func_0x0001083a600c(param_3[0xb]);
    func_0x0001083a4900();
    func_0x0001083a5ffc();
    pfVar11 = pfVar2;
  }
  uVar6 = true;
  if ((int)pfVar9 == 1) {
LAB_1083a46f4:
    pfVar15 = pfVar11;
    func_0x0001083a5f14(uStack_38);
    if ((bool)uVar6) {
      func_0x0001083a6018();
      goto LAB_1083a60fc;
    }
  }
  else {
    bVar5 = (int)pfVar9 == 2;
    if (bVar5) {
      func_0x0001083a615c();
      uVar19 = 0x78;
      if (!bVar5) {
        uVar19 = extraout_x8_00;
      }
      func_0x0001083a616c(uVar19);
      pfVar15 = pfVar11;
      if (bVar5) {
        func_0x0001083a614c();
LAB_1083a611c:
        fVar20 = *pfVar8;
        fVar21 = pfVar8[1];
        fVar22 = *pfVar11;
        fVar23 = pfVar11[1];
        *(undefined8 *)((long)pfVar4 + 0x30) = unaff_d11;
        *(undefined8 *)((long)pfVar4 + 0x38) = unaff_d10;
        *(undefined8 *)((long)pfVar4 + 0x40) = unaff_d9;
        *(undefined8 *)((long)pfVar4 + 0x48) = unaff_d8;
        *(undefined8 *)((long)pfVar4 + 0x50) = *(undefined8 *)((long)pfVar4 + 0x50);
        *(undefined8 *)((long)pfVar4 + 0x58) = *(undefined8 *)((long)pfVar4 + 0x58);
        *(undefined8 *)((long)pfVar4 + 0x60) = unaff_x29;
        *(undefined8 *)((long)pfVar4 + 0x68) = unaff_x30;
        FUN_108377cd4();
        FUN_10837ca9c((undefined1 *)((long)pfVar4 + 0x28));
        pfVar8 = *(float **)((long)pfVar4 + 0x28);
        FUN_10837e8b4(0,pfVar8,2);
        *pfVar8 = fVar20;
        pfVar8[1] = fVar21;
        pfVar8[2] = fVar22;
        pfVar8[3] = fVar23;
        *(undefined1 *)(pfVar9 + 3) = 2;
        *(undefined1 *)((long)pfVar9 + 0xd) = 2;
        return pfVar9;
      }
    }
    else {
      func_0x0001083a613c();
      uVar6 = extraout_w8 == 0x21;
      if (0x20 < extraout_w8) goto LAB_1083a46f4;
      func_0x0001083a61a8();
      func_0x0001083a600c();
      FUN_1083a4610();
      func_0x0001083a619c();
      func_0x0001083a600c();
      FUN_1083a4610();
      func_0x0001083a612c();
      func_0x0001083a5f14(uStack_38);
      if ((bool)uVar6) {
        return pfVar9;
      }
    }
  }
  uVar19 = 0x1083a4748;
  ___stack_chk_fail();
  pfVar2 = afStack_70;
  while( true ) {
    pfVar16 = pfVar15;
    pfVar12 = pfVar8;
    pfVar10 = pfVar9;
    pfVar4 = (float *)((long)pfVar2 + -0x70);
    pfVar3 = (float *)((long)pfVar2 + -0x70);
    pfVar14 = (float *)((long)pfVar2 + -0x70);
    pfVar13 = (float *)((long)pfVar2 + -0x70);
    pfVar17 = (float *)((long)pfVar2 + -0x70);
    pfVar15 = (float *)((long)pfVar2 + -0x70);
    *(float **)((long)pfVar2 + -0x30) = unaff_x22;
    *(float **)((long)pfVar2 + -0x28) = param_2;
    *(float **)((long)pfVar2 + -0x20) = param_3;
    *(float **)((long)pfVar2 + -0x18) = param_1;
    *(undefined1 **)((long)pfVar2 + -0x10) = puVar18;
    *(undefined8 *)((long)pfVar2 + -8) = uVar19;
    puVar18 = (undefined1 *)((long)pfVar2 + -0x10);
    pfVar9 = pfVar10;
    pfVar8 = pfVar12;
    pfVar11 = pfVar16;
    func_0x0001083a5f68();
    *(undefined8 *)((long)pfVar2 + -0x38) = extraout_x8_01;
    if (((uint)pfVar11[0xd] & 1) == 0) {
      func_0x0001083a600c(pfVar16[10]);
      FUN_1083a4b34();
      *(undefined1 *)(pfVar16 + 0xd) = 1;
      pfVar11 = pfVar14;
    }
    if ((*(byte *)((long)pfVar16 + 0x35) & 1) == 0) {
      func_0x0001083a600c(pfVar16[0xc]);
      FUN_1083a4b34();
      *(undefined1 *)((long)pfVar16 + 0x35) = 1;
      pfVar11 = pfVar13;
    }
    func_0x0001083a5fec();
    if ((int)pfVar9 == 2) {
      func_0x0001083a600c(pfVar16[0xb]);
      FUN_1083a4b34();
      func_0x0001083a5ffc();
      pfVar11 = pfVar17;
    }
    bVar5 = true;
    if ((int)pfVar9 == 1) break;
    bVar5 = (int)pfVar9 == 2;
    if (bVar5) {
      func_0x0001083a615c();
      uVar19 = 0x78;
      if (!bVar5) {
        uVar19 = extraout_x8_02;
      }
      func_0x0001083a616c(uVar19);
      if (!bVar5) goto LAB_1083a487c;
      func_0x0001083a614c();
      unaff_x29 = *(undefined8 *)((long)pfVar2 + -0x10);
      unaff_x30 = *(undefined8 *)((long)pfVar2 + -8);
      goto LAB_1083a611c;
    }
    func_0x0001083a613c();
    bVar5 = extraout_w8_00 == 0x21;
    if (0x20 < extraout_w8_00) break;
    func_0x0001083a61a8();
    func_0x0001083a600c();
    uVar19 = 0x1083a4854;
    pfVar2 = (float *)((long)pfVar2 + -0x70);
    param_1 = pfVar10;
    param_3 = pfVar16;
    param_2 = pfVar12;
  }
  func_0x0001083a5f14(*(undefined8 *)((long)pfVar2 + -0x38));
  if (!bVar5) {
LAB_1083a487c:
    ___stack_chk_fail();
    *(undefined8 *)((long)pfVar2 + -0xb0) = unaff_x24;
    *(undefined8 *)((long)pfVar2 + -0xa8) = unaff_x23;
    *(float **)((long)pfVar2 + -0xa0) = unaff_x22;
    *(float **)((long)pfVar2 + -0x98) = pfVar12;
    *(float **)((long)pfVar2 + -0x90) = pfVar16;
    *(float **)((long)pfVar2 + -0x88) = pfVar10;
    *(undefined1 **)((long)pfVar2 + -0x80) = puVar18;
    *(undefined8 *)((long)pfVar2 + -0x78) = 0x1083a4880;
    func_0x0001083a622c();
    func_0x000108384970(*pfVar9);
    if ((int)pfVar11 == 0) {
      *(ulong *)pfVar16 = (ulong)(uint)*pfVar9;
      fVar20 = 0.0;
    }
    else {
      fVar20 = pfVar16[1];
    }
    fVar21 = pfVar9[0x26];
    fVar22 = unaff_x22[1];
    *pfVar12 = *unaff_x22 + fVar20 * (float)(int)fVar21;
    pfVar12[1] = fVar22 - *pfVar16 * (float)(int)fVar21;
    if (pfVar10 != (float *)0x0) {
      *(ulong *)pfVar10 = *(ulong *)pfVar16;
    }
    return pfVar11;
  }
  func_0x0001083a6018();
  unaff_x29 = *(undefined8 *)((long)pfVar2 + -0x10);
  unaff_x30 = *(undefined8 *)((long)pfVar2 + -8);
LAB_1083a60fc:
  lVar1 = 0x78;
  if (pfVar9[0x26] != 1.4013e-45) {
    lVar1 = 0x68;
  }
  pfVar9 = (float *)((long)pfVar9 + lVar1);
  fVar20 = pfVar8[4];
  fVar21 = pfVar8[5];
  *(undefined8 *)((long)pfVar3 + 0x40) = unaff_d9;
  *(undefined8 *)((long)pfVar3 + 0x48) = unaff_d8;
  *(undefined8 *)((long)pfVar3 + 0x50) = *(undefined8 *)((long)pfVar3 + 0x50);
  *(undefined8 *)((long)pfVar3 + 0x58) = *(undefined8 *)((long)pfVar3 + 0x58);
  *(undefined8 *)((long)pfVar3 + 0x60) = unaff_x29;
  *(undefined8 *)((long)pfVar3 + 0x68) = unaff_x30;
  func_0x00010837cf24(fVar20,fVar21,pfVar9);
  FUN_108377cd4();
  puVar7 = (undefined4 *)((long)pfVar3 + 0x38);
  FUN_10837ca9c();
  func_0x00010837cee4();
  FUN_10837e8b4();
  *puVar7 = (int)unaff_d9;
  puVar7[1] = (int)unaff_d8;
  func_0x00010837cb1c();
  return pfVar9;
}



/* Entry: 1083a4880; end: 1083a4947;  */

void FUN_1083a4880(uint *param_1,undefined8 param_2,int param_3)

{
  ulong *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  float fVar1;
  uint uVar2;
  float fVar3;
  
  func_0x0001083a622c();
  func_0x000108384970(*param_1);
  if (param_3 == 0) {
    *(ulong *)unaff_x20 = (ulong)*param_1;
    fVar1 = 0.0;
  }
  else {
    fVar1 = unaff_x20[1];
  }
  uVar2 = param_1[0x26];
  fVar3 = unaff_x22[1];
  *unaff_x21 = *unaff_x22 + fVar1 * (float)(int)uVar2;
  unaff_x21[1] = fVar3 - *unaff_x20 * (float)(int)uVar2;
  if (unaff_x19 != (ulong *)0x0) {
    *unaff_x19 = *(ulong *)unaff_x20;
  }
  return;
}



/* Entry: 1083a4948; end: 1083a4aa7;  */

void FUN_1083a4948(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  float *pfStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  float fStack_a0;
  float afStack_9c [5];
  float afStack_88 [8];
  undefined8 uStack_68;
  
  pfVar2 = param_3;
  func_0x0001083a5f68();
  puVar4 = &uStack_a8;
  pfVar3 = param_4;
  uStack_68 = extraout_x8;
  FUN_1083518ac(pfVar2,param_4,puVar4,0);
  uVar1 = (float)uStack_a8 == 0.0;
  if (!(bool)uVar1) goto LAB_1083a4a74;
  uVar1 = uStack_a8._4_4_ == 0.0;
  if (!(bool)uVar1) goto LAB_1083a4a74;
  pfVar6 = param_3 + 6;
  pfVar5 = param_3 + 1;
  if (ABS((float)param_1) <= 0.00024414062) {
    uVar8 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)param_3;
LAB_1083a4a44:
    uStack_a8 = CONCAT44((float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                         (float)uVar8 - (float)uVar10);
  }
  else {
    if (ABS(1.0 - (float)param_1) <= 0.00024414062) {
      uVar8 = *(undefined8 *)(param_3 + 6);
      uVar10 = *(undefined8 *)(param_3 + 2);
      goto LAB_1083a4a44;
    }
    pfVar3 = &fStack_a0;
    pfVar2 = param_3;
    func_0x000108351a70(param_1,param_3,pfVar3);
    fVar7 = (float)afStack_88._0_8_ - (float)afStack_9c._12_8_;
    fVar9 = SUB84(afStack_88._0_8_,4) - SUB84(afStack_9c._12_8_,4);
    uStack_a8 = CONCAT44(fVar9,fVar7);
    if ((fVar7 == 0.0) && (fVar9 == 0.0)) {
      pfVar6 = afStack_88;
      pfVar5 = afStack_9c;
      uStack_a8 = CONCAT44(SUB84(afStack_88._0_8_,4) - SUB84(afStack_9c._4_8_,4),
                           (float)afStack_88._0_8_ - (float)afStack_9c._4_8_);
      param_3 = &fStack_a0;
    }
  }
  uVar1 = false;
  if (((float)((ulong)uStack_a8 >> 0x20) == 0.0) && (uVar1 = (float)uStack_a8 == 0.0, (bool)uVar1))
  {
    uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) - *pfVar5,
                         (float)*(undefined8 *)pfVar6 - *param_3);
  }
LAB_1083a4a74:
  func_0x0001083a5f38();
  func_0x0001083a5f14(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1083a4aa8;
  uStack_e0 = param_2;
  pfStack_d8 = param_4;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((*(byte *)((long)puVar4 + 0x34) & 1) == 0) {
    FUN_1083a4948(*(undefined4 *)(puVar4 + 5),pfVar2,pfVar3,auStack_e8,puVar4,puVar4 + 3);
    *(undefined1 *)((long)puVar4 + 0x34) = 1;
  }
  if ((*(byte *)((long)puVar4 + 0x35) & 1) == 0) {
    FUN_1083a4948(*(undefined4 *)(puVar4 + 6),pfVar2,pfVar3,auStack_e8,puVar4 + 2,puVar4 + 4);
    *(undefined1 *)((long)puVar4 + 0x35) = 1;
  }
  return;
}



/* Entry: 1083a4aa8; end: 1083a4b33;  */

void FUN_1083a4aa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_3 + 0x34) & 1) == 0) {
    FUN_1083a4948(*(undefined4 *)(param_3 + 0x28),param_1,param_2,auStack_38,param_3,param_3 + 0x18)
    ;
    *(undefined1 *)(param_3 + 0x34) = 1;
  }
  if ((*(byte *)(param_3 + 0x35) & 1) == 0) {
    FUN_1083a4948(*(undefined4 *)(param_3 + 0x30),param_1,param_2,auStack_38,param_3 + 0x10,
                  param_3 + 0x20);
    *(undefined1 *)(param_3 + 0x35) = 1;
  }
  return;
}



/* Entry: 1083a4b34; end: 1083a4b7b;  */

void FUN_1083a4b34(void)

{
  float fStack_48;
  float fStack_44;
  
  func_0x0001083a607c();
  FUN_108351454();
  if ((fStack_48 == 0.0) && (fStack_44 == 0.0)) {
    func_0x0001083a6218();
  }
  func_0x0001083a5f38();
  return;
}



/* Entry: 1083a4b7c; end: 1083a4cab;  */

bool FUN_1083a4b7c(long param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar10 = param_2[3];
  fVar7 = *(float *)(param_2 + 4);
  fVar8 = *(float *)((long)param_2 + 0x24);
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar9 = (float)uVar10;
  fVar12 = -fVar7 * fVar11 + fVar8 * fVar9;
  bVar1 = true;
  if ((fVar12 != 0.0) && (bVar1 = true, !NAN(fVar12 - fVar12))) {
    bVar1 = false;
  }
  if (!bVar1) {
    *(undefined1 *)((long)param_2 + 0x36) = 0;
    uVar2 = *param_2;
    fVar13 = *(float *)(param_2 + 2);
    fVar14 = *(float *)((long)param_2 + 0x14);
    fVar6 = (float)uVar2 - fVar13;
    fVar4 = (float)((ulong)uVar2 >> 0x20);
    fVar5 = -(fVar6 * fVar8) + (fVar4 - fVar14) * fVar7;
    if (0.0 <= fVar5 != -(fVar6 * fVar11) + (fVar4 - fVar14) * fVar9 < 0.0) {
      uVar3 = uVar2;
      FUN_1083a4cac(uVar2,fVar4,fVar13,fVar14);
      FUN_1083a4cac(fVar13,fVar14,uVar2,fVar4,uVar10,fVar11);
      if (fVar13 <= (float)uVar3) {
        fVar13 = (float)uVar3;
      }
      return fVar13 <= *(float *)(param_1 + 0x10);
    }
    fVar5 = fVar5 / fVar12;
    if (fVar5 + -1.0 < fVar5) {
      if (param_3 == 0) {
        param_2[1] = CONCAT44(fVar4 + fVar11 * fVar5,(float)uVar2 + fVar9 * fVar5);
      }
      return (bool)2;
    }
  }
  *(bool *)((long)param_2 + 0x36) = fVar11 * fVar8 + fVar7 * fVar9 < 0.0;
  return true;
}



/* Entry: 1083a4cac; end: 1083a4cef;  */

float FUN_1083a4cac(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_1 - param_3;
  fVar4 = param_2 - param_4;
  fVar5 = (fVar4 * param_6 + fVar3 * param_5) / (param_6 * param_6 + param_5 * param_5);
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= fVar5) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar5)) {
      bVar1 = fVar5 == 1.0;
      bVar2 = 1.0 <= fVar5;
    }
  }
  if (bVar2 && !bVar1) {
    return fVar4 * fVar4 + fVar3 * fVar3;
  }
  param_1 = (param_3 + param_5 * fVar5) - param_1;
  param_2 = (param_4 + param_6 * fVar5) - param_2;
  return param_2 * param_2 + param_1 * param_1;
}



/* Entry: 1083a4cf0; end: 1083a4ecb;  */

void FUN_1083a4cf0(undefined8 param_1,float param_2,long param_3,long param_4,float *param_5,
                  int param_6)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  undefined8 extraout_x8;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_8c [2];
  float afStack_84 [3];
  undefined8 uStack_78;
  
  lVar6 = param_4;
  func_0x0001083a5f68();
  fVar7 = 0.5;
  uStack_78 = extraout_x8;
  FUN_1083514a0(lVar6);
  fVar7 = *param_5 - fVar7;
  func_0x0001083a6204(fVar7,param_5[1] - param_2,*(undefined4 *)(param_3 + 0xc));
  if (!(bool)in_CY || (bool)in_ZR) {
LAB_1083a4e84:
    FUN_1083a4ecc();
    uVar2 = param_6 == 0;
    uVar5 = 0;
    if ((bool)uVar2) {
      uVar5 = 2;
    }
    pfVar4 = (float *)(ulong)uVar5;
  }
  else {
    func_0x0001083a60dc();
    func_0x0001077f4d88();
    fVar8 = *param_5 + *(float *)(param_3 + 0xc);
    uVar2 = fVar8 == fVar7;
    if (fVar7 <= fVar8) {
      func_0x0001083a60dc();
      func_0x0001077f4da4();
      fVar8 = *param_5 - *(float *)(param_3 + 0xc);
      uVar2 = fVar8 == fVar7;
      if (fVar8 <= fVar7) {
        func_0x0001083a6184();
        func_0x0001077f4d88(afStack_84,3);
        fVar8 = param_5[1] + *(float *)(param_3 + 0xc);
        uVar2 = fVar8 == fVar7;
        if (fVar7 <= fVar8) {
          func_0x0001083a6184();
          func_0x0001077f4da4(afStack_84,3);
          fVar9 = param_5[1];
          fVar10 = *(float *)(param_3 + 0xc);
          fVar8 = fVar9 - fVar10;
          uVar2 = fVar8 == fVar7;
          if (fVar8 <= fVar7) {
            fVar11 = *param_5;
            fVar7 = param_5[2];
            fVar8 = param_5[3];
            pfVar4 = (float *)(param_4 + 4);
            for (lVar6 = 0; lVar6 != 0xc; lVar6 = lVar6 + 4) {
              *(float *)((long)afStack_84 + lVar6) =
                   -((pfVar4[-1] - fVar11) * (fVar8 - fVar9)) + (*pfVar4 - fVar9) * (fVar7 - fVar11)
              ;
              pfVar4 = pfVar4 + 2;
            }
            fVar7 = (afStack_84[1] - afStack_84[0]) + (afStack_84[1] - afStack_84[0]);
            iVar3 = (int)afStack_8c;
            FUN_108351300(afStack_84[2] + afStack_84[0] + afStack_84[1] * -2.0,fVar7);
            uVar1 = iVar3 != 0;
            uVar2 = iVar3 == 1;
            if ((bool)uVar2) {
              fVar8 = afStack_8c[0];
              FUN_1083514a0(afStack_8c[0],param_4);
              func_0x0001083a6204(fVar11 - fVar8,fVar9 - fVar7,
                                  fVar10 * (ABS(afStack_8c[0] + -0.5) * -2.0 + 1.0));
              if (!(bool)uVar1 || (bool)uVar2) goto LAB_1083a4e84;
            }
          }
        }
      }
    }
    pfVar4 = (float *)0x0;
  }
  func_0x0001083a5f14(uStack_78);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  fVar8 = pfVar4[2] - *pfVar4;
  fVar10 = pfVar4[3] - pfVar4[1];
  fVar7 = pfVar4[2] - pfVar4[4];
  fVar9 = pfVar4[3] - pfVar4[5];
  fVar8 = fVar10 * fVar10 + fVar8 * fVar8;
  fVar7 = fVar9 * fVar9 + fVar7 * fVar7;
  if (fVar7 < fVar8) {
    fVar7 = fVar8;
  }
  func_0x000108384970(fVar7);
  return;
}



/* Entry: 1083a4ecc; end: 1083a4f57;  */

void FUN_1083a4ecc(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1[2] - *param_1;
  fVar4 = param_1[3] - param_1[1];
  fVar1 = param_1[2] - param_1[4];
  fVar2 = param_1[3] - param_1[5];
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar1 < fVar3) {
    fVar1 = fVar3;
  }
  func_0x000108384970(fVar1);
  return;
}



/* Entry: 1083a4f58; end: 1083a4fcf;  */

long FUN_1083a4f58(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  lVar1 = 0x78;
  if (*(int *)(param_1 + 0x98) != 1) {
    lVar1 = 0x68;
  }
  param_1 = param_1 + lVar1;
  func_0x00010837cf24(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),param_1);
  FUN_108377cd4();
  puVar2 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cee4();
  FUN_10837e8b4();
  *puVar2 = unaff_s9;
  puVar2[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 1083a4fd0; end: 1083a51bf;  */

void FUN_1083a4fd0(undefined8 *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  float fStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar6 = param_1;
  func_0x0001083a5f68();
  uStack_38 = extraout_x8;
  if ((*(byte *)(puVar6 + 0x14) & 1) == 0) {
    func_0x0001083a600c();
    FUN_1083a4aa8();
    func_0x0001083a6018();
    FUN_1083a4b7c();
    if ((int)puVar6 != 1) {
      if ((int)puVar6 == 2) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else if ((param_3[1] - param_3[5]) * (param_3[1] - param_3[5]) +
               (*param_3 - param_3[4]) * (*param_3 - param_3[4]) <=
               *(float *)((long)param_1 + 0xc) * *(float *)((long)param_1 + 0xc))
      goto LAB_1083a505c;
      goto LAB_1083a5090;
    }
LAB_1083a505c:
    func_0x0001083a600c(param_3[0xb]);
    FUN_1083a4948();
    func_0x0001083a4f78(fStack_78,uStack_74,*param_3,param_3[1],param_3[4],param_3[5]);
    uVar3 = fStack_78 == *(float *)(param_1 + 2);
    if (*(float *)(param_1 + 2) <= fStack_78) goto LAB_1083a5090;
LAB_1083a5180:
    func_0x0001083a6018();
    FUN_1083a4f58();
  }
  else {
LAB_1083a5090:
    iVar4 = (int)puVar6;
    if (*(char *)(param_1 + 0x14) == '\x01') {
      func_0x0001083a600c();
      FUN_1083a4aa8();
      func_0x0001083a5fec();
      if (iVar4 == 2) {
        func_0x0001083a600c(param_3[0xb]);
        FUN_1083a4948();
        func_0x0001083a5ffc();
      }
      if (iVar4 == 1) {
        uVar3 = true;
        if ((*(byte *)((long)param_3 + 0x36) & 1) == 0) goto LAB_1083a5180;
        goto LAB_1083a5108;
      }
      uVar3 = iVar4 == 2;
      if (!(bool)uVar3) goto LAB_1083a5108;
      func_0x0001083a615c();
      uVar2 = 0x78;
      if (!(bool)uVar3) {
        uVar2 = extraout_x8_00;
      }
      func_0x0001083a614c(uVar2);
      FUN_1081f7aa0();
    }
    else {
LAB_1083a5108:
      bVar1 = NAN((param_3[4] - param_3[4]) * param_3[5]);
      uVar3 = !bVar1;
      if (bVar1) {
LAB_1083a5178:
        iVar5 = 0;
        goto LAB_1083a519c;
      }
      func_0x0001083a613c();
      uVar3 = extraout_w8 == *(int *)(&UNK_10df1e918 + (ulong)*(byte *)(param_1 + 0x14) * 4);
      if (*(int *)(&UNK_10df1e918 + (ulong)*(byte *)(param_1 + 0x14) * 4) <= extraout_w8)
      goto LAB_1083a5180;
      iVar4 = (int)auStack_70;
      param_2 = param_3;
      FUN_1083a51c0();
      if (iVar4 == 0) {
LAB_1083a518c:
        func_0x0001083a6018();
        FUN_1083a4f58();
      }
      else {
        func_0x0001083a600c();
        FUN_1083a4fd0();
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_1083a519c;
        puVar7 = auStack_70;
        param_2 = param_3;
        func_0x0001083a5200();
        if ((int)puVar7 == 0) goto LAB_1083a518c;
        func_0x0001083a600c();
        FUN_1083a4fd0();
        if (((ulong)puVar7 & 1) == 0) goto LAB_1083a5178;
      }
      func_0x0001083a612c();
    }
  }
  iVar5 = 1;
LAB_1083a519c:
  func_0x0001083a5f14(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083a61e4();
  FUN_1083a4530(param_2[10],param_2[0xb]);
  if (iVar5 != 0) {
    *param_1 = *(undefined8 *)param_3;
    param_1[3] = *(undefined8 *)(param_3 + 6);
    *(undefined1 *)((long)param_1 + 0x34) = 1;
  }
  return;
}



/* Entry: 1083a51c0; end: 1083a523f;  */

void FUN_1083a51c0(int param_1,long param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001083a61e4();
  FUN_1083a4530(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  if (param_1 != 0) {
    *unaff_x19 = *unaff_x20;
    unaff_x19[3] = unaff_x20[3];
    *(undefined1 *)((long)unaff_x19 + 0x34) = 1;
  }
  return;
}



/* Entry: 1083a5240; end: 1083a5ea3;  */

/* WARNING: Possible PIC construction at 0x0001083a5d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083a5d40) */

float * FUN_1083a5240(float *param_1,float *param_2,float *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 extraout_x8;
  long lVar20;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  uint uVar21;
  long lVar22;
  int iVar23;
  float *pfVar24;
  ulong uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  float *pfStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined2 uStack_228;
  float afStack_220 [4];
  float *pfStack_210;
  undefined1 uStack_208;
  ulong uStack_200;
  undefined1 auStack_1f8 [8];
  byte bStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined8 uStack_1b4;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  ulong uStack_194;
  undefined8 uStack_184;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined *puStack_178;
  float *pfStack_170;
  undefined1 auStack_168 [14];
  byte bStack_15a;
  undefined1 auStack_158 [14];
  byte bStack_14a;
  undefined1 auStack_148 [16];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  float afStack_f0 [4];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  pfVar24 = param_1;
  func_0x0001083a5f68();
  fVar38 = *pfVar24;
  uStack_b0 = extraout_x8;
  FUN_108376ad8(afStack_220);
  uStack_208 = param_2 == param_3;
  pfStack_210 = param_2;
  if ((bool)uStack_208) {
    param_3 = afStack_220;
  }
  else {
    FUN_108376d4c(param_3);
  }
  fVar38 = fVar38 * 0.5;
  uVar10 = fVar38 == 0.0;
  if (0.0 < fVar38) {
    uStack_258 = 0;
    uStack_250 = 0;
    bStack_1f0 = 0;
    pfVar24 = param_2;
    FUN_1083773e8(param_2,&uStack_258,&bStack_1f0,&uStack_d0);
    if (((uint)pfVar24 & (uint)bStack_1f0) != 1) {
      if ((*(char *)((long)param_1 + 0xe) == '\x01') &&
         (*(char *)(*(long *)param_2 + 0xc3) == '\x01')) {
        pfVar24 = param_2;
        FUN_108377324();
        uVar13 = 0;
        if ((int)pfVar24 != 0) {
          pfVar24 = param_2;
          FUN_108376fcc();
          uVar13 = (uint)pfVar24;
        }
      }
      else {
        uVar13 = 0;
      }
      bVar2 = *(byte *)(param_1 + 3);
      bVar3 = *(byte *)((long)param_1 + 0xd);
      uVar25 = (ulong)bVar3;
      fVar40 = param_1[1];
      fVar39 = param_1[2];
      uStack_17b = (undefined1)uVar13;
      fStack_1d0 = fVar38;
      fStack_1c8 = fVar39;
      FUN_108376ad8(auStack_168);
      FUN_108376ad8(auStack_158);
      FUN_108376ad8(auStack_148);
      fStack_1cc = 0.0;
      if (bVar3 == 0) {
        if (fVar40 <= 1.0) {
          uVar25 = 2;
        }
        else {
          uVar25 = 0;
          fStack_1cc = 1.0 / fVar40;
        }
      }
      puStack_178 = (&PTR_DAT_110a40680)[bVar2];
      pfStack_170 = (float *)(&PTR_FUN_110a40698)[uVar25];
      uStack_184 = 0xffffffff00000000;
      uStack_17c = 0;
      pfVar24 = &fStack_1d0;
      func_0x0001083a61d8(auStack_158,*(int *)(*(long *)param_2 + 0x30) * 3);
      bStack_14a = bStack_14a | 4;
      func_0x0001083a61d8(auStack_168,*(undefined4 *)(*(long *)param_2 + 0x30));
      iVar23 = 0;
      bStack_15a = bStack_15a | 4;
      fStack_1c4 = 1.0 / (fVar39 * 4.0);
      uVar25 = (ulong)(uint)fStack_1c4;
      fStack_1c0 = fStack_1c4 * fStack_1c4;
      uVar30 = (ulong)(uint)fStack_1c0;
      uStack_134 = 0;
      lVar20 = *(long *)param_2;
      uStack_258 = *(undefined8 *)(lVar20 + 0x28);
      uStack_250 = *(long *)(lVar20 + 0x40);
      lStack_248 = uStack_250 + *(int *)(lVar20 + 0x48);
      pfStack_240 = (float *)0x0;
      if (*(long *)(lVar20 + 0x58) != 0) {
        pfStack_240 = (float *)(*(long *)(lVar20 + 0x58) + -4);
      }
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      do {
        puVar14 = &uStack_258;
        FUN_108379cc8(puVar14,&bStack_1f0);
        fVar38 = fStack_1dc;
        fVar39 = fStack_1e0;
        uVar19 = 1;
        switch((ulong)puVar14 & 0xffffffff) {
        case 0:
          if (0 < uStack_184._4_4_) {
            FUN_1083a4164(&fStack_1d0,0,0);
          }
          uStack_184 = uStack_184 & 0xffffffff;
          uStack_19c = CONCAT71(uStack_1ef,bStack_1f0);
          uStack_12f = 0;
          uStack_194 = uStack_19c;
          break;
        case 1:
          FUN_1083a431c(&fStack_1d0,&uStack_1e8,&uStack_258);
code_r0x0001083a5790:
          iVar23 = 1;
          break;
        case 2:
          uStack_d0 = uStack_194;
          func_0x0001083a5f90();
          if ((extraout_x8_00 & 1) == 0) {
code_r0x0001083a5724:
            func_0x0001083a5f28();
          }
          else {
            func_0x0001083a61b4();
            if ((int)puVar14 == 0) {
              func_0x0001083a6064();
              if (((ulong)puVar14 & 1) == 0) {
                func_0x0001083a5f28();
              }
              else {
                uStack_138 = 1;
                func_0x0001083a5f50();
                func_0x0001083a5f78();
                func_0x0001083a4748();
                uStack_138 = 0xffffffff;
                func_0x0001083a5f50();
                func_0x0001083a5f78();
                func_0x0001083a4748();
                uVar25 = (ulong)(uint)fStack_1d0;
                uVar30 = (ulong)(uint)fStack_1c8;
                func_0x0001083a60a0();
                func_0x0001083a6024();
              }
            }
            else {
              FUN_1083517c0(&uStack_d0);
              fVar38 = (float)uVar25;
              bVar9 = true;
              if ((fVar38 != 0.0) && (bVar9 = false, !NAN(fVar38))) {
                bVar9 = fVar38 == 1.0;
              }
              if (bVar9) goto code_r0x0001083a5724;
              FUN_1083514a0(&uStack_d0);
              uStack_128 = CONCAT44((int)uVar30,(int)uVar25);
              func_0x0001083a5f88(&fStack_1d0,&uStack_128);
              func_0x0001083a6050();
              func_0x0001083a5f28();
              pfStack_170 = pfVar24;
            }
          }
          iVar23 = 2;
          break;
        case 3:
          fVar38 = *pfStack_240;
          uStack_d0 = uStack_194;
          uVar30 = (ulong)(uint)(fVar38 - fVar38);
          bVar9 = false;
          bVar12 = true;
          bVar11 = false;
          if (!NAN(fVar38 - fVar38)) {
            bVar9 = false;
            bVar12 = false;
            bVar11 = true;
            if (!NAN(fVar38)) {
              bVar9 = fVar38 < 0.0;
              bVar12 = fVar38 == 0.0;
              bVar11 = false;
            }
          }
          if (bVar12 || bVar9 != bVar11) {
            fVar38 = 1.0;
          }
          uVar25 = (ulong)(uint)fVar38;
          uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar38);
          func_0x0001083a5f90();
          if ((extraout_x8_01 & 1) == 0) {
code_r0x0001083a5778:
            func_0x0001083a5f28();
          }
          else {
            func_0x0001083a61b4();
            if ((int)puVar14 == 0) {
              func_0x0001083a6064();
              if (((ulong)puVar14 & 1) == 0) {
                func_0x0001083a5f28();
              }
              else {
                uStack_138 = 1;
                func_0x0001083a5f50();
                func_0x0001083a5f78();
                FUN_1083a4610();
                uStack_138 = 0xffffffff;
                func_0x0001083a5f50();
                func_0x0001083a5f78();
                FUN_1083a4610();
                uVar25 = (ulong)(uint)fStack_1d0;
                uVar30 = (ulong)(uint)fStack_1c8;
                func_0x0001083a60a0();
                func_0x0001083a6024();
              }
            }
            else {
              FUN_1083517c0(&uStack_d0);
              if ((0.0 <= (float)uVar25) && ((float)uVar25 == 0.0)) goto code_r0x0001083a5778;
              FUN_108352d70(&uStack_d0);
              uStack_128 = CONCAT44((int)uVar30,(int)uVar25);
              func_0x0001083a5f88(&fStack_1d0,&uStack_128);
              func_0x0001083a6050();
              func_0x0001083a5f28();
              pfStack_170 = pfVar24;
            }
          }
          iVar23 = 3;
          break;
        case 4:
          uStack_d0 = uStack_194;
          uStack_b8 = CONCAT44(fStack_1d4,fStack_1d8);
          uStack_c0 = CONCAT44(fStack_1dc,fStack_1e0);
          uStack_c8 = uStack_1e8;
          fVar40 = (float)uStack_1e8;
          fVar27 = fVar40 - (float)uStack_194;
          fVar41 = (float)((ulong)uStack_1e8 >> 0x20);
          fVar28 = fVar41 - (float)(uStack_194 >> 0x20);
          bVar9 = false;
          if ((fVar28 == 0.0) && (bVar9 = false, !NAN(fVar27))) {
            bVar9 = fVar27 == 0.0;
          }
          uVar18 = 1;
          uVar17 = uVar18;
          if (!NAN((fVar27 - fVar27) * fVar28)) {
            uVar17 = (uint)bVar9;
          }
          uVar30 = CONCAT44(-(uint)(fStack_1d4 - fStack_1dc == 0.0),
                            -(uint)(fStack_1dc - fVar41 == 0.0));
          uVar25 = CONCAT44(-(uint)(fStack_1d8 - fStack_1e0 == 0.0),
                            -(uint)(fStack_1e0 - fVar40 == 0.0)) & uVar30;
          if (((((uVar25 & 0x100000000) == 0) || ((uVar25 & 1) == 0)) || (uVar17 == 0)) &&
             ((((uint3)uVar25 & 1) - (int)(uVar25 >> 0x20)) + uVar17 != 2)) {
            uVar25 = 0;
            pfVar24 = (float *)0x0;
            uVar26 = 0;
            fVar27 = -1.0;
            lVar20 = 1;
            while( true ) {
              bVar12 = 2 < uVar25;
              bVar9 = uVar25 == 3;
              lVar22 = lVar20;
              if (bVar9) break;
              for (; lVar22 != 4; lVar22 = lVar22 + 1) {
                fVar29 = ABS((float)(&uStack_d0)[lVar22] - (float)(&uStack_d0)[uVar25]);
                fVar28 = ABS((float)((ulong)(&uStack_d0)[lVar22] >> 0x20) -
                             (float)((ulong)(&uStack_d0)[uVar25] >> 0x20));
                if (fVar28 <= fVar29) {
                  fVar28 = fVar29;
                }
                uVar21 = (uint)lVar22;
                if (fVar28 <= fVar27) {
                  uVar21 = (uint)pfVar24;
                }
                pfVar24 = (float *)(ulong)uVar21;
                uVar21 = (uint)uVar25;
                if (fVar28 <= fVar27) {
                  fVar28 = fVar27;
                  uVar21 = uVar26;
                }
                uVar26 = uVar21;
                fVar27 = fVar28;
              }
              uVar25 = uVar25 + 1;
              lVar20 = lVar20 + 1;
            }
            uVar21 = (2U >> (ulong)((uint)pfVar24 & 0x1f)) + 1 >> (ulong)(uVar26 & 0x1f);
            FUN_1083a6240(*(undefined4 *)(&uStack_d0 + uVar21),
                          *(undefined4 *)((long)&uStack_d0 + (ulong)uVar21 * 8 + 4));
            if (!bVar12 || bVar9) {
              lVar20 = (long)(int)(uVar26 ^ (uint)pfVar24 ^ uVar21);
              uVar25 = (ulong)*(uint *)(&uStack_d0 + lVar20);
              uVar30 = (ulong)*(uint *)((long)&uStack_d0 + lVar20 * 8 + 4);
              FUN_1083a6240();
              if (!bVar12 || bVar9) {
                puVar14 = &uStack_d0;
                FUN_1083522d8(puVar14,&uStack_128);
                pfVar24 = (float *)0x0;
                for (lVar20 = 0; iVar23 = (int)pfVar24,
                    (ulong)((uint)puVar14 & ((int)(uint)puVar14 >> 0x1f ^ 0xffffffffU)) << 2 !=
                    lVar20; lVar20 = lVar20 + 4) {
                  fVar38 = *(float *)((long)&uStack_128 + lVar20);
                  uVar25 = (ulong)(uint)fVar38;
                  bVar9 = false;
                  bVar12 = false;
                  if (0.0 < fVar38) {
                    bVar9 = false;
                    bVar12 = true;
                    if (!NAN(fVar38)) {
                      bVar9 = fVar38 < 1.0;
                      bVar12 = false;
                    }
                  }
                  if (bVar9 != bVar12) {
                    func_0x0001083a61c0(&uStack_d0,afStack_f0 + (long)iVar23 * 2 + 2);
                    fVar38 = afStack_f0[(long)iVar23 * 2 + 2];
                    uVar25 = (ulong)(uint)fVar38;
                    fVar39 = afStack_f0[(long)iVar23 * 2 + 3];
                    uVar30 = (ulong)(uint)fVar39;
                    bVar9 = false;
                    if ((fVar38 == (float)uStack_d0) &&
                       (bVar9 = false, !NAN(fVar39) && !NAN(uStack_d0._4_4_))) {
                      bVar9 = fVar39 == uStack_d0._4_4_;
                    }
                    if (!bVar9) {
                      uVar19 = (uint)(fVar38 != (float)uStack_b8);
                      if (fVar39 != uStack_b8._4_4_) {
                        uVar19 = 1;
                      }
                      pfVar24 = (float *)(ulong)(iVar23 + uVar19);
                    }
                  }
                }
                uVar19 = iVar23 + 2;
                if (uVar19 < 3) goto code_r0x0001083a56e4;
                func_0x0001083a5f88(&fStack_1d0,afStack_f0 + 2);
                func_0x0001083a6050();
                if ((3 < uVar19) && (func_0x0001083a5f88(&fStack_1d0,auStack_e0), uVar19 == 5)) {
                  func_0x0001083a5f88(&fStack_1d0,auStack_d8);
                }
                func_0x0001083a5f88(&fStack_1d0,&fStack_1d8);
                pfStack_170 = pfVar24;
                goto code_r0x0001083a56f0;
              }
            }
            if (uVar17 == 0) {
              fVar39 = fVar40;
            }
            uVar25 = (ulong)(uint)fVar39;
            if (uVar17 == 0) {
              fVar38 = fVar41;
            }
            uVar30 = (ulong)(uint)fVar38;
            pfVar16 = &fStack_1d0;
            FUN_1083a3fe4(pfVar16,auStack_1f8,&uStack_200,0);
            if (((ulong)pfVar16 & 1) == 0) {
              func_0x0001083a5f88(&fStack_1d0,&fStack_1d8);
            }
            else {
              puVar14 = &uStack_d0;
              FUN_108351f60(puVar14,afStack_f0);
              fVar38 = 0.0;
              for (pfVar24 = (float *)0x0; fVar39 = (float)uVar25,
                  (long)pfVar24 <= (long)(int)puVar14; pfVar24 = (float *)((long)pfVar24 + 1)) {
                fVar39 = 1.0;
                if ((long)pfVar24 < (long)(int)puVar14) {
                  fVar39 = afStack_f0[(long)pfVar24];
                }
                uStack_138 = 1;
                uStack_130 = 0;
                uVar25 = (ulong)(uint)(fVar38 + fVar39);
                func_0x0001083a61f0();
                func_0x0001083a5f78();
                FUN_1083a4fd0();
                uStack_138 = 0xffffffff;
                uStack_130 = 0;
                func_0x0001083a61f0();
                func_0x0001083a5f78();
                FUN_1083a4fd0();
                fVar38 = fVar39;
              }
              FUN_1083526bc(&uStack_d0);
              if (0.0 < fVar39) {
                func_0x0001083a61c0(&uStack_d0,&uStack_128);
                FUN_10837868c(uStack_128 & 0xffffffff,uStack_128._4_4_,auStack_148,0);
              }
              fVar38 = fStack_1d0;
              uVar10 = auStack_1f8[0];
              uVar31 = auStack_1f8[1];
              uVar32 = auStack_1f8[2];
              uVar33 = auStack_1f8[3];
              uVar34 = auStack_1f8[4];
              uVar35 = auStack_1f8[5];
              uVar36 = auStack_1f8[6];
              uVar37 = auStack_1f8[7];
              fVar41 = (float)uStack_c8 - (float)uStack_d0;
              fVar39 = (float)uStack_b8 - (float)uStack_c0;
              uVar25 = (ulong)(uint)fVar39;
              fVar40 = uStack_b8._4_4_ - uStack_c0._4_4_;
              uVar30 = (ulong)(uint)fVar40;
              bVar9 = false;
              if ((uStack_c8._4_4_ - uStack_d0._4_4_ == 0.0) && (bVar9 = false, !NAN(fVar41))) {
                bVar9 = fVar41 == 0.0;
              }
              if (!NAN((fVar41 - fVar41) * (uStack_c8._4_4_ - uStack_d0._4_4_))) {
                uVar18 = (uint)bVar9;
              }
              bVar9 = false;
              if ((fVar40 == 0.0) && (bVar9 = false, !NAN(fVar39))) {
                bVar9 = fVar39 == 0.0;
              }
              if (!NAN((fVar39 - fVar39) * fVar40)) {
                uVar19 = (uint)bVar9;
              }
              if ((uVar18 & uVar19) == 0) {
                if (uVar18 == 0) {
                  bVar9 = false;
joined_r0x0001083a5c20:
                  if (uVar19 == 0) goto code_r0x0001083a5b30;
code_r0x0001083a5c24:
                  fVar39 = (float)uStack_b8 - (float)uStack_c8;
                  uVar25 = (ulong)(uint)fVar39;
                  fVar40 = uStack_b8._4_4_ - uStack_c8._4_4_;
                  uVar30 = (ulong)(uint)fVar40;
                  if (NAN((fVar39 - fVar39) * fVar40)) goto code_r0x0001083a5c50;
                  bVar12 = false;
                  if ((fVar40 == 0.0) && (bVar12 = false, !NAN(fVar39))) {
                    bVar12 = fVar39 == 0.0;
                  }
                }
                else {
                  uStack_c0._0_4_ = (float)uStack_c0 - (float)uStack_d0;
                  if (!NAN(((float)uStack_c0 - (float)uStack_c0) *
                           (uStack_c0._4_4_ - uStack_d0._4_4_))) {
                    bVar9 = false;
                    if ((uStack_c0._4_4_ - uStack_d0._4_4_ == 0.0) &&
                       (bVar9 = false, !NAN((float)uStack_c0))) {
                      bVar9 = (float)uStack_c0 == 0.0;
                    }
                    goto joined_r0x0001083a5c20;
                  }
                  bVar9 = true;
                  if (uVar19 != 0) goto code_r0x0001083a5c24;
code_r0x0001083a5b30:
                  bVar12 = false;
                }
                if (bVar9 || bVar12) goto code_r0x0001083a5c50;
                uVar4 = CONCAT44(fStack_1cc,fStack_1d0);
                uVar10 = SUB41(fStack_1d0,0);
                uVar31 = (undefined1)((uint)fStack_1d0 >> 8);
                uVar32 = (undefined1)((uint)fStack_1d0 >> 0x10);
                uVar33 = (undefined1)((uint)fStack_1d0 >> 0x18);
                uVar34 = SUB41(fStack_1cc,0);
                uVar35 = (undefined1)((uint)fStack_1cc >> 8);
                uVar36 = (undefined1)((uint)fStack_1cc >> 0x10);
                uVar37 = (undefined1)((uint)fStack_1cc >> 0x18);
                iVar23 = (int)&uStack_128;
                func_0x000108384968();
                if (iVar23 != 0) {
                  fVar39 = uStack_128._4_4_;
                  fVar40 = -(float)uStack_128;
                  uStack_128 = CONCAT44(fVar40,uStack_128._4_4_);
                  uVar30 = CONCAT44(fVar40,fVar39);
                  fVar39 = fVar39 * fVar38;
                  uVar10 = SUB41(fVar39,0);
                  uVar31 = (undefined1)((uint)fVar39 >> 8);
                  uVar32 = (undefined1)((uint)fVar39 >> 0x10);
                  uVar33 = (undefined1)((uint)fVar39 >> 0x18);
                  fVar40 = fVar40 * fVar38;
                  uVar34 = SUB41(fVar40,0);
                  uVar35 = (undefined1)((uint)fVar40 >> 8);
                  uVar36 = (undefined1)((uint)fVar40 >> 0x10);
                  uVar37 = (undefined1)((uint)fVar40 >> 0x18);
                  uVar25 = uVar4;
                }
              }
              else {
code_r0x0001083a5c50:
                uStack_128 = uStack_200;
              }
              uStack_12f = 1;
              uStack_194 = CONCAT44(fStack_1d4,fStack_1d8);
              uStack_1a4 = uStack_128;
              uStack_1b4 = CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar10)))))
                                                  ));
              uStack_184 = CONCAT44(uStack_184._4_4_ + 1,(undefined4)uStack_184);
            }
          }
          else {
code_r0x0001083a56e4:
            func_0x0001083a5f88(&fStack_1d0,&fStack_1d8);
          }
code_r0x0001083a56f0:
          iVar23 = 4;
          break;
        case 5:
          if (*(char *)(param_1 + 3) != '\0') {
            if (uStack_184._4_4_ == 0) {
              uStack_128 = uStack_19c;
              uVar25 = uStack_19c;
              func_0x0001083a5f88(&fStack_1d0,&uStack_128);
              goto code_r0x0001083a5790;
            }
            puVar15 = auStack_168;
            FUN_1083785dc(puVar15,0);
            if ((int)puVar15 != 0) {
              puVar15 = auStack_158;
              FUN_1083785dc(puVar15,uStack_184 & 0xffffffff);
              if (((ulong)puVar15 & 1) != 0) goto code_r0x0001083a5790;
            }
          }
          FUN_1083a4164(&fStack_1d0,1,iVar23 == 1);
          break;
        case 6:
          goto code_r0x0001083a5cc4;
        }
      } while( true );
    }
    iVar23 = (int)(float)uStack_d0;
    FUN_108376d4c(param_3);
    fVar38 = *param_1 * 0.5;
    uVar10 = fVar38 == 0.0;
    if (0.0 < fVar38) {
      if ((float)uStack_250 < (float)uStack_258 != uStack_250._4_4_ < uStack_258._4_4_) {
        iVar23 = *(int *)(&UNK_10df1e928 + (long)iVar23 * 4);
      }
      fVar40 = (float)uStack_250;
      fVar39 = (float)uStack_258;
      if ((float)uStack_258 <= (float)uStack_250) {
        fVar40 = (float)uStack_258;
        fVar39 = (float)uStack_250;
      }
      fVar41 = uStack_250._4_4_;
      if (uStack_258._4_4_ <= uStack_250._4_4_) {
        fVar41 = uStack_258._4_4_;
      }
      uStack_128 = CONCAT44(fVar41,fVar40);
      fVar27 = uStack_258._4_4_;
      if (uStack_258._4_4_ <= uStack_250._4_4_) {
        fVar27 = uStack_250._4_4_;
      }
      fStack_120 = fVar39;
      fStack_11c = fVar27;
      func_0x00010816882c(fVar38,fVar38,&uStack_128);
      cVar1 = *(char *)((long)param_1 + 0xd);
      if (cVar1 == '\x02') {
LAB_1083a53a4:
        uVar33 = (undefined1)((uint)fVar41 >> 0x18);
        uVar32 = (undefined1)((uint)fVar41 >> 0x10);
        uVar31 = (undefined1)((uint)fVar41 >> 8);
        uVar10 = SUB41(fVar41,0);
        fVar28 = (float)uStack_128;
        fVar29 = fVar27;
        fVar5 = (float)uStack_128;
        fVar6 = fStack_11c;
        fStack_1a8 = fVar40;
        fStack_1ac = fStack_11c;
        fVar7 = fVar39;
        fVar8 = fVar27;
        fStack_1b8 = fStack_120;
        fStack_1bc = fVar41;
        fStack_1c0 = fStack_120;
        fStack_1c4 = uStack_128._4_4_;
        fStack_1c8 = fVar39;
        fStack_1cc = uStack_128._4_4_;
        fStack_1d0 = fVar40;
        if (iVar23 != 0) {
          uVar10 = (undefined1)(uStack_128 >> 0x20);
          uVar31 = (undefined1)(uStack_128 >> 0x28);
          uVar32 = (undefined1)(uStack_128 >> 0x30);
          uVar33 = (undefined1)(uStack_128 >> 0x38);
          fVar28 = fVar40;
          fVar29 = uStack_128._4_4_;
          fVar5 = fVar39;
          fVar6 = fVar41;
          fStack_1a8 = fStack_120;
          fStack_1ac = fVar27;
          fVar7 = fStack_120;
          fVar8 = fStack_11c;
          fStack_1b8 = fVar39;
          fStack_1bc = fStack_11c;
          fStack_1c0 = fVar40;
          fStack_1c4 = fVar27;
          fStack_1c8 = (float)uStack_128;
          fStack_1cc = fVar41;
          fStack_1d0 = (float)uStack_128;
        }
        uStack_1b4 = CONCAT44(fVar7,fVar8);
        uStack_1a4 = CONCAT44(fVar5,fVar6);
        uStack_19c = CONCAT44(fVar28,fVar29);
        uStack_194 = CONCAT44(uStack_194._4_4_,
                              CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar10))));
        FUN_108378060(param_3,&fStack_1d0,8,1);
      }
      else if (cVar1 == '\x01') {
        FUN_108378628(fVar38,fVar38,param_3,&uStack_128,iVar23);
      }
      else if (cVar1 == '\0') {
        if (param_1[1] < 1.4142135) goto LAB_1083a53a4;
        func_0x000108142248(param_3,&uStack_128,iVar23);
      }
      fVar28 = fVar27 - fVar41;
      if (fVar39 - fVar40 <= fVar27 - fVar41) {
        fVar28 = fVar39 - fVar40;
      }
      uVar10 = *param_1 == fVar28;
      if ((*param_1 < fVar28) && ((*(byte *)((long)param_1 + 0xe) & 1) == 0)) {
        uStack_128 = CONCAT44(fVar38 + fVar41,fVar38 + fVar40);
        fStack_120 = fVar39 - fVar38;
        fStack_11c = fVar27 - fVar38;
        func_0x000108142248(param_3,&uStack_128,*(undefined4 *)(&UNK_10df1e928 + (long)iVar23 * 4));
      }
    }
    if ((*(byte *)((long)param_2 + 0xe) >> 1 & 1) != 0) {
      *(byte *)((long)param_3 + 0xe) = *(byte *)((long)param_3 + 0xe) ^ 2;
    }
  }
  pfVar24 = afStack_220;
  func_0x0001083a5edc();
  func_0x0001083a5f14(uStack_b0);
  if ((bool)uVar10) {
    return pfVar24;
  }
  ___stack_chk_fail();
  func_0x0001083a5edc(afStack_220);
  __Unwind_Resume(pfVar24);
FUN_1083a5ea4:
  FUN_10837ca38(pfVar24 + 0x22);
  FUN_10837ca38(pfVar24 + 0x1e);
  FUN_10837ca38(pfVar24 + 0x1a);
  return pfVar24;
code_r0x0001083a5cc4:
  FUN_1083a4164(&fStack_1d0,0,iVar23 == 1);
  func_0x000108376c1c(param_3,auStack_158);
  if (((uVar13 | *(byte *)((long)param_1 + 0xe) ^ 0xffffffff) & 1) == 0) {
    pfVar24 = param_2;
    FUN_108376fe8();
    if ((int)pfVar24 == 1) {
      func_0x0001083a6018();
      FUN_108379514();
    }
    else {
      func_0x0001083a6018();
      func_0x000108142250();
    }
  }
  if ((*(byte *)((long)param_2 + 0xe) >> 1 & 1) != 0) {
    *(byte *)((long)param_3 + 0xe) = *(byte *)((long)param_3 + 0xe) ^ 2;
  }
  pfVar24 = &fStack_1d0;
  goto FUN_1083a5ea4;
}



/* Entry: 1083a5ea4; end: 1083a5f13;  */

long FUN_1083a5ea4(long param_1)

{
  FUN_10837ca38(param_1 + 0x88);
  FUN_10837ca38(param_1 + 0x78);
  FUN_10837ca38(param_1 + 0x68);
  return param_1;
}



/* Entry: 1083a5f14; end: 1083a623f;  */

void FUN_1083a5f14(void)

{
  return;
}



/* Entry: 1083a6240; end: 1083a6263;  */

void FUN_1083a6240(void)

{
  func_0x0001083a4f78();
  return;
}



/* Entry: 1083a6264; end: 1083a628f;  */

undefined8 FUN_1083a6264(undefined8 param_1,long param_2)

{
  FUN_1083a6290(param_1,param_2,*(byte *)(param_2 + 0x48) >> 6);
  return param_1;
}



/* Entry: 1083a6290; end: 1083a633f;  */

void FUN_1083a6290(undefined4 param_1,undefined4 *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  *param_2 = param_1;
  if (param_4 == 2) {
    if (*(float *)(param_3 + 0x40) != 0.0) {
      param_2[1] = *(float *)(param_3 + 0x40);
      uVar2 = param_2[3] | 0x80000000;
      goto LAB_1083a62cc;
    }
LAB_1083a62bc:
    param_2[1] = 0xbf800000;
  }
  else {
    if (param_4 != 1) goto LAB_1083a62bc;
    param_2[1] = *(undefined4 *)(param_3 + 0x40);
  }
  uVar2 = param_2[3] & 0x7fffffff;
LAB_1083a62cc:
  param_2[3] = uVar2;
  param_2[2] = *(undefined4 *)(param_3 + 0x44);
  uVar1 = *(uint *)(param_3 + 0x48) >> 2;
  param_2[3] = uVar2 & 0xffff0000 | uVar1 & 3;
  param_2[3] = uVar2 & 0x80000000 | uVar1 & 3 | (*(uint *)(param_3 + 0x48) >> 4 & 3) << 0x10;
  return;
}



/* Entry: 1083a6340; end: 1083a63af;  */

bool FUN_1083a6340(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  byte bStack_22;
  
  fVar2 = (float)param_1[1];
  if (0.0 < fVar2) {
    uVar1 = param_1[3];
    uStack_24 = (undefined1)uVar1;
    uStack_23 = (undefined1)((uint)uVar1 >> 0x10);
    uStack_2c = param_1[2];
    bStack_22 = (byte)((uint)uVar1 >> 0x1f);
    uStack_28 = *param_1;
    fStack_30 = fVar2;
    FUN_1083a5240(&fStack_30,param_3,param_2);
  }
  return 0.0 < fVar2;
}



/* Entry: 1083a63b0; end: 1083a64d3;  */

void FUN_1083a63b0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0.0 <= *(float *)(param_1 + 4)) {
    uVar1 = *(uint *)(param_2 + 0x48);
    uVar2 = 0x40;
    if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
      uVar2 = 0x80;
    }
    uVar3 = uVar1 & 0xffffff3f | uVar2;
    *(uint *)(param_2 + 0x48) = uVar3;
    if (0.0 <= *(float *)(param_1 + 4)) {
      *(float *)(param_2 + 0x40) = *(float *)(param_1 + 4);
    }
    if (0.0 <= *(float *)(param_1 + 8)) {
      *(float *)(param_2 + 0x44) = *(float *)(param_1 + 8);
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((uVar4 & 0xffff) < 3) {
      uVar3 = uVar1 & 0xffffff33 | uVar2 | (uVar4 & 0xffff) << 2;
      *(uint *)(param_2 + 0x48) = uVar3;
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    if (2 < (uVar4 >> 0x10 & 0xff)) {
      return;
    }
    uVar2 = uVar3 & 0xffffffc0 | uVar3 & 0xf | (uVar4 >> 0x10 & 3) << 4;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x48) & 0xffffff3f;
  }
  *(uint *)(param_2 + 0x48) = uVar2;
  return;
}



/* Entry: 1083a64d4; end: 1083a65e7;  */

void FUN_1083a64d4(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  
  fStack_48 = *param_2 - param_3[1];
  fStack_44 = *param_3 + param_2[1];
  uStack_50 = CONCAT44(param_3[1] + fStack_44,*param_3 + fStack_48);
  FUN_1081f770c(0x3f3504f3,param_1,&uStack_50,&fStack_48);
  uStack_50 = CONCAT44(fStack_44 - (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                       fStack_48 - (float)*(undefined8 *)param_3);
  FUN_1081f770c(0x3f3504f3,param_1,&uStack_50,param_4);
  return;
}



/* Entry: 1083a65e8; end: 1083a67a7;  */

void FUN_1083a65e8(float param_1,float param_2,undefined8 param_3,undefined8 param_4,float *param_5,
                  undefined8 param_6,float *param_7,int param_8,ulong param_9)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  
  fVar8 = *param_5;
  fVar9 = param_5[1];
  fVar6 = fVar9 * param_7[1] + *param_7 * fVar8;
  uVar2 = param_3;
  FUN_1083a69dc(fVar6);
  uStack_88 = *(undefined8 *)param_7;
  fVar3 = (float)((ulong)uStack_88 >> 0x20);
  fVar7 = (float)uStack_88;
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
LAB_1083a66d0:
    uStack_88 = CONCAT44(param_1 * fVar3,param_1 * fVar7);
  }
  else {
    if (iVar1 == 3) {
      return;
    }
    fVar4 = fVar8 * fVar3;
    fVar5 = fVar9 * fVar7;
    if (fVar4 <= fVar5) {
      param_4 = param_3;
      fVar8 = -fVar8;
      fVar9 = -fVar9;
      fVar7 = -fVar7;
      fVar3 = -fVar3;
    }
    if ((0.70710677 < param_2) || (fVar6 != 0.0)) {
      fVar6 = SQRT((fVar6 + 1.0) * 0.5);
      if (fVar6 < param_2) goto LAB_1083a66d0;
      if (iVar1 == 1) {
        fStack_90 = fVar3 - fVar9;
        fStack_8c = fVar8 - fVar7;
        if (fVar4 <= fVar5) {
          fStack_90 = -fStack_90;
          fStack_8c = -fStack_8c;
        }
      }
      else {
        fStack_90 = fVar7 + fVar8;
        fStack_8c = fVar3 + fVar9;
      }
      func_0x000108384970(param_1 / fVar6,&fStack_90);
    }
    else {
      fStack_90 = param_1 * (fVar7 + fVar8);
      fStack_8c = param_1 * (fVar3 + fVar9);
    }
    func_0x0001083a6a7c(fStack_90,fStack_8c);
    if (param_8 == 0) {
      FUN_108377c8c();
    }
    else {
      FUN_1083778c4();
    }
    uStack_88 = CONCAT44(param_1 * fVar3,param_1 * fVar7);
    if ((param_9 & 1) != 0) goto LAB_1083a6774;
  }
  func_0x0001083a6a7c();
  FUN_108377c8c();
LAB_1083a6774:
  func_0x0001083a6a74(param_4);
  return;
}



/* Entry: 1083a67a8; end: 1083a6957;  */

void FUN_1083a67a8(float param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                  float *param_5,float *param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float afStack_d4 [4];
  undefined1 auStack_c4 [124];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar11 = param_4[1] * param_6[1] + *param_6 * *param_4;
  puVar3 = param_2;
  puVar5 = param_3;
  pfVar6 = param_4;
  pfVar7 = param_5;
  pfVar8 = param_6;
  FUN_1083a69dc();
  if ((int)puVar3 != 3) {
    uStack_e0 = *(undefined8 *)param_4;
    uStack_e8 = *(undefined8 *)param_6;
    fVar11 = (float)((ulong)uStack_e8 >> 0x20);
    fVar13 = (float)((ulong)uStack_e0 >> 0x20);
    bVar1 = (float)uStack_e0 * fVar11 <= fVar13 * (float)uStack_e8;
    puVar4 = param_3;
    if (bVar1) {
      uStack_e0 = CONCAT44(-fVar13,-(float)uStack_e0);
      uStack_e8 = CONCAT44(-fVar11,-(float)uStack_e8);
      puVar4 = param_2;
      param_2 = param_3;
    }
    pfVar6 = (float *)(ulong)bVar1;
    uVar9 = 2;
    if (param_1 != 0.0) {
      uVar9 = 0x12;
    }
    uStack_ec = 0x10;
    if (param_1 != 1.0) {
      uStack_ec = uVar9;
    }
    uStack_108 = 0;
    uStack_10c = 0;
    uStack_f4 = 0x3f80000000000000;
    uStack_fc = 0;
    fVar11 = *param_5;
    fStack_110 = param_1;
    fStack_100 = param_1;
    FUN_108363ef4(fVar11,param_5[1],&fStack_110);
    puVar3 = &uStack_e0;
    puVar5 = &uStack_e8;
    pfVar7 = &fStack_110;
    pfVar8 = afStack_d4;
    FUN_1083534b0(puVar3,puVar5);
    if (0 < (int)puVar3) {
      puVar2 = auStack_c4;
      for (uVar10 = (ulong)puVar3 & 0xffffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
        puVar5 = (undefined8 *)(puVar2 + -8);
        FUN_1081f770c(*(undefined4 *)(puVar2 + 8),param_2,puVar5,puVar2);
        puVar2 = puVar2 + 0x1c;
      }
      uVar12 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) * param_1,(float)uStack_e8 * param_1);
      pfVar6 = (float *)&uStack_e8;
      uStack_e8 = uVar12;
      func_0x0001083a6a74(puVar4);
      fVar11 = (float)uVar12;
      puVar3 = puVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    fVar13 = fVar11 * pfVar8[1];
    fVar11 = fVar11 * *pfVar8;
    puVar4 = puVar3;
    if (pfVar8[1] * *pfVar6 <= *pfVar8 * pfVar6[1]) {
      fVar11 = -fVar11;
      fVar13 = -fVar13;
      puVar4 = puVar5;
      puVar5 = puVar3;
    }
    FUN_108377c8c(fVar11 + *pfVar7,fVar13 + pfVar7[1],puVar4);
    func_0x0001083a6a74(puVar5);
    return;
  }
  return;
}



/* Entry: 1083a6958; end: 1083a69db;  */

void FUN_1083a6958(float param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5
                  ,float *param_6)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = param_1 * param_6[1];
  param_1 = param_1 * *param_6;
  uVar1 = param_2;
  if (param_6[1] * *param_4 <= *param_6 * param_4[1]) {
    param_1 = -param_1;
    fVar2 = -fVar2;
    uVar1 = param_3;
    param_3 = param_2;
  }
  FUN_108377c8c(param_1 + *param_5,fVar2 + param_5[1],uVar1);
  func_0x0001083a6a74(param_3);
  return;
}



/* Entry: 1083a69dc; end: 1083a6a1f;  */

undefined1 FUN_1083a69dc(float param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 3;
  if (0.00024414062 < ABS(1.0 - param_1)) {
    uVar2 = 2;
  }
  uVar1 = 0.00024414062 < ABS(param_1 + 1.0);
  if (0.0 <= param_1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1083a6a20; end: 1083a6a57;  */

undefined8 FUN_1083a6a20(undefined8 param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  FUN_108377c8c(*param_2,param_2[1]);
  func_0x00010837cf24(*param_2 - *param_3,param_2[1] - param_3[1]);
  FUN_108377cd4();
  puVar1 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cee4();
  FUN_10837e8b4();
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 1083a6a58; end: 1083a6d03;  */

float FUN_1083a6a58(void)

{
  float *unaff_x20;
  float *unaff_x22;
  float unaff_s9;
  
  return (*unaff_x22 - *unaff_x20) - unaff_s9;
}



/* Entry: 1083a6d04; end: 1083a6e4b;  */

void FUN_1083a6d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  float fVar4;
  undefined8 uVar5;
  undefined8 extraout_x10;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d11;
  float fVar15;
  float fVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uStack_70;
  undefined8 uStack_60;
  
  func_0x0001083a745c();
  while( true ) {
    uVar1 = (uint)param_4;
    param_4 = (ulong)(uVar1 - 8);
    if ((int)uVar1 < 8) break;
    func_0x0001083a7414();
    func_0x0001083a739c();
    uVar5 = uStack_60;
    func_0x0001083a739c(uStack_60,uStack_70,unaff_d9);
    uVar6 = uStack_60;
    func_0x0001083a739c(uStack_60,uStack_70,unaff_d8);
    *unaff_x20 = (char)uVar6;
    unaff_x20[1] = (char)uVar5;
    unaff_x20[2] = (char)param_1;
    unaff_x20[3] = (char)unaff_d11;
    unaff_x20[4] = (char)((ulong)uVar6 >> 8);
    unaff_x20[5] = (char)((ulong)uVar5 >> 8);
    unaff_x20[6] = (char)((ulong)param_1 >> 8);
    unaff_x20[7] = (char)((ulong)unaff_d11 >> 8);
    unaff_x20[8] = (char)((ulong)uVar6 >> 0x10);
    unaff_x20[9] = (char)((ulong)uVar5 >> 0x10);
    unaff_x20[10] = (char)((ulong)param_1 >> 0x10);
    unaff_x20[0xb] = (char)((ulong)unaff_d11 >> 0x10);
    unaff_x20[0xc] = (char)((ulong)uVar6 >> 0x18);
    unaff_x20[0xd] = (char)((ulong)uVar5 >> 0x18);
    unaff_x20[0xe] = (char)((ulong)param_1 >> 0x18);
    unaff_x20[0xf] = (char)((ulong)unaff_d11 >> 0x18);
    unaff_x20[0x10] = (char)((ulong)uVar6 >> 0x20);
    unaff_x20[0x11] = (char)((ulong)uVar5 >> 0x20);
    unaff_x20[0x12] = (char)((ulong)param_1 >> 0x20);
    unaff_x20[0x13] = (char)((ulong)unaff_d11 >> 0x20);
    unaff_x20[0x14] = (char)((ulong)uVar6 >> 0x28);
    unaff_x20[0x15] = (char)((ulong)uVar5 >> 0x28);
    unaff_x20[0x16] = (char)((ulong)param_1 >> 0x28);
    unaff_x20[0x17] = (char)((ulong)unaff_d11 >> 0x28);
    unaff_x20[0x18] = (char)((ulong)uVar6 >> 0x30);
    unaff_x20[0x19] = (char)((ulong)uVar5 >> 0x30);
    unaff_x20[0x1a] = (char)((ulong)param_1 >> 0x30);
    unaff_x20[0x1b] = (char)((ulong)unaff_d11 >> 0x30);
    unaff_x20[0x1c] = (char)((ulong)uVar6 >> 0x38);
    unaff_x20[0x1d] = (char)((ulong)uVar5 >> 0x38);
    unaff_x20[0x1e] = (char)((ulong)param_1 >> 0x38);
    unaff_x20[0x1f] = (char)((ulong)unaff_d11 >> 0x38);
    unaff_x20 = unaff_x20 + 0x20;
    param_1 = uVar6;
    unaff_d8 = uVar6;
    unaff_d9 = uVar5;
  }
  lVar2 = 0;
  lVar3 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 2;
  uVar6 = 0x3b808081;
  uVar7 = 0x3f800000;
  uVar8 = 0;
  uVar9 = 0xfffffff8fffffff0;
  uVar10 = 0x800000010;
  uVar11 = 0xff000000ff;
  fVar12 = 0.003921569;
  uVar5 = 0x437f0000;
  fVar4 = 255.0;
  fVar13 = fVar12;
  fVar14 = fVar4;
  while (lVar3 != lVar2) {
    uVar1 = *(uint *)(unaff_x19 + lVar2);
    fVar15 = (float)(uVar1 >> 0x18) * (float)uVar6;
    fVar16 = (float)uVar7 / fVar15;
    if (fVar15 == 0.0) {
      fVar16 = (float)uVar8;
    }
    uVar17 = NEON_ushl(CONCAT44(uVar1,uVar1),uVar9,4);
    uVar18 = NEON_ucvtf(uVar17 & uVar11,4);
    uVar18 = NEON_fminnm(CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar13 * fVar16 * fVar14,
                                  (float)uVar18 * fVar12 * fVar16 * fVar4),CONCAT44(fVar14,fVar4),4)
    ;
    NEON_ushl(CONCAT44((int)(float)(int)(float)((ulong)uVar18 >> 0x20),
                       (int)(float)(int)(float)uVar18),uVar10,4);
    NEON_fminnm((float)(uVar1 & 0xff) * (float)uVar6 * fVar16 * (float)uVar5,(float)uVar5);
    func_0x0001083a74bc();
    lVar2 = extraout_x8;
    lVar3 = extraout_x9;
    uVar5 = extraout_x10;
  }
  return;
}



/* Entry: 1083a6e4c; end: 1083a6fa3;  */

void FUN_1083a6e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  float fVar4;
  undefined8 uVar5;
  undefined8 extraout_x10;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 unaff_d11;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uStack_90;
  undefined8 uStack_80;
  
  func_0x0001083a745c();
  while( true ) {
    uVar1 = (uint)param_4;
    param_4 = (ulong)(uVar1 - 8);
    if ((int)uVar1 < 8) break;
    func_0x0001083a7414();
    func_0x0001083a73a0();
    uVar5 = uStack_80;
    func_0x0001083a73a0(uStack_80,uStack_90);
    uVar6 = uStack_80;
    func_0x0001083a73a0(uStack_80,uStack_90);
    *unaff_x20 = (char)param_1;
    unaff_x20[1] = (char)uVar5;
    unaff_x20[2] = (char)uVar6;
    unaff_x20[3] = (char)unaff_d11;
    unaff_x20[4] = (char)((ulong)param_1 >> 8);
    unaff_x20[5] = (char)((ulong)uVar5 >> 8);
    unaff_x20[6] = (char)((ulong)uVar6 >> 8);
    unaff_x20[7] = (char)((ulong)unaff_d11 >> 8);
    unaff_x20[8] = (char)((ulong)param_1 >> 0x10);
    unaff_x20[9] = (char)((ulong)uVar5 >> 0x10);
    unaff_x20[10] = (char)((ulong)uVar6 >> 0x10);
    unaff_x20[0xb] = (char)((ulong)unaff_d11 >> 0x10);
    unaff_x20[0xc] = (char)((ulong)param_1 >> 0x18);
    unaff_x20[0xd] = (char)((ulong)uVar5 >> 0x18);
    unaff_x20[0xe] = (char)((ulong)uVar6 >> 0x18);
    unaff_x20[0xf] = (char)((ulong)unaff_d11 >> 0x18);
    unaff_x20[0x10] = (char)((ulong)param_1 >> 0x20);
    unaff_x20[0x11] = (char)((ulong)uVar5 >> 0x20);
    unaff_x20[0x12] = (char)((ulong)uVar6 >> 0x20);
    unaff_x20[0x13] = (char)((ulong)unaff_d11 >> 0x20);
    unaff_x20[0x14] = (char)((ulong)param_1 >> 0x28);
    unaff_x20[0x15] = (char)((ulong)uVar5 >> 0x28);
    unaff_x20[0x16] = (char)((ulong)uVar6 >> 0x28);
    unaff_x20[0x17] = (char)((ulong)unaff_d11 >> 0x28);
    unaff_x20[0x18] = (char)((ulong)param_1 >> 0x30);
    unaff_x20[0x19] = (char)((ulong)uVar5 >> 0x30);
    unaff_x20[0x1a] = (char)((ulong)uVar6 >> 0x30);
    unaff_x20[0x1b] = (char)((ulong)unaff_d11 >> 0x30);
    unaff_x20[0x1c] = (char)((ulong)param_1 >> 0x38);
    unaff_x20[0x1d] = (char)((ulong)uVar5 >> 0x38);
    unaff_x20[0x1e] = (char)((ulong)uVar6 >> 0x38);
    unaff_x20[0x1f] = (char)((ulong)unaff_d11 >> 0x38);
    unaff_x20 = unaff_x20 + 0x20;
    param_1 = uVar6;
  }
  lVar2 = 0;
  lVar3 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 2;
  uVar6 = 0x3b808081;
  uVar7 = 0x3f800000;
  uVar8 = 0;
  fVar9 = 0.003921569;
  uVar11 = 0xff000000ff;
  uVar5 = 0x437f0000;
  fVar4 = 255.0;
  uVar13 = 0x800000010;
  fVar10 = fVar9;
  fVar12 = fVar4;
  while (lVar3 != lVar2) {
    uVar1 = *(uint *)(unaff_x19 + lVar2);
    fVar14 = (float)(uVar1 >> 0x18) * (float)uVar6;
    fVar15 = (float)uVar7 / fVar14;
    if (fVar14 == 0.0) {
      fVar15 = (float)uVar8;
    }
    uVar16 = NEON_ucvtf(CONCAT44(uVar1 >> 8,uVar1) & uVar11,4);
    uVar16 = NEON_fminnm(CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar10 * fVar15 * fVar12,
                                  (float)uVar16 * fVar9 * fVar15 * fVar4),CONCAT44(fVar12,fVar4),4);
    NEON_ushl(CONCAT44((int)(float)(int)(float)((ulong)uVar16 >> 0x20),
                       (int)(float)(int)(float)uVar16),uVar13,4);
    NEON_fminnm((float)(uVar1 >> 0x10 & 0xff) * (float)uVar6 * fVar15 * (float)uVar5,(float)uVar5);
    func_0x0001083a74bc();
    lVar2 = extraout_x8;
    lVar3 = extraout_x9;
    uVar5 = extraout_x10;
  }
  return;
}



/* Entry: 1083a6fa4; end: 1083a70d3;  */

void FUN_1083a6fa4(uint *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = 0;
  uVar5 = param_3;
  while (0xf < (int)uVar5) {
    uVar8 = ((undefined8 *)(param_2 + lVar3))[1];
    uVar7 = *(undefined8 *)(param_2 + lVar3);
    uVar6 = (undefined1)uVar7;
    *(undefined1 *)param_1 = uVar6;
    *(undefined1 *)((long)param_1 + 1) = uVar6;
    *(undefined1 *)((long)param_1 + 2) = uVar6;
    *(undefined1 *)((long)param_1 + 3) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 8);
    *(undefined1 *)(param_1 + 1) = uVar6;
    *(undefined1 *)((long)param_1 + 5) = uVar6;
    *(undefined1 *)((long)param_1 + 6) = uVar6;
    *(undefined1 *)((long)param_1 + 7) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x10);
    *(undefined1 *)(param_1 + 2) = uVar6;
    *(undefined1 *)((long)param_1 + 9) = uVar6;
    *(undefined1 *)((long)param_1 + 10) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x18);
    *(undefined1 *)(param_1 + 3) = uVar6;
    *(undefined1 *)((long)param_1 + 0xd) = uVar6;
    *(undefined1 *)((long)param_1 + 0xe) = uVar6;
    *(undefined1 *)((long)param_1 + 0xf) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x20);
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((long)param_1 + 0x11) = uVar6;
    *(undefined1 *)((long)param_1 + 0x12) = uVar6;
    *(undefined1 *)((long)param_1 + 0x13) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x28);
    *(undefined1 *)(param_1 + 5) = uVar6;
    *(undefined1 *)((long)param_1 + 0x15) = uVar6;
    *(undefined1 *)((long)param_1 + 0x16) = uVar6;
    *(undefined1 *)((long)param_1 + 0x17) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x30);
    *(undefined1 *)(param_1 + 6) = uVar6;
    *(undefined1 *)((long)param_1 + 0x19) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1a) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1b) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x38);
    *(undefined1 *)(param_1 + 7) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1e) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1f) = 0xff;
    uVar6 = (undefined1)uVar8;
    *(undefined1 *)(param_1 + 8) = uVar6;
    *(undefined1 *)((long)param_1 + 0x21) = uVar6;
    *(undefined1 *)((long)param_1 + 0x22) = uVar6;
    *(undefined1 *)((long)param_1 + 0x23) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 8);
    *(undefined1 *)(param_1 + 9) = uVar6;
    *(undefined1 *)((long)param_1 + 0x25) = uVar6;
    *(undefined1 *)((long)param_1 + 0x26) = uVar6;
    *(undefined1 *)((long)param_1 + 0x27) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 0x10);
    *(undefined1 *)(param_1 + 10) = uVar6;
    *(undefined1 *)((long)param_1 + 0x29) = uVar6;
    *(undefined1 *)((long)param_1 + 0x2a) = uVar6;
    *(undefined1 *)((long)param_1 + 0x2b) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 0x18);
    *(undefined1 *)(param_1 + 0xb) = uVar6;
    *(undefined1 *)((long)param_1 + 0x2d) = uVar6;
    *(undefined1 *)((long)param_1 + 0x2e) = uVar6;
    *(undefined1 *)((long)param_1 + 0x2f) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 0x20);
    *(undefined1 *)(param_1 + 0xc) = uVar6;
    *(undefined1 *)((long)param_1 + 0x31) = uVar6;
    *(undefined1 *)((long)param_1 + 0x32) = uVar6;
    *(undefined1 *)((long)param_1 + 0x33) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 0x28);
    *(undefined1 *)(param_1 + 0xd) = uVar6;
    *(undefined1 *)((long)param_1 + 0x35) = uVar6;
    *(undefined1 *)((long)param_1 + 0x36) = uVar6;
    *(undefined1 *)((long)param_1 + 0x37) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 0x30);
    *(undefined1 *)(param_1 + 0xe) = uVar6;
    *(undefined1 *)((long)param_1 + 0x39) = uVar6;
    *(undefined1 *)((long)param_1 + 0x3a) = uVar6;
    *(undefined1 *)((long)param_1 + 0x3b) = 0xff;
    uVar6 = (undefined1)((ulong)uVar8 >> 0x38);
    *(undefined1 *)(param_1 + 0xf) = uVar6;
    *(undefined1 *)((long)param_1 + 0x3d) = uVar6;
    *(undefined1 *)((long)param_1 + 0x3e) = uVar6;
    *(undefined1 *)((long)param_1 + 0x3f) = 0xff;
    param_1 = param_1 + 0x10;
    lVar3 = lVar3 + 0x10;
    uVar5 = uVar5 - 0x10;
  }
  pbVar1 = (byte *)(param_2 + lVar3);
  pbVar2 = pbVar1;
  if (7 < (int)uVar5) {
    pbVar2 = pbVar1 + 8;
    uVar7 = *(undefined8 *)pbVar1;
    uVar6 = (undefined1)uVar7;
    *(undefined1 *)param_1 = uVar6;
    *(undefined1 *)((long)param_1 + 1) = uVar6;
    *(undefined1 *)((long)param_1 + 2) = uVar6;
    *(undefined1 *)((long)param_1 + 3) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 8);
    *(undefined1 *)(param_1 + 1) = uVar6;
    *(undefined1 *)((long)param_1 + 5) = uVar6;
    *(undefined1 *)((long)param_1 + 6) = uVar6;
    *(undefined1 *)((long)param_1 + 7) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x10);
    *(undefined1 *)(param_1 + 2) = uVar6;
    *(undefined1 *)((long)param_1 + 9) = uVar6;
    *(undefined1 *)((long)param_1 + 10) = uVar6;
    *(undefined1 *)((long)param_1 + 0xb) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x18);
    *(undefined1 *)(param_1 + 3) = uVar6;
    *(undefined1 *)((long)param_1 + 0xd) = uVar6;
    *(undefined1 *)((long)param_1 + 0xe) = uVar6;
    *(undefined1 *)((long)param_1 + 0xf) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x20);
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((long)param_1 + 0x11) = uVar6;
    *(undefined1 *)((long)param_1 + 0x12) = uVar6;
    *(undefined1 *)((long)param_1 + 0x13) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x28);
    *(undefined1 *)(param_1 + 5) = uVar6;
    *(undefined1 *)((long)param_1 + 0x15) = uVar6;
    *(undefined1 *)((long)param_1 + 0x16) = uVar6;
    *(undefined1 *)((long)param_1 + 0x17) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x30);
    *(undefined1 *)(param_1 + 6) = uVar6;
    *(undefined1 *)((long)param_1 + 0x19) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1a) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1b) = 0xff;
    uVar6 = (undefined1)((ulong)uVar7 >> 0x38);
    *(undefined1 *)(param_1 + 7) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1d) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1e) = uVar6;
    *(undefined1 *)((long)param_1 + 0x1f) = 0xff;
    param_1 = param_1 + 8;
    uVar5 = (param_3 - (int)lVar3) - 8;
  }
  for (uVar4 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = (uint)*pbVar2 * 0x10101 | 0xff000000;
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return;
}



/* Entry: 1083a70d4; end: 1083a710f;  */

void FUN_1083a70d4(void)

{
  int iVar1;
  
  if ((bRam00000001138270c0 & 1) == 0) {
    iVar1 = 0x138270c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138270c0);
      return;
    }
  }
  return;
}



/* Entry: 1083a7110; end: 1083a74d3;  */

void FUN_1083a7110(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  for (uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar1 = *param_2;
    uVar2 = uVar1 >> 0x18;
    uVar4 = CONCAT44(uVar1 >> 8,uVar1) & 0xff000000ff;
    uVar5 = NEON_ushl(CONCAT44(((int)(uVar4 >> 0x20) * uVar2 + 0x7f & 0xfffeffff) / 0xff,
                               ((int)uVar4 * uVar2 + 0x7f & 0xfffeffff) / 0xff),0x800000010,4);
    *param_1 = uVar1 & 0xff000000 | ((uVar1 >> 0x10 & 0xff) * uVar2 + 0x7f & 0xffff) / 0xff |
               (uint)uVar5 & 0xff0000 | (uint)((ulong)uVar5 >> 0x20) & 0xff00;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 1083a74d4; end: 1083a75bf;  */

void FUN_1083a74d4(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  int aiStack_78 [8];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar5 = *(long **)(param_1 + 2);
  func_0x000105302f48(aiStack_78);
  puStack_40 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  *puVar3 = &PTR_SUB_110a406c0;
  puVar3[1] = param_1;
  func_0x000105302f48(puVar3 + 2,aiStack_78);
  puStack_40 = puVar3;
  (**(code **)(*plVar5 + 0x10))(plVar5,auStack_58);
  func_0x0001006393ec(auStack_58);
  piVar4 = aiStack_78;
  func_0x0001006393ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_58);
  func_0x0001006393ec(aiStack_78);
  __Unwind_Resume();
  while (*piVar4 != 0) {
    (**(code **)(**(long **)(piVar4 + 2) + 0x18))();
  }
  return;
}



/* Entry: 1083a75c0; end: 1083a7623;  */

void FUN_1083a75c0(int *param_1)

{
  while (*param_1 != 0) {
    (**(code **)(**(long **)(param_1 + 2) + 0x18))();
  }
  return;
}



/* Entry: 1083a7624; end: 1083a7637;  */

void FUN_1083a7624(void)

{
  func_0x0001083a75f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a7638; end: 1083a767b;  */

undefined8 FUN_1083a7638(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm(0x30);
  FUN_1083a7720();
  return uVar1;
}



/* Entry: 1083a767c; end: 1083a76a7;  */

undefined8 * FUN_1083a767c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110a406c0;
  param_2[1] = uVar1;
  func_0x00010724cbe8(param_2 + 2,param_1 + 0x10);
  return param_2;
}



/* Entry: 1083a76a8; end: 1083a7713;  */

void FUN_1083a76a8(long param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  func_0x000104c003e8(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar2) {
      *piVar3 = *piVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 1083a7714; end: 1083a771f;  */

undefined ** FUN_1083a7714(void)

{
  return &PTR_DAT_110a40720;
}



/* Entry: 1083a7720; end: 1083a774f;  */

undefined8 * FUN_1083a7720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_SUB_110a406c0;
  param_1[1] = uVar1;
  func_0x00010724cbe8(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 1083a7750; end: 1083a7757;  */

void FUN_1083a7750(void)

{
  return;
}



/* Entry: 1083a7758; end: 1083a7833;  */

ulong FUN_1083a7758(ulong param_1,uint param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  
  uVar6 = param_1 & 0xffffffff;
  puVar3 = param_4;
  func_0x000108154764(param_4,uVar6,2);
  FUN_1083a7834(param_1,param_3,param_4);
  puVar4 = param_4;
  func_0x0001083a858c(param_4,param_1);
  puVar1 = (undefined1 *)(((ulong)(puVar3 + 3) & 0xfffffffffffffffc) + 0x28);
  uVar2 = 0;
  if (puVar3 < (undefined1 *)0xffffffffffffffd5) {
    uVar2 = *param_4;
  }
  puVar4 = puVar1 + (long)puVar4;
  uVar5 = 0;
  if (puVar1 <= puVar4) {
    uVar5 = uVar2;
  }
  if (param_2 != 0) {
    puVar1 = puVar4 + 4;
    uVar2 = 0;
    if (puVar4 < (undefined1 *)0xfffffffffffffffc) {
      uVar2 = uVar5;
    }
    *param_4 = uVar2;
    puVar3 = param_4;
    func_0x0001083a858c(param_4,uVar6);
    puVar3 = puVar3 + (long)puVar1;
    puVar4 = puVar3 + param_2;
    uVar5 = 0;
    if (puVar1 <= puVar3 && puVar3 <= puVar4) {
      uVar5 = *param_4;
    }
  }
  uVar2 = 0;
  if (puVar4 < (undefined1 *)0xfffffffffffffff9) {
    uVar2 = uVar5;
  }
  *param_4 = uVar2;
  return (ulong)(puVar4 + 7) & 0xfffffffffffffff8;
}



/* Entry: 1083a7834; end: 1083a7863;  */

/* WARNING: Removing unreachable block (ram,0x000108154778) */
/* WARNING: Removing unreachable block (ram,0x0001081547b0) */
/* WARNING: Removing unreachable block (ram,0x0001081547b4) */
/* WARNING: Removing unreachable block (ram,0x0001081547c4) */

long FUN_1083a7834(ulong param_1,ulong param_2)

{
  return (ulong)(byte)(&UNK_10df1e9b6)[param_2 & 0xffffffff] * (param_1 & 0xffffffff);
}



/* Entry: 1083a7864; end: 1083a78ab;  */

long FUN_1083a7864(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  lVar1 = param_1;
  FUN_1083a78ac();
  FUN_1083a7758(uVar2,lVar1,*(uint *)(param_1 + 0x24) & 3,&uStack_21);
  return param_1 + uVar2;
}



/* Entry: 1083a78ac; end: 1083a78d3;  */

undefined4 FUN_1083a78ac(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 9) >> 3 & 1) == 0) {
    return 0;
  }
  FUN_1083a78d4();
  return *param_1;
}



/* Entry: 1083a78d4; end: 1083a791b;  */

long FUN_1083a78d4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  FUN_1083a84f8(*(undefined4 *)(param_1 + 0x18));
  lVar1 = extraout_x8;
  FUN_1083a7834(extraout_x8,*(uint *)(param_1 + 0x24) & 3,&uStack_21);
  return param_1 + extraout_x9 + lVar1 * 4 + 0x28;
}



/* Entry: 1083a791c; end: 1083a7953;  */

void FUN_1083a791c(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_1 = 1;
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 3) = param_2[1];
  *(undefined8 *)(param_1 + 1) = uVar4;
  do {
    iVar3 = iRam0000000113255f58;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113255f58,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113255f58 = iRam0000000113255f58 + 1;
    }
  } while ((cVar1 != '\0') || (iVar3 == 0));
  param_1[5] = iVar3;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1083a7954; end: 1083a79c7;  */

long FUN_1083a7954(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
  }
  uVar2 = param_1 + 0x2fU & 0xfffffffffffffff8;
  do {
    uVar1 = uVar2;
    func_0x0001083a7854();
    func_0x0001081298a0(uVar2);
    uVar2 = uVar1;
  } while (uVar1 != 0);
  return param_1;
}



/* Entry: 1083a79c8; end: 1083a79f3;  */

void FUN_1083a79c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0001083a7854();
    *param_1 = lVar1;
  }
  return;
}



/* Entry: 1083a79f4; end: 1083a7a37;  */

void FUN_1083a79f4(long *param_1)

{
  undefined1 auStack_28 [8];
  
  if (*param_1 != 0) {
    FUN_1083a7a38(auStack_28,param_1);
    func_0x00010812fec0(auStack_28);
  }
  func_0x00010815277c(param_1);
  return;
}



/* Entry: 1083a7a38; end: 1083a7aa7;  */

void FUN_1083a7a38(long *param_1,long *param_2)

{
  long lVar1;
  
  if ((int)param_2[5] == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1083a7ea8();
    lVar1 = *param_2;
    *(uint *)(lVar1 + param_2[6] + 0x24) = *(uint *)(lVar1 + param_2[6] + 0x24) | 4;
    *param_2 = 0;
    FUN_1083a791c(lVar1,param_2 + 3);
    param_2[6] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 5) = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1083a7aa8; end: 1083a7ca7;  */

void FUN_1083a7aa8(long param_1)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  ulong extraout_x8;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long extraout_x9;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined4 auStack_194 [5];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long alStack_168 [33];
  int iStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = 0;
  uStack_178 = 0;
  if ((*(byte *)(param_1 + 0x24) & 3) == 0) {
    func_0x0001081fdeac(param_1,param_1 + 0x28,(ulong)*(uint *)(param_1 + 0x18) << 1,3,&uStack_180);
    func_0x0001083a8574();
  }
  else {
    alStack_168[0] = 0;
    iStack_60 = 0;
    FUN_108183664(alStack_168,*(undefined4 *)(param_1 + 0x18));
    lVar1 = param_1 + 0x28;
    FUN_1081836dc(param_1,lVar1,*(undefined4 *)(param_1 + 0x18),alStack_168[0],0);
    uVar8 = (ulong)*(byte *)(param_1 + 0x24) & 3;
    iVar7 = (int)uVar8;
    if (iVar7 == 3) {
      lVar10 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      FUN_1083a84f8(*(undefined4 *)(param_1 + 0x18));
      uVar5 = extraout_x8;
      for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
        if ((long)iStack_60 <= (long)uVar8) {
LAB_1083a7c80:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1083a7c84);
          (*pcVar3)();
        }
        FUN_1083a7ca8(lVar1 + extraout_x9 + lVar10,alStack_168[0] + lVar10);
        func_0x0001083a8528();
        uVar5 = (ulong)*(uint *)(param_1 + 0x18);
        lVar10 = lVar10 + 0x10;
      }
    }
    else {
      lVar10 = 0;
      uVar5 = 0;
      auStack_194[0] = 0;
      uVar6 = (ulong)*(uint *)(param_1 + 0x18);
      puVar9 = (undefined4 *)(lVar1 + (uVar6 * 2 + 3 & 0x3fffffffc));
      bVar2 = (&UNK_10df1e9b6)[uVar8];
      uStack_180 = 0;
      uStack_178 = 0;
      puVar11 = puVar9 + 1;
      uVar8 = (ulong)bVar2;
      if (iVar7 != 2) {
        uVar8 = 0;
        puVar11 = auStack_194;
      }
      for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
        if ((long)iStack_60 <= (long)uVar5) goto LAB_1083a7c80;
        FUN_108183110(*puVar9,*puVar11,alStack_168[0] + lVar10);
        func_0x0001083a8528();
        uVar6 = (ulong)*(uint *)(param_1 + 0x18);
        lVar10 = lVar10 + 0x10;
        puVar9 = puVar9 + bVar2;
        puVar11 = puVar11 + uVar8;
      }
    }
    func_0x0001083a8574();
    FUN_1081856f4(alStack_168);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pauVar4 = (undefined1 (*) [16])alStack_168;
  FUN_1081856f4();
  func_0x0001083a8594();
  pcStack_1b8 = FUN_1083a7ca8;
  auVar12 = *pauVar4;
  fStack_1e4 = -auVar12._4_4_;
  uStack_1e8 = auVar12._0_4_;
  auVar12 = NEON_rev64(auVar12,4);
  auVar12 = NEON_ext(auVar12,auVar12,0xc,1);
  uStack_1d8 = auVar12._8_8_;
  uStack_1e0 = auVar12._0_8_;
  uStack_1d0 = 0;
  uStack_1c8 = 0xc03f800000;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x000108142084(&uStack_1e8);
  return;
}



/* Entry: 1083a7ca8; end: 1083a7cf3;  */

void FUN_1083a7ca8(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined4 uStack_38;
  float fStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar1 = *param_1;
  fStack_34 = -auVar1._4_4_;
  uStack_38 = auVar1._0_4_;
  auVar1 = NEON_rev64(auVar1,4);
  auVar1 = NEON_ext(auVar1,auVar1,0xc,1);
  uStack_28 = auVar1._8_8_;
  uStack_30 = auVar1._0_8_;
  uStack_20 = 0;
  uStack_18 = 0xc03f800000;
  func_0x000108142084(&uStack_38,param_2,1);
  return;
}



/* Entry: 1083a7cf4; end: 1083a7ea7;  */

void FUN_1083a7cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 (*pauVar4) [16];
  ulong extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  int iVar7;
  ulong uVar8;
  long extraout_x9;
  long extraout_x9_00;
  float *pfVar9;
  long extraout_x9_01;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined4 uStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined4 auStack_194 [5];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long alStack_168 [31];
  undefined *puStack_70;
  undefined8 uStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  
  fVar14 = (float)FUN_108350a34();
  bVar3 = false;
  if ((fVar14 < (float)param_3) && (bVar3 = false, !NAN((float)param_2) && !NAN((float)param_4))) {
    bVar3 = (float)param_2 < (float)param_4;
  }
  if (bVar3) {
    switch(*(uint *)(param_5 + 0x24) & 3) {
    case 0:
      puStack_70 = &UNK_10f490667;
      uStack_68 = 0x172;
      FUN_10841076c(&UNK_10f4906b6);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083a7ea8);
      (*pcVar2)();
    case 1:
      FUN_1083a84f8(*(undefined4 *)(param_5 + 0x18));
      fVar14 = *(float *)(extraout_x9_00 + param_5 + 0x28);
      pfVar9 = (float *)(extraout_x9_00 + param_5 + 0x2c);
      fVar16 = fVar14;
      for (uVar8 = 1; uVar8 < extraout_x8_00; uVar8 = uVar8 + 1) {
        fVar17 = *pfVar9;
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
        if (fVar14 <= fVar17) {
          fVar14 = fVar17;
        }
        pfVar9 = pfVar9 + 1;
      }
      break;
    case 2:
      FUN_10838eb84(&stack0xffffffffffffffb0,
                    param_5 + ((ulong)*(uint *)(param_5 + 0x18) * 2 + 3 & 0x3fffffffc) + 0x28);
      break;
    case 3:
      FUN_1083a84f8(*(undefined4 *)(param_5 + 0x18));
      lVar11 = param_5 + extraout_x9_01 + 0x28;
      uVar5 = extraout_x8_01;
      for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
        iStack_60 = FUN_1083a7ca8(lVar11,&stack0xffffffffffffffc0);
        uStack_5c = (undefined4)param_2;
        lStack_58 = CONCAT44((int)param_4,(int)param_3);
        func_0x00010838ed50(&stack0xffffffffffffffb0,&iStack_60);
        uVar5 = (ulong)*(uint *)(param_5 + 0x18);
        lVar11 = lVar11 + 0x10;
      }
    }
    return;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = 0;
  uStack_178 = 0;
  if ((*(byte *)(param_5 + 0x24) & 3) == 0) {
    func_0x0001081fdeac(param_5,param_5 + 0x28,(ulong)*(uint *)(param_5 + 0x18) << 1,3,&uStack_180);
    func_0x0001083a8574();
  }
  else {
    alStack_168[0] = 0;
    iStack_60 = 0;
    FUN_108183664(alStack_168,*(undefined4 *)(param_5 + 0x18));
    lVar11 = param_5 + 0x28;
    FUN_1081836dc(param_5,lVar11,*(undefined4 *)(param_5 + 0x18),alStack_168[0],0);
    uVar8 = (ulong)*(byte *)(param_5 + 0x24) & 3;
    iVar7 = (int)uVar8;
    if (iVar7 == 3) {
      lVar12 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      FUN_1083a84f8(*(undefined4 *)(param_5 + 0x18));
      uVar5 = extraout_x8;
      for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
        if ((long)iStack_60 <= (long)uVar8) {
LAB_1083a7c80:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1083a7c84);
          (*pcVar2)();
        }
        FUN_1083a7ca8(lVar11 + extraout_x9 + lVar12,alStack_168[0] + lVar12);
        func_0x0001083a8528();
        uVar5 = (ulong)*(uint *)(param_5 + 0x18);
        lVar12 = lVar12 + 0x10;
      }
    }
    else {
      lVar12 = 0;
      uVar5 = 0;
      auStack_194[0] = 0;
      uVar6 = (ulong)*(uint *)(param_5 + 0x18);
      puVar10 = (undefined4 *)(lVar11 + (uVar6 * 2 + 3 & 0x3fffffffc));
      bVar1 = (&UNK_10df1e9b6)[uVar8];
      uStack_180 = 0;
      uStack_178 = 0;
      puVar13 = puVar10 + 1;
      uVar8 = (ulong)bVar1;
      if (iVar7 != 2) {
        uVar8 = 0;
        puVar13 = auStack_194;
      }
      for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
        if ((long)iStack_60 <= (long)uVar5) goto LAB_1083a7c80;
        FUN_108183110(*puVar10,*puVar13,alStack_168[0] + lVar12);
        func_0x0001083a8528();
        uVar6 = (ulong)*(uint *)(param_5 + 0x18);
        lVar12 = lVar12 + 0x10;
        puVar10 = puVar10 + bVar1;
        puVar13 = puVar13 + uVar8;
      }
    }
    func_0x0001083a8574();
    FUN_1081856f4(alStack_168);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pauVar4 = (undefined1 (*) [16])alStack_168;
  FUN_1081856f4();
  func_0x0001083a8594();
  pcStack_1b8 = FUN_1083a7ca8;
  auVar15 = *pauVar4;
  fStack_1e4 = -auVar15._4_4_;
  uStack_1e8 = auVar15._0_4_;
  auVar15 = NEON_rev64(auVar15,4);
  auVar15 = NEON_ext(auVar15,auVar15,0xc,1);
  uStack_1d8 = auVar15._8_8_;
  uStack_1e0 = auVar15._0_8_;
  uStack_1d0 = 0;
  uStack_1c8 = 0xc03f800000;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x000108142084(&uStack_1e8);
  return;
}



/* Entry: 1083a7ea8; end: 1083a7f13;  */

void FUN_1083a7ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)((long)param_5 + 0x2c) == '\x01') {
    if ((*(byte *)(*param_5 + param_5[6] + 0x24) & 3) == 0) {
      FUN_1083a7aa8();
    }
    else {
      FUN_1083a7cf4();
    }
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
    func_0x00010838ed50(param_5 + 3,&uStack_30);
    *(undefined1 *)((long)param_5 + 0x2c) = 0;
  }
  return;
}



/* Entry: 1083a7f14; end: 1083a7f57;  */

void FUN_1083a7f14(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar3 = param_1[2];
  uVar1 = uVar3 + param_2;
  if ((ulong)param_1[1] < uVar1 || uVar1 < uVar3) {
    uVar6 = uVar3;
    if (*(int *)(param_1 + 5) == 0) {
      uVar6 = 0x28;
      param_1[2] = 0x28;
    }
    uVar2 = uVar6 + param_2;
    param_1[1] = uVar2;
    if (uVar2 < uVar6 || uVar1 < uVar3) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *param_1;
      *param_1 = 0;
      FUN_1084107a4();
    }
    uVar5 = *param_1;
    *param_1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(uVar5);
    return;
  }
  return;
}



/* Entry: 1083a7f58; end: 1083a7f8b;  */

void FUN_1083a7f58(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    FUN_1084107a4();
  }
  uVar2 = *param_1;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar2);
  return;
}



/* Entry: 1083a7f8c; end: 1083a824b;  */

void FUN_1083a7f8c(float param_1,long *param_2,long *param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  char cStack_62;
  char cStack_61;
  
  iVar12 = (int)param_6;
  uVar11 = (uint)param_5;
  if (((int)uVar11 < 1) || (iVar12 < 0)) {
LAB_1083a80e8:
    param_2[10] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
  }
  else {
    uVar14 = (uint)param_4;
    if ((iVar12 == 0) && (param_2[6] != 0)) {
      lVar13 = *param_2 + param_2[6];
      lVar8 = lVar13;
      FUN_1083a78ac();
      if ((((((int)lVar8 != 0) || ((*(byte *)(lVar13 + 0x24) & 3) != uVar14)) ||
           (lVar8 = lVar13, FUN_108350260(lVar13,param_3), (int)lVar8 == 0)) ||
          (uVar9 = (ulong)(*(uint *)(lVar13 + 0x18) + uVar11),
          CARRY4(*(uint *)(lVar13 + 0x18),uVar11))) ||
         ((uVar14 != 2 && ((uVar14 != 1 || (*(float *)(lVar13 + 0x20) != param_1))))))
      goto LAB_1083a7fdc;
      cStack_61 = '\x01';
      func_0x0001083a8544();
      uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
      func_0x0001083a8544();
      if (cStack_61 != '\x01') goto LAB_1083a7fdc;
      FUN_1083a7f14(param_2,uVar9 - uVar10);
      lVar8 = *param_2 + param_2[6];
      uVar14 = *(uint *)(lVar8 + 0x18);
      lVar13 = lVar8 + 0x28;
      *(uint *)(lVar8 + 0x18) = uVar14 + uVar11;
      lVar2 = lVar13 + ((ulong)(uVar14 + uVar11) * 2 + 3 & 0x3fffffffc);
      _memmove(lVar2,lVar13 + ((ulong)uVar14 * 2 + 3 & 0x3fffffffc),
               (ulong)uVar14 * (ulong)(byte)(&UNK_10df1e9b6)[(ulong)*(uint *)(lVar8 + 0x24) & 3] * 4
              );
      bVar3 = (&UNK_10df1e9b6)[param_4 & 0xffffffff];
      param_2[7] = lVar13 + (ulong)uVar14 * 2;
      param_2[8] = lVar2 + (ulong)(uVar14 * bVar3) * 4;
      param_2[2] = param_2[2] + (uVar9 - uVar10);
    }
    else {
LAB_1083a7fdc:
      FUN_1083a7ea8(param_2);
      cStack_62 = '\x01';
      uVar9 = param_5;
      FUN_1083a7758(param_5,param_6,param_4,&cStack_62);
      if (cStack_62 != '\x01') goto LAB_1083a80e8;
      FUN_1083a7f14(param_2,uVar9);
      plVar7 = (long *)(*param_2 + param_2[2]);
      lVar13 = *param_3;
      if (lVar13 != 0) {
        piVar1 = (int *)(lVar13 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *plVar7 = lVar13;
      lVar13 = param_3[1];
      *(undefined8 *)((long)plVar7 + 0xf) = *(undefined8 *)((long)param_3 + 0xf);
      plVar7[1] = lVar13;
      *(uint *)(plVar7 + 3) = uVar11;
      *(int *)((long)plVar7 + 0x1c) =
           CONCAT13(in_register_00005003,
                    CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
      *(float *)(plVar7 + 4) = param_1;
      *(uint *)((long)plVar7 + 0x24) = uVar14;
      if (iVar12 != 0) {
        *(uint *)((long)plVar7 + 0x24) = uVar14 | 8;
        plVar6 = plVar7;
        FUN_1083a78d4();
        *(int *)plVar6 = iVar12;
        param_5 = (ulong)*(uint *)(plVar7 + 3);
      }
      param_2[7] = (long)(plVar7 + 5);
      param_2[8] = (long)(plVar7 + 5) + ((param_5 & 0xffffffff) * 2 + 3 & 0x3fffffffc);
      plVar6 = plVar7;
      FUN_1083a824c();
      param_2[9] = (long)plVar6;
      FUN_1083a827c();
      param_2[10] = (long)plVar7;
      param_2[6] = param_2[2];
      param_2[2] = param_2[2] + uVar9;
      *(int *)(param_2 + 5) = (int)param_2[5] + 1;
    }
    if ((*(byte *)((long)param_2 + 0x2c) & 1) == 0) {
      if (param_7 == 0) {
        *(undefined1 *)((long)param_2 + 0x2c) = 1;
      }
      else {
        func_0x00010838ed50(param_2 + 3,param_7);
      }
    }
  }
  return;
}



/* Entry: 1083a824c; end: 1083a827b;  */

long FUN_1083a824c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x24) >> 3 & 1) == 0) {
    return 0;
  }
  lVar1 = param_1;
  FUN_1083a827c();
  return lVar1 + (ulong)*(uint *)(param_1 + 0x18) * 4;
}



/* Entry: 1083a827c; end: 1083a829f;  */

long FUN_1083a827c(long param_1)

{
  if ((*(byte *)(param_1 + 0x24) >> 3 & 1) == 0) {
    return 0;
  }
  FUN_1083a78d4();
  return param_1 + 4;
}



/* Entry: 1083a82a0; end: 1083a8323;  */

long FUN_1083a82a0(void)

{
  long unaff_x19;
  
  func_0x0001083a8508();
  FUN_1083a7f8c();
  return unaff_x19 + 0x38;
}



/* Entry: 1083a8324; end: 1083a8493;  */

void FUN_1083a8324(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x9;
  long lStack_48;
  
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 4);
  lVar1 = param_1 + 0x28;
  while (lStack_48 = lVar1, lVar1 != 0) {
    func_0x0001083a8554();
    lVar2 = lVar1;
    FUN_1083a78ac();
    func_0x0001083a8554();
    if ((int)lVar2 != 0) {
      (**(code **)(*param_2 + 0x38))(param_2,lVar2);
    }
    (**(code **)(*param_2 + 0x80))(param_2,lVar1 + 0x1c);
    FUN_108351014(lVar1,param_2);
    func_0x0001083a8564();
    (*extraout_x8)();
    func_0x0001083a84f8(*(undefined4 *)(lVar1 + 0x18));
    (**(code **)(*param_2 + 0x18))
              (param_2,lVar1 + 0x28 + extraout_x9,
               (extraout_x8_00 & 0xffffffff) *
               (ulong)(byte)(&UNK_10df1e9b6)[(ulong)*(uint *)(lVar1 + 0x24) & 3] * 4);
    if ((int)lVar2 != 0) {
      FUN_1083a827c(lVar1);
      func_0x0001083a8564();
      (*extraout_x8_01)();
      FUN_1083a824c(lVar1);
      FUN_1083a78ac(lVar1);
      func_0x0001083a8564();
      (*extraout_x8_02)();
    }
    FUN_1083a79c8(&lStack_48);
    lVar1 = lStack_48;
  }
                    /* WARNING: Could not recover jumptable at 0x0001083a8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,0);
  return;
}



/* Entry: 1083a8494; end: 1083a84f7;  */

bool FUN_1083a8494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *puVar2;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 3);
      param_2[2] = puVar2 + 5;
    }
    if ((*(byte *)((long)puVar2 + 0x24) >> 2 & 1) == 0) {
      puVar1 = puVar2;
      func_0x0001083a7854();
    }
    else {
      puVar1 = (undefined8 *)0x0;
    }
    *param_1 = puVar1;
  }
  return puVar2 != (undefined8 *)0x0;
}



/* Entry: 1083a84f8; end: 1083a85a3;  */

void FUN_1083a84f8(void)

{
  return;
}



/* Entry: 1083a85a4; end: 1083a868b;  */

void FUN_1083a85a4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uStack_28;
  
  if ((bRam00000001138270f8 & 1) == 0) {
    iVar3 = 0x138270f8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001138270d0 = 0x100000001;
      do {
        iRam00000001138270d8 = iRam0000000113255f5c;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x113255f5c,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          iRam0000000113255f5c = iRam0000000113255f5c + 1;
        }
      } while (cVar1 != '\0');
      uRam00000001138270dc = 0x50190;
      uRam00000001138270e0 = 0;
      uRam00000001138270e8 = 0;
      uRam00000001138270f0 = 0x100;
      ppuRam00000001138270c8 = &PTR_FUN_110a40770;
      ___cxa_guard_release(0x1138270f8);
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1138270d0,0x10);
    if (bVar2) {
      uRam00000001138270d0 = CONCAT44(uRam00000001138270d0._4_4_,(int)uRam00000001138270d0 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_28 = 0;
  *param_1 = 0x1138270c8;
  FUN_1083a8bdc(&uStack_28);
  return;
}



/* Entry: 1083a868c; end: 1083a871f;  */

void FUN_1083a868c(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0xe0))(param_2,param_3,0,0xffffffff,0);
  if (plVar1 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_1083464d4(param_1);
    (**(code **)(*param_2 + 0xe0))(param_2,param_3,0,plVar1,*(undefined8 *)(*param_1 + 0x18));
  }
  return;
}



/* Entry: 1083a8720; end: 1083a873f;  */

void FUN_1083a8720(long *param_1,long param_2,int param_3,long param_4)

{
  if (((param_2 != 0) && (0 < param_3)) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001083a8738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))();
    return;
  }
  return;
}



/* Entry: 1083a8740; end: 1083a877b;  */

undefined2 FUN_1083a8740(long *param_1,undefined4 param_2)

{
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  uStack_16 = 0;
  uStack_14 = param_2;
  (**(code **)(*param_1 + 0x98))(param_1,&uStack_14,1,&uStack_16);
  return uStack_16;
}



/* Entry: 1083a877c; end: 1083a88f7;  */

ulong FUN_1083a877c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                   int param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puStack_460;
  undefined4 auStack_458 [256];
  ulong uStack_58;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_2;
    FUN_108350b78(param_2,param_3,param_4);
    if ((param_5 != 0) && ((int)uVar5 <= param_6)) {
      iVar6 = (int)param_4;
      if (iVar6 == 3) {
        _memcpy(param_5,param_2,(long)((int)uVar5 << 1));
      }
      else {
        puStack_460 = auStack_458;
        if (iVar6 != 2) {
          uStack_58 = param_2;
          if (iVar6 == 1) {
            uVar3 = uVar5;
            func_0x0001083a8d94();
            uVar2 = param_2 + (param_3 & 0xfffffffffffffffe);
            puVar7 = puStack_460;
            while (param_2 = uVar3, uStack_58 < uVar2) {
              puVar4 = &uStack_58;
              FUN_1084105e0(puVar4,uVar2);
              *puVar7 = (int)puVar4;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            if (iVar6 != 0) {
              FUN_10841076c(&UNK_10f490739);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1083a88e8);
              (*pcVar1)();
            }
            uVar2 = uVar5;
            func_0x0001083a8d94();
            param_3 = param_2 + param_3;
            puVar7 = puStack_460;
            while (param_2 = uVar2, uStack_58 < param_3) {
              puVar4 = &uStack_58;
              FUN_10841051c(puVar4,param_3);
              *puVar7 = (int)puVar4;
              puVar7 = puVar7 + 1;
            }
          }
        }
        FUN_1083a8720(param_1,param_2,uVar5,param_5);
        func_0x00010812f150(&puStack_460);
      }
    }
  }
  return uVar5;
}



/* Entry: 1083a88f8; end: 1083a891b;  */

undefined8 FUN_1083a88f8(void)

{
  return 0;
}



/* Entry: 1083a891c; end: 1083a89b3;  */

undefined4 FUN_1083a891c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cStack_31;
  
  plVar1 = param_1 + 5;
  cStack_31 = (char)*plVar1;
  if (cStack_31 != '\0') goto LAB_1083a8990;
  plVar2 = plVar1;
  FUN_10825bc50(plVar1,&cStack_31,1,0,0);
  if ((int)plVar2 == 0) {
    do {
      cStack_31 = (char)*plVar1;
LAB_1083a8990:
    } while (cStack_31 != '\x02');
  }
  else {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xf0))(param_1,param_1 + 3);
    if (((ulong)plVar2 & 1) == 0) {
      param_1[3] = 0;
      param_1[4] = 0;
    }
    *(char *)plVar1 = '\x02';
  }
  return (int)param_1[3];
}



/* Entry: 1083a89b4; end: 1083a8bd3;  */

bool FUN_1083a89b4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  ulong uVar5;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  undefined8 uStack_160;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [40];
  undefined4 uStack_f0;
  undefined1 uStack_e7;
  undefined1 uStack_e5;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  undefined4 uStack_d0;
  byte bStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108350220(auStack_d8);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e0 = param_1;
  FUN_1083502dc(auStack_d8,&plStack_e0);
  func_0x0001081298a0(&plStack_e0);
  uStack_d0 = 0x45000000;
  bStack_c4 = bStack_c4 | 8;
  uStack_f0 = 0xff000000;
  uStack_e7 = 0;
  uStack_e5 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_84 = 0x3f800000;
  uStack_7c = 0x40800000;
  uStack_180 = 0;
  uStack_178 = 0x3f000000;
  FUN_108397184(auStack_d8,&uStack_c0,&uStack_180,0,0x113254e20,auStack_118,&uStack_128);
  FUN_108375e94(&uStack_c0);
  uStack_c0 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  FUN_108397500(auStack_118,&uStack_138,&uStack_c0);
  (**(code **)(*param_1 + 0x38))(&plStack_140,param_1,&uStack_138,uStack_c0);
  (**(code **)(*plStack_140 + 0x30))(plStack_140,&uStack_180);
  plVar1 = plStack_140;
  uVar5 = uStack_180;
  if (((uint)uStack_180 >> 4 & 1) == 0) {
    fVar4 = uStack_180._4_4_ * 0.00048828125;
    fStack_170 = fStack_170 * 0.00048828125;
    param_2[1] = CONCAT17((char)((uint)fStack_170 >> 0x18),
                          CONCAT16((char)((uint)fStack_170 >> 0x10),
                                   CONCAT15((char)((uint)fStack_170 >> 8),
                                            CONCAT14(SUB41(fStack_170,0),
                                                     (float)((ulong)uStack_160 >> 0x20) *
                                                     0.00048828125))));
    *param_2 = CONCAT17((char)((uint)fVar4 >> 0x18),
                        CONCAT16((char)((uint)fVar4 >> 0x10),
                                 CONCAT15((char)((uint)fVar4 >> 8),
                                          CONCAT14(SUB41(fVar4,0),(float)uStack_160 * 0.00048828125)
                                         )));
  }
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_1083a8d78();
  }
  FUN_1083469c0(&uStack_c0);
  func_0x0001081298a0(auStack_d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (uVar5 & 0x10) == 0;
  }
  ___stack_chk_fail();
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_1083a8d78();
  }
  FUN_1083469c0(&uStack_c0);
  func_0x0001081298a0(auStack_d8);
  do {
    func_0x0001083a8d8c();
  } while( true );
}



/* Entry: 1083a8bd4; end: 1083a8bdb;  */

undefined8 FUN_1083a8bd4(void)

{
  return 0;
}



/* Entry: 1083a8bdc; end: 1083a8c27;  */

long * FUN_1083a8bdc(long *param_1)

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



/* Entry: 1083a8c28; end: 1083a8c2f;  */

void FUN_1083a8c28(void)

{
  return;
}



/* Entry: 1083a8c30; end: 1083a8c6f;  */

void FUN_1083a8c30(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_18;
  
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
  uStack_18 = 0;
  *param_1 = param_2;
  FUN_1083a8bdc(&uStack_18);
  return;
}



/* Entry: 1083a8c70; end: 1083a8cd7;  */

void FUN_1083a8c70(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  FUN_1083955f4();
  *puVar1 = &PTR_FUN_110a3fd78;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083a8cd8; end: 1083a8cfb;  */

void FUN_1083a8cd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_DAT_110a40898;
  return;
}



/* Entry: 1083a8cfc; end: 1083a8d17;  */

undefined8 FUN_1083a8cfc(void)

{
  return 0;
}



/* Entry: 1083a8d18; end: 1083a8d77;  */

void FUN_1083a8d18(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  if (param_2 < (long *)0x101) {
    plVar1 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar1 = param_1 + 1;
    }
  }
  else {
    FUN_10840ffdc(param_2,4);
    plVar1 = param_2;
  }
  *param_1 = (long)plVar1;
  return;
}



/* Entry: 1083a8d78; end: 1083a8da7;  */

void FUN_1083a8d78(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083a8d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083a8da8; end: 1083a8de7;  */

long * FUN_1083a8da8(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  if (0x3ff < (int)param_1[1]) {
    FUN_1083a8de8(param_1,0x100);
  }
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    lVar4 = *param_2;
    plVar5 = (long *)(*param_1 + (long)iVar3 * 8);
    *param_2 = 0;
    *plVar5 = lVar4;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1083a8fd0(0x3ff8000000000000,param_1,1);
    lVar4 = *param_2;
    plVar5 = plVar1 + (int)param_1[1];
    *param_2 = 0;
    *plVar5 = lVar4;
    FUN_1083a8ff4(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return plVar5;
}



/* Entry: 1083a8de8; end: 1083a8efb;  */

void FUN_1083a8de8(long *param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = (int)param_1[1];
  while( true ) {
    if (iVar3 <= (int)uVar2) {
      return;
    }
    if ((int)param_1[1] <= (int)uVar2) break;
    if (*(int *)(*(long *)(*param_1 + uVar2 * 8) + 8) == 1) {
      FUN_1083a8f84(param_1,uVar2);
      iVar3 = iVar3 + -1;
      uVar2 = uVar2 & 0xffffffff;
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return;
      }
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083a8e64);
  (*pcVar1)();
}



/* Entry: 1083a8efc; end: 1083a8f83;  */

void FUN_1083a8efc(long *param_1,long *param_2,code *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_2;
  lVar6 = (long)(int)param_2[1] << 3;
  do {
    if (lVar6 == 0) {
      lVar6 = 0;
LAB_1083a8f6c:
      *param_1 = lVar6;
      return;
    }
    lVar4 = *plVar5;
    (*param_3)(lVar4,param_4);
    if ((int)lVar4 != 0) {
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_1083a8f6c;
    }
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -8;
  } while( true );
}



/* Entry: 1083a8f84; end: 1083a8fcf;  */

void FUN_1083a8f84(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)(int)param_1[1] + -1;
  func_0x0001081298a0(*param_1 + (long)param_2 * 8);
  iVar1 = (int)lVar2;
  if (param_2 != iVar1) {
    *(undefined8 *)(*param_1 + (long)param_2 * 8) = *(undefined8 *)(*param_1 + lVar2 * 8);
  }
  *(int *)(param_1 + 1) = iVar1;
  return;
}



/* Entry: 1083a8fd0; end: 1083a8ff3;  */

void FUN_1083a8fd0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_1083a8ff4;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 1) != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1083a8ff4; end: 1083a905f;  */

void FUN_1083a8ff4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1083a9060; end: 1083a908f;  */

void FUN_1083a9060(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083a9090; end: 1083a9267;  */

void FUN_1083a9090(void)

{
  return;
}



/* Entry: 1083a9268; end: 1083a92bb;  */

undefined8 *
FUN_1083a9268(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             uint param_5)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  byte bStack_23;
  
  *param_1 = 0;
  param_1[1] = 0;
  bStack_24 = (byte)param_5 & 1;
  bStack_23 = (byte)(param_5 >> 1) & 1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_1083a92bc(param_1,&uStack_30);
  return param_1;
}



/* Entry: 1083a92bc; end: 1083a937f;  */

void FUN_1083a92bc(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *apuStack_68 [2];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_1083a9850(apuStack_68);
  if (lStack_58 != 0) {
    puVar4 = apuStack_68[0];
    __Znwm();
    if (lStack_38 != 0) {
      __Znam();
      func_0x0001073c8290(param_1 + 1,lStack_38);
    }
    *puVar4 = 1;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    func_0x0001082f64d0(param_1,puVar4);
    puVar1 = (undefined4 *)0x0;
    if (lStack_58 != 0) {
      puVar1 = puVar4 + 0x12;
    }
    lStack_58 = (long)(puVar4 + 0x12) + lStack_58;
    lVar5 = *param_1;
    lVar3 = 0;
    if (lStack_50 != 0) {
      lVar3 = lStack_58;
    }
    lStack_58 = lStack_58 + lStack_50;
    lVar2 = 0;
    if (lStack_48 != 0) {
      lVar2 = lStack_58;
    }
    *(long *)(lVar5 + 0x18) = lVar3;
    *(long *)(lVar5 + 0x20) = lVar2;
    lVar3 = 0;
    if (lStack_40 != 0) {
      lVar3 = lStack_58 + lStack_48;
    }
    *(undefined4 **)(lVar5 + 8) = puVar1;
    *(long *)(lVar5 + 0x10) = lVar3;
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_2 + 1);
    *(undefined4 *)(lVar5 + 0x40) = *param_2;
  }
  return;
}



/* Entry: 1083a9380; end: 1083a93b7;  */

undefined8 * FUN_1083a9380(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1083a92bc();
  return param_1;
}



/* Entry: 1083a93b8; end: 1083a94db;  */

void FUN_1083a93b8(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  
  lVar7 = *param_2;
  lVar8 = 0;
  if (lVar7 != 0) {
    FUN_10838eb84(lVar7 + 0x28,*(undefined8 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x38));
    lVar8 = *param_2;
    if (*(int *)(lVar8 + 0x40) == 2) {
      puVar9 = (undefined2 *)param_2[1];
      if (puVar9 == (undefined2 *)0x0) {
        uVar11 = 0;
        iVar3 = *(int *)(lVar8 + 0x38);
        lVar7 = 2;
        iVar2 = iVar3;
        if (iVar3 < 3) {
          iVar2 = 2;
        }
        while (iVar2 - 2 != uVar11) {
          puVar9 = (undefined2 *)(*(long *)(lVar8 + 0x10) + lVar7);
          puVar9[-1] = 0;
          sVar6 = (short)uVar11;
          uVar11 = uVar11 + 1;
          *puVar9 = (short)uVar11;
          puVar9[1] = sVar6 + 2;
          lVar7 = lVar7 + 6;
        }
      }
      else {
        lVar7 = 0;
        iVar3 = *(int *)(lVar8 + 0x3c);
        iVar2 = iVar3;
        if (iVar3 < 3) {
          iVar2 = 2;
        }
        puVar10 = puVar9 + 2;
        for (; (ulong)(iVar2 - 2) * 6 - lVar7 != 0; lVar7 = lVar7 + 6) {
          puVar1 = (undefined2 *)(*(long *)(lVar8 + 0x10) + lVar7);
          *puVar1 = *puVar9;
          puVar1[1] = puVar10[-1];
          puVar1[2] = *puVar10;
          puVar10 = puVar10 + 1;
        }
      }
      *(int *)(lVar8 + 0x3c) = iVar3 * 3 + -6;
      *(undefined4 *)(lVar8 + 0x40) = 0;
    }
    do {
      iVar2 = iRam0000000113255f60;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x113255f60,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        iRam0000000113255f60 = iRam0000000113255f60 + 1;
      }
    } while ((cVar4 != '\0') || (iVar2 == 0));
    *(int *)(lVar8 + 4) = iVar2;
    *param_2 = 0;
  }
  *param_1 = lVar8;
  return;
}



/* Entry: 1083a94dc; end: 1083a9743;  */

void FUN_1083a94dc(undefined8 *param_1,int param_2,int param_3,undefined8 param_4,long param_5,
                  long param_6,undefined4 param_7,long param_8)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ulong *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  
  uStack_54 = param_5 != 0;
  uStack_53 = param_6 != 0;
  iStack_60 = param_2;
  iStack_5c = param_3;
  uStack_58 = param_7;
  FUN_1083a9380(&lStack_70,&iStack_60);
  if (lStack_70 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1083a9850(auStack_a8,&iStack_60);
    if (lStack_70 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lStack_70 + 8);
    }
    if (lStack_98 != 0) {
      _memcpy(uVar6,param_4);
    }
    if (lStack_70 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lStack_70 + 0x18);
    }
    if (lStack_90 != 0) {
      _memcpy(uVar6,param_5);
    }
    if (lStack_70 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lStack_70 + 0x20);
    }
    if (lStack_88 != 0) {
      _memcpy(uVar6,param_6);
    }
    lVar10 = 0;
    uVar8 = 0;
    puVar3 = &uStack_78;
    if (param_2 != 2) {
      puVar3 = &uStack_80;
    }
    uVar9 = *puVar3 >> 1;
    uVar5 = param_3 - 1;
    uVar7 = (ushort)uVar5;
    for (; uVar8 + 8 <= uVar9; uVar8 = uVar8 + 8) {
      lVar11 = lStack_68;
      if (lStack_68 == 0) {
        lVar11 = *(long *)(lStack_70 + 0x10);
      }
      uVar12 = *(ulong *)(param_8 + lVar10);
      uVar13 = ((ulong *)(param_8 + lVar10))[1];
      sVar16 = -(ushort)((ushort)uVar12 <= uVar7);
      sVar17 = -(ushort)((ushort)(uVar12 >> 0x10) <= uVar7);
      sVar18 = -(ushort)((ushort)(uVar12 >> 0x20) <= uVar7);
      sVar19 = -(ushort)((ushort)(uVar12 >> 0x30) <= uVar7);
      sVar20 = -(ushort)((ushort)uVar13 <= uVar7);
      sVar21 = -(ushort)((ushort)(uVar13 >> 0x10) <= uVar7);
      sVar22 = -(ushort)((ushort)(uVar13 >> 0x20) <= uVar7);
      sVar23 = -(ushort)((ushort)(uVar13 >> 0x30) <= uVar7);
      bVar14 = (byte)uVar5;
      bVar15 = (byte)(uVar5 >> 8);
      uVar13 = CONCAT26(sVar23,CONCAT24(sVar22,CONCAT22(sVar21,sVar20))) & uVar13;
      uVar12 = CONCAT26(sVar19,CONCAT24(sVar18,CONCAT22(sVar17,sVar16))) & uVar12;
      *(undefined8 *)(lVar11 + lVar10) =
           CONCAT17((byte)(uVar12 >> 0x38) | bVar15 & ~(byte)((ushort)sVar19 >> 8),
                    CONCAT16((byte)(uVar12 >> 0x30) | bVar14 & ~(byte)sVar19,
                             CONCAT15((byte)(uVar12 >> 0x28) | bVar15 & ~(byte)((ushort)sVar18 >> 8)
                                      ,CONCAT14((byte)(uVar12 >> 0x20) | bVar14 & ~(byte)sVar18,
                                                CONCAT13((byte)(uVar12 >> 0x18) |
                                                         bVar15 & ~(byte)((ushort)sVar17 >> 8),
                                                         CONCAT12((byte)(uVar12 >> 0x10) |
                                                                  bVar14 & ~(byte)sVar17,
                                                                  CONCAT11((byte)(uVar12 >> 8) |
                                                                           bVar15 & ~(byte)((ushort)
                                                  sVar16 >> 8),(byte)uVar12 | bVar14 & ~(byte)sVar16
                                                  )))))));
      ((undefined8 *)(lVar11 + lVar10))[1] =
           CONCAT17((byte)(uVar13 >> 0x38) | bVar15 & ~(byte)((ushort)sVar23 >> 8),
                    CONCAT16((byte)(uVar13 >> 0x30) | bVar14 & ~(byte)sVar23,
                             CONCAT15((byte)(uVar13 >> 0x28) | bVar15 & ~(byte)((ushort)sVar22 >> 8)
                                      ,CONCAT14((byte)(uVar13 >> 0x20) | bVar14 & ~(byte)sVar22,
                                                CONCAT13((byte)(uVar13 >> 0x18) |
                                                         bVar15 & ~(byte)((ushort)sVar21 >> 8),
                                                         CONCAT12((byte)(uVar13 >> 0x10) |
                                                                  bVar14 & ~(byte)sVar21,
                                                                  CONCAT11((byte)(uVar13 >> 8) |
                                                                           bVar15 & ~(byte)((ushort)
                                                  sVar20 >> 8),(byte)uVar13 | bVar14 & ~(byte)sVar20
                                                  )))))));
      lVar10 = lVar10 + 0x10;
    }
    if (uVar8 + 4 <= uVar9) {
      uVar6 = NEON_umin(CONCAT26(uVar7,CONCAT24(uVar7,CONCAT22(uVar7,uVar7))),
                        *(undefined8 *)(param_8 + lVar10),2);
      lVar11 = lStack_68;
      if (lStack_68 == 0) {
        lVar11 = *(long *)(lStack_70 + 0x10);
      }
      *(undefined8 *)(lVar11 + lVar10) = uVar6;
      uVar8 = uVar8 + 4;
    }
    if (uVar8 + 2 <= uVar9) {
      puVar1 = (ushort *)(param_8 + uVar8 * 2);
      uVar6 = NEON_umin(CONCAT44(uVar5,uVar5) & 0xffff0000ffff,
                        (ulong)CONCAT24(puVar1[1],(uint)*puVar1),4);
      lVar10 = lStack_68;
      if (lStack_68 == 0) {
        lVar10 = *(long *)(lStack_70 + 0x10);
      }
      puVar2 = (undefined2 *)(lVar10 + uVar8 * 2);
      *puVar2 = (short)uVar6;
      puVar2[1] = (short)((ulong)uVar6 >> 0x20);
      uVar8 = uVar8 + 2;
    }
    if (uVar8 < uVar9) {
      uVar4 = *(ushort *)(param_8 + uVar8 * 2);
      if ((uint)uVar4 <= (uVar5 & 0xffff)) {
        uVar7 = uVar4;
      }
      if (lStack_68 == 0) {
        lStack_68 = *(long *)(lStack_70 + 0x10);
      }
      *(ushort *)(lStack_68 + uVar8 * 2) = uVar7;
    }
    FUN_1083a93b8(param_1,&lStack_70);
  }
  FUN_10834845c(&lStack_70);
  return;
}



/* Entry: 1083a9744; end: 1083a9793;  */

void FUN_1083a9744(undefined8 param_1,long param_2)

{
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_20 = *(undefined4 *)(param_2 + 0x40);
  uStack_1c = *(undefined8 *)(param_2 + 0x38);
  uStack_14 = *(long *)(param_2 + 0x18) != 0;
  uStack_13 = *(long *)(param_2 + 0x20) != 0;
  FUN_1083a9850(param_1,&uStack_20);
  return;
}



/* Entry: 1083a9794; end: 1083a984f;  */

void FUN_1083a9794(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_68 [56];
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x18) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x40) | 0x100;
  }
  if (*(long *)(lVar2 + 0x20) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  FUN_1083a9744(auStack_68);
  (**(code **)(*param_2 + 0x48))(param_2,uVar1);
  func_0x0001083a99b4();
  func_0x0001083a99b4();
  func_0x0001083a997c();
  func_0x0001083a997c();
  func_0x0001083a997c();
  func_0x0001083a997c();
  return;
}


