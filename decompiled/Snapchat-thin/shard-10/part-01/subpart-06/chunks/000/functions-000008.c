/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077ffc34; end: 1077ffc7f;  */

bool FUN_1077ffc34(float *param_1,float *param_2)

{
  if (((*param_2 <= param_1[2]) && (*param_1 <= param_2[2])) && (param_2[1] <= param_1[3])) {
    return param_2[3] < param_1[1];
  }
  return true;
}



/* Entry: 1077ffe04; end: 1077ffe57;  */

undefined4 * FUN_1077ffe04(undefined4 *param_1)

{
  func_0x000107809e90();
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  func_0x000107809e64();
  return param_1;
}



/* Entry: 107801400; end: 107801437;  */

void FUN_107801400(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  for (lVar4 = 8; lVar3 * -0x20 + lVar4 != 8; lVar4 = lVar4 + 0x20) {
    puVar1 = (undefined8 *)((long)param_2 + lVar4);
    puVar2 = (undefined8 *)((long)param_1 + lVar4);
    uVar5 = *puVar1;
    uVar7 = puVar1[3];
    uVar6 = puVar1[2];
    puVar2[1] = puVar1[1];
    *puVar2 = uVar5;
    puVar2[3] = uVar7;
    puVar2[2] = uVar6;
  }
  return;
}



/* Entry: 1078022b8; end: 107802383;  */

undefined8 FUN_1078022b8(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107809198();
  uVar1 = *(float *)(param_2 + 8) < *(float *)(param_1 + 8);
  if ((bool)uVar1) {
    func_0x00010780a0e8();
    if (!(bool)uVar1) {
      func_0x000107809944();
      func_0x0001078096b8(*(undefined4 *)(unaff_x20 + 8));
      if (!(bool)uVar1) {
        return 1;
      }
    }
  }
  else {
    uVar1 = *(float *)(param_3 + 8) < *(float *)(param_2 + 8);
    if (!(bool)uVar1) {
      return 0;
    }
    func_0x000107808ee4();
    func_0x0001078096fc(*(undefined4 *)(unaff_x19 + 8));
    if (!(bool)uVar1) {
      return 1;
    }
    func_0x000107809cf8();
  }
  func_0x000107801244();
  return 1;
}



/* Entry: 107802d00; end: 107802dbf;  */

void FUN_107802d00(long param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar5;
  long extraout_x12;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if (1 < param_2) {
    uVar3 = param_2 - 2U >> 1;
    lVar4 = (long)param_3 - param_1 >> 5;
    cVar1 = SBORROW8(uVar3,lVar4);
    cVar2 = (long)(uVar3 - lVar4) < 0;
    if (lVar4 <= (long)uVar3) {
      func_0x0001078097f8();
      lVar4 = extraout_x10;
      if ((cVar2 != cVar1) && (*(float *)(extraout_x10 + 4) < *(float *)(extraout_x10 + 0x24))) {
        lVar4 = extraout_x10 + 0x20;
      }
      fVar6 = (float)param_3[1];
      cVar2 = NAN(*(float *)(lVar4 + 4)) || NAN(fVar6);
      cVar1 = *(float *)(lVar4 + 4) < fVar6;
      if (!(bool)cVar1) {
        uVar9 = *param_3;
        uVar8 = *(undefined8 *)(param_3 + 4);
        uVar7 = *(undefined8 *)(param_3 + 2);
        do {
          func_0x00010780a1f4();
          uVar5 = extraout_x11;
          if (cVar1 != cVar2) break;
          func_0x00010780966c();
          lVar4 = param_1 + extraout_x10_00 * 0x20;
          if ((extraout_x12 + 2 < param_2) && (*(float *)(lVar4 + 4) < *(float *)(lVar4 + 0x24))) {
            lVar4 = lVar4 + 0x20;
          }
          cVar2 = NAN(*(float *)(lVar4 + 4)) || NAN(fVar6);
          cVar1 = *(float *)(lVar4 + 4) < fVar6;
          uVar5 = extraout_x11_00;
        } while (!(bool)cVar1);
        *param_3 = uVar9;
        param_3[1] = fVar6;
        *(undefined8 *)(param_3 + 4) = uVar8;
        *(undefined8 *)(param_3 + 2) = uVar7;
        *(undefined8 *)(param_3 + 6) = uVar5;
      }
    }
  }
  return;
}



/* Entry: 1078037e4; end: 10780385b;  */

void FUN_1078037e4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x00010780907c();
  func_0x00010780936c();
  func_0x000107809ec0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  func_0x0001078099b8();
  func_0x0001077ffe58();
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x48) = param_1;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  if ((*(long *)(unaff_x19 + 0x70) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
    func_0x000107809824();
    func_0x00010780a0b0();
  }
  return;
}



/* Entry: 107804dbc; end: 107805383;  */

/* WARNING: Possible PIC construction at 0x000107804e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107804e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107804e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107804e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107804e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107804e24) */
/* WARNING: Removing unreachable block (ram,0x000107804e1c) */
/* WARNING: Removing unreachable block (ram,0x000107804e14) */
/* WARNING: Removing unreachable block (ram,0x000107804e2c) */
/* WARNING: Removing unreachable block (ram,0x000107804e54) */
/* WARNING: Removing unreachable block (ram,0x000107804e64) */
/* WARNING: Removing unreachable block (ram,0x000107804e6c) */
/* WARNING: Removing unreachable block (ram,0x000107804e70) */
/* WARNING: Removing unreachable block (ram,0x000107804f80) */
/* WARNING: Removing unreachable block (ram,0x000107804fa0) */
/* WARNING: Removing unreachable block (ram,0x000107804fa4) */
/* WARNING: Removing unreachable block (ram,0x000107804fb0) */
/* WARNING: Removing unreachable block (ram,0x000107804fb8) */
/* WARNING: Removing unreachable block (ram,0x000107804fbc) */
/* WARNING: Removing unreachable block (ram,0x000107804f8c) */
/* WARNING: Removing unreachable block (ram,0x000107804f90) */
/* WARNING: Removing unreachable block (ram,0x000107804f94) */
/* WARNING: Removing unreachable block (ram,0x000107804f98) */
/* WARNING: Removing unreachable block (ram,0x000107804f9c) */
/* WARNING: Removing unreachable block (ram,0x000107804fc0) */
/* WARNING: Removing unreachable block (ram,0x000107804fcc) */
/* WARNING: Removing unreachable block (ram,0x000107804fd0) */
/* WARNING: Removing unreachable block (ram,0x000107804fd4) */
/* WARNING: Removing unreachable block (ram,0x000107804fd8) */
/* WARNING: Removing unreachable block (ram,0x000107804fdc) */
/* WARNING: Removing unreachable block (ram,0x000107805028) */
/* WARNING: Removing unreachable block (ram,0x000107804fe0) */
/* WARNING: Removing unreachable block (ram,0x000107805010) */
/* WARNING: Removing unreachable block (ram,0x000107805014) */
/* WARNING: Removing unreachable block (ram,0x000107805018) */
/* WARNING: Removing unreachable block (ram,0x00010780501c) */
/* WARNING: Removing unreachable block (ram,0x000107805020) */
/* WARNING: Removing unreachable block (ram,0x000107805024) */
/* WARNING: Removing unreachable block (ram,0x000107805030) */
/* WARNING: Removing unreachable block (ram,0x00010780503c) */
/* WARNING: Removing unreachable block (ram,0x00010780504c) */
/* WARNING: Removing unreachable block (ram,0x000107804e5c) */
/* WARNING: Removing unreachable block (ram,0x000107804e74) */
/* WARNING: Removing unreachable block (ram,0x000107804e7c) */
/* WARNING: Removing unreachable block (ram,0x000107804e88) */
/* WARNING: Removing unreachable block (ram,0x000107804e8c) */
/* WARNING: Removing unreachable block (ram,0x000107804e90) */
/* WARNING: Removing unreachable block (ram,0x000107804eb0) */
/* WARNING: Removing unreachable block (ram,0x000107804eb4) */
/* WARNING: Removing unreachable block (ram,0x000107804ebc) */
/* WARNING: Removing unreachable block (ram,0x000107804ec0) */
/* WARNING: Removing unreachable block (ram,0x000107804ec4) */
/* WARNING: Removing unreachable block (ram,0x000107804ea0) */
/* WARNING: Removing unreachable block (ram,0x000107804ea4) */
/* WARNING: Removing unreachable block (ram,0x000107804ea8) */
/* WARNING: Removing unreachable block (ram,0x000107804eac) */
/* WARNING: Removing unreachable block (ram,0x000107804ec8) */
/* WARNING: Removing unreachable block (ram,0x000107804ed0) */
/* WARNING: Removing unreachable block (ram,0x000107804f24) */
/* WARNING: Removing unreachable block (ram,0x000107804f2c) */
/* WARNING: Removing unreachable block (ram,0x000107804f3c) */
/* WARNING: Removing unreachable block (ram,0x000107804f58) */
/* WARNING: Removing unreachable block (ram,0x000107805068) */
/* WARNING: Removing unreachable block (ram,0x000107805070) */
/* WARNING: Removing unreachable block (ram,0x000107804f6c) */
/* WARNING: Removing unreachable block (ram,0x000107804f70) */
/* WARNING: Removing unreachable block (ram,0x000107804ed8) */
/* WARNING: Removing unreachable block (ram,0x000107804f08) */
/* WARNING: Removing unreachable block (ram,0x000107804f0c) */
/* WARNING: Removing unreachable block (ram,0x000107804f10) */
/* WARNING: Removing unreachable block (ram,0x000107804f14) */
/* WARNING: Removing unreachable block (ram,0x000107804f18) */
/* WARNING: Removing unreachable block (ram,0x000107804f1c) */
/* WARNING: Removing unreachable block (ram,0x000107804f20) */
/* WARNING: Removing unreachable block (ram,0x0001078051ec) */
/* WARNING: Removing unreachable block (ram,0x0001078051f0) */
/* WARNING: Removing unreachable block (ram,0x0001078051f8) */
/* WARNING: Removing unreachable block (ram,0x000107805214) */
/* WARNING: Removing unreachable block (ram,0x00010780523c) */
/* WARNING: Removing unreachable block (ram,0x000107805244) */
/* WARNING: Removing unreachable block (ram,0x000107805248) */
/* WARNING: Removing unreachable block (ram,0x00010780524c) */
/* WARNING: Removing unreachable block (ram,0x000107805254) */
/* WARNING: Removing unreachable block (ram,0x00010780526c) */
/* WARNING: Removing unreachable block (ram,0x000107805310) */
/* WARNING: Removing unreachable block (ram,0x000107805274) */
/* WARNING: Removing unreachable block (ram,0x0001078052a0) */
/* WARNING: Removing unreachable block (ram,0x0001078052b0) */
/* WARNING: Removing unreachable block (ram,0x0001078052b4) */
/* WARNING: Removing unreachable block (ram,0x0001078052b8) */
/* WARNING: Removing unreachable block (ram,0x0001078052c8) */
/* WARNING: Removing unreachable block (ram,0x0001078052e4) */
/* WARNING: Removing unreachable block (ram,0x0001078052f0) */
/* WARNING: Removing unreachable block (ram,0x0001078052f4) */
/* WARNING: Removing unreachable block (ram,0x0001078052f8) */
/* WARNING: Removing unreachable block (ram,0x00010780531c) */

float * FUN_107804dbc(float *param_1,float *param_2,float *param_3)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar6;
  float *extraout_x9;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  long unaff_x26;
  float *unaff_x30;
  undefined *puVar10;
  float fVar11;
  undefined8 uVar13;
  ulong uVar12;
  
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107805088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61dc)[unaff_x26] * 4 + 0x10780508c))();
    return param_1;
  }
  bVar2 = 0x23e < extraout_x8_00;
  if ((long)extraout_x8_00 < 0x240) {
    uVar3 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar4 = unaff_x20 == unaff_x19;
    if ((unaff_w25 & 1) == 0) {
      if (!(bool)uVar4) {
        while (func_0x000107809f1c(), !(bool)uVar4) {
          fVar11 = unaff_x20[6];
          func_0x0001078097c8();
          uVar1 = 0;
          puVar9 = extraout_x8_02;
          if ((bool)uVar3) {
            do {
              puVar9[1] = puVar9[-2];
              *puVar9 = puVar9[-3];
              puVar9[2] = puVar9[-1];
              pfVar8 = (float *)(puVar9 + -6);
              puVar9 = puVar9 + -3;
              uVar4 = fVar11 == *pfVar8;
              uVar1 = fVar11 < *pfVar8;
            } while ((bool)uVar1);
            func_0x000107809c8c();
          }
          func_0x000107809f8c();
          uVar3 = uVar1;
        }
      }
    }
    else if (!(bool)uVar4) {
      lVar5 = 0;
      pfVar8 = unaff_x20;
      while( true ) {
        pfVar7 = pfVar8 + 6;
        uVar4 = 1;
        if (pfVar7 == unaff_x19) break;
        fVar11 = pfVar8[6];
        if (fVar11 < *pfVar8) {
          do {
            puVar9 = (undefined8 *)((long)unaff_x20 + lVar5);
            puVar9[4] = puVar9[1];
            puVar9[3] = *puVar9;
            puVar9[5] = puVar9[2];
            if (lVar5 == 0) break;
            lVar5 = lVar5 + -0x18;
          } while (fVar11 < *(float *)(puVar9 + -3));
          func_0x000107809c8c();
          lVar5 = extraout_x8_01;
          pfVar7 = extraout_x9;
        }
        lVar5 = lVar5 + 0x18;
        pfVar8 = pfVar7;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar2) {
        func_0x000107808e08();
        puVar10 = (undefined *)0x107804e14;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar10 = (undefined *)0x107804e54;
      }
      goto code_r0x000107805384;
    }
    uVar4 = unaff_x20 == unaff_x19;
    if (!(bool)uVar4) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107805610();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar4) {
    func_0x000107809bdc(unaff_x30);
    return unaff_x30;
  }
  puVar10 = &SUB_107805384;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107805384:
  fVar11 = *param_2;
  uVar12 = (ulong)(uint)fVar11;
  uVar13 = 0;
  if (*param_1 <= fVar11) {
    if (fVar11 <= *unaff_x21) {
      return (float *)0x0;
    }
    func_0x000107809398();
    *(undefined8 *)(unaff_x21 + 2) = uVar13;
    *(ulong *)unaff_x21 = uVar12;
    *(undefined8 *)(unaff_x21 + 4) = extraout_x8_04;
    if (*param_2 < *param_1) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar11 <= *unaff_x21) {
      func_0x000107808e40();
      uVar12 = (ulong)(uint)*unaff_x21;
      uVar13 = 0;
      if (*param_2 <= *unaff_x21) {
        return (float *)0x1;
      }
      func_0x000107809398(puVar10);
      uVar6 = extraout_x8_05;
    }
    else {
      func_0x000107809bf8();
      uVar6 = extraout_x8_03;
    }
    *(undefined8 *)(unaff_x21 + 2) = uVar13;
    *(ulong *)unaff_x21 = uVar12;
    *(undefined8 *)(unaff_x21 + 4) = uVar6;
  }
  return (float *)0x1;
}



/* Entry: 107805cac; end: 107805cf3;  */

void FUN_107805cac(void)

{
  undefined1 in_NG;
  
  func_0x000107808810();
  func_0x000107805c00();
  func_0x00010780965c();
  if ((bool)in_NG) {
    func_0x0001078087a0();
    func_0x00010780964c();
    if ((bool)in_NG) {
      func_0x00010780877c();
      func_0x0001078093f0();
      if ((bool)in_NG) {
        func_0x000107808758();
      }
    }
  }
  return;
}



/* Entry: 1078065f8; end: 10780671b;  */

/* WARNING: Possible PIC construction at 0x000107806848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107806864) */
/* WARNING: Removing unreachable block (ram,0x000107806878) */
/* WARNING: Removing unreachable block (ram,0x000107806888) */
/* WARNING: Removing unreachable block (ram,0x000107806890) */
/* WARNING: Removing unreachable block (ram,0x000107806894) */
/* WARNING: Removing unreachable block (ram,0x00010780698c) */
/* WARNING: Removing unreachable block (ram,0x000107806994) */
/* WARNING: Removing unreachable block (ram,0x000107806998) */
/* WARNING: Removing unreachable block (ram,0x0001078069b8) */
/* WARNING: Removing unreachable block (ram,0x0001078069bc) */
/* WARNING: Removing unreachable block (ram,0x0001078069c8) */
/* WARNING: Removing unreachable block (ram,0x0001078069d0) */
/* WARNING: Removing unreachable block (ram,0x0001078069d4) */
/* WARNING: Removing unreachable block (ram,0x00010780699c) */
/* WARNING: Removing unreachable block (ram,0x0001078069a0) */
/* WARNING: Removing unreachable block (ram,0x0001078069a8) */
/* WARNING: Removing unreachable block (ram,0x0001078069ac) */
/* WARNING: Removing unreachable block (ram,0x0001078069b4) */
/* WARNING: Removing unreachable block (ram,0x0001078069d8) */
/* WARNING: Removing unreachable block (ram,0x0001078069e4) */
/* WARNING: Removing unreachable block (ram,0x0001078069e8) */
/* WARNING: Removing unreachable block (ram,0x0001078069f0) */
/* WARNING: Removing unreachable block (ram,0x0001078069f4) */
/* WARNING: Removing unreachable block (ram,0x0001078069fc) */
/* WARNING: Removing unreachable block (ram,0x000107806a00) */
/* WARNING: Removing unreachable block (ram,0x000107806a2c) */
/* WARNING: Removing unreachable block (ram,0x000107806a38) */
/* WARNING: Removing unreachable block (ram,0x000107806a48) */
/* WARNING: Removing unreachable block (ram,0x000107806a08) */
/* WARNING: Removing unreachable block (ram,0x000107806a0c) */
/* WARNING: Removing unreachable block (ram,0x000107806a14) */
/* WARNING: Removing unreachable block (ram,0x000107806a18) */
/* WARNING: Removing unreachable block (ram,0x000107806a1c) */
/* WARNING: Removing unreachable block (ram,0x000107806a28) */
/* WARNING: Removing unreachable block (ram,0x000107806880) */
/* WARNING: Removing unreachable block (ram,0x000107806898) */
/* WARNING: Removing unreachable block (ram,0x0001078068a4) */
/* WARNING: Removing unreachable block (ram,0x0001078068b0) */
/* WARNING: Removing unreachable block (ram,0x0001078068b4) */
/* WARNING: Removing unreachable block (ram,0x0001078068b8) */
/* WARNING: Removing unreachable block (ram,0x0001078068dc) */
/* WARNING: Removing unreachable block (ram,0x0001078068e0) */
/* WARNING: Removing unreachable block (ram,0x0001078068fc) */
/* WARNING: Removing unreachable block (ram,0x0001078068e8) */
/* WARNING: Removing unreachable block (ram,0x0001078068f8) */
/* WARNING: Removing unreachable block (ram,0x0001078068c8) */
/* WARNING: Removing unreachable block (ram,0x0001078068d8) */
/* WARNING: Removing unreachable block (ram,0x000107806900) */
/* WARNING: Removing unreachable block (ram,0x000107806908) */
/* WARNING: Removing unreachable block (ram,0x000107806938) */
/* WARNING: Removing unreachable block (ram,0x000107806940) */
/* WARNING: Removing unreachable block (ram,0x000107806944) */
/* WARNING: Removing unreachable block (ram,0x000107806964) */
/* WARNING: Removing unreachable block (ram,0x000107806a68) */
/* WARNING: Removing unreachable block (ram,0x000107806a70) */
/* WARNING: Removing unreachable block (ram,0x000107806978) */
/* WARNING: Removing unreachable block (ram,0x00010780697c) */
/* WARNING: Removing unreachable block (ram,0x000107806910) */
/* WARNING: Removing unreachable block (ram,0x000107806914) */
/* WARNING: Removing unreachable block (ram,0x00010780691c) */
/* WARNING: Removing unreachable block (ram,0x000107806920) */
/* WARNING: Removing unreachable block (ram,0x000107806924) */
/* WARNING: Removing unreachable block (ram,0x00010780692c) */
/* WARNING: Removing unreachable block (ram,0x000107806930) */
/* WARNING: Removing unreachable block (ram,0x000107806934) */
/* WARNING: Removing unreachable block (ram,0x00010780685c) */
/* WARNING: Removing unreachable block (ram,0x000107806854) */
/* WARNING: Removing unreachable block (ram,0x00010780684c) */
/* WARNING: Removing unreachable block (ram,0x000107806984) */
/* WARNING: Removing unreachable block (ram,0x000107806bb0) */
/* WARNING: Removing unreachable block (ram,0x000107806bb4) */
/* WARNING: Removing unreachable block (ram,0x000107806bbc) */
/* WARNING: Removing unreachable block (ram,0x000107806bc0) */
/* WARNING: Removing unreachable block (ram,0x000107806be4) */
/* WARNING: Removing unreachable block (ram,0x000107806bc8) */
/* WARNING: Removing unreachable block (ram,0x000107806bd0) */
/* WARNING: Removing unreachable block (ram,0x000107806bd4) */
/* WARNING: Removing unreachable block (ram,0x000107806bd8) */
/* WARNING: Removing unreachable block (ram,0x000107806bdc) */
/* WARNING: Removing unreachable block (ram,0x000107806be8) */
/* WARNING: Removing unreachable block (ram,0x000107806bf0) */
/* WARNING: Removing unreachable block (ram,0x000107806c64) */
/* WARNING: Removing unreachable block (ram,0x000107806bf8) */
/* WARNING: Removing unreachable block (ram,0x000107806c00) */
/* WARNING: Removing unreachable block (ram,0x000107806c10) */
/* WARNING: Removing unreachable block (ram,0x000107806c14) */
/* WARNING: Removing unreachable block (ram,0x000107806c18) */
/* WARNING: Removing unreachable block (ram,0x000107806c2c) */
/* WARNING: Removing unreachable block (ram,0x000107806c34) */
/* WARNING: Removing unreachable block (ram,0x000107806c40) */
/* WARNING: Removing unreachable block (ram,0x000107806c44) */
/* WARNING: Removing unreachable block (ram,0x000107806c48) */
/* WARNING: Removing unreachable block (ram,0x000107806c70) */

long FUN_1078065f8(long param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong uVar8;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar9;
  undefined4 *extraout_x9_01;
  undefined4 *puVar10;
  undefined4 *extraout_x10;
  ulong *extraout_x10_00;
  long extraout_x10_01;
  ulong *puVar11;
  undefined4 *extraout_x11;
  long lVar12;
  undefined4 *extraout_x11_00;
  ulong extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x12;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar13;
  float fVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uStack_88;
  
  func_0x0001078087f8();
  func_0x000107808fe4();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar6 = 1;
                    /* WARNING: Could not recover jumptable at 0x000107806634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61fa)[extraout_x8_00] * 4 + 0x107806638))(1);
    return lVar6;
  }
  func_0x000107808fa8();
  func_0x0001078064a0();
  func_0x00010780968c();
  puVar10 = extraout_x11;
  while( true ) {
    uVar1 = unaff_x20 <= puVar10;
    cVar3 = SBORROW8((long)puVar10,(long)unaff_x20);
    cVar4 = (long)puVar10 - (long)unaff_x20 < 0;
    if (puVar10 == unaff_x20) break;
    fVar14 = (float)puVar10[1];
    func_0x000107809738();
    if ((bool)cVar4) {
      uVar16 = *extraout_x10;
      uVar21 = *(undefined8 *)(extraout_x10 + 4);
      uVar18 = *(undefined8 *)(extraout_x10 + 2);
      lVar6 = extraout_x8_01;
      do {
        lVar12 = lVar6;
        *(undefined8 *)((long)unaff_x19 + lVar12 + 0x50) =
             *(undefined8 *)((long)unaff_x19 + lVar12 + 0x38);
        *(undefined8 *)((long)unaff_x19 + lVar12 + 0x48) =
             *(undefined8 *)((long)unaff_x19 + lVar12 + 0x30);
        *(undefined8 *)((long)unaff_x19 + lVar12 + 0x58) =
             *(undefined8 *)((long)unaff_x19 + lVar12 + 0x40);
        if (lVar12 == -0x30) {
          uVar5 = true;
          cVar3 = false;
          uVar1 = true;
          puVar10 = unaff_x19;
          goto LAB_1078066d4;
        }
        fVar17 = *(float *)((long)unaff_x19 + lVar12 + 0x1c);
        cVar3 = NAN(fVar14) || NAN(fVar17);
        uVar1 = fVar17 <= fVar14;
        uVar5 = fVar14 == fVar17;
        lVar6 = lVar12 + -0x18;
      } while (fVar14 < fVar17);
      puVar10 = (undefined4 *)((long)unaff_x19 + lVar12 + 0x30);
LAB_1078066d4:
      cVar4 = '\0';
      *puVar10 = uVar16;
      puVar10[1] = fVar14;
      *(undefined8 *)(puVar10 + 4) = uVar21;
      *(undefined8 *)(puVar10 + 2) = uVar18;
      func_0x000107809798();
      if ((bool)uVar5) {
        func_0x000107809614();
        goto LAB_1078066fc;
      }
    }
    func_0x0001078096ec();
    puVar10 = extraout_x11_00;
  }
  param_1 = 1;
  uVar5 = 1;
LAB_1078066fc:
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107808a58();
  func_0x000107809938();
  if ((cVar4 == cVar3) && (func_0x000107808d30(), cVar4 == cVar3)) {
    func_0x000107808ae8();
    uVar9 = extraout_x9;
    puVar11 = extraout_x10_00;
    if ((cVar4 != cVar3) &&
       (*(float *)((long)extraout_x10_00 + 4) < *(float *)((long)extraout_x10_00 + 0x1c))) {
      puVar11 = extraout_x10_00 + 3;
      uVar9 = extraout_x11_01;
    }
    fVar17 = *(float *)((long)puVar11 + 4);
    fVar14 = *(float *)((long)param_3 + 4);
    uVar15 = (ulong)(uint)fVar14;
    uVar1 = fVar14 <= fVar17;
    uVar5 = fVar17 == fVar14;
    if (fVar14 <= fVar17) {
      uVar16 = (undefined4)*param_3;
      uVar22 = param_3[2];
      uVar19 = param_3[1];
      puVar7 = param_3;
      uVar8 = extraout_x8_02;
      do {
        param_3 = puVar11;
        fVar14 = (float)uVar15;
        uVar23 = param_3[1];
        uVar20 = *param_3;
        puVar7[2] = param_3[2];
        puVar7[1] = uVar23;
        *puVar7 = uVar20;
        uVar1 = uVar9 <= uVar8;
        uVar5 = uVar8 == uVar9;
        if ((long)uVar8 < (long)uVar9) break;
        func_0x00010780966c();
        fVar14 = (float)uVar15;
        puVar11 = (ulong *)(param_1 + extraout_x10_01 * extraout_x11_02);
        uVar9 = extraout_x9_00;
        if (((long)(extraout_x12 + 2U) < param_2) &&
           (uVar9 = extraout_x9_00, *(float *)((long)puVar11 + 4) < *(float *)((long)puVar11 + 0x1c)
           )) {
          puVar11 = puVar11 + 3;
          uVar9 = extraout_x12 + 2U;
        }
        fVar17 = *(float *)((long)puVar11 + 4);
        uVar1 = fVar14 <= fVar17;
        uVar5 = fVar17 == fVar14;
        puVar7 = param_3;
        uVar8 = extraout_x8_03;
      } while (fVar14 <= fVar17);
      *(undefined4 *)param_3 = uVar16;
      *(float *)((long)param_3 + 4) = fVar14;
      param_3[2] = uVar22;
      param_3[1] = uVar19;
    }
  }
  func_0x0001078087c4(uStack_88);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)uVar1 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000107806a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_107806a8c + (ulong)(byte)(&UNK_10dea6200)[unaff_x26] * 4))();
    return param_1;
  }
  bVar2 = 0x23e < extraout_x8_05;
  if ((long)extraout_x8_05 < 0x240) {
    uVar5 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar1 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar1) {
        while (func_0x000107809f1c(), !(bool)uVar1) {
          func_0x000107809768(unaff_x20[9]);
          if ((bool)uVar5) {
            func_0x000107809f08();
            do {
              func_0x00010780a120();
              func_0x000107809d1c();
            } while ((bool)uVar5);
            func_0x0001078099ec();
          }
          func_0x000107809f8c();
        }
      }
    }
    else if (!(bool)uVar1) {
      lVar6 = 0;
      while( true ) {
        puVar10 = unaff_x20 + 6;
        uVar1 = 1;
        if (puVar10 == unaff_x19) break;
        uVar1 = (float)unaff_x20[9] < (float)unaff_x20[3];
        if ((bool)uVar1) {
          func_0x00010780a064(lVar6);
          do {
            uVar5 = uVar1;
            func_0x000107809d04();
            if (extraout_x11_03 == 0) break;
            func_0x000107809d1c();
            uVar1 = 1;
          } while ((bool)uVar5);
          func_0x0001078099ec();
          lVar6 = extraout_x8_06;
          puVar10 = extraout_x9_01;
        }
        lVar6 = lVar6 + 0x18;
        unaff_x20 = puVar10;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar2) {
        func_0x000107808e08();
        puVar13 = &UNK_10780684c;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar13 = &UNK_107806878;
      }
      goto code_r0x000107806cc0;
    }
    uVar1 = unaff_x20 == unaff_x19;
    if (!(bool)uVar1) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107806f3c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8_04);
  if ((bool)uVar1) {
    return param_1;
  }
  puVar13 = &UNK_107806cc0;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107806cc0:
  fVar14 = *(float *)(param_2 + 0xc);
  uVar9 = (ulong)(uint)fVar14;
  uVar15 = 0;
  if (*(float *)(param_1 + 0xc) <= fVar14) {
    if (fVar14 <= *(float *)((long)unaff_x21 + 0xc)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar15;
    *unaff_x21 = uVar9;
    unaff_x21[2] = extraout_x8_08;
    if (*(float *)(param_2 + 0xc) < *(float *)(param_1 + 0xc)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar14 <= *(float *)((long)unaff_x21 + 0xc)) {
      func_0x000107808e40();
      uVar9 = (ulong)(uint)*(float *)((long)unaff_x21 + 0xc);
      uVar15 = 0;
      if (*(float *)(param_2 + 0xc) <= *(float *)((long)unaff_x21 + 0xc)) {
        return 1;
      }
      func_0x000107809398(puVar13);
      uVar8 = extraout_x8_09;
    }
    else {
      func_0x000107809bf8();
      uVar8 = extraout_x8_07;
    }
    unaff_x21[1] = uVar15;
    *unaff_x21 = uVar9;
    unaff_x21[2] = uVar8;
  }
  return 1;
}



/* Entry: 107806ffc; end: 107807153;  */

/* WARNING: Possible PIC construction at 0x0001078071f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078071f4) */
/* WARNING: Removing unreachable block (ram,0x000107807208) */
/* WARNING: Removing unreachable block (ram,0x000107807210) */
/* WARNING: Removing unreachable block (ram,0x000107807220) */
/* WARNING: Removing unreachable block (ram,0x000107807274) */
/* WARNING: Removing unreachable block (ram,0x000107807254) */
/* WARNING: Removing unreachable block (ram,0x0001078072dc) */
/* WARNING: Removing unreachable block (ram,0x000107807218) */
/* WARNING: Removing unreachable block (ram,0x0001078072e8) */
/* WARNING: Removing unreachable block (ram,0x0001078072f0) */
/* WARNING: Removing unreachable block (ram,0x0001078072f8) */
/* WARNING: Removing unreachable block (ram,0x000107807300) */
/* WARNING: Removing unreachable block (ram,0x000107807324) */
/* WARNING: Removing unreachable block (ram,0x000107807360) */
/* WARNING: Removing unreachable block (ram,0x00010780737c) */
/* WARNING: Removing unreachable block (ram,0x0001078073e0) */
/* WARNING: Removing unreachable block (ram,0x000107807424) */
/* WARNING: Removing unreachable block (ram,0x000107807440) */
/* WARNING: Removing unreachable block (ram,0x000107807458) */
/* WARNING: Removing unreachable block (ram,0x000107807470) */
/* WARNING: Removing unreachable block (ram,0x000107807478) */
/* WARNING: Removing unreachable block (ram,0x00010780747c) */
/* WARNING: Removing unreachable block (ram,0x000107807480) */
/* WARNING: Removing unreachable block (ram,0x0001078074b4) */
/* WARNING: Removing unreachable block (ram,0x0001078074c0) */
/* WARNING: Removing unreachable block (ram,0x0001078074c8) */
/* WARNING: Removing unreachable block (ram,0x000107807638) */
/* WARNING: Removing unreachable block (ram,0x000107807644) */
/* WARNING: Removing unreachable block (ram,0x000107807670) */
/* WARNING: Removing unreachable block (ram,0x000107807694) */
/* WARNING: Removing unreachable block (ram,0x0001078076c0) */
/* WARNING: Removing unreachable block (ram,0x0001078076d8) */
/* WARNING: Removing unreachable block (ram,0x0001078076cc) */
/* WARNING: Removing unreachable block (ram,0x000107808a68) */
/* WARNING: Removing unreachable block (ram,0x00010780764c) */
/* WARNING: Removing unreachable block (ram,0x0001078074d0) */
/* WARNING: Removing unreachable block (ram,0x0001078074f0) */
/* WARNING: Removing unreachable block (ram,0x00010780752c) */
/* WARNING: Removing unreachable block (ram,0x000107807510) */
/* WARNING: Removing unreachable block (ram,0x000107807518) */
/* WARNING: Removing unreachable block (ram,0x00010780751c) */
/* WARNING: Removing unreachable block (ram,0x000107807520) */
/* WARNING: Removing unreachable block (ram,0x000107807524) */
/* WARNING: Removing unreachable block (ram,0x000107807534) */
/* WARNING: Removing unreachable block (ram,0x000107807554) */
/* WARNING: Removing unreachable block (ram,0x000107807618) */
/* WARNING: Removing unreachable block (ram,0x000107807560) */
/* WARNING: Removing unreachable block (ram,0x0001078075a0) */
/* WARNING: Removing unreachable block (ram,0x0001078075b0) */
/* WARNING: Removing unreachable block (ram,0x0001078075b4) */
/* WARNING: Removing unreachable block (ram,0x0001078075b8) */
/* WARNING: Removing unreachable block (ram,0x0001078075c8) */
/* WARNING: Removing unreachable block (ram,0x0001078075e4) */
/* WARNING: Removing unreachable block (ram,0x0001078075f4) */
/* WARNING: Removing unreachable block (ram,0x0001078075f8) */
/* WARNING: Removing unreachable block (ram,0x000107807600) */
/* WARNING: Removing unreachable block (ram,0x00010780762c) */
/* WARNING: Removing unreachable block (ram,0x00010780730c) */
/* WARNING: Removing unreachable block (ram,0x0001078003c8) */
/* WARNING: Removing unreachable block (ram,0x0001078003e8) */
/* WARNING: Removing unreachable block (ram,0x0001078003f8) */
/* WARNING: Removing unreachable block (ram,0x000107800410) */
/* WARNING: Removing unreachable block (ram,0x000107800418) */
/* WARNING: Removing unreachable block (ram,0x000107800428) */
/* WARNING: Removing unreachable block (ram,0x00010780042c) */
/* WARNING: Removing unreachable block (ram,0x000107800430) */
/* WARNING: Removing unreachable block (ram,0x000107800434) */
/* WARNING: Removing unreachable block (ram,0x000107800438) */
/* WARNING: Removing unreachable block (ram,0x00010780043c) */
/* WARNING: Removing unreachable block (ram,0x000107800448) */
/* WARNING: Removing unreachable block (ram,0x000107800458) */
/* WARNING: Removing unreachable block (ram,0x00010780045c) */
/* WARNING: Removing unreachable block (ram,0x000107800460) */
/* WARNING: Removing unreachable block (ram,0x000107800474) */
/* WARNING: Removing unreachable block (ram,0x00010780048c) */
/* WARNING: Removing unreachable block (ram,0x00010780049c) */
/* WARNING: Removing unreachable block (ram,0x0001078004c4) */
/* WARNING: Removing unreachable block (ram,0x0001078004cc) */
/* WARNING: Removing unreachable block (ram,0x0001078004e0) */
/* WARNING: Removing unreachable block (ram,0x0001078004e4) */
/* WARNING: Removing unreachable block (ram,0x0001078004e8) */
/* WARNING: Removing unreachable block (ram,0x0001078004ec) */
/* WARNING: Removing unreachable block (ram,0x0001078004f0) */
/* WARNING: Removing unreachable block (ram,0x0001078004f4) */
/* WARNING: Removing unreachable block (ram,0x0001078004fc) */
/* WARNING: Removing unreachable block (ram,0x000107800510) */
/* WARNING: Removing unreachable block (ram,0x000107800528) */
/* WARNING: Removing unreachable block (ram,0x000107800538) */
/* WARNING: Removing unreachable block (ram,0x000107800550) */
/* WARNING: Removing unreachable block (ram,0x000107800558) */
/* WARNING: Removing unreachable block (ram,0x000107800568) */
/* WARNING: Removing unreachable block (ram,0x00010780056c) */
/* WARNING: Removing unreachable block (ram,0x000107800570) */
/* WARNING: Removing unreachable block (ram,0x000107800574) */
/* WARNING: Removing unreachable block (ram,0x000107800578) */
/* WARNING: Removing unreachable block (ram,0x00010780057c) */
/* WARNING: Removing unreachable block (ram,0x000107800588) */
/* WARNING: Removing unreachable block (ram,0x00010780059c) */
/* WARNING: Removing unreachable block (ram,0x0001078005a8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ac) */
/* WARNING: Removing unreachable block (ram,0x0001078005c0) */
/* WARNING: Removing unreachable block (ram,0x0001078005c4) */
/* WARNING: Removing unreachable block (ram,0x0001078005c8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ec) */
/* WARNING: Removing unreachable block (ram,0x0001078005f0) */
/* WARNING: Removing unreachable block (ram,0x0001078007e8) */
/* WARNING: Removing unreachable block (ram,0x000107800bc4) */
/* WARNING: Removing unreachable block (ram,0x000107800d34) */
/* WARNING: Removing unreachable block (ram,0x000107800d3c) */
/* WARNING: Removing unreachable block (ram,0x000107800d44) */
/* WARNING: Removing unreachable block (ram,0x000107800d4c) */
/* WARNING: Removing unreachable block (ram,0x000107800d54) */
/* WARNING: Removing unreachable block (ram,0x000107800f7c) */
/* WARNING: Removing unreachable block (ram,0x000107800d5c) */
/* WARNING: Removing unreachable block (ram,0x000107800f38) */
/* WARNING: Removing unreachable block (ram,0x000107800f40) */
/* WARNING: Removing unreachable block (ram,0x000107800f44) */
/* WARNING: Removing unreachable block (ram,0x000107800f48) */
/* WARNING: Removing unreachable block (ram,0x000107800d64) */
/* WARNING: Removing unreachable block (ram,0x000107801054) */
/* WARNING: Removing unreachable block (ram,0x000107801058) */
/* WARNING: Removing unreachable block (ram,0x000107801060) */
/* WARNING: Removing unreachable block (ram,0x000107801068) */
/* WARNING: Removing unreachable block (ram,0x00010780106c) */
/* WARNING: Removing unreachable block (ram,0x000107801074) */
/* WARNING: Removing unreachable block (ram,0x000107801080) */
/* WARNING: Removing unreachable block (ram,0x000107801084) */
/* WARNING: Removing unreachable block (ram,0x000107801090) */
/* WARNING: Removing unreachable block (ram,0x000107801098) */
/* WARNING: Removing unreachable block (ram,0x00010780109c) */
/* WARNING: Removing unreachable block (ram,0x000107800d6c) */
/* WARNING: Removing unreachable block (ram,0x000107800d84) */
/* WARNING: Removing unreachable block (ram,0x000107800d88) */
/* WARNING: Removing unreachable block (ram,0x000107800d90) */
/* WARNING: Removing unreachable block (ram,0x000107800d94) */
/* WARNING: Removing unreachable block (ram,0x000107800d98) */
/* WARNING: Removing unreachable block (ram,0x000107800d9c) */
/* WARNING: Removing unreachable block (ram,0x000107800e2c) */
/* WARNING: Removing unreachable block (ram,0x000107800e30) */
/* WARNING: Removing unreachable block (ram,0x000107800e78) */
/* WARNING: Removing unreachable block (ram,0x000107800e3c) */
/* WARNING: Removing unreachable block (ram,0x000107800e40) */
/* WARNING: Removing unreachable block (ram,0x000107800e44) */
/* WARNING: Removing unreachable block (ram,0x000107800e48) */
/* WARNING: Removing unreachable block (ram,0x000107800e4c) */
/* WARNING: Removing unreachable block (ram,0x000107800e50) */
/* WARNING: Removing unreachable block (ram,0x000107800e54) */
/* WARNING: Removing unreachable block (ram,0x000107800e58) */
/* WARNING: Removing unreachable block (ram,0x000107800e5c) */
/* WARNING: Removing unreachable block (ram,0x000107800e60) */
/* WARNING: Removing unreachable block (ram,0x000107800e80) */
/* WARNING: Removing unreachable block (ram,0x000107800e84) */
/* WARNING: Removing unreachable block (ram,0x000107800e8c) */
/* WARNING: Removing unreachable block (ram,0x000107800e98) */
/* WARNING: Removing unreachable block (ram,0x000107800ea0) */
/* WARNING: Removing unreachable block (ram,0x000107800ea8) */
/* WARNING: Removing unreachable block (ram,0x000107800ec0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee8) */
/* WARNING: Removing unreachable block (ram,0x000107800eec) */
/* WARNING: Removing unreachable block (ram,0x000107800ef4) */
/* WARNING: Removing unreachable block (ram,0x000107800f04) */
/* WARNING: Removing unreachable block (ram,0x000107800ec8) */
/* WARNING: Removing unreachable block (ram,0x000107800ed0) */
/* WARNING: Removing unreachable block (ram,0x000107800edc) */
/* WARNING: Removing unreachable block (ram,0x000107800ee0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee4) */
/* WARNING: Removing unreachable block (ram,0x000107800eac) */
/* WARNING: Removing unreachable block (ram,0x000107800eb4) */
/* WARNING: Removing unreachable block (ram,0x000107800eb8) */
/* WARNING: Removing unreachable block (ram,0x000107800e68) */
/* WARNING: Removing unreachable block (ram,0x000107800da0) */
/* WARNING: Removing unreachable block (ram,0x000107800da8) */
/* WARNING: Removing unreachable block (ram,0x000107800dac) */
/* WARNING: Removing unreachable block (ram,0x000107800db0) */
/* WARNING: Removing unreachable block (ram,0x000107800db8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc0) */
/* WARNING: Removing unreachable block (ram,0x000107800dd4) */
/* WARNING: Removing unreachable block (ram,0x000107800ddc) */
/* WARNING: Removing unreachable block (ram,0x000107800de0) */
/* WARNING: Removing unreachable block (ram,0x000107800de4) */
/* WARNING: Removing unreachable block (ram,0x000107800de8) */
/* WARNING: Removing unreachable block (ram,0x000107800dec) */
/* WARNING: Removing unreachable block (ram,0x000107800df0) */
/* WARNING: Removing unreachable block (ram,0x000107800df4) */
/* WARNING: Removing unreachable block (ram,0x000107800df8) */
/* WARNING: Removing unreachable block (ram,0x000107800dfc) */
/* WARNING: Removing unreachable block (ram,0x000107800e00) */
/* WARNING: Removing unreachable block (ram,0x000107800e10) */
/* WARNING: Removing unreachable block (ram,0x000107800e1c) */
/* WARNING: Removing unreachable block (ram,0x000107800e08) */
/* WARNING: Removing unreachable block (ram,0x0001078007ec) */
/* WARNING: Removing unreachable block (ram,0x0001078007f4) */
/* WARNING: Removing unreachable block (ram,0x0001078007f8) */
/* WARNING: Removing unreachable block (ram,0x000107800800) */
/* WARNING: Removing unreachable block (ram,0x000107800808) */
/* WARNING: Removing unreachable block (ram,0x000107800810) */
/* WARNING: Removing unreachable block (ram,0x000107800f64) */
/* WARNING: Removing unreachable block (ram,0x000107800818) */
/* WARNING: Removing unreachable block (ram,0x000107800f14) */
/* WARNING: Removing unreachable block (ram,0x000107800820) */
/* WARNING: Removing unreachable block (ram,0x000107800fcc) */
/* WARNING: Removing unreachable block (ram,0x000107800fd0) */
/* WARNING: Removing unreachable block (ram,0x000107800fd8) */
/* WARNING: Removing unreachable block (ram,0x000107800fe0) */
/* WARNING: Removing unreachable block (ram,0x000107800fe4) */
/* WARNING: Removing unreachable block (ram,0x000107800fec) */
/* WARNING: Removing unreachable block (ram,0x000107800ffc) */
/* WARNING: Removing unreachable block (ram,0x000107801004) */
/* WARNING: Removing unreachable block (ram,0x000107801008) */
/* WARNING: Removing unreachable block (ram,0x000107800828) */
/* WARNING: Removing unreachable block (ram,0x000107800840) */
/* WARNING: Removing unreachable block (ram,0x000107800844) */
/* WARNING: Removing unreachable block (ram,0x00010780084c) */
/* WARNING: Removing unreachable block (ram,0x000107800854) */
/* WARNING: Removing unreachable block (ram,0x000107800858) */
/* WARNING: Removing unreachable block (ram,0x00010780085c) */
/* WARNING: Removing unreachable block (ram,0x0001078008f8) */
/* WARNING: Removing unreachable block (ram,0x0001078008fc) */
/* WARNING: Removing unreachable block (ram,0x00010780094c) */
/* WARNING: Removing unreachable block (ram,0x000107800908) */
/* WARNING: Removing unreachable block (ram,0x00010780090c) */
/* WARNING: Removing unreachable block (ram,0x000107800910) */
/* WARNING: Removing unreachable block (ram,0x000107800918) */
/* WARNING: Removing unreachable block (ram,0x00010780091c) */
/* WARNING: Removing unreachable block (ram,0x000107800920) */
/* WARNING: Removing unreachable block (ram,0x000107800924) */
/* WARNING: Removing unreachable block (ram,0x00010780092c) */
/* WARNING: Removing unreachable block (ram,0x000107800930) */
/* WARNING: Removing unreachable block (ram,0x000107800934) */
/* WARNING: Removing unreachable block (ram,0x000107800950) */
/* WARNING: Removing unreachable block (ram,0x000107800958) */
/* WARNING: Removing unreachable block (ram,0x000107800964) */
/* WARNING: Removing unreachable block (ram,0x00010780096c) */
/* WARNING: Removing unreachable block (ram,0x000107800974) */
/* WARNING: Removing unreachable block (ram,0x00010780098c) */
/* WARNING: Removing unreachable block (ram,0x0001078009b4) */
/* WARNING: Removing unreachable block (ram,0x0001078009b8) */
/* WARNING: Removing unreachable block (ram,0x0001078009c0) */
/* WARNING: Removing unreachable block (ram,0x0001078009d0) */
/* WARNING: Removing unreachable block (ram,0x000107800994) */
/* WARNING: Removing unreachable block (ram,0x00010780099c) */
/* WARNING: Removing unreachable block (ram,0x0001078009a8) */
/* WARNING: Removing unreachable block (ram,0x0001078009ac) */
/* WARNING: Removing unreachable block (ram,0x0001078009b0) */
/* WARNING: Removing unreachable block (ram,0x000107800978) */
/* WARNING: Removing unreachable block (ram,0x000107800980) */
/* WARNING: Removing unreachable block (ram,0x000107800984) */
/* WARNING: Removing unreachable block (ram,0x00010780093c) */
/* WARNING: Removing unreachable block (ram,0x000107800860) */
/* WARNING: Removing unreachable block (ram,0x000107800868) */
/* WARNING: Removing unreachable block (ram,0x00010780086c) */
/* WARNING: Removing unreachable block (ram,0x000107800870) */
/* WARNING: Removing unreachable block (ram,0x000107800878) */
/* WARNING: Removing unreachable block (ram,0x000107800888) */
/* WARNING: Removing unreachable block (ram,0x000107800880) */
/* WARNING: Removing unreachable block (ram,0x000107800894) */
/* WARNING: Removing unreachable block (ram,0x00010780089c) */
/* WARNING: Removing unreachable block (ram,0x0001078008a0) */
/* WARNING: Removing unreachable block (ram,0x0001078008a4) */
/* WARNING: Removing unreachable block (ram,0x0001078008ac) */
/* WARNING: Removing unreachable block (ram,0x0001078008b0) */
/* WARNING: Removing unreachable block (ram,0x0001078008b4) */
/* WARNING: Removing unreachable block (ram,0x0001078008b8) */
/* WARNING: Removing unreachable block (ram,0x0001078008c0) */
/* WARNING: Removing unreachable block (ram,0x0001078008c4) */
/* WARNING: Removing unreachable block (ram,0x0001078008c8) */
/* WARNING: Removing unreachable block (ram,0x0001078008d8) */
/* WARNING: Removing unreachable block (ram,0x0001078008e4) */
/* WARNING: Removing unreachable block (ram,0x0001078008d0) */
/* WARNING: Removing unreachable block (ram,0x0001078005f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009d4) */
/* WARNING: Removing unreachable block (ram,0x0001078009dc) */
/* WARNING: Removing unreachable block (ram,0x0001078009e4) */
/* WARNING: Removing unreachable block (ram,0x0001078009ec) */
/* WARNING: Removing unreachable block (ram,0x0001078009f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009fc) */
/* WARNING: Removing unreachable block (ram,0x000107800f70) */
/* WARNING: Removing unreachable block (ram,0x000107800a04) */
/* WARNING: Removing unreachable block (ram,0x000107800f20) */
/* WARNING: Removing unreachable block (ram,0x000107800a0c) */
/* WARNING: Removing unreachable block (ram,0x000107801010) */
/* WARNING: Removing unreachable block (ram,0x000107801014) */
/* WARNING: Removing unreachable block (ram,0x00010780101c) */
/* WARNING: Removing unreachable block (ram,0x000107801024) */
/* WARNING: Removing unreachable block (ram,0x000107801028) */
/* WARNING: Removing unreachable block (ram,0x000107801030) */
/* WARNING: Removing unreachable block (ram,0x000107801040) */
/* WARNING: Removing unreachable block (ram,0x000107801048) */
/* WARNING: Removing unreachable block (ram,0x00010780104c) */
/* WARNING: Removing unreachable block (ram,0x000107800a14) */
/* WARNING: Removing unreachable block (ram,0x000107800a2c) */
/* WARNING: Removing unreachable block (ram,0x000107800a30) */
/* WARNING: Removing unreachable block (ram,0x000107800a38) */
/* WARNING: Removing unreachable block (ram,0x000107800a40) */
/* WARNING: Removing unreachable block (ram,0x000107800a44) */
/* WARNING: Removing unreachable block (ram,0x000107800a48) */
/* WARNING: Removing unreachable block (ram,0x000107800ae0) */
/* WARNING: Removing unreachable block (ram,0x000107800ae4) */
/* WARNING: Removing unreachable block (ram,0x000107800b34) */
/* WARNING: Removing unreachable block (ram,0x000107800af0) */
/* WARNING: Removing unreachable block (ram,0x000107800af4) */
/* WARNING: Removing unreachable block (ram,0x000107800af8) */
/* WARNING: Removing unreachable block (ram,0x000107800b00) */
/* WARNING: Removing unreachable block (ram,0x000107800b04) */
/* WARNING: Removing unreachable block (ram,0x000107800b08) */
/* WARNING: Removing unreachable block (ram,0x000107800b0c) */
/* WARNING: Removing unreachable block (ram,0x000107800b14) */
/* WARNING: Removing unreachable block (ram,0x000107800b18) */
/* WARNING: Removing unreachable block (ram,0x000107800b1c) */
/* WARNING: Removing unreachable block (ram,0x000107800b3c) */
/* WARNING: Removing unreachable block (ram,0x000107800b40) */
/* WARNING: Removing unreachable block (ram,0x000107800b48) */
/* WARNING: Removing unreachable block (ram,0x000107800b54) */
/* WARNING: Removing unreachable block (ram,0x000107800b5c) */
/* WARNING: Removing unreachable block (ram,0x000107800b64) */
/* WARNING: Removing unreachable block (ram,0x000107800b7c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba4) */
/* WARNING: Removing unreachable block (ram,0x000107800ba8) */
/* WARNING: Removing unreachable block (ram,0x000107800bb0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc0) */
/* WARNING: Removing unreachable block (ram,0x000107800b84) */
/* WARNING: Removing unreachable block (ram,0x000107800b8c) */
/* WARNING: Removing unreachable block (ram,0x000107800b98) */
/* WARNING: Removing unreachable block (ram,0x000107800b9c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba0) */
/* WARNING: Removing unreachable block (ram,0x000107800b68) */
/* WARNING: Removing unreachable block (ram,0x000107800b70) */
/* WARNING: Removing unreachable block (ram,0x000107800b74) */
/* WARNING: Removing unreachable block (ram,0x000107800b24) */
/* WARNING: Removing unreachable block (ram,0x000107800a4c) */
/* WARNING: Removing unreachable block (ram,0x000107800a54) */
/* WARNING: Removing unreachable block (ram,0x000107800a58) */
/* WARNING: Removing unreachable block (ram,0x000107800a5c) */
/* WARNING: Removing unreachable block (ram,0x000107800a64) */
/* WARNING: Removing unreachable block (ram,0x000107800a74) */
/* WARNING: Removing unreachable block (ram,0x000107800a6c) */
/* WARNING: Removing unreachable block (ram,0x000107800a80) */
/* WARNING: Removing unreachable block (ram,0x000107800a88) */
/* WARNING: Removing unreachable block (ram,0x000107800a8c) */
/* WARNING: Removing unreachable block (ram,0x000107800a90) */
/* WARNING: Removing unreachable block (ram,0x000107800a98) */
/* WARNING: Removing unreachable block (ram,0x000107800a9c) */
/* WARNING: Removing unreachable block (ram,0x000107800aa0) */
/* WARNING: Removing unreachable block (ram,0x000107800aa4) */
/* WARNING: Removing unreachable block (ram,0x000107800aac) */
/* WARNING: Removing unreachable block (ram,0x000107800ab0) */
/* WARNING: Removing unreachable block (ram,0x000107800ab4) */
/* WARNING: Removing unreachable block (ram,0x000107800ac4) */
/* WARNING: Removing unreachable block (ram,0x000107800ad0) */
/* WARNING: Removing unreachable block (ram,0x000107800abc) */
/* WARNING: Removing unreachable block (ram,0x0001078005f8) */
/* WARNING: Removing unreachable block (ram,0x000107800600) */
/* WARNING: Removing unreachable block (ram,0x000107800608) */
/* WARNING: Removing unreachable block (ram,0x000107800610) */
/* WARNING: Removing unreachable block (ram,0x000107800618) */
/* WARNING: Removing unreachable block (ram,0x000107800620) */
/* WARNING: Removing unreachable block (ram,0x000107800f58) */
/* WARNING: Removing unreachable block (ram,0x000107800628) */
/* WARNING: Removing unreachable block (ram,0x000107800f08) */
/* WARNING: Removing unreachable block (ram,0x000107800f28) */
/* WARNING: Removing unreachable block (ram,0x000107800f2c) */
/* WARNING: Removing unreachable block (ram,0x000107800f30) */
/* WARNING: Removing unreachable block (ram,0x000107800f50) */
/* WARNING: Removing unreachable block (ram,0x000107800630) */
/* WARNING: Removing unreachable block (ram,0x000107800f88) */
/* WARNING: Removing unreachable block (ram,0x000107800f8c) */
/* WARNING: Removing unreachable block (ram,0x000107800f94) */
/* WARNING: Removing unreachable block (ram,0x000107800f9c) */
/* WARNING: Removing unreachable block (ram,0x000107800fa0) */
/* WARNING: Removing unreachable block (ram,0x000107800fa8) */
/* WARNING: Removing unreachable block (ram,0x000107800fb8) */
/* WARNING: Removing unreachable block (ram,0x000107800fc0) */
/* WARNING: Removing unreachable block (ram,0x000107800fc4) */
/* WARNING: Removing unreachable block (ram,0x000107800638) */
/* WARNING: Removing unreachable block (ram,0x000107800650) */
/* WARNING: Removing unreachable block (ram,0x000107800654) */
/* WARNING: Removing unreachable block (ram,0x00010780065c) */
/* WARNING: Removing unreachable block (ram,0x000107800664) */
/* WARNING: Removing unreachable block (ram,0x000107800668) */
/* WARNING: Removing unreachable block (ram,0x00010780066c) */
/* WARNING: Removing unreachable block (ram,0x000107800704) */
/* WARNING: Removing unreachable block (ram,0x000107800708) */
/* WARNING: Removing unreachable block (ram,0x000107800758) */
/* WARNING: Removing unreachable block (ram,0x000107800714) */
/* WARNING: Removing unreachable block (ram,0x000107800718) */
/* WARNING: Removing unreachable block (ram,0x00010780071c) */
/* WARNING: Removing unreachable block (ram,0x000107800724) */
/* WARNING: Removing unreachable block (ram,0x000107800728) */
/* WARNING: Removing unreachable block (ram,0x00010780072c) */
/* WARNING: Removing unreachable block (ram,0x000107800730) */
/* WARNING: Removing unreachable block (ram,0x000107800738) */
/* WARNING: Removing unreachable block (ram,0x00010780073c) */
/* WARNING: Removing unreachable block (ram,0x000107800740) */
/* WARNING: Removing unreachable block (ram,0x000107800760) */
/* WARNING: Removing unreachable block (ram,0x000107800764) */
/* WARNING: Removing unreachable block (ram,0x00010780076c) */
/* WARNING: Removing unreachable block (ram,0x000107800778) */
/* WARNING: Removing unreachable block (ram,0x000107800780) */
/* WARNING: Removing unreachable block (ram,0x000107800788) */
/* WARNING: Removing unreachable block (ram,0x0001078007a0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c8) */
/* WARNING: Removing unreachable block (ram,0x0001078007cc) */
/* WARNING: Removing unreachable block (ram,0x0001078007d4) */
/* WARNING: Removing unreachable block (ram,0x0001078007e4) */
/* WARNING: Removing unreachable block (ram,0x0001078007a8) */
/* WARNING: Removing unreachable block (ram,0x0001078007b0) */
/* WARNING: Removing unreachable block (ram,0x0001078007bc) */
/* WARNING: Removing unreachable block (ram,0x0001078007c0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c4) */
/* WARNING: Removing unreachable block (ram,0x00010780078c) */
/* WARNING: Removing unreachable block (ram,0x000107800794) */
/* WARNING: Removing unreachable block (ram,0x000107800798) */
/* WARNING: Removing unreachable block (ram,0x000107800748) */
/* WARNING: Removing unreachable block (ram,0x000107800670) */
/* WARNING: Removing unreachable block (ram,0x000107800678) */
/* WARNING: Removing unreachable block (ram,0x00010780067c) */
/* WARNING: Removing unreachable block (ram,0x000107800680) */
/* WARNING: Removing unreachable block (ram,0x000107800688) */
/* WARNING: Removing unreachable block (ram,0x000107800698) */
/* WARNING: Removing unreachable block (ram,0x000107800690) */
/* WARNING: Removing unreachable block (ram,0x0001078006a4) */
/* WARNING: Removing unreachable block (ram,0x0001078006ac) */
/* WARNING: Removing unreachable block (ram,0x0001078006b0) */
/* WARNING: Removing unreachable block (ram,0x0001078006b4) */
/* WARNING: Removing unreachable block (ram,0x0001078006bc) */
/* WARNING: Removing unreachable block (ram,0x0001078006c0) */
/* WARNING: Removing unreachable block (ram,0x0001078006c4) */
/* WARNING: Removing unreachable block (ram,0x0001078006c8) */
/* WARNING: Removing unreachable block (ram,0x0001078006d0) */
/* WARNING: Removing unreachable block (ram,0x0001078006d4) */
/* WARNING: Removing unreachable block (ram,0x0001078006d8) */
/* WARNING: Removing unreachable block (ram,0x0001078006e8) */
/* WARNING: Removing unreachable block (ram,0x0001078006f4) */
/* WARNING: Removing unreachable block (ram,0x0001078006e0) */
/* WARNING: Removing unreachable block (ram,0x000107800bcc) */
/* WARNING: Removing unreachable block (ram,0x000107800bd0) */
/* WARNING: Removing unreachable block (ram,0x000107800bd8) */
/* WARNING: Removing unreachable block (ram,0x000107800ca8) */
/* WARNING: Removing unreachable block (ram,0x000107800c74) */
/* WARNING: Removing unreachable block (ram,0x000107800d10) */
/* WARNING: Removing unreachable block (ram,0x000107800d28) */
/* WARNING: Removing unreachable block (ram,0x0001078010a4) */
/* WARNING: Removing unreachable block (ram,0x0001078010e4) */
/* WARNING: Removing unreachable block (ram,0x0001078010f0) */
/* WARNING: Removing unreachable block (ram,0x000107809878) */
/* WARNING: Removing unreachable block (ram,0x00010780987c) */

ulong **** FUN_107806ffc(ulong ***param_1,ulong ****param_2,ulong ****param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar5;
  bool bVar6;
  ulong ****ppppuVar7;
  ulong ****ppppuVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  ulong ****ppppuVar10;
  undefined8 extraout_x8_01;
  ulong ***pppuVar11;
  ulong ***pppuVar12;
  long unaff_x19;
  ulong ****unaff_x20;
  long lVar13;
  undefined *puVar14;
  ulong ***pppuVar15;
  ulong ***in_register_00005008;
  ulong ***pppuVar16;
  ulong ***pppuVar17;
  ulong ***unaff_d15;
  undefined1 auStack_270 [8];
  ulong ***pppuStack_268;
  ulong **ppuStack_260;
  ulong **ppuStack_258;
  ulong **ppuStack_250;
  ulong **ppuStack_248;
  long lStack_240;
  long lStack_238;
  ulong **ppuStack_230;
  ulong **ppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong **ppuStack_208;
  ulong *puStack_200;
  ulong **appuStack_1f8 [52];
  undefined8 uStack_58;
  undefined1 *puVar4;
  
  func_0x000107808a28();
  lVar13 = (long)*param_3 * -0x18;
  ppppuVar7 = param_3 + (long)*param_3 * 3 + -2;
  uStack_58 = extraout_x8_00;
  while( true ) {
    lVar13 = lVar13 + 0x18;
    bVar6 = lVar13 == 0x18;
    if (bVar6) break;
    ppuStack_230 = (ulong **)*unaff_x20;
    ppuStack_228 = (ulong **)unaff_x20[1];
    ppuStack_208 = (ulong **)unaff_x20[6];
    ppuStack_248 = (ulong **)unaff_x20[4];
    ppuStack_250 = (ulong **)unaff_x20[3];
    lStack_238 = (long)*ppuStack_228 - param_4;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    in_register_00005008 = ppppuVar7[1];
    param_1 = *ppppuVar7;
    puStack_200 = (ulong *)0x0;
    appuStack_1f8[0] = (ulong **)0x0;
    param_2 = (ulong ****)*ppuStack_230;
    param_3 = &pppuStack_268;
    pppuStack_268 = (ulong ***)ppppuVar7;
    ppuStack_260 = (ulong **)param_1;
    ppuStack_258 = (ulong **)in_register_00005008;
    lStack_240 = param_4;
    func_0x000107807804();
    if ((puStack_200 < *unaff_x20[1]) && ((ulong ***)appuStack_1f8[0] != (ulong ***)0x0)) {
      param_3 = (ulong ****)appuStack_1f8;
      param_2 = unaff_x20;
      FUN_107806ffc();
    }
    ppppuVar7 = ppppuVar7 + -3;
  }
  func_0x0001078087c4(uStack_58);
  if (bVar6) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000107809e08();
  puVar14 = &UNK_107807154;
  ppppuVar8 = param_2;
  func_0x000104bd46a0();
  puVar2 = auStack_270;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = puVar2;
    ppppuVar10 = ppppuVar8 + 1;
    iVar1 = *(int *)ppppuVar8;
    if (iVar1 == iVar1 >> 0x1f) break;
    if (iVar1 < 0) {
      ppppuVar10 = (ulong ****)*ppppuVar10;
    }
    *(ulong *****)(puVar4 + -0x40) = ppppuVar7;
    *(ulong *****)(puVar4 + -0x38) = &pppuStack_268;
    *(undefined8 *)(puVar4 + -0x30) = 0x18;
    *(ulong *****)(puVar4 + -0x28) = param_2;
    *(ulong *****)(puVar4 + -0x20) = unaff_x20;
    *(long *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined **)(puVar4 + -8) = puVar14;
    func_0x0001078087f8();
    *(undefined8 *)(puVar4 + -0x48) = extraout_x8_01;
    func_0x00010780936c();
    func_0x000107809ec0();
    *(ulong ****)(puVar4 + -0x68) = in_register_00005008;
    *(ulong ****)(puVar4 + -0x70) = param_1;
    *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(unaff_x19 + 0x58);
    func_0x0001078099b8();
    puVar14 = &UNK_1078071f4;
    puVar2 = puVar4 + -0xa0;
    ppppuVar8 = param_3;
    param_3 = ppppuVar10;
    puVar3 = puVar4;
  }
  if (iVar1 < 0) {
    ppppuVar10 = (ulong ****)*ppppuVar10;
  }
  pppuVar11 = *param_3;
  pppuVar12 = *ppppuVar10;
  pppuVar17 = (ulong ***)*pppuVar11;
  pppuVar16 = (ulong ***)pppuVar11[3];
  pppuVar15 = (ulong ***)pppuVar11[2];
  ppppuVar10[(long)pppuVar12 * 4 + 2] = (ulong ***)pppuVar11[1];
  ppppuVar10[(long)pppuVar12 * 4 + 1] = pppuVar17;
  ppppuVar10[(long)pppuVar12 * 4 + 4] = pppuVar16;
  ppppuVar10[(long)pppuVar12 * 4 + 3] = pppuVar15;
  *ppppuVar10 = (ulong ***)((long)pppuVar12 + 1U);
  if ((ulong ***)((long)pppuVar12 + 1U) < (ulong ***)0x11) {
    return ppppuVar8;
  }
  func_0x000107809884();
  *(undefined1 **)(puVar4 + 0x90) = puVar3 + -0x10;
  *(undefined **)(puVar4 + 0x98) = puVar14;
  ppppuVar7 = param_3;
  func_0x000107808a58();
  *(undefined8 *)(puVar4 + -0x10) = extraout_x8;
  *(undefined8 *)(puVar4 + -0x6a8) = 0;
  pppuVar12 = ppppuVar7[0xc];
  FUN_1077ffe04();
  pppuVar11 = pppuVar12;
  func_0x0001077ffc80();
  ppppuVar7 = ppppuVar10 + 1;
  func_0x000107801344(puVar4 + -0x460,ppppuVar7,ppppuVar7 + (long)*ppppuVar10 * 4);
  func_0x000107801344(puVar4 + -0x688,ppppuVar7,ppppuVar7 + (long)*ppppuVar10 * 4);
  func_0x0001078090c4();
  *(ulong ****)(puVar4 + -0x6f0) = pppuVar12;
  *(ulong *****)(puVar4 + -0x6e8) = param_3;
  *(ulong ****)(puVar4 + -0x6f8) = pppuVar11;
  uVar9 = 0;
  if (*(long *)(puVar4 + -0x238) != 0) {
    func_0x000107808c30();
    func_0x000107801438();
    uVar9 = *(undefined8 *)(puVar4 + -0x238);
  }
  func_0x000107808f7c(uVar9);
  *(ulong ****)(puVar4 + -0x6d0) = unaff_d15;
  do {
    func_0x0001078090b8();
    func_0x000107808a04();
    func_0x0001078088cc();
    func_0x0001078087d8();
    if ((double)pppuVar15 < *(double *)(puVar4 + -0x6d0)) {
code_r0x0001078003ac:
      *(ulong ****)(puVar4 + -0x6d0) = pppuVar15;
      unaff_d15 = pppuVar17;
    }
    else {
      bVar6 = false;
      bVar5 = true;
      if ((double)pppuVar15 == *(double *)(puVar4 + -0x6d0)) {
        bVar6 = false;
        bVar5 = true;
        if (!NAN((double)pppuVar17) && !NAN((double)unaff_d15)) {
          bVar6 = (double)pppuVar17 == (double)unaff_d15;
          bVar5 = (double)unaff_d15 <= (double)pppuVar17;
        }
      }
      if (!bVar5 || bVar6) goto code_r0x0001078003ac;
    }
    func_0x000107808730();
    func_0x00010780a04c();
  } while( true );
}



/* Entry: 107807a88; end: 107807aab;  */

void FUN_107807a88(void)

{
  func_0x0001078096e0();
  func_0x000107807aac();
  return;
}



/* Entry: 107807ddc; end: 107807e03;  */

undefined8 * FUN_107807ddc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 107808080; end: 107808083;  */

void FUN_107808080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dfb48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078081c4; end: 1078082ef;  */

ulong * FUN_1078081c4(ulong *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  int extraout_w10;
  ulong *puVar5;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  puVar5 = param_1 + 1;
  *puVar5 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  if (param_4 == (param_2 >> 0x20) * (param_2 & 0xffffffff)) {
    func_0x0001073c809c(&uStack_38,param_2,param_4);
    uVar3 = uStack_38;
    uStack_38 = 0;
    func_0x0001073c8290(puVar5,uVar3);
    func_0x00010724e5b8(&uStack_38);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + (*param_1 >> 0x20) * (*param_1 & 0xffffffff);
      }
    } while (cVar1 != '\0');
    do {
      func_0x000107809b9c();
    } while (extraout_w10 != 0);
    if (param_4 != 0) {
      _memmove(*puVar5,param_3,param_4);
    }
    return param_1;
  }
  func_0x0001078099e4();
  func_0x00010527a174();
  ___cxa_throw(param_1,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1078082cc);
  (*pcVar4)();
}



/* Entry: 107808690; end: 10780869b;  */

undefined ** FUN_107808690(void)

{
  return &PTR_DAT_1109dfc88;
}



/* Entry: 10780a668; end: 10780a80b;  */

void FUN_10780a668(undefined8 *param_1,undefined4 param_2,undefined8 param_3,float param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,
                  long *param_10)

{
  long lVar1;
  float fVar2;
  short *psVar3;
  undefined1 uVar4;
  short *psVar5;
  short *psVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*param_10 != param_10[1]) {
    fVar10 = param_8 * 0.6 * param_9;
    if (param_4 - param_5 == 0.0) {
      fVar10 = 0.0;
    }
    fVar2 = param_5 - param_4;
    if (param_5 - param_4 <= param_7 - param_6) {
      fVar2 = param_7 - param_6;
    }
    uVar8 = (ulong)(uint)fVar2;
    func_0x00010780a254();
    lVar7 = 0;
    fVar14 = (float)uVar8 * 0.5;
    lVar1 = param_10[1];
    psVar5 = (short *)*param_10;
    psVar3 = psVar5;
    fVar12 = 0.0;
    for (; psVar6 = psVar3 + 2, psVar5 != (short *)(lVar1 + -4); psVar5 = psVar5 + 2) {
      func_0x0001077f4424(psVar5,psVar6);
      fVar11 = fVar12 + (float)uVar8;
      if (fVar14 < fVar11) {
        fVar14 = (fVar14 - fVar12) / (float)uVar8;
        fVar12 = fVar14 * (float)(int)psVar3[3] + (1.0 - fVar14) * (float)(int)psVar5[1];
        dVar9 = (double)(ulong)(uint)fVar12;
        iVar13 = (int)(fVar14 * (float)(int)*psVar6 + (1.0 - fVar14) * (float)(int)*psVar5);
        iVar15 = (int)fVar12;
        func_0x0001077f4454(psVar6,psVar5);
        fStack_84 = (float)dVar9;
        uStack_78 = 1;
        iStack_90 = iVar13;
        iStack_8c = iVar15;
        uStack_88 = param_2;
        lStack_80 = lVar7;
        if ((fVar10 == 0.0) ||
           (func_0x0001077f3e84(fVar2 * param_9,fVar10,param_3,param_10,&iStack_90),
           (int)param_10 != 0)) {
          param_1[1] = CONCAT44(fStack_84,uStack_88);
          *param_1 = CONCAT44(iStack_8c,iStack_90);
          param_1[3] = uStack_78;
          param_1[2] = lStack_80;
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
          *(undefined1 *)param_1 = 0;
        }
        *(undefined1 *)(param_1 + 4) = uVar4;
        return;
      }
      lVar7 = lVar7 + 1;
      psVar3 = psVar6;
      fVar12 = fVar11;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10780b50c; end: 10780b567;  */

void FUN_10780b50c(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780b4c4();
  func_0x00010780dcfc();
  func_0x00010780d7b8();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d910();
    func_0x00010780d7b8();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d804();
      func_0x00010780d7b8();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780d7f0();
        func_0x00010780d7b8();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010780db28();
        }
      }
    }
  }
  return;
}



/* Entry: 10780c2e4; end: 10780c387;  */

void FUN_10780c2e4(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long lVar6;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  iVar3 = *(int *)(lVar5 + 8);
  if (*(int *)(lVar5 + 8) <= *(int *)(lVar5 + 0xc)) {
    iVar3 = *(int *)(lVar5 + 0xc);
  }
  iVar1 = *(int *)(lVar4 + 8);
  if (*(int *)(lVar4 + 8) <= *(int *)(lVar4 + 0xc)) {
    iVar1 = *(int *)(lVar4 + 0xc);
  }
  lVar6 = *param_3;
  iVar2 = *(int *)(lVar6 + 8);
  if (*(int *)(lVar6 + 8) <= *(int *)(lVar6 + 0xc)) {
    iVar2 = *(int *)(lVar6 + 0xc);
  }
  if (iVar1 < iVar3) {
    if (iVar3 < iVar2) {
      *param_1 = lVar6;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar4;
      lVar5 = *param_3;
      iVar3 = *(int *)(lVar5 + 8);
      if (*(int *)(lVar5 + 8) <= *(int *)(lVar5 + 0xc)) {
        iVar3 = *(int *)(lVar5 + 0xc);
      }
      if (iVar3 <= iVar1) {
        return;
      }
      *param_2 = lVar5;
    }
    *param_3 = lVar4;
  }
  else if (iVar3 < iVar2) {
    *param_2 = lVar6;
    *param_3 = lVar5;
    func_0x00010780d784(*param_2);
    if (extraout_w11 < extraout_w10) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
      return;
    }
  }
  return;
}



/* Entry: 10780caf8; end: 10780cbdb;  */

void FUN_10780caf8(void)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long extraout_x8;
  long extraout_x11;
  long lVar3;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  long extraout_x15;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010780d854();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780cb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea661a)[extraout_x8] * 4 + 0x10780cb2c))(1);
    return;
  }
  func_0x00010780d8fc();
  func_0x00010780c9d4();
  func_0x00010780da80();
  lVar3 = extraout_x11;
  do {
    if (lVar3 == unaff_x20) {
      return;
    }
    func_0x00010780da70();
    bVar2 = *(int *)(extraout_x11_00 + 8) == *(int *)(extraout_x13 + 8);
    if (*(int *)(extraout_x13 + 8) < *(int *)(extraout_x11_00 + 8)) {
      do {
        func_0x00010780dca8();
        if (bVar2) {
          bVar2 = true;
          break;
        }
        iVar1 = *(int *)(*(long *)(unaff_x19 + extraout_x15 + -0x10) + 8);
        bVar2 = extraout_w12 == iVar1;
      } while (!bVar2 && iVar1 <= extraout_w12);
      func_0x00010780da40();
      if (bVar2) {
        func_0x00010780da10();
        return;
      }
    }
    func_0x00010780da20();
    lVar3 = extraout_x11_01;
  } while( true );
}



/* Entry: 10780d41c; end: 10780d5af;  */

void FUN_10780d41c(uint *param_1,uint *param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  func_0x00010780dd5c();
  uVar10 = *param_7;
  if ((uVar10 == 0) || (uVar17 = param_7[1], uVar17 == 0)) {
    return;
  }
  puVar7 = param_1;
  func_0x00010780aef0();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x00010780dbb0();
    func_0x0001074668c4();
    puVar11 = PTR___ZTISt16invalid_argument_110352248;
    puVar12 = (undefined8 *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
  }
  else {
    puVar7 = param_2;
    func_0x00010780aef0();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010780dbb0();
      func_0x0001074668c4();
      puVar11 = PTR___ZTISt16invalid_argument_110352248;
      puVar12 = (undefined8 *)PTR___ZNSt16invalid_argumentD1Ev_1103461e8;
    }
    else {
      uVar1 = *param_1 - uVar10;
      if (uVar10 <= *param_1) {
        uVar2 = param_1[1] - uVar17;
        bVar3 = false;
        bVar5 = true;
        if (uVar17 <= param_1[1]) {
          bVar5 = uVar1 <= (uint)param_3;
          bVar3 = (uint)param_3 == uVar1;
        }
        bVar4 = false;
        bVar6 = true;
        if (!bVar5 || bVar3) {
          bVar6 = uVar2 <= (uint)param_4;
          bVar4 = (uint)param_4 == uVar2;
        }
        if (!bVar6 || bVar4) {
          uVar1 = *param_2 - uVar10;
          if (uVar10 <= *param_2) {
            uVar10 = param_2[1] - uVar17;
            bVar3 = false;
            bVar5 = true;
            if (uVar17 <= param_2[1]) {
              bVar5 = uVar1 <= (uint)param_5;
              bVar3 = (uint)param_5 == uVar1;
            }
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar6 = uVar10 <= (uint)param_6;
              bVar4 = (uint)param_6 == uVar10;
            }
            if (!bVar6 || bVar4) {
              lVar13 = *(long *)(param_1 + 2);
              lVar15 = *(long *)(param_2 + 2);
              for (uVar18 = 0; uVar18 < uVar17; uVar18 = uVar18 + 1) {
                if (*param_7 != 0) {
                  _memmove(lVar15 + (param_5 & 0xffffffff) +
                           (ulong)*param_2 * (param_6 & 0xffffffff),
                           lVar13 + (param_3 & 0xffffffff) +
                           (ulong)*param_1 * (param_4 & 0xffffffff));
                  uVar17 = param_7[1];
                }
                param_6 = (ulong)((int)param_6 + 1);
                param_4 = (ulong)((int)param_4 + 1);
              }
              *(char *)(param_2 + 4) = (char)param_1[4];
              return;
            }
          }
          func_0x00010780dbb0();
          func_0x000104c03f74();
          puVar11 = PTR___ZTISt12out_of_range_110352240;
          puVar12 = (undefined8 *)PTR___ZNSt12out_of_rangeD1Ev_110346180;
          goto LAB_10780d588;
        }
      }
      func_0x00010780dbb0();
      func_0x000104c03f74();
      puVar11 = PTR___ZTISt12out_of_range_110352240;
      puVar12 = (undefined8 *)PTR___ZNSt12out_of_rangeD1Ev_110346180;
    }
  }
LAB_10780d588:
  uVar10 = (uint)puVar11;
  puVar8 = puVar7;
  ___cxa_throw();
  ___cxa_free_exception(puVar7);
  __Unwind_Resume();
  puVar7 = puVar8 + 2;
  puVar14 = *(uint **)puVar7;
  do {
    puVar16 = puVar7;
    if (puVar14 == (uint *)0x0) {
code_r0x00010780d618:
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      *(short *)((long)puVar9 + 0x1c) = (short)uVar10;
      uVar19 = *puVar12;
      puVar9[5] = puVar12[1];
      puVar9[4] = uVar19;
      uVar19 = *(undefined8 *)((long)puVar12 + 0xc);
      *(undefined8 *)((long)puVar9 + 0x34) = *(undefined8 *)((long)puVar12 + 0x14);
      *(undefined8 *)((long)puVar9 + 0x2c) = uVar19;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = puVar7;
      *(undefined8 **)puVar16 = puVar9;
      if (**(long **)puVar8 != 0) {
        *(long *)puVar8 = **(long **)puVar8;
      }
      func_0x00010002c5b0(*(undefined8 *)(puVar8 + 2),puVar9);
      *(long *)(puVar8 + 4) = *(long *)(puVar8 + 4) + 1;
      return;
    }
    while (puVar7 = puVar14, (uint)(ushort)puVar7[7] <= (uVar10 & 0xffff)) {
      if ((uVar10 & 0xffff) <= (uint)(ushort)puVar7[7]) {
        return;
      }
      puVar14 = *(uint **)(puVar7 + 2);
      if (*(uint **)(puVar7 + 2) == (uint *)0x0) {
        puVar16 = puVar7 + 2;
        goto code_r0x00010780d618;
      }
    }
    puVar14 = *(uint **)puVar7;
  } while( true );
}



/* Entry: 10780e8ec; end: 10780ea07;  */

long FUN_10780e8ec(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x0001078122d4();
  func_0x00010781253c();
  lVar6 = 0;
  uVar7 = *unaff_x19;
  uVar8 = unaff_x19[2];
  uVar3 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar2 = (byte)param_1;
  uVar11 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar3);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = unaff_x19[1];
      puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
      func_0x000107798a7c();
      if ((uVar4 & 1) != 0) goto LAB_10780e9d8;
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  puVar5 = unaff_x19;
  FUN_107810548();
  lVar6 = unaff_x19[1] + (long)puVar5 * 0x40;
  func_0x000107278b70();
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 **)(lVar6 + 0x10) = (undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 **)(lVar6 + 0x28) = (undefined8 *)(lVar6 + 0x30);
LAB_10780e9d8:
  return unaff_x19[1] + (long)puVar5 * 0x40 + 0x10;
}



/* Entry: 10780f388; end: 10780f3af;  */

undefined1  [16] FUN_10780f388(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x000107811bb0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10780f73c; end: 10780f73f;  */

void FUN_10780f73c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10780f954; end: 10780fbb7;  */

void FUN_10780f954(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  long lVar8;
  int extraout_w10;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined8 uVar15;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  ushort *puStack_68;
  
  func_0x0001078122d4();
  puVar10 = param_1 + 1;
  *param_1 = *param_2;
  func_0x00010780fbb8(puVar10);
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar11 != 0) {
    if ((ulong)(*(long *)(*(long *)(unaff_x19 + 8) + -8) + *(long *)(unaff_x19 + 0x20)) < uVar11) {
      if (uVar11 == 7) {
        lVar8 = 8;
      }
      else {
        lVar8 = (long)(uVar11 - 1) / 7 + uVar11;
      }
      func_0x00010781247c(lVar8);
      func_0x00010780fbf0(puVar10);
    }
    lVar8 = *(long *)(unaff_x20 + 8);
    puVar6 = *(undefined8 **)(unaff_x20 + 0x10);
    func_0x000107811080();
    lStack_80 = lVar8;
    puStack_78 = puVar6;
    func_0x0001078125c0();
    puVar6 = puStack_78;
    while (puStack_78 = puVar6, lVar8 != 0) {
      puVar12 = puVar6;
      func_0x00010780fc74(puVar6,puVar6 + 1);
      puVar5 = puVar10;
      func_0x00010ae6c8b4(puVar10,puVar12);
      bVar2 = (byte)puVar12 & 0x7f;
      lVar8 = *(long *)(unaff_x19 + 0x10);
      uVar14 = *(ulong *)(unaff_x19 + 0x18);
      lVar9 = *(long *)(unaff_x19 + 8);
      *(byte *)(lVar9 + (long)puVar5) = bVar2;
      *(byte *)(lVar9 + ((long)puVar5 - 7U & uVar14) + (uVar14 & 7)) = bVar2;
      puVar12 = (undefined8 *)(lVar8 + (long)puVar5 * 0x28);
      puVar5 = puVar12 + 1;
      *puVar12 = *puVar6;
      func_0x00010780fcd4(puVar5);
      uVar14 = puVar6[4];
      if (uVar14 != 0) {
        if ((ulong)(*(long *)(puVar12[1] + -8) + puVar12[4]) < uVar14) {
          if (uVar14 == 7) {
            lVar8 = 8;
          }
          else {
            lVar8 = (long)(uVar14 - 1) / 7 + uVar14;
          }
          func_0x00010781247c(lVar8);
          func_0x00010780fd10(puVar5);
        }
        lVar8 = puVar6[1];
        puVar7 = (ushort *)puVar6[2];
        func_0x000107811110();
        lStack_70 = lVar8;
        puStack_68 = puVar7;
        while (lStack_70 != 0) {
          uVar1 = *puStack_68;
          uVar13 = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar13;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = unaff_x27;
          uVar13 = SUB168(auVar3 * auVar4,8) ^ uVar13 * unaff_x27;
          puVar6 = puVar5;
          func_0x00010ae6c8b4(puVar5,uVar13);
          bVar2 = (byte)uVar13 & 0x7f;
          lVar8 = puVar12[2];
          uVar13 = puVar12[3];
          lVar9 = puVar12[1];
          *(byte *)(lVar9 + (long)puVar6) = bVar2;
          *(byte *)(lVar9 + ((long)puVar6 - 7U & uVar13) + (uVar13 & 7)) = bVar2;
          *(ushort *)(lVar8 + (long)puVar6 * 2) = uVar1;
          func_0x000107811170(&lStack_70);
        }
        puVar12[4] = uVar14;
        *(ulong *)(puVar12[1] + -8) = *(long *)(puVar12[1] + -8) - uVar14;
        lStack_70 = 0;
      }
      FUN_1078110dc(&lStack_80);
      puVar6 = puStack_78;
      lVar8 = lStack_80;
    }
    *(ulong *)(unaff_x19 + 0x20) = uVar11;
    *(ulong *)(*(long *)(unaff_x19 + 8) + -8) = *(long *)(*(long *)(unaff_x19 + 8) + -8) - uVar11;
  }
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
  if (lVar8 != 0) {
    do {
      func_0x000107812250();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(unaff_x19 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  return;
}



/* Entry: 10780fcd8; end: 10780fd0f;  */

void FUN_10780fcd8(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x000107812384();
  func_0x000107812410(param_1,(extraout_x8 + 0x11U & 0xfffffffffffffffe) + extraout_x8 * 2);
  func_0x00010781227c();
  func_0x0001000631d0(param_1,2);
  return;
}



/* Entry: 10780ff88; end: 10780ffaf;  */

void FUN_10780ff88(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078125e8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x000107812334();
  }
  return;
}



/* Entry: 1078101b0; end: 1078101ff;  */

long * FUN_1078101b0(long param_1,ushort param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= *(ushort *)(plVar5 + 4)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(ushort *)(plVar5 + 4)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < *(ushort *)(plVar3 + 4))) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 107810548; end: 1078105d3;  */

/* WARNING: Possible PIC construction at 0x0001078105ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078105b0) */

void FUN_107810548(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x0001078121d4();
  func_0x000100061de0();
  func_0x000107812464();
  if ((extraout_x9 == 0) && (func_0x000107812494(), !(bool)in_ZR)) {
    func_0x000107812458();
    if ((!(bool)in_CY) || (func_0x0001078121f8(), !(bool)in_CY)) {
      func_0x0001078122ac();
      goto code_r0x0001078105d4;
    }
    func_0x000107812398();
    func_0x00010781220c();
  }
  func_0x00010781212c();
  func_0x0001078121c0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
code_r0x0001078105d4:
  func_0x000107812290();
  func_0x000107367a70();
  func_0x0001078124a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      func_0x00010786e8ec();
      func_0x0001078121e8();
      func_0x000107812174(unaff_w21 & 0x7f);
      func_0x000107810650(unaff_x25 + lVar1 * 0x40,param_2);
    }
    param_2 = param_2 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107810840; end: 107810873;  */

void FUN_107810840(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107812370();
  func_0x000107812410(param_1,unaff_x20 + extraout_x8 * 0x18);
  func_0x00010781227c();
  func_0x0001000631d0(param_1,0x18);
  return;
}



/* Entry: 107810b5c; end: 107810b67;  */

undefined ** FUN_107810b5c(void)

{
  return &PTR_DAT_1109dfeb8;
}



/* Entry: 107810efc; end: 107810f27;  */

void FUN_107810efc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078124f8(param_2,param_1,&PTR_DAT_1109dfea8);
  func_0x000107812448();
  return;
}



/* Entry: 1078110dc; end: 10781110f;  */

long * FUN_1078110dc(long *param_1)

{
  param_1[1] = param_1[1] + 0x28;
  *param_1 = *param_1 + 1;
  func_0x0001078110a4();
  return param_1;
}



/* Entry: 1078112bc; end: 1078112cf;  */

void FUN_1078112bc(void)

{
  func_0x000107811290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078119c4; end: 1078119cf;  */

long * FUN_1078119c4(long param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  func_0x0001078124b8();
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (ulong)plVar3[4] <= *param_3) {
        if (*param_3 <= (ulong)plVar3[4]) goto code_r0x000107811a18;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto code_r0x000107811a18;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
code_r0x000107811a18:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 107811b70; end: 107811baf;  */

void FUN_107811b70(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010780f7fc(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107811d88; end: 107811e7f;  */

void FUN_107811d88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
    uVar2 = *puVar1;
    puStack_28[1] = puVar1[1];
    *puStack_28 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_28 = puStack_28 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    func_0x00010726b09c(param_2);
  }
  func_0x000107811e10(&uStack_50);
  return;
}



/* Entry: 107812048; end: 107812087;  */

void FUN_107812048(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010780f5e8(param_3);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 107812a2c; end: 107812ae3;  */

void FUN_107812a2c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x38) * 0x38;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    func_0x0001077ff70c(lVar2,lVar3);
    lVar2 = lVar2 + 0x38;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x38) {
    func_0x000107812b60();
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10781311c; end: 107813143;  */

undefined8 * FUN_10781311c(undefined8 *param_1)

{
  func_0x0001096f6e98(*param_1);
  return param_1;
}



/* Entry: 1078132f4; end: 107813317;  */

void FUN_1078132f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107813544; end: 10781355f;  */

void FUN_107813544(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x80) {
    func_0x000107813634(param_4,uVar1);
    param_4 = lStack_48 + 0x80;
  }
  uStack_58 = 1;
  func_0x000107813600(param_1,param_2,param_3);
  func_0x000107813678(&uStack_70);
  return;
}



/* Entry: 1078137a0; end: 1078137cb;  */

long FUN_1078137a0(undefined8 param_1,ulong *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(ulong *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 107813f90; end: 107813fdb;  */

long FUN_107813f90(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  double dVar5;
  undefined8 uStack_28;
  
  func_0x00010782262c(param_3);
  lVar2 = param_2 + 0x38;
  func_0x0001078228ec();
  func_0x000107822da0();
  func_0x000107821dac(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x000107822674();
  func_0x00010724b3d8();
  func_0x000107822028();
  lVar3 = *(long *)(param_2 + 0x70);
  plVar1 = (long *)(lVar2 + 0x1110);
  if (*(char *)(lVar2 + 0x1118) == '\0') {
    plVar1 = (long *)(param_2 + 0x70);
  }
  if (lVar3 <= *plVar1) {
    lVar3 = *plVar1;
  }
  dVar5 = *(double *)(param_3 + 0x78);
  _log2(dVar5);
  fVar4 = (float)dVar5;
  func_0x0001078227d8(fVar4,*(undefined4 *)(lVar2 + 0x1148));
  return (long)((1.0 - fVar4) * (float)lVar3);
}



/* Entry: 1078149a4; end: 1078149a7;  */

long FUN_1078149a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  code *extraout_x8;
  long *plVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x000107822a84();
  plVar3 = (long *)(lVar2 + 0x30);
  *(long *)(*plVar3 + 0x400000) = *plVar3;
  lVar4 = *(long *)(lVar2 + 0x20);
  uStack_38 = CONCAT71(uStack_38._1_7_,1);
  lStack_40 = lVar4;
  __ZNSt3__119__shared_mutex_base4lockEv(lVar4);
  if ((ulong)(*(long *)(lVar4 + 0x100) - *(long *)(lVar4 + 0xf8) >> 4) < *(ulong *)(lVar4 + 0xa8)) {
    func_0x00010781f884((long *)(lVar4 + 0xf8),plVar3);
  }
  else {
    if (*(long *)(lVar4 + 0xf0) == 0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10781498c);
      (*pcVar1)();
    }
    func_0x0001078229b8();
    (*extraout_x8)();
  }
  func_0x0001078228e4();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x00010781f6d4(&lStack_40);
  func_0x00010781f6d4(&uStack_50);
  FUN_10781f9c8(param_1 + 5000);
  func_0x00010781bf90(param_1 + 0x1368);
  func_0x00010781c024(param_1 + 0x1348);
  func_0x0001074ae918(param_1 + 0x1330);
  func_0x000107261dac(param_1 + 0x1310);
  func_0x00010781c0d0(param_1 + 0x12f8);
  func_0x00010781c0d0(param_1 + 0x12e0);
  func_0x00010781c134(param_1 + 0x12b8);
  func_0x0001074c31ac(param_1 + 0x12a0);
  func_0x0001074c31ac(param_1 + 0x1288);
  func_0x00010781f980(param_1 + 0x1260);
  func_0x00010781c17c(param_1 + 0x1238);
  func_0x00010781c1b4(param_1 + 0x1210);
  func_0x00010781c1ec(param_1 + 0x11e8);
  func_0x00010781c224(param_1 + 0x11c0);
  func_0x00010781c25c(param_1 + 0x1198);
  func_0x00010781c294(param_1 + 0x1178);
  func_0x0001074f6404(param_1 + 0x1158);
  func_0x00010781c31c(param_1 + 0x40);
  func_0x00010781f6d4(plVar3);
  func_0x0001074fa24c((long *)(lVar2 + 0x20));
  func_0x0001074fafd0(param_1 + 8);
  return param_1;
}



/* Entry: 107817360; end: 1078173db;  */

void FUN_107817360(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  if (((((param_2 & 1) == 0) && ((*(byte *)(*param_1 + 0xa60) & 1) != 0)) &&
      (lVar4 = param_1[1], *(char *)(lVar4 + 0x1168) == '\x01')) && (*(long *)(lVar4 + 0x1158) != 0)
     ) {
    lVar5 = param_1[2];
    lVar2 = *(long *)(lVar4 + 0x1158) + 0x1210;
    func_0x000107820220(lVar2,*(undefined4 *)(lVar5 + 0x658));
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(lVar2 + 0x14);
      puVar3 = (undefined1 *)(lVar4 + 0x1210);
      func_0x0001078202c0(puVar3,lVar5 + 0x658);
      *puVar3 = uVar1;
    }
  }
  return;
}



/* Entry: 107818c18; end: 107818c8b;  */

float FUN_107818c18(float param_1,float param_2,undefined8 param_3)

{
  float in_s5;
  float unaff_s9;
  float unaff_s13;
  
  func_0x000107822bf0();
  func_0x0001078253e8();
  param_2 = param_2 + -0.5;
  func_0x000107822e54(param_3);
  return in_s5 * (param_2 - (unaff_s13 * (param_1 + -0.5)) / unaff_s9);
}



/* Entry: 10781962c; end: 107819703;  */

uint FUN_10781962c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107823144();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = *(long *)(param_1 + 0x88);
  for (lVar2 = *(long *)(param_1 + 0x80); lVar2 != lVar1; lVar2 = lVar2 + 0xa8) {
    if (((*(byte *)(lVar2 + 0x78) & 1) == 0) && (*(char *)(lVar2 + 0x8d) == '\x01')) {
      for (uVar3 = 0; uVar3 < (ulong)(*(long *)(lVar2 + 0x68) - *(long *)(lVar2 + 0x60) >> 2);
          uVar3 = uVar3 + 1) {
        func_0x000107822958(*(undefined4 *)(lVar2 + 0x90));
        func_0x00010740b938();
      }
    }
    else {
      func_0x0001078229ac(*(undefined8 *)(lVar2 + 0x68));
      func_0x00010740b970();
    }
  }
  func_0x0001078195fc(uVar4,uVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  func_0x00010740c664();
  return (uint)uVar4 ^ 1;
}



/* Entry: 10781a490; end: 10781a507;  */

undefined1  [16] FUN_10781a490(int param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_3 == 1) {
    uVar2 = *(ulong *)(param_2 + 0x618);
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = *(undefined8 *)(param_2 + 0x620);
  }
  else if (param_1 == 1) {
    uVar2 = *(ulong *)(param_2 + 0x5f8);
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = *(undefined8 *)(param_2 + 0x600);
  }
  else if (param_1 == 2) {
    uVar2 = *(ulong *)(param_2 + 0x608);
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = *(undefined8 *)(param_2 + 0x610);
  }
  else if (param_1 == 3) {
    uVar2 = *(ulong *)(param_2 + 0x5e8);
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = *(undefined8 *)(param_2 + 0x5f0);
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  auVar4._0_8_ = uVar2 & 0xff | uVar3;
  auVar4._8_8_ = uVar1;
  return auVar4;
}



/* Entry: 10781aaa4; end: 10781aad7;  */

void FUN_10781aaa4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x80;
    func_0x00010781f5e8();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10781b65c; end: 10781b68f;  */

void FUN_10781b65c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *extraout_x8;
  int extraout_w11;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107822390();
      param_1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107822064();
  return;
}



/* Entry: 10781ba70; end: 10781ba83;  */

undefined8 FUN_10781ba70(void)

{
  return 0x3f800000;
}



/* Entry: 10781bb90; end: 10781bbab;  */

void FUN_10781bb90(long param_1)

{
  func_0x00010781bbac();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10781bca0; end: 10781bd0f;  */

void FUN_10781bca0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x400020;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e02a0;
  puVar1[0x80003] = puVar1 + 3;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10781bdd4; end: 10781bddf;  */

void FUN_10781bdd4(void)

{
  func_0x000107822090();
  func_0x000107821f80();
  func_0x000107821ec8();
  return;
}



/* Entry: 10781c070; end: 10781c133;  */

long FUN_10781c070(long param_1)

{
  func_0x00010781c098(param_1 + 0x38);
  func_0x000107822ee4();
  return param_1;
}



/* Entry: 10781c7e8; end: 10781c98b;  */

void FUN_10781c7e8(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 uStack_ac;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  char cStack_88;
  
  bVar3 = false;
  fStack_bc = (float)((uint)fStack_bc & 0xffffff00);
  fVar10 = fStack_bc;
  for (; param_2 != param_3; param_2 = param_2 + 0x14) {
    func_0x0001077f7764(&dStack_a8,param_1,param_2);
    if (cStack_88 == '\x01') {
      fVar5 = 0.0;
      fVar4 = 0.0;
      if (param_4 != 0) {
        fVar4 = ((float)dStack_a8 + (float)dStack_a8) / (float)param_4 + -1.0;
      }
      if (param_5 != 0) {
        fVar5 = ((float)dStack_a0 + (float)dStack_a0) / (float)param_5 + -1.0;
      }
      fVar7 = 0.0;
      fVar6 = 0.0;
      if (param_4 != 0) {
        fVar6 = ((float)dStack_98 + (float)dStack_98) / (float)param_4 + -1.0;
      }
      if (param_5 != 0) {
        fVar7 = ((float)dStack_90 + (float)dStack_90) / (float)param_5 + -1.0;
      }
      fVar9 = -fVar5;
      fVar8 = -fVar7;
      if (bVar3) {
        if (fVar4 <= fVar10) {
          fVar10 = fVar4;
        }
        if (fVar9 <= unaff_s14) {
          unaff_s14 = fVar9;
        }
        if (unaff_s13 <= fVar4) {
          unaff_s13 = fVar4;
        }
        if (unaff_s12 <= fVar9) {
          unaff_s12 = fVar9;
        }
        if (fVar6 <= fVar10) {
          fVar10 = fVar6;
        }
        if (fVar8 <= unaff_s14) {
          unaff_s14 = fVar8;
        }
        if (unaff_s13 <= fVar6) {
          unaff_s13 = fVar6;
        }
        bVar3 = NAN(unaff_s12) || NAN(fVar8);
        bVar2 = unaff_s12 == fVar8;
        bVar1 = unaff_s12 < fVar8;
        fVar9 = unaff_s12;
      }
      else {
        fVar10 = fVar4;
        if (fVar6 <= fVar4) {
          fVar10 = fVar6;
        }
        unaff_s14 = fVar9;
        if (fVar5 <= fVar7) {
          unaff_s14 = fVar8;
        }
        unaff_s13 = fVar4;
        if (fVar4 <= fVar6) {
          unaff_s13 = fVar6;
        }
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar7) && !NAN(fVar5)) {
          bVar1 = fVar7 < fVar5;
          bVar2 = fVar7 == fVar5;
          bVar3 = false;
        }
      }
      unaff_s12 = fVar9;
      if (bVar2 || bVar1 != bVar3) {
        unaff_s12 = fVar8;
      }
      bVar3 = true;
    }
  }
  dStack_a8 = 0.0;
  dStack_a0 = 0.0;
  fStack_bc = fVar10;
  fStack_b8 = unaff_s14;
  fStack_b4 = unaff_s13;
  fStack_b0 = unaff_s12;
  uStack_ac = bVar3;
  func_0x00010755df6c(&fStack_bc,&dStack_a8);
  return;
}



/* Entry: 10781cdc0; end: 10781cde7;  */

/* WARNING: Possible PIC construction at 0x00010781cdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781cdd8) */

long * FUN_10781cdc0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10781cf7c; end: 10781cfa7;  */

undefined8 * FUN_10781cf7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0410;
  FUN_10781cdc0(param_1 + 1);
  return param_1;
}



/* Entry: 10781d104; end: 10781d117;  */

/* WARNING: Possible PIC construction at 0x00010781d230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781d234) */
/* WARNING: Removing unreachable block (ram,0x00010781d270) */
/* WARNING: Removing unreachable block (ram,0x00010781d2c4) */
/* WARNING: Removing unreachable block (ram,0x00010781d2fc) */
/* WARNING: Removing unreachable block (ram,0x00010781d310) */
/* WARNING: Removing unreachable block (ram,0x00010781d380) */
/* WARNING: Removing unreachable block (ram,0x00010781d31c) */
/* WARNING: Removing unreachable block (ram,0x00010781d390) */
/* WARNING: Removing unreachable block (ram,0x00010781d32c) */
/* WARNING: Removing unreachable block (ram,0x00010781d364) */
/* WARNING: Removing unreachable block (ram,0x00010781d39c) */
/* WARNING: Removing unreachable block (ram,0x00010781d368) */
/* WARNING: Removing unreachable block (ram,0x00010781d3a4) */
/* WARNING: Removing unreachable block (ram,0x00010781d374) */
/* WARNING: Removing unreachable block (ram,0x00010781d3ac) */
/* WARNING: Removing unreachable block (ram,0x00010781d3b0) */
/* WARNING: Removing unreachable block (ram,0x00010781d3e8) */
/* WARNING: Removing unreachable block (ram,0x00010781d3c8) */
/* WARNING: Removing unreachable block (ram,0x00010781d3f0) */
/* WARNING: Removing unreachable block (ram,0x00010781d3d0) */
/* WARNING: Removing unreachable block (ram,0x00010781d3dc) */
/* WARNING: Removing unreachable block (ram,0x00010781d3f8) */
/* WARNING: Removing unreachable block (ram,0x00010781d404) */
/* WARNING: Removing unreachable block (ram,0x00010781d40c) */
/* WARNING: Removing unreachable block (ram,0x00010781d428) */
/* WARNING: Removing unreachable block (ram,0x00010781d440) */
/* WARNING: Removing unreachable block (ram,0x00010781d430) */
/* WARNING: Removing unreachable block (ram,0x00010781d438) */
/* WARNING: Removing unreachable block (ram,0x00010781d444) */
/* WARNING: Removing unreachable block (ram,0x00010781d44c) */
/* WARNING: Removing unreachable block (ram,0x00010781d450) */
/* WARNING: Removing unreachable block (ram,0x00010781d4c0) */
/* WARNING: Removing unreachable block (ram,0x00010781d4c8) */
/* WARNING: Removing unreachable block (ram,0x00010781d4f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d4e4) */
/* WARNING: Removing unreachable block (ram,0x00010781d500) */
/* WARNING: Removing unreachable block (ram,0x00010781d4ec) */
/* WARNING: Removing unreachable block (ram,0x00010781d508) */
/* WARNING: Removing unreachable block (ram,0x00010781d50c) */
/* WARNING: Removing unreachable block (ram,0x00010781d520) */
/* WARNING: Removing unreachable block (ram,0x00010781d538) */
/* WARNING: Removing unreachable block (ram,0x00010781d550) */
/* WARNING: Removing unreachable block (ram,0x00010781d540) */
/* WARNING: Removing unreachable block (ram,0x00010781d548) */
/* WARNING: Removing unreachable block (ram,0x00010781d554) */
/* WARNING: Removing unreachable block (ram,0x00010781d518) */
/* WARNING: Removing unreachable block (ram,0x00010781d558) */
/* WARNING: Removing unreachable block (ram,0x00010781d418) */
/* WARNING: Removing unreachable block (ram,0x00010781d574) */
/* WARNING: Removing unreachable block (ram,0x00010781d580) */
/* WARNING: Removing unreachable block (ram,0x00010781d5b4) */
/* WARNING: Removing unreachable block (ram,0x00010781d594) */
/* WARNING: Removing unreachable block (ram,0x00010781d5b8) */
/* WARNING: Removing unreachable block (ram,0x00010781d59c) */
/* WARNING: Removing unreachable block (ram,0x00010781d5a8) */
/* WARNING: Removing unreachable block (ram,0x00010781d5c0) */
/* WARNING: Removing unreachable block (ram,0x00010781d5d0) */
/* WARNING: Removing unreachable block (ram,0x00010781d5d8) */
/* WARNING: Removing unreachable block (ram,0x00010781d5f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d60c) */
/* WARNING: Removing unreachable block (ram,0x00010781d5fc) */
/* WARNING: Removing unreachable block (ram,0x00010781d604) */
/* WARNING: Removing unreachable block (ram,0x00010781d610) */
/* WARNING: Removing unreachable block (ram,0x00010781d618) */
/* WARNING: Removing unreachable block (ram,0x00010781d674) */
/* WARNING: Removing unreachable block (ram,0x00010781d67c) */
/* WARNING: Removing unreachable block (ram,0x00010781d6a8) */
/* WARNING: Removing unreachable block (ram,0x00010781d698) */
/* WARNING: Removing unreachable block (ram,0x00010781d6b4) */
/* WARNING: Removing unreachable block (ram,0x00010781d6a0) */
/* WARNING: Removing unreachable block (ram,0x00010781d6bc) */
/* WARNING: Removing unreachable block (ram,0x00010781d6c0) */
/* WARNING: Removing unreachable block (ram,0x00010781d6dc) */
/* WARNING: Removing unreachable block (ram,0x00010781d6f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d70c) */
/* WARNING: Removing unreachable block (ram,0x00010781d6fc) */
/* WARNING: Removing unreachable block (ram,0x00010781d704) */
/* WARNING: Removing unreachable block (ram,0x00010781d710) */
/* WARNING: Removing unreachable block (ram,0x00010781d6cc) */
/* WARNING: Removing unreachable block (ram,0x00010781d714) */
/* WARNING: Removing unreachable block (ram,0x00010781d5e4) */
/* WARNING: Removing unreachable block (ram,0x00010781d72c) */
/* WARNING: Removing unreachable block (ram,0x00010781d5f0) */
/* WARNING: Removing unreachable block (ram,0x00010781d424) */
/* WARNING: Removing unreachable block (ram,0x00010781d300) */

float * FUN_10781d104(long param_1,long param_2)

{
  float fVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long extraout_x8;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float in_s5;
  float unaff_s12;
  float unaff_s13;
  float fStack_1b8;
  float fStack_1b4;
  float afStack_d8 [14];
  
  plVar3 = (long *)(param_2 + 0x60);
  uVar4 = 0;
  lVar5 = param_1;
  func_0x000107821e20();
  uVar9 = *(undefined8 *)(*plVar3 + 0x14);
  uVar12 = *(undefined8 *)(*plVar3 + 0xc);
  fVar7 = (float)uVar9 - (float)uVar12;
  fVar10 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
  if (((long *)**(undefined8 **)(lVar5 + 8))[1] - *(long *)**(undefined8 **)(lVar5 + 8) <<
      ((ulong)*(byte *)(*(long *)(lVar5 + 0x10) + 0x6d0) & 0x3f) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
      return (float *)0x7;
    }
    ___stack_chk_fail();
    fVar11 = (float)uVar12;
    uVar2 = (uint)plVar3;
    pfVar6 = afStack_d8;
    FUN_10781dab0(pfVar6);
    func_0x000107822028();
  }
  else {
    pfVar6 = (float *)(ulong)**(byte **)**(undefined8 **)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    uVar2 = (uint)*(byte *)(lVar5 + 0x24);
    uVar4 = (uint)*(byte *)(lVar5 + 0x25);
    in_s5 = (float)*(double *)(*(long *)(lVar5 + 0x10) + 0x70);
    fVar11 = fVar10;
  }
  func_0x000107822bf0();
  func_0x0001078253e8();
  fVar8 = fVar11 + -0.5;
  fVar1 = fVar8 * unaff_s12;
  func_0x000107822e54(pfVar6);
  fStack_1b8 = -((fVar7 + -0.5) * unaff_s13) + fVar10 * fVar8;
  fStack_1b4 = -fVar1 + fVar10 * fVar11;
  if (uVar2 != 0) {
    if (uVar4 == 0) {
      in_s5 = -in_s5;
    }
    pfVar6 = &fStack_1b8;
    func_0x000107501ee0(in_s5,pfVar6);
  }
  return pfVar6;
}



/* Entry: 10781dab0; end: 10781dad3;  */

void FUN_10781dab0(long param_1)

{
  func_0x000107822018();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781dcf8; end: 10781dd17;  */

void FUN_10781dcf8(void)

{
  func_0x000107821f80();
  func_0x000107821ec8();
  return;
}



/* Entry: 10781dfd8; end: 10781e07f;  */

long FUN_10781dfd8(undefined8 param_1,long param_2)

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



/* Entry: 10781e474; end: 10781e47f;  */

void FUN_10781e474(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107822090();
  func_0x0001078221e8();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x0001078230cc();
      while (func_0x00010782300c(), !(bool)in_ZR) {
        unaff_x19[2] = extraout_x8 + -0x10;
        func_0x0001072792b8();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return;
}



/* Entry: 10781ea84; end: 10781eb1f;  */

/* WARNING: Possible PIC construction at 0x00010781ec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ebb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781eda8) */
/* WARNING: Removing unreachable block (ram,0x00010781edb4) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781eed8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef08) */
/* WARNING: Removing unreachable block (ram,0x00010781ef38) */
/* WARNING: Removing unreachable block (ram,0x00010781efa8) */
/* WARNING: Removing unreachable block (ram,0x00010781efd0) */
/* WARNING: Removing unreachable block (ram,0x00010781efd8) */
/* WARNING: Removing unreachable block (ram,0x00010781f038) */
/* WARNING: Removing unreachable block (ram,0x00010781efe8) */
/* WARNING: Removing unreachable block (ram,0x00010781eff0) */
/* WARNING: Removing unreachable block (ram,0x00010781ef44) */
/* WARNING: Removing unreachable block (ram,0x00010781ef88) */
/* WARNING: Removing unreachable block (ram,0x00010781f048) */
/* WARNING: Removing unreachable block (ram,0x00010781ef74) */
/* WARNING: Removing unreachable block (ram,0x00010781ef60) */
/* WARNING: Removing unreachable block (ram,0x00010781ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010781f05c) */
/* WARNING: Removing unreachable block (ram,0x00010781f060) */
/* WARNING: Removing unreachable block (ram,0x00010781f094) */
/* WARNING: Removing unreachable block (ram,0x00010781f06c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeec) */
/* WARNING: Removing unreachable block (ram,0x00010781ede4) */
/* WARNING: Removing unreachable block (ram,0x00010781ee08) */
/* WARNING: Removing unreachable block (ram,0x00010781ee38) */
/* WARNING: Removing unreachable block (ram,0x00010781ee4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee64) */
/* WARNING: Removing unreachable block (ram,0x00010781ee58) */
/* WARNING: Removing unreachable block (ram,0x00010781ee60) */
/* WARNING: Removing unreachable block (ram,0x00010781ee74) */
/* WARNING: Removing unreachable block (ram,0x00010781ee7c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeb0) */
/* WARNING: Removing unreachable block (ram,0x00010781eec4) */
/* WARNING: Removing unreachable block (ram,0x00010781eebc) */
/* WARNING: Removing unreachable block (ram,0x00010781ee84) */
/* WARNING: Removing unreachable block (ram,0x00010781ee88) */
/* WARNING: Removing unreachable block (ram,0x00010781ee98) */
/* WARNING: Removing unreachable block (ram,0x00010781eeac) */
/* WARNING: Removing unreachable block (ram,0x00010781edf8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecd4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecc8) */
/* WARNING: Removing unreachable block (ram,0x00010781ec30) */
/* WARNING: Removing unreachable block (ram,0x00010781ec40) */
/* WARNING: Removing unreachable block (ram,0x00010781ece4) */
/* WARNING: Removing unreachable block (ram,0x00010781ec4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ec6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010781ec88) */
/* WARNING: Removing unreachable block (ram,0x00010781ec94) */
/* WARNING: Removing unreachable block (ram,0x00010781ebb4) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * FUN_10781ea84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar10;
  code *extraout_x8_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 auStack_1cb0 [226];
  undefined8 *puStack_15a0;
  undefined8 *puStack_1598;
  undefined8 *puStack_1590;
  undefined8 **ppuStack_1580;
  undefined *puStack_1578;
  undefined1 auStack_1570 [3600];
  undefined8 uStack_760;
  undefined8 auStack_750 [10];
  undefined8 *puStack_700;
  undefined *puStack_6f8;
  undefined8 auStack_c0 [15];
  undefined8 uStack_48;
  
  func_0x000107821e20();
  bVar4 = param_1 == param_2;
  uStack_48 = extraout_x8;
  if (!bVar4) {
    func_0x0001078220d8();
    while( true ) {
      unaff_x21 = unaff_x20;
      unaff_x20 = unaff_x21 + 0xe1;
      bVar4 = true;
      unaff_x22 = auStack_750;
      if (unaff_x20 == unaff_x19) break;
      param_1 = unaff_x20;
      func_0x000107822170();
      if ((int)param_1 != 0) {
        func_0x0001078220fc();
        do {
          puVar5 = unaff_x21 + 0xe1;
          func_0x000107822910();
          func_0x000107822140();
        } while (((ulong)puVar5 & 1) != 0);
        func_0x000107822e98(unaff_x21 + 0xe1);
        param_1 = auStack_c0;
        func_0x0001077f79bc();
      }
    }
  }
  func_0x000107821dac(uStack_48);
  if (bVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar9 = &UNK_10781eb20;
  func_0x0001078227a0();
  pppuVar12 = (undefined8 ***)&puStack_700;
  puVar2 = (undefined8 *)auStack_1570;
  puVar3 = (undefined8 *)auStack_1570;
  puStack_700 = (undefined8 *)&stack0xfffffffffffffff0;
  puStack_6f8 = puVar9;
  func_0x000107821e20();
  bVar4 = true;
  uStack_760 = extraout_x8_00;
  if (param_1 == param_2) {
code_r0x00010781ed04:
    func_0x000107821dac(uStack_760);
    if (bVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    puStack_1578 = &UNK_10781ed20;
    pppuVar13 = &ppuStack_1580;
    puVar2 = auStack_1cb0;
    puVar3 = auStack_1cb0;
    param_2 = auStack_1cb0;
    puStack_15a0 = unaff_x22;
    puStack_1598 = unaff_x21;
    puStack_1590 = unaff_x20;
    ppuStack_1580 = pppuVar12;
    func_0x000107822830();
    func_0x000107821e20();
    func_0x00010781f1f0(auStack_1cb0);
    puVar8 = unaff_x21 + -0xe1;
    func_0x00010781e77c();
    puVar5 = unaff_x19;
    if (((ulong)param_2 & 1) == 0) {
      do {
        puVar5 = puVar5 + 0xe1;
        if (unaff_x21 <= puVar5) break;
        func_0x0001078224a4();
      } while ((int)param_2 == 0);
    }
    else {
      do {
        puVar5 = puVar5 + 0xe1;
        func_0x0001078224a4();
      } while (((ulong)param_2 & 1) == 0);
    }
    if (puVar5 < unaff_x21) {
      do {
        func_0x000107822140();
      } while (((ulong)param_2 & 1) != 0);
    }
    if (puVar5 < unaff_x21) {
      func_0x00010782289c();
      puVar9 = &UNK_10781eda8;
      pppuVar12 = pppuVar13;
code_r0x00010781f098:
      unaff_x20 = param_2;
      *(undefined8 **)((long)puVar2 + -0x30) = unaff_x22;
      *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
      *(undefined8 **)((long)puVar2 + -0x20) = puVar5;
      *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
      *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar12;
      *(undefined **)((long)puVar2 + -8) = puVar9;
      pppuVar13 = (undefined8 ***)((long)puVar2 + -0x10);
      puVar3 = (undefined8 *)((long)puVar2 + -0x740);
      unaff_x21 = (undefined8 *)((long)puVar2 + -0x740);
      func_0x0001078220d8();
      func_0x000107821e20();
      *(undefined8 *)((long)puVar2 + -0x38) = extraout_x8_01;
      func_0x0001078220fc();
      func_0x00010782265c();
      puVar9 = &UNK_10781f0c8;
    }
    else {
      unaff_x21 = puVar5 + -0xe1;
      unaff_x20 = param_2;
      if (unaff_x19 != unaff_x21) {
        func_0x000107822910();
        unaff_x20 = unaff_x19;
      }
      func_0x000107822c2c();
      puVar9 = &UNK_10781ede4;
      unaff_x19 = auStack_1cb0;
    }
  }
  else {
    func_0x0001078220d8();
    unaff_x21 = (undefined8 *)(((long)param_2 - (long)param_1) / 0x708);
    if (0x708 < (long)param_2 - (long)param_1) {
      uVar11 = (ulong)((long)unaff_x21 + -2) >> 1;
      do {
        func_0x00010782289c();
        FUN_10781f27c();
        uVar11 = uVar11 - 1;
        param_2 = unaff_x19;
      } while (-1 < (long)uVar11);
    }
    for (; puVar5 = unaff_x20, param_2 != param_3; param_2 = param_2 + 0xe1) {
      param_1 = param_2;
      func_0x0001078224fc();
      if ((int)param_1 != 0) {
        puVar9 = &UNK_10781ebb4;
        puVar8 = unaff_x20;
        unaff_x22 = param_3;
        goto code_r0x00010781f098;
      }
    }
    unaff_x22 = (undefined8 *)((long)unaff_x21 + -2);
    bVar4 = unaff_x22 == (undefined8 *)0x0;
    if ((long)unaff_x21 < 2) goto code_r0x00010781ed04;
    func_0x0001078220fc();
    puVar7 = unaff_x20 + 0xe1;
    puVar8 = puVar7;
    if (2 < (long)unaff_x21) {
      puVar6 = puVar7;
      func_0x00010781e77c(puVar7,unaff_x20 + 0x1c2);
      puVar8 = unaff_x20 + 0x1c2;
      if ((int)puVar6 == 0) {
        puVar8 = puVar7;
      }
    }
    puVar9 = &UNK_10781ec30;
    unaff_x22 = puVar8;
    pppuVar13 = pppuVar12;
  }
  *(undefined8 **)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar3 + -0x20) = puVar5;
  *(undefined8 **)((long)puVar3 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar13;
  *(undefined **)((long)puVar3 + -8) = puVar9;
  func_0x0001078221e8();
  *unaff_x20 = *puVar8;
  func_0x000107822eb8(unaff_x20 + 1,puVar8 + 1);
  *(undefined2 *)(unaff_x19 + 0xd1) = *(undefined2 *)(puVar5 + 0xd1);
  puVar8 = unaff_x19 + 0xd2;
  cVar1 = *(char *)(unaff_x19 + 0xd6);
  if (cVar1 != *(char *)(puVar5 + 0xd6)) {
    if (cVar1 == '\0') {
      FUN_10781bb90(puVar8,puVar5 + 0xd2);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar1 == '\0') goto code_r0x00010781f1b0;
  puVar7 = (undefined8 *)unaff_x19[0xd5];
  unaff_x19[0xd5] = 0;
  if (puVar7 == puVar8) {
    uVar10 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar10);
  }
  else if (puVar7 != (undefined8 *)0x0) {
    uVar10 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar7 = (undefined8 *)puVar5[0xd5];
  if (puVar7 == (undefined8 *)0x0) {
    unaff_x19[0xd5] = 0;
  }
  else if (puVar7 == puVar5 + 0xd2) {
    unaff_x19[0xd5] = puVar8;
    func_0x000107822650(puVar5[0xd5]);
    (*extraout_x8_02)();
  }
  else {
    unaff_x19[0xd5] = puVar7;
    puVar5[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar14 = puVar5[0xd8];
  uVar10 = puVar5[0xd7];
  uVar16 = puVar5[0xda];
  uVar15 = puVar5[0xd9];
  uVar18 = puVar5[0xdc];
  uVar17 = puVar5[0xdb];
  uVar19 = *(undefined8 *)((long)puVar5 + 0x6e1);
  *(undefined8 *)((long)unaff_x19 + 0x6e9) = *(undefined8 *)((long)puVar5 + 0x6e9);
  *(undefined8 *)((long)unaff_x19 + 0x6e1) = uVar19;
  unaff_x19[0xda] = uVar16;
  unaff_x19[0xd9] = uVar15;
  unaff_x19[0xdc] = uVar18;
  unaff_x19[0xdb] = uVar17;
  unaff_x19[0xd8] = uVar14;
  unaff_x19[0xd7] = uVar10;
  uVar10 = puVar5[0xdf];
  unaff_x19[0xe0] = puVar5[0xe0];
  unaff_x19[0xdf] = uVar10;
  return unaff_x19;
}



/* Entry: 10781f27c; end: 10781f3af;  */

void FUN_10781f27c(float param_1,float param_2,long *param_3,undefined1 *param_4,long *param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_710 [1680];
  long alStack_80 [15];
  undefined8 uStack_8;
  
  func_0x0001078227a0();
  func_0x000107821e20();
  uVar4 = param_4 + -2 == (undefined1 *)0x0;
  plVar7 = param_3;
  uStack_8 = extraout_x8;
  if (1 < (long)param_4) {
    puVar3 = (undefined1 *)(((long)param_5 - (long)param_3) / 0x708);
    puVar12 = (undefined1 *)((ulong)(param_4 + -2) >> 1);
    uVar4 = puVar12 == puVar3;
    unaff_x20 = param_3;
    if ((long)puVar3 <= (long)puVar12) {
      puVar1 = (undefined1 *)((long)puVar3 << 1 | 1);
      plVar7 = param_3 + (long)puVar1 * 0xe1;
      puVar3 = (undefined1 *)((long)puVar3 * 2 + 2);
      uVar4 = puVar3 == param_4;
      plVar6 = plVar7;
      puVar13 = puVar1;
      if ((long)puVar3 < (long)param_4) {
        func_0x00010781e77c(plVar7,plVar7 + 0xe1);
        uVar4 = (int)plVar6 == 0;
        plVar6 = plVar7 + 0xe1;
        puVar13 = puVar3;
        if ((bool)uVar4) {
          plVar6 = plVar7;
          puVar13 = puVar1;
        }
      }
      plVar7 = plVar6;
      func_0x000107822430();
      unaff_x19 = param_4;
      if (((ulong)plVar7 & 1) == 0) {
        func_0x00010781f1f0(auStack_710,param_5);
        do {
          plVar7 = plVar6;
          iVar5 = (int)param_5;
          func_0x000107822910();
          uVar4 = puVar12 == puVar13;
          if ((long)puVar12 < (long)puVar13) break;
          puVar1 = (undefined1 *)((long)puVar13 << 1 | 1);
          plVar9 = param_3 + (long)puVar1 * 0xe1;
          puVar3 = (undefined1 *)((long)puVar13 * 2 + 2);
          uVar4 = puVar3 == param_4;
          plVar6 = plVar9;
          puVar13 = puVar1;
          if ((long)puVar3 < (long)param_4) {
            func_0x000107822430();
            iVar5 = (int)plVar6;
            uVar4 = iVar5 == 0;
            plVar6 = plVar9 + 0xe1;
            puVar13 = puVar3;
            if ((bool)uVar4) {
              plVar6 = plVar9;
              puVar13 = puVar1;
            }
          }
          func_0x000107822c2c();
          func_0x00010781e77c();
          param_5 = plVar7;
        } while (iVar5 == 0);
        func_0x00010781f0f0(plVar7,auStack_710);
        plVar7 = alStack_80;
        func_0x0001077f79bc();
        unaff_x19 = auStack_710;
      }
    }
  }
  func_0x000107821dac(uStack_8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078220d8();
  lVar2 = *plVar7;
  uVar8 = lVar2 + 0x40;
  func_0x0001077f5678();
  lVar10 = unaff_x20[3];
  lVar11 = 0xd40;
  do {
    if ((uVar8 & 0xff) != 0) {
      return;
    }
    uVar8 = lVar2 + 0x40;
    func_0x0001077f5678(param_1 + *(float *)(lVar10 + 0x10),param_2 + *(float *)(lVar10 + 0x14),
                        *(undefined4 *)(unaff_x20[2] + 0x20),uVar8,unaff_x19,lVar10 + 0x18,
                        lVar10 + 0x340);
    lVar10 = lVar10 + 0x350;
    lVar11 = lVar11 + -0x350;
  } while (lVar11 != 0);
  return;
}



/* Entry: 10781f770; end: 10781f81b;  */

void FUN_10781f770(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10781f9c8; end: 10781fa1b;  */

void FUN_10781f9c8(long param_1)

{
  func_0x000107822680();
  func_0x00010781f9f4();
  func_0x000107822330();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781fdd4; end: 10781fe53;  */

void FUN_10781fdd4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  plVar1 = param_1 + 2;
  lVar3 = *param_1;
  if ((ulong)((*plVar1 - lVar3) / 0x14) < 0x80) {
    lVar4 = param_1[1];
    lVar2 = 0x80;
    plStack_28 = plVar1;
    func_0x0001074c3124();
    lStack_40 = (long)plVar1 + (lVar4 - lVar3);
    lStack_30 = (long)plVar1 + lVar2 * 0x14;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    func_0x0001078225f0();
    FUN_1077f81b4();
    func_0x0001077f823c(&plStack_48);
  }
  return;
}



/* Entry: 107820118; end: 107820167;  */

void FUN_107820118(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107822680();
    func_0x00010781f9f4();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 107820808; end: 10782083f;  */

void FUN_107820808(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107822ae4();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001074c31ac(unaff_x20 + 0x18);
    }
    func_0x0001078224e8();
  }
  return;
}



/* Entry: 1078212b8; end: 1078213f7;  */

long FUN_1078212b8(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(uint *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 107821674; end: 1078216a3;  */

void FUN_107821674(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010002c974(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 107821864; end: 10782188f;  */

undefined8 * FUN_107821864(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xcf1094d3eaf86) {
    puVar1 = (undefined8 *)(param_2 * 0x13c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e0540;
  func_0x0001078218e8(param_1 + 3);
  return param_1;
}



/* Entry: 1078219a8; end: 1078219c3;  */

void FUN_1078219a8(void)

{
  func_0x0001078221c0();
  func_0x0001078219c4();
  return;
}



/* Entry: 107821ae8; end: 107821c3b;  */

void FUN_107821ae8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

{
  ulong extraout_x8;
  ulong uVar1;
  undefined8 *unaff_x19;
  ulong uStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001078228a8();
  *param_2 = 0;
  param_2[1] = 0;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  uVar1 = extraout_x8;
  if ((char)param_4[2] == '\x01') {
    uVar1 = param_4[1];
    uStack_90 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  uStack_48 = (char)param_4[2] != '\0';
  if ((bool)uStack_48) {
    uStack_58 = uStack_90;
    uStack_50 = uVar1;
  }
  func_0x000107821934();
  func_0x0001074f6404(&uStack_58);
  func_0x0001074fa24c(&uStack_40);
  func_0x000107822274();
  *unaff_x19 = &PTR_DAT_1109e00c0;
  unaff_x19[0x277] = 0;
  unaff_x19[0x276] = 0;
  unaff_x19[0x279] = 0;
  unaff_x19[0x278] = 0;
  *(undefined4 *)(unaff_x19 + 0x27a) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x27b) = 0;
  *(undefined1 *)(unaff_x19 + 0x27d) = 0;
  unaff_x19[0x280] = 0;
  unaff_x19[0x27f] = 0;
  unaff_x19[0x27e] = unaff_x19 + 0x27f;
  unaff_x19[0x288] = 0;
  *(undefined1 *)(unaff_x19 + 0x289) = 0;
  unaff_x19[0x282] = 0;
  unaff_x19[0x281] = 0;
  unaff_x19[0x284] = 0;
  unaff_x19[0x283] = 0;
  unaff_x19[0x286] = 0;
  unaff_x19[0x285] = 0;
  *(undefined1 *)(unaff_x19 + 0x287) = 0;
  func_0x0001078221e0();
  func_0x0001074fa24c(&uStack_78);
  func_0x0001074fafd0(&uStack_68);
  return;
}



/* Entry: 1078232b4; end: 10782336f;  */

/* WARNING: Possible PIC construction at 0x0001078236d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010782371c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078236d8) */
/* WARNING: Removing unreachable block (ram,0x000107823720) */

void FUN_1078232b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,float param_6,float param_7,float param_8,float *param_9,
                  long param_10,int param_11)

{
  ulong uVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  float *pfVar7;
  float **ppfVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float **extraout_x8;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  long *plVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  undefined *puVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  undefined8 unaff_d13;
  float fVar30;
  ulong unaff_d14;
  undefined8 unaff_d15;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_318 [16];
  long lStack_308;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  float **ppfStack_2a0;
  float *pfStack_298;
  float *pfStack_290;
  float *pfStack_288;
  float *pfStack_280;
  ulong uStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float *pfStack_248;
  float *pfStack_240;
  uint uStack_238;
  uint uStack_234;
  float **ppfStack_230;
  int iStack_224;
  float *pfStack_220;
  long lStack_218;
  long lStack_208;
  long lStack_200;
  uint uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  undefined1 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float afStack_1b0 [2];
  ulong uStack_1a8;
  float afStack_198 [2];
  float *pfStack_190;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined1 uStack_171;
  float *pfStack_170;
  float *pfStack_168;
  float *pfStack_160;
  float *pfStack_158;
  float *pfStack_150;
  float *pfStack_148;
  float *pfStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  float *pfStack_120;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  uint *puStack_100;
  float *pfStack_f8;
  float **ppfStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  plVar2 = *(long **)(param_9 + 2);
  if (plVar2 < *(long **)(param_9 + 4)) {
    plVar16 = plVar2 + 1;
    *plVar2 = param_10;
  }
  else {
    lVar15 = (long)plVar2 - *(long *)param_9;
    uVar9 = (lVar15 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
      iStack_224 = param_11;
      func_0x000107824044();
      puStack_38 = &UNK_107823370;
      lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_171 = (undefined1)param_10;
      extraout_x8[1] = (float *)0x0;
      extraout_x8[2] = (float *)0x0;
      *extraout_x8 = (float *)0x0;
      fVar23 = *param_9;
      uVar3 = *(ushort *)(param_9 + 2);
      uVar4 = *(ushort *)((long)param_9 + 10);
      fStack_17c = param_9[0x1d] - param_9[0x1c];
      fStack_180 = param_9[0x1b] - param_9[0x1a];
      uVar9 = (ulong)(uint)fStack_180;
      fVar24 = (float)(uVar3 - 2 & 0xffff);
      pfStack_170 = (float *)((ulong)(uint)fVar24 << 0x20);
      fStack_178 = fVar23;
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x0001078243cc(afStack_198);
      uStack_238 = uVar4 - 2;
      fVar25 = (float)(uStack_238 & 0xffff);
      uVar12 = (ulong)(uint)fVar25;
      pfStack_170 = (float *)((ulong)(uint)fVar25 << 0x20);
      uStack_234 = uVar3 - 2;
      ppfStack_230 = extraout_x8;
      func_0x0001078243cc(afStack_1b0);
      pfVar17 = param_9 + 6;
      pfVar7 = *(float **)pfVar17;
      pfVar18 = *(float **)(param_9 + 8);
      pfStack_240 = pfVar17;
      if (pfVar7 == pfVar18) {
        pfStack_240 = afStack_198;
      }
      uVar19 = *(ulong *)(param_9 + 0xc);
      uVar11 = *(ulong *)(param_9 + 0xe);
      lVar15 = *(long *)pfStack_240;
      pfVar14 = pfVar18;
      if (pfVar7 == pfVar18) {
        pfVar14 = pfStack_190;
      }
      func_0x000107823158(lVar15,pfVar14);
      pfStack_248 = param_9 + 0xc;
      if (uVar19 == uVar11) {
        pfStack_248 = afStack_1b0;
      }
      fVar21 = (float)uVar9;
      lVar10 = *(long *)pfStack_248;
      uVar1 = uVar11;
      if (uVar19 == uVar11) {
        uVar1 = uStack_1a8;
      }
      uVar22 = uVar9;
      fStack_1b4 = fVar21;
      func_0x000107823158(lVar10,uVar1);
      fStack_1c8 = (float)uVar22;
      fStack_1d0 = fVar24 - fVar21;
      uVar29 = (ulong)(uint)fStack_1d0;
      fVar25 = fVar25 - fStack_1c8;
      uVar22 = (ulong)(uint)fVar25;
      fStack_1bc = 0.0;
      fStack_1c4 = 0.0;
      fStack_1cc = 0.0;
      fStack_1d4 = 0.0;
      fStack_1d8 = fVar25;
      fStack_1c0 = fVar21;
      fStack_1b8 = fStack_1c8;
      if ((iStack_224 != 0) && (((uint)param_9[0x18] & 1) != 0)) {
        fVar28 = param_9[0x14];
        unaff_d13 = 0;
        fStack_254 = fStack_1d0;
        func_0x000107823178(0,fVar28,lVar15,pfVar14);
        fVar30 = param_9[0x15];
        unaff_d14 = (ulong)(uint)fVar30;
        unaff_d15 = 0;
        fStack_1bc = (float)unaff_d13;
        func_0x000107823178(0,unaff_d14,lVar10,uVar1);
        fVar26 = param_9[0x16];
        uVar12 = (ulong)(uint)fVar26;
        fStack_1c4 = (float)unaff_d15;
        fVar24 = fVar28;
        func_0x000107823178(fVar28,uVar12,lVar15,pfVar14);
        fVar27 = param_9[0x17];
        uVar9 = unaff_d14;
        fStack_250 = fVar25;
        fStack_24c = fVar21;
        fStack_1c0 = fVar24;
        func_0x000107823178(unaff_d14,fVar27,lVar10,uVar1);
        fStack_1cc = fVar28 - (float)unaff_d13;
        fStack_1c8 = (float)uVar9;
        fVar23 = fVar30 - (float)unaff_d15;
        fStack_1d0 = (fVar26 - fVar28) - fVar24;
        uVar29 = (ulong)(uint)fStack_254;
        uVar22 = (ulong)(uint)fStack_250;
        uVar9 = (ulong)(uint)fStack_24c;
        fStack_1d8 = (fVar27 - fVar30) - fStack_1c8;
        fStack_1d4 = fVar23;
      }
      uStack_1ec = uStack_1ec & 0xffffff00;
      uStack_1dc = 0;
      bVar6 = (float)param_1 != 0.0;
      if (bVar6) {
        fStack_1e4 = (float)param_1 * 0.017453292;
        uVar5 = 0xa2529d39;
        ___sincosf_stret();
        uStack_1ec = uVar5;
        fVar23 = -fStack_1e4;
        fStack_1e8 = fVar23;
        uStack_1e0 = uStack_1ec;
      }
      pfStack_170 = &fStack_1bc;
      pfStack_168 = &fStack_1c0;
      pfStack_160 = &fStack_17c;
      pfStack_158 = param_9;
      pfStack_150 = &fStack_1cc;
      pfStack_148 = &fStack_1d0;
      pfStack_140 = &fStack_1b4;
      pfStack_138 = &fStack_1c4;
      pfStack_130 = &fStack_1c8;
      pfStack_128 = &fStack_180;
      pfStack_120 = &fStack_1d4;
      pfStack_118 = &fStack_1d8;
      pfStack_110 = &fStack_1b8;
      pfStack_108 = &fStack_178;
      puStack_100 = &uStack_1ec;
      pfStack_f8 = param_9;
      ppfStack_f0 = ppfStack_230;
      puStack_e8 = &uStack_171;
      uStack_1dc = bVar6;
      if ((iStack_224 == 0) || (pfVar7 == pfVar18 && uVar19 == uVar11)) {
        param_6 = (float)((uStack_234 & 0xffff) + 1);
        param_8 = (float)((uStack_238 & 0xffff) + 1);
        ppfVar8 = &pfStack_170;
        fVar25 = 0.0;
        fVar24 = -1.0;
        fVar23 = 0.0;
        param_4 = -1.0;
        param_5 = 0.0;
        param_7 = 0.0;
        puVar20 = &UNK_107823720;
      }
      else {
        func_0x0001078231ac(uVar29,uVar9,&lStack_208,pfStack_240);
        uVar11 = uVar22;
        fVar24 = fStack_1b8;
        func_0x0001078231ac(&pfStack_220,pfStack_248);
        fVar25 = (float)uVar11;
        uVar11 = 0;
        do {
          if ((lStack_200 - lStack_208 >> 3) - 1U <= uVar11) {
            func_0x0001078240b4(&pfStack_220);
            func_0x0001078240b4(&lStack_208);
            func_0x00010724e0ac(afStack_1b0);
            pfVar7 = afStack_198;
            func_0x00010724e0ac();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
              return;
            }
            ___stack_chk_fail();
            func_0x0001078240b4(&lStack_208);
            func_0x00010724e0ac(afStack_1b0);
            func_0x00010724e0ac(afStack_198);
            ppfVar8 = ppfStack_230;
            func_0x0001073fb11c();
            puVar20 = &UNK_1078237e8;
            func_0x0001078243d8();
            goto code_r0x0001078237e8;
          }
          pfVar7 = (float *)(lStack_208 + uVar11 * 8);
          uVar11 = uVar11 + 1;
          pfVar17 = (float *)(lStack_208 + uVar11 * 8);
          pfVar18 = (float *)0x8;
          param_9 = (float *)0x0;
        } while (lStack_218 - (long)pfStack_220 >> 3 == 1);
        fVar25 = *pfVar7;
        fVar24 = pfVar7[1];
        fVar23 = *pfStack_220;
        param_4 = pfStack_220[1];
        param_5 = *pfVar17;
        param_6 = pfVar17[1];
        param_7 = pfStack_220[2];
        param_8 = pfStack_220[3];
        ppfVar8 = &pfStack_170;
        puVar20 = &UNK_1078236d8;
      }
code_r0x0001078237e8:
      ppfStack_2a0 = ppfStack_230;
      fVar28 = **ppfVar8;
      fVar21 = *ppfVar8[1];
      fVar31 = *ppfVar8[2];
      fVar33 = *ppfVar8[7];
      fVar26 = *ppfVar8[8];
      fVar30 = ppfVar8[3][0x1c];
      fVar32 = *ppfVar8[9];
      fVar27 = ppfVar8[3][0x1a];
      pfVar14 = ppfVar8[0xe];
      uStack_2f0 = unaff_d15;
      uStack_2e8 = unaff_d14;
      uStack_2e0 = unaff_d13;
      uStack_2d8 = uVar29;
      uStack_2d0 = param_1;
      uStack_2c8 = uVar12;
      uStack_2c0 = uVar9;
      uStack_2b8 = uVar22;
      uStack_2b0 = uVar19;
      uStack_2a8 = uVar1;
      pfStack_298 = pfVar18;
      pfStack_290 = param_9;
      pfStack_288 = pfVar17;
      pfStack_280 = pfVar7;
      uStack_278 = uVar11;
      ppuStack_270 = &puStack_40;
      puStack_268 = puVar20;
      if (*(char *)(pfVar14 + 4) == '\x01') {
        func_0x000107824024(pfVar14);
        func_0x000107824024(pfVar14);
        func_0x000107824024(fVar30 + ((fVar24 - fVar28) * fVar31) / fVar21,
                            fVar27 + ((param_8 - fVar33) * fVar32) / fVar26,pfVar14);
        func_0x000107824024(fVar30 + ((param_6 - fVar28) * fVar31) / fVar21,pfVar14);
      }
      pfVar18 = ppfVar8[0x10];
      uVar12 = (ulong)(uint)(int)(fVar24 + fVar25 + (float)(*(ushort *)(ppfVar8[0xf] + 1) + 1));
      uVar11 = (ulong)(uint)(int)((param_6 + param_5) - (fVar24 + fVar25)) << 0x20 |
               (ulong)(uint)(int)((param_8 + param_7) - (param_4 + fVar23)) << 0x30 |
               (ulong)(uint)(int)(param_4 + fVar23 +
                                 (float)(*(ushort *)((long)ppfVar8[0xf] + 6) + 1)) << 0x10;
      uVar9 = *(ulong *)(pfVar18 + 2);
      if (uVar9 < *(ulong *)(pfVar18 + 4)) {
        func_0x00010782440c(uVar9,uVar11 | uVar12);
        func_0x0001078243f4();
        lVar15 = uVar9 + 0x58;
      }
      else {
        pfVar7 = pfVar18;
        func_0x0001078241a8(pfVar18,(long)(uVar9 - *(long *)pfVar18) / 0x58 + 1);
        func_0x000107824298(auStack_318,pfVar7,(*(long *)(pfVar18 + 2) - *(long *)pfVar18) / 0x58,
                            pfVar18 + 4);
        func_0x00010782440c(lStack_308,uVar11 | uVar12);
        func_0x0001078243f4();
        lStack_308 = lStack_308 + 0x58;
        func_0x000107824208(pfVar18,auStack_318);
        lVar15 = *(long *)(pfVar18 + 2);
        func_0x000107824314(auStack_318);
      }
      *(long *)(pfVar18 + 2) = lVar15;
      return;
    }
    uVar11 = (long)*(long **)(param_9 + 4) - *(long *)param_9;
    uVar12 = (long)uVar11 >> 2;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_10;
      func_0x000107824050();
    }
    plVar2 = (long *)(uVar12 + lVar15);
    plVar16 = plVar2 + 1;
    *plVar2 = param_10;
    lVar13 = (long)plVar2 - (*(long *)(param_9 + 2) - *(long *)param_9);
    _memcpy(lVar13);
    lVar15 = *(long *)param_9;
    *(long *)param_9 = lVar13;
    *(long **)(param_9 + 2) = plVar16;
    *(ulong *)(param_9 + 4) = uVar12 + lVar10 * 8;
    if (lVar15 != 0) {
      __ZdlPv();
    }
  }
  *(long **)(param_9 + 2) = plVar16;
  return;
}



/* Entry: 1078240cc; end: 107824157;  */

void FUN_1078240cc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  func_0x00010782439c();
  if (param_3 != 0) {
    func_0x00010724e718();
    puVar1 = *(undefined8 **)(unaff_x19 + 8);
    for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    }
    *(undefined8 **)(unaff_x19 + 8) = puVar1;
  }
  uStack_38 = 1;
  func_0x00010724e770(auStack_40);
  return;
}



/* Entry: 107824434; end: 10782447f;  */

/* WARNING: Possible PIC construction at 0x000107824450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107824454) */
/* WARNING: Removing unreachable block (ram,0x000107824468) */
/* WARNING: Removing unreachable block (ram,0x00010782446c) */

ulong FUN_107824434(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  
  puVar2 = param_2;
  func_0x000107264c5c();
  uVar3 = 0;
  uVar8 = 0xc2b2ae3d27d4eb4f;
  lVar9 = 0x27d4eb2f165667c5;
  puVar1 = (uint *)((long)param_2 + (long)puVar2);
  if (((ulong)param_2 & 7) == 0) {
    puVar12 = param_2;
    if ((uint *)0x1f < puVar2) {
      uVar10 = 0x60ea27eeadc0b5d6;
      uVar11 = 0x61c8864e7a143579;
      do {
        uVar10 = uVar10 + *(long *)puVar12 * -0x3d4d51c2d82b14b1;
        uVar5 = uVar10 >> 0x21 | uVar10 * 0x80000000;
        uVar10 = uVar5 * -0x61c8864e7a143579;
        uVar8 = uVar8 + *(long *)(puVar12 + 2) * -0x3d4d51c2d82b14b1;
        uVar4 = uVar8 >> 0x21 | uVar8 * 0x80000000;
        uVar8 = uVar4 * -0x61c8864e7a143579;
        uVar3 = uVar3 + *(long *)(puVar12 + 4) * -0x3d4d51c2d82b14b1;
        uVar7 = uVar3 >> 0x21 | uVar3 * 0x80000000;
        uVar3 = uVar7 * -0x61c8864e7a143579;
        uVar11 = uVar11 + *(long *)(puVar12 + 6) * -0x3d4d51c2d82b14b1;
        uVar6 = uVar11 >> 0x21 | uVar11 * 0x80000000;
        uVar11 = uVar6 * -0x61c8864e7a143579;
        puVar12 = puVar12 + 8;
      } while (puVar12 <= puVar1 + -8);
      lVar9 = (((((uVar8 >> 0x39 | uVar4 * 0x1bbcd8c2f5e54380) +
                  (uVar10 >> 0x3f | uVar5 * 0x3c6ef3630bd7950e) +
                  (uVar3 >> 0x34 | uVar7 * 0x779b185ebca87000) +
                  (uVar11 >> 0x2e | uVar6 * -0x1939e850d5e40000) ^
                 (uVar5 * -0x210ca4fef0869357 >> 0x21 | uVar5 * -0x784349ab80000000) *
                 -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
                (uVar4 * -0x210ca4fef0869357 >> 0x21 | uVar4 * -0x784349ab80000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar7 * -0x210ca4fef0869357 >> 0x21 | uVar7 * -0x784349ab80000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar6 * -0x210ca4fef0869357 >> 0x21 | uVar6 * -0x784349ab80000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
    }
    uVar3 = lVar9 + (long)puVar2;
    puVar13 = puVar12 + 2;
    while (puVar13 <= puVar1) {
      uVar3 = ((ulong)(*(long *)puVar12 * -0x3d4d51c2d82b14b1) >> 0x21 |
              *(long *)puVar12 * -0x6c158a5880000000) * -0x61c8864e7a143579 ^ uVar3;
      uVar3 = (uVar3 >> 0x25 | uVar3 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar13 = puVar12 + 4;
      puVar12 = puVar12 + 2;
    }
    if (puVar12 + 1 <= puVar1) {
      uVar3 = (ulong)*puVar12 * -0x61c8864e7a143579 ^ uVar3;
      uVar3 = (uVar3 >> 0x29 | uVar3 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
      puVar12 = puVar12 + 1;
    }
    if (puVar12 < puVar1) {
      lVar9 = ((long)puVar2 + (long)param_2) - (long)puVar12;
      do {
        uVar3 = (ulong)(byte)*puVar12 * 0x27d4eb2f165667c5 ^ uVar3;
        uVar3 = (uVar3 >> 0x35 | uVar3 << 0xb) * -0x61c8864e7a143579;
        lVar9 = lVar9 + -1;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (lVar9 != 0);
    }
  }
  else {
    puVar12 = param_2;
    if ((uint *)0x1f < puVar2) {
      uVar10 = 0x60ea27eeadc0b5d6;
      uVar11 = 0x61c8864e7a143579;
      do {
        uVar10 = uVar10 + *(long *)puVar12 * -0x3d4d51c2d82b14b1;
        uVar5 = uVar10 >> 0x21 | uVar10 * 0x80000000;
        uVar10 = uVar5 * -0x61c8864e7a143579;
        uVar8 = uVar8 + *(long *)(puVar12 + 2) * -0x3d4d51c2d82b14b1;
        uVar4 = uVar8 >> 0x21 | uVar8 * 0x80000000;
        uVar8 = uVar4 * -0x61c8864e7a143579;
        uVar3 = uVar3 + *(long *)(puVar12 + 4) * -0x3d4d51c2d82b14b1;
        uVar7 = uVar3 >> 0x21 | uVar3 * 0x80000000;
        uVar3 = uVar7 * -0x61c8864e7a143579;
        uVar11 = uVar11 + *(long *)(puVar12 + 6) * -0x3d4d51c2d82b14b1;
        uVar6 = uVar11 >> 0x21 | uVar11 * 0x80000000;
        uVar11 = uVar6 * -0x61c8864e7a143579;
        puVar12 = puVar12 + 8;
      } while (puVar12 <= puVar1 + -8);
      lVar9 = (((((uVar8 >> 0x39 | uVar4 * 0x1bbcd8c2f5e54380) +
                  (uVar10 >> 0x3f | uVar5 * 0x3c6ef3630bd7950e) +
                  (uVar3 >> 0x34 | uVar7 * 0x779b185ebca87000) +
                  (uVar11 >> 0x2e | uVar6 * -0x1939e850d5e40000) ^
                 (uVar5 * -0x210ca4fef0869357 >> 0x21 | uVar5 * -0x784349ab80000000) *
                 -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
                (uVar4 * -0x210ca4fef0869357 >> 0x21 | uVar4 * -0x784349ab80000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar7 * -0x210ca4fef0869357 >> 0x21 | uVar7 * -0x784349ab80000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar6 * -0x210ca4fef0869357 >> 0x21 | uVar6 * -0x784349ab80000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
    }
    uVar3 = lVar9 + (long)puVar2;
    puVar13 = puVar12 + 2;
    while (puVar13 <= puVar1) {
      uVar3 = ((ulong)(*(long *)puVar12 * -0x3d4d51c2d82b14b1) >> 0x21 |
              *(long *)puVar12 * -0x6c158a5880000000) * -0x61c8864e7a143579 ^ uVar3;
      uVar3 = (uVar3 >> 0x25 | uVar3 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar13 = puVar12 + 4;
      puVar12 = puVar12 + 2;
    }
    if (puVar12 + 1 <= puVar1) {
      uVar3 = (ulong)*puVar12 * -0x61c8864e7a143579 ^ uVar3;
      uVar3 = (uVar3 >> 0x29 | uVar3 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
      puVar12 = puVar12 + 1;
    }
    if (puVar12 < puVar1) {
      lVar9 = ((long)puVar2 + (long)param_2) - (long)puVar12;
      do {
        uVar3 = (ulong)(byte)*puVar12 * 0x27d4eb2f165667c5 ^ uVar3;
        uVar3 = (uVar3 >> 0x35 | uVar3 << 0xb) * -0x61c8864e7a143579;
        lVar9 = lVar9 + -1;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (lVar9 != 0);
    }
  }
  uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3d4d51c2d82b14b1;
  uVar3 = (uVar3 ^ uVar3 >> 0x1d) * 0x165667b19e3779f9;
  return uVar3 ^ uVar3 >> 0x20;
}



/* Entry: 107825134; end: 10782514b;  */

void FUN_107825134(long *param_1,long param_2)

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



/* Entry: 1078256f8; end: 1078257b7;  */

void FUN_1078256f8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1;
  func_0x0001078256ac(param_7);
  lVar1 = 0;
  lVar2 = param_6;
  while (lVar2 = *(long *)(lVar2 + 8), lVar2 != param_6) {
    fVar4 = param_1 - *(float *)(lVar2 + 0x18);
    func_0x0001078256ac(fVar4,param_2,param_3,param_7);
    fVar4 = fVar4 + *(float *)(lVar2 + 0x28);
    if (fVar4 <= fVar3) {
      lVar1 = lVar2 + 0x10;
      fVar3 = fVar4;
    }
  }
  *param_4 = param_5;
  *(float *)(param_4 + 1) = param_1;
  param_4[2] = lVar1;
  *(float *)(param_4 + 3) = fVar3;
  return;
}



/* Entry: 107826a0c; end: 107826adf;  */

/* WARNING: Possible PIC construction at 0x000107826b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107826b20) */
/* WARNING: Removing unreachable block (ram,0x000107826b30) */
/* WARNING: Removing unreachable block (ram,0x000107826c0c) */
/* WARNING: Removing unreachable block (ram,0x000107826c24) */
/* WARNING: Removing unreachable block (ram,0x000107826c3c) */
/* WARNING: Removing unreachable block (ram,0x000107826c4c) */
/* WARNING: Removing unreachable block (ram,0x000107826c5c) */
/* WARNING: Removing unreachable block (ram,0x000107826bf4) */

undefined8 *
FUN_107826a0c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_200 [80];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [112];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  func_0x000107827884();
  uStack_68 = extraout_x8;
  func_0x000107263b58(auStack_a8,param_10);
  puVar1 = (undefined8 *)(ulong)((uint)param_6 & 1);
  func_0x0001078133fc(param_1,(float)param_2,(float)param_3);
  func_0x00010724b3d8(auStack_a8);
  func_0x000107827870(uStack_68);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107827864();
  uStack_100 = param_6;
  uStack_f8 = param_7;
  uStack_f0 = param_8;
  func_0x000107827884();
  func_0x000107407a9c(auStack_200);
  uStack_1a8 = puVar1[1];
  uStack_1b0 = *puVar1;
  uStack_1a0 = puVar1[2];
  func_0x000107278b70(auStack_198,puVar1 + 3);
  uStack_180 = puVar1[6];
  uStack_188 = puVar1[5];
  uStack_178 = *(undefined4 *)(puVar1 + 7);
  func_0x000107263b58(auStack_170,puVar1 + 8);
  return &uStack_1b0;
}



/* Entry: 107826e00; end: 107826e6f;  */

long * FUN_107826e00(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107826e4c();
  }
  lVar1 = param_4 + param_3 * 0xa8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xa8;
  return param_1;
}



/* Entry: 107827028; end: 10782705b;  */

void FUN_107827028(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078278bc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xa8;
    func_0x000107405490();
  }
  return;
}



/* Entry: 1078272a4; end: 10782743f;  */

undefined8 * FUN_1078272a4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  long lVar6;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **appuStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  
  func_0x000107827440(&uStack_b0);
  ppuStack_d0 = (undefined8 ***)0x0;
  ppuStack_c8 = (undefined8 ***)0x0;
  appuStack_c0[0] = (undefined8 ***)0x0;
  lVar6 = *param_3;
  lVar1 = param_3[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_80 = (undefined1 *)&ppuStack_d0;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0xa8;
    if (0x186186186186186 < uVar5) {
      puStack_80 = (undefined1 *)&ppuStack_d0;
      func_0x000107826df4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x107827414);
      (*pcVar3)();
    }
    pppuVar4 = appuStack_c0;
    puStack_80 = (undefined1 *)&ppuStack_d0;
    func_0x000107826e4c();
    appuStack_c0[0] = pppuVar4 + uVar5 * 0x15;
    ppuStack_68 = &ppuStack_50;
    ppuStack_60 = &ppuStack_48;
    uStack_58 = 0;
    ppuStack_d0 = pppuVar4;
    ppuStack_c8 = pppuVar4;
    ppuStack_70 = appuStack_c0;
    ppuStack_50 = pppuVar4;
    for (; ppuStack_48 = pppuVar4, lVar6 != lVar1; lVar6 = lVar6 + 0xa8) {
      func_0x000107826c64(pppuVar4,lVar6);
      pppuVar4 = (undefined8 ***)(ppuStack_48 + 0x15);
    }
    uStack_58 = 1;
    func_0x000107826f74(&ppuStack_70);
    ppuStack_c8 = pppuVar4;
  }
  uStack_78 = 1;
  func_0x000107827480(&puStack_80);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[2] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  param_1[4] = uStack_90;
  param_1[3] = uStack_98;
  param_1[5] = uStack_88;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  param_1[7] = ppuStack_c8;
  param_1[6] = ppuStack_d0;
  param_1[8] = appuStack_c0[0];
  ppuStack_c8 = (undefined8 **)0x0;
  appuStack_c0[0] = (undefined8 **)0x0;
  ppuStack_d0 = (undefined8 **)0x0;
  *(undefined4 *)(param_1 + 9) = 0;
  func_0x000107405564(&ppuStack_d0);
  func_0x0001074055b8(&uStack_b0);
  return param_1;
}



/* Entry: 10782796c; end: 1078279ff;  */

undefined1
FUN_10782796c(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  uStack_41 = param_3;
  uStack_40 = param_8;
  uStack_38 = param_9;
  func_0x000107827d54(param_2,param_4);
  func_0x000107827a00(param_2 + 0x30,&uStack_41,&uStack_50,param_5,param_6,param_7,&uStack_40);
  func_0x000107828634();
  func_0x000107828698();
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_2 + 0x49) = 0;
  }
  return uStack_51;
}



/* Entry: 107827cd4; end: 107827d53;  */

void FUN_107827cd4(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010787445c(auStack_38);
  func_0x000107828650();
  func_0x000107405414();
  func_0x00010089ccb4(auStack_38);
  return;
}



/* Entry: 1078281ac; end: 107828283;  */

void FUN_1078281ac(undefined8 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar2 < '\0') {
    uVar3 = param_1[1];
    uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar4) goto LAB_1078281f4;
  }
  else {
    if (bVar2 != 10) {
      uVar3 = (ulong)bVar2;
      *(byte *)((long)param_1 + 0x17) = bVar2 + 1 & 0x7f;
      goto LAB_107828238;
    }
    uVar4 = 10;
LAB_1078281f4:
    uVar3 = uVar4;
    func_0x00010782824c(param_1,uVar3,1,uVar3,uVar3,0,0);
  }
  param_1[1] = uVar3 + 1;
  param_1 = (undefined8 *)*param_1;
LAB_107828238:
  puVar1 = (undefined2 *)((long)param_1 + uVar3 * 2);
  *puVar1 = param_2;
  puVar1[1] = 0;
  return;
}



/* Entry: 1078285bc; end: 107828613;  */

long FUN_1078285bc(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (param_4 < param_2) {
    param_2 = param_4 + 1;
  }
  lVar1 = param_2 * -2;
  do {
    if (lVar1 == 0) {
      return -1;
    }
    func_0x00010782861c();
    lVar1 = lVar1 + 2;
  } while (param_1 != 0);
  return -lVar1 >> 1;
}



/* Entry: 1078289e4; end: 107828a03;  */

long * FUN_1078289e4(long param_1)

{
  long *plVar1;
  long *in_x4;
  undefined8 in_x5;
  long lVar2;
  long *plVar3;
  int extraout_w10;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x000104bfeb48();
    plVar3 = plVar1;
    FUN_10782cbd4();
    func_0x00010782a318();
    lRam0000000113822d30 = lRam0000000113822d30 + 1;
    plVar3[0x6d] = lRam0000000113822d30;
    *(undefined1 *)(plVar3 + 0x6e) = 1;
    lVar2 = *in_x4;
    plVar3[0x70] = in_x4[1];
    plVar3[0x6f] = lVar2;
    *in_x4 = 0;
    in_x4[1] = 0;
    func_0x000107829790(plVar3 + 0x71,in_x5);
    func_0x0001073af260();
    func_0x00010725b034(plVar1 + 0x75);
    plVar1[0x77] = (long)plVar1;
    plVar3 = (long *)plVar1[0x75];
    lVar2 = plVar3[1];
    lVar4 = *plVar3;
    plVar1[0x79] = plVar3[1];
    plVar1[0x78] = lVar4;
    if (lVar2 != 0) {
      do {
        func_0x00010782a364();
      } while (extraout_w10 != 0);
    }
    plVar1[0x7a] = (long)(plVar1 + 0x75);
    plVar1[0x7b] = 0;
    return plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001078289f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return plVar1;
}



/* Entry: 10782921c; end: 10782928f;  */

void FUN_10782921c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x30;
  __Znwm();
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107373bcc();
  *param_1 = uVar1;
  func_0x0001072c8f3c(&uStack_40);
  return;
}



/* Entry: 107829844; end: 107829877;  */

/* WARNING: Possible PIC construction at 0x000107829a00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107829a04) */

long * FUN_107829844(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined1 auStack_350 [56];
  undefined1 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [120];
  undefined1 auStack_220 [240];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_90;
  
  if ((int)param_1[3] == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  uVar1 = (int)param_1[3] == 1;
  if ((bool)uVar1) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x00010782a3ac();
  plVar2 = (long *)*param_2;
  plVar6 = plVar2;
  uStack_90 = extraout_x8;
  if (plVar2 != (long *)0x0) {
    lVar7 = param_1[1];
    (**(code **)(*plVar2 + 0x10))();
    plVar6 = plVar2;
    for (plVar4 = (long *)0x0; uVar1 = plVar4 == plVar2, !(bool)uVar1;
        plVar4 = (long *)((long)plVar4 + 1)) {
      (**(code **)(*(long *)*param_2 + 0x18))(&lStack_360,(long *)*param_2,plVar4);
      lVar5 = *param_1;
      if (*(char *)(lVar5 + 0x80) != '\x01') {
code_r0x0001078299b4:
        plVar6 = (long *)param_1[2];
        func_0x00010729807c(auStack_298,lVar7 + 0x20);
        func_0x00010729807c(auStack_308,param_3);
        func_0x0001078344c8(auStack_220,lStack_360,lVar7 + 0x10,auStack_298,auStack_308);
        uStack_128 = *(undefined8 *)(lVar7 + 0x14);
        uStack_130 = *(undefined8 *)(lVar7 + 0xc);
        uStack_120 = 1;
        goto code_r0x000107829acc;
      }
      uVar8 = NEON_ucvtf((uint)*(byte *)(lVar7 + 0xc));
      func_0x0001077512dc(uVar8,auStack_220);
      lStack_368 = lStack_358;
      lStack_370 = lStack_360;
      if (lStack_358 != 0) {
        do {
          func_0x00010782a364();
        } while (extraout_w10 != 0);
      }
      func_0x000104c2fe00(auStack_308,lVar7 + 0x20);
      func_0x000104c2fe00(auStack_2d0,param_3);
      func_0x0001073c4f74(auStack_298,auStack_308);
      func_0x000107751444(auStack_220,&lStack_370,auStack_298);
      auStack_350[0] = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uVar3 = lVar5 + 0x20;
      func_0x00010777faa8(uVar3,auStack_220,auStack_350);
      func_0x00010724b3d8(auStack_350);
      func_0x000107267e8c(auStack_298);
      func_0x000107267eac(auStack_308);
      func_0x000107267e44(&lStack_370);
      func_0x000107267da8(auStack_220);
      if ((uVar3 & 1) != 0) goto code_r0x0001078299b4;
      plVar6 = &lStack_360;
      func_0x000107330fdc();
    }
  }
  func_0x00010782a2fc(uStack_90);
  if ((bool)uVar1) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_350);
  func_0x000107267e8c(auStack_298);
  func_0x000107267eac(auStack_308);
  func_0x000107267e44(&lStack_370);
  func_0x000107267da8(auStack_220);
  plVar6 = &lStack_360;
  func_0x000107330fdc();
  func_0x00010782a34c();
code_r0x000107829acc:
  uVar3 = plVar6[1];
  if (uVar3 < (ulong)plVar6[2]) {
    func_0x000107829b08();
    plVar2 = (long *)(uVar3 + 0x108);
  }
  else {
    plVar2 = plVar6;
    func_0x000107829b30();
  }
  plVar6[1] = (long)plVar2;
  return plVar2 + -0x21;
}



/* Entry: 107829d3c; end: 107829ddf;  */

void FUN_107829d3c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x108) {
    func_0x000107829bd8(param_4,lVar1);
    param_4 = lStack_38 + 0x108;
  }
  uStack_48 = 1;
  func_0x000107829de0(param_1,param_2,param_3);
  func_0x000107284580(&uStack_60);
  return;
}



/* Entry: 107829f58; end: 107829f6b;  */

void FUN_107829f58(void)

{
  func_0x000107829f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782a190; end: 10782a1bb;  */

undefined8 * FUN_10782a190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0910;
  func_0x00010724b54c(param_1 + 2);
  return param_1;
}



/* Entry: 10782a5ec; end: 10782a653;  */

void FUN_10782a5ec(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010782aa0c(param_1,&uStack_30,param_2[2]);
  func_0x00010782acb8();
  return;
}



/* Entry: 10782aa7c; end: 10782aa8f;  */

void FUN_10782aa7c(void)

{
  func_0x00010782aa4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782ae58; end: 10782ae6b;  */

void FUN_10782ae58(void)

{
  func_0x000107373d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782b358; end: 10782b36b;  */

void FUN_10782b358(void)

{
  func_0x00010782b5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782b464; end: 10782b4f3;  */

/* WARNING: Possible PIC construction at 0x00010782b4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010782b4ac) */
/* WARNING: Removing unreachable block (ram,0x00010782b4d8) */
/* WARNING: Removing unreachable block (ram,0x00010782b4f0) */
/* WARNING: Removing unreachable block (ram,0x00010782b4d0) */
/* WARNING: Removing unreachable block (ram,0x00010782b600) */

undefined8 *
FUN_10782b464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  
  func_0x00010782b658();
  func_0x00010737bef8(auStack_50,1);
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109a7900;
  puStack_40[1] = 0;
  func_0x00010782b53c(puStack_40 + 3,param_2,param_3,param_4);
  return puStack_40;
}



/* Entry: 10782bcd0; end: 10782bcf7;  */

undefined1  [16] FUN_10782bcd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001078315e8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}


