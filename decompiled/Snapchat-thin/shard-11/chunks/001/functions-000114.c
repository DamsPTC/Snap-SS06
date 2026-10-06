/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081f57d0; end: 1081f5897;  */

long * FUN_1081f57d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *unaff_x19;
  undefined **ppuStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  long alStack_8c8 [137];
  long alStack_480 [137];
  undefined8 uStack_38;
  
  func_0x0001081f5d80();
  uStack_900 = param_2[1];
  uStack_908 = *param_2;
  uStack_8f0 = param_2[3];
  uStack_8f8 = param_2[2];
  uStack_8e0 = param_2[5];
  uStack_8e8 = param_2[4];
  uStack_8d0 = param_2[7];
  uStack_8d8 = param_2[6];
  ppuStack_910 = &PTR_DAT_110a2f740;
  FUN_1081f2af4(alStack_480,&ppuStack_910);
  func_0x0001081f603c(alStack_8c8);
  plVar1 = alStack_480;
  plVar2 = alStack_8c8;
  func_0x0001081f5ef8();
  func_0x0001081f5dd8();
  func_0x0001081f5f28();
  func_0x0001081f5d6c(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001081f5df8();
  func_0x0001081f5f14(alStack_480);
  func_0x0001081f5ed0();
  func_0x0001081f60c4();
  (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
  *plVar1 = (long)plVar2;
  return plVar1;
}



/* Entry: 1081f5898; end: 1081f58cf;  */

undefined8 * FUN_1081f5898(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  func_0x0001081f60c4();
  (**(code **)(*param_2 + 0x70))(param_2,param_3);
  *param_1 = param_2;
  return param_1;
}



/* Entry: 1081f58d0; end: 1081f599b;  */

undefined8 * FUN_1081f58d0(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    puVar3 = (undefined8 *)*param_1;
  }
  else {
    if (iVar2 == 0x7fffffff) {
      func_0x00010bdb1a68();
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x0001081f612c();
      }
      return param_1;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 0x40;
    uVar1 = (ulong)(iVar2 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(puVar3,*param_1,(long)*(int *)(param_1 + 1) << 6);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      func_0x0001081f612c();
    }
    uVar1 = uVar1 >> 6;
    if (0x7ffffffe < uVar1) {
      uVar1 = 0x7fffffff;
    }
    *param_1 = puVar3;
    *(uint *)((long)param_1 + 0xc) = (int)uVar1 << 1 | 1;
    iVar2 = *(int *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  return (undefined8 *)((long)puVar3 + (long)iVar2 * 0x40);
}



/* Entry: 1081f599c; end: 1081f59c3;  */

long FUN_1081f599c(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001081f612c();
  }
  return param_1;
}



/* Entry: 1081f59c4; end: 1081f5a8b;  */

void FUN_1081f59c4(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined4 param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  long lVar5;
  undefined8 uVar6;
  
  pdVar3 = (double *)*param_2;
  pdVar1 = pdVar3;
  (**(code **)((long)*pdVar3 + 0x10))(pdVar3,param_4);
  pdVar2 = pdVar1;
  func_0x0001081f5fa4();
  FUN_1081de864(pdVar1,pdVar2);
  if ((int)pdVar1 != 0) {
    (**(code **)((long)*pdVar3 + 0x10))(pdVar3,param_4);
    pdVar1 = pdVar3;
    func_0x0001081f5fa4();
    dVar4 = *pdVar3;
    func_0x0001081f5de4(dVar4,pdVar3[1],*pdVar1,pdVar1[1]);
    if (dVar4 <= (double)param_1[6]) {
      *param_1 = param_2;
      param_1[1] = param_3;
      lVar5 = param_2[0x10];
      param_1[3] = param_2[0x11];
      param_1[2] = lVar5;
      uVar6 = *(undefined8 *)(param_3 + 0x80);
      param_1[5] = *(undefined8 *)(param_3 + 0x88);
      param_1[4] = uVar6;
      *(int *)(param_1 + 7) = (int)param_4;
      *(undefined4 *)((long)param_1 + 0x3c) = param_5;
      param_1[6] = dVar4;
    }
  }
  return;
}



/* Entry: 1081f5a8c; end: 1081f5ca7;  */

void FUN_1081f5a8c(int param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  
  do {
    if ((int)param_3 < 0x21) {
      plVar8 = param_2;
      do {
        do {
          plVar4 = plVar8;
          plVar8 = plVar4 + 1;
          if (param_2 + (long)(int)param_3 + -1 < plVar8) {
            return;
          }
          lVar6 = plVar4[1];
          dVar13 = *(double *)(lVar6 + 0x30);
        } while (*(double *)(*plVar4 + 0x30) <= dVar13);
        do {
          plVar3 = plVar4;
          plVar3[1] = *plVar3;
          if (plVar3 <= param_2) break;
          plVar4 = plVar3 + -1;
        } while (dVar13 < *(double *)(plVar3[-1] + 0x30));
        *plVar3 = lVar6;
      } while( true );
    }
    if (param_1 == 0) {
      uVar12 = (ulong)param_3;
      for (uVar7 = (ulong)(param_3 >> 1); uVar7 != 0; uVar7 = uVar7 - 1) {
        lVar6 = param_2[uVar7 - 1];
        uVar10 = uVar7;
        while( true ) {
          uVar11 = uVar10 * 2;
          if (uVar12 <= uVar11 && uVar11 - uVar12 != 0) break;
          if ((uVar12 > uVar11) &&
             (*(double *)((param_2 + uVar10 * 2)[-1] + 0x30) <
              *(double *)(param_2[uVar10 * 2] + 0x30))) {
            uVar11 = uVar11 + 1;
          }
          if (*(double *)(param_2[uVar11 - 1] + 0x30) <= *(double *)(lVar6 + 0x30)) break;
          param_2[uVar10 - 1] = param_2[uVar11 - 1];
          uVar10 = uVar11;
        }
        param_2[uVar10 - 1] = lVar6;
      }
      do {
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          return;
        }
        lVar6 = *param_2;
        *param_2 = param_2[uVar12];
        param_2[uVar12] = lVar6;
        lVar6 = *param_2;
        uVar7 = 1;
        while( true ) {
          uVar10 = uVar7 * 2;
          if (uVar12 <= uVar10 && uVar10 - uVar12 != 0) break;
          if ((uVar12 > uVar10) &&
             (*(double *)((param_2 + uVar7 * 2)[-1] + 0x30) < *(double *)(param_2[uVar7 * 2] + 0x30)
             )) {
            uVar10 = uVar10 + 1;
          }
          param_2[uVar7 - 1] = param_2[uVar10 - 1];
          uVar7 = uVar10;
        }
        while (1 < uVar7) {
          if (*(double *)(lVar6 + 0x30) <= *(double *)(param_2[(uVar7 >> 1) - 1] + 0x30)) break;
          param_2[uVar7 - 1] = param_2[(uVar7 >> 1) - 1];
          uVar7 = uVar7 >> 1;
        }
        param_2[uVar7 - 1] = lVar6;
      } while( true );
    }
    uVar2 = param_3 - 1 >> 1;
    plVar3 = param_2 + ((ulong)param_3 - 1);
    lVar6 = param_2[uVar2];
    param_2[uVar2] = *plVar3;
    *plVar3 = lVar6;
    plVar4 = param_2;
    for (plVar8 = param_2; plVar8 < plVar3; plVar8 = plVar8 + 1) {
      lVar9 = *plVar8;
      plVar5 = plVar4;
      if (*(double *)(lVar9 + 0x30) < *(double *)(lVar6 + 0x30)) {
        *plVar8 = *plVar4;
        plVar5 = plVar4 + 1;
        *plVar4 = lVar9;
      }
      plVar4 = plVar5;
    }
    param_1 = param_1 + -1;
    lVar6 = *plVar4;
    *plVar4 = *plVar3;
    *plVar3 = lVar6;
    uVar12 = (ulong)((long)plVar4 - (long)param_2) >> 3;
    FUN_1081f5a8c(param_1,param_2,uVar12);
    iVar1 = (int)uVar12 + 1;
    param_2 = param_2 + iVar1;
    param_3 = param_3 - iVar1;
  } while( true );
}



/* Entry: 1081f5ca8; end: 1081f5d37;  */

long FUN_1081f5ca8(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001081f612c();
  }
  return param_1;
}



/* Entry: 1081f5d38; end: 1081f6417;  */

undefined8 * FUN_1081f5d38(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  lVar2 = param_1[1] + 0x400;
  func_0x0001081f60c4(param_2,plVar1,lVar2);
  (**(code **)(*plVar1 + 0x70))(plVar1,lVar2);
  *param_2 = plVar1;
  return param_2;
}



/* Entry: 1081f6418; end: 1081f648f;  */

bool FUN_1081f6418(undefined8 param_1,ulong param_2,float param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int extraout_w8;
  int extraout_w9;
  undefined8 unaff_x30;
  float fVar6;
  
  uVar1 = (ulong)(uint)param_3;
  if ((float)param_1 <= param_3) {
    iVar5 = 2;
    FUN_1081f6490(param_1,param_2);
    uVar2 = uVar1;
    uVar1 = param_2;
  }
  else {
    iVar5 = 2;
    FUN_1081f6490(param_2);
    uVar2 = param_2;
  }
  if (iVar5 == 0) {
    return false;
  }
  iVar5 = 2;
  fVar6 = ABS((float)uVar2);
  bVar3 = false;
  bVar4 = true;
  if (ABS((float)uVar1) <= 1.1920929e-07) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar6)) {
      bVar3 = fVar6 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar6;
    }
  }
  if (bVar4 && !bVar3) {
    func_0x0001081f6588(2,unaff_x30);
    return extraout_w8 < extraout_w9 + iVar5;
  }
  return (float)uVar1 < (float)uVar2 + 2.3841858e-07;
}



/* Entry: 1081f6490; end: 1081f65b3;  */

bool FUN_1081f6490(float param_1,float param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int extraout_w8;
  int extraout_w9;
  float fVar3;
  float fVar4;
  
  fVar4 = ((float)param_3 / 8388608.0) * 0.5;
  fVar3 = ABS(param_2);
  bVar1 = false;
  bVar2 = true;
  if (ABS(param_1) <= fVar4) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3) && !NAN(fVar4)) {
      bVar1 = fVar3 == fVar4;
      bVar2 = fVar4 <= fVar3;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588();
    return extraout_w8 < (int)(extraout_w9 + param_3);
  }
  return param_1 < param_2 + (float)param_3 * 1.1920929e-07;
}



/* Entry: 1081f65b4; end: 1081f6ee3;  */

bool FUN_1081f65b4(double *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  long *plVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  double *pdVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  undefined4 uVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  long lStack_540;
  double *pdStack_538;
  undefined8 uStack_530;
  double dStack_528;
  double adStack_520 [2];
  undefined1 uStack_510;
  undefined8 uStack_508;
  double adStack_500 [3];
  undefined1 auStack_4e8 [1024];
  long alStack_e8 [4];
  double dStack_c8;
  double *pdStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar15 = (double *)0x400;
  func_0x0001081f5cd0(auStack_4e8);
  uVar17 = 0;
  uVar6 = *(uint *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = uVar6 + 1;
  dVar34 = 0.5;
  for (uVar19 = uVar6; 1 < uVar19; uVar19 = (int)uVar19 >> 1) {
    dVar34 = dVar34 * 0.5;
    uVar17 = uVar17 + 1;
  }
  if (uVar17 != 0) {
    dVar34 = dVar34 + (double)((uVar6 >> 1) + 0x7fffffff &
                              (-1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU)) * (dVar34 + dVar34);
  }
  lStack_540 = 0;
  dVar38 = *param_1;
  dVar35 = dVar34 * *(double *)param_1[0xc] + (1.0 - dVar34) * dVar38;
  dVar34 = param_1[5];
  pdStack_538 = param_1;
  dStack_528 = dVar35;
  FUN_1081e579c(dVar34);
  dVar30 = dStack_528;
  adStack_520[0] = dVar35;
  adStack_520[1] = dVar38;
  FUN_1081e9b68();
  uStack_530._0_4_ = SUB84(dVar30,0);
  uStack_530._4_4_ = SUB84(dVar38,0);
  uStack_510 = 1;
  if ((adStack_520[0] != 0.0) || (adStack_520[1] != 0.0)) {
    uVar6 = uVar6 & 1;
    if (ABS(adStack_520[1]) <= ABS(adStack_520[0])) {
      uVar6 = uVar6 + 1;
    }
    if (((pdStack_538 == (double *)0x0) || (*(int *)((long)pdStack_538[5] + 0x10c) < 2)) ||
       (adStack_520[(uVar6 ^ 0xffffffff) & 1] != 0.0)) {
      uVar17 = uVar6 & 1;
      uVar18 = (ulong)uVar17;
      uVar21 = (ulong)(uVar17 ^ 1);
      plVar28 = &lStack_540;
      do {
        if (*(int *)(param_2 + 0x144) != 0) {
          fVar31 = *(float *)((long)&uStack_530 + uVar18 * 4);
          fVar36 = *(float *)(param_2 + (ulong)uVar6 * 4 + 0x130);
          if ((ABS(fVar31 - fVar36) < 1.1920929e-07) || (uVar6 < 2 == fVar36 <= fVar31)) {
            pdVar24 = (double *)(param_2 + 8);
            do {
              fVar36 = *(float *)((long)pdVar24 + uVar21 * 4 + 0xf0);
              fVar31 = *(float *)((long)&uStack_530 + uVar21 * 4);
              fVar40 = *(float *)((long)pdVar24 + uVar21 * 4 + 0xf8);
              if (fVar36 <= fVar40) {
                bVar11 = false;
                if ((fVar36 - fVar31 < 1.1920929e-07) && (bVar11 = false, !NAN(fVar31 - fVar40))) {
                  bVar11 = fVar31 - fVar40 < 1.1920929e-07;
                }
                if (bVar11) goto LAB_1081f67f8;
              }
              else {
                bVar11 = false;
                if ((fVar31 - fVar36 < 1.1920929e-07) && (bVar11 = false, !NAN(fVar40 - fVar31))) {
                  bVar11 = fVar40 - fVar31 < 1.1920929e-07;
                }
                if (bVar11) {
LAB_1081f67f8:
                  fVar36 = *(float *)((long)&uStack_530 + uVar18 * 4);
                  fVar31 = *(float *)((long)pdVar24 + (ulong)uVar6 * 4 + 0xf0);
                  if ((ABS((double)fVar36 - (double)fVar31) < 1.1920928955078125e-07) ||
                     (uVar6 < 2 == fVar31 <= fVar36)) {
                    uVar19 = SUB84(pdVar24[0x1d],0);
                    pdVar15 = &dStack_c8;
                    (**(code **)(&UNK_110a2f908 +
                                (long)(int)(uVar17 | *(int *)((long)pdVar24 + 0x10c) << 1) * 8))
                              (*(undefined4 *)(pdVar24 + 0x20));
                    for (uVar25 = 0;
                        bVar11 = uVar25 == (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)), !bVar11;
                        uVar25 = uVar25 + 1) {
                      dVar34 = (&dStack_c8)[uVar25];
                      func_0x0001081f750c();
                      if ((bVar11) && (ABS(dStack_528 - dVar34) < 1.1920928955078125e-07))
                      goto LAB_1081f6950;
                      uVar37 = 0;
                      pdVar16 = pdVar24;
                      if (1.1920928955078125e-07 <= ABS(dVar34)) {
                        uVar12 = ABS(dVar34 + -1.0) == 1.1920928955078125e-07;
                        if (ABS(dVar34 + -1.0) < 1.1920928955078125e-07) {
                          uStack_508 = *(ulong *)((long)pdVar24[0x1d] +
                                                 (long)(*(int *)((long)pdVar24 + 0x10c) -
                                                       (*(int *)((long)pdVar24 + 0x10c) + 1 >> 2)) *
                                                 8);
                          goto LAB_1081f68d4;
                        }
                        dVar30 = dVar34;
                        FUN_1081e9b68(pdVar24);
                        uStack_508 = CONCAT44(uVar37,SUB84(dVar30,0));
                        iVar20 = (int)&uStack_508;
                        pdVar15 = (double *)&uStack_530;
                        FUN_1081de720();
                        if (iVar20 != 0) {
                          func_0x0001081f750c();
                          if ((bool)uVar12) goto LAB_1081f6950;
                          bVar11 = false;
                          goto LAB_1081f68dc;
                        }
                        fVar31 = *(float *)((ulong)&uStack_508 | uVar18 << 2);
                        dVar30 = ABS((double)fVar36 - (double)fVar31);
                        if ((dVar30 < 1.1920928955078125e-07) || (uVar6 < 2 == fVar31 <= fVar36)) {
                          pdVar14 = pdVar24;
                          dVar35 = dVar34;
                          FUN_1081e579c();
                          adStack_500[0] = dVar35;
                          adStack_500[1] = dVar30;
                          bVar11 = *(int *)((long)pdVar24 + 0x10c) == 4;
                          if ((bVar11) &&
                             ((func_0x0001081f750c(), fVar40 = uStack_530._4_4_,
                              fVar31 = (float)uStack_530, bVar11 &&
                              (ABS(dStack_528 - dVar34) < 7.62939453125e-06)))) {
                            fVar8 = (float)uStack_508;
                            fVar9 = uStack_508._4_4_;
                            func_0x0001081f640c(uStack_508 & 0xffffffff,(float)uStack_530);
                            if ((((ulong)pdVar14 & 1) != 0) ||
                               (func_0x0001081f640c(fVar9,fVar40), (int)pdVar14 != 0)) {
                              fVar32 = fVar31;
                              if (fVar8 <= fVar31) {
                                fVar32 = fVar8;
                              }
                              fVar33 = fVar9;
                              if (fVar32 <= fVar9) {
                                fVar33 = fVar32;
                              }
                              fVar32 = fVar40;
                              if (fVar33 <= fVar40) {
                                fVar32 = fVar33;
                              }
                              fVar33 = fVar31;
                              if (fVar31 <= fVar8) {
                                fVar33 = fVar8;
                              }
                              fVar39 = fVar9;
                              if (fVar9 <= fVar33) {
                                fVar39 = fVar33;
                              }
                              fVar33 = fVar40;
                              if (fVar40 <= fVar39) {
                                fVar33 = fVar39;
                              }
                              fVar39 = -fVar32;
                              if (-fVar32 <= fVar33) {
                                fVar39 = fVar33;
                              }
                              FUN_1081de93c((double)fVar39,
                                            SQRT(((double)fVar9 - (double)fVar40) *
                                                 ((double)fVar9 - (double)fVar40) +
                                                 ((double)fVar8 - (double)fVar31) *
                                                 ((double)fVar8 - (double)fVar31)) + (double)fVar39)
                              ;
                              if (((ulong)pdVar14 & 1) != 0) goto LAB_1081f6950;
                            }
                          }
                          bVar11 = ABS(adStack_500[uVar18]) < ABS(adStack_500[uVar21] * 10000.0);
                          goto LAB_1081f68dc;
                        }
                      }
                      else {
                        uStack_508 = *(ulong *)pdVar24[0x1d];
LAB_1081f68d4:
                        bVar11 = false;
LAB_1081f68dc:
                        while( true ) {
                          dVar30 = *(double *)pdVar16[0xc];
                          if (ABS(dVar34 - dVar30) < 1.1920928955078125e-07) break;
                          if (dVar34 < dVar30) {
                            if ((*(int *)(pdVar16 + 0xe) != 0) ||
                               (*(int *)((long)pdVar16 + 0x74) != 0)) goto LAB_1081f6920;
                            goto LAB_1081f6950;
                          }
                          pdVar16 = (double *)pdVar16[0xc];
                          if (dVar30 == 1.0) break;
                        }
                        pdVar16 = (double *)0x0;
                        bVar11 = false;
LAB_1081f6920:
                        plVar13 = alStack_e8;
                        pdVar15 = (double *)0x38;
                        func_0x0001081865ac(plVar13,0x38,8);
                        *plVar13 = (long)plVar28;
                        plVar13[1] = (long)pdVar16;
                        plVar13[2] = uStack_508;
                        dVar30 = adStack_500[0];
                        plVar13[5] = (long)adStack_500[1];
                        plVar13[4] = (long)dVar30;
                        plVar13[3] = (long)dVar34;
                        *(bool *)(plVar13 + 6) = bVar11;
                        plVar28 = plVar13;
                      }
LAB_1081f6950:
                    }
                  }
                }
              }
              pdVar24 = (double *)pdVar24[0x1b];
            } while (pdVar24 != (double *)0x0);
          }
        }
        param_2 = *(long *)(param_2 + 0x128);
      } while (param_2 != 0);
      uVar19 = 0;
      pdStack_c0 = &dStack_c8;
      uStack_b8 = 0x200000000;
      pdVar24 = &dStack_c8;
      for (; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
        if ((int)uVar19 < (int)(uint)(uStack_b8 >> 0x21)) {
          pdVar24[(int)uVar19] = (double)plVar28;
          uStack_b8._0_4_ = uVar19;
        }
        else {
          if (uVar19 == 0x7fffffff) {
            func_0x00010bdb1a68();
            goto LAB_1081f6e9c;
          }
          adStack_500[1] = 1.06099789498857e-314;
          adStack_500[0] = 3.95252516672997e-323;
          pdVar24 = adStack_500;
          pdVar16 = (double *)(ulong)(uVar19 + 1);
          FUN_10840fe24(0x3ff8000000000000);
          iVar20 = (uint)uStack_b8;
          lVar22 = (long)(int)(uint)uStack_b8;
          pdVar24[lVar22] = (double)plVar28;
          pdVar15 = pdVar16;
          if (iVar20 != 0) {
            pdVar15 = pdStack_c0;
            _memcpy(pdVar24,pdStack_c0,lVar22 << 3);
          }
          if ((uStack_b8 & 0x100000000) != 0) {
            _free(pdStack_c0);
          }
          uVar18 = (ulong)pdVar16 >> 3;
          if (0x7ffffffe < uVar18) {
            uVar18 = 0x7fffffff;
          }
          pdStack_c0 = pdVar24;
          uStack_b8._4_4_ = (int)uVar18 << 1 | 1;
        }
        uVar19 = (uint)uStack_b8 + 1;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar19);
      }
      if (1 < (int)uVar19) {
        pcVar10 = (code *)0x1081f6efc;
        if (1 < uVar6) {
          pcVar10 = (code *)0x1081f6f08;
        }
        pcVar5 = FUN_1081f6ee4;
        if (1 < uVar6) {
          pcVar5 = (code *)0x1081f6ef0;
        }
        if (uVar17 != 0) {
          pcVar10 = pcVar5;
        }
        FUN_1081f7260((int)LZCOUNT(uVar19 - 2) * -2 + 0x40,pdVar24,uVar19,pcVar10);
        pdVar15 = pdVar24;
      }
      uVar17 = 0;
      uVar23 = 0;
      dVar34 = 0.0;
      uVar25 = (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU));
      for (uVar18 = 0; uVar26 = uVar25, uVar25 != uVar18; uVar18 = uVar18 + 1) {
        if ((long)(int)(uint)uStack_b8 <= (long)uVar18) goto LAB_1081f6e9c;
        dVar30 = pdStack_c0[uVar18];
        uVar26 = uVar18;
        if (*(char *)((long)dVar30 + 0x30) != '\x01') break;
        dVar35 = *(double *)((long)dVar30 + uVar21 * 8 + 0x20);
        lVar22 = *(long *)((long)dVar30 + 8);
        if (lVar22 == 0) break;
        lVar29 = *(long *)(lVar22 + 0x28);
        if ((*(int *)(lVar22 + 0x70) != 0) || (*(int *)(lVar22 + 0x74) != 0)) {
          if (dVar34 != 0.0) {
            pdVar15 = (double *)((long)dVar30 + 0x10);
            FUN_1081de720();
            if (((ulong)dVar34 & 1) != 0) break;
          }
          if ((long)uVar18 < (long)(int)(uVar19 - 1)) {
            if ((int)(uint)uStack_b8 <= (int)uVar18 + 1) {
LAB_1081f6e9c:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1081f6ea0);
              (*pcVar10)();
            }
            dVar34 = (double)((long)pdStack_c0[uVar18 + 1] + 0x10);
            pdVar15 = (double *)((long)dVar30 + 0x10);
            FUN_1081de720();
            if (((ulong)dVar34 & 1) != 0) break;
          }
          cVar7 = *(char *)(*(long *)(lVar29 + 0xd0) + 0x14d);
          uVar4 = uVar17;
          if (cVar7 == '\0') {
            uVar4 = uVar23;
            uVar23 = uVar17;
          }
          iVar20 = *(int *)(lVar22 + 0x70);
          uVar17 = (uint)(((uVar6 + 1 & 2) == 0) != 0.0 < dVar35);
          if (uVar17 == 0) {
            iVar27 = *(int *)(lVar22 + 0x74);
          }
          else {
            iVar20 = -iVar20;
            iVar27 = -*(int *)(lVar22 + 0x74);
          }
          uVar1 = iVar20 + uVar23;
          uVar2 = -uVar1;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          uVar3 = -uVar23;
          if ((int)uVar23 >= 0) {
            uVar3 = uVar23;
          }
          bVar11 = (int)uVar23 < 0;
          if (uVar3 != uVar2) {
            bVar11 = uVar3 < uVar2;
          }
          iVar20 = *(int *)(lVar22 + 0x68);
          uVar2 = uVar1;
          if (!bVar11) {
            uVar2 = uVar23;
          }
          pdVar24 = (double *)(ulong)uVar2;
          if (iVar20 == -0x7fffffff) {
            func_0x0001081ecb60(lVar22);
            pdVar15 = pdVar24;
          }
          uVar2 = iVar27 + uVar4;
          uVar23 = -uVar2;
          if (-1 < (int)uVar2) {
            uVar23 = uVar2;
          }
          uVar3 = -uVar4;
          if ((int)uVar4 >= 0) {
            uVar3 = uVar4;
          }
          bVar11 = (int)uVar4 < 0;
          if (uVar3 != uVar23) {
            bVar11 = uVar3 < uVar23;
          }
          uVar23 = uVar2;
          if (!bVar11) {
            uVar23 = uVar4;
          }
          pdVar24 = (double *)(ulong)uVar23;
          if (*(int *)(lVar22 + 0x6c) == -0x7fffffff) {
            func_0x0001081ecb40(lVar22);
            pdVar15 = pdVar24;
          }
          dVar35 = param_1[5];
          if (iVar20 == -0x7fffffff) {
            if (*(char *)(**(long **)((long)dVar35 + 0xd0) + 0x1e) == '\x03') {
              *(uint *)(*(long *)(lVar29 + 0xd0) + 0x140) = uVar17;
            }
            else {
              func_0x0001081f74fc(lVar29,lVar22,*(undefined8 *)(lVar22 + 0x60));
              pdVar15 = *(double **)(lVar22 + 0x60);
              func_0x0001081f74fc(lVar29,pdVar15,lVar22);
              dVar35 = param_1[5];
            }
          }
          uVar17 = uVar2;
          uVar23 = uVar1;
          if (cVar7 == '\0') {
            uVar17 = uVar1;
            uVar23 = uVar2;
          }
          dVar34 = (double)((long)dVar30 + 0x10);
          *(int *)(**(long **)((long)dVar35 + 0xd0) + 0x18) =
               *(int *)(**(long **)((long)dVar35 + 0xd0) + 0x18) + 1;
        }
      }
      bVar11 = (long)(int)uVar19 <= (long)uVar26;
      func_0x0001081f751c();
      goto LAB_1081f6e48;
    }
  }
  bVar11 = false;
LAB_1081f6e48:
  func_0x0001081f7534();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return bVar11;
  }
  ___stack_chk_fail();
  func_0x0001081f751c();
  func_0x0001081f7534();
  __Unwind_Resume();
  return *(float *)((long)dVar34 + 0x14) < *(float *)((long)pdVar15 + 0x14);
}



/* Entry: 1081f6ee4; end: 1081f6f13;  */

bool FUN_1081f6ee4(long param_1,long param_2)

{
  return *(float *)(param_1 + 0x14) < *(float *)(param_2 + 0x14);
}



/* Entry: 1081f6f14; end: 1081f6f8b;  */

double * FUN_1081f6f14(double *param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  do {
    pdVar2 = (double *)param_1[0xc];
    if ((*(byte *)((long)param_1 + 0x7c) & 1) == 0) {
      if (*(int *)(param_1 + 0xd) != -0x7fffffff) {
        return param_1;
      }
      pdVar1 = param_1;
      FUN_1081f65b4(param_1,param_2);
      if (((ulong)pdVar1 & 1) != 0) {
        return param_1;
      }
    }
    param_1 = pdVar2;
    if (*pdVar2 == 1.0) {
      return (double *)0x0;
    }
  } while( true );
}



/* Entry: 1081f6f8c; end: 1081f7067;  */

void FUN_1081f6f8c(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x144) != 0) {
    lVar3 = param_1 + 8;
    bVar2 = true;
    do {
      while (*(int *)(lVar3 + 0x108) != *(int *)(lVar3 + 0x104)) {
        lVar1 = lVar3;
        FUN_1081f6f14(lVar3,param_2);
        if (lVar1 != 0) {
          return;
        }
        bVar2 = false;
        lVar3 = *(long *)(lVar3 + 0xd8);
        if (lVar3 == 0) {
          return;
        }
      }
      lVar3 = *(long *)(lVar3 + 0xd8);
    } while (lVar3 != 0);
    if (!bVar2) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x14c) = 1;
  return;
}



/* Entry: 1081f7068; end: 1081f711f;  */

bool FUN_1081f7068(undefined8 param_1,float param_2,long param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*(float *)(param_3 + 4) == *(float *)(param_3 + 0xc)) {
    return false;
  }
  dVar1 = (double)*(float *)(param_3 + 4);
  dVar2 = ((double)param_2 - dVar1) / ((double)*(float *)(param_3 + 0xc) - dVar1);
  dVar1 = 1.0;
  if (dVar2 <= 0.9999999999999991) {
    dVar1 = dVar2;
  }
  dVar3 = 0.0;
  if (8.881784197001252e-16 <= dVar2) {
    dVar3 = dVar1;
  }
  *param_4 = dVar3;
  return (0.0 - dVar3) * (1.0 - dVar3) <= 0.0;
}



/* Entry: 1081f7120; end: 1081f722f;  */

void FUN_1081f7120(void)

{
  func_0x0001081f7498();
  FUN_1081ddb24();
  func_0x0001081e0d78();
  return;
}



/* Entry: 1081f7230; end: 1081f725f;  */

undefined8 * FUN_1081f7230(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1081f7260; end: 1081f7487;  */

void FUN_1081f7260(int param_1,ulong *param_2,uint param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  do {
    if ((int)param_3 < 0x21) {
      puVar11 = param_2;
      do {
        do {
          puVar9 = puVar11;
          puVar11 = puVar9 + 1;
          if (param_2 + (long)(int)param_3 + -1 < puVar11) {
            return;
          }
          uVar7 = puVar9[1];
          (*param_4)(uVar7,*puVar9);
        } while ((int)uVar7 == 0);
        uVar7 = *puVar11;
        do {
          puVar8 = puVar9;
          puVar8[1] = *puVar8;
          if (puVar8 <= param_2) break;
          uVar3 = uVar7;
          (*param_4)(uVar7,puVar8[-1]);
          puVar9 = puVar8 + -1;
        } while ((uVar3 & 1) != 0);
        *puVar8 = uVar7;
      } while( true );
    }
    if (param_1 == 0) {
      uVar7 = (ulong)param_3;
      for (uVar3 = (ulong)(param_3 >> 1); uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar5 = param_2[uVar3 - 1];
        uVar6 = uVar3;
        while( true ) {
          uVar12 = uVar6 * 2;
          if (uVar7 <= uVar12 && uVar12 - uVar7 != 0) break;
          if (uVar7 > uVar12) {
            uVar4 = (param_2 + uVar6 * 2)[-1];
            (*param_4)(uVar4,param_2[uVar6 * 2]);
            uVar12 = uVar12 | uVar4 & 0xffffffff;
          }
          uVar4 = uVar5;
          (*param_4)(uVar5,param_2[uVar12 - 1]);
          if ((int)uVar4 == 0) break;
          param_2[uVar6 - 1] = param_2[uVar12 - 1];
          uVar6 = uVar12;
        }
        param_2[uVar6 - 1] = uVar5;
      }
      do {
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          return;
        }
        uVar3 = *param_2;
        *param_2 = param_2[uVar7];
        param_2[uVar7] = uVar3;
        uVar6 = *param_2;
        uVar3 = 1;
        while( true ) {
          uVar5 = uVar3 * 2;
          if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) break;
          if (uVar7 > uVar5) {
            uVar12 = (param_2 + uVar3 * 2)[-1];
            (*param_4)(uVar12,param_2[uVar3 * 2]);
            uVar5 = uVar5 | uVar12 & 0xffffffff;
          }
          param_2[uVar3 - 1] = param_2[uVar5 - 1];
          uVar3 = uVar5;
        }
        while (1 < uVar3) {
          uVar12 = uVar3 >> 1;
          uVar5 = param_2[uVar12 - 1];
          (*param_4)(uVar5,uVar6);
          if ((int)uVar5 == 0) break;
          param_2[uVar3 - 1] = param_2[uVar12 - 1];
          uVar3 = uVar12;
        }
        param_2[uVar3 - 1] = uVar6;
      } while( true );
    }
    uVar2 = param_3 - 1 >> 1;
    puVar8 = param_2 + ((ulong)param_3 - 1);
    uVar7 = param_2[uVar2];
    param_2[uVar2] = *puVar8;
    *puVar8 = uVar7;
    puVar9 = param_2;
    for (puVar11 = param_2; puVar11 < puVar8; puVar11 = puVar11 + 1) {
      uVar3 = *puVar11;
      (*param_4)(uVar3,uVar7);
      puVar10 = puVar9;
      if ((int)uVar3 != 0) {
        uVar3 = *puVar11;
        *puVar11 = *puVar9;
        puVar10 = puVar9 + 1;
        *puVar9 = uVar3;
      }
      puVar9 = puVar10;
    }
    param_1 = param_1 + -1;
    uVar7 = *puVar9;
    *puVar9 = *puVar8;
    *puVar8 = uVar7;
    uVar7 = (ulong)((long)puVar9 - (long)param_2) >> 3;
    FUN_1081f7260(param_1,param_2,uVar7,param_4);
    iVar1 = (int)uVar7 + 1;
    param_2 = param_2 + iVar1;
    param_3 = param_3 - iVar1;
  } while( true );
}



/* Entry: 1081f7488; end: 1081f7553;  */

void FUN_1081f7488(void)

{
  return;
}



/* Entry: 1081f7554; end: 1081f75cb;  */

long FUN_1081f7554(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108376ad8();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0x100000000;
  *(undefined4 *)(lVar1 + 0x20) = 8;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = param_2;
  FUN_1081f75cc();
  return param_1;
}



/* Entry: 1081f75cc; end: 1081f75e7;  */

void FUN_1081f75cc(long param_1)

{
  FUN_108376d4c();
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1081f75e8; end: 1081f762f;  */

void FUN_1081f75e8(long *param_1)

{
  long *plVar1;
  
  if (*(int *)(*param_1 + 0x48) != 0) {
    plVar1 = param_1;
    FUN_108377ec8();
    func_0x000108142250(plVar1[7],param_1,0);
    FUN_108376d4c();
    FUN_108376d4c();
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    return;
  }
  return;
}



/* Entry: 1081f7630; end: 1081f7673;  */

void FUN_1081f7630(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = param_1;
  func_0x0001081f87b4();
  uStack_38 = (undefined4)uVar1;
  uStack_34 = param_2;
  func_0x0001081f87d0(param_3,param_4,&uStack_38);
  FUN_1081f770c(param_1);
  return;
}



/* Entry: 1081f7674; end: 1081f770b;  */

float FUN_1081f7674(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    FUN_1081f7a58(param_1);
  }
  else {
    uVar2 = param_1;
    FUN_1081f77e8(param_1,*(undefined8 *)(param_1 + 0x40));
    if ((uVar2 & 1) == 0) {
      FUN_1081f7888(param_1);
    }
  }
  fVar4 = *(float *)(param_2 + 8);
  lVar3 = *(long *)(param_1 + 0x50);
  fVar5 = fVar4;
  if (lVar3 != 0) {
    fVar6 = *(float *)(lVar3 + 8);
    bVar1 = false;
    if ((fVar4 == fVar6) &&
       (bVar1 = false, !NAN(*(float *)(param_2 + 0xc)) && !NAN(*(float *)(lVar3 + 0xc)))) {
      bVar1 = *(float *)(param_2 + 0xc) == *(float *)(lVar3 + 0xc);
    }
    if ((!bVar1) && (func_0x0001081ec468(lVar3,param_2), fVar5 = fVar6, (int)lVar3 == 0)) {
      fVar5 = fVar4;
    }
  }
  *(long *)(param_1 + 0x40) = param_2;
  *(long *)(param_1 + 0x48) = param_2;
  return fVar5;
}



/* Entry: 1081f770c; end: 1081f771b;  */

undefined8
FUN_1081f770c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 *puStack_58;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = *param_4;
  uVar4 = param_4[1];
  fVar5 = (float)param_1;
  if (0.0 < fVar5) {
    if (!NAN(fVar5 - fVar5)) {
      if (fVar5 == 1.0) {
        FUN_108377d1c(uVar1,uVar2,uVar3,uVar4);
        return param_2;
      }
      FUN_108377cd4(param_2);
      FUN_10837ca9c(&puStack_58);
      FUN_10837e8b4(param_1,puStack_58,3);
      *puStack_58 = uVar1;
      puStack_58[1] = uVar2;
      puStack_58[2] = uVar3;
      puStack_58[3] = uVar4;
      func_0x00010837cb1c();
      return param_2;
    }
    FUN_108377c8c(uVar1,uVar2,param_2);
  }
  func_0x00010837cc84();
  FUN_108377c8c();
  return param_2;
}



/* Entry: 1081f771c; end: 1081f776f;  */

void FUN_1081f771c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_1081f7674(param_3,param_6);
  uStack_38 = param_1;
  uStack_34 = param_2;
  func_0x00010817abc4(param_3,param_4,param_5,&uStack_38);
  return;
}



/* Entry: 1081f7770; end: 1081f77e7;  */

undefined8 FUN_1081f7770(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 0x40) != param_2) &&
     (uVar2 = param_2, func_0x0001081ec468(), (uVar2 & 1) == 0)) {
    func_0x0001081f87d0();
    FUN_1081f77e8();
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x0001081f87d0();
      FUN_1081f7814();
      if (iVar1 != 0) {
        FUN_1081f7888(param_1);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
      }
    }
    *(ulong *)(param_1 + 0x48) = param_2;
  }
  return 1;
}



/* Entry: 1081f77e8; end: 1081f7813;  */

bool FUN_1081f77e8(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (param_2 == lVar3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_2 != 0) && (lVar2 = param_2, lVar3 != 0)) {
      do {
        lVar2 = *(long *)(lVar2 + 0x18);
      } while (lVar2 != lVar3 && lVar2 != param_2);
      return lVar2 != param_2;
    }
  }
  return bVar1;
}



/* Entry: 1081f7814; end: 1081f7887;  */

byte FUN_1081f7814(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x40);
  uVar1 = param_1;
  FUN_1081f77e8(param_1,lVar2);
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 8);
    uVar7 = *(undefined8 *)(lVar2 + 8);
    fVar4 = (float)uVar5;
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    uVar5 = NEON_rev64(CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) - fVar6,
                                (float)*(undefined8 *)(param_2 + 8) - fVar4),4);
    bVar3 = ~-((fVar4 - (float)uVar7) * (float)uVar5 ==
              (fVar6 - (float)((ulong)uVar7 >> 0x20)) * (float)((ulong)uVar5 >> 0x20));
  }
  else {
    bVar3 = 0;
  }
  return bVar3 & 1;
}



/* Entry: 1081f7888; end: 1081f7993;  */

long * FUN_1081f7888(long *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  if (*(int *)(*param_1 + 0x48) == 0) {
    FUN_1081f7a58(param_1);
  }
  func_0x00010837cf24(*(undefined4 *)(param_1[9] + 8),*(undefined4 *)(param_1[9] + 0xc),param_1);
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



/* Entry: 1081f7994; end: 1081f799b;  */

bool FUN_1081f7994(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x50);
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar2 == lVar4) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((lVar2 != 0) && (lVar3 = lVar2, lVar4 != 0)) {
      do {
        lVar3 = *(long *)(lVar3 + 0x18);
      } while (lVar3 != lVar4 && lVar3 != lVar2);
      return lVar3 != lVar2;
    }
  }
  return bVar1;
}



/* Entry: 1081f799c; end: 1081f79d3;  */

void FUN_1081f799c(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001081f87c4();
  func_0x0001081f8390();
  if (*(int *)(unaff_x19 + 0x14) != 0) {
    *(undefined8 *)(*(long *)(unaff_x19 + 8) + (long)*(int *)(unaff_x19 + 0x14) * 8 + -8) =
         *unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081f79d4);
  (*pcVar1)();
}



/* Entry: 1081f79d4; end: 1081f7a57;  */

void FUN_1081f79d4(long param_1)

{
  long unaff_x19;
  
  func_0x0001081f87c4();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    func_0x0001081f87e4();
  }
  else {
    FUN_1081e4df8(0x3ff8000000000000);
    func_0x0001081f87e4((long)*(int *)(unaff_x19 + 8));
    FUN_1081e4d84();
  }
  func_0x0001081f8820();
  return;
}



/* Entry: 1081f7a58; end: 1081f7a6b;  */

long FUN_1081f7a58(long param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  func_0x00010837cf24(*(undefined4 *)(*(long *)(param_1 + 0x50) + 8),
                      *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xc));
  puVar1 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cd20();
  func_0x00010837cee4();
  func_0x00010837cd94();
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 1081f7a6c; end: 1081f7a9f;  */

void FUN_1081f7a6c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  func_0x0001081f87b4();
  uStack_28 = param_1;
  uStack_24 = param_2;
  func_0x0001081f87d0(param_3,param_4,&uStack_28);
  FUN_1081f7aa0();
  return;
}



/* Entry: 1081f7aa0; end: 1081f7aab;  */

long FUN_1081f7aa0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_48;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  FUN_108377cd4();
  FUN_10837ca9c(&puStack_48);
  FUN_10837e8b4(0,puStack_48,2);
  *puStack_48 = uVar1;
  puStack_48[1] = uVar2;
  puStack_48[2] = uVar3;
  puStack_48[3] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = 2;
  *(undefined1 *)(param_1 + 0xd) = 2;
  return param_1;
}



/* Entry: 1081f7aac; end: 1081f827b;  */

/* WARNING: Removing unreachable block (ram,0x00010840f420) */

int * FUN_1081f7aac(int *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  bool bVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  double *pdVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  int iVar31;
  long *plVar32;
  long *plVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int *piStack_1a0;
  int *piStack_188;
  undefined1 *puStack_180;
  undefined4 auStack_178 [2];
  int *piStack_170;
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
  int *piStack_158;
  undefined8 uStack_150;
  double *apdStack_148 [4];
  long lStack_128;
  int iStack_120;
  undefined8 auStack_118 [4];
  long lStack_f8;
  int iStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  int iStack_d0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar14 = param_1;
  func_0x0001081f7904();
  uVar5 = param_1[0xd];
  if (uVar5 != 0) {
    plVar29 = *(long **)(param_1 + 10);
    for (uVar28 = 0; uVar28 != (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar28 = uVar28 + 1) {
      pdVar23 = (double *)plVar29[uVar28];
      FUN_108376ad8(auStack_118);
      FUN_1081f7554(auStack_e8,auStack_118);
      while( true ) {
        dVar34 = *pdVar23;
        bVar13 = true;
        if ((dVar34 != 0.0) && (bVar13 = false, !NAN(dVar34))) {
          bVar13 = dVar34 == 1.0;
        }
        if (!bVar13) break;
        auStack_160[0] = 0xffffffff;
        if (dVar34 != 0.0) {
          auStack_160[0] = 1;
        }
        lVar15 = 0x40;
        if (dVar34 == 0.0) {
          lVar15 = 0x60;
        }
        apdStack_148[0] = *(double **)((long)pdVar23[2] + lVar15);
        lVar15 = *(long *)((long)pdVar23[2] + 0x28);
        FUN_1081ea790(lVar15,apdStack_148,auStack_160);
        if (lVar15 == 0) break;
        lVar15 = 0x40;
        if (*apdStack_148[0] == 0.0) {
          lVar15 = 0x60;
        }
        pdVar23 = *(double **)((long)apdStack_148[0] + lVar15);
        pdVar3 = apdStack_148[0];
        if (*pdVar23 <= *apdStack_148[0]) {
          pdVar3 = pdVar23;
        }
        if ((*(byte *)((long)pdVar3 + 0x7d) & 1) != 0) break;
        FUN_1081e97e0();
        plVar29[uVar28] = (long)pdVar23;
      }
      func_0x0001081f7904(auStack_e8);
      uVar16 = uStack_d8;
      if (iStack_d0 != 0) {
        uVar19 = uVar28 >> 1 & 0x7fffffff;
        if ((param_1[6] <= (int)uVar19) || (iStack_d0 < 1)) goto LAB_1081f81bc;
        lVar15 = *(long *)(param_1 + 4) + uVar19 * 0x10;
        if ((uVar28 & 1) == 0) {
          FUN_108376ad8(apdStack_148);
          FUN_108379514(apdStack_148,uVar16);
          func_0x000108142250(apdStack_148,lVar15,1);
          FUN_108376b90(lVar15,apdStack_148);
          FUN_10837ca5c(apdStack_148[0]);
        }
        else {
          func_0x000108142250(lVar15,uStack_d8,1);
        }
      }
      FUN_1081e4c6c(auStack_e8);
      FUN_10837ca5c(auStack_118[0]);
    }
    auStack_160[0] = 4;
    piStack_158 = (int *)0x0;
    uStack_150 = 0;
    auStack_178[0] = 4;
    piStack_170 = (int *)0x0;
    uStack_168 = 0;
    uVar8 = (int)uVar5 / 2;
    FUN_1081f827c(auStack_160,uVar8);
    FUN_1081f827c(auStack_178,uVar8);
    piVar14 = piStack_158;
    piVar17 = piStack_170;
    piStack_1a0 = piStack_170;
    piStack_188 = piStack_158;
    uVar28 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    uVar10 = uStack_168._4_4_;
    uVar11 = uStack_150._4_4_;
    uVar19 = (ulong)uStack_150._4_4_;
    for (lVar15 = 0; uVar28 << 2 != lVar15; lVar15 = lVar15 + 4) {
      if (((ulong)(uStack_168._4_4_ & ((int)uStack_168._4_4_ >> 0x1f ^ 0xffffffffU)) << 2 == lVar15)
         || (*(undefined4 *)((long)piStack_170 + lVar15) = 0x7fffffff,
            (ulong)(uStack_150._4_4_ & ((int)uStack_150._4_4_ >> 0x1f ^ 0xffffffffU)) << 2 == lVar15
            )) goto LAB_1081f81bc;
      *(undefined4 *)((long)piStack_158 + lVar15) = 0x7fffffff;
    }
    uVar21 = uVar5 - 1;
    puStack_a8 = auStack_e8;
    uStack_a0 = 0x1000000000;
    uVar26 = (int)(uVar21 * uVar5) / 2;
    uVar30 = (ulong)uVar26;
    if (0x11 < (int)(uVar21 * uVar5)) {
      uVar16 = 0;
      uVar27 = uVar30;
      FUN_1081f8400(0x3ff0000000000000,0,uVar30);
      FUN_1081f83bc(&puStack_a8,uVar16,uVar27);
    }
    FUN_1081f8280(auStack_118,uVar30);
    FUN_1081f8280(apdStack_148,uVar30);
    uVar30 = 0;
    iVar31 = 0;
    iVar18 = 1;
    iVar24 = 1;
    plVar32 = plVar29;
    while (plVar32 = plVar32 + 1, uVar30 != (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU))) {
      lVar15 = plVar29[uVar30];
      uVar30 = uVar30 + 1;
      plVar33 = plVar32;
      iVar25 = iVar24;
      for (iVar22 = iVar18; iVar22 < (int)uVar5; iVar22 = iVar22 + 1) {
        fVar36 = *(float *)(*plVar33 + 8);
        fVar37 = *(float *)(*plVar33 + 0xc);
        fVar39 = *(float *)(lVar15 + 8);
        fVar38 = *(float *)(lVar15 + 0xc);
        puStack_180 = (undefined1 *)CONCAT44(puStack_180._4_4_,iVar25);
        FUN_1081f82c8(&lStack_128,&puStack_180);
        dVar34 = (double)(fVar36 - fVar39);
        dVar35 = (double)(fVar37 - fVar38);
        dVar34 = dVar35 * dVar35 + dVar34 * dVar34;
        uVar27 = uStack_a0 & 0xffffffff;
        if ((int)uStack_a0 < (int)(uStack_a0._4_4_ >> 1)) {
          *(double *)(puStack_a8 + (long)(int)uStack_a0 * 8) = dVar34;
        }
        else {
          uVar16 = 1;
          FUN_1081f8400(0x3ff8000000000000,uVar27,1);
          *(double *)(uVar27 + (long)(int)uStack_a0 * 8) = dVar34;
          FUN_1081f83bc(&puStack_a8,uVar27,uVar16);
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + 1);
        puStack_180 = (undefined1 *)CONCAT44(puStack_180._4_4_,iVar31);
        FUN_1081f82c8(&lStack_f8,&puStack_180);
        iVar31 = iVar31 + 1;
        plVar33 = plVar33 + 1;
        iVar25 = iVar25 + 1;
      }
      iVar24 = iVar24 + uVar5 + 1;
      iVar18 = iVar18 + 1;
    }
    puStack_180 = puStack_a8;
    param_2 = lStack_f8;
    if (1 < iStack_f0) {
      FUN_1081f8540((int)LZCOUNT(iStack_f0 + -2) * -2 + 0x40,lStack_f8,iStack_f0,&puStack_180);
      param_2 = lStack_f8;
    }
    uVar21 = uVar8;
    for (uVar30 = 0; (uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU)) != uVar30; uVar30 = uVar30 + 1)
    {
      if ((((long)iStack_f0 <= (long)uVar30) ||
          (uVar6 = *(uint *)(param_2 + uVar30 * 4), (int)uVar6 < 0)) || (iStack_120 <= (int)uVar6))
      goto LAB_1081f81bc;
      iVar31 = *(int *)(lStack_128 + (ulong)uVar6 * 4);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = iVar31 / (int)uVar5;
      }
      uVar1 = (int)uVar6 >> 1;
      piVar20 = piVar14;
      if ((uVar6 & 1) != 0) {
        piVar20 = piVar17;
      }
      if (piVar20[(int)uVar1] == 0x7fffffff) {
        uVar7 = iVar31 - uVar6 * uVar5;
        uVar2 = (int)uVar7 >> 1;
        piVar4 = piVar14;
        if ((uVar7 & 1) != 0) {
          piVar4 = piVar17;
        }
        if (piVar4[(int)uVar2] == 0x7fffffff) {
          if ((uVar6 & 1) == (uVar7 & 1)) {
            uVar2 = ~uVar2;
            uVar1 = ~uVar1;
          }
          piVar20[(long)((ulong)uVar6 << 0x20) >> 0x21] = uVar2;
          piVar4[(long)((ulong)uVar7 << 0x20) >> 0x21] = uVar1;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) break;
        }
      }
    }
    uVar30 = 0;
LAB_1081f7f68:
    if ((int)uVar11 <= (int)uVar30) {
LAB_1081f81bc:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1081f81c0);
      (*pcVar12)();
    }
    uVar5 = piVar14[uVar30 & 0xffffffff];
    piVar14[uVar30 & 0xffffffff] = 0x7fffffff;
    if ((int)uVar5 < 0) {
      piVar20 = piVar14;
      uVar26 = ~uVar5;
      if ((int)uVar11 <= (int)~uVar5) goto LAB_1081f81bc;
    }
    else {
      piVar20 = piVar17;
      uVar26 = uVar5;
      if ((int)uVar10 <= (int)uVar5) goto LAB_1081f81bc;
    }
    uVar27 = (ulong)(uint)piVar20[uVar26];
    piVar20[uVar26] = 0x7fffffff;
    bVar13 = true;
    bVar9 = true;
    do {
      uVar26 = (uint)uVar30;
      if (((int)uVar26 < 0) || (param_1[6] <= (int)uVar26)) goto LAB_1081f81bc;
      lVar15 = *(long *)(param_1 + 4) + (uVar30 & 0xffffffff) * 0x10;
      plVar29 = *(long **)(param_1 + 0xe);
      if (bVar9) {
        if (bVar13) goto LAB_1081f8014;
LAB_1081f802c:
        FUN_108379448(plVar29);
        param_2 = lVar15;
      }
      else {
        if (*(int *)(*plVar29 + 0x30) < 1) goto LAB_1081f8158;
        if (bVar13 == false) goto LAB_1081f802c;
        FUN_108377828(lVar15,0);
LAB_1081f8014:
        func_0x000108142250(plVar29,lVar15,bVar9 ^ 1);
        param_2 = lVar15;
      }
      if (uVar5 == ((uint)uVar27 ^ -(uint)(byte)(bVar13 ^ uVar26 == (uint)uVar27)))
      goto LAB_1081f810c;
      piVar20 = piVar17;
      if (bVar13 == false) {
        if ((int)uVar11 <= (int)uVar26) goto LAB_1081f81bc;
        uVar26 = piVar14[uVar30 & 0xffffffff];
        uVar27 = (ulong)uVar26;
        piVar14[uVar30 & 0xffffffff] = 0x7fffffff;
        if ((int)uVar26 < 0) {
          uVar30 = (ulong)~uVar26;
          piVar20 = piVar14;
          if (uVar11 <= ~uVar26) goto LAB_1081f81bc;
        }
        else {
          uVar30 = uVar27;
          if ((int)uVar10 <= (int)uVar26) goto LAB_1081f81bc;
        }
      }
      else {
        if ((int)uVar10 <= (int)uVar26) goto LAB_1081f81bc;
        uVar26 = piVar17[uVar30 & 0xffffffff];
        uVar27 = (ulong)uVar26;
        piVar17[uVar30 & 0xffffffff] = 0x7fffffff;
        if ((int)uVar26 < 0) {
          uVar30 = (ulong)~uVar26;
          if (uVar10 <= ~uVar26) goto LAB_1081f81bc;
        }
        else {
          uVar30 = uVar27;
          piVar20 = piVar14;
          if ((int)uVar11 <= (int)uVar26) goto LAB_1081f81bc;
        }
      }
      bVar9 = false;
      piVar20[uVar30] = 0x7fffffff;
      uVar26 = (uint)uVar27;
      uVar30 = (ulong)(uVar26 ^ (int)uVar26 >> 0x1f);
      bVar13 = (bool)(bVar13 ^ (int)uVar26 < 0);
    } while( true );
  }
LAB_1081f817c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return piVar14;
  }
  ___stack_chk_fail();
  func_0x0001081f87f0();
  _free(piStack_1a0);
  _free(piStack_188);
  __Unwind_Resume();
  iVar31 = piVar14[5];
  iVar18 = (int)param_2;
  if (iVar18 <= piVar14[4] - iVar31) {
    piVar14[5] = iVar31 + iVar18;
    return piVar14;
  }
  if (0 < iVar18) {
    iVar24 = piVar14[5];
    piVar17 = piVar14;
    FUN_10840f278(piVar14,param_2);
    func_0x00010840f168(piVar14,piVar17);
    FUN_10840f2ec(piVar14,iVar18 + iVar31,iVar31,iVar24);
  }
  return (int *)(*(long *)(piVar14 + 2) + (long)*piVar14 * (long)iVar31);
LAB_1081f810c:
  FUN_108377ec8(*(undefined8 *)(param_1 + 0xe));
  uVar30 = 0;
  while( true ) {
    if (uVar28 == uVar30) goto LAB_1081f8158;
    if (uVar19 == uVar30) goto LAB_1081f81bc;
    if (piVar14[uVar30] != 0x7fffffff) break;
    uVar30 = uVar30 + 1;
  }
  if ((int)uVar8 <= (int)uVar30) goto LAB_1081f8158;
  goto LAB_1081f7f68;
LAB_1081f8158:
  FUN_1081f8340(&lStack_128);
  FUN_1081f8340(&lStack_f8);
  func_0x0001081f87f0();
  _free(piVar17);
  _free();
  goto LAB_1081f817c;
}



/* Entry: 1081f827c; end: 1081f827f;  */

/* WARNING: Removing unreachable block (ram,0x00010840f420) */

int * FUN_1081f827c(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = (int)param_2;
  if (iVar4 <= param_1[4] - iVar1) {
    param_1[5] = iVar1 + iVar4;
    return param_1;
  }
  if (0 < iVar4) {
    iVar2 = param_1[5];
    piVar3 = param_1;
    FUN_10840f278(param_1,param_2);
    func_0x00010840f168(param_1,piVar3);
    FUN_10840f2ec(param_1,iVar4 + iVar1,iVar1,iVar2);
  }
  return (int *)(*(long *)(param_1 + 2) + (long)*param_1 * (long)iVar1);
}



/* Entry: 1081f8280; end: 1081f82c7;  */

long FUN_1081f8280(long param_1)

{
  *(long *)(param_1 + 0x20) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0x1000000000;
  FUN_1081f8444(param_1 + 0x20);
  return param_1;
}



/* Entry: 1081f82c8; end: 1081f833f;  */

void FUN_1081f82c8(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001081f87c4();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    *(undefined4 *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 4) = *unaff_x20;
  }
  else {
    plVar1 = unaff_x19;
    FUN_1081f851c(0x3ff8000000000000);
    *(undefined4 *)((long)plVar1 + (long)(int)unaff_x19[1] * 4) = *unaff_x20;
    FUN_1081f84d8();
  }
  func_0x0001081f8820();
  return;
}



/* Entry: 1081f8340; end: 1081f83bb;  */

long FUN_1081f8340(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001081f87ac();
  }
  return param_1;
}



/* Entry: 1081f83bc; end: 1081f83ff;  */

void FUN_1081f83bc(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x0001081f87c4();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001081f8814();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001081f87ac();
  }
  func_0x0001081f8784(param_3 >> 3);
  return;
}



/* Entry: 1081f8400; end: 1081f8443;  */

void FUN_1081f8400(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 8;
    FUN_10840fe24(&uStack_20,param_2 + (uint)param_1);
    return;
  }
  func_0x00010bdb1a68();
  uVar1 = param_2 - *(int *)(param_1 + 8);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0 && *(int *)(param_1 + 8) <= param_2) {
    if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)uVar1) {
      lVar2 = param_1;
      FUN_1081f851c(0x3ff0000000000000);
      func_0x0001081f87c4(param_1,lVar2);
      if (*(int *)(param_1 + 8) != 0) {
        func_0x0001081f8814();
      }
      if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
        func_0x0001081f87ac();
      }
      func_0x0001081f8784(uVar3 >> 2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1081f8444; end: 1081f845b;  */

void FUN_1081f8444(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  uVar1 = param_2 - *(int *)(param_1 + 8);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0 || param_2 < *(int *)(param_1 + 8)) {
    return;
  }
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)uVar1) {
    lVar2 = param_1;
    FUN_1081f851c(0x3ff0000000000000);
    func_0x0001081f87c4(param_1,lVar2);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001081f8814();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001081f87ac();
    }
    func_0x0001081f8784(uVar3 >> 2);
    return;
  }
  return;
}



/* Entry: 1081f845c; end: 1081f848b;  */

void FUN_1081f845c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 4;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1081f848c; end: 1081f84d7;  */

void FUN_1081f848c(long param_1,ulong param_2)

{
  long lVar1;
  long unaff_x19;
  
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)param_2) {
    lVar1 = param_1;
    FUN_1081f851c();
    func_0x0001081f87c4(param_1,lVar1);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001081f8814();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001081f87ac();
    }
    func_0x0001081f8784(param_2 >> 2);
    return;
  }
  return;
}



/* Entry: 1081f84d8; end: 1081f851b;  */

void FUN_1081f84d8(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x0001081f87c4();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001081f8814();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001081f87ac();
  }
  func_0x0001081f8784(param_3 >> 2);
  return;
}



/* Entry: 1081f851c; end: 1081f853f;  */

void FUN_1081f851c(ulong param_1,int *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  double dVar13;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x4;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_1081f8540;
  puStack_20 = &stack0xfffffffffffffff0;
  do {
    iVar11 = (int)param_3;
    if (iVar11 < 0x21) {
      lVar7 = *param_4;
      piVar8 = param_2;
      do {
        do {
          piVar5 = piVar8;
          piVar8 = piVar5 + 1;
          if (param_2 + (long)iVar11 + -1 < piVar8) {
            return;
          }
          iVar2 = piVar5[1];
          dVar13 = *(double *)(lVar7 + (long)iVar2 * 8);
        } while (*(double *)(lVar7 + (long)*piVar5 * 8) <= dVar13);
        do {
          piVar4 = piVar5;
          piVar4[1] = *piVar4;
          if (piVar4 <= param_2) break;
          piVar5 = piVar4 + -1;
        } while (dVar13 < *(double *)(lVar7 + (long)piVar4[-1] * 8));
        *piVar4 = iVar2;
      } while( true );
    }
    if ((int)param_1 == 0) {
      param_3 = param_3 & 0xffffffff;
      for (uVar12 = param_3 >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        lVar7 = *param_4;
        iVar11 = param_2[uVar12 - 1];
        uVar9 = uVar12;
        while( true ) {
          uVar10 = uVar9 * 2;
          if (param_3 <= uVar10 && uVar10 - param_3 != 0) break;
          if ((param_3 > uVar10) &&
             (*(double *)(lVar7 + (long)(param_2 + uVar9 * 2)[-1] * 8) <
              *(double *)(lVar7 + (long)param_2[uVar9 * 2] * 8))) {
            uVar10 = uVar10 + 1;
          }
          if (*(double *)(lVar7 + (long)param_2[uVar10 - 1] * 8) <=
              *(double *)(lVar7 + (long)iVar11 * 8)) break;
          param_2[uVar9 - 1] = param_2[uVar10 - 1];
          uVar9 = uVar10;
        }
        param_2[uVar9 - 1] = iVar11;
      }
      do {
        param_3 = param_3 - 1;
        if (param_3 == 0) {
          return;
        }
        iVar11 = *param_2;
        *param_2 = param_2[param_3];
        param_2[param_3] = iVar11;
        iVar11 = *param_2;
        lVar7 = *param_4;
        uVar12 = 1;
        while( true ) {
          uVar9 = uVar12 * 2;
          if (param_3 <= uVar9 && uVar9 - param_3 != 0) break;
          if ((param_3 > uVar9) &&
             (*(double *)(lVar7 + (long)(param_2 + uVar12 * 2)[-1] * 8) <
              *(double *)(lVar7 + (long)param_2[uVar12 * 2] * 8))) {
            uVar9 = uVar9 + 1;
          }
          param_2[uVar12 - 1] = param_2[uVar9 - 1];
          uVar12 = uVar9;
        }
        lVar7 = *param_4;
        while (1 < uVar12) {
          if (*(double *)(lVar7 + (long)iVar11 * 8) <=
              *(double *)(lVar7 + (long)param_2[(uVar12 >> 1) - 1] * 8)) break;
          param_2[uVar12 - 1] = param_2[(uVar12 >> 1) - 1];
          uVar12 = uVar12 >> 1;
        }
        param_2[uVar12 - 1] = iVar11;
      } while( true );
    }
    uVar3 = iVar11 - 1U >> 1;
    piVar4 = param_2 + ((param_3 & 0xffffffff) - 1);
    iVar2 = param_2[uVar3];
    param_2[uVar3] = *piVar4;
    *piVar4 = iVar2;
    lVar7 = *param_4;
    piVar5 = param_2;
    for (piVar8 = param_2; piVar8 < piVar4; piVar8 = piVar8 + 1) {
      iVar1 = *piVar8;
      piVar6 = piVar5;
      if (*(double *)(lVar7 + (long)iVar1 * 8) < *(double *)(lVar7 + (long)iVar2 * 8)) {
        *piVar8 = *piVar5;
        piVar6 = piVar5 + 1;
        *piVar5 = iVar1;
      }
      piVar5 = piVar6;
    }
    param_1 = (ulong)((int)param_1 - 1);
    iVar2 = *piVar5;
    *piVar5 = *piVar4;
    *piVar4 = iVar2;
    uVar12 = (ulong)((long)piVar5 - (long)param_2) >> 2;
    FUN_1081f8540(param_1,param_2,uVar12,param_4);
    iVar2 = (int)uVar12 + 1;
    param_2 = param_2 + iVar2;
    param_3 = (ulong)(uint)(iVar11 - iVar2);
  } while( true );
}



/* Entry: 1081f8540; end: 1081f8783;  */

void FUN_1081f8540(int param_1,int *param_2,uint param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  
  do {
    if ((int)param_3 < 0x21) {
      lVar8 = *param_4;
      piVar9 = param_2;
      do {
        do {
          piVar5 = piVar9;
          piVar9 = piVar5 + 1;
          if (param_2 + (long)(int)param_3 + -1 < piVar9) {
            return;
          }
          iVar2 = piVar5[1];
          dVar13 = *(double *)(lVar8 + (long)iVar2 * 8);
        } while (*(double *)(lVar8 + (long)*piVar5 * 8) <= dVar13);
        do {
          piVar4 = piVar5;
          piVar4[1] = *piVar4;
          if (piVar4 <= param_2) break;
          piVar5 = piVar4 + -1;
        } while (dVar13 < *(double *)(lVar8 + (long)piVar4[-1] * 8));
        *piVar4 = iVar2;
      } while( true );
    }
    if (param_1 == 0) {
      uVar12 = (ulong)param_3;
      for (uVar7 = (ulong)(param_3 >> 1); uVar7 != 0; uVar7 = uVar7 - 1) {
        lVar8 = *param_4;
        iVar2 = param_2[uVar7 - 1];
        uVar10 = uVar7;
        while( true ) {
          uVar11 = uVar10 * 2;
          if (uVar12 <= uVar11 && uVar11 - uVar12 != 0) break;
          if ((uVar12 > uVar11) &&
             (*(double *)(lVar8 + (long)(param_2 + uVar10 * 2)[-1] * 8) <
              *(double *)(lVar8 + (long)param_2[uVar10 * 2] * 8))) {
            uVar11 = uVar11 + 1;
          }
          if (*(double *)(lVar8 + (long)param_2[uVar11 - 1] * 8) <=
              *(double *)(lVar8 + (long)iVar2 * 8)) break;
          param_2[uVar10 - 1] = param_2[uVar11 - 1];
          uVar10 = uVar11;
        }
        param_2[uVar10 - 1] = iVar2;
      }
      do {
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          return;
        }
        iVar2 = *param_2;
        *param_2 = param_2[uVar12];
        param_2[uVar12] = iVar2;
        iVar2 = *param_2;
        lVar8 = *param_4;
        uVar7 = 1;
        while( true ) {
          uVar10 = uVar7 * 2;
          if (uVar12 <= uVar10 && uVar10 - uVar12 != 0) break;
          if ((uVar12 > uVar10) &&
             (*(double *)(lVar8 + (long)(param_2 + uVar7 * 2)[-1] * 8) <
              *(double *)(lVar8 + (long)param_2[uVar7 * 2] * 8))) {
            uVar10 = uVar10 + 1;
          }
          param_2[uVar7 - 1] = param_2[uVar10 - 1];
          uVar7 = uVar10;
        }
        lVar8 = *param_4;
        while (1 < uVar7) {
          if (*(double *)(lVar8 + (long)iVar2 * 8) <=
              *(double *)(lVar8 + (long)param_2[(uVar7 >> 1) - 1] * 8)) break;
          param_2[uVar7 - 1] = param_2[(uVar7 >> 1) - 1];
          uVar7 = uVar7 >> 1;
        }
        param_2[uVar7 - 1] = iVar2;
      } while( true );
    }
    uVar3 = param_3 - 1 >> 1;
    piVar4 = param_2 + ((ulong)param_3 - 1);
    iVar2 = param_2[uVar3];
    param_2[uVar3] = *piVar4;
    *piVar4 = iVar2;
    lVar8 = *param_4;
    piVar5 = param_2;
    for (piVar9 = param_2; piVar9 < piVar4; piVar9 = piVar9 + 1) {
      iVar1 = *piVar9;
      piVar6 = piVar5;
      if (*(double *)(lVar8 + (long)iVar1 * 8) < *(double *)(lVar8 + (long)iVar2 * 8)) {
        *piVar9 = *piVar5;
        piVar6 = piVar5 + 1;
        *piVar5 = iVar1;
      }
      piVar5 = piVar6;
    }
    param_1 = param_1 + -1;
    iVar2 = *piVar5;
    *piVar5 = *piVar4;
    *piVar4 = iVar2;
    uVar12 = (ulong)((long)piVar5 - (long)param_2) >> 2;
    FUN_1081f8540(param_1,param_2,uVar12,param_4);
    iVar2 = (int)uVar12 + 1;
    param_2 = param_2 + iVar2;
    param_3 = param_3 - iVar2;
  } while( true );
}



/* Entry: 1081f8784; end: 1081f8833;  */

void FUN_1081f8784(ulong param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  if (0x7ffffffe < param_1) {
    param_1 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_1 << 1 | 1;
  return;
}



/* Entry: 1081f8834; end: 1081f89cb;  */

undefined4 FUN_1081f8834(double *param_1,double *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  pdVar6 = param_2 + 1;
  uVar2 = 2;
  if (param_2[(ulong)(param_2[2] < *param_2) * 2] <= param_2[4]) {
    uVar2 = (ulong)(param_2[2] < *param_2);
  }
  uVar3 = 2;
  if (param_2[(ulong)(param_2[3] < *pdVar6) * 2 + 1] <= param_2[5]) {
    uVar3 = (ulong)(param_2[3] < *pdVar6);
  }
  pdVar5 = param_1;
  pdVar11 = pdVar6;
  for (; lVar10 != 3; lVar10 = lVar10 + 1) {
    FUN_1081e006c(pdVar11[-1],param_2[uVar2 * 2]);
    uVar4 = 1 << (ulong)((uint)lVar10 & 0x1f);
    uVar1 = uVar4;
    if ((int)pdVar5 == 0) {
      uVar1 = 0;
    }
    uVar9 = uVar1 | uVar9;
    FUN_1081e006c(*pdVar11,pdVar6[uVar3 * 2]);
    if ((int)pdVar5 == 0) {
      uVar4 = 0;
    }
    uVar8 = uVar4 | uVar8;
    pdVar11 = pdVar11 + 2;
  }
  if ((((uVar9 ^ 0xffffffff) & 5) == 0) && ((uVar8 & 5) == 5)) {
    dVar12 = *param_2;
    param_1[3] = param_2[1];
    param_1[2] = dVar12;
    dVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = dVar12;
    uVar7 = 1;
  }
  else {
    if ((uVar9 == 7) ||
       ((uVar8 == 7 || (pdVar6 = param_2, FUN_1081f0ebc(param_2,0,2), (int)pdVar6 != 0)))) {
      dVar12 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = dVar12;
      dVar12 = param_2[4];
      param_1[3] = param_2[5];
      param_1[2] = dVar12;
      FUN_1081de864(param_1,param_1 + 2);
      uVar7 = 1;
      if ((int)param_1 == 0) {
        uVar7 = 2;
      }
      return uVar7;
    }
    dVar13 = param_2[1];
    dVar12 = *param_2;
    dVar14 = param_2[2];
    dVar16 = param_2[5];
    dVar15 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = dVar14;
    param_1[5] = dVar16;
    param_1[4] = dVar15;
    param_1[1] = dVar13;
    *param_1 = dVar12;
    uVar7 = 3;
  }
  return uVar7;
}



/* Entry: 1081f89cc; end: 1081f8c47;  */

undefined4 FUN_1081f89cc(double *param_1,double *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double in_d4;
  double in_d5;
  double dVar17;
  double dVar18;
  
  uVar8 = 0;
  uVar10 = 0;
  pdVar5 = param_2 + 3;
  for (lVar11 = -3; dVar12 = param_2[uVar10 * 2], lVar11 != 0; lVar11 = lVar11 + 1) {
    uVar6 = (int)lVar11 + 4;
    uVar9 = uVar6;
    if (dVar12 <= pdVar5[-1]) {
      uVar9 = (uint)uVar10;
    }
    uVar10 = (ulong)uVar9;
    if (param_2[uVar8 * 2 + 1] <= *pdVar5) {
      uVar6 = (uint)uVar8;
    }
    uVar8 = (ulong)uVar6;
    pdVar5 = pdVar5 + 2;
  }
  lVar11 = 0;
  uVar9 = 0;
  uVar6 = 0;
  dVar14 = ABS(param_2[uVar8 * 2 + 1]);
  if (dVar14 <= ABS(dVar12)) {
    dVar14 = ABS(dVar12);
  }
  pdVar5 = param_2 + 1;
  for (; lVar11 != 4; lVar11 = lVar11 + 1) {
    dVar17 = ABS(pdVar5[-1]);
    dVar18 = ABS(*pdVar5);
    dVar13 = dVar14;
    if (dVar14 <= dVar18) {
      dVar13 = dVar18;
    }
    if (dVar13 <= dVar17) {
      dVar13 = dVar17;
    }
    dVar17 = 1.0 / dVar13;
    uVar2 = 1 << (ulong)((uint)lVar11 & 0x1f);
    uVar1 = uVar2;
    if (5.9604644775390625e-08 <= ABS(pdVar5[-1] * dVar17 - dVar12 * dVar17)) {
      uVar1 = 0;
    }
    in_d5 = param_2[uVar8 * 2 + 1] * dVar17;
    in_d4 = ABS(*pdVar5 * dVar17 - in_d5);
    if (5.9604644775390625e-08 <= in_d4) {
      uVar2 = 0;
    }
    uVar3 = 1 << (ulong)((uint)lVar11 & 0x1f);
    if (dVar13 == 0.0) {
      uVar2 = uVar3;
      uVar1 = uVar3;
    }
    uVar6 = uVar2 | uVar6;
    uVar9 = uVar1 | uVar9;
    pdVar5 = pdVar5 + 2;
  }
  if (uVar9 == 0xf) {
    if (uVar6 == 0xf) {
      dVar12 = *param_2;
      param_1[3] = param_2[1];
      param_1[2] = dVar12;
      dVar12 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = dVar12;
      return 1;
    }
  }
  else if (uVar6 != 0xf) {
    pdVar5 = param_2;
    FUN_1081ee2c4(param_2,0,3);
    iVar4 = (int)pdVar5;
    if (iVar4 == 0) {
      if (param_3 == 1) {
        dVar14 = *param_2;
        dVar12 = param_2[2] - dVar14;
        dVar13 = param_2[4];
        dVar17 = param_2[6];
        FUN_1081f8e08();
        dVar14 = dVar14 + dVar12;
        if (1.1920928955078125e-07 <= ABS(dVar14 - dVar17)) {
          func_0x0001081ef8cc();
          if (iVar4 == 0) goto LAB_1081f8bfc;
        }
        else if (1.1920928955078125e-07 <= ABS((dVar14 - dVar17) - dVar13 * in_d4 * in_d5))
        goto LAB_1081f8bfc;
        dVar13 = param_2[1];
        dVar12 = param_2[3] - dVar13;
        dVar17 = param_2[5];
        dVar18 = param_2[7];
        FUN_1081f8e08();
        dVar13 = dVar13 + dVar12;
        if (1.1920928955078125e-07 <= ABS(dVar13 - dVar18)) {
          func_0x0001081ef8cc();
          if (iVar4 != 0) goto LAB_1081f8c2c;
        }
        else if (ABS((dVar13 - dVar18) - dVar17 * in_d4 * in_d5) < 1.1920928955078125e-07) {
LAB_1081f8c2c:
          dVar12 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = dVar12;
          param_1[2] = dVar14;
          param_1[3] = dVar13;
          dVar12 = param_2[6];
          param_1[5] = param_2[7];
          param_1[4] = dVar12;
          return 3;
        }
      }
LAB_1081f8bfc:
      dVar14 = param_2[1];
      dVar12 = *param_2;
      dVar17 = param_2[3];
      dVar13 = param_2[2];
      dVar18 = param_2[4];
      dVar16 = param_2[7];
      dVar15 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = dVar18;
      param_1[7] = dVar16;
      param_1[6] = dVar15;
      param_1[1] = dVar14;
      *param_1 = dVar12;
      param_1[3] = dVar17;
      param_1[2] = dVar13;
      return 4;
    }
  }
  dVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = dVar12;
  dVar12 = param_2[6];
  param_1[3] = param_2[7];
  param_1[2] = dVar12;
  FUN_1081de864(param_1,param_1 + 2);
  uVar7 = 1;
  if ((int)param_1 == 0) {
    uVar7 = 2;
  }
  return uVar7;
}



/* Entry: 1081f8c48; end: 1081f8dbf;  */

uint FUN_1081f8c48(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  double adStack_90 [8];
  undefined1 auStack_50 [48];
  
  iVar1 = (int)adStack_90;
  FUN_1081ddb24(auStack_50,param_1);
  FUN_1081f8834(adStack_90,auStack_50);
  if (iVar1 == 2) {
    for (lVar2 = 0; lVar2 != 2; lVar2 = lVar2 + 1) {
      *(ulong *)(param_2 + lVar2 * 8) =
           CONCAT44((float)adStack_90[lVar2 * 2 + 1],(float)adStack_90[lVar2 * 2]);
    }
  }
  return (uint)(1 << (ulong)(iVar1 - 1U & 0x1f)) >> 1;
}



/* Entry: 1081f8dc0; end: 1081f8e07;  */

undefined4 FUN_1081f8dc0(long param_1)

{
  undefined4 uVar1;
  
  FUN_1081de864(param_1,param_1 + 0x10);
  uVar1 = 1;
  if ((int)param_1 == 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1081f8e08; end: 1081f8e23;  */

double FUN_1081f8e08(double param_1)

{
  return param_1 * 3.0 * 0.5;
}



/* Entry: 1081f8e24; end: 1081f968f;  */

int * FUN_1081f8e24(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  undefined1 in_ZR;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar15;
  long extraout_x8_02;
  int *extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong *unaff_x19;
  uint *unaff_x20;
  undefined4 uVar16;
  long lVar17;
  int *unaff_x28;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  uint auStack_1530 [2];
  ulong uStack_1528;
  undefined8 auStack_1520 [3];
  undefined1 auStack_1508 [8];
  ulong uStack_1500;
  uint uStack_14f8;
  int iStack_14f4;
  undefined4 uStack_14f0;
  undefined4 uStack_14ec;
  ulong uStack_14e8;
  undefined4 uStack_14e0;
  undefined4 uStack_14dc;
  undefined4 uStack_14d8;
  undefined4 uStack_14d4;
  undefined1 auStack_14d0 [4];
  undefined8 uStack_14cc;
  undefined8 uStack_14c4;
  undefined4 uStack_14bc;
  int *apiStack_14b8 [7];
  undefined1 uStack_1480;
  ulong uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined4 uStack_1450;
  undefined1 uStack_1124;
  undefined1 uStack_1123;
  long lStack_1118;
  ulong uStack_1110;
  ulong uStack_1108;
  uint auStack_1100 [1024];
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int *piStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001081faac4();
  iVar7 = (int)*param_1;
  uStack_88 = extraout_x8;
  func_0x0001081fa978();
  _setjmp();
  if (iVar7 == 0) {
    func_0x000109b646e4(*unaff_x19,0,0,0,0);
    uVar9 = unaff_x19[2];
    func_0x0001081faa90();
    (*extraout_x8_00)();
    in_ZR = uVar9 == 8;
    if (7 < uVar9) {
      unaff_x20 = auStack_1100;
      func_0x000109b632b4(*unaff_x19,unaff_x19[1],unaff_x20,8);
      do {
        uVar9 = unaff_x19[2];
        func_0x0001081faa90();
        (*extraout_x8_01)();
        in_ZR = uVar9 == 8;
        if (uVar9 < 8) break;
        uVar4 = (auStack_1100[0] & 0xff00ff00) >> 8 | (auStack_1100[0] & 0xff00ff) << 8;
        uVar9 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
        puVar10 = unaff_x20;
        FUN_1081f9690(unaff_x20,&UNK_10f432bf6);
        if ((int)puVar10 != 0) {
          func_0x000109b62ed4(*unaff_x19,unaff_x19[1],&uStack_14ec,&uStack_14f0,&iStack_14f4,
                              &uStack_14f8,0,0);
          if ((iStack_14f4 == 0x10) && ((uStack_14f8 & 0xfffffffb) == 0)) {
            func_0x0001081faa24();
            func_0x000109b659f4();
          }
          in_ZR = uStack_14f8 == 4;
          piVar11 = (int *)0x1;
          uVar16 = 1;
          switch(uStack_14f8) {
          case 0:
            in_ZR = iStack_14f4 == 7;
            if (iStack_14f4 < 8) {
              func_0x0001081faa24();
              func_0x000109b65a8c();
            }
            uVar16 = 0;
            if (*unaff_x19 == 0) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)0x0;
              if (unaff_x19[1] != 0) {
                if ((*(byte *)(unaff_x19[1] + 8) >> 4 & 1) != 0) {
                  func_0x000109b65abc();
                  uVar16 = 1;
                  goto code_r0x0001081f90a8;
                }
                piVar11 = (int *)0x0;
                uVar16 = 0;
              }
            }
            break;
          default:
            uVar16 = 6;
            piVar11 = (int *)0x1;
            break;
          case 2:
            piVar11 = (int *)0x0;
            uVar16 = 5;
            if ((*unaff_x19 != 0) && (unaff_x19[1] != 0)) {
              if ((*(byte *)(unaff_x19[1] + 8) >> 4 & 1) == 0) {
                piVar11 = (int *)0x0;
              }
              else {
                func_0x000109b65abc();
                uVar16 = 6;
code_r0x0001081f90a8:
                piVar11 = (int *)0x2;
              }
            }
            break;
          case 3:
            in_ZR = iStack_14f4 == 7;
            if (iStack_14f4 < 8) {
              func_0x0001081faa24();
              func_0x000109b6fbe0();
            }
            piVar11 = (int *)0x0;
            uVar16 = 4;
            if ((*unaff_x19 != 0) && (unaff_x19[1] != 0)) {
              piVar11 = (int *)(ulong)(*(uint *)(unaff_x19[1] + 8) >> 4 & 1);
            }
            break;
          case 4:
            break;
          }
          iVar7 = (int)*unaff_x19;
          func_0x000109b6fc08();
          if (unaff_x19[4] == 0) goto LAB_1081f95f0;
          uVar15 = *unaff_x19;
          uVar1 = unaff_x19[1];
          uVar12 = uVar15;
          func_0x000109b62e84(uVar15,uVar1,&uStack_1108,&lStack_1118,auStack_1520,&uStack_1110);
          if ((int)uVar12 == 0x1000) {
            FUN_108346318(&uStack_14e8,auStack_1520[0],uStack_1110 & 0xffffffff);
            uStack_100 = uStack_14e8;
            uStack_14e8 = 0;
            FUN_10821d0e0(&uStack_1500,&uStack_100);
            func_0x0001078bddf8(&uStack_100);
            func_0x0001078bddf8(&uStack_14e8);
            goto LAB_1081f929c;
          }
          unaff_x28 = (int *)&UNK_10df09000;
          if ((uVar15 == 0) || (uVar1 == 0)) {
            func_0x0001081faa9c(&UNK_10df2c588);
LAB_1081f920c:
            uVar19 = 0x3d9e83913d558919;
            uVar18 = 0x3f72a76e4019999a;
            uVar20 = 0x3d25aee6;
          }
          else {
            if ((*(byte *)(uVar1 + 9) >> 3 & 1) != 0) {
              uStack_1500 = 0;
              goto LAB_1081f929c;
            }
            func_0x0001081faa9c(&UNK_10df2c588);
            uVar3 = *(ushort *)(uVar1 + 0x7e);
            if ((uVar3 >> 1 & 1) != 0) {
              iVar8 = (int)&uStack_14e8;
              FUN_108409bbc((float)*(int *)(uVar1 + 0x38) * 1e-05,
                            (float)*(int *)(uVar1 + 0x3c) * 1e-05,
                            (float)*(int *)(uVar1 + 0x40) * 1e-05,
                            (float)*(int *)(uVar1 + 0x44) * 1e-05,
                            (float)*(int *)(uVar1 + 0x48) * 1e-05,
                            (float)*(int *)(uVar1 + 0x4c) * 1e-05,
                            (float)*(int *)(uVar1 + 0x50) * 1e-05,
                            (float)*(int *)(uVar1 + 0x54) * 1e-05);
              if (iVar8 != 0) {
                uStack_f8 = CONCAT44(uStack_14dc,uStack_14e0);
                uStack_f0 = CONCAT44(uStack_14d4,uStack_14d8);
                uStack_100 = uStack_14e8;
                uStack_e8 = _auStack_14d0;
                uStack_e0 = uStack_14cc._4_4_;
              }
              uVar3 = *(ushort *)(uVar1 + 0x7e);
            }
            if ((uVar3 & 1) == 0) goto LAB_1081f920c;
            uVar18 = CONCAT44(0x3f800000,1.0 / ((float)*(int *)(uVar1 + 0x34) * 1e-05));
            uVar19 = 0;
            uVar20 = 0;
          }
          _bzero(&uStack_14e8,0x3d0);
          uStack_14dc = 0x52474220;
          uStack_14d8 = 0x58595a20;
          uStack_1124 = 1;
          for (lVar17 = 0; lVar17 != 0x60; lVar17 = lVar17 + 0x20) {
            *(undefined4 *)(auStack_14d0 + lVar17) = 0;
            *(undefined8 *)((long)&uStack_14c4 + lVar17) = uVar19;
            *(undefined8 *)(auStack_14d0 + lVar17 + 4) = uVar18;
            *(undefined4 *)((long)apiStack_14b8 + lVar17 + -4) = uVar20;
            *(undefined8 *)((long)apiStack_14b8 + lVar17) = 0;
          }
          uStack_1123 = 1;
          uStack_1468 = uStack_f8;
          uStack_1470 = uStack_100;
          uStack_1458 = uStack_e8;
          uStack_1460 = uStack_f0;
          uStack_1450 = uStack_e0;
          FUN_10821d1ac(&uStack_1500,&uStack_14e8);
LAB_1081f929c:
          uVar15 = uStack_1500;
          FUN_1081fad94(uStack_1500,uVar16);
          if ((uVar15 & 1) == 0) {
            FUN_10814caf0(&uStack_1500,0);
          }
          uStack_1528 = uStack_1500;
          uVar20 = uVar16;
          if (uStack_14f8 == 2) {
            if ((((*unaff_x19 != 0) && (uVar15 = unaff_x19[1], uVar15 != 0)) &&
                ((*(byte *)(uVar15 + 8) >> 1 & 1) != 0)) &&
               ((*(char *)(uVar15 + 0xb0) == '\x05' && (*(char *)(uVar15 + 0xb1) == '\x06')))) {
              bVar6 = *(char *)(uVar15 + 0xb2) == '\x05';
              uVar20 = 3;
              goto LAB_1081f933c;
            }
          }
          else if (((uStack_14f8 == 4) && (*unaff_x19 != 0)) &&
                  ((uVar15 = unaff_x19[1], uVar15 != 0 &&
                   (((*(byte *)(uVar15 + 8) >> 1 & 1) != 0 && (*(char *)(uVar15 + 0xb4) == '\b')))))
                  ) {
            bVar6 = *(char *)(uVar15 + 0xb3) == '\x01';
            uVar20 = 2;
LAB_1081f933c:
            if (!bVar6) {
              uVar20 = uVar16;
            }
          }
          uStack_1500 = 0;
          FUN_10814ca50(auStack_1520,uStack_14ec,uStack_14f0,uVar20,piVar11,iStack_14f4,&uStack_1528
                       );
          FUN_10814cacc(&uStack_1528);
          if (iVar7 == 1) {
            puVar13 = (undefined8 *)0x568;
            __Znwm();
            uVar15 = unaff_x19[2];
            uVar1 = unaff_x19[3];
            do {
              func_0x0001081fa9bc();
            } while (extraout_w10 != 0);
            lVar17 = *(long *)(unaff_x19[3] + 0x88);
            func_0x0001081faab0();
            cVar2 = *(char *)(extraout_x8_02 + 0x80);
            in_ZR = cVar2 == '\x01';
            if ((bool)in_ZR) {
              func_0x0001081fa9d8();
              unaff_x28 = (int *)0x0;
              if (*(long *)(extraout_x8_02 + 0x78) != 0) {
                do {
                  func_0x0001081fa9bc();
                  unaff_x28 = extraout_x8_03;
                } while (extraout_w10_00 != 0);
              }
              uStack_98 = 1;
              piStack_a0 = unaff_x28;
            }
            auStack_1530[0] = 0;
            auStack_1530[1] = 0;
            uStack_14e8 = uStack_14e8 & 0xffffffffffffff00;
            uStack_1480 = 0;
            lStack_1118 = lVar17;
            uStack_1110 = uVar1;
            uStack_1108 = uVar15;
            if (cVar2 != '\0') {
              func_0x0001081fa9f4();
              if (unaff_x28 != (int *)0x0) {
                do {
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
                  if (bVar6) {
                    *unaff_x28 = *unaff_x28 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              uStack_1480 = 1;
              apiStack_14b8[6] = unaff_x28;
            }
            func_0x0001081faa08();
            FUN_1081f9968();
            func_0x0001081faa4c();
            if (lStack_1118 != 0) {
              func_0x0001081fa95c();
            }
            func_0x0001081faa78();
            if (uStack_1108 != 0) {
              func_0x0001081fa95c();
            }
            *puVar13 = &PTR_DAT_110a2faa0;
            *(undefined4 *)(puVar13 + 0xa8) = 0;
            puVar13[0xa9] = 0;
            puVar13[0xab] = 0;
            puVar13[0xaa] = 0;
          }
          else {
            puVar13 = (undefined8 *)0x578;
            __Znwm();
            uVar15 = unaff_x19[2];
            uVar1 = unaff_x19[3];
            do {
              func_0x0001081fa9bc();
            } while (extraout_w10_01 != 0);
            lVar17 = *(long *)(unaff_x19[3] + 0x88);
            func_0x0001081faab0();
            cVar2 = *(char *)(extraout_x8_04 + 0x80);
            in_ZR = cVar2 == '\x01';
            if ((bool)in_ZR) {
              func_0x0001081fa9d8();
              piVar11 = *(int **)(extraout_x8_04 + 0x78);
              if (piVar11 != (int *)0x0) {
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar6) {
                    *piVar11 = *piVar11 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uStack_98 = 1;
              piStack_a0 = piVar11;
            }
            auStack_1530[0] = 0;
            auStack_1530[1] = 0;
            uStack_14e8 = uStack_14e8 & 0xffffffffffffff00;
            uStack_1480 = 0;
            lStack_1118 = lVar17;
            uStack_1110 = uVar1;
            uStack_1108 = uVar15;
            if (cVar2 != '\0') {
              func_0x0001081fa9f4();
              if (piVar11 != (int *)0x0) {
                do {
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar6) {
                    *piVar11 = *piVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              uStack_1480 = 1;
              apiStack_14b8[6] = piVar11;
            }
            func_0x0001081faa08();
            FUN_1081f9968();
            func_0x0001081faa4c();
            if (lStack_1118 != 0) {
              func_0x0001081fa95c();
            }
            func_0x0001081faa78();
            if (uStack_1108 != 0) {
              func_0x0001081fa95c();
            }
            *(undefined8 *)((long)puVar13 + 0x544) = 0;
            *puVar13 = &PTR_FUN_110a2fbd8;
            *(int *)(puVar13 + 0xa8) = iVar7;
            *(undefined4 *)(puVar13 + 0xac) = 0;
            *(undefined1 *)((long)puVar13 + 0x564) = 0;
            puVar13[0xae] = 0;
            puVar13[0xad] = 0;
          }
          unaff_x20 = auStack_1530;
          *(undefined8 **)unaff_x19[4] = puVar13;
          func_0x0001081fa3d8(&uStack_100);
          FUN_1081fa914(unaff_x20);
          *(ulong *)(*(long *)unaff_x19[4] + 0x4b8) = uVar9;
          FUN_10814cacc(auStack_1508);
          FUN_10814cacc(&uStack_1500);
LAB_1081f95f0:
          *unaff_x19 = 0;
          unaff_x19[1] = 0;
          piVar11 = (int *)0x1;
          goto LAB_1081f8f34;
        }
        func_0x000109b632b4(*unaff_x19,unaff_x19[1],unaff_x20,8);
        uVar15 = *unaff_x19;
        FUN_1081f96a4(uVar15,unaff_x19[1],unaff_x19[2],unaff_x20,uVar9 + 4);
      } while ((uVar15 & 1) != 0);
    }
  }
  piVar11 = (int *)0x0;
LAB_1081f8f34:
  func_0x0001081faad8(uStack_88);
  if ((bool)in_ZR) {
    return piVar11;
  }
  ___stack_chk_fail();
  func_0x0001081faa4c();
  if (lStack_1118 != 0) {
    func_0x0001081fa95c();
  }
  func_0x0001081faa78();
  if (uStack_1108 != 0) {
    func_0x0001081fa95c();
  }
  func_0x0001081fa3d8(&uStack_100);
  FUN_1081fa914(auStack_1530);
  __ZdlPv(unaff_x20);
  FUN_10814cacc(auStack_1508);
  puVar14 = &uStack_1500;
  FUN_10814cacc();
  func_0x0001081fa9d0();
  __Unwind_Resume();
  return (int *)(ulong)(*(int *)((long)puVar14 + 4) == *piVar11);
}



/* Entry: 1081f9690; end: 1081f96a3;  */

bool FUN_1081f9690(long param_1,int *param_2)

{
  return *(int *)(param_1 + 4) == *param_2;
}



/* Entry: 1081f96a4; end: 1081f972b;  */

bool FUN_1081f96a4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  do {
    plVar3 = param_5;
    if (plVar3 == (long *)0x0) break;
    plVar1 = plVar3;
    if ((long *)0xfff < plVar3) {
      plVar1 = (long *)0x1000;
    }
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x10))(param_3,param_4,plVar1);
    func_0x000109b632b4(param_1,param_2,param_4,plVar2);
    param_5 = (long *)((long)plVar3 - (long)plVar1);
  } while (plVar1 <= plVar2);
  return plVar3 == (long *)0x0;
}



/* Entry: 1081f972c; end: 1081f98a7;  */

void FUN_1081f972c(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x19;
  undefined1 uStack_1078;
  undefined1 uStack_1077;
  undefined1 uStack_1076;
  undefined1 uStack_1075;
  undefined4 uStack_1074;
  uint auStack_1070 [1024];
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001081faac4();
  iVar4 = (int)*(undefined8 *)(param_1 + 0x4a8);
  uStack_70 = extraout_x8;
  func_0x0001081fa978();
  _setjmp();
  if (iVar4 == 1) {
    lVar8 = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = iVar4 == 2;
    if (!(bool)uVar3) {
      do {
        uVar3 = *(char *)(unaff_x19 + 0x4c0) == '\x01';
        if ((bool)uVar3) {
          uVar5 = *(ulong *)(unaff_x19 + 0x30);
          func_0x0001081faa90();
          (*extraout_x8_00)();
          uVar3 = uVar5 == 8;
          if (uVar5 < 8) break;
          func_0x000109b632b4(*(undefined8 *)(unaff_x19 + 0x4a8),*(undefined8 *)(unaff_x19 + 0x4b0),
                              auStack_1070,8);
          puVar6 = auStack_1070;
          FUN_1081f9690(auStack_1070,&UNK_10f432bfb);
          iVar4 = (int)puVar6;
          uVar2 = (auStack_1070[0] & 0xff00ff00) >> 8 | (auStack_1070[0] & 0xff00ff) << 8;
          uVar5 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        }
        else {
          uVar5 = *(ulong *)(unaff_x19 + 0x4b8);
          _uStack_1078 = CONCAT44(0x54414449,
                                  CONCAT13((char)uVar5,
                                           CONCAT12((char)(uVar5 >> 8),
                                                    CONCAT11((char)(uVar5 >> 0x10),
                                                             (char)(uVar5 >> 0x18)))));
          func_0x000109b632b4(*(undefined8 *)(unaff_x19 + 0x4a8),*(undefined8 *)(unaff_x19 + 0x4b0),
                              &uStack_1078,8);
          *(undefined1 *)(unaff_x19 + 0x4c0) = 1;
          iVar4 = 0;
        }
        uVar7 = *(undefined8 *)(unaff_x19 + 0x4a8);
        FUN_1081f96a4(uVar7,*(undefined8 *)(unaff_x19 + 0x4b0),*(undefined8 *)(unaff_x19 + 0x30),
                      auStack_1070,uVar5 + 4);
        if (((int)uVar7 == 0) || (iVar4 != 0)) break;
      } while( true );
    }
    lVar8 = 1;
  }
  func_0x0001081faad8(uStack_70);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  if (((*(long *)(lVar8 + 0x4a8) == 0) || (lVar8 = *(long *)(lVar8 + 0x4b0), lVar8 == 0)) ||
     ((*(byte *)(lVar8 + 8) >> 3 & 1) == 0)) {
    uVar3 = 0;
    *(undefined1 *)extraout_x8_01 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar8 + 0x20);
    *extraout_x8_01 = *(undefined8 *)(lVar8 + 0x18);
    extraout_x8_01[1] = (ulong)uVar1;
    uVar3 = 1;
  }
  *(undefined1 *)(extraout_x8_01 + 2) = uVar3;
  return;
}



/* Entry: 1081f98a8; end: 1081f98e3;  */

void FUN_1081f98a8(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  long lVar3;
  
  if (((*(long *)(param_2 + 0x4a8) == 0) || (lVar3 = *(long *)(param_2 + 0x4b0), lVar3 == 0)) ||
     ((*(byte *)(lVar3 + 8) >> 3 & 1) == 0)) {
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar1 = *(ushort *)(lVar3 + 0x20);
    *param_1 = *(undefined8 *)(lVar3 + 0x18);
    param_1[1] = (ulong)uVar1;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}



/* Entry: 1081f98e4; end: 1081f9943;  */

void FUN_1081f98e4(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iStack_2c;
  undefined8 uStack_28;
  
  iStack_2c = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x4a8);
  func_0x000109b62f6c(uVar2,*(undefined8 *)(param_2 + 0x4b0),&uStack_28,&iStack_2c,0);
  bVar1 = (int)uVar2 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *param_1 = uStack_28;
    param_1[1] = (long)iStack_2c;
  }
  *(bool *)(param_1 + 2) = !bVar1;
  return;
}



/* Entry: 1081f9944; end: 1081f9967;  */

bool FUN_1081f9944(undefined8 param_1,undefined8 param_2)

{
  func_0x000109b5ec6c(param_1,0,param_2);
  return (int)param_1 == 0;
}



/* Entry: 1081f9968; end: 1081f9a2b;  */

undefined8 *
FUN_1081f9968(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lStack_48;
  
  lStack_48 = *param_3;
  *param_3 = 0;
  FUN_1081fadd0(param_1,param_2,&lStack_48,1);
  if (lStack_48 != 0) {
    FUN_1081fa95c();
  }
  *param_1 = &PTR_DAT_110a2f968;
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[0x94] = uVar1;
  param_1[0x95] = param_5;
  param_1[0x96] = param_6;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  uVar1 = *param_7;
  *param_7 = 0;
  param_1[0x99] = uVar1;
  FUN_1081fa7cc(param_1 + 0x9a,param_8);
  return param_1;
}



/* Entry: 1081f9a2c; end: 1081f9aa3;  */

undefined8 * FUN_1081f9a2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2f968;
  func_0x0001081f9a74();
  func_0x0001081fa3d8(param_1 + 0x9a);
  func_0x00010814cb84(param_1 + 0x99);
  FUN_1081fa914(param_1 + 0x94);
  *param_1 = &PTR_DAT_110a2fd70;
  FUN_1081526b4(param_1 + 0x90);
  FUN_1081fb644(param_1 + 0x8e);
  func_0x00010815277c(param_1 + 0x8c);
  func_0x0001081a64b8(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 1081f9aa4; end: 1081f9aff;  */

void FUN_1081f9aa4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x4a8);
  func_0x0001081fa978();
  _setjmp();
  if (iVar1 == 0) {
    func_0x000109b64cc8(*(undefined8 *)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x4b0));
    FUN_1081faea0(param_1,param_2,param_3,*(undefined4 *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 1081f9b00; end: 1081f9b5b;  */

bool FUN_1081f9b00(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001081f9a74();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1081f9b5c(uVar1,param_1 + 0x4a0,0,&uStack_28,&uStack_30);
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x4a8) = uStack_28;
    *(undefined8 *)(param_1 + 0x4b0) = uStack_30;
    *(undefined1 *)(param_1 + 0x4c0) = 0;
  }
  return (int)uVar1 == 0;
}



/* Entry: 1081f9b5c; end: 1081f9cd7;  */

undefined8
FUN_1081f9b5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined *puVar7;
  
  puVar5 = &UNK_10f47cea1;
  func_0x000109b6473c(&UNK_10f47cea1,0,FUN_1081fa830,0x1081f8e20);
  if (puVar5 == (undefined *)0x0) {
    uVar8 = 8;
  }
  else {
    *(uint *)(puVar5 + 0x380) = *(uint *)(puVar5 + 0x380) | 0xc;
    lStack_50 = *param_2;
    if (lStack_50 != 0) {
      piVar1 = (int *)(lStack_50 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_60 = (undefined *)0x0;
    puStack_68 = puVar5;
    uStack_58 = param_1;
    uStack_48 = param_3;
    func_0x0001081faa80();
    puVar6 = puVar5;
    func_0x000109b5f0b4();
    if (puVar6 == (undefined *)0x0) {
      uVar8 = 8;
    }
    else {
      puVar7 = puVar5;
      puStack_60 = puVar6;
      func_0x000109b62cf4(puVar5,PTR__longjmp_11034c548,0xc0);
      iVar4 = (int)puVar7;
      _setjmp();
      if (iVar4 == 0) {
        if (*param_2 != 0) {
          func_0x000109b6f818(puVar5,3,"",0);
          lVar10 = *param_2;
          *(undefined8 *)(puVar5 + 0x3b0) = 0x1081fa844;
          *(long *)(puVar5 + 0x3a8) = lVar10;
        }
        uVar9 = 0;
        FUN_1081f8e24();
        if ((uVar9 & 1) == 0) {
          uVar8 = 1;
        }
        else {
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar5;
          }
          uVar8 = 0;
          if (param_5 != (undefined8 *)0x0) {
            *param_5 = puVar6;
          }
        }
      }
      else {
        uVar8 = 6;
      }
    }
    FUN_1081fa874(&puStack_68);
  }
  return uVar8;
}



/* Entry: 1081f9cd8; end: 1081f9deb;  */

void FUN_1081f9cd8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_1081f9aa4(param_1,param_2,param_5);
  if (((int)plVar1 == 0) && (*(long *)(param_5 + 8) == 0)) {
    if (*(int *)((long)param_1 + 0x454) == 2) {
      *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(param_1[0x8b] + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001081f9d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,param_4,param_6);
    return;
  }
  return;
}



/* Entry: 1081f9dec; end: 1081f9e0f;  */

void FUN_1081f9dec(long *param_1)

{
  if (*(int *)((long)param_1 + 0x454) == 2) {
    *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(param_1[0x8b] + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0001081f9e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}



/* Entry: 1081f9e10; end: 1081f9ef7;  */

void FUN_1081f9e10(undefined8 *param_1,long *param_2,int *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    *param_3 = 6;
    *param_1 = 0;
  }
  else {
    uStack_48 = 0;
    puVar4 = (undefined8 *)0x90;
    __Znwm();
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_110a2fd10;
    if (param_4 != 0) {
      piVar1 = (int *)(param_4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *param_2;
    }
    puVar4[2] = param_4;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)(puVar4 + 0x10) = 0;
    puVar4[0x11] = 0;
    puStack_50 = puVar4;
    FUN_1081f9b5c(lVar5,&puStack_50,&uStack_48,0,0);
    *param_3 = (int)lVar5;
    if ((int)lVar5 == 0) {
      *param_2 = 0;
    }
    *param_1 = uStack_48;
    func_0x0001081faa80();
  }
  return;
}



/* Entry: 1081f9ef8; end: 1081fa08f;  */

long * FUN_1081f9ef8(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  int iStack_3c;
  long lStack_38;
  
  if (*(long **)(param_1 + 0x4c8) == (long *)0x0) {
    return (long *)0x0;
  }
  (**(code **)(**(long **)(param_1 + 0x4c8) + 0x68))(&lStack_38);
  if (lStack_38 != 0) {
    uVar2 = *(undefined8 *)(lStack_38 + 0x18);
    FUN_1081f9944(uVar2,*(undefined8 *)(lStack_38 + 0x20));
    if ((int)uVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
      (**(code **)(*plVar3 + 0x70))();
      plStack_50 = plVar3;
      FUN_1081f9e10(&plStack_48,&plStack_50,&iStack_3c,*(undefined8 *)(param_1 + 0x4a0));
      if (plStack_50 != (long *)0x0) {
        FUN_1081fa95c();
      }
      if (iStack_3c == 0) {
        plVar3 = plStack_48;
        (**(code **)(*plStack_48 + 0x20))(plStack_48,param_2);
        uVar1 = (uint)plVar3 ^ 1;
        if (param_3 == (long *)0x0) {
          uVar1 = 1;
        }
        if ((uVar1 & 1) == 0) {
          if ((*(long *)(param_2 + 0x60) != 0) && (plStack_48[4] != 0)) {
            func_0x000108343e58(&lStack_58);
            if (lStack_58 != 0) {
              FUN_1081fa8f8((long *)(param_2 + 0x60));
            }
            func_0x0001081fa908(0);
          }
          plVar4 = (long *)*param_3;
          *param_3 = (long)plStack_48;
          plVar3 = (long *)0x1;
          plStack_48 = plVar4;
          goto joined_r0x0001081fa008;
        }
      }
      else {
        plVar3 = (long *)0x0;
joined_r0x0001081fa008:
        if (plStack_48 == (long *)0x0) goto LAB_1081fa01c;
      }
      (**(code **)(*plStack_48 + 8))(plStack_48);
      goto LAB_1081fa01c;
    }
  }
  plVar3 = (long *)0x0;
LAB_1081fa01c:
  func_0x0001078bddf8(&lStack_38);
  return plVar3;
}



/* Entry: 1081fa090; end: 1081fa093;  */

bool FUN_1081fa090(undefined8 param_1,undefined8 param_2)

{
  func_0x000109b5ec6c(param_1,0,param_2);
  return (int)param_1 == 0;
}



/* Entry: 1081fa094; end: 1081fa0df;  */

char FUN_1081fa094(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x538);
  if ((param_2 != 0) && (cVar1 != '\0')) {
    _memcpy(param_2,param_1 + 0x4d0,0x60);
    func_0x0001081fa8b4(param_2 + 0x60,param_1 + 0x530);
  }
  return cVar1;
}



/* Entry: 1081fa0e0; end: 1081fa153;  */

void FUN_1081fa0e0(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plStack_30;
  undefined1 auStack_24 [4];
  
  plStack_30 = (long *)*param_2;
  puVar1 = auStack_24;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  *param_2 = 0;
  FUN_1081f9e10(param_1,&plStack_30,puVar1,param_4);
  if (plStack_30 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001081fa134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_30 + 8))();
    return;
  }
  return;
}



/* Entry: 1081fa154; end: 1081fa167;  */

undefined8 FUN_1081fa154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1081fa168; end: 1081fa17b;  */

void FUN_1081fa168(void)

{
  FUN_1081f9a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fa17c; end: 1081fa263;  */

undefined4 FUN_1081fa17c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  int unaff_w23;
  
  func_0x0001081faa34();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x4a8);
  func_0x0001081fa9a0();
  *(undefined8 *)(unaff_x20 + 0x548) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x550) = unaff_x21;
  *(undefined4 *)(unaff_x20 + 0x540) = 0;
  *(undefined4 *)(unaff_x20 + 0x558) = 0;
  *(int *)(unaff_x20 + 0x55c) = unaff_w23 + -1;
  func_0x0001081faa88();
  if ((iVar1 == 0) || (*(int *)(unaff_x20 + 0x540) != unaff_w23)) {
    if (unaff_x19 != (undefined4 *)0x0) {
      *unaff_x19 = *(undefined4 *)(unaff_x20 + 0x540);
    }
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1081fa264; end: 1081fa407;  */

undefined4 FUN_1081fa264(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(long *)(param_1 + 0x458) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x458) + 8);
    iVar1 = (*(int *)(param_1 + 0x55c) - *(int *)(param_1 + 0x558)) + 1;
    if (iVar1 < iVar2) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar1 / iVar2;
      }
    }
    *(int *)(param_1 + 0x560) = iVar4;
  }
  lVar3 = param_1;
  func_0x0001081faa88();
  if (((int)lVar3 == 0) || (*(int *)(param_1 + 0x540) != *(int *)(param_1 + 0x560))) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x540);
    }
    uVar5 = 1;
    if ((int)lVar3 == 0) {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 1081fa408; end: 1081fa40b;  */

undefined8 * FUN_1081fa408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2fbd8;
  func_0x00010815277c(param_1 + 0xae);
  *param_1 = &PTR_DAT_110a2f968;
  func_0x0001081f9a74();
  func_0x0001081fa3d8(param_1 + 0x9a);
  func_0x00010814cb84(param_1 + 0x99);
  FUN_1081fa914(param_1 + 0x94);
  *param_1 = &PTR_DAT_110a2fd70;
  FUN_1081526b4(param_1 + 0x90);
  FUN_1081fb644(param_1 + 0x8e);
  func_0x00010815277c(param_1 + 0x8c);
  func_0x0001081a64b8(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 1081fa40c; end: 1081fa41f;  */

void FUN_1081fa40c(void)

{
  FUN_1081fa64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fa420; end: 1081fa4db;  */

void FUN_1081fa420(int param_1)

{
  ulong uVar1;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w23;
  int iVar2;
  
  func_0x0001081faa34();
  func_0x0001081fa680();
  if (param_1 == 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x4a8);
    func_0x0001081fa9a0();
    *(undefined4 *)(unaff_x20 + 0x544) = 0;
    *(int *)(unaff_x20 + 0x548) = unaff_w23 + -1;
    *(undefined4 *)(unaff_x20 + 0x560) = 0;
    func_0x0001081faa88();
    for (iVar2 = 0; iVar2 < *(int *)(unaff_x20 + 0x560); iVar2 = iVar2 + 1) {
      func_0x0001081fb56c();
    }
    if ((((uVar1 & 1) == 0) || ((*(byte *)(unaff_x20 + 0x564) & 1) == 0)) &&
       (unaff_x19 != (int *)0x0)) {
      *unaff_x19 = *(int *)(unaff_x20 + 0x560);
    }
  }
  return;
}



/* Entry: 1081fa4dc; end: 1081fa54b;  */

long FUN_1081fa4dc(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001081fa680(param_1,(param_3 - param_2) + 1);
  if ((int)lVar1 == 0) {
    func_0x0001081fa9a0(*(undefined8 *)(param_1 + 0x4a8),param_1);
    *(int *)(param_1 + 0x544) = param_2;
    *(int *)(param_1 + 0x548) = param_3;
    *(undefined8 *)(param_1 + 0x550) = param_4;
    *(undefined8 *)(param_1 + 0x558) = param_5;
    *(undefined4 *)(param_1 + 0x560) = 0;
  }
  return lVar1;
}



/* Entry: 1081fa54c; end: 1081fa64b;  */

undefined4 FUN_1081fa54c(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  lVar3 = param_1;
  FUN_1081f972c();
  if (*(int *)(param_1 + 0x560) == 0) {
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (*(long *)(param_1 + 0x458) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 0x458) + 8);
    }
    uVar7 = 0;
    iVar1 = (*(int *)(param_1 + 0x548) - *(int *)(param_1 + 0x544)) + 1;
    uVar8 = 0;
    if (iVar4 != 0) {
      uVar8 = iVar1 / iVar4;
    }
    uVar2 = 1;
    if (iVar4 <= iVar1) {
      uVar2 = uVar8;
    }
    lVar6 = *(long *)(param_1 + 0x550);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    for (lVar9 = (long)(iVar4 / 2);
        (uVar8 = uVar2, uVar2 != uVar7 && (uVar8 = uVar7, lVar9 < *(int *)(param_1 + 0x560)));
        lVar9 = lVar9 + iVar4) {
      func_0x0001081fb56c(param_1,lVar6,
                          *(long *)(param_1 + 0x570) + *(long *)(param_1 + 0x568) * lVar9);
      lVar6 = lVar6 + *(long *)(param_1 + 0x558);
      uVar7 = uVar7 + 1;
    }
    if (((int)lVar3 != 0) && ((*(byte *)(param_1 + 0x564) & 1) != 0)) {
      return 0;
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar8;
    }
  }
  uVar5 = 1;
  if ((int)lVar3 == 0) {
    uVar5 = 2;
  }
  return uVar5;
}



/* Entry: 1081fa64c; end: 1081fa6ef;  */

undefined8 * FUN_1081fa64c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2fbd8;
  func_0x00010815277c(param_1 + 0xae);
  *param_1 = &PTR_DAT_110a2f968;
  func_0x0001081f9a74();
  func_0x0001081fa3d8(param_1 + 0x9a);
  func_0x00010814cb84(param_1 + 0x99);
  FUN_1081fa914(param_1 + 0x94);
  *param_1 = &PTR_DAT_110a2fd70;
  FUN_1081526b4(param_1 + 0x90);
  FUN_1081fb644(param_1 + 0x8e);
  func_0x00010815277c(param_1 + 0x8c);
  func_0x0001081a64b8(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 1081fa6f0; end: 1081fa7cb;  */

void FUN_1081fa6f0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x100);
  }
  if (param_3 < *(int *)(lVar1 + 0x544)) {
    return;
  }
  if (*(int *)(lVar1 + 0x548) < param_3) {
    return;
  }
  if ((*(byte *)(lVar1 + 0x564) & 1) == 0) {
    func_0x000109b646d0(*(undefined8 *)(lVar1 + 0x4a8),
                        *(long *)(lVar1 + 0x570) +
                        *(long *)(lVar1 + 0x568) * (long)(param_3 - *(int *)(lVar1 + 0x544)),param_2
                       );
    if (param_4 != 0) {
      if (*(int *)(lVar1 + 0x540) + -1 != param_4) {
        return;
      }
      if (param_3 != *(int *)(lVar1 + 0x548)) {
        return;
      }
      *(undefined1 *)(lVar1 + 0x564) = 1;
      if (param_3 == *(int *)(lVar1 + 0xc) + -1) {
        if (*(long *)(lVar1 + 0x458) == 0) {
          return;
        }
        if (*(int *)(*(long *)(lVar1 + 0x458) + 8) == 1) {
          return;
        }
      }
      func_0x0001081fa9ac(*(undefined8 *)(lVar1 + 0x4a8));
      _longjmp();
    }
    *(int *)(lVar1 + 0x560) = *(int *)(lVar1 + 0x560) + 1;
    return;
  }
  return;
}



/* Entry: 1081fa7cc; end: 1081fa82f;  */

undefined1 * FUN_1081fa7cc(undefined1 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  *param_1 = 0;
  param_1[0x68] = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    _memcpy(param_1,param_2,0x60);
    piVar3 = *(int **)(param_2 + 0x60);
    if (piVar3 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int **)(param_1 + 0x60) = piVar3;
    param_1[0x68] = 1;
  }
  return param_1;
}



/* Entry: 1081fa830; end: 1081fa873;  */

undefined4 FUN_1081fa830(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  func_0x0001081fa9ac();
  _longjmp();
  plVar2 = *(long **)(param_1 + 0x3a8);
  (**(code **)(*plVar2 + 0x18))();
  uVar1 = 0xffffffff;
  if ((int)plVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1081fa874; end: 1081fa8f7;  */

long * FUN_1081fa874(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)0x0;
    if (param_1[1] != 0) {
      plVar1 = param_1 + 1;
    }
    func_0x0001081faa6c(param_1,plVar1);
  }
  FUN_1081fa914(param_1 + 3);
  return param_1;
}



/* Entry: 1081fa8f8; end: 1081fa913;  */

void FUN_1081fa8f8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
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



/* Entry: 1081fa914; end: 1081fa95b;  */

long * FUN_1081fa914(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
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
      func_0x0001081faa90();
      (*extraout_x8)();
    }
  }
  return param_1;
}



/* Entry: 1081fa95c; end: 1081faaff;  */

void FUN_1081fa95c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081fa964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1081fab00; end: 1081facbb;  */

void FUN_1081fab00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [2];
  int *piStack_50;
  undefined1 auStack_48 [8];
  int *piStack_40;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((((plVar6 == (long *)0x0) ||
       ((**(code **)(*plVar6 + 0x18))(plVar6,param_2,param_3,param_4), (int)plVar6 != 0)) &&
      (param_3 != 0)) && (param_4 != 0)) {
    iVar5 = 0xf47f44b;
    _strcmp(&UNK_10f47f44b,param_2);
    if (iVar5 == 0) {
      FUN_10839ff44(auStack_48,param_3,param_4,0);
      if (piStack_40 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_40,0x10);
          if (bVar2) {
            *piStack_40 = *piStack_40 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      piStack_50 = piStack_40;
      auVar8 = NEON_fmov(0x3f800000,4);
      uStack_b8 = auVar8._8_8_;
      lStack_c0 = auVar8._0_8_;
      uStack_a8 = 0x3f80000040000000;
      uStack_b0 = 0x4000000040000000;
      uStack_88 = 0x3f80000000000000;
      uStack_90 = 0;
      uStack_78 = 0x3f80000000000000;
      uStack_80 = 0;
      uStack_70 = 0x400000003f800000;
      uStack_68 = 0;
      auStack_60[0] = 0;
      lStack_a0 = lStack_c0;
      uStack_98 = uStack_b8;
      FUN_10821dd80(piStack_40,&lStack_c0);
      if ((int)piStack_40 != 0) {
        if (*(char *)(param_1 + 0x80) == '\x01') {
          FUN_10810a400(param_1 + 0x78);
          *(undefined1 *)(param_1 + 0x80) = 0;
        }
        _memcpy(param_1 + 0x18,&lStack_c0,0x60);
        uVar4 = auStack_60[0];
        auStack_60[0] = 0;
        *(undefined8 *)(param_1 + 0x78) = uVar4;
        *(undefined1 *)(param_1 + 0x80) = 1;
      }
      FUN_10810a400(auStack_60);
      func_0x0001078bddf8(&piStack_50);
      func_0x00010814375c(auStack_48);
    }
    else {
      iVar5 = 0xf47f450;
      _strcmp(&UNK_10f47f450,param_2);
      if (iVar5 == 0) {
        FUN_1083a0024(&lStack_c0,param_3,param_4);
        lVar3 = lStack_c0;
        lStack_c0 = 0;
        lVar7 = *(long *)(param_1 + 0x88);
        *(long *)(param_1 + 0x88) = lVar3;
        if (lVar7 != 0) {
          FUN_1081fad3c();
          lVar3 = lStack_c0;
          lStack_c0 = 0;
          if (lVar3 != 0) {
            FUN_1081fad3c();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1081facbc; end: 1081facbf;  */

undefined8 * FUN_1081facbc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110a2fd10;
  func_0x00010814cb84(param_1 + 0x11);
  func_0x0001081fa3d8(param_1 + 3);
  plVar5 = (long *)param_1[2];
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



/* Entry: 1081facc0; end: 1081facd3;  */

void FUN_1081facc0(void)

{
  FUN_1081facd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081facd4; end: 1081fad3b;  */

undefined8 * FUN_1081facd4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110a2fd10;
  func_0x00010814cb84(param_1 + 0x11);
  func_0x0001081fa3d8(param_1 + 3);
  plVar5 = (long *)param_1[2];
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



/* Entry: 1081fad3c; end: 1081fad47;  */

void FUN_1081fad3c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081fad44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1081fad48; end: 1081fad93;  */

undefined8 * FUN_1081fad48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2fd70;
  FUN_1081526b4(param_1 + 0x90);
  FUN_1081fb644(param_1 + 0x8e);
  func_0x00010815277c(param_1 + 0x8c);
  func_0x0001081a64b8(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 1081fad94; end: 1081fadcf;  */

undefined8 FUN_1081fad94(long param_1,uint param_2)

{
  if ((param_1 != 0) &&
     ((*(int *)(param_1 + 0xc) == 0x434d594b ||
      (*(int *)(param_1 + 0xc) == 0x47524159 && 1 < param_2)))) {
    return 0;
  }
  return 1;
}



/* Entry: 1081fadd0; end: 1081fae97;  */

undefined8 * FUN_1081fadd0(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lStack_28;
  
  iVar3 = *(int *)(param_2 + 8);
  uVar2 = 2;
  if (iVar3 != 0) {
    uVar2 = 0xc;
  }
  uVar4 = 0x16;
  if (iVar3 != 5) {
    uVar4 = 0xc;
  }
  uVar1 = 0x18;
  if (iVar3 != 6) {
    uVar1 = uVar4;
  }
  lStack_28 = *param_3;
  if (*(char *)(param_2 + 0x10) == '\x10') {
    uVar2 = uVar1;
  }
  *param_3 = 0;
  FUN_10821b60c(param_1,param_2,uVar2,&lStack_28,param_4);
  if (lStack_28 != 0) {
    func_0x0001081fb6e0();
  }
  *param_1 = &PTR_DAT_110a2fd70;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x93) = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  return param_1;
}



/* Entry: 1081fae98; end: 1081fae9f;  */

undefined8 FUN_1081fae98(void)

{
  return 4;
}


