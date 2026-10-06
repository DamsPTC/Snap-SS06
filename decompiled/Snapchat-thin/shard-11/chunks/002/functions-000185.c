/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083849b4; end: 108384b47;  */

undefined8 FUN_1083849b4(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = SQRT(param_2 * param_2 + param_1 * param_1);
  param_3 = param_3 / fVar1;
  param_1 = param_3 * param_1;
  param_3 = param_3 * param_2;
  if ((NAN((param_1 - param_1) * param_3)) || ((param_1 == 0.0 && (param_3 == 0.0)))) {
    uVar2 = 0;
    param_4[0] = 0.0;
    param_4[1] = 0.0;
  }
  else {
    if (param_5 == (float *)0x0) {
      *param_4 = param_1;
      param_4[1] = param_3;
    }
    else {
      *param_4 = param_1;
      param_4[1] = param_3;
      *param_5 = fVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 108384b48; end: 108384b67;  */

void FUN_108384b48(void)

{
  FUN_108384c28();
  return;
}



/* Entry: 108384b68; end: 108384c27;  */

int FUN_108384b68(long *param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lStack_50;
  int iStack_48;
  undefined4 uStack_44;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((long)param_1 + 0x24);
    uVar3 = param_1[3];
    lStack_50 = param_2;
    FUN_108384b48(uVar3,iVar5,&lStack_50,0x10);
    uVar2 = (uint)uVar3;
    if ((int)uVar2 < 0) {
      plVar4 = param_1 + 2;
      (**(code **)(*param_1 + 0x18))(param_1,param_2);
      iVar5 = iVar5 + 1;
      iStack_48 = iVar5;
      FUN_10840f370(plVar4,~uVar2);
      plVar4[1] = CONCAT44(uStack_44,iStack_48);
      *plVar4 = lStack_50;
    }
    else {
      if (*(int *)((long)param_1 + 0x24) <= (int)uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108384c28);
        (*pcVar1)();
      }
      iVar5 = *(int *)(param_1[3] + (uVar3 & 0xffffffff) * 0x10 + 8);
    }
  }
  return iVar5;
}



/* Entry: 108384c28; end: 108384c8f;  */

uint FUN_108384c28(long param_1,int param_2,ulong *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 < 1) {
    return 0xffffffff;
  }
  iVar4 = 0;
  uVar3 = *param_3;
  uVar1 = param_2 - 1;
  while (uVar2 = uVar1, uVar2 - iVar4 != 0 && iVar4 <= (int)uVar2) {
    uVar1 = iVar4 + (uVar2 - iVar4 >> 1);
    if (*(ulong *)(param_1 + param_4 * (ulong)uVar1) < uVar3) {
      iVar4 = uVar1 + 1;
      uVar1 = uVar2;
    }
  }
  uVar5 = *(ulong *)(param_1 + param_4 * (ulong)uVar2);
  if (uVar5 < uVar3) {
    return -uVar2 - 2;
  }
  if (uVar3 < uVar5) {
    uVar2 = ~uVar2;
  }
  return uVar2;
}



/* Entry: 108384c90; end: 108384d0b;  */

void FUN_108384c90(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  lVar4 = param_1;
  FUN_108384d0c();
  if ((int)lVar4 != 0) {
    FUN_108384d74(param_1);
    fVar1 = (float)CONCAT13(in_register_00005003,
                            CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    func_0x000108384d80(param_1);
    if ((fVar1 == 0.0) ||
       (!NAN((float)CONCAT13(in_register_00005003,
                             CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))))
        && (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) ==
           0.0)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar2 = 1;
    }
    else {
      puVar3 = (undefined4 *)(param_1 + 0x14);
      lVar4 = 4;
      do {
        puVar3[-1] = fVar1;
        *puVar3 = CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  return;
}



/* Entry: 108384d0c; end: 108384d73;  */

void FUN_108384d0c(undefined8 param_1,float param_2,float param_3,float param_4,float *param_5,
                  ulong param_6)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 in_register_00005008;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  uVar2 = param_6;
  FUN_1082ffd68();
  if ((uVar2 & 1) == 0) {
    func_0x00010838601c(0);
    *(undefined8 *)(param_5 + 2) = in_register_00005008;
    *(ulong *)param_5 = CONCAT44(uVar4,fVar3);
  }
  else {
    FUN_1082d8624(param_6);
    *param_5 = fVar3;
    param_5[1] = param_2;
    param_5[2] = param_3;
    param_5[3] = param_4;
    bVar1 = false;
    if ((fVar3 < param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
      bVar1 = param_2 < param_4;
    }
    if (!bVar1) {
      func_0x00010838601c(0);
    }
  }
  return;
}



/* Entry: 108384d74; end: 108384d8b;  */

float FUN_108384d74(float *param_1)

{
  return (param_1[2] - *param_1) * 0.5;
}



/* Entry: 108384d8c; end: 108384e73;  */

void FUN_108384d8c(float param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  undefined1 in_b0;
  undefined1 uVar5;
  undefined1 in_register_00005001;
  undefined1 uVar6;
  undefined1 in_register_00005002;
  undefined1 uVar7;
  undefined1 in_register_00005003;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar9 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  pfVar3 = param_2;
  FUN_108384d0c();
  if ((int)pfVar3 != 0) {
    uVar8 = (undefined1)((uint)param_1 >> 0x18);
    uVar7 = (undefined1)((uint)param_1 >> 0x10);
    uVar6 = (undefined1)((uint)param_1 >> 8);
    uVar5 = SUB41(param_1,0);
    if (NAN((fVar9 - fVar9) * param_1)) {
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      fVar9 = 0.0;
    }
    fVar10 = param_2[2] - *param_2;
    fVar11 = param_2[3] - param_2[1];
    fVar14 = (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) +
             (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
    bVar1 = true;
    if ((fVar9 + fVar9 <= fVar10) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar14))) {
      bVar1 = fVar11 < fVar14;
    }
    if (bVar1) {
      fVar12 = fVar10 / (fVar9 + fVar9);
      fVar13 = fVar11 / fVar14;
      if (fVar12 <= fVar11 / fVar14) {
        fVar13 = fVar12;
      }
      fVar9 = fVar9 * fVar13;
      fVar13 = (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) * fVar13;
      uVar5 = SUB41(fVar13,0);
      uVar6 = (undefined1)((uint)fVar13 >> 8);
      uVar7 = (undefined1)((uint)fVar13 >> 0x10);
      uVar8 = (undefined1)((uint)fVar13 >> 0x18);
    }
    if ((fVar9 <= 0.0) ||
       (!NAN((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)))) &&
        ((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) < 0.0 ||
        (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) == 0.0))) {
      pfVar3 = param_2;
      FUN_108384d0c(param_2,param_3);
      if ((int)pfVar3 != 0) {
        param_2[6] = 0.0;
        param_2[7] = 0.0;
        param_2[4] = 0.0;
        param_2[5] = 0.0;
        param_2[10] = 0.0;
        param_2[0xb] = 0.0;
        param_2[8] = 0.0;
        param_2[9] = 0.0;
        param_2[0xc] = 1.4013e-45;
      }
      return;
    }
    pfVar3 = param_2 + 5;
    lVar4 = 4;
    do {
      pfVar3[-1] = fVar9;
      *pfVar3 = (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
      pfVar3 = pfVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    bVar1 = true;
    bVar2 = false;
    if (fVar11 * 0.5 <= (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)))) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar9) && !NAN(fVar10 * 0.5)) {
        bVar1 = fVar9 < fVar10 * 0.5;
        bVar2 = false;
      }
    }
    fVar9 = 2.8026e-45;
    if (bVar1 != bVar2) {
      fVar9 = 4.2039e-45;
    }
    param_2[0xc] = fVar9;
  }
  return;
}



/* Entry: 108384e74; end: 108384eff;  */

undefined8 FUN_108384e74(float *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 1;
  lVar2 = 4;
  do {
    if ((*param_1 <= 0.0) || (param_1[1] <= 0.0)) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
    }
    else {
      uVar1 = 0;
    }
    param_1 = param_1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return uVar1;
}



/* Entry: 108384f00; end: 108384f9f;  */

void FUN_108384f00(ulong param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  FUN_108384d0c();
  if ((int)uVar1 == 0) {
    return;
  }
  fVar3 = *param_3 - *param_3;
  for (lVar2 = 4; lVar2 != 0x20; lVar2 = lVar2 + 4) {
    fVar3 = fVar3 * *(float *)((long)param_3 + lVar2);
  }
  if (!NAN(fVar3)) {
    uVar4 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar5 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar1 = param_1 + 0x10;
    FUN_108384e74();
    if ((uVar1 & 1) == 0) {
      FUN_108384fa0(param_1);
      uVar1 = param_1;
      FUN_1083851bc();
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
  }
  uVar1 = param_1;
  FUN_108384d0c(param_1,param_2);
  if ((int)uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* Entry: 108384fa0; end: 1083851bb;  */

bool FUN_108384fa0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar18 = (double)param_1[2] - (double)*param_1;
  dVar17 = (double)param_1[3] - (double)param_1[1];
  pfVar2 = param_1 + 4;
  fVar12 = *pfVar2;
  fVar8 = param_1[6];
  dVar19 = 1.0;
  if (dVar18 < (double)fVar12 + (double)fVar8) {
    dVar19 = (double)NEON_fminnm(dVar18 / ((double)fVar12 + (double)fVar8),0x3ff0000000000000);
  }
  pfVar3 = param_1 + 7;
  fVar13 = *pfVar3;
  pfVar4 = param_1 + 9;
  fVar11 = *pfVar4;
  dVar10 = dVar19;
  if ((dVar17 < (double)fVar13 + (double)fVar11) &&
     (dVar10 = dVar17 / ((double)fVar13 + (double)fVar11), dVar19 <= dVar10)) {
    dVar10 = dVar19;
  }
  pfVar5 = param_1 + 10;
  fVar9 = *pfVar5;
  fVar15 = param_1[8];
  dVar19 = dVar10;
  if ((dVar18 < (double)fVar15 + (double)fVar9) &&
     (dVar19 = dVar18 / ((double)fVar15 + (double)fVar9), dVar10 <= dVar19)) {
    dVar19 = dVar10;
  }
  pfVar6 = param_1 + 0xb;
  fVar16 = *pfVar6;
  pfVar7 = param_1 + 5;
  fVar14 = *pfVar7;
  dVar10 = dVar19;
  if ((dVar17 < (double)fVar16 + (double)fVar14) &&
     (dVar10 = dVar17 / ((double)fVar16 + (double)fVar14), dVar19 <= dVar10)) {
    dVar10 = dVar19;
  }
  pfVar1 = param_1 + 6;
  if ((fVar12 + fVar8 == fVar12) || (pfVar1 = pfVar2, fVar12 + fVar8 == fVar8)) {
    *pfVar1 = 0.0;
  }
  pfVar1 = pfVar4;
  if ((fVar13 + fVar11 == fVar13) || (pfVar1 = pfVar3, fVar13 + fVar11 == fVar11)) {
    *pfVar1 = 0.0;
  }
  pfVar1 = pfVar5;
  if ((fVar15 + fVar9 == fVar15) || (pfVar1 = param_1 + 8, fVar15 + fVar9 == fVar9)) {
    *pfVar1 = 0.0;
  }
  pfVar1 = pfVar7;
  if ((fVar16 + fVar14 == fVar16) || (pfVar1 = pfVar6, fVar16 + fVar14 == fVar14)) {
    *pfVar1 = 0.0;
  }
  if (dVar10 < 1.0) {
    FUN_1083853e8(dVar18,dVar10,pfVar2);
    FUN_1083853e8(dVar17,dVar10,pfVar3,pfVar4);
    FUN_1083853e8(dVar18,dVar10,param_1 + 8,pfVar5);
    FUN_1083853e8(dVar17,dVar10,pfVar6,pfVar7);
  }
  FUN_108384e74(pfVar2);
  FUN_108385498(param_1);
  return dVar10 < 1.0;
}



/* Entry: 1083851bc; end: 1083853e7;  */

void FUN_1083851bc(float *param_1)

{
  float *pfVar1;
  uint extraout_w8;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = param_1;
  FUN_108385a2c(param_1,param_1 + 4);
  if ((int)pfVar1 != 0) {
    uVar3 = (uint)(param_1[4] == 0.0);
    uVar4 = 0;
    if (param_1[5] == 0.0) {
      uVar3 = 1;
      uVar4 = (uint)(param_1[4] == 0.0);
    }
    uVar5 = 1;
    for (lVar2 = 0x10; lVar2 != 0x28; lVar2 = lVar2 + 8) {
      fVar6 = *(float *)((long)param_1 + lVar2 + 8);
      if ((fVar6 != 0.0) || (*(float *)((long)param_1 + lVar2 + 0xc) != 0.0)) {
        uVar4 = 0;
      }
      if ((fVar6 != *(float *)((long)param_1 + lVar2)) ||
         (*(float *)((long)param_1 + lVar2 + 0xc) != *(float *)((long)param_1 + lVar2 + 4))) {
        uVar5 = 0;
      }
      if ((fVar6 != 0.0) && (*(float *)((long)param_1 + lVar2 + 0xc) != 0.0)) {
        uVar3 = 0;
      }
    }
    func_0x000108384eb8();
    if ((uint)param_1[0xc] < 6) {
      fVar6 = *param_1;
      fVar7 = param_1[2];
      switch(param_1[0xc]) {
      case 0.0:
        if (fVar6 < fVar7) {
          func_0x000108385fc4();
        }
        break;
      case 1.4013e-45:
        break;
      case 2.8026e-45:
        if ((fVar6 < fVar7) &&
           (func_0x000108385fc4(),
           ((extraout_w8 | uVar4 | uVar5 ^ 0xffffffff) & 1) == 0 && uVar3 == 0)) {
          lVar2 = 0;
          do {
            if (lVar2 + 8 == 0x28) {
              return;
            }
            fVar7 = *(float *)((long)param_1 + lVar2 + 0x10);
            FUN_108384d74(param_1);
            fVar6 = ABS(fVar7 - fVar6);
            if (0.00024414062 < fVar6) {
              return;
            }
            fVar7 = *(float *)((long)param_1 + lVar2 + 0x14);
            func_0x000108384d80(param_1);
            fVar6 = ABS(fVar7 - fVar6);
            lVar2 = lVar2 + 8;
          } while (fVar6 <= 0.00024414062);
        }
        break;
      case 4.2039e-45:
        if (fVar6 < fVar7) {
          func_0x000108385fc4();
        }
        break;
      case 5.60519e-45:
        if (fVar6 < fVar7) {
          func_0x000108385fc4();
        }
        break;
      case 7.00649e-45:
        if (fVar6 < fVar7) {
          func_0x000108385fc4();
        }
      }
    }
  }
  return;
}



/* Entry: 1083853e8; end: 108385497;  */

void FUN_1083853e8(double param_1,double param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *param_3 = (float)(param_2 * (double)*param_3);
  fVar3 = (float)(param_2 * (double)*param_4);
  *param_4 = fVar3;
  fVar4 = *param_3;
  if (param_1 < (double)(fVar4 + fVar3)) {
    pfVar1 = param_4;
    if (fVar4 <= fVar3) {
      pfVar1 = param_3;
    }
    fVar5 = *pfVar1;
    uVar2 = (ulong)(uint)(float)(param_1 - (double)fVar5);
    while (param_1 < (double)(fVar5 + (float)uVar2)) {
      _nextafterf();
    }
    if (fVar4 <= fVar3) {
      param_3 = param_4;
    }
    *param_3 = (float)uVar2;
  }
  return;
}



/* Entry: 108385498; end: 1083855d3;  */

void FUN_108385498(float *param_1)

{
  bool bVar1;
  float *pfVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  
  if (*param_1 < param_1[2]) {
    if (param_1[1] < param_1[3]) {
      pfVar2 = param_1 + 4;
      if (*pfVar2 == 0.0) {
        bVar1 = true;
      }
      else {
        bVar1 = param_1[5] == 0.0;
      }
      bVar3 = true;
      for (lVar4 = 0x10; lVar4 != 0x28; lVar4 = lVar4 + 8) {
        fVar5 = *(float *)((long)param_1 + lVar4 + 8);
        if ((fVar5 != 0.0) && (*(float *)((long)param_1 + lVar4 + 0xc) != 0.0)) {
          bVar1 = false;
        }
        if ((fVar5 != *(float *)((long)param_1 + lVar4)) ||
           (*(float *)((long)param_1 + lVar4 + 0xc) != *(float *)((long)param_1 + lVar4 + 4))) {
          bVar3 = false;
        }
      }
      if (bVar1) {
        fVar5 = 1.4013e-45;
      }
      else {
        if (!bVar3) {
          func_0x000108384eb8();
          fVar5 = 5.60519e-45;
          if ((int)pfVar2 == 0) {
            fVar5 = 7.00649e-45;
          }
          param_1[0xc] = fVar5;
          pfVar2 = param_1;
          FUN_1083851bc();
          if (((ulong)pfVar2 & 1) != 0) {
            return;
          }
          pfVar2 = param_1;
          FUN_108384d0c(param_1,param_1);
          if ((int)pfVar2 != 0) {
            param_1[6] = 0.0;
            param_1[7] = 0.0;
            param_1[4] = 0.0;
            param_1[5] = 0.0;
            param_1[10] = 0.0;
            param_1[0xb] = 0.0;
            param_1[8] = 0.0;
            param_1[9] = 0.0;
            param_1[0xc] = 1.4013e-45;
          }
          return;
        }
        if ((*pfVar2 < (param_1[2] - *param_1) * 0.5) ||
           (param_1[5] < (param_1[3] - param_1[1]) * 0.5)) {
          fVar5 = 4.2039e-45;
        }
        else {
          fVar5 = 2.8026e-45;
        }
      }
      param_1[0xc] = fVar5;
      return;
    }
  }
  param_1[0xc] = 0.0;
  return;
}



/* Entry: 1083855d4; end: 10838574f;  */

bool FUN_1083855d4(float param_1,float param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_3;
  if (param_3[0xc] == 2.8026e-45) {
    lVar1 = 0;
    fVar2 = (fVar5 + param_3[2]) * 0.5;
    fVar4 = (param_3[1] + param_3[3]) * 0.5;
  }
  else {
    fVar2 = fVar5 + param_3[4];
    if ((fVar2 <= param_1) || (fVar4 = param_3[1] + param_3[5], fVar4 <= param_2)) {
      fVar2 = fVar5 + param_3[10];
      if ((fVar2 <= param_1) || (fVar4 = param_3[3] - param_3[0xb], param_2 <= fVar4)) {
        fVar2 = param_3[2] - param_3[6];
        if ((param_1 <= fVar2) || (fVar4 = param_3[1] + param_3[7], fVar4 <= param_2)) {
          fVar2 = param_3[2] - param_3[8];
          if ((param_1 <= fVar2) || (fVar4 = param_3[3] - param_3[9], param_2 <= fVar4)) {
            return true;
          }
          lVar1 = 2;
        }
        else {
          lVar1 = 1;
        }
      }
      else {
        lVar1 = 3;
      }
    }
    else {
      lVar1 = 0;
    }
  }
  fVar3 = param_3[lVar1 * 2 + 4];
  fVar5 = param_3[lVar1 * 2 + 5];
  return (param_2 - fVar4) * (param_2 - fVar4) * fVar3 * fVar3 +
         fVar5 * fVar5 * (param_1 - fVar2) * (param_1 - fVar2) <= fVar5 * fVar3 * fVar5 * fVar3;
}



/* Entry: 108385750; end: 1083857eb;  */

float * FUN_108385750(float *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = param_1;
  FUN_108281a6c();
  if ((int)pfVar1 != 0) {
    if (param_1[0xc] == 1.4013e-45) {
      pfVar1 = (float *)0x1;
    }
    else {
      fVar7 = *param_2;
      pfVar1 = param_1;
      FUN_1083855d4(fVar7,param_2[1]);
      if (((int)pfVar1 != 0) && (func_0x00010838600c(), (int)pfVar1 != 0)) {
        fVar8 = param_2[3];
        func_0x00010838600c();
        if ((int)pfVar1 != 0) {
          fVar6 = *param_1;
          if (param_1[0xc] == 2.8026e-45) {
            lVar2 = 0;
            fVar3 = (fVar6 + param_1[2]) * 0.5;
            fVar5 = (param_1[1] + param_1[3]) * 0.5;
          }
          else {
            fVar3 = fVar6 + param_1[4];
            if ((fVar3 <= fVar7) || (fVar5 = param_1[1] + param_1[5], fVar5 <= fVar8)) {
              fVar3 = fVar6 + param_1[10];
              if ((fVar3 <= fVar7) || (fVar5 = param_1[3] - param_1[0xb], fVar8 <= fVar5)) {
                fVar3 = param_1[2] - param_1[6];
                if ((fVar7 <= fVar3) || (fVar5 = param_1[1] + param_1[7], fVar5 <= fVar8)) {
                  fVar3 = param_1[2] - param_1[8];
                  if ((fVar7 <= fVar3) || (fVar5 = param_1[3] - param_1[9], fVar8 <= fVar5)) {
                    return (float *)0x1;
                  }
                  lVar2 = 2;
                }
                else {
                  lVar2 = 1;
                }
              }
              else {
                lVar2 = 3;
              }
            }
            else {
              lVar2 = 0;
            }
          }
          fVar4 = param_1[lVar2 * 2 + 4];
          fVar6 = param_1[lVar2 * 2 + 5];
          return (float *)(ulong)((fVar8 - fVar5) * (fVar8 - fVar5) * fVar4 * fVar4 +
                                  fVar6 * fVar6 * (fVar7 - fVar3) * (fVar7 - fVar3) <=
                                 fVar6 * fVar4 * fVar6 * fVar4);
        }
      }
    }
  }
  return pfVar1;
}



/* Entry: 1083857ec; end: 108385a2b;  */

float * FUN_1083857ec(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == (float *)0x0) {
    return (float *)0x0;
  }
  pfVar6 = param_2;
  func_0x0001081420b8();
  if ((int)pfVar6 != 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    uVar14 = param_1[5];
    uVar13 = param_1[4];
    param_3[0xc] = *(float *)(param_1 + 6);
    *(undefined8 *)(param_3 + 6) = uVar5;
    *(undefined8 *)(param_3 + 4) = uVar4;
    *(undefined8 *)(param_3 + 10) = uVar14;
    *(undefined8 *)(param_3 + 8) = uVar13;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
    return (float *)0x1;
  }
  pfVar6 = param_2;
  FUN_10827a0d8();
  if ((int)pfVar6 == 0) {
    return pfVar6;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  pfVar6 = param_2;
  FUN_108364f90(param_2,&uStack_50,param_1,1);
  if ((int)pfVar6 == 0) {
    return pfVar6;
  }
  fVar15 = (float)((ulong)uStack_50 >> 0x20);
  fVar16 = (float)((ulong)uStack_48 >> 0x20);
  if (fVar16 <= fVar15) {
    return (float *)0x0;
  }
  fVar9 = (float)uStack_50;
  fVar11 = (float)uStack_48;
  if ((bool)(~(fVar9 < fVar11) & 1)) {
    return (float *)0x0;
  }
  if (NAN((fVar9 - fVar9) * fVar15 * fVar11 * fVar16)) {
    return (float *)0x0;
  }
  *(undefined8 *)(param_3 + 2) = uStack_48;
  *(undefined8 *)param_3 = uStack_50;
  fVar1 = *(float *)(param_1 + 6);
  param_3[0xc] = fVar1;
  if (fVar1 == 1.4013e-45) {
    return (float *)0x1;
  }
  if (fVar1 == 2.8026e-45) {
    for (lVar7 = 0; lVar7 != 0x20; lVar7 = lVar7 + 8) {
      *(ulong *)((long)param_3 + lVar7 + 0x10) =
           CONCAT44((fVar16 - fVar15) * 0.5,(fVar11 - fVar9) * 0.5);
    }
    return (float *)0x1;
  }
  fVar16 = *param_2;
  fVar15 = param_2[4];
  pfVar6 = param_2;
  FUN_1082878d0();
  if ((int)pfVar6 == 0) {
    fVar9 = param_2[1];
    fVar15 = param_2[3];
    uVar8 = 3;
    if (0.0 <= fVar9) {
      uVar8 = 1;
    }
    lVar7 = 4;
    pfVar6 = param_3 + 5;
    do {
      pfVar6[-1] = *(float *)((long)(param_1 + (uVar8 & 3) + 2) + 4);
      *pfVar6 = *(float *)(param_1 + (uVar8 & 3) + 2);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + -1;
      pfVar6 = pfVar6 + 2;
    } while (lVar7 != 0);
    if (0.0 <= fVar9) {
      fVar15 = -fVar15;
    }
    fVar16 = -fVar9;
    if (0.0 <= fVar9) {
      fVar16 = fVar9;
    }
  }
  else {
    for (lVar7 = 0; lVar7 != 0x20; lVar7 = lVar7 + 8) {
      *(undefined8 *)((long)param_3 + lVar7 + 0x10) = *(undefined8 *)((long)param_1 + lVar7 + 0x10);
    }
  }
  lVar7 = 0;
  fVar9 = -fVar16;
  if (0.0 <= fVar16) {
    fVar9 = fVar16;
  }
  fVar11 = -fVar15;
  if (0.0 <= fVar15) {
    fVar11 = fVar15;
  }
  for (; lVar7 != 0x20; lVar7 = lVar7 + 8) {
    *(float *)((long)param_3 + lVar7 + 0x10) = fVar9 * *(float *)((long)param_3 + lVar7 + 0x10);
    *(float *)((long)param_3 + lVar7 + 0x14) = fVar11 * *(float *)((long)param_3 + lVar7 + 0x14);
  }
  if (0.0 <= fVar16) {
    if (0.0 <= fVar15) goto LAB_108385a00;
    auVar12 = *(undefined1 (*) [16])(param_3 + 4);
    auVar10 = *(undefined1 (*) [16])(param_3 + 8);
LAB_1083859f4:
    auVar10 = NEON_ext(auVar10,auVar10,8,1);
    auVar12 = NEON_ext(auVar12,auVar12,8,1);
  }
  else {
    if (0.0 <= fVar15) {
      auVar10 = *(undefined1 (*) [16])(param_3 + 4);
      auVar12 = *(undefined1 (*) [16])(param_3 + 8);
      goto LAB_1083859f4;
    }
    auVar12 = *(undefined1 (*) [16])(param_3 + 4);
    auVar10 = *(undefined1 (*) [16])(param_3 + 8);
  }
  *(long *)(param_3 + 6) = auVar10._8_8_;
  *(long *)(param_3 + 4) = auVar10._0_8_;
  *(long *)(param_3 + 10) = auVar12._8_8_;
  *(long *)(param_3 + 8) = auVar12._0_8_;
LAB_108385a00:
  FUN_108384fa0(param_3);
  FUN_108385a2c(param_3,param_3 + 4);
  return param_3;
}



/* Entry: 108385a2c; end: 108385adb;  */

bool FUN_108385a2c(float *param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = param_1;
  FUN_1082ffd68();
  if ((int)pfVar1 != 0) {
    fVar4 = *param_1;
    fVar5 = param_1[2];
    if (fVar4 <= fVar5) {
      fVar6 = param_1[1];
      fVar7 = param_1[3];
      if (fVar6 <= fVar7) {
        lVar2 = 5;
        puVar3 = (undefined4 *)(param_2 + 4);
        while( true ) {
          lVar2 = lVar2 + -1;
          if (lVar2 == 0) {
            return true;
          }
          FUN_108385b98(puVar3[-1],fVar4,fVar5);
          if ((int)pfVar1 == 0) break;
          FUN_108385b98(*puVar3,fVar6,fVar7);
          puVar3 = puVar3 + 2;
          if (((ulong)pfVar1 & 1) == 0) {
            return lVar2 == 0;
          }
        }
        return lVar2 == 0;
      }
    }
  }
  return false;
}



/* Entry: 108385adc; end: 108385b2b;  */

undefined8 FUN_108385adc(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (param_3 < 0x30) {
    return 0;
  }
  uStack_20 = 0;
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  FUN_108384f00(param_1,&uStack_50,&uStack_40);
  return 0x30;
}



/* Entry: 108385b2c; end: 108385b97;  */

bool FUN_108385b2c(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_60 [64];
  
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) < 0x30) {
    return false;
  }
  func_0x000108386040();
  iVar2 = (int)param_1;
  FUN_10840e258();
  bVar1 = false;
  if (iVar2 != 0) {
    FUN_108385adc(param_2,auStack_60,0x30);
    bVar1 = param_2 == 0x30;
  }
  return bVar1;
}



/* Entry: 108385b98; end: 108385cbb;  */

bool FUN_108385b98(float param_1,float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  bVar1 = false;
  bVar3 = true;
  if (param_1 <= param_3 - param_2) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(param_2) && !NAN(param_3)) {
      bVar1 = param_2 == param_3;
      bVar3 = param_3 <= param_2;
    }
  }
  fVar5 = param_1 + param_2;
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar5) && !NAN(param_3)) {
      bVar2 = fVar5 == param_3;
      bVar4 = param_3 <= fVar5;
    }
  }
  bVar1 = true;
  bVar3 = false;
  if (!bVar4 || bVar2) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(param_3 - param_1) && !NAN(param_2)) {
      bVar1 = param_3 - param_1 < param_2;
      bVar3 = false;
    }
  }
  bVar2 = true;
  bVar4 = false;
  if (bVar1 == bVar3) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 0.0;
      bVar4 = false;
    }
  }
  return bVar2 == bVar4;
}



/* Entry: 108385cbc; end: 108385f03;  */

void FUN_108385cbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 in_register_00005008;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [4];
  undefined4 uStack_90;
  int iVar4;
  
  iVar14 = (int)&uStack_c0;
  iVar3 = (int)&uStack_c0;
  iVar4 = (int)&uStack_c0;
  func_0x000108386040();
  func_0x00010838ed30(&uStack_c0,param_4,param_5);
  uVar12 = in_register_00005008;
  if (iVar14 != 0) {
    lVar1 = param_5 + 0x10;
    for (lVar9 = 0; lVar9 != 0x10; lVar9 = lVar9 + 4) {
      uVar8 = (ulong)*(uint *)(&UNK_10deda940 + lVar9);
      func_0x00010838602c(&uStack_c0);
      uVar10 = param_2;
      uVar15 = param_3;
      uVar12 = in_register_00005008;
      func_0x00010838602c(param_4);
      uVar11 = uVar10;
      uVar16 = uVar15;
      uVar21 = in_register_00005008;
      func_0x00010838602c(param_5);
      fVar13 = (float)param_3;
      bVar5 = false;
      fVar19 = (float)param_2;
      if (fVar13 == (float)uVar16) {
        bVar5 = false;
        if (!NAN(fVar19) && !NAN((float)uVar11)) {
          bVar5 = fVar19 == (float)uVar11;
        }
      }
      bVar6 = false;
      if (fVar19 == (float)uVar10) {
        bVar6 = false;
        if (!NAN(fVar13) && !NAN((float)uVar15)) {
          bVar6 = fVar13 == (float)uVar15;
        }
      }
      uVar7 = param_5;
      if (bVar6) {
        uVar17 = *(undefined8 *)(param_4 + 0x10 + uVar8 * 8);
        fVar19 = (float)((ulong)uVar17 >> 0x20);
        fVar13 = (float)uVar17;
        if (!bVar5) {
          auStack_b0[uVar8] = uVar17;
          pfVar2 = (float *)(lVar1 + uVar8 * 8);
          fVar20 = pfVar2[1];
          bVar5 = false;
          if ((fVar13 == *pfVar2) && (bVar5 = false, !NAN(fVar19) && !NAN(fVar20))) {
            bVar5 = fVar19 == fVar20;
          }
          uVar17 = uVar10;
          in_register_00005008 = uVar21;
          param_3 = uVar15;
          uVar10 = uVar11;
          uVar15 = uVar16;
          if (bVar5) goto LAB_108385e84;
          goto LAB_108385e34;
        }
        param_2 = *(undefined8 *)(lVar1 + uVar8 * 8);
        fVar20 = (float)((ulong)param_2 >> 0x20);
        if (((bool)(~((float)param_2 <= fVar13) & 1)) || (param_3 = uVar17, fVar19 < fVar20)) {
          iVar14 = -(uint)(fVar13 <= (float)param_2);
          iVar18 = -(uint)(fVar19 <= fVar20);
          uVar12 = 0;
          if (((~(byte)iVar14 & 1) != 0) ||
             (uVar17 = param_2,
             param_3 = CONCAT17(~(byte)((uint)iVar18 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar18 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar18 >> 8),
                                                  CONCAT14(~(byte)iVar18,
                                                           CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar14 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar14 >> 8),~(byte)iVar14))))))), fVar20 < fVar19
             )) goto LAB_108385eb0;
        }
        in_register_00005008 = 0;
        auStack_b0[uVar8] = uVar17;
      }
      else {
        if (bVar5) {
          uVar12 = *(undefined8 *)(lVar1 + uVar8 * 8);
          auStack_b0[uVar8] = uVar12;
          pfVar2 = (float *)(param_4 + 0x10 + uVar8 * 8);
          fVar19 = pfVar2[1];
          fVar13 = (float)((ulong)uVar12 >> 0x20);
          bVar5 = false;
          if (((float)uVar12 == *pfVar2) && (bVar5 = false, !NAN(fVar13) && !NAN(fVar19))) {
            bVar5 = fVar13 == fVar19;
          }
          uVar7 = param_4;
          uVar17 = uVar11;
          param_3 = uVar16;
          if (bVar5) {
LAB_108385e84:
            func_0x000108385f60(uVar17,param_3,uVar10,uVar15);
            param_2 = uVar17;
            uVar12 = in_register_00005008;
            if ((uVar8 & 1) != 0) goto LAB_108385e8c;
            goto LAB_108385eb0;
          }
        }
        else {
          auStack_b0[uVar8] = 0;
          uVar8 = param_4;
          uVar10 = param_2;
          in_register_00005008 = uVar12;
          FUN_1083855d4(param_2,param_3);
          uVar17 = param_2;
          param_2 = uVar10;
          if ((uVar8 & 1) == 0) goto LAB_108385eb0;
        }
LAB_108385e34:
        FUN_1083855d4();
        param_2 = uVar17;
        uVar12 = in_register_00005008;
        if ((uVar7 & 1) == 0) goto LAB_108385eb0;
      }
LAB_108385e8c:
      param_2 = uVar17;
    }
    FUN_108385a2c(&uStack_c0,auStack_b0);
    uVar12 = in_register_00005008;
    if ((iVar3 != 0) && (FUN_108384fa0(), uVar12 = in_register_00005008, iVar4 == 0)) {
      FUN_108385498(&uStack_c0);
      param_1[1] = uStack_b8;
      *param_1 = uStack_c0;
      param_1[3] = auStack_b0[1];
      param_1[2] = auStack_b0[0];
      param_1[5] = auStack_b0[3];
      param_1[4] = auStack_b0[2];
      *(undefined4 *)(param_1 + 6) = uStack_90;
      return;
    }
  }
LAB_108385eb0:
  func_0x00010838601c();
  param_1[1] = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 108385f04; end: 1083860db;  */

undefined4 FUN_108385f04(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    param_1 = param_1 + 2;
    break;
  case 2:
    param_1 = param_1 + 2;
    break;
  case 3:
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108385f60);
    (*pcVar1)();
  }
  return *param_1;
}



/* Entry: 1083860dc; end: 108386403;  */

void FUN_1083860dc(undefined2 *param_1,float *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = (undefined8 *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  if (param_3 != 0) {
    if ((int)param_3 < 0) goto LAB_1083863dc;
    func_0x0001083869d4(&puStack_a8,(long)(int)param_3,0,&puStack_b0);
    puVar12 = puStack_a0 + (((long)puStack_b8 - (long)puStack_c0) / -0x18) * 3;
    _memcpy(puVar12);
    puVar1 = puStack_b0;
    puStack_b0 = puStack_90;
    puStack_b8 = puStack_98;
    puStack_98 = puStack_c0;
    puStack_90 = puVar1;
    puStack_a8 = puStack_c0;
    puStack_a0 = puStack_c0;
    puStack_c0 = puVar12;
    FUN_108386a28(&puStack_a8);
  }
  for (uVar13 = 0; param_3 != uVar13; uVar13 = uVar13 + 1) {
    if ((*param_2 < param_2[2]) && (param_2[1] < param_2[3])) {
      uStack_70 = (undefined4)*(undefined8 *)(param_2 + 2);
      uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      uStack_78 = (undefined4)*(undefined8 *)param_2;
      uStack_74 = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
      if (puStack_b8 < puStack_b0) {
        *(int *)puStack_b8 = (int)uVar13;
        *(ulong *)((long)puStack_b8 + 0xc) = CONCAT44(uStack_70,uStack_74);
        *(ulong *)((long)puStack_b8 + 4) = CONCAT44(uStack_78,uStack_7c);
        *(undefined4 *)((long)puStack_b8 + 0x14) = uStack_6c;
        puStack_b8 = puStack_b8 + 3;
      }
      else {
        ppuVar4 = &puStack_c0;
        FUN_108386a68(&puStack_c0,((long)puStack_b8 - (long)puStack_c0) / 0x18 + 1);
        func_0x0001083869d4(&puStack_a8,ppuVar4,((long)puStack_b8 - (long)puStack_c0) / 0x18,
                            &puStack_b0);
        *(int *)puStack_98 = (int)uVar13;
        *(ulong *)((long)puStack_98 + 0xc) = CONCAT44(uStack_70,uStack_74);
        *(ulong *)((long)puStack_98 + 4) = CONCAT44(uStack_78,uStack_7c);
        *(undefined4 *)((long)puStack_98 + 0x14) = uStack_6c;
        puVar1 = puStack_98 + 3;
        puVar11 = puStack_a0 + (((long)puStack_b8 - (long)puStack_c0) / -0x18) * 3;
        func_0x000108386c2c();
        puVar12 = puStack_b0;
        puStack_b0 = puStack_90;
        puStack_a8 = puStack_c0;
        puStack_98 = puStack_c0;
        puStack_90 = puVar12;
        puStack_a0 = puStack_c0;
        puStack_c0 = puVar11;
        puStack_b8 = puVar1;
        FUN_108386a28(&puStack_a8);
        puStack_b8 = puVar1;
      }
    }
    param_2 = param_2 + 4;
  }
  uVar13 = ((long)puStack_b8 - (long)puStack_c0) / 0x18;
  iVar6 = (int)uVar13;
  *(int *)(param_1 + 6) = iVar6;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      FUN_108386404(param_1 + 0x14,1);
      puVar5 = param_1;
      FUN_108386488(param_1,0);
      *puVar5 = 1;
      uVar8 = puStack_c0[2];
      uVar14 = *puStack_c0;
      *(undefined8 *)(puVar5 + 8) = puStack_c0[1];
      *(undefined8 *)(puVar5 + 4) = uVar14;
      *(undefined8 *)(puVar5 + 0xc) = uVar8;
      *(undefined2 **)(param_1 + 8) = puVar5;
      uVar8 = puStack_c0[1];
      *(undefined8 *)(param_1 + 0x10) = puStack_c0[2];
      *(undefined8 *)(param_1 + 0xc) = uVar8;
    }
    else {
      iVar6 = 0;
      while (iVar7 = (int)uVar13, iVar7 != 1) {
        uVar9 = 0;
        uVar13 = 0;
        uVar2 = iVar7 % 0xb;
        uVar10 = 0;
        if (uVar2 < 6) {
          uVar10 = 6 - uVar2;
        }
        if ((int)uVar2 < 1) {
          uVar10 = uVar2;
        }
        uVar10 = 10 - uVar10;
        for (; (int)uVar9 < iVar7; uVar9 = uVar9 + uVar2 + 1) {
          uVar13 = (ulong)((int)uVar13 + 1);
          uVar2 = iVar7 + ~uVar9;
          if (uVar10 <= iVar7 + ~uVar9) {
            uVar2 = uVar10;
          }
          uVar10 = 10;
        }
        iVar6 = iVar6 + (int)uVar13;
      }
      FUN_108386404(param_1 + 0x14,iVar6 + 1);
      FUN_1083865a0(&puStack_a8,param_1,&puStack_c0,0);
      *(undefined8 **)(param_1 + 0xc) = puStack_a0;
      *(undefined8 **)(param_1 + 8) = puStack_a8;
      *(undefined8 **)(param_1 + 0x10) = puStack_98;
    }
  }
  func_0x000108386968(&puStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1083863dc:
  FUN_108386994();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1083863e4);
  (*pcVar3)();
}



/* Entry: 108386404; end: 108386487;  */

void FUN_108386404(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined2 *puVar3;
  long *plVar4;
  undefined2 *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar12;
  long lVar13;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined2 *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 auStack_1c8 [34];
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x110) < param_2) {
    if (0xf0f0f0f0f0f0f0 < param_2) {
      func_0x000108386ab8();
      puVar10 = auStack_1c8;
      puVar5 = (undefined2 *)0x110;
      _bzero();
      lVar8 = 0x10;
      do {
        *(undefined8 *)((long)auStack_1c8 + lVar8) = 0;
        *(undefined8 *)((long)auStack_1c8 + lVar8 + 8) = 0;
        lVar8 = lVar8 + 0x18;
      } while (lVar8 != 0x118);
      puVar7 = (ulong *)(param_1 + 7);
      uVar17 = param_1[6];
      if (uVar17 < *puVar7) {
        func_0x000108386bd8();
        lVar8 = uVar17 + 0x110;
      }
      else {
        lVar8 = param_1[5];
        plVar6 = (long *)((long)(uVar17 - lVar8) / 0x110);
        uVar17 = (long)plVar6 + 1;
        if (0xf0f0f0f0f0f0f0 < uVar17) {
          func_0x000108386ab8();
          puVar11 = (undefined8 *)*plVar6;
          lVar8 = plVar6[1];
          if (lVar8 - (long)puVar11 == 0x18) {
            uVar12 = *puVar11;
            puVar10[1] = puVar11[1];
            *puVar10 = uVar12;
            puVar10[2] = puVar11[2];
          }
          else {
            uVar17 = 0;
            uVar14 = 0;
            iVar1 = (int)((lVar8 - (long)puVar11) / 0x18) % 0xb;
            iVar16 = 0;
            if (iVar1 < 6) {
              iVar16 = 6 - iVar1;
            }
            if (iVar1 < 1) {
              iVar16 = iVar1;
            }
            uVar15 = (ulong)(0xb - iVar16);
            while( true ) {
              uVar2 = (lVar8 - (long)puVar11) / 0x18;
              iVar16 = (int)uVar14;
              if ((int)uVar2 <= iVar16) break;
              puVar3 = puVar5;
              FUN_108386488(puVar5,(uint)puVar7 & 0xffff);
              *puVar3 = 1;
              lVar8 = (-(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) + (long)iVar16;
              puVar10 = (undefined8 *)(*plVar6 + lVar8 * 8);
              uVar12 = puVar10[2];
              uVar18 = *puVar10;
              *(undefined8 *)(puVar3 + 8) = puVar10[1];
              *(undefined8 *)(puVar3 + 4) = uVar18;
              *(undefined8 *)(puVar3 + 0xc) = uVar12;
              lVar9 = *plVar6;
              lVar13 = lVar9 + lVar8 * 8;
              lStack_248 = *(long *)(lVar13 + 0x10);
              uStack_250 = *(undefined8 *)(lVar13 + 8);
              lVar8 = lVar8 * 8;
              uVar14 = 1;
              puVar10 = (undefined8 *)(puVar3 + 0x10);
              puStack_258 = puVar3;
              while ((lVar8 = lVar8 + 0x18, uVar14 < uVar15 &&
                     ((long)((long)iVar16 + uVar14) < (long)(int)((plVar6[1] - lVar9) / 0x18)))) {
                puVar11 = (undefined8 *)(lVar9 + lVar8);
                func_0x00010838ed50(&uStack_250,puVar11 + 1);
                uVar18 = puVar11[1];
                uVar12 = *puVar11;
                puVar10[2] = puVar11[2];
                puVar10[1] = uVar18;
                *puVar10 = uVar12;
                uVar14 = uVar14 + 1;
                *puVar3 = (short)uVar14;
                lVar9 = *plVar6;
                puVar10 = puVar10 + 3;
              }
              uVar14 = (ulong)(uint)(iVar16 + (int)uVar14);
              puVar10 = (undefined8 *)(lVar9 + uVar17 * 0x18);
              puVar10[1] = uStack_250;
              *puVar10 = puStack_258;
              puVar10[2] = lStack_248;
              uVar17 = uVar17 + 1;
              puVar11 = (undefined8 *)*plVar6;
              lVar8 = plVar6[1];
              uVar15 = 0xb;
            }
            uVar15 = uVar17 & 0xffffffff;
            uVar14 = uVar15 - uVar2;
            if (uVar15 < uVar2 || uVar14 == 0) {
              if (uVar15 < uVar2) {
                plVar6[1] = (long)(puVar11 + uVar15 * 3);
              }
            }
            else if ((ulong)((plVar6[2] - lVar8) / 0x18) < uVar14) {
              plVar4 = plVar6;
              func_0x000108386a68(plVar6);
              func_0x0001083869d4(&puStack_258,plVar4,(plVar6[1] - *plVar6) / 0x18,plVar6 + 2);
              lVar8 = lStack_248 + (uVar14 & 0xffffffff) * 0x18;
              lVar13 = (uVar17 & 0xffffffff) * 0x18 + uVar2 * -0x18;
              while (lVar13 != 0) {
                func_0x000108386c54();
                lVar8 = extraout_x9;
                lVar13 = extraout_x10;
              }
              lStack_248 = lVar8;
              func_0x0001083869a0(plVar6,&puStack_258);
              FUN_108386a28(&puStack_258);
            }
            else {
              lVar8 = lVar8 + (uVar14 & 0xffffffff) * 0x18;
              lVar13 = (uVar17 & 0xffffffff) * 0x18 + uVar2 * -0x18;
              while (lVar13 != 0) {
                func_0x000108386c54();
                lVar8 = extraout_x9_00;
                lVar13 = extraout_x10_00;
              }
              plVar6[1] = lVar8;
            }
            FUN_1083865a0();
          }
          return;
        }
        uVar15 = (long)(*puVar7 - lVar8) / 0x110;
        uVar14 = uVar15 * 2;
        if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
          uVar14 = uVar17;
        }
        if (0x78787878787877 < uVar15) {
          uVar14 = 0xf0f0f0f0f0f0f0;
        }
        func_0x000108386af8(auStack_b8,uVar14);
        func_0x000108386bd8();
        lStack_a8 = lStack_a8 + 0x110;
        func_0x000108386ac4(param_1 + 5,auStack_b8);
        lVar8 = param_1[6];
        FUN_108386b48(auStack_b8);
      }
      param_1[6] = lVar8;
      *(undefined2 *)(lVar8 + -0x110) = 0;
      *(short *)(lVar8 + -0x10e) = (short)param_2;
      return;
    }
    func_0x000108386af8(auStack_48,param_2,(param_1[1] - *param_1) / 0x110);
    func_0x000108386ac4(param_1,auStack_48);
    FUN_108386b48(auStack_48);
  }
  return;
}



/* Entry: 108386488; end: 10838659f;  */

void FUN_108386488(long param_1,undefined2 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined2 *puVar3;
  long *plVar4;
  undefined2 *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar12;
  long lVar13;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined2 *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 auStack_178 [34];
  undefined1 auStack_68 [16];
  long lStack_58;
  
  puVar10 = auStack_178;
  puVar5 = (undefined2 *)0x110;
  _bzero();
  lVar8 = 0x10;
  do {
    *(undefined8 *)((long)auStack_178 + lVar8) = 0;
    *(undefined8 *)((long)auStack_178 + lVar8 + 8) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x118);
  puVar7 = (ulong *)(param_1 + 0x38);
  uVar17 = *(ulong *)(param_1 + 0x30);
  if (uVar17 < *puVar7) {
    func_0x000108386bd8();
    lVar8 = uVar17 + 0x110;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x28);
    plVar6 = (long *)((long)(uVar17 - lVar8) / 0x110);
    uVar17 = (long)plVar6 + 1;
    if (0xf0f0f0f0f0f0f0 < uVar17) {
      func_0x000108386ab8();
      puVar11 = (undefined8 *)*plVar6;
      lVar8 = plVar6[1];
      if (lVar8 - (long)puVar11 == 0x18) {
        uVar12 = *puVar11;
        puVar10[1] = puVar11[1];
        *puVar10 = uVar12;
        puVar10[2] = puVar11[2];
      }
      else {
        uVar17 = 0;
        uVar14 = 0;
        iVar1 = (int)((lVar8 - (long)puVar11) / 0x18) % 0xb;
        iVar16 = 0;
        if (iVar1 < 6) {
          iVar16 = 6 - iVar1;
        }
        if (iVar1 < 1) {
          iVar16 = iVar1;
        }
        uVar15 = (ulong)(0xb - iVar16);
        while( true ) {
          uVar2 = (lVar8 - (long)puVar11) / 0x18;
          iVar16 = (int)uVar14;
          if ((int)uVar2 <= iVar16) break;
          puVar3 = puVar5;
          FUN_108386488(puVar5,(uint)puVar7 & 0xffff);
          *puVar3 = 1;
          lVar8 = (-(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) + (long)iVar16;
          puVar10 = (undefined8 *)(*plVar6 + lVar8 * 8);
          uVar12 = puVar10[2];
          uVar18 = *puVar10;
          *(undefined8 *)(puVar3 + 8) = puVar10[1];
          *(undefined8 *)(puVar3 + 4) = uVar18;
          *(undefined8 *)(puVar3 + 0xc) = uVar12;
          lVar9 = *plVar6;
          lVar13 = lVar9 + lVar8 * 8;
          lStack_1f8 = *(long *)(lVar13 + 0x10);
          uStack_200 = *(undefined8 *)(lVar13 + 8);
          lVar8 = lVar8 * 8;
          uVar14 = 1;
          puVar10 = (undefined8 *)(puVar3 + 0x10);
          puStack_208 = puVar3;
          while ((lVar8 = lVar8 + 0x18, uVar14 < uVar15 &&
                 ((long)((long)iVar16 + uVar14) < (long)(int)((plVar6[1] - lVar9) / 0x18)))) {
            puVar11 = (undefined8 *)(lVar9 + lVar8);
            func_0x00010838ed50(&uStack_200,puVar11 + 1);
            uVar18 = puVar11[1];
            uVar12 = *puVar11;
            puVar10[2] = puVar11[2];
            puVar10[1] = uVar18;
            *puVar10 = uVar12;
            uVar14 = uVar14 + 1;
            *puVar3 = (short)uVar14;
            lVar9 = *plVar6;
            puVar10 = puVar10 + 3;
          }
          uVar14 = (ulong)(uint)(iVar16 + (int)uVar14);
          puVar10 = (undefined8 *)(lVar9 + uVar17 * 0x18);
          puVar10[1] = uStack_200;
          *puVar10 = puStack_208;
          puVar10[2] = lStack_1f8;
          uVar17 = uVar17 + 1;
          puVar11 = (undefined8 *)*plVar6;
          lVar8 = plVar6[1];
          uVar15 = 0xb;
        }
        uVar15 = uVar17 & 0xffffffff;
        uVar14 = uVar15 - uVar2;
        if (uVar15 < uVar2 || uVar14 == 0) {
          if (uVar15 < uVar2) {
            plVar6[1] = (long)(puVar11 + uVar15 * 3);
          }
        }
        else if ((ulong)((plVar6[2] - lVar8) / 0x18) < uVar14) {
          plVar4 = plVar6;
          func_0x000108386a68(plVar6);
          func_0x0001083869d4(&puStack_208,plVar4,(plVar6[1] - *plVar6) / 0x18,plVar6 + 2);
          lVar8 = lStack_1f8 + (uVar14 & 0xffffffff) * 0x18;
          lVar13 = (uVar17 & 0xffffffff) * 0x18 + uVar2 * -0x18;
          while (lVar13 != 0) {
            func_0x000108386c54();
            lVar8 = extraout_x9;
            lVar13 = extraout_x10;
          }
          lStack_1f8 = lVar8;
          func_0x0001083869a0(plVar6,&puStack_208);
          FUN_108386a28(&puStack_208);
        }
        else {
          lVar8 = lVar8 + (uVar14 & 0xffffffff) * 0x18;
          lVar13 = (uVar17 & 0xffffffff) * 0x18 + uVar2 * -0x18;
          while (lVar13 != 0) {
            func_0x000108386c54();
            lVar8 = extraout_x9_00;
            lVar13 = extraout_x10_00;
          }
          plVar6[1] = lVar8;
        }
        FUN_1083865a0();
      }
      return;
    }
    uVar15 = (long)(*puVar7 - lVar8) / 0x110;
    uVar14 = uVar15 * 2;
    if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
      uVar14 = uVar17;
    }
    if (0x78787878787877 < uVar15) {
      uVar14 = 0xf0f0f0f0f0f0f0;
    }
    func_0x000108386af8(auStack_68,uVar14);
    func_0x000108386bd8();
    lStack_58 = lStack_58 + 0x110;
    func_0x000108386ac4((long *)(param_1 + 0x28),auStack_68);
    lVar8 = *(long *)(param_1 + 0x30);
    FUN_108386b48(auStack_68);
  }
  *(long *)(param_1 + 0x30) = lVar8;
  *(undefined2 *)(lVar8 + -0x110) = 0;
  *(undefined2 *)(lVar8 + -0x10e) = param_2;
  return;
}



/* Entry: 1083865a0; end: 10838681f;  */

void FUN_1083865a0(undefined8 *param_1,undefined2 *param_2,long *param_3,undefined2 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar9;
  long lVar10;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined2 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar7 = (undefined8 *)*param_3;
  lVar8 = param_3[1];
  if (lVar8 - (long)puVar7 == 0x18) {
    uVar9 = *puVar7;
    param_1[1] = puVar7[1];
    *param_1 = uVar9;
    param_1[2] = puVar7[2];
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    iVar2 = (int)((lVar8 - (long)puVar7) / 0x18) % 0xb;
    iVar12 = 0;
    if (iVar2 < 6) {
      iVar12 = 6 - iVar2;
    }
    if (iVar2 < 1) {
      iVar12 = iVar2;
    }
    uVar11 = (ulong)(0xb - iVar12);
    while( true ) {
      uVar3 = (lVar8 - (long)puVar7) / 0x18;
      iVar12 = (int)uVar13;
      if ((int)uVar3 <= iVar12) break;
      puVar4 = param_2;
      FUN_108386488(param_2,param_4);
      *puVar4 = 1;
      lVar8 = (-(uVar13 >> 0x1f) & 0xfffffffe00000000 | uVar13 << 1) + (long)iVar12;
      puVar7 = (undefined8 *)(*param_3 + lVar8 * 8);
      uVar9 = puVar7[2];
      uVar15 = *puVar7;
      *(undefined8 *)(puVar4 + 8) = puVar7[1];
      *(undefined8 *)(puVar4 + 4) = uVar15;
      *(undefined8 *)(puVar4 + 0xc) = uVar9;
      lVar6 = *param_3;
      lVar10 = lVar6 + lVar8 * 8;
      lStack_78 = *(long *)(lVar10 + 0x10);
      uStack_80 = *(undefined8 *)(lVar10 + 8);
      lVar8 = lVar8 * 8;
      uVar13 = 1;
      puVar7 = (undefined8 *)(puVar4 + 0x10);
      puStack_88 = puVar4;
      while ((lVar8 = lVar8 + 0x18, uVar13 < uVar11 &&
             ((long)((long)iVar12 + uVar13) < (long)(int)((param_3[1] - lVar6) / 0x18)))) {
        puVar1 = (undefined8 *)(lVar6 + lVar8);
        func_0x00010838ed50(&uStack_80,puVar1 + 1);
        uVar15 = puVar1[1];
        uVar9 = *puVar1;
        puVar7[2] = puVar1[2];
        puVar7[1] = uVar15;
        *puVar7 = uVar9;
        uVar13 = uVar13 + 1;
        *puVar4 = (short)uVar13;
        lVar6 = *param_3;
        puVar7 = puVar7 + 3;
      }
      uVar13 = (ulong)(uint)(iVar12 + (int)uVar13);
      puVar7 = (undefined8 *)(lVar6 + uVar14 * 0x18);
      puVar7[1] = uStack_80;
      *puVar7 = puStack_88;
      puVar7[2] = lStack_78;
      uVar14 = uVar14 + 1;
      puVar7 = (undefined8 *)*param_3;
      lVar8 = param_3[1];
      uVar11 = 0xb;
    }
    uVar11 = uVar14 & 0xffffffff;
    uVar13 = uVar11 - uVar3;
    if (uVar11 < uVar3 || uVar13 == 0) {
      if (uVar11 < uVar3) {
        param_3[1] = (long)(puVar7 + uVar11 * 3);
      }
    }
    else if ((ulong)((param_3[2] - lVar8) / 0x18) < uVar13) {
      plVar5 = param_3;
      FUN_108386a68(param_3);
      func_0x0001083869d4(&puStack_88,plVar5,(param_3[1] - *param_3) / 0x18,param_3 + 2);
      lVar8 = lStack_78 + (uVar13 & 0xffffffff) * 0x18;
      lVar10 = (uVar14 & 0xffffffff) * 0x18 + uVar3 * -0x18;
      while (lVar10 != 0) {
        func_0x000108386c54();
        lVar8 = extraout_x9;
        lVar10 = extraout_x10;
      }
      lStack_78 = lVar8;
      func_0x0001083869a0(param_3,&puStack_88);
      FUN_108386a28(&puStack_88);
    }
    else {
      lVar8 = lVar8 + (uVar13 & 0xffffffff) * 0x18;
      lVar10 = (uVar14 & 0xffffffff) * 0x18 + uVar3 * -0x18;
      while (lVar10 != 0) {
        func_0x000108386c54();
        lVar8 = extraout_x9_00;
        lVar10 = extraout_x10_00;
      }
      param_3[1] = lVar8;
    }
    FUN_1083865a0();
  }
  return;
}



/* Entry: 108386820; end: 108386877;  */

void FUN_108386820(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = (int)param_1 + 0x18;
    FUN_1081e4b40();
    if (iVar1 != 0) {
      puVar2 = *(ushort **)(param_1 + 0x10);
      puVar4 = puVar2 + 4;
      for (uVar5 = 0; uVar5 < *puVar2; uVar5 = uVar5 + 1) {
        puVar3 = puVar4 + 4;
        FUN_1081e4b40(puVar3,param_2);
        if ((int)puVar3 != 0) {
          if (puVar2[1] == 0) {
            func_0x000100660118(param_3,puVar4);
          }
          else {
            FUN_108386878(*(undefined8 *)puVar4,param_2,param_3);
          }
        }
        puVar4 = puVar4 + 0xc;
      }
      return;
    }
  }
  return;
}



/* Entry: 108386878; end: 108386903;  */

void FUN_108386878(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  
  puVar2 = param_1 + 4;
  for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
    puVar1 = puVar2 + 4;
    FUN_1081e4b40(puVar1,param_2);
    if ((int)puVar1 != 0) {
      if (param_1[1] == 0) {
        func_0x000100660118(param_3,puVar2);
      }
      else {
        FUN_108386878(*(undefined8 *)puVar2,param_2,param_3);
      }
    }
    puVar2 = puVar2 + 0xc;
  }
  return;
}



/* Entry: 108386904; end: 10838691b;  */

long FUN_108386904(long param_1)

{
  return (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x28)) + 0x40;
}



/* Entry: 10838691c; end: 10838692f;  */

void FUN_10838691c(void)

{
  FUN_108386930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108386930; end: 108386993;  */

undefined8 * FUN_108386930(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3f3c8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108386994; end: 10838699f;  */

void FUN_108386994(void)

{
  func_0x000108386c20();
  func_0x000108386bf0();
  func_0x000108386c2c();
  func_0x000108386b88();
  return;
}



/* Entry: 1083869a0; end: 108386a27;  */

void FUN_1083869a0(void)

{
  func_0x000108386bf0();
  func_0x000108386c2c();
  func_0x000108386b88();
  return;
}



/* Entry: 108386a28; end: 108386a67;  */

long * FUN_108386a28(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x18;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108386a68; end: 108386ac3;  */

long * FUN_108386a68(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_108386994();
  func_0x000108386c20();
  func_0x000108386bf0();
  func_0x000108386c2c();
  func_0x000108386b88();
  return param_1;
}



/* Entry: 108386ac4; end: 108386b47;  */

void FUN_108386ac4(void)

{
  func_0x000108386bf0();
  func_0x000108386c2c();
  func_0x000108386b88();
  return;
}



/* Entry: 108386b48; end: 108386b87;  */

long * FUN_108386b48(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x110;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108386b88; end: 108386c67;  */

void FUN_108386b88(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108386c68; end: 108386d0f;  */

void FUN_108386c68(long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 extraout_x8;
  long lVar5;
  long unaff_x19;
  
  func_0x0001083877dc();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  bVar2 = *(byte *)(param_2 + 0x30);
  *(byte *)(param_1 + 0x30) = bVar2;
  *(undefined2 *)(param_1 + 0x31) = *(undefined2 *)(param_2 + 0x31);
  lVar5 = *(long *)(param_2 + 0x38);
  if (lVar5 == 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
  }
  else {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(long *)(unaff_x19 + 0x38) = lVar5;
    bVar2 = *(byte *)(unaff_x19 + 0x30) & 1;
  }
  if (bVar2 == 0) {
    FUN_10832dbb4((undefined8 *)(param_1 + 0x18),param_2 + 0x18);
  }
  else {
    func_0x00010838f558();
  }
  return;
}



/* Entry: 108386d10; end: 108386d73;  */

long FUN_108386d10(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    func_0x00010838f558(param_1,param_2);
  }
  else {
    FUN_10832dbb4(param_1 + 0x18,param_2 + 0x18);
  }
  *(undefined2 *)(param_1 + 0x31) = *(undefined2 *)(param_2 + 0x31);
  FUN_10816979c(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



/* Entry: 108386d74; end: 108386db3;  */

void FUN_108386d74(long param_1)

{
  bool bVar1;
  
  func_0x00010838f5bc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  bVar1 = *(long *)(param_1 + 0x10) == -1;
  *(bool *)(param_1 + 0x31) = bVar1;
  *(bool *)(param_1 + 0x32) = !bVar1;
  return;
}



/* Entry: 108386db4; end: 108386eaf;  */

void FUN_108386db4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x0001083877dc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (param_4 == 0) {
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
    func_0x00010838f5bc(auStack_48,param_3);
    FUN_108390bcc();
    FUN_10838f648(auStack_48);
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
    FUN_10832e09c((undefined8 *)(param_1 + 0x18),param_2);
  }
  lVar1 = 0x10;
  if ((*(byte *)(unaff_x19 + 0x30) & 1) == 0) {
    lVar1 = 0x28;
  }
  *(bool *)(unaff_x19 + 0x31) =
       *(long *)(unaff_x19 + lVar1) == -((ulong)*(byte *)(unaff_x19 + 0x30) & 1);
  lVar1 = unaff_x19;
  FUN_108386eb0();
  *(char *)(unaff_x19 + 0x32) = (char)lVar1;
  return;
}



/* Entry: 108386eb0; end: 108386ed3;  */

bool FUN_108386eb0(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    return *(long *)(param_1 + 0x10) == 0;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (((lVar6 != 0) && (*(int *)(lVar6 + 4) == 1)) &&
     (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x24) + -1)) {
    pcVar7 = (char *)((ulong)*(uint *)(lVar6 + 0x14) + lVar6 + 0x19);
    iVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    do {
      bVar4 = *pcVar7 == -1;
      if (*pcVar7 != -1) {
        return bVar4;
      }
      pbVar2 = (byte *)(pcVar7 + -1);
      pcVar7 = pcVar7 + 2;
      iVar3 = iVar5 - (uint)*pbVar2;
      bVar1 = (int)(uint)*pbVar2 <= iVar5;
      iVar5 = iVar3;
    } while (iVar3 != 0 && bVar1);
    return bVar4;
  }
  return false;
}



/* Entry: 108386ed4; end: 1083870ab;  */

undefined8 FUN_108386ed4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000106f47224(param_1 + 0x38);
  func_0x00010832dc04(param_1 + 0x18);
  func_0x000108390a10(param_1);
  return unaff_x19;
}



/* Entry: 1083870ac; end: 10838711f;  */

void FUN_1083870ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10827bd6c(param_1,param_2,param_3);
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_10832dd90(&uStack_38);
    FUN_10832e15c(param_1 + 0x18,&uStack_38,param_3);
    func_0x0001083877cc();
  }
  FUN_1083877b8();
  return;
}



/* Entry: 108387120; end: 108387297;  */

long FUN_108387120(float param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,ulong param_9)

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfStack_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  uVar2 = param_7;
  FUN_1082878d0();
  if ((uVar2 & 1) == 0) {
    FUN_10837bbf0(&fStack_50,param_6,0,0);
    FUN_108387298(param_5,&fStack_50,param_7,param_8,param_9);
    FUN_10837ca5c(CONCAT44(fStack_4c,fStack_50));
    return param_5;
  }
  func_0x000108142084(param_7,param_6,1);
  cVar1 = *(char *)(param_5 + 0x30);
  fStack_50 = param_1;
  fStack_4c = param_2;
  fStack_48 = param_3;
  fStack_44 = param_4;
  if (((int)param_9 == 0) || (cVar1 == '\0')) {
    if (((param_9 & 1) != 0) || (cVar1 == '\0')) {
      if (cVar1 != '\0') goto LAB_10838724c;
      goto LAB_108387250;
    }
  }
  else if ((((0.25 <= (param_1 + 0.125) - (float)(int)(param_1 + 0.125)) ||
            (0.25 <= (param_2 + 0.125) - (float)(int)(param_2 + 0.125))) ||
           (0.25 <= (param_3 + 0.125) - (float)(int)(param_3 + 0.125))) ||
          (0.25 <= (param_4 + 0.125) - (float)(int)(param_4 + 0.125))) {
    param_9 = 1;
LAB_10838724c:
    func_0x000108387810();
LAB_108387250:
    param_5 = param_5 + 0x18;
    FUN_10832e310(param_5,&fStack_50,param_8,param_9);
    goto LAB_108387264;
  }
  pfVar3 = &fStack_50;
  FUN_108277294();
  pfStack_60 = pfVar3;
  uStack_58 = param_6;
  func_0x000108386fb8(param_5,&pfStack_60,param_8);
LAB_108387264:
  func_0x0001083877b8();
  return param_5;
}



/* Entry: 108387298; end: 1083873f3;  */

undefined1 *
FUN_108387298(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_90 [64];
  undefined8 auStack_50 [2];
  
  puVar2 = auStack_90;
  FUN_108376ad8(auStack_50);
  FUN_1083796e4(param_2,param_3,auStack_50,1);
  if (((int)param_4 == 1) && ((param_1[0x32] & 1) != 0)) {
    if (((int)param_5 != 0) && (param_1[0x30] == '\x01')) {
      func_0x000108387810();
    }
    if (param_1[0x30] == '\x01') {
      func_0x00010838f5bc(auStack_90,param_1);
      FUN_108390bcc(param_1,auStack_50,auStack_90);
      FUN_10838f648(auStack_90);
    }
    else {
      puVar2 = param_1 + 0x18;
      FUN_10832e09c(puVar2,auStack_50,param_1 + 0x18,param_5);
    }
    func_0x0001083877b8();
    param_1 = puVar2;
  }
  else {
    lVar1 = 0;
    if (param_1[0x30] == '\0') {
      lVar1 = 0x18;
    }
    FUN_108386db4(auStack_90,auStack_50,param_1 + lVar1,param_5);
    FUN_1083874a0(param_1,auStack_90,param_4);
    FUN_108386ed4(auStack_90);
  }
  FUN_10837ca5c(auStack_50[0]);
  return param_1;
}



/* Entry: 1083873f4; end: 108387423;  */

/* WARNING: Removing unreachable block (ram,0x00010838705c) */
/* WARNING: Removing unreachable block (ram,0x000108387064) */
/* WARNING: Removing unreachable block (ram,0x000108387068) */
/* WARNING: Removing unreachable block (ram,0x000108387074) */

byte FUN_1083873f4(long param_1)

{
  long lVar1;
  
  FUN_10832dd90(param_1 + 0x18,param_1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  lVar1 = 0x10;
  if (*(byte *)(param_1 + 0x30) == 0) {
    lVar1 = 0x28;
  }
  *(bool *)(param_1 + 0x31) = *(long *)(param_1 + lVar1) == -((ulong)*(byte *)(param_1 + 0x30) & 1);
  lVar1 = param_1;
  FUN_108386eb0();
  *(char *)(param_1 + 0x32) = (char)lVar1;
  return (*(byte *)(param_1 + 0x31) ^ 0xff) & 1;
}



/* Entry: 108387424; end: 10838749f;  */

undefined8
FUN_108387424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 auStack_40 [2];
  
  FUN_10837bd30(auStack_40,param_2,0);
  FUN_108387298(param_1,auStack_40,param_3,param_4,param_5);
  FUN_10837ca5c(auStack_40[0]);
  return param_1;
}



/* Entry: 1083874a0; end: 108387553;  */

void FUN_1083874a0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x30) == '\x01' && *(char *)(param_2 + 0x30) != '\0') {
    FUN_10827bd6c(param_1,param_2,param_3);
    goto LAB_108387530;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (*(char *)(param_2 + 0x30) != '\0') goto LAB_10838750c;
LAB_1083874ec:
    puVar1 = (undefined8 *)(param_2 + 0x18);
  }
  else {
    func_0x000108387810();
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_1083874ec;
LAB_10838750c:
    puVar1 = &uStack_48;
    FUN_10832dd90(&uStack_48,param_2);
  }
  FUN_10832e15c(param_1 + 0x18,puVar1,param_3);
  func_0x0001083877cc();
LAB_108387530:
  func_0x0001083877b8();
  return;
}



/* Entry: 108387554; end: 108387643;  */

byte FUN_108387554(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)(param_1 + 0x38);
  lStack_38 = *plVar5;
  if (lStack_38 == 0) {
    FUN_10816979c(plVar5);
    goto LAB_108387604;
  }
  lStack_30 = *param_2;
  if (lStack_30 == 0) {
    lStack_30 = 0;
LAB_1083875b0:
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_38 = *plVar5;
    if (lStack_38 != 0) goto LAB_1083875b0;
  }
  FUN_1083ba7d0(&uStack_28,5,&lStack_30,&lStack_38);
  uVar4 = uStack_28;
  uStack_28 = 0;
  func_0x000108114f18(plVar5,uVar4);
  func_0x000106f47224(&uStack_28);
  func_0x000106f47224(&lStack_38);
  func_0x000106f47224(&lStack_30);
LAB_108387604:
  return (*(byte *)(param_1 + 0x31) ^ 0xff) & 1;
}



/* Entry: 108387644; end: 1083876e7;  */

ulong FUN_108387644(ulong param_1,undefined8 param_2,int param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_4 == 0) {
    return param_1;
  }
  if (*(char *)(param_1 + 0x31) == '\x01') {
    *(undefined1 *)(param_4 + 0x30) = 1;
    func_0x00010838f750();
    func_0x0001083877f4();
    *(undefined2 *)(param_4 + 0x31) = 1;
    uVar4 = 0;
  }
  else {
    if (param_3 == 0 && (int)param_2 == 0) {
      cVar2 = *(char *)(param_1 + 0x30);
      *(char *)(param_4 + 0x30) = cVar2;
      if (cVar2 == '\x01') {
        func_0x00010838f558(param_4,param_1);
      }
      else {
        FUN_10832dbb4(param_4 + 0x18,param_1 + 0x18);
      }
      *(undefined2 *)(param_4 + 0x31) = *(undefined2 *)(param_1 + 0x31);
      FUN_10816979c(param_4 + 0x38,param_1 + 0x38);
      return param_4;
    }
    cVar2 = *(char *)(param_1 + 0x30);
    *(char *)(param_4 + 0x30) = cVar2;
    if (cVar2 == '\x01') {
      FUN_10838ffec(param_1,param_2,param_3,param_4);
      func_0x0001083877f4();
    }
    else {
      FUN_10832e4ac(param_1 + 0x18,param_2,param_3,param_4 + 0x18);
      func_0x00010838f750(param_4);
    }
    bVar1 = *(byte *)(param_4 + 0x30);
    lVar5 = 0x10;
    if (bVar1 == 0) {
      lVar5 = 0x28;
    }
    lVar5 = *(long *)(param_4 + lVar5);
    *(bool *)(param_4 + 0x31) = lVar5 == -((ulong)bVar1 & 1);
    if ((lVar5 != -((ulong)bVar1 & 1)) && ((bVar1 & 1) == 0)) {
      iVar3 = (int)param_4 + 0x18;
      FUN_10832dd24();
      if (iVar3 != 0) {
        FUN_10838f5dc(param_4,param_4 + 0x18);
        func_0x0001083877f4();
        *(undefined1 *)(param_4 + 0x30) = 1;
      }
    }
    uVar4 = param_4;
    FUN_108386eb0();
    *(char *)(param_4 + 0x32) = (char)uVar4;
    uVar4 = (ulong)((*(byte *)(param_4 + 0x31) ^ 0xffffffff) & 1);
  }
  return uVar4;
}



/* Entry: 1083876e8; end: 108387753;  */

void FUN_1083876e8(long param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001083877dc();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110a3cb68;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x60) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x68) = 0x400;
  *(undefined8 *)(param_1 + 0x470) = 0;
  FUN_108387754();
  return;
}



/* Entry: 108387754; end: 1083877b7;  */

void FUN_108387754(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    FUN_10838f5dc(param_1,param_2 + 0x18);
    lVar1 = param_1 + 0x18;
    *(long *)(param_1 + 0x30) = param_3;
    *(long *)(param_1 + 0x38) = param_2 + 0x18;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    param_2 = param_1;
  }
  *(long *)(param_1 + 0x478) = param_2;
  *(long *)(param_1 + 0x480) = lVar1;
  return;
}



/* Entry: 1083877b8; end: 10838781f;  */

byte FUN_1083877b8(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  
  bVar1 = *(byte *)(unaff_x19 + 0x30);
  lVar3 = 0x10;
  if (bVar1 == 0) {
    lVar3 = 0x28;
  }
  lVar3 = *(long *)(unaff_x19 + lVar3);
  *(bool *)(unaff_x19 + 0x31) = lVar3 == -((ulong)bVar1 & 1);
  if ((lVar3 != -((ulong)bVar1 & 1)) && ((bVar1 & 1) == 0)) {
    iVar2 = (int)unaff_x19 + 0x18;
    FUN_10832dd24();
    if (iVar2 != 0) {
      FUN_10838f5dc();
      func_0x0001083877f4();
      *(undefined1 *)(unaff_x19 + 0x30) = 1;
    }
  }
  lVar3 = unaff_x19;
  FUN_108386eb0();
  *(char *)(unaff_x19 + 0x32) = (char)lVar3;
  return (*(byte *)(unaff_x19 + 0x31) ^ 0xff) & 1;
}



/* Entry: 108387820; end: 108387ab3;  */

void FUN_108387820(long *param_1,int param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  int unaff_w22;
  int iVar3;
  byte unaff_w23;
  byte bVar4;
  long *plVar5;
  long lVar6;
  
  bVar4 = 0;
  iVar3 = 0;
  switch(param_2) {
  case 0x12:
  case 0x13:
  case 0x33:
  case 0x37:
    bVar4 = 0;
    goto code_r0x000108387980;
  case 0x14:
    iVar3 = 0;
    bVar4 = 1;
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
    bVar4 = 1;
code_r0x000108387980:
    iVar3 = 1;
    break;
  case 0x61:
    func_0x000108388e58(param_1,param_3 + 2);
    func_0x000108388e58(param_1,param_3);
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
    if (param_2 == 0xe1) {
      plVar2 = param_1;
      FUN_108387ab4();
      func_0x000108388e68();
      *param_3 = (long)plVar2;
      iVar3 = unaff_w22;
      bVar4 = unaff_w23;
    }
    else {
      iVar3 = 0;
      bVar4 = 0;
      if (param_2 == 0xf2) {
        plVar2 = param_1;
        FUN_108387ab4();
        func_0x000108388e68();
        param_3[1] = (long)plVar2;
      }
    }
  }
  plVar5 = (long *)*param_1;
  lVar6 = param_1[2];
  plVar2 = plVar5;
  func_0x0001081865e0(plVar5,0x18,8);
  plVar5[1] = (long)(plVar2 + 3);
  *plVar2 = lVar6;
  *(int *)(plVar2 + 1) = param_2;
  plVar2[2] = (long)param_3;
  param_1[2] = (long)plVar2;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if (((bVar4 & 1) == 0) && (iVar3 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(param_1[9] + 0xd);
  lVar6 = (long)(int)param_1[10] << 4;
  while( true ) {
    if (lVar6 == 0) {
      func_0x000108388900(param_1 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(long **)(pbVar1 + -0xd) == param_3) break;
    pbVar1 = pbVar1 + 0x10;
    lVar6 = lVar6 + -0x10;
  }
  pbVar1[-1] = (byte)iVar3 | pbVar1[-1];
  *pbVar1 = bVar4 | *pbVar1;
  return;
}



/* Entry: 108387ab4; end: 108387af7;  */

void FUN_108387ab4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_24;
  
  if (param_1[3] == 0) {
    uVar1 = *param_1;
    uStack_24 = 0xff;
    FUN_108387af8(uVar1,&uStack_24);
    param_1[3] = uVar1;
  }
  return;
}



/* Entry: 108387af8; end: 108387b93;  */

void FUN_108387af8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1083889b8(param_1,&uStack_18);
  return;
}



/* Entry: 108387b94; end: 108387cd7;  */

void FUN_108387b94(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  long *unaff_x25;
  long lVar9;
  
  plVar7 = (long *)(param_2 + 0x10);
  if (*plVar7 != 0) {
    if ((*(long *)(param_2 + 8) != 0) && (param_1[1] == 0)) {
      lVar2 = *param_1;
      FUN_108387cd8();
      param_1[1] = lVar2;
    }
    plVar3 = (long *)*param_1;
    func_0x0001083889f4(plVar3,(long)*(int *)(param_2 + 0x20));
    uVar8 = *(uint *)(param_2 + 0x20);
    lVar2 = (long)(plVar3 + (ulong)uVar8 * 3 + -6);
    plVar4 = plVar3;
    for (; plVar7 = (long *)*plVar7, 1 < (int)uVar8; uVar8 = uVar8 - 1) {
      lVar5 = plVar7[2];
      lVar9 = *plVar7;
      *(long *)(lVar2 + 0x20) = plVar7[1];
      *(long *)(lVar2 + 0x18) = lVar9;
      *(long *)(lVar2 + 0x28) = lVar5;
      *(long *)(lVar2 + 0x18) = lVar2;
      iVar1 = *(int *)(lVar2 + 0x20);
      if (iVar1 == 0xf2) {
        func_0x000108388ea8();
        unaff_x25[1] = (long)plVar4;
      }
      else if (iVar1 == 0xe1) {
        func_0x000108388ea8();
        *unaff_x25 = (long)plVar4;
      }
      else if (iVar1 == 0x6f) {
        *(long *)(lVar2 + 0x28) = param_1[1];
      }
      lVar2 = lVar2 + -0x18;
    }
    lVar5 = plVar7[1];
    lVar2 = *plVar7;
    plVar3[2] = plVar7[2];
    plVar3[1] = lVar5;
    *plVar3 = lVar2;
    *plVar3 = param_1[2];
    iVar1 = *(int *)(param_2 + 0x20);
    param_1[2] = (long)(plVar3 + (long)iVar1 * 3 + -3);
    *(int *)(param_1 + 4) = (int)param_1[4] + iVar1;
    puVar6 = *(undefined8 **)(param_2 + 0x48);
    for (lVar2 = (long)*(int *)(param_2 + 0x50) << 4; lVar2 != 0; lVar2 = lVar2 + -0x10) {
      func_0x000108387b1c(param_1,*puVar6,*(undefined4 *)(puVar6 + 1),
                          *(undefined1 *)((long)puVar6 + 0xc),*(undefined1 *)((long)puVar6 + 0xd));
      puVar6 = puVar6 + 2;
    }
  }
  return;
}



/* Entry: 108387cd8; end: 108387ce3;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */
/* WARNING: Removing unreachable block (ram,0x0001081865dc) */

long FUN_108387cd8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = (ulong)(-(int)lVar1 & 7);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar1) < uVar2 + 0x210) {
    func_0x00010840f7d0();
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = (ulong)(-(int)lVar1 & 7);
  }
  return lVar1 + uVar2;
}



/* Entry: 108387ce4; end: 108387e8f;  */

void FUN_108387ce4(long *param_1,float *param_2,float *param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int unaff_w22;
  byte bVar7;
  byte unaff_w23;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  func_0x000108388a38(param_2,3);
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  fVar10 = param_3[2];
  param_2[2] = fVar10;
  fVar11 = *param_3;
  bVar2 = false;
  bVar3 = true;
  if (0.0 <= fVar11) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar11)) {
      bVar2 = fVar11 == 1.0;
      bVar3 = 1.0 <= fVar11;
    }
  }
  if (!bVar3 || bVar2) {
    fVar11 = param_3[1];
    iVar5 = 0x70;
    bVar2 = false;
    bVar3 = true;
    if (0.0 <= fVar11) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar11)) {
        bVar2 = fVar11 == 1.0;
        bVar3 = 1.0 <= fVar11;
      }
    }
    if (!bVar3 || bVar2) {
      bVar2 = true;
      bVar3 = false;
      if (fVar10 <= 1.0) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar10)) {
          bVar2 = fVar10 < 0.0;
          bVar3 = false;
        }
      }
      iVar5 = 0x70;
      if (bVar2 == bVar3) {
        iVar5 = 10;
      }
    }
  }
  else {
    iVar5 = 0x70;
  }
  bVar7 = 0;
  iVar6 = 0;
  switch(iVar5) {
  case 0x12:
    bVar7 = 0;
    iVar6 = 1;
    break;
  case 0x14:
    iVar6 = 0;
    bVar7 = 1;
    break;
  case 0x16:
  case 0x34:
  case 0x38:
    func_0x000108388e04();
    break;
  case 0x18:
    func_0x000108388df8();
    break;
  case 0x1a:
    func_0x000108388e04();
    break;
  case 0x1c:
    func_0x000108388df8();
    break;
  case 0x1e:
    func_0x000108388e04();
    break;
  case 0x20:
  case 100:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x6c:
    func_0x000108388df8();
    break;
  case 0x22:
    func_0x000108388e04();
    break;
  case 0x24:
    func_0x000108388df8();
    break;
  case 0x26:
    func_0x000108388df8();
    break;
  case 0x28:
  case 0x2a:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x32:
  case 0x36:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x40:
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4c:
  case 0x4e:
  case 0x50:
  case 0x52:
  case 0x54:
  case 0x56:
  case 0x58:
  case 0x5a:
  case 0x5c:
  case 0x5e:
  case 0x60:
  case 0x62:
  case 0x6e:
  case 0x70:
  case 0x72:
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
    break;
  case 0x76:
    func_0x000108388e04();
    break;
  case 0x7a:
    func_0x000108388e04();
    break;
  case 0x7e:
    func_0x000108388e04();
    break;
  case 0x82:
    func_0x000108388e04();
    break;
  case 0x86:
    func_0x000108388e04();
    break;
  case 0x8a:
    func_0x000108388e04();
    break;
  case 0x8e:
    func_0x000108388e04();
    break;
  case 0x92:
    func_0x000108388e04();
    break;
  case 0x96:
    func_0x000108388e04();
    break;
  case 0x9a:
    func_0x000108388e04();
    break;
  case 0x9e:
    func_0x000108388e04();
    break;
  case 0xa0:
    func_0x000108388df8();
    break;
  default:
    if (iVar5 == 0xe1) {
      plVar4 = param_1;
      FUN_108387ab4();
      func_0x000108388e68();
      *(long **)param_2 = plVar4;
      iVar6 = unaff_w22;
      bVar7 = unaff_w23;
    }
    else {
      iVar6 = 0;
      bVar7 = 0;
      if (iVar5 == 0xf2) {
        plVar4 = param_1;
        FUN_108387ab4();
        func_0x000108388e68();
        *(long **)(param_2 + 2) = plVar4;
      }
    }
  }
  plVar8 = (long *)*param_1;
  lVar9 = param_1[2];
  plVar4 = plVar8;
  func_0x0001081865e0(plVar8,0x18,8);
  plVar8[1] = (long)(plVar4 + 3);
  *plVar4 = lVar9;
  *(int *)(plVar4 + 1) = iVar5;
  plVar4[2] = (long)param_2;
  param_1[2] = (long)plVar4;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if (((bVar7 & 1) == 0) && (iVar6 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(param_1[9] + 0xd);
  lVar9 = (long)(int)param_1[10] << 4;
  while( true ) {
    if (lVar9 == 0) {
      func_0x000108388900(param_1 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(float **)(pbVar1 + -0xd) == param_2) break;
    pbVar1 = pbVar1 + 0x10;
    lVar9 = lVar9 + -0x10;
  }
  pbVar1[-1] = (byte)iVar6 | pbVar1[-1];
  *pbVar1 = bVar7 | *pbVar1;
  return;
}



/* Entry: 108387e90; end: 108387f8b;  */

void FUN_108387e90(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int unaff_w22;
  byte bVar6;
  byte unaff_w23;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar3 = param_3;
  func_0x0001081421e0();
  uVar2 = (uint)plVar3;
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 == 1) {
    func_0x000108388a38(param_2,2);
    *(int *)param_2 = (int)param_3[1];
    *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_3 + 0x14);
    iVar4 = 0x50;
  }
  else if (uVar2 < 4) {
    func_0x000108388a38(param_2,4);
    *(int *)param_2 = (int)*param_3;
    *(int *)((long)param_2 + 4) = (int)param_3[2];
    *(int *)(param_2 + 1) = (int)param_3[1];
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_3 + 0x14);
    iVar4 = 0x51;
  }
  else {
    func_0x000108388a38(param_2,9);
    lVar8 = param_3[4];
    lVar11 = *param_3;
    lVar10 = param_3[3];
    lVar9 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = lVar11;
    param_2[3] = lVar10;
    param_2[2] = lVar9;
    *(int *)(param_2 + 4) = (int)lVar8;
    FUN_10828e338();
    if (((ulong)param_3 & 1) == 0) {
      iVar4 = 0x52;
    }
    else {
      iVar4 = 0x53;
    }
  }
  bVar6 = 0;
  iVar5 = 0;
  switch(iVar4) {
  case 0x12:
  case 0x13:
  case 0x33:
  case 0x37:
    bVar6 = 0;
    goto code_r0x000108387980;
  case 0x14:
    iVar5 = 0;
    bVar6 = 1;
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
    bVar6 = 1;
code_r0x000108387980:
    iVar5 = 1;
    break;
  case 0x61:
    func_0x000108388e58(param_1,param_2 + 2);
    func_0x000108388e58(param_1,param_2);
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
    if (iVar4 == 0xe1) {
      plVar3 = param_1;
      FUN_108387ab4();
      func_0x000108388e68();
      *param_2 = (long)plVar3;
      iVar5 = unaff_w22;
      bVar6 = unaff_w23;
    }
    else {
      iVar5 = 0;
      bVar6 = 0;
      if (iVar4 == 0xf2) {
        plVar3 = param_1;
        FUN_108387ab4();
        func_0x000108388e68();
        param_2[1] = (long)plVar3;
      }
    }
  }
  plVar7 = (long *)*param_1;
  lVar8 = param_1[2];
  plVar3 = plVar7;
  func_0x0001081865e0(plVar7,0x18,8);
  plVar7[1] = (long)(plVar3 + 3);
  *plVar3 = lVar8;
  *(int *)(plVar3 + 1) = iVar4;
  plVar3[2] = (long)param_2;
  param_1[2] = (long)plVar3;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if (((bVar6 & 1) == 0) && (iVar5 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(param_1[9] + 0xd);
  lVar8 = (long)(int)param_1[10] << 4;
  while( true ) {
    if (lVar8 == 0) {
      func_0x000108388900(param_1 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(long **)(pbVar1 + -0xd) == param_2) break;
    pbVar1 = pbVar1 + 0x10;
    lVar8 = lVar8 + -0x10;
  }
  pbVar1[-1] = (byte)iVar5 | pbVar1[-1];
  *pbVar1 = bVar6 | *pbVar1;
  return;
}



/* Entry: 108387f8c; end: 1083884af;  */

void FUN_108387f8c(long *param_1,int param_2,long *param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long *plVar4;
  int iVar5;
  int unaff_w22;
  byte bVar6;
  byte unaff_w23;
  long *plVar7;
  long lVar8;
  
  switch(param_2) {
  case 1:
    param_2 = 0x12;
    break;
  case 2:
    param_2 = 0x16;
    break;
  case 3:
    param_2 = 0x1a;
    break;
  case 4:
    func_0x000108388ef8();
    break;
  case 5:
    func_0x000108388ef8();
    goto code_r0x0001083880c8;
  case 6:
    func_0x000108388ef8();
    goto code_r0x0001083880b4;
  case 7:
    func_0x000108388ee0();
    break;
  case 8:
    func_0x000108388ee0();
    goto code_r0x0001083880b4;
  case 9:
    func_0x000108388ee0();
    goto code_r0x0001083880c8;
  case 10:
    func_0x000108388ee0();
    goto code_r0x0001083880a4;
  case 0xb:
code_r0x0001083880a4:
    FUN_108387820();
    goto code_r0x0001083880b4;
  case 0xc:
code_r0x0001083880b4:
    FUN_108387820();
    param_2 = 0xb;
code_r0x0001083880d4:
    param_3 = (long *)0x0;
    break;
  case 0xd:
    param_2 = 0x99;
    break;
  case 0xe:
    func_0x000108388e90();
    param_2 = 0x27;
    goto code_r0x0001083880d4;
  case 0xf:
  case 0x10:
    param_2 = 0x81;
    break;
  case 0x11:
code_r0x0001083880c8:
    FUN_108387820();
    param_2 = 8;
    goto code_r0x0001083880d4;
  case 0x12:
    param_2 = 0x8d;
    break;
  case 0x13:
    param_2 = 0x22;
    break;
  case 0x14:
    param_2 = 0x85;
    break;
  case 0x15:
    param_2 = 0x89;
    break;
  case 0x16:
    param_2 = 0x79;
    break;
  case 0x17:
    param_2 = 0x7d;
    break;
  case 0x18:
    param_2 = 0x75;
    break;
  case 0x19:
    func_0x000108388ef8();
    FUN_108387820();
    param_3 = (long *)&UNK_10df2c52c;
    plVar4 = param_3;
    func_0x000108407f28();
    param_2 = 0xb1;
    switch((int)plVar4) {
    case 1:
      auVar2[8] = 0xff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2[9] = 0xff;
      auVar2[10] = 0xff;
      auVar2[0xb] = 0xff;
      auVar2[0xc] = 0xff;
      auVar2[0xd] = 0xff;
      auVar2[0xe] = 0xff;
      auVar2[0xf] = 0xff;
      uVar3 = NEON_umaxv(auVar2,4);
      param_2 = 0xaf;
      if (((uVar3 ^ 1) & 1) != 0) {
        param_2 = 0xb0;
      }
      break;
    case 2:
      break;
    case 3:
      param_2 = 0xb2;
      break;
    case 4:
      param_2 = 0xb3;
      break;
    default:
      goto LAB_108388ec0;
    }
    break;
  case 0x1a:
    func_0x000108388e90();
    param_2 = 0x29;
    goto code_r0x0001083880d4;
  default:
LAB_108388ec0:
    return;
  }
  bVar6 = 0;
  iVar5 = 0;
  switch(param_2) {
  case 0x12:
  case 0x13:
  case 0x33:
  case 0x37:
    bVar6 = 0;
    goto code_r0x000108387980;
  case 0x14:
    iVar5 = 0;
    bVar6 = 1;
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
    bVar6 = 1;
code_r0x000108387980:
    iVar5 = 1;
    break;
  case 0x61:
    func_0x000108388e58(param_1,param_3 + 2);
    func_0x000108388e58(param_1,param_3);
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
    if (param_2 == 0xe1) {
      plVar4 = param_1;
      FUN_108387ab4();
      func_0x000108388e68();
      *param_3 = (long)plVar4;
      iVar5 = unaff_w22;
      bVar6 = unaff_w23;
    }
    else {
      iVar5 = 0;
      bVar6 = 0;
      if (param_2 == 0xf2) {
        plVar4 = param_1;
        FUN_108387ab4();
        func_0x000108388e68();
        param_3[1] = (long)plVar4;
      }
    }
  }
  plVar7 = (long *)*param_1;
  lVar8 = param_1[2];
  plVar4 = plVar7;
  func_0x0001081865e0(plVar7,0x18,8);
  plVar7[1] = (long)(plVar4 + 3);
  *plVar4 = lVar8;
  *(int *)(plVar4 + 1) = param_2;
  plVar4[2] = (long)param_3;
  param_1[2] = (long)plVar4;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if (((bVar6 & 1) == 0) && (iVar5 == 0)) {
    return;
  }
  FUN_10835c58c();
  pbVar1 = (byte *)(param_1[9] + 0xd);
  lVar8 = (long)(int)param_1[10] << 4;
  while( true ) {
    if (lVar8 == 0) {
      func_0x000108388900(param_1 + 9,&stack0xffffffffffffffe0);
      return;
    }
    if (*(long **)(pbVar1 + -0xd) == param_3) break;
    pbVar1 = pbVar1 + 0x10;
    lVar8 = lVar8 + -0x10;
  }
  pbVar1[-1] = (byte)iVar5 | pbVar1[-1];
  *pbVar1 = bVar6 | *pbVar1;
  return;
}



/* Entry: 1083884b0; end: 1083884e7;  */

/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387854) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083884b0(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (0x1a < *(uint *)(param_2 + 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083884e8);
    (*pcVar1)();
  }
  if ((1 << (ulong)(*(uint *)(param_2 + 8) & 0x1f) & 0x7d8e7ffU) != 0) {
    plVar3 = (long *)*param_1;
    lVar4 = param_1[2];
    plVar2 = plVar3;
    func_0x0001081865e0(plVar3,0x18,8);
    plVar3[1] = (long)(plVar2 + 3);
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 1) = 3;
    plVar2[2] = 0;
    param_1[2] = (long)plVar2;
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    return;
  }
  return;
}



/* Entry: 1083884e8; end: 10838851f;  */

/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387894) */
/* WARNING: Removing unreachable block (ram,0x00010838789c) */
/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083884e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    lVar2 = *param_1;
    FUN_108387cd8();
    param_1[1] = lVar2;
  }
  plVar3 = (long *)*param_1;
  lVar4 = param_1[2];
  plVar1 = plVar3;
  func_0x0001081865e0(plVar3,0x18,8);
  plVar3[1] = (long)(plVar1 + 3);
  *plVar1 = lVar4;
  *(undefined4 *)(plVar1 + 1) = 0x6f;
  plVar1[2] = lVar2;
  param_1[2] = (long)plVar1;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  return;
}



/* Entry: 108388520; end: 1083885cf;  */

bool FUN_108388520(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_2 + -0x10) = uRam0000000113827048;
    *(undefined8 *)(param_2 + -8) = 0;
    plVar2 = (long *)(param_1 + 0x10);
    plVar3 = (long *)(param_2 + -0x20);
    while( true ) {
      plVar2 = (long *)*plVar2;
      bVar1 = plVar2 == (long *)0x0;
      if (((plVar2 == (long *)0x0) || (0x6c < *(int *)(plVar2 + 1))) ||
         (lVar4 = *(long *)((long)*(int *)(plVar2 + 1) * 8 + 0x113826ce0), lVar4 == 0)) break;
      lVar5 = plVar2[2];
      *plVar3 = lVar4;
      plVar3[1] = lVar5;
      plVar3 = plVar3 + -2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1083885d0; end: 108388617;  */

undefined * FUN_1083885d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  uVar1 = param_1;
  FUN_108388520();
  if ((uVar1 & 1) == 0) {
    func_0x000108388580(param_1,param_2);
    ppuVar2 = &PTR_FUN_113255ed8;
  }
  else {
    ppuVar2 = &PTR_FUN_113255ee0;
  }
  return *ppuVar2;
}



/* Entry: 108388618; end: 108388787;  */

void FUN_108388618(code *param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long alStack_4b0 [71];
  long alStack_278 [65];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar7 = 1;
    if (*(long *)(param_1 + 8) != 0) {
      uVar7 = 2;
    }
    func_0x000108388a78(alStack_278,(ulong)uVar7 + (long)iVar1);
    uVar2 = *(uint *)(param_1 + 0x50);
    func_0x000108388ae0(alStack_4b0,(long)(int)uVar2);
    for (uVar10 = 0; uVar10 != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar10 = uVar10 + 1) {
      if ((long)*(int *)(param_1 + 0x50) <= (long)uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108388758);
        (*pcVar3)();
      }
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + uVar10 * 0x10);
      uVar11 = *puVar6;
      puVar8 = (undefined8 *)(alStack_4b0[0] + uVar10 * 0x118);
      puVar8[1] = puVar6[1];
      *puVar8 = uVar11;
      _bzero(alStack_4b0[0] + uVar10 * 0x118 + 0x10,0x108);
    }
    pcVar3 = param_1;
    FUN_1083885d0(param_1,alStack_278[0] + ((ulong)uVar7 + (long)iVar1) * 0x10);
    (*pcVar3)(param_2,param_3,param_4 + param_2,param_5 + param_3,alStack_278[0],alStack_4b0[0],
              (long)(int)uVar2,*(long *)(param_1 + 0x18));
    func_0x000108388b24(alStack_4b0);
    param_1 = (code *)alStack_278;
    func_0x000108388abc();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x000108388b24(alStack_4b0);
    func_0x000108388abc(alStack_278);
    __Unwind_Resume();
    if (*(long *)(param_1 + 0x10) == 0) {
      *extraout_x8 = &PTR_FUN_110a3f428;
      extraout_x8[3] = extraout_x8;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20);
      lVar4 = *(long *)param_1;
      uVar7 = 1;
      if (*(long *)(param_1 + 8) != 0) {
        uVar7 = 2;
      }
      FUN_108388888(lVar4,(ulong)uVar7 + (long)iVar1);
      uVar2 = *(uint *)(param_1 + 0x50);
      lVar5 = *(long *)param_1;
      FUN_1083888b8(lVar5,(long)(int)uVar2);
      for (uVar10 = 0; uVar10 != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar10 = uVar10 + 1)
      {
        if ((long)*(int *)(param_1 + 0x50) <= (long)uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x108388888);
          (*pcVar3)();
        }
        puVar8 = (undefined8 *)(lVar5 + uVar10 * 0x118);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + uVar10 * 0x10);
        uVar11 = *puVar6;
        puVar8[1] = puVar6[1];
        *puVar8 = uVar11;
        _bzero(puVar8 + 2,0x108);
      }
      lVar9 = *(long *)(param_1 + 0x18);
      FUN_1083885d0(param_1,lVar4 + ((ulong)uVar7 + (long)iVar1) * 0x10);
      puVar6 = (undefined8 *)0x30;
      __Znwm();
      *puVar6 = &PTR_FUN_110a3f4b8;
      puVar6[1] = param_1;
      puVar6[2] = lVar4;
      puVar6[3] = lVar5;
      *(uint *)(puVar6 + 4) = uVar2;
      puVar6[5] = lVar9;
      extraout_x8[3] = puVar6;
    }
  }
  return;
}



/* Entry: 108388788; end: 108388887;  */

void FUN_108388788(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_2[2] == 0) {
    *param_1 = &PTR_FUN_110a3f428;
    param_1[3] = param_1;
  }
  else {
    lVar3 = *param_2;
    uVar6 = 1;
    if (param_2[1] != 0) {
      uVar6 = 2;
    }
    lVar1 = (ulong)uVar6 + (long)(int)param_2[4];
    FUN_108388888(lVar3,lVar1);
    uVar6 = *(uint *)(param_2 + 10);
    lVar4 = *param_2;
    FUN_1083888b8(lVar4,(long)(int)uVar6);
    for (uVar8 = 0; uVar8 != (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
      if ((long)(int)param_2[10] <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108388888);
        (*pcVar2)();
      }
      puVar7 = (undefined8 *)(lVar4 + uVar8 * 0x118);
      puVar5 = (undefined8 *)(param_2[9] + uVar8 * 0x10);
      uVar10 = *puVar5;
      puVar7[1] = puVar5[1];
      *puVar7 = uVar10;
      _bzero(puVar7 + 2,0x108);
    }
    lVar9 = param_2[3];
    FUN_1083885d0(param_2,lVar3 + lVar1 * 0x10);
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    *puVar5 = &PTR_FUN_110a3f4b8;
    puVar5[1] = param_2;
    puVar5[2] = lVar3;
    puVar5[3] = lVar4;
    *(uint *)(puVar5 + 4) = uVar6;
    puVar5[5] = lVar9;
    param_1[3] = puVar5;
  }
  return;
}



/* Entry: 108388888; end: 1083888b7;  */

void FUN_108388888(undefined8 *param_1,long param_2)

{
  FUN_108388bdc();
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return;
}



/* Entry: 1083888b8; end: 108388987;  */

long FUN_1083888b8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000108388c14();
  lVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _bzero(lVar1,0x118);
    lVar1 = lVar1 + 0x118;
  }
  return param_1;
}



/* Entry: 108388988; end: 1083889b7;  */

void FUN_108388988(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x10;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083889b8; end: 108388b47;  */

void FUN_1083889b8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  func_0x0001081865e0(param_1,1,1);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *puVar1 = (char)*(undefined4 *)*param_2;
  return;
}



/* Entry: 108388b48; end: 108388b4f;  */

void FUN_108388b48(void)

{
  return;
}



/* Entry: 108388b50; end: 108388b73;  */

void FUN_108388b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a3f428;
  return;
}



/* Entry: 108388b74; end: 108388b97;  */

void FUN_108388b74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a3f428;
  return;
}



/* Entry: 108388b98; end: 108388bcf;  */

long FUN_108388b98(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3f498);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108388bd0; end: 108388bdb;  */

undefined ** FUN_108388bd0(void)

{
  return &PTR_DAT_110a3f498;
}



/* Entry: 108388bdc; end: 108388c57;  */

void FUN_108388bdc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_2 >> 0x20);
  uVar1 = (uint)param_2;
  if ((iVar2 == 0) && (uVar1 >> 0x1c == 0)) {
    func_0x000108388e20();
    func_0x000108388ec8();
  }
  else {
    _abort();
    if ((iVar2 != 0) || (0xea0ea0 < uVar1)) {
      _abort();
      return;
    }
    func_0x000108388e20(0x118);
    func_0x000108388ec8();
  }
  return;
}



/* Entry: 108388c58; end: 108388c5f;  */

void FUN_108388c58(void)

{
  return;
}



/* Entry: 108388c60; end: 108388ca3;  */

void FUN_108388c60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110a3f4b8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 108388ca4; end: 108388d0b;  */

void FUN_108388ca4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110a3f4b8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108388d0c; end: 108388d43;  */

long FUN_108388d0c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3f518);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108388d44; end: 108388d4f;  */

undefined ** FUN_108388d44(void)

{
  return &PTR_DAT_110a3f518;
}



/* Entry: 108388d50; end: 108388d73;  */

void FUN_108388d50(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x10;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108388d74;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 1) != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 4);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108388d74; end: 108388ddf;  */

void FUN_108388d74(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 4);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108388de0; end: 108388f23;  */

void FUN_108388de0(void)

{
  return;
}



/* Entry: 108388f24; end: 108389017;  */

long * FUN_108388f24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long param_6,undefined8 *param_7,undefined4 *param_8,long *param_9
                    ,undefined1 *param_10)

{
  undefined4 uVar1;
  byte in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte bVar10;
  undefined8 extraout_x8;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  byte bStack_1e2;
  byte bStack_1e1;
  undefined8 auStack_1e0 [2];
  undefined1 auStack_1d0 [376];
  undefined8 uStack_58;
  
  func_0x00010838a2b0();
  uStack_58 = extraout_x8;
  FUN_10821a8e4(auStack_1d0);
  puVar7 = auStack_1d0;
  puVar8 = auStack_1e0;
  pbVar9 = &bStack_1e1;
  plVar11 = param_5;
  lVar5 = param_6;
  puVar6 = param_8;
  FUN_108389018(param_5,param_6,param_7);
  if (((ulong)plVar11 & 1) == 0) {
    param_5 = (long *)0x0;
  }
  else {
    puVar7 = (undefined1 *)(ulong)bStack_1e1;
    puVar8 = (undefined8 *)(ulong)bStack_1e2;
    pbVar9 = (byte *)*param_9;
    param_7 = auStack_1e0;
    param_10 = auStack_1d0;
    FUN_10838917c(param_5,param_6,param_7);
    lVar5 = param_6;
    puVar6 = param_8;
  }
  puVar2 = auStack_1d0;
  func_0x00010821a970();
  func_0x00010838a264(uStack_58);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  func_0x00010838a348();
  FUN_10838974c(lVar5,puVar2);
  *(undefined4 *)puVar8 = param_1;
  *(undefined4 *)((long)puVar8 + 4) = param_2;
  *(undefined4 *)(puVar8 + 1) = param_3;
  *(undefined4 *)((long)puVar8 + 0xc) = param_4;
  plVar11 = *(long **)(lVar5 + 8);
  if (plVar11 == (long *)0x0) {
    FUN_108384500(puVar8);
    uStack_288 = (undefined1 *)CONCAT44(param_2,param_1);
    uStack_280 = (undefined4 *)CONCAT44(param_4,param_3);
    func_0x000108387d70(puVar7,puVar6,&uStack_288);
    func_0x00010838a3e0();
    *pbVar9 = in_ZR;
    plVar11 = (long *)0x1;
  }
  else {
    uVar12 = *(undefined8 *)(puVar2 + 0x10);
    uVar1 = *(undefined4 *)(puVar2 + 0x18);
    plVar3 = plVar11;
    (**(code **)(*plVar11 + 0x38))();
    if ((int)plVar3 == 0) {
      bVar10 = 0;
    }
    else {
      func_0x00010838a3e0();
      bVar10 = in_ZR;
    }
    *pbVar9 = bVar10;
    (**(code **)(*plVar11 + 0x40))();
    uStack_260 = puVar8[1];
    uStack_268 = *puVar8;
    uStack_288 = puVar7;
    uStack_280 = puVar6;
    uStack_278 = uVar1;
    uStack_270 = uVar12;
    puStack_258 = param_10;
    FUN_1083be5b0(plVar11,&uStack_288,param_7);
    if ((int)plVar11 != 0) {
      func_0x00010838a3e0();
      if (!(bool)in_ZR) {
        puVar4 = puVar6;
        func_0x0001081865e0(puVar6,4,4);
        *puVar4 = *(undefined4 *)((long)puVar8 + 0xc);
        *(undefined4 **)(puVar6 + 2) = puVar4 + 1;
        FUN_108387820(puVar7,0x35,puVar4);
      }
      plVar11 = (long *)0x1;
    }
  }
  return plVar11;
}



/* Entry: 108389018; end: 10838917b;  */

void FUN_108389018(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined4 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined1 *param_12,
                  undefined1 *param_13)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_10838974c(param_6,param_5);
  *(undefined4 *)param_11 = param_1;
  *(undefined4 *)((long)param_11 + 4) = param_2;
  *(undefined4 *)(param_11 + 1) = param_3;
  *(undefined4 *)((long)param_11 + 0xc) = param_4;
  plVar5 = *(long **)(param_6 + 8);
  if (plVar5 == (long *)0x0) {
    FUN_108384500(param_11);
    uStack_98 = CONCAT44(param_2,param_1);
    uStack_90 = (undefined4 *)CONCAT44(param_4,param_3);
    func_0x000108387d70(param_10,param_8,&uStack_98);
    func_0x00010838a3e0();
    *param_12 = in_ZR;
    *param_13 = 1;
  }
  else {
    uVar6 = *(undefined8 *)(param_5 + 0x10);
    uVar1 = *(undefined4 *)(param_5 + 0x18);
    plVar2 = plVar5;
    (**(code **)(*plVar5 + 0x38))();
    if ((int)plVar2 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010838a3e0();
      uVar4 = in_ZR;
    }
    *param_12 = uVar4;
    plVar2 = plVar5;
    (**(code **)(*plVar5 + 0x40))();
    *param_13 = (char)plVar2;
    uStack_70 = param_11[1];
    uStack_78 = *param_11;
    uStack_98 = param_10;
    uStack_90 = param_8;
    uStack_88 = uVar1;
    uStack_80 = uVar6;
    uStack_68 = param_9;
    FUN_1083be5b0(plVar5,&uStack_98,param_7);
    if (((int)plVar5 != 0) && (func_0x00010838a3e0(), !(bool)in_ZR)) {
      puVar3 = param_8;
      func_0x0001081865e0(param_8,4,4);
      *puVar3 = *(undefined4 *)((long)param_11 + 0xc);
      *(undefined4 **)(param_8 + 2) = puVar3 + 1;
      FUN_108387820(param_10,0x35,puVar3);
    }
  }
  return;
}



/* Entry: 10838917c; end: 1083896cb;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10838917c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,long param_6,undefined8 param_7,long *******param_8,undefined8 param_9,
             long *******param_10,uint param_11,long *******param_12)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  uint uVar3;
  int iVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  undefined8 uVar10;
  long *******ppppppplVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long lStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long *******ppppppplStack_220;
  undefined8 uStack_218;
  uint uStack_20c;
  long lStack_208;
  long ******pppppplStack_200;
  long *******ppppppplStack_1f8;
  ulong uStack_1f0;
  long *******ppppppplStack_1e8;
  undefined8 uStack_1e0;
  long ******pppppplStack_1d8;
  long ******pppppplStack_1d0;
  long ******pppppplStack_1c8;
  undefined8 uStack_1c0;
  long *******ppppppplStack_1b8;
  undefined8 uStack_70;
  
  ppppppplVar14 = param_8;
  uVar10 = param_9;
  ppppppplVar11 = param_10;
  uStack_218 = param_7;
  uStack_20c = param_11;
  lStack_208 = param_6;
  func_0x00010838a2b0();
  ppppppplVar8 = (long *******)0x8;
  ppppppplVar9 = ppppppplVar14;
  uStack_70 = extraout_x8;
  FUN_10840f8d0(ppppppplVar14,0x209,8);
  uVar16 = *(undefined4 *)(param_8 + 1);
  param_8[1] = (long ******)(ppppppplVar14 + 0x40);
  ppppppplVar14[0x40] = (long ******)0x10838a230;
  pppppplVar12 = param_8[1];
  param_8[1] = pppppplVar12 + 1;
  *(char *)(pppppplVar12 + 1) = (char)ppppppplVar14 - (char)uVar16;
  *param_8 = (long ******)((long)param_8[1] + 1);
  param_8[1] = (long ******)((long)param_8[1] + 1);
  FUN_10814105c(&ppppppplStack_1e8,param_5);
  ppppppplVar14[1] = (long ******)0x0;
  ppppppplVar14[2] = (long ******)0x0;
  *ppppppplVar14 = (long ******)&PTR_FUN_110a3f538;
  ppppppplVar14[4] = (long ******)uStack_1e0;
  ppppppplVar14[3] = (long ******)ppppppplStack_1e8;
  ppppppplStack_220 = ppppppplVar14 + 5;
  *ppppppplStack_220 = pppppplStack_1d8;
  pppppplStack_1d8 = (long ******)0x0;
  ppppppplVar14[7] = pppppplStack_1c8;
  ppppppplVar14[6] = pppppplStack_1d0;
  ppppppplVar14[8] = (long ******)param_8;
  ppppppplVar13 = ppppppplVar14 + 9;
  *ppppppplVar13 = (long ******)param_8;
  ppppppplVar14[0x12] = (long ******)(ppppppplVar14 + 0xe);
  ppppppplVar14[10] = (long ******)0x0;
  ppppppplVar14[0x13] = (long ******)0x400000000;
  ppppppplVar14[0xb] = (long ******)0x0;
  ppppppplVar14[0xc] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar14 + 0xd) = 0;
  ppppppplVar14[0x14] = (long ******)param_8;
  ppppppplVar14[0x1d] = (long ******)(ppppppplVar14 + 0x19);
  ppppppplVar14[0x1e] = (long ******)0x400000000;
  ppppppplVar14[0x15] = (long ******)0x0;
  ppppppplVar14[0x16] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar14 + 0x18) = 0;
  ppppppplVar14[0x17] = (long ******)0x0;
  *(undefined1 *)(ppppppplVar14 + 0x1f) = 0;
  *(undefined1 *)((long)ppppppplVar14 + 0xfc) = 0;
  ppppppplVar14[0x23] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar14 + 0x24) = 0;
  ppppppplVar14[0x2e] = (long ******)0x0;
  ppppppplVar14[0x32] = (long ******)0x0;
  ppppppplVar14[0x36] = (long ******)0x0;
  ppppppplVar14[0x3a] = (long ******)0x0;
  ppppppplVar14[0x20] = (long ******)0x0;
  ppppppplVar14[0x21] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar14 + 0x22) = 0;
  ppppppplVar14[0x29] = (long ******)0x0;
  ppppppplVar14[0x2a] = (long ******)0x0;
  ppppppplVar14[0x3e] = (long ******)0x0;
  ppppppplVar14[0x3f] = (long ******)0x0;
  FUN_10810a400(&pppppplStack_1d8);
  if (param_12 != (long *******)0x0) {
    ppppppplStack_1f8 = (long *******)0x0;
    uStack_1f0 = 0x3f000000;
    pppppplStack_1d8 = (long ******)CONCAT44(pppppplStack_1d8._4_4_,4);
    pppppplStack_1d0 = (long ******)0x0;
    uVar16 = 0;
    uStack_1c0 = 0x3f80000000000000;
    pppppplStack_1c8 = (long ******)0x0;
    ppppppplStack_1b8 = (long *******)&ppppppplStack_1f8;
    ppppppplVar8 = (long *******)0x113254e20;
    ppppppplVar5 = (long *******)&ppppppplStack_1e8;
    ppppppplVar6 = param_12;
    ppppppplStack_1e8 = ppppppplVar13;
    uStack_1e0 = param_8;
    FUN_1083be5b0(param_12,ppppppplVar5,0x113254e20);
    if ((int)ppppppplVar6 != 0) {
      ppppppplVar5 = param_8;
      func_0x0001081865ac(param_8,0x40,4);
      ppppppplVar8 = ppppppplVar5;
      FUN_108387820(ppppppplVar13,0x30,ppppppplVar5);
      uStack_20c = 0;
      ppppppplVar14[0x20] = (long ******)ppppppplVar5;
      goto LAB_10838935c;
    }
LAB_1083893c8:
    ppppppplVar14 = (long *******)0x0;
    goto LAB_108389628;
  }
LAB_10838935c:
  ppppppplVar6 = ppppppplVar13;
  FUN_108387b94(ppppppplVar13,param_9);
  param_12 = *(long ********)(lStack_208 + 0x18);
  if (param_12 != (long *******)0x0) {
    ppppppplStack_1f8 = (long *******)0x0;
    uVar16 = 0x3f000000;
    uStack_1f0 = 0x3f000000;
    ppppppplStack_1e8 = ppppppplVar13;
    uStack_1e0 = param_8;
    func_0x00010838a2e4();
    ppppppplVar5 = (long *******)&ppppppplStack_1e8;
    ppppppplVar6 = param_12;
    ppppppplVar8 = param_10;
    (*(code *)(*param_12)[7])(param_12,ppppppplVar5,param_10);
    uVar3 = (uint)ppppppplVar6;
    in_ZR = ((uint)param_10 & uVar3) == 1;
    if ((bool)in_ZR) {
      param_10 = param_12;
      (*(code *)(*param_12)[8])();
      ppppppplVar6 = param_10;
    }
    else {
      param_10 = (long *******)(ulong)((uint)param_10 & (uVar3 ^ 1));
    }
    if (uVar3 == 0) goto LAB_1083893c8;
  }
  uVar15 = (uint)param_10;
  in_ZR = (*(byte *)(lStack_208 + 0x48) & 2) == 0;
  param_12 = (long *******)(ulong)uStack_20c;
  uVar3 = uStack_20c;
  if ((bool)in_ZR) {
    uVar3 = 1;
  }
  if ((uVar3 & 1) == 0) {
    in_ZR = *(int *)(param_5 + 0x18) == 0x1a;
    uVar16 = 0x3d888889;
    switch(*(int *)(param_5 + 0x18)) {
    case 0:
    case 1:
    case 0xb:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      *(undefined4 *)((long)ppppppplVar14 + 0x1fc) = 0;
      goto LAB_108389454;
    case 2:
      uVar16 = 0x3c820821;
      break;
    case 3:
      break;
    case 4:
    case 5:
    case 6:
    case 0xe:
    case 0x19:
    case 0x1a:
      uVar16 = 0x3b808081;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
      uVar16 = 0x3a802008;
      break;
    default:
      in_ZR = *(float *)((long)ppppppplVar14 + 0x1fc) == 0.0;
      if (*(float *)((long)ppppppplVar14 + 0x1fc) <= 0.0) goto LAB_108389454;
      goto LAB_108389440;
    }
    *(undefined4 *)((long)ppppppplVar14 + 0x1fc) = uVar16;
LAB_108389440:
    ppppppplVar8 = (long *******)((long)ppppppplVar14 + 0x1fc);
    ppppppplVar6 = ppppppplVar13;
    FUN_108387820(ppppppplVar13,0x74,ppppppplVar8);
    param_12 = (long *******)(ulong)uStack_20c;
  }
LAB_108389454:
  if ((int)param_12 != 0) {
    ppppppplStack_1f8 = (long *******)&ppppppplStack_1e8;
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    FUN_1083884b0(ppppppplVar13,param_5 + 0x10);
    FUN_108387820(ppppppplVar13,0x8f,&ppppppplStack_1f8);
    func_0x00010838a334(ppppppplVar13);
    *(undefined4 *)(ppppppplVar14 + 0x13) = 0;
    ppppppplVar14[0xb] = (long ******)0x0;
    ppppppplVar14[0xc] = (long ******)0x0;
    ppppppplVar14[10] = (long ******)0x0;
    *(undefined4 *)(ppppppplVar14 + 0xd) = 0;
    ppppppplVar8 = (long *******)&ppppppplStack_1e8;
    ppppppplVar6 = ppppppplVar13;
    func_0x000108387d70(ppppppplVar13,param_8,ppppppplVar8);
    param_2 = 0x3f800000;
    in_ZR = uStack_1e0._4_4_ == 1.0;
    uVar15 = (uint)(byte)in_ZR;
    param_12 = (long *******)(ulong)uStack_20c;
  }
  pppppplStack_200 = *(long *******)(lStack_208 + 0x28);
  if (pppppplStack_200 == (long ******)0x0) {
    pppppplStack_200 = (long ******)0x0;
    ppppppplVar6 = (long *******)0x3;
    FUN_108333b64(&ppppppplStack_1e8);
    func_0x00010838a434();
    func_0x00010838a238();
    func_0x00010838a42c();
  }
  else {
    pppppplVar12 = pppppplStack_200 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
      if (bVar2) {
        *(int *)pppppplVar12 = *(int *)pppppplVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (uVar15 != 0) {
    func_0x00010838a3f0();
    (*extraout_x8_00)();
    in_ZR = ((ulong)ppppppplVar6 & 0x1ffffffff) == 0x100000003;
    if ((bool)in_ZR) {
      ppppppplVar6 = (long *******)0x1;
      FUN_108333b64(&ppppppplStack_1e8);
      func_0x00010838a434();
      func_0x00010838a238();
      func_0x00010838a42c();
    }
  }
  if ((int)param_12 != 0) {
    func_0x00010838a3f0();
    (*extraout_x8_01)();
    in_ZR = 0;
    if (((ulong)ppppppplVar6 & 0x1ffffffff) == 0x100000001) {
      uVar3 = (int)param_5 + 0x10;
      func_0x00010835c63c();
      in_ZR = uVar3 == 8;
      if (uVar3 < 9) {
        FUN_10821a8e4(&ppppppplStack_1e8);
        FUN_108387b94(&ppppppplStack_1e8,ppppppplVar13);
        ppppppplVar14[0x21] = (long ******)(ppppppplVar14 + 0x2a);
        *(undefined4 *)(ppppppplVar14 + 0x22) = 0;
        func_0x0001083897ac(ppppppplVar14,&ppppppplStack_1e8);
        func_0x00010838a334(&ppppppplStack_1e8);
        ppppppplVar5 = ppppppplStack_220;
        func_0x00010835c644();
        in_ZR = (uint)ppppppplVar5 == 4;
        if ((uint)ppppppplVar5 < 4) {
          ppppppplVar14[0x29] = (long ******)(&PTR_FUN_110a3f5b0)[(ulong)ppppppplVar5 & 0xffffffff];
        }
        func_0x00010821a970(&ppppppplStack_1e8);
      }
    }
  }
  ppppppplStack_1f8 = (long *******)0x0;
  uVar16 = 0x3f000000;
  uStack_1f0 = 0x3f000000;
  ppppppplStack_1e8 = ppppppplVar14 + 0x14;
  uStack_1e0 = param_8;
  func_0x00010838a2e4();
  ppppppplVar5 = (long *******)&ppppppplStack_1e8;
  pppppplVar12 = pppppplStack_200;
  (*(code *)(*pppppplStack_200)[8])(pppppplStack_200,ppppppplVar5);
  if (((ulong)pppppplVar12 & 1) == 0) {
    ppppppplVar14 = (long *******)0x0;
  }
  else {
    func_0x00010838a3f0();
    (*extraout_x8_02)();
    *(int *)(ppppppplVar14 + 0x1f) = (int)pppppplVar12;
    *(char *)((long)ppppppplVar14 + 0xfc) = (char)((ulong)pppppplVar12 >> 0x20);
    pppppplVar12 = ppppppplVar14[3];
    iVar4 = (int)ppppppplVar14 + 0x18;
    func_0x000108337358();
    ppppppplVar14[0x21] = pppppplVar12;
    *(int *)(ppppppplVar14 + 0x22) = iVar4;
  }
  ppppppplVar6 = &pppppplStack_200;
  FUN_108154c6c();
LAB_108389628:
  func_0x00010838a264(uStack_70);
  if ((bool)in_ZR) {
    return ppppppplVar14;
  }
  ___stack_chk_fail();
  ppppppplVar7 = &pppppplStack_200;
  FUN_108154c6c(ppppppplVar7);
  func_0x00010838a348();
  pcStack_228 = FUN_1083896cc;
  ppppppplStack_260 = ppppppplVar14;
  ppppppplStack_258 = ppppppplVar13;
  ppppppplStack_250 = param_8;
  lStack_248 = param_5;
  ppppppplStack_240 = param_12;
  ppppppplStack_238 = ppppppplVar6;
  puStack_230 = &stack0xfffffffffffffff0;
  FUN_10838974c(ppppppplVar5,ppppppplVar7);
  uStack_270 = uVar16;
  uStack_26c = param_2;
  uStack_268 = param_3;
  uStack_264 = param_4;
  FUN_10838917c(ppppppplVar7,ppppppplVar5,&uStack_270,uVar10,ppppppplVar8,ppppppplVar9,0,
                *ppppppplVar11);
  return ppppppplVar7;
}



/* Entry: 1083896cc; end: 10838974b;  */

void FUN_1083896cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_10838974c(param_6,param_5);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10838917c(param_5,param_6,&uStack_50,param_9,param_7,param_8,0,*param_10);
  return;
}



/* Entry: 10838974c; end: 108389847;  */

undefined4
FUN_10838974c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 auStack_94 [100];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_10819a67c();
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_108343afc();
  FUN_108344004(auStack_94,param_5,3,*(undefined8 *)(param_6 + 0x10),3);
  FUN_1083441a4(auStack_94,&uStack_30);
  return uStack_30;
}



/* Entry: 108389848; end: 10838987f;  */

/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387894) */
/* WARNING: Removing unreachable block (ram,0x00010838789c) */
/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_108389848(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return;
  }
  plVar2 = (long *)*param_2;
  lVar3 = param_2[2];
  plVar1 = plVar2;
  func_0x0001081865e0(plVar2,0x18,8);
  plVar2[1] = (long)(plVar1 + 3);
  *plVar1 = lVar3;
  *(undefined4 *)(plVar1 + 1) = 0x36;
  plVar1[2] = param_1;
  param_2[2] = (long)plVar1;
  *(int *)(param_2 + 4) = (int)param_2[4] + 1;
  return;
}



/* Entry: 108389880; end: 108389a47;  */

long * FUN_108389880(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [32];
  undefined1 *puStack_58;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  lVar3 = param_2;
  func_0x00010838a2b0();
  UNRECOVERED_JUMPTABLE = (code *)plVar1[0x29];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uStack_48 = extraout_x8;
    if (param_1[0x2e] == 0) {
      puStack_58 = auStack_78;
      func_0x00010838a284(param_1[8],0x400000000);
      FUN_108387b94(auStack_a0,param_1 + 9);
      FUN_1083884b0(auStack_a0,param_1 + 5);
      if (*(char *)((long)param_1 + 0xfc) == '\x01' && (int)param_1[0x1f] == 3) {
        in_ZR = (*(uint *)(param_1 + 6) | 2) == 6;
        if ((((!(bool)in_ZR) || (param_1[5] != 0)) ||
            (in_ZR = true, *(int *)((long)param_1 + 0x34) == 3)) ||
           (in_ZR = *(float *)((long)param_1 + 0x1fc) == 0.0, !(bool)in_ZR)) goto LAB_1083899c8;
        in_ZR = *(uint *)(param_1 + 6) == 6;
        if ((bool)in_ZR) {
          FUN_108387820(auStack_a0,0xb,0);
        }
        func_0x00010838a350(param_1[0x20]);
        FUN_108387820(auStack_a0,0x4f,param_1 + 0x21);
      }
      else {
        in_ZR = false;
        if ((*(char *)((long)param_1 + 0xfc) == '\0') ||
           (in_ZR = (int)param_1[0x1f] == 1, !(bool)in_ZR)) {
LAB_1083899c8:
          func_0x00010838a400();
          FUN_108387b94(auStack_a0,param_1 + 0x14);
LAB_1083899d8:
          func_0x00010838a358(param_1[0x20]);
        }
        else if (param_1[0x20] != 0) {
          func_0x00010838a400();
          goto LAB_1083899d8;
        }
        func_0x0001083897ac(param_1,auStack_a0);
      }
      func_0x00010838a2a4();
      func_0x00010838a37c(param_1 + 0x2b);
      func_0x00010838a374();
      func_0x00010838a3c8();
    }
    lVar3 = (long)(int)param_2;
    plVar1 = param_1 + 0x2b;
    FUN_10828d664(plVar1,lVar3,(long)(int)param_3,(long)(int)param_4,(long)(int)param_5);
    func_0x00010838a264(uStack_48);
    if ((bool)in_ZR) {
      return plVar1;
    }
  }
  else {
    func_0x00010838a264(extraout_x8);
    if ((bool)in_ZR) {
      param_1 = param_1 + 3;
                    /* WARNING: Could not recover jumptable at 0x0001083898f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
      return param_1;
    }
  }
  ___stack_chk_fail();
  func_0x00010838a3c8();
  func_0x00010838a348();
  plVar2 = (long *)plVar1[3];
  plVar1[3] = 0;
  if (plVar2 == plVar1) {
    lVar4 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_108389a88;
    lVar4 = 0x28;
  }
  (**(code **)(*plVar2 + lVar4))();
LAB_108389a88:
  lVar4 = *(long *)(lVar3 + 0x18);
  if (lVar4 == 0) {
    plVar1[3] = 0;
  }
  else if (lVar4 == lVar3) {
    plVar1[3] = (long)plVar1;
    (**(code **)(**(long **)(lVar3 + 0x18) + 0x18))(*(long **)(lVar3 + 0x18),plVar1);
  }
  else {
    plVar1[3] = lVar4;
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  return plVar1;
}



/* Entry: 108389a48; end: 108389ad7;  */

long * FUN_108389a48(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_108389a88;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_108389a88:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 108389ad8; end: 108389c93;  */

void FUN_108389ad8(long param_1,undefined1 *param_2,undefined8 param_3,byte *param_4,short *param_5)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [32];
  undefined1 *puStack_78;
  undefined8 uStack_68;
  
  lVar4 = param_1;
  puVar5 = param_2;
  func_0x00010838a2b0();
  uStack_68 = extraout_x8;
  if (*(long *)(lVar4 + 400) != 0) goto LAB_108389bd4;
  puStack_78 = auStack_98;
  func_0x00010838a284(*(undefined8 *)(param_1 + 0x40),0x400000000);
  FUN_108387b94(auStack_c0,param_1 + 0x48);
  FUN_1083884b0(auStack_c0,param_1 + 0x28);
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    bVar3 = *(uint *)(param_1 + 0xf8) == 0xc;
    if ((0xc < *(uint *)(param_1 + 0xf8)) || (func_0x00010838a320(), bVar3)) goto LAB_108389b94;
    FUN_108387820(auStack_c0,0x35);
    func_0x00010838a350(*(undefined8 *)(param_1 + 0x100));
    func_0x00010838a40c();
    func_0x00010838a420();
  }
  else {
LAB_108389b94:
    func_0x00010838a40c();
    func_0x00010838a420();
    FUN_108387820(auStack_c0,0x39);
    func_0x00010838a358(*(undefined8 *)(param_1 + 0x100));
  }
  puVar5 = auStack_c0;
  func_0x0001083897ac(param_1);
  func_0x00010838a2a4();
  func_0x00010838a37c(param_1 + 0x178);
  func_0x00010838a374();
  func_0x00010838a3c8();
LAB_108389bd4:
  while( true ) {
    iVar6 = (int)puVar5;
    sVar2 = *param_5;
    iVar7 = (int)sVar2;
    bVar3 = iVar7 == 0;
    if (iVar7 < 1) break;
    bVar1 = *param_4;
    iVar6 = (int)param_2;
    if (bVar1 != 0) {
      if (bVar1 == 0xff) {
        FUN_108389880(param_1,param_2,param_3,(long)sVar2,1);
        puVar5 = param_2;
      }
      else {
        *(float *)(param_1 + 0x1f8) = (float)bVar1 * 0.003921569;
        puVar5 = (undefined1 *)(long)iVar6;
        FUN_10828d664(param_1 + 0x178,puVar5,(long)(int)param_3,(long)iVar7,1);
      }
    }
    uVar8 = (uint)sVar2;
    param_2 = (undefined1 *)(ulong)(iVar6 + uVar8);
    param_5 = param_5 + uVar8;
    param_4 = param_4 + uVar8;
  }
  func_0x00010838a264(uStack_68);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010838a3c8();
  func_0x00010838a348();
  func_0x00010838a384(iVar6 + 2);
  func_0x00010838a3d0(1);
  return;
}



/* Entry: 108389c94; end: 108389cc7;  */

void FUN_108389c94(undefined8 param_1,int param_2)

{
  func_0x00010838a384(param_2 + 2);
  func_0x00010838a3d0(1);
  return;
}



/* Entry: 108389cc8; end: 108389feb;  */

void FUN_108389cc8(long *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  char cVar10;
  undefined8 extraout_x8;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int *piStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_a0 [64];
  
  plVar8 = param_2;
  piVar7 = param_3;
  func_0x00010838a2b0();
  iVar12 = (int)piVar7;
  if (*(char *)((long)plVar8 + 0x1c) == '\0') {
    func_0x00010838a264(extraout_x8);
    iVar13 = (int)plVar8;
    if ((bool)in_ZR) {
      if (*(char *)((long)param_2 + 0x1c) != '\x04') {
        if (*(char *)((long)param_2 + 0x1c) == '\0') {
          iVar13 = *param_3;
          iVar12 = param_3[1];
          iVar2 = (int)param_2[3];
          iVar1 = param_3[2];
          iVar14 = param_3[3] - iVar12;
          uVar4 = iVar13 - (int)param_2[1];
          lVar11 = *param_2 + (long)((int)uVar4 >> 3) +
                   (ulong)(uint)((iVar12 - *(int *)((long)param_2 + 0xc)) * iVar2);
          if ((uVar4 == 0) && (iVar1 == (int)param_2[2])) {
            while (0 < iVar14) {
              FUN_10833510c(param_1,iVar13,iVar12,lVar11,0xff,
                            (long)(((int)((int)param_2[2] + ~*(uint *)(param_2 + 1)) >> 3) + 1),
                            0x7f80U >>
                            (ulong)((*(uint *)(param_2 + 1) - (int)param_2[2] ^ 0xffffffff) & 7) &
                            0xff);
              lVar11 = lVar11 + iVar2;
              iVar12 = iVar12 + 1;
              iVar14 = iVar14 + -1;
            }
          }
          else {
            uVar3 = iVar13 - (uVar4 & 7);
            while (0 < iVar14) {
              FUN_10833510c(param_1,uVar3,iVar12,lVar11,0xff >> (ulong)(uVar4 & 7),
                            (long)(((int)(iVar1 + ~uVar3) >> 3) + 1),
                            0x7f80U >> (ulong)((uVar3 - iVar1 ^ 0xffffffff) & 7) & 0xff);
              lVar11 = lVar11 + iVar2;
              iVar12 = iVar12 + 1;
              iVar14 = iVar14 + -1;
            }
          }
        }
        else {
          iVar12 = *param_3;
          iVar13 = param_3[2] - iVar12;
          uVar4 = iVar13 + 1;
          if (uVar4 < 0x41) {
            piVar7 = (int *)0x0;
            if (uVar4 != 0) {
              piVar7 = &iStack_e0;
            }
          }
          else {
            piVar7 = (int *)(long)(int)uVar4;
            FUN_10840ffdc(piVar7,2);
            iVar12 = *param_3;
          }
          iVar2 = param_3[1];
          lVar15 = *param_2;
          lVar11 = param_2[1];
          iVar1 = *(int *)((long)param_2 + 0xc);
          lVar9 = param_2[3];
          piStack_e8 = piVar7;
          (*(code *)PTR_FUN_113254e70)(piVar7,1,iVar13);
          lVar11 = ((lVar15 + iVar12) - (long)(int)lVar11) +
                   (ulong)(uint)((iVar2 - iVar1) * (int)lVar9);
          *(undefined2 *)((long)piVar7 + (long)iVar13 * 2) = 0;
          iVar12 = param_3[1];
          iVar13 = param_3[3] - iVar12;
          while (0 < iVar13) {
            (**(code **)(*param_1 + 0x18))(param_1,*param_3,iVar12,lVar11,piVar7);
            lVar11 = lVar11 + (ulong)*(uint *)(param_2 + 3);
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + -1;
          }
          FUN_108335f64(&piStack_e8);
        }
      }
      return;
    }
    goto LAB_108389fc0;
  }
  iVar1 = (int)param_1;
  iVar12 = iVar1 + 0x118;
  iVar13 = 0;
  FUN_10838a06c(param_2);
  cVar10 = *(char *)((long)param_2 + 0x1c);
  if (cVar10 == '\x02') {
    FUN_10838a06c(param_2,1,param_1 + 0x25);
    iVar12 = iVar1 + 0x138;
    iVar13 = 2;
    FUN_10838a06c(param_2);
    cVar10 = *(char *)((long)param_2 + 0x1c);
  }
  if (cVar10 == '\x01') {
    if (param_1[0x36] == 0) {
      func_0x00010838a30c();
      func_0x00010838a284(0x400000000);
      func_0x00010838a2cc();
      func_0x00010838a2d8();
      if (((*(char *)((long)param_1 + 0xfc) != '\x01') ||
          (bVar5 = *(uint *)(param_1 + 0x1f) == 0xc, 0xc < *(uint *)(param_1 + 0x1f))) ||
         (func_0x00010838a320(), bVar5)) {
        func_0x00010838a278();
        func_0x00010838a298();
        func_0x00010838a3ac();
        iVar13 = 0x37;
        FUN_108387820();
        func_0x00010838a358(param_1[0x20]);
      }
      else {
        func_0x00010838a3ac();
        iVar13 = 0x33;
        FUN_108387820();
        func_0x00010838a350(param_1[0x20]);
        func_0x00010838a278();
        func_0x00010838a298();
      }
      func_0x00010838a2c0();
      func_0x00010838a2a4();
      func_0x00010838a37c(param_1 + 0x33);
      func_0x00010838a374();
      func_0x00010838a3a4();
      cVar10 = *(char *)((long)param_2 + 0x1c);
      goto LAB_108389e0c;
    }
LAB_108389f80:
    uVar6 = true;
    lVar11 = 0x198;
LAB_108389f8c:
    lVar9 = (long)*param_3;
    lVar15 = (long)param_3[1];
    FUN_10828d664((long)param_1 + lVar11,lVar9,lVar15,(long)(param_3[2] - *param_3),
                  (long)(param_3[3] - param_3[1]));
    iVar12 = (int)lVar15;
    iVar13 = (int)lVar9;
  }
  else {
LAB_108389e0c:
    if (cVar10 == '\x04') {
      uVar6 = true;
      if (param_1[0x3a] == 0) {
        func_0x00010838a30c();
        func_0x00010838a284(0x400000000);
        func_0x00010838a2cc();
        func_0x00010838a2d8();
        if (((*(char *)((long)param_1 + 0xfc) == '\x01') && (*(uint *)(param_1 + 0x1f) < 0xd)) &&
           ((1 << (ulong)(*(uint *)(param_1 + 0x1f) & 0x1f) & 0x1014U) != 0)) {
          func_0x00010838a278();
          func_0x00010838a3ac();
          iVar13 = 0x34;
          FUN_108387820();
          func_0x00010838a350(param_1[0x20]);
          func_0x00010838a298();
        }
        else {
          func_0x00010838a278();
          func_0x00010838a298();
          func_0x00010838a3ac();
          iVar13 = 0x38;
          FUN_108387820();
          func_0x00010838a358(param_1[0x20]);
        }
        func_0x00010838a2c0();
        func_0x00010838a2a4();
        func_0x00010838a37c(param_1 + 0x37);
        func_0x00010838a374();
        func_0x00010838a3a4();
        cVar10 = *(char *)((long)param_2 + 0x1c);
        goto LAB_108389eb4;
      }
LAB_108389f78:
      lVar11 = 0x1b8;
      goto LAB_108389f8c;
    }
LAB_108389eb4:
    if (cVar10 == '\x02') {
      if (param_1[0x3e] == 0) {
        func_0x00010838a30c();
        func_0x00010838a284(0x400000000);
        func_0x00010838a2cc();
        iVar12 = iVar1 + 0x128;
        FUN_108387820(auStack_a0,0x61);
        func_0x00010838a2d8();
        if (((*(char *)((long)param_1 + 0xfc) != '\x01') ||
            (bVar5 = *(uint *)(param_1 + 0x1f) == 0xc, 0xc < *(uint *)(param_1 + 0x1f))) ||
           (func_0x00010838a320(), bVar5)) {
          func_0x00010838a278();
          func_0x00010838a298();
          func_0x00010838a3ac();
          iVar13 = 0x37;
          FUN_108387820();
          func_0x00010838a358(param_1[0x20]);
        }
        else {
          func_0x00010838a3ac();
          iVar13 = 0x33;
          FUN_108387820();
          func_0x00010838a350(param_1[0x20]);
          func_0x00010838a278();
          func_0x00010838a298();
        }
        func_0x00010838a2c0();
        func_0x00010838a2a4();
        func_0x00010838a37c(param_1 + 0x3b);
        func_0x00010838a374();
        func_0x00010838a3a4();
        cVar10 = *(char *)((long)param_2 + 0x1c);
        goto LAB_108389f60;
      }
LAB_108389f88:
      uVar6 = true;
      lVar11 = 0x1d8;
      goto LAB_108389f8c;
    }
LAB_108389f60:
    if (cVar10 == '\x01') goto LAB_108389f80;
    if (cVar10 == '\x02') goto LAB_108389f88;
    uVar6 = cVar10 == '\x04';
    if ((bool)uVar6) goto LAB_108389f78;
  }
  func_0x00010838a264(extraout_x8);
  if ((bool)uVar6) {
    return;
  }
LAB_108389fc0:
  ___stack_chk_fail();
  func_0x00010838a3a4();
  func_0x00010838a348();
  pcStack_c8 = FUN_108389fec;
  iStack_e0 = iVar13;
  iStack_dc = iVar12;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010838a384(iVar13 + 1);
  func_0x00010838a3d0();
  return;
}



/* Entry: 108389fec; end: 10838a06b;  */

void FUN_108389fec(undefined8 param_1,int param_2)

{
  func_0x00010838a384(param_2 + 1);
  func_0x00010838a3d0();
  return;
}


