/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081e3c14; end: 1081e3c33;  */

void FUN_1081e3c14(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001081e3fa0(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1081e3c34; end: 1081e3c5b;  */

void FUN_1081e3c34(void)

{
  func_0x0001081e42dc();
  func_0x0001081e4378();
  FUN_1081edf18();
  return;
}



/* Entry: 1081e3c5c; end: 1081e3d47;  */

void FUN_1081e3c5c(double *param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  iVar5 = (int)param_1;
  pauVar7 = param_2;
  FUN_1081e3f68(iVar5,param_2,1);
  if (*param_1 == 0.0) {
    dVar14 = param_1[1];
    if (dVar14 == 0.0) {
      func_0x0001081e4308();
      FUN_1081e3f68();
      if (*param_1 != 0.0) {
        return;
      }
      dVar15 = param_1[1];
      uVar9 = SUB84(dVar15,0);
      uVar10 = (undefined4)((ulong)dVar15 >> 0x20);
      if (dVar15 == 0.0) {
        func_0x0001081e4308();
        pauVar1 = pauVar7 + 3;
        dVar14 = *(double *)*pauVar1;
        dVar15 = *(double *)(pauVar7[3] + 8);
        dVar16 = *(double *)*pauVar7;
        dVar11 = *(double *)(*pauVar7 + 8);
        auVar12 = NEON_ext(*pauVar7,*pauVar1,8,1);
        auVar13 = NEON_ext(*pauVar1,*pauVar7,8,1);
        ((double *)CONCAT44(uVar6,iVar5))[1] = auVar12._8_8_ - auVar13._8_8_;
        *(double *)CONCAT44(uVar6,iVar5) = auVar12._0_8_ - auVar13._0_8_;
        *(double *)(CONCAT44(uVar6,iVar5) + 0x10) = -dVar11 * dVar14 + dVar15 * dVar16;
        return;
      }
      lVar8 = 3;
    }
    else {
      lVar8 = 2;
      uVar9 = SUB84(dVar14,0);
      uVar10 = (undefined4)((ulong)dVar14 >> 0x20);
    }
    if (0.0 <= (double)CONCAT44(uVar10,uVar9)) {
      dVar15 = *(double *)(*param_2 + 8);
      dVar16 = *(double *)(param_2[lVar8] + 8);
      func_0x0001081f633c((float)dVar15,(float)dVar16);
      if (iVar5 == 0) {
        dVar16 = *(double *)(param_2[3] + 8);
        bVar2 = false;
        bVar3 = true;
        bVar4 = false;
        if (dVar14 != 0.0) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar15) && !NAN(dVar16)) {
            bVar2 = dVar15 < dVar16;
            bVar3 = dVar15 == dVar16;
            bVar4 = false;
          }
        }
        if (bVar3 || bVar2 != bVar4) {
          return;
        }
      }
      else if (dVar15 <= dVar16) {
        return;
      }
      *param_1 = 2.220446049250313e-16;
    }
  }
  return;
}



/* Entry: 1081e3d48; end: 1081e3d7b;  */

void FUN_1081e3d48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_30 = (double)(float)*param_3;
  dStack_28 = (double)(float)((ulong)*param_3 >> 0x20);
  dStack_20 = (double)(float)param_3[1];
  dStack_18 = (double)(float)((ulong)param_3[1] >> 0x20);
  func_0x0001081efcd4(param_2,&dStack_30);
  return;
}



/* Entry: 1081e3d7c; end: 1081e3dd7;  */

void FUN_1081e3d7c(void)

{
  func_0x0001081e42d0();
  func_0x0001081e4378();
  FUN_1081f1048();
  return;
}



/* Entry: 1081e3dd8; end: 1081e3e13;  */

void FUN_1081e3dd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_30 = (double)(float)*param_1;
  dStack_28 = (double)(float)((ulong)*param_1 >> 0x20);
  dStack_20 = (double)(float)param_1[1];
  dStack_18 = (double)(float)((ulong)param_1[1] >> 0x20);
  FUN_1081dff94(param_3,&dStack_30,param_2);
  return;
}



/* Entry: 1081e3e14; end: 1081e3e4b;  */

void FUN_1081e3e14(void)

{
  func_0x0001081e4314();
  func_0x0001081e42d0();
  FUN_1081e0c3c();
  return;
}



/* Entry: 1081e3e4c; end: 1081e3e93;  */

void FUN_1081e3e4c(void)

{
  func_0x0001081e4314();
  func_0x0001081e42c4();
  FUN_1081ddfb0();
  return;
}



/* Entry: 1081e3e94; end: 1081e3ecb;  */

void FUN_1081e3e94(void)

{
  func_0x0001081e4314();
  func_0x0001081e42dc();
  FUN_1081df0b8();
  return;
}



/* Entry: 1081e3ecc; end: 1081e3ee3;  */

undefined1  [16] FUN_1081e3ecc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(float)param_1[1] - (double)(float)*param_1;
  auVar1._8_8_ = (double)(float)((ulong)param_1[1] >> 0x20) -
                 (double)(float)((ulong)*param_1 >> 0x20);
  return auVar1;
}



/* Entry: 1081e3ee4; end: 1081e3f67;  */

void FUN_1081e3ee4(void)

{
  func_0x0001081e42d0();
  func_0x0001081e4378();
  FUN_1081f0fb8();
  return;
}



/* Entry: 1081e3f68; end: 1081e3fcf;  */

void FUN_1081e3f68(double *param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pauVar1 = param_2 + param_3;
  dVar2 = *(double *)*pauVar1;
  dVar3 = *(double *)(*pauVar1 + 8);
  dVar4 = *(double *)*param_2;
  dVar5 = *(double *)(*param_2 + 8);
  auVar6 = NEON_ext(*param_2,*pauVar1,8,1);
  auVar7 = NEON_ext(*pauVar1,*param_2,8,1);
  param_1[1] = auVar6._8_8_ - auVar7._8_8_;
  *param_1 = auVar6._0_8_ - auVar7._0_8_;
  param_1[2] = -dVar5 * dVar2 + dVar3 * dVar4;
  return;
}



/* Entry: 1081e3fd0; end: 1081e408f;  */

void FUN_1081e3fd0(int param_1,double *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  ulong uVar6;
  double dVar7;
  
  while( true ) {
    param_1 = param_1 + -1;
    iVar5 = (int)param_3;
    if (iVar5 < 0x21) break;
    if (param_1 == -1) {
      param_3 = param_3 & 0xffffffff;
      for (uVar6 = param_3 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        func_0x0001081e41b8(param_2,uVar6,param_3,param_4);
      }
      while (param_3 = param_3 - 1, param_3 != 0) {
        dVar7 = *param_2;
        *param_2 = param_2[param_3];
        param_2[param_3] = dVar7;
        func_0x0001081e4208(param_2,1,param_3,param_4);
      }
      return;
    }
    pdVar2 = param_2;
    FUN_1081e4160(param_2,param_3,param_2 + (iVar5 - 1U >> 1),param_4);
    uVar6 = (ulong)((long)pdVar2 - (long)param_2) >> 3;
    FUN_1081e3fd0(param_1,param_2,uVar6,param_4);
    iVar1 = (int)uVar6 + 1;
    param_2 = param_2 + iVar1;
    param_3 = (ulong)(uint)(iVar5 - iVar1);
  }
  pdVar2 = param_2;
  do {
    do {
      pdVar3 = pdVar2;
      pdVar2 = pdVar3 + 1;
      if (param_2 + (long)iVar5 + -1 < pdVar2) {
        return;
      }
      dVar7 = pdVar3[1];
    } while (*pdVar3 <= dVar7);
    do {
      pdVar4 = pdVar3;
      pdVar4[1] = *pdVar4;
      if (pdVar4 <= param_2) break;
      pdVar3 = pdVar4 + -1;
    } while (dVar7 < pdVar4[-1]);
    *pdVar4 = dVar7;
  } while( true );
}



/* Entry: 1081e4090; end: 1081e40e7;  */

void FUN_1081e4090(double *param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  
  pdVar1 = param_1;
  do {
    do {
      pdVar2 = pdVar1;
      pdVar1 = pdVar2 + 1;
      if (param_1 + (long)param_2 + -1 < pdVar1) {
        return;
      }
      dVar4 = pdVar2[1];
    } while (*pdVar2 <= dVar4);
    do {
      pdVar3 = pdVar2;
      pdVar3[1] = *pdVar3;
      if (pdVar3 <= param_1) break;
      pdVar2 = pdVar3 + -1;
    } while (dVar4 < pdVar3[-1]);
    *pdVar3 = dVar4;
  } while( true );
}



/* Entry: 1081e40e8; end: 1081e415f;  */

void FUN_1081e40e8(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x0001081e41b8(param_1,uVar1,param_2,param_3);
  }
  while (param_2 = param_2 - 1, param_2 != 0) {
    uVar2 = *param_1;
    *param_1 = param_1[param_2];
    param_1[param_2] = uVar2;
    func_0x0001081e4208(param_1,1,param_2,param_3);
  }
  return;
}



/* Entry: 1081e4160; end: 1081e43b7;  */

double * FUN_1081e4160(double *param_1,int param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  pdVar3 = param_1 + (long)param_2 + -1;
  dVar4 = *param_3;
  *param_3 = *pdVar3;
  *pdVar3 = dVar4;
  pdVar1 = param_1;
  for (; param_1 < pdVar3; param_1 = param_1 + 1) {
    dVar5 = *param_1;
    pdVar2 = pdVar1;
    if (dVar5 < dVar4) {
      *param_1 = *pdVar1;
      pdVar2 = pdVar1 + 1;
      *pdVar1 = dVar5;
    }
    pdVar1 = pdVar2;
  }
  dVar4 = *pdVar1;
  *pdVar1 = *pdVar3;
  *pdVar3 = dVar4;
  return pdVar1;
}



/* Entry: 1081e43b8; end: 1081e4447;  */

void FUN_1081e43b8(long *param_1)

{
  uint uVar1;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  FUN_108376ad8(auStack_30);
  uVar1 = *(uint *)(*param_1 + 0x30);
  if ((int)uVar1 < 1) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(*(long *)(*param_1 + 0x28) + (ulong)uVar1 * 8 + -8);
  }
  FUN_10817abbc(auStack_30,&uStack_38);
  FUN_108379448(auStack_30,param_1);
  FUN_108377ec8(auStack_30);
  FUN_108376b90(param_1,auStack_30);
  func_0x0001081e4e74();
  return;
}



/* Entry: 1081e4448; end: 1081e44e7;  */

void FUN_1081e4448(long param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 auStack_40 [2];
  
  if ((param_3 != 2) && (*(int *)(param_1 + 0x24) == 0)) {
    FUN_108376ad8(auStack_40);
    FUN_1081e44e8(param_1);
    FUN_108376b90();
    FUN_10837ca5c(auStack_40[0]);
    puVar1 = (undefined4 *)(param_1 + 0x10);
    FUN_1081e4500();
    *puVar1 = 2;
  }
  FUN_1081e44e8(param_1);
  FUN_108376b90();
  piVar2 = (int *)(param_1 + 0x10);
  FUN_1081e4500();
  *piVar2 = param_3;
  return;
}



/* Entry: 1081e44e8; end: 1081e44ff;  */

long * FUN_1081e44e8(long *param_1)

{
  long *plVar1;
  byte extraout_w8;
  
  func_0x0001081e4d00(param_1,1);
  plVar1 = param_1;
  FUN_10837e150();
  *param_1 = (long)plVar1;
  func_0x00010837cd40();
  *(undefined1 *)((long)param_1 + 0xc) = 2;
  *(undefined1 *)((long)param_1 + 0xd) = 2;
  *(byte *)((long)param_1 + 0xe) = extraout_w8 & 0xf8;
  return param_1;
}



/* Entry: 1081e4500; end: 1081e4573;  */

long FUN_1081e4500(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 4 + -4;
}



/* Entry: 1081e4574; end: 1081e4b3f;  */

byte FUN_1081e4574(ulong *param_1,ulong *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  byte bVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  bool bVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auStack_1320 [16];
  ulong *apuStack_1310 [2];
  undefined1 auStack_1300 [56];
  undefined8 uStack_12c8;
  undefined8 auStack_12a8 [2];
  undefined1 auStack_1298 [142];
  byte bStack_120a;
  undefined1 *puStack_1208;
  undefined8 uStack_1200;
  undefined1 *puStack_11f8;
  uint uStack_11f0;
  undefined2 uStack_11eb;
  undefined1 auStack_11e8 [248];
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10c8;
  long lStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  int iStack_10a4;
  undefined1 uStack_109c;
  undefined1 auStack_1090 [256];
  undefined1 auStack_f90 [3840];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108376b14(apuStack_1310);
  uVar12 = *(uint *)((long)param_1 + 0x24);
  uVar23 = (ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU));
  bVar22 = true;
  lVar19 = 2;
  for (uVar20 = 0; uVar20 != uVar23; uVar20 = uVar20 + 1) {
    if (((long)(int)param_1[1] <= (long)uVar20) ||
       ((long)*(int *)((long)param_1 + 0x24) <= (long)uVar20)) goto LAB_1081e4a98;
    if ((*(int *)(param_1[3] + uVar20 * 4) != 2) ||
       (lVar21 = *param_1 + uVar20 * 0x10, (*(byte *)(lVar21 + 0xe) >> 1 & 1) != 0))
    goto LAB_1081e4988;
    lVar8 = lVar21;
    FUN_108376fcc();
    lVar9 = lVar19;
    if ((int)lVar8 == 0) {
      func_0x0001083773e0(lVar21);
      uVar24 = 0;
      do {
        cVar5 = SBORROW8(uVar24,uVar20);
        cVar6 = (long)(uVar24 - uVar20) < 0;
        if (uVar24 == uVar20) goto LAB_1081e469c;
        func_0x0001081e4ea0();
        if (cVar6 == cVar5) goto LAB_1081e4a98;
        uVar25 = *param_1;
        func_0x0001083773e0();
        FUN_1081e4b40();
        uVar24 = uVar24 + 1;
      } while ((uVar25 & 1) == 0);
      bVar22 = false;
    }
    else {
      lVar9 = lVar21;
      FUN_108376fe8();
      iVar7 = (int)lVar9;
      if (iVar7 == 2) goto LAB_1081e4988;
      if (((int)lVar19 != 2) && (lVar9 = lVar19, (int)lVar19 != iVar7)) {
        FUN_1081e43b8(lVar21);
      }
    }
LAB_1081e469c:
    lVar19 = lVar9;
  }
  if (bVar22) {
    func_0x000108376ad8(auStack_1320);
    uVar20 = 0;
    while( true ) {
      cVar5 = SBORROW8(uVar20,uVar23);
      cVar6 = (long)(uVar20 - uVar23) < 0;
      if (uVar20 == uVar23) break;
      func_0x0001081e4ea0();
      if (cVar6 == cVar5) goto LAB_1081e4a98;
      puVar11 = (ulong *)(*param_1 + uVar20 * 0x10);
      puVar10 = puVar11;
      FUN_1081f1968();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x0001081e4e7c();
LAB_1081e4a3c:
        func_0x0001081e4e60();
        param_2 = puVar10;
        goto LAB_1081e4a48;
      }
      func_0x0001081e4ea0();
      if (cVar6 == cVar5) goto LAB_1081e4a98;
      puVar11 = (ulong *)(*param_1 + uVar20 * 0x10);
      if (*(int *)(*puVar11 + 0x48) != 0) {
        FUN_1081e4b70(2,auStack_1090,0x100);
        lVar21 = (long)*(int *)(*puVar11 + 0x48);
        puVar13 = auStack_f90;
        func_0x0001081e4ba0(puVar13,lVar21);
        FUN_108377860(puVar11,puVar13,lVar21);
        lVar19 = 1;
        do {
          cVar5 = SBORROW8(lVar19,lVar21);
          cVar6 = lVar19 - lVar21 < 0;
          if (lVar21 <= lVar19) {
            func_0x0001081e4e8c();
            puVar10 = puVar11;
            FUN_108376fe8();
            iVar7 = (int)puVar10;
            cVar5 = SBORROW4(iVar7,2);
            cVar6 = iVar7 + -2 < 0;
            if (iVar7 == 2) goto LAB_1081e47a4;
            if (iVar7 == 0) {
              FUN_1081e43b8(puVar11);
            }
            func_0x0001081e4e4c();
            goto LAB_1081e4964;
          }
          pcVar1 = puVar13 + lVar19;
          lVar19 = lVar19 + 1;
        } while (*pcVar1 != '\0');
        func_0x0001081e4e8c();
LAB_1081e47a4:
        func_0x0001081e4cd0(auStack_1090,0x1000);
        uStack_10f0 = 0;
        uStack_10e8 = 0;
        iStack_10a4 = 0;
        uStack_109c = 0;
        lStack_10c0 = 0;
        uStack_10c8 = 0;
        uStack_10b0 = 0;
        uStack_10b8 = 0;
        uStack_1200 = 0;
        uStack_11f0 = 0;
        uStack_11eb = 0x100;
        puVar10 = puVar11;
        puStack_1208 = auStack_90;
        puStack_11f8 = auStack_11e8;
        FUN_1081e4bd8(auStack_1298,puVar11,auStack_11e8,&puStack_1208);
        if ((bStack_120a & 1) == 0) {
          uVar24 = 0;
          FUN_1081e85a0();
          if ((uVar24 & 1) != 0) {
            if (iStack_10a4 != 0) {
              if (lStack_10c0 == 0) goto LAB_1081e4a28;
              puVar13 = auStack_11e8;
              do {
                if (*(int *)(puVar13 + 0x144) != 0) {
                  puVar15 = puVar13 + 8;
                  do {
                    puVar16 = *(undefined1 **)(puVar15 + 0xd8);
                    cVar5 = '\0';
                    cVar6 = (long)puVar16 < 0;
                    puVar2 = puVar13 + 8;
                    if (puVar16 != (undefined1 *)0x0) {
                      puVar2 = puVar16;
                    }
                    uVar17 = *(undefined8 *)(puVar15 + 0x98);
                    *(undefined1 **)(puVar15 + 0x98) = puVar2;
                    puVar3 = (undefined8 *)(puVar13 + 0x20);
                    if (puVar16 != (undefined1 *)0x0) {
                      puVar3 = (undefined8 *)(puVar16 + 0x18);
                    }
                    *puVar3 = uVar17;
                    puVar15 = puVar16;
                  } while (puVar16 != (undefined1 *)0x0);
                }
                puVar13 = *(undefined1 **)(puVar13 + 0x128);
              } while (puVar13 != (undefined1 *)0x0);
              puVar13 = auStack_11e8;
              do {
                if (*(int *)(puVar13 + 0x144) != 0) {
                  *(undefined4 *)(puVar13 + 0x140) = 0xffffffff;
                  puVar13[0x14e] = 0;
                }
                puVar13 = *(undefined1 **)(puVar13 + 0x128);
              } while (puVar13 != (undefined1 *)0x0);
              bVar22 = false;
              uStack_11eb = CONCAT11(3,(undefined1)uStack_11eb);
              while( true ) {
                puVar13 = auStack_11e8;
                func_0x0001081f7010();
                if (puVar13 == (undefined1 *)0x0) break;
                lVar19 = *(long *)(*(long *)(puVar13 + 0x28) + 0xd0);
                uVar12 = uStack_11f0 & 1;
                uVar14 = (uint)(*(int *)(lVar19 + 0x140) != 0);
                cVar5 = SBORROW4(uVar14,uVar12);
                cVar6 = (int)(uVar14 - uVar12) < 0;
                if (uVar14 != uVar12) {
                  bVar22 = true;
                  *(undefined1 *)(lVar19 + 0x14e) = 1;
                }
                lVar19 = lVar19 + 8;
                do {
                  FUN_1081eae3c(lVar19);
                  lVar19 = *(long *)(lVar19 + 0xd8);
                } while (lVar19 != 0);
                uStack_11f0 = 0;
              }
              if (bVar22) {
                func_0x000108376ad8(auStack_12a8);
                FUN_1081f7554(auStack_1300,auStack_12a8);
                puVar13 = auStack_11e8;
                do {
                  if (*(int *)(puVar13 + 0x144) != 0) {
                    uVar12 = (uint)(byte)puVar13[0x14e];
                    cVar5 = SBORROW4(uVar12,1);
                    cVar6 = (int)(uVar12 - 1) < 0;
                    if (uVar12 == 1) {
                      func_0x0001081e78cc(puVar13,auStack_1300);
                    }
                    else {
                      func_0x0001081e7878(puVar13,auStack_1300);
                    }
                  }
                  puVar13 = *(undefined1 **)(puVar13 + 0x128);
                } while (puVar13 != (undefined1 *)0x0);
                FUN_108376b90(puVar11,uStack_12c8);
                func_0x0001081e4e4c();
                func_0x0001081e4c6c(auStack_1300);
                FUN_10837ca5c(auStack_12a8[0]);
              }
              else {
                func_0x0001081e4e4c();
              }
            }
            func_0x0001081e4e98();
            FUN_10840f740(auStack_90);
LAB_1081e4964:
            func_0x0001081e4ea0();
            if (cVar6 != cVar5) {
              func_0x000108142250(auStack_1320,*param_1 + uVar20 * 0x10,0);
              goto LAB_1081e4980;
            }
            goto LAB_1081e4a98;
          }
        }
LAB_1081e4a28:
        func_0x0001081e4e98();
        FUN_10840f740(auStack_90);
        goto LAB_1081e4a3c;
      }
LAB_1081e4980:
      uVar20 = uVar20 + 1;
    }
    func_0x0001081e4e7c();
    uVar20 = 0;
    FUN_1081f1968();
    if ((uVar20 & 1) == 0) {
      func_0x0001081e4e60();
LAB_1081e4a48:
      bVar18 = 0;
      puVar11 = param_2;
    }
    else {
      bVar18 = 1;
      puVar11 = param_2;
    }
    func_0x0001081e4e74();
  }
  else {
LAB_1081e4988:
    if ((int)param_1[1] < 1) {
LAB_1081e4a98:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1081e4a9c);
      (*pcVar4)();
    }
    puVar11 = (ulong *)*param_1;
    FUN_108376b90(param_2);
    lVar19 = 1;
    lVar21 = 0x10;
    do {
      if ((int)uVar12 <= lVar19) {
        func_0x0001081e4e7c();
        bVar18 = 1;
        goto LAB_1081e4a50;
      }
      if (((int)param_1[1] <= lVar19) || (*(int *)((long)param_1 + 0x24) <= lVar19))
      goto LAB_1081e4a98;
      puVar11 = (ulong *)(*param_1 + lVar21);
      puVar10 = param_2;
      FUN_1081f0148(param_2,puVar11,*(undefined4 *)(param_1[3] + lVar19 * 4),param_2);
      lVar19 = lVar19 + 1;
      lVar21 = lVar21 + 0x10;
    } while (((ulong)puVar10 & 1) != 0);
    func_0x0001081e4e7c();
    func_0x0001081e4e60();
    bVar18 = 0;
  }
LAB_1081e4a50:
  FUN_10837ca5c(apuStack_1310[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar18;
  }
  ___stack_chk_fail();
  func_0x0001081e4e74();
  FUN_10837ca5c();
  func_0x0001081e4e84();
  uVar20 = *apuStack_1310[0];
  uVar23 = apuStack_1310[0][1];
  uVar24 = *puVar11;
  uVar25 = puVar11[1];
  uVar20 = uVar20 ^ (uVar20 ^ uVar24) &
                    CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar24 >> 0x20)),
                             -(uint)((float)uVar20 < (float)uVar24));
  uVar23 = uVar23 ^ (uVar23 ^ uVar25) &
                    CONCAT44(-(uint)((float)(uVar25 >> 0x20) < (float)(uVar23 >> 0x20)),
                             -(uint)((float)uVar25 < (float)uVar23));
  return -((float)uVar20 < (float)uVar23 && (float)(uVar20 >> 0x20) < (float)(uVar23 >> 0x20)) & 1;
}



/* Entry: 1081e4b40; end: 1081e4b6f;  */

byte FUN_1081e4b40(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar1 = uVar1 ^ (uVar1 ^ uVar3) &
                  CONCAT44(-(uint)((float)(uVar1 >> 0x20) < (float)(uVar3 >> 0x20)),
                           -(uint)((float)uVar1 < (float)uVar3));
  uVar2 = uVar2 ^ (uVar2 ^ uVar4) &
                  CONCAT44(-(uint)((float)(uVar4 >> 0x20) < (float)(uVar2 >> 0x20)),
                           -(uint)((float)uVar4 < (float)uVar2));
  return -((float)uVar1 < (float)uVar2 && (float)(uVar1 >> 0x20) < (float)(uVar2 >> 0x20)) & 1;
}



/* Entry: 1081e4b70; end: 1081e4bd7;  */

long FUN_1081e4b70(long param_1,undefined8 param_2)

{
  FUN_10840f6d0(param_1 + 0x100,param_1,0x100,param_2);
  return param_1;
}



/* Entry: 1081e4bd8; end: 1081e4c6b;  */

undefined8 *
FUN_1081e4bd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_4;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 8;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_3;
  *(undefined1 *)((long)param_1 + 0x8d) = 0;
  FUN_1081e82b4();
  return param_1;
}



/* Entry: 1081e4c6c; end: 1081e4d83;  */

undefined8 * FUN_1081e4c6c(undefined8 *param_1)

{
  FUN_10840f118(param_1 + 4);
  FUN_10818a480(param_1 + 2);
  FUN_10837ca5c(*param_1);
  return param_1;
}



/* Entry: 1081e4d84; end: 1081e4df7;  */

void FUN_1081e4d84(undefined8 *param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 1081e4df8; end: 1081e4e4b;  */

void FUN_1081e4df8(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1081e4e1c;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 0x10;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 1081e4e4c; end: 1081e4eab;  */

void FUN_1081e4e4c(void)

{
  byte unaff_w21;
  long unaff_x22;
  
  *(byte *)(unaff_x22 + 0xe) = *(byte *)(unaff_x22 + 0xe) & 0xfc | unaff_w21;
  return;
}



/* Entry: 1081e4eac; end: 1081e4f3b;  */

bool FUN_1081e4eac(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (((uVar2 != param_2) || (uVar3 = uVar1, func_0x0001081e7760(), (uVar3 & 1) == 0)) &&
     ((uVar1 != param_2 || (func_0x0001081e7760(), (uVar2 & 1) == 0)))) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    uVar1 = *(ulong *)(param_1 + 0x20);
    if ((uVar2 != param_2) || (uVar3 = uVar1, func_0x0001081e7760(), (uVar3 & 1) == 0)) {
      uVar3 = uVar2;
      if (uVar1 != param_2) {
        return false;
      }
      do {
        uVar3 = *(ulong *)(uVar3 + 0x18);
      } while (uVar3 != param_2 && uVar3 != uVar2);
      return uVar3 != uVar2;
    }
  }
  return true;
}



/* Entry: 1081e4f3c; end: 1081e501f;  */

void FUN_1081e4f3c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  lVar3 = *(long *)(lVar1 + 0x40);
  if (lVar3 == 0) {
    plVar2 = (long *)(*(long *)(lVar1 + 0x60) + 0x40);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x60);
  }
  lVar1 = *plVar2;
  if (*(long *)(param_1 + 8) != lVar1) {
    *(long *)(param_1 + 8) = lVar1;
    *(undefined1 *)(lVar1 + 0x22) = 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar3 = *(long *)(lVar1 + 0x40);
  if (lVar3 == 0) {
    plVar2 = (long *)(*(long *)(lVar1 + 0x60) + 0x40);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x60);
  }
  lVar1 = *plVar2;
  if (*(long *)(param_1 + 0x10) != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined1 *)(lVar1 + 0x22) = 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar3 = *(long *)(lVar1 + 0x40);
  if (lVar3 == 0) {
    plVar2 = (long *)(*(long *)(lVar1 + 0x60) + 0x40);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x60);
  }
  lVar1 = *plVar2;
  if (*(long *)(param_1 + 0x18) != lVar1) {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined1 *)(lVar1 + 0x22) = 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar3 = *(long *)(lVar1 + 0x40);
  if (lVar3 == 0) {
    plVar2 = (long *)(*(long *)(lVar1 + 0x60) + 0x40);
  }
  else {
    plVar2 = (long *)(lVar3 + 0x60);
  }
  lVar1 = *plVar2;
  if (*(long *)(param_1 + 0x20) != lVar1) {
    *(long *)(param_1 + 0x20) = lVar1;
    *(undefined1 *)(lVar1 + 0x22) = 1;
  }
  return;
}



/* Entry: 1081e5020; end: 1081e513b;  */

undefined8 FUN_1081e5020(long param_1)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  undefined8 uVar4;
  double *pdVar5;
  double dVar6;
  
  uVar4 = 0;
  pdVar5 = *(double **)(*(long *)(param_1 + 8) + 0x10);
  lVar1 = param_1;
  while (pdVar3 = (double *)pdVar5[8], lVar2 = lVar1, pdVar3 != (double *)0x0) {
    func_0x0001081e7784();
    func_0x0001081ec7f4();
    lVar2 = lVar1;
    if ((lVar1 == 0) || (func_0x0001081e7810((*pdVar3 + *pdVar5) * 0.5), (int)lVar2 == 0)) break;
    *(double **)(param_1 + 8) = pdVar3;
    uVar4 = 1;
    *(undefined1 *)((long)pdVar3 + 0x22) = 1;
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined1 *)(lVar1 + 0x22) = 1;
    lVar1 = lVar2;
    pdVar5 = (double *)pdVar3[2];
  }
  pdVar5 = *(double **)(param_1 + 0x10);
  while( true ) {
    dVar6 = *(double *)pdVar5[2];
    if (((dVar6 == 1.0) || (pdVar5 = (double *)((double *)pdVar5[2])[0xc], pdVar5 == (double *)0x0))
       || (((ulong)pdVar5[4] & 1) != 0)) {
      return uVar4;
    }
    func_0x0001081e7784();
    func_0x0001081ec7f4();
    if (lVar2 == 0) {
      return uVar4;
    }
    lVar1 = lVar2;
    func_0x0001081e7810((dVar6 + *pdVar5) * 0.5);
    if ((int)lVar1 == 0) break;
    *(double **)(param_1 + 0x10) = pdVar5;
    uVar4 = 1;
    *(undefined1 *)((long)pdVar5 + 0x22) = 1;
    *(long *)(param_1 + 0x20) = lVar2;
    *(undefined1 *)(lVar2 + 0x22) = 1;
    lVar2 = lVar1;
  }
  return uVar4;
}



/* Entry: 1081e513c; end: 1081e527f;  */

undefined8
FUN_1081e513c(long param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (**(double **)(param_1 + 8) <= *param_2) {
    pdVar1 = *(double **)(param_1 + 0x18);
    dVar3 = *pdVar1;
    if (dVar3 <= **(double **)(param_1 + 0x20)) {
      if (dVar3 <= *param_4) goto LAB_1081e5194;
    }
    else if (*param_4 <= dVar3) {
LAB_1081e5194:
      uVar2 = 0;
      goto LAB_1081e519c;
    }
  }
  *(double **)(param_1 + 8) = param_2;
  uVar2 = 1;
  *(undefined1 *)((long)param_2 + 0x22) = 1;
  *(double **)(param_1 + 0x18) = param_4;
  *(undefined1 *)((long)param_4 + 0x22) = 1;
  pdVar1 = param_4;
LAB_1081e519c:
  if (*param_3 <= **(double **)(param_1 + 0x10)) {
    dVar3 = **(double **)(param_1 + 0x20);
    if (*pdVar1 <= dVar3) {
      if (*param_5 <= dVar3) {
        return uVar2;
      }
    }
    else if (dVar3 <= *param_5) {
      return uVar2;
    }
  }
  *(double **)(param_1 + 0x10) = param_3;
  *(undefined1 *)((long)param_3 + 0x22) = 1;
  *(double **)(param_1 + 0x20) = param_5;
  *(undefined1 *)((long)param_5 + 0x22) = 1;
  return 1;
}



/* Entry: 1081e5280; end: 1081e5347;  */

void FUN_1081e5280(long param_1,undefined1 *param_2)

{
  double *pdVar1;
  undefined1 uVar2;
  double *pdVar3;
  undefined8 uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pdVar5 = *(double **)(*(long *)(param_1 + 0x10) + 0x10);
  pdVar3 = *(double **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x60);
  if (pdVar3 == pdVar5) {
LAB_1081e531c:
    uVar2 = 1;
LAB_1081e5328:
    *param_2 = uVar2;
  }
  else {
    dVar6 = **(double **)(param_1 + 0x18);
    dVar7 = **(double **)(param_1 + 0x20);
    uVar4 = *(undefined8 *)((long)(*(double **)(param_1 + 0x18))[2] + 0x28);
    dVar8 = dVar6;
    while (pdVar1 = pdVar3, func_0x0001081ec7f4(pdVar3,uVar4), pdVar1 != (double *)0x0) {
      if (dVar7 < dVar6 == dVar8 <= *pdVar1) {
LAB_1081e5324:
        uVar2 = 0;
        goto LAB_1081e5328;
      }
      if (pdVar3 == pdVar5) goto LAB_1081e531c;
      if (*pdVar3 == 1.0) goto LAB_1081e5324;
      pdVar3 = (double *)pdVar3[0xc];
      dVar8 = *pdVar1;
    }
  }
  return;
}



/* Entry: 1081e5348; end: 1081e5467;  */

undefined8
FUN_1081e5348(long *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  double *extraout_x9;
  long extraout_x10;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  long *plVar7;
  long unaff_x24;
  long unaff_x25;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  plVar7 = (long *)*param_1;
  if (plVar7 != (long *)0x0) {
    func_0x0001081e769c();
    pdVar3 = param_5;
    pdVar4 = param_4;
    pdVar5 = param_3;
    pdVar6 = param_2;
    if ((((ulong)param_1 & 1) == 0) &&
       (pdVar3 = param_3, pdVar4 = param_2, pdVar5 = param_5, pdVar6 = param_4,
       unaff_x25 = unaff_x24, *param_5 < *param_4)) {
      pdVar3 = param_2;
      pdVar4 = param_3;
      pdVar5 = param_4;
      pdVar6 = param_5;
    }
    dVar8 = *pdVar3;
    if (*pdVar4 <= *pdVar3) {
      dVar8 = *pdVar4;
    }
    do {
      func_0x0001081e7840();
      if ((extraout_x8 == extraout_x10) &&
         (unaff_x25 == *(long *)((long)((double *)plVar7[3])[2] + 0x28))) {
        dVar10 = *(double *)plVar7[4];
        dVar11 = *(double *)plVar7[3];
        dVar9 = dVar10;
        if (dVar11 <= dVar10) {
          dVar9 = dVar11;
        }
        if (dVar10 <= dVar11) {
          dVar10 = dVar11;
        }
        if ((*extraout_x9 <= *pdVar5) && (*pdVar6 <= *(double *)plVar7[2])) {
LAB_1081e5448:
          FUN_1081e513c(plVar7,pdVar6,pdVar5,pdVar4,pdVar3);
          return 1;
        }
        bVar1 = false;
        bVar2 = true;
        if (dVar9 <= dVar10) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(dVar8) && !NAN(dVar10)) {
            bVar1 = dVar8 == dVar10;
            bVar2 = dVar10 <= dVar8;
          }
        }
        if (!bVar2 || bVar1) goto LAB_1081e5448;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 0;
}



/* Entry: 1081e5468; end: 1081e547b;  */

uint FUN_1081e5468(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  iVar2 = *(int *)(lVar4 + 0x10c);
  iVar3 = *(int *)(lVar5 + 0x10c);
  if (iVar2 < iVar3) {
    uVar6 = 1;
  }
  else if (iVar3 < iVar2) {
    uVar6 = 0;
  }
  else {
    uVar6 = (iVar2 - (iVar2 + 1 >> 2)) * 2 + 2;
    lVar4 = *(long *)(lVar4 + 0xe8);
    uVar1 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    uVar8 = (ulong)uVar1;
    for (uVar7 = 0; uVar1 != (uint)uVar7; uVar7 = uVar7 + 1) {
      fVar9 = *(float *)(lVar4 + uVar7 * 4);
      fVar10 = *(float *)(*(long *)(lVar5 + 0xe8) + uVar7 * 4);
      if (fVar9 < fVar10) {
        lVar4 = 1;
        uVar8 = uVar7;
        break;
      }
      if (fVar9 != fVar10) {
        lVar4 = 0;
        uVar8 = uVar7;
        break;
      }
    }
    uVar6 = (uint)((int)uVar6 <= (int)uVar8) | (uint)lVar4;
  }
  return uVar6 & 1;
}



/* Entry: 1081e547c; end: 1081e5533;  */

void FUN_1081e547c(undefined8 *param_1,double *param_2,double *param_3,double *param_4,
                  double *param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  
  while (pdVar8 = param_2, pdVar6 = param_3, pdVar4 = param_5, param_2 = param_4, pdVar1 = pdVar8,
        FUN_1081e5468(pdVar8,param_2), ((ulong)pdVar1 & 1) == 0) {
    param_4 = pdVar8;
    param_5 = pdVar6;
    param_3 = pdVar4;
    if (*pdVar4 <= *param_2) {
      param_4 = pdVar6;
      param_5 = pdVar8;
      param_3 = param_2;
      param_2 = pdVar4;
    }
  }
  dVar9 = pdVar8[2];
  dVar7 = pdVar6[2];
  dVar3 = param_2[2];
  dVar5 = pdVar4[2];
  puVar2 = *(undefined8 **)param_1[2];
  FUN_1081e5534();
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar2 = *param_1;
  puVar2[1] = dVar9;
  *(undefined1 *)((long)dVar9 + 0x22) = 1;
  *(undefined1 *)((long)dVar3 + 0x22) = 1;
  puVar2[2] = dVar7;
  puVar2[3] = dVar3;
  *(undefined1 *)((long)dVar7 + 0x22) = 1;
  puVar2[4] = dVar5;
  *(undefined1 *)((long)dVar5 + 0x22) = 1;
  *param_1 = puVar2;
  return;
}



/* Entry: 1081e5534; end: 1081e553f;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */
/* WARNING: Removing unreachable block (ram,0x0001081865dc) */

long FUN_1081e5534(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = (ulong)(-(int)lVar1 & 7);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar1) < uVar2 + 0x28) {
    func_0x00010840f7d0();
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = (ulong)(-(int)lVar1 & 7);
  }
  return lVar1 + uVar2;
}



/* Entry: 1081e5540; end: 1081e579b;  */

void FUN_1081e5540(undefined8 param_1,double param_2,ulong *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  double *pdVar6;
  double dVar7;
  ulong *puVar8;
  double *pdVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dStack_2a0;
  undefined8 uStack_298;
  double adStack_290 [30];
  double adStack_1a0 [26];
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  byte bStack_ca;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  dVar10 = param_4[5];
  uVar15 = 100000;
  pdVar9 = param_5;
  do {
    do {
      do {
        do {
          pdVar9 = (double *)pdVar9[3];
          if ((pdVar9 == param_5) || (uVar15 < 2)) {
            return;
          }
          uVar15 = uVar15 - 1;
        } while (((double *)pdVar9[2] != pdVar9) ||
                ((((ulong)pdVar9[4] & 1) != 0 ||
                 (dVar13 = ((double *)pdVar9[2])[5], dVar13 == dVar10))));
        uVar5 = *param_3;
        func_0x0001081e7734();
      } while ((uVar5 & 1) != 0);
      uVar5 = param_3[1];
      func_0x0001081e7734();
    } while ((uVar5 & 1) != 0);
    dVar16 = *param_4;
    FUN_1081e579c(dVar10);
    dStack_c0 = (double)SUB84(param_4[1],0);
    dStack_b8 = (double)(float)((ulong)param_4[1] >> 0x20);
    param_2 = param_2 + dStack_c0;
    dStack_a8 = dStack_b8 - dVar16;
    uStack_cc = 0;
    dStack_b0 = param_2;
    _bzero(adStack_290,0x1c0);
    uStack_d0 = 0;
    bStack_ca = 0;
    (**(code **)(&UNK_110a2f508 + (ulong)*(uint *)((long)dVar13 + 0x10c) * 8))
              (*(undefined4 *)((long)dVar13 + 0x100),*(undefined8 *)((long)dVar13 + 0xe8),&dStack_c0
               ,adStack_290);
    lVar12 = 0;
    for (lVar11 = 0x1e; lVar11 - 0x1eU < (ulong)bStack_ca; lVar11 = lVar11 + 1) {
      param_2 = 1.0 - adStack_290[lVar11];
      if ((0.0 - adStack_290[lVar11]) * param_2 <= 0.0) {
        uStack_298 = *(undefined8 *)((long)adStack_290 + lVar12 + 8);
        dStack_2a0 = *(double *)((long)adStack_290 + lVar12);
        dStack_a0 = (double)SUB84(param_4[1],0);
        dStack_98 = (double)(float)((ulong)param_4[1] >> 0x20);
        pdVar6 = &dStack_2a0;
        FUN_1081de864(pdVar6,&dStack_a0);
        if ((((int)pdVar6 != 0) && (func_0x0001081e779c(), pdVar6 != pdVar9)) &&
           (FUN_1081ec564(pdVar6[2],param_4), ((ulong)pdVar6[4] & 1) == 0)) {
          dVar16 = param_4[5];
          dVar14 = *(double *)((long)pdVar6[2] + 0x28);
          dVar7 = dVar16;
          func_0x0001081e57c0(dVar16,dVar14);
          pdVar1 = pdVar9;
          pdVar2 = pdVar6;
          pdVar3 = param_5;
          pdVar4 = param_4;
          dVar13 = dVar14;
          if (SUB84(dVar7,0) == 0) {
            pdVar1 = param_5;
            pdVar2 = param_4;
            pdVar3 = pdVar9;
            pdVar4 = pdVar6;
            dVar13 = dVar16;
            dVar16 = dVar14;
          }
          dVar18 = *pdVar1;
          param_2 = *pdVar3;
          dVar17 = *pdVar4;
          dVar7 = dVar17;
          dVar14 = *pdVar2;
          if (param_2 < dVar17) {
            dVar7 = param_2;
            param_2 = dVar17;
            dVar14 = dVar18;
            dVar18 = *pdVar2;
          }
          puVar8 = param_3;
          FUN_1081e5850(dVar7,param_2,dVar14,dVar18,param_3,dVar16,dVar13,&dStack_a0);
          if ((int)puVar8 == 0) {
            return;
          }
        }
      }
      lVar12 = lVar12 + 0x10;
    }
  } while( true );
}



/* Entry: 1081e579c; end: 1081e584f;  */

void FUN_1081e579c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001081e57bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_110a2f530 + (ulong)*(uint *)(param_2 + 0x10c) * 8))
            (*(undefined4 *)(param_2 + 0x100),param_1,*(undefined8 *)(param_2 + 0xe8));
  return;
}



/* Entry: 1081e5850; end: 1081e5d63;  */

undefined8
FUN_1081e5850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong *param_5,double *param_6,double *param_7,undefined1 *param_8)

{
  double *pdVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  double *pdVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 in_stack_00000008;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x0001081e7710();
  in_stack_00000008 = 8;
  in_stack_00000010 = (ulong *)0x0;
  in_stack_00000018 = 0;
  uVar4 = param_5[1];
  if (uVar4 == 0) goto LAB_1081e5a20;
  FUN_1081e627c();
  if (((uVar4 & 1) != 0) &&
     ((pdVar5 = (double *)*param_5, pdVar5 == (double *)0x0 ||
      (FUN_1081e627c(param_1,param_2,param_3,param_4,pdVar5,param_6,param_7,&stack0x00000008),
      (int)pdVar5 != 0)))) {
    puVar2 = in_stack_00000010;
    uVar4 = (ulong)in_stack_00000018._4_4_;
    if (in_stack_00000018._4_4_ == 0) {
      pdVar11 = (double *)0x0;
    }
    else {
      if ((int)in_stack_00000018._4_4_ < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1081e5d18);
        (*pcVar3)();
      }
      pdVar11 = (double *)*in_stack_00000010;
    }
    for (uVar13 = 1; uVar13 < uVar4; uVar13 = uVar13 + 1) {
      uVar12 = puVar2[uVar13];
      pdVar10 = *(double **)(uVar12 + 8);
      if (*pdVar10 < *(double *)pdVar11[1]) {
        pdVar11[1] = (double)pdVar10;
        *(undefined1 *)((long)pdVar10 + 0x22) = 1;
      }
      pdVar10 = *(double **)(uVar12 + 0x10);
      if (*(double *)pdVar11[2] < *pdVar10) {
        pdVar11[2] = (double)pdVar10;
        *(undefined1 *)((long)pdVar10 + 0x22) = 1;
      }
      dVar17 = *(double *)pdVar11[3];
      dVar16 = *(double *)pdVar11[4];
      pdVar10 = *(double **)(uVar12 + 0x18);
      dVar18 = *pdVar10;
      if (dVar17 <= dVar16) {
        if (dVar18 < dVar17) goto LAB_1081e5978;
      }
      else if (dVar17 < dVar18) {
LAB_1081e5978:
        pdVar11[3] = (double)pdVar10;
        *(undefined1 *)((long)pdVar10 + 0x22) = 1;
        dVar17 = dVar18;
      }
      pdVar10 = *(double **)(uVar12 + 0x20);
      if (dVar17 <= dVar16) {
        if (dVar16 < *pdVar10) goto LAB_1081e59a8;
      }
      else if (*pdVar10 < dVar16) {
LAB_1081e59a8:
        pdVar11[4] = (double)pdVar10;
        *(undefined1 *)((long)pdVar10 + 0x22) = 1;
      }
      if ((*param_5 == 0) || (func_0x0001081e781c(), ((ulong)pdVar5 & 1) == 0)) {
        func_0x0001081e781c();
      }
    }
    func_0x0001081e786c();
    FUN_1081e9a80();
    pdVar10 = param_6;
    FUN_1081e9a80(param_2,param_6,param_7);
    if ((((pdVar11 == (double *)0x0) || (pdVar5 == (double *)0x0)) || (pdVar10 == (double *)0x0)) ||
       (pdVar6 = pdVar11, func_0x0001081e51fc(pdVar11,pdVar5,pdVar10), ((ulong)pdVar6 & 1) == 0)) {
      if ((pdVar5 == (double *)0x0) || (pdVar5 != pdVar10)) {
        pdVar6 = param_7;
        FUN_1081e9a80(param_3,param_7,param_6);
        pdVar7 = param_7;
        FUN_1081e9a80(param_4,param_7,param_6);
        pdVar15 = pdVar7;
        if (((pdVar11 != (double *)0x0) && ((pdVar6 != (double *)0x0 && (pdVar7 != (double *)0x0))))
           && (pdVar15 = pdVar11, func_0x0001081e51fc(pdVar11,pdVar6,pdVar7),
              ((ulong)pdVar15 & 1) != 0)) goto LAB_1081e5a70;
        if ((((pdVar5 == (double *)0x0) || (((ulong)pdVar5[4] & 1) == 0)) &&
            ((pdVar6 == (double *)0x0 || (((ulong)pdVar6[4] & 1) == 0)))) &&
           (((pdVar10 == (double *)0x0 || (((ulong)pdVar10[4] & 1) == 0)) &&
            ((pdVar7 == (double *)0x0 || (((ulong)pdVar7[4] & 1) == 0)))))) {
          if (pdVar5 == (double *)0x0) {
            func_0x0001081e786c();
            func_0x0001081e76f8();
          }
          else {
            pdVar15 = (double *)0x0;
          }
          if (pdVar10 == (double *)0x0) {
            pdVar8 = param_6;
            func_0x0001081e76f8(param_2);
          }
          else {
            pdVar8 = (double *)0x0;
          }
          if (((pdVar15 == (double *)0x0) || (pdVar15 != pdVar8)) &&
             ((pdVar8 == (double *)0x0 ||
              ((pdVar8 != pdVar5 && (func_0x0001081ec468(), ((ulong)pdVar8 & 1) == 0)))))) {
            if (pdVar6 == (double *)0x0) {
              pdVar8 = param_7;
              func_0x0001081e76f8(param_3);
              pdVar15 = pdVar8;
            }
            else {
              pdVar15 = (double *)0x0;
            }
            if (pdVar7 == (double *)0x0) {
              pdVar8 = param_7;
              func_0x0001081e76f8(param_4);
              pdVar9 = pdVar8;
            }
            else {
              pdVar9 = (double *)0x0;
            }
            if ((pdVar15 == (double *)0x0) || (pdVar15 != pdVar9)) {
              if (pdVar15 == (double *)0x0) {
LAB_1081e5b7c:
                if (pdVar9 == (double *)0x0) {
LAB_1081e5b9c:
                  if ((pdVar5 == (double *)0x0) || (pdVar6 == (double *)0x0)) {
                    if (pdVar5 == (double *)0x0) {
                      func_0x0001081e786c();
                      FUN_1081e9d48();
                      pdVar5 = pdVar8;
                    }
                    if (pdVar5 == pdVar10) goto LAB_1081e5a70;
                    pdVar8 = pdVar6;
                    if (pdVar6 == (double *)0x0) {
                      FUN_1081e9d48(param_3);
                      pdVar8 = param_7;
                    }
                    uVar14 = 0;
                    if ((pdVar5 == (double *)0x0) || (pdVar8 == (double *)0x0)) goto LAB_1081e5a74;
                    FUN_1081ec564(pdVar5[2],pdVar8[2]);
                    func_0x0001081ec41c();
                    if ((pdVar8 != (double *)0x0) &&
                       ((pdVar10 == (double *)0x0 || (((ulong)pdVar10[4] & 1) == 0)))) {
                      pdVar6 = pdVar8;
                      if (pdVar7 == (double *)0x0) goto LAB_1081e5bac;
                      if (((ulong)pdVar7[4] & 1) == 0) goto LAB_1081e5ba4;
                    }
                  }
                  else {
LAB_1081e5ba4:
                    if ((pdVar10 == (double *)0x0) || (pdVar7 == (double *)0x0)) {
LAB_1081e5bac:
                      if (pdVar10 == (double *)0x0) {
                        pdVar8 = param_6;
                        FUN_1081e9d48(param_2);
                        pdVar10 = pdVar8;
                      }
                      if (pdVar7 == (double *)0x0) {
                        func_0x0001081e779c();
                        pdVar7 = pdVar8;
                      }
                      dVar17 = pdVar10[2];
                      FUN_1081ec564(dVar17,pdVar7[2]);
                      if (((ulong)dVar17 & 1) == 0) goto LAB_1081e5a20;
                    }
                    if (((((((ulong)pdVar5[4] & 1) == 0) && (((ulong)pdVar6[4] & 1) == 0)) &&
                         (((ulong)pdVar10[4] & 1) == 0)) &&
                        ((((ulong)pdVar7[4] & 1) == 0 &&
                         (pdVar15 = pdVar5, func_0x0001081ec468(pdVar5,pdVar10),
                         ((ulong)pdVar15 & 1) == 0)))) &&
                       (pdVar15 = pdVar6, func_0x0001081ec468(pdVar6,pdVar7),
                       ((ulong)pdVar15 & 1) == 0)) {
                      if (pdVar11 == (double *)0x0) {
                        func_0x0001081e7858(param_5);
                        FUN_1081e547c();
LAB_1081e5d08:
                        uVar14 = 1;
                        *param_8 = 1;
                        goto LAB_1081e5a74;
                      }
                      if (*(double **)(*(long *)((long)pdVar11[1] + 0x10) + 0x28) == param_6) {
                        func_0x0001081e7858();
                        func_0x0001081e513c();
                        if (((ulong)pdVar11 & 1) != 0) goto LAB_1081e5d08;
                      }
                      else {
                        pdVar15 = pdVar6;
                        pdVar8 = pdVar5;
                        if (*pdVar7 < *pdVar6) {
                          pdVar15 = pdVar7;
                          pdVar8 = pdVar10;
                          pdVar10 = pdVar5;
                          pdVar7 = pdVar6;
                        }
                        func_0x0001081e513c(pdVar11,pdVar15,pdVar7,pdVar8,pdVar10);
                        if ((int)pdVar11 != 0) goto LAB_1081e5d08;
                      }
                      goto LAB_1081e5a70;
                    }
                  }
                }
                else if (pdVar9 != pdVar6) {
                  pdVar8 = pdVar6;
                  if (pdVar15 != (double *)0x0) {
                    pdVar8 = pdVar15;
                  }
                  func_0x0001081ec468(pdVar9,pdVar8);
                  pdVar8 = pdVar9;
                  if (((ulong)pdVar9 & 1) == 0) goto LAB_1081e5b9c;
                }
              }
              else if (pdVar15 != pdVar7) {
                pdVar1 = pdVar7;
                if (pdVar9 != (double *)0x0) {
                  pdVar1 = pdVar9;
                }
                pdVar8 = pdVar15;
                func_0x0001081ec468(pdVar15,pdVar1);
                if (((ulong)pdVar8 & 1) == 0) goto LAB_1081e5b7c;
              }
            }
          }
        }
      }
LAB_1081e5a20:
      uVar14 = 0;
      goto LAB_1081e5a74;
    }
  }
LAB_1081e5a70:
  uVar14 = 1;
LAB_1081e5a74:
  _free(in_stack_00000010);
  return uVar14;
}



/* Entry: 1081e5d64; end: 1081e5ddb;  */

void FUN_1081e5d64(int param_1,long param_2)

{
  double dVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)(param_2 + 0x10);
  if ((((*pdVar2 != 1.0) && (dVar1 = pdVar2[8], dVar1 != 0.0)) &&
      (((*(int *)((long)dVar1 + 0x70) == 0 && (*(int *)((long)dVar1 + 0x74) == 0)) ||
       (func_0x0001081e7804(), param_1 != 0)))) &&
     ((*(int *)(pdVar2 + 0xe) != 0 || (*(int *)((long)pdVar2 + 0x74) != 0)))) {
    func_0x0001081e7804();
  }
  return;
}



/* Entry: 1081e5ddc; end: 1081e5eeb;  */

void FUN_1081e5ddc(long *param_1)

{
  bool bVar1;
  long *plVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  double dVar6;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    *param_1 = 0;
    param_1[1] = (long)plVar5;
    plVar2 = param_1;
    do {
      pdVar3 = (double *)plVar5[1];
      pdVar4 = (double *)plVar5[3];
      bVar1 = false;
      if ((*(float *)(pdVar3 + 1) == *(float *)(pdVar4 + 1)) &&
         (bVar1 = false,
         !NAN(*(float *)((long)pdVar3 + 0xc)) && !NAN(*(float *)((long)pdVar4 + 0xc)))) {
        bVar1 = *(float *)((long)pdVar3 + 0xc) == *(float *)((long)pdVar4 + 0xc);
      }
      if (!bVar1) {
        if (*pdVar3 == 1.0) {
          return;
        }
        dVar6 = *pdVar4;
        if (*pdVar3 == 0.0) {
          if ((dVar6 != 1.0 && dVar6 != 0.0) && (func_0x0001081e77e0(), ((ulong)plVar2 & 1) == 0)) {
            return;
          }
        }
        else if ((dVar6 == 1.0 || dVar6 == 0.0) &&
                (plVar2 = param_1, FUN_1081e5d64(), (int)plVar2 == 0)) {
          return;
        }
      }
      pdVar3 = (double *)plVar5[2];
      pdVar4 = (double *)plVar5[4];
      bVar1 = false;
      if ((*(float *)(pdVar3 + 1) == *(float *)(pdVar4 + 1)) &&
         (bVar1 = false,
         !NAN(*(float *)((long)pdVar3 + 0xc)) && !NAN(*(float *)((long)pdVar4 + 0xc)))) {
        bVar1 = *(float *)((long)pdVar3 + 0xc) == *(float *)((long)pdVar4 + 0xc);
      }
      if (!bVar1) {
        dVar6 = *pdVar4;
        if (*pdVar3 == 1.0) {
          if ((dVar6 != 1.0 && dVar6 != 0.0) && (func_0x0001081e77e0(), ((ulong)plVar2 & 1) == 0)) {
            return;
          }
        }
        else if ((dVar6 == 1.0 || dVar6 == 0.0) &&
                (plVar2 = param_1, FUN_1081e5d64(), (int)plVar2 == 0)) {
          return;
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    FUN_1081e5eec(param_1);
  }
  return;
}



/* Entry: 1081e5eec; end: 1081e5f63;  */

void FUN_1081e5eec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1;
  do {
    plVar1 = plVar2;
    plVar2 = (long *)*plVar1;
  } while (plVar2 != (long *)0x0);
  *plVar1 = param_1[1];
  param_1[1] = 0;
  do {
    plVar2 = param_1;
    param_1 = (long *)*plVar2;
    if (param_1 == (long *)0x0) {
      return;
    }
    while ((lVar3 = *(long *)(*(long *)(param_1[1] + 0x10) + 0x28),
           *(int *)(lVar3 + 0x108) == *(int *)(lVar3 + 0x104) ||
           (lVar3 = *(long *)(*(long *)(param_1[3] + 0x10) + 0x28),
           *(int *)(lVar3 + 0x108) == *(int *)(lVar3 + 0x104)))) {
      param_1 = (long *)*param_1;
      *plVar2 = (long)param_1;
      if (param_1 == (long *)0x0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 1081e5f64; end: 1081e61c7;  */

void FUN_1081e5f64(long *param_1)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double *pdVar12;
  double *pdVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 in_stack_0000001c;
  
  func_0x0001081e7710();
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    while( true ) {
      pdVar9 = (double *)param_1[1];
      pdVar8 = (double *)param_1[3];
      dVar19 = *pdVar9;
      dVar20 = *pdVar8;
      pdVar13 = pdVar9;
      func_0x0001081e7760();
      if ((int)pdVar13 == 0) break;
      pdVar13 = (double *)param_1[4];
      if (((ulong)((double *)pdVar13[2])[4] & 1) != 0) {
        return;
      }
      pdVar9 = (double *)pdVar9[2];
      if (*pdVar9 == 1.0) {
        return;
      }
      pdVar7 = (double *)pdVar8[2];
      lVar14 = param_1[2];
      pdVar10 = *(double **)(lVar14 + 0x10);
      pdVar8 = (double *)pdVar9[0xc];
      if (dVar20 <= *pdVar13) {
        if (*pdVar7 == 1.0) {
          return;
        }
        lVar5 = 0x60;
      }
      else {
        lVar5 = 0x40;
      }
      pdVar12 = *(double **)((long)pdVar7 + lVar5);
      if (pdVar12 == (double *)0x0) {
        return;
      }
      dVar6 = pdVar9[5];
      dVar11 = pdVar7[5];
      pdVar2 = (double *)pdVar13[2];
      while (pdVar4 = pdVar2, pdVar8 != pdVar10 || pdVar12 != pdVar4) {
        pdVar2 = pdVar8;
        func_0x0001081ec4b0(pdVar8,dVar11);
        pdVar3 = pdVar12;
        func_0x0001081ec4b0(pdVar12,dVar6);
        if ((pdVar2 == (double *)0x0) || (pdVar3 == (double *)0x0)) {
          pdVar13 = pdVar8;
          pdVar10 = pdVar2;
          if (pdVar2 == (double *)0x0) {
            pdVar13 = pdVar3;
            pdVar10 = pdVar12;
          }
          pdVar4 = pdVar8;
          if (pdVar2 == (double *)0x0 && pdVar3 == (double *)0x0) {
            while( true ) {
              if (*pdVar4 == 1.0) {
                return;
              }
              pdVar13 = (double *)pdVar4[0xc];
              pdVar10 = pdVar13;
              func_0x0001081ec4b0(pdVar13,dVar11);
              if (pdVar10 != (double *)0x0) break;
              pdVar4 = pdVar13;
              if (pdVar13 == *(double **)(lVar14 + 0x10)) {
                return;
              }
            }
          }
          dVar15 = *pdVar13 - dVar19;
          if (dVar15 == 0.0) {
            return;
          }
          dVar16 = *pdVar10 - dVar20;
          if (dVar16 == 0.0) {
            return;
          }
          dVar17 = (*pdVar8 - dVar19) / dVar15;
          dVar18 = (*pdVar12 - dVar20) / dVar16;
          if (dVar17 == dVar18) {
            return;
          }
          bVar1 = pdVar3 != (double *)0x0;
          if (pdVar2 == (double *)0x0 && pdVar3 == (double *)0x0) {
            bVar1 = dVar17 < dVar18;
          }
          in_stack_0000001c._3_1_ = '\0';
          if (bVar1) {
            dVar16 = dVar20 + dVar17 * dVar16;
            dVar15 = dVar11;
            pdVar13 = pdVar8;
          }
          else {
            dVar16 = dVar19 + dVar18 * dVar15;
            dVar15 = dVar6;
            pdVar13 = pdVar12;
          }
          func_0x0001081e9c18(dVar16,dVar15,pdVar13,(long)&stack0x0000001c + 3);
          if (((ulong)dVar15 & 1) == 0) {
            return;
          }
          pdVar2 = pdVar9;
          pdVar13 = pdVar7;
          if (in_stack_0000001c._3_1_ == '\0') {
            pdVar2 = pdVar8;
            pdVar13 = pdVar12;
          }
          pdVar12 = pdVar13;
          lVar14 = param_1[2];
          pdVar10 = *(double **)(lVar14 + 0x10);
          pdVar13 = (double *)param_1[4];
          pdVar4 = (double *)pdVar13[2];
          pdVar8 = pdVar2;
        }
        if (pdVar8 != pdVar10) {
          dVar19 = *pdVar8;
          if (dVar19 == 1.0) {
            return;
          }
          pdVar8 = (double *)pdVar8[0xc];
        }
        pdVar2 = pdVar12;
        if (pdVar12 != pdVar4) {
          dVar20 = *pdVar12;
          if (*(double *)param_1[3] <= *pdVar13) {
            if (dVar20 == 1.0) {
              return;
            }
            lVar5 = 0x60;
          }
          else {
            lVar5 = 0x40;
          }
          pdVar12 = *(double **)((long)pdVar12 + lVar5);
          pdVar2 = pdVar4;
          if (pdVar12 == (double *)0x0) {
            return;
          }
        }
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) {
        return;
      }
    }
  }
  return;
}



/* Entry: 1081e61c8; end: 1081e627b;  */

double FUN_1081e61c8(double param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  
  pdVar2 = (double *)0x0;
  pdVar3 = (double *)0x0;
  do {
    pdVar1 = param_2;
    func_0x0001081ec7f4(param_2,param_3);
    dVar4 = *param_2;
    if (pdVar1 == (double *)0x0) {
      if (dVar4 == 1.0) {
        return 1.0;
      }
    }
    else {
      if (dVar4 <= param_1) {
        pdVar3 = param_2;
        pdVar2 = pdVar1;
      }
      if (param_1 <= dVar4) {
        if (pdVar2 == (double *)0x0) {
          return 1.0;
        }
        dVar4 = dVar4 - *pdVar3;
        if (dVar4 == 0.0) {
          dVar4 = 1.0;
        }
        else {
          dVar4 = (param_1 - *pdVar3) / dVar4;
        }
        return *pdVar2 + dVar4 * (*pdVar1 - *pdVar2);
      }
    }
    param_2 = (double *)param_2[0xc];
    if (param_2 == (double *)0x0) {
      return 1.0;
    }
  } while( true );
}



/* Entry: 1081e627c; end: 1081e63d7;  */

undefined8
FUN_1081e627c(double param_1,double param_2,double param_3,double param_4,long *param_5,
             ulong param_6,ulong param_7,long param_8)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  double *extraout_x8;
  double *extraout_x9;
  ulong extraout_x10;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  while( true ) {
    dVar14 = param_4;
    dVar13 = param_3;
    param_4 = param_2;
    dVar8 = param_1;
    uVar7 = param_7;
    param_7 = param_6;
    uVar6 = param_7;
    func_0x0001081e57c0(param_7,uVar7);
    if ((uVar6 & 1) != 0) break;
    param_6 = uVar7;
    param_1 = dVar13;
    param_2 = dVar14;
    param_3 = dVar8;
    if (dVar14 <= dVar13) {
      param_1 = dVar14;
      param_2 = dVar13;
      param_3 = param_4;
      param_4 = dVar8;
    }
  }
  dVar15 = dVar13;
  dVar1 = dVar14;
  if (dVar13 <= dVar14) {
    dVar15 = dVar14;
    dVar1 = dVar13;
  }
  do {
    if ((*(ulong *)(*(long *)(param_5[1] + 0x10) + 0x28) == param_7) &&
       (func_0x0001081e7840(), extraout_x10 == uVar7)) {
      dVar9 = *extraout_x8;
      dVar10 = *extraout_x9;
      dVar12 = *(double *)param_5[4];
      dVar11 = dVar12;
      if ((dVar14 < dVar13) && (bVar2 = dVar10 <= dVar12, dVar11 = dVar10, dVar10 = dVar12, bVar2))
      {
        return 0;
      }
      if (dVar8 <= *(double *)param_5[2] && dVar9 <= param_4 || dVar1 <= dVar11 && dVar10 <= dVar15)
      {
        bVar2 = true;
        bVar5 = false;
        if (param_4 <= *(double *)param_5[2]) {
          bVar2 = false;
          bVar5 = true;
          if (!NAN(dVar8) && !NAN(dVar9)) {
            bVar2 = dVar8 < dVar9;
            bVar5 = false;
          }
        }
        bVar3 = false;
        bVar4 = true;
        if (bVar2 == bVar5) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar15) && !NAN(dVar11)) {
            bVar3 = dVar15 == dVar11;
            bVar4 = dVar11 <= dVar15;
          }
        }
        bVar2 = true;
        bVar5 = false;
        if (!bVar4 || bVar3) {
          bVar2 = false;
          bVar5 = true;
          if (!NAN(dVar1) && !NAN(dVar10)) {
            bVar2 = dVar1 < dVar10;
            bVar5 = false;
          }
        }
        if (bVar2 == bVar5) {
          return 0;
        }
        func_0x00010840f37c(param_8);
        *(long **)(*(long *)(param_8 + 8) + (long)*(int *)(param_8 + 0x14) * 8 + -8) = param_5;
      }
    }
    param_5 = (long *)*param_5;
    if (param_5 == (long *)0x0) {
      return 1;
    }
  } while( true );
}



/* Entry: 1081e63d8; end: 1081e64d7;  */

bool FUN_1081e63d8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_1;
  FUN_1081e61c8(param_4,param_6);
  dVar5 = param_2;
  FUN_1081e61c8(param_4,param_6);
  FUN_1081ea0a4(dVar4,dVar5);
  iVar2 = (int)param_6;
  if (iVar2 == 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    FUN_1081e61c8(param_1,uVar3,param_7);
    FUN_1081e61c8(param_2,uVar3,param_7);
    iVar2 = (int)uVar3;
    func_0x0001081e786c();
    FUN_1081ea0a4();
    if (iVar2 == 0) {
      dVar6 = param_2;
      dVar1 = dVar5;
      if (dVar5 < dVar4) {
        dVar6 = param_1;
        param_1 = param_2;
        dVar1 = dVar4;
        dVar4 = dVar5;
      }
      func_0x0001081e7784(dVar4,dVar1,param_1,dVar6);
      FUN_1081e5850();
      return true;
    }
  }
  return iVar2 == 1;
}



/* Entry: 1081e64d8; end: 1081e652b;  */

bool FUN_1081e64d8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_2;
  plVar3 = (long *)0x0;
  do {
    plVar1 = plVar2;
    plVar2 = (long *)*plVar1;
    if (plVar1 == param_3) {
      if (plVar3 == (long *)0x0) {
        if (param_2 == (long *)*param_1) {
          *param_1 = (long)plVar2;
        }
        else {
          param_1[1] = (long)plVar2;
        }
      }
      else {
        *plVar3 = (long)plVar2;
      }
      break;
    }
    plVar3 = plVar1;
  } while (plVar2 != (long *)0x0);
  return plVar1 == param_3;
}



/* Entry: 1081e652c; end: 1081e676b;  */

undefined8 FUN_1081e652c(long *param_1,undefined1 *param_2)

{
  double *pdVar1;
  long *plVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  double *pdVar9;
  double *pdVar10;
  long *plVar11;
  double dVar12;
  double dVar13;
  
  func_0x0001081e7710();
  plVar8 = (long *)*param_1;
  *param_2 = 0;
  if (plVar8 == (long *)0x0) {
    return 1;
  }
  *param_1 = 0;
  param_1[1] = (long)plVar8;
  plVar2 = param_1;
LAB_1081e6558:
  pdVar9 = (double *)plVar8[1];
  if ((((ulong)pdVar9[4] & 1) != 0) ||
     (lVar4 = *(long *)((long)pdVar9[2] + 0x28), *(int *)(lVar4 + 0x108) == *(int *)(lVar4 + 0x104))
     ) {
    return 0;
  }
  pdVar10 = (double *)plVar8[3];
  if (((ulong)pdVar10[4] & 1) != 0) {
    return 1;
  }
  lVar5 = *(long *)((long)pdVar10[2] + 0x28);
  plVar11 = plVar8;
LAB_1081e6594:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_1081e6748;
  if ((*(byte *)(plVar11[1] + 0x20) & 1) != 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(plVar11[1] + 0x10) + 0x28);
  if (*(int *)(lVar6 + 0x108) == *(int *)(lVar6 + 0x104)) {
    return 0;
  }
  if ((*(byte *)(plVar11[3] + 0x20) & 1) != 0) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)(plVar11[3] + 0x10) + 0x28);
  if (lVar4 == lVar6) goto LAB_1081e6640;
  if (lVar4 == lVar7) {
    pdVar3 = (double *)plVar8[2];
    if (((ulong)pdVar3[4] & 1) != 0) {
      return 0;
    }
    if ((*(byte *)(plVar11[4] + 0x20) & 1) != 0) {
      return 0;
    }
    if (lVar5 == lVar6) goto LAB_1081e6594;
    dVar12 = *pdVar9;
    dVar13 = *pdVar3;
    func_0x0001081e765c();
    if ((int)plVar2 == 0) goto LAB_1081e6594;
    pdVar1 = pdVar9;
    if (dVar13 <= dVar12) {
      pdVar1 = pdVar3;
    }
    func_0x0001081e76c4(pdVar1);
  }
  else {
    if (lVar5 != lVar6) {
      if (lVar5 == lVar7) {
        pdVar3 = (double *)plVar8[4];
        if (((ulong)pdVar3[4] & 1) != 0) {
          return 0;
        }
        if ((*(byte *)(plVar11[4] + 0x20) & 1) != 0) {
          return 1;
        }
        dVar12 = *pdVar10;
        dVar13 = *pdVar3;
        func_0x0001081e765c();
        if ((int)plVar2 != 0) {
          pdVar1 = pdVar10;
          if (dVar13 <= dVar12) {
            pdVar1 = pdVar3;
          }
          func_0x0001081e76c4(pdVar1);
          goto LAB_1081e6738;
        }
      }
      goto LAB_1081e6594;
    }
    pdVar3 = (double *)plVar8[4];
    if (((ulong)pdVar3[4] & 1) != 0) {
      return 0;
    }
    if ((*(byte *)(plVar11[2] + 0x20) & 1) != 0) {
      return 0;
    }
    dVar12 = *pdVar10;
    dVar13 = *pdVar3;
    func_0x0001081e765c();
    if ((int)plVar2 == 0) goto LAB_1081e6594;
    pdVar1 = pdVar10;
    if (dVar13 <= dVar12) {
      pdVar1 = pdVar3;
    }
    func_0x0001081e76c4(pdVar1);
  }
  goto LAB_1081e6738;
LAB_1081e6748:
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_1081e5eec(param_1);
    return 1;
  }
  goto LAB_1081e6558;
LAB_1081e6640:
  pdVar3 = (double *)plVar8[2];
  if (((ulong)pdVar3[4] & 1) != 0) {
    return 1;
  }
  if ((*(byte *)(plVar11[2] + 0x20) & 1) != 0) {
    return 0;
  }
  if (lVar5 == lVar7) goto LAB_1081e6594;
  dVar12 = *pdVar9;
  dVar13 = *pdVar3;
  func_0x0001081e765c();
  if ((int)plVar2 == 0) goto LAB_1081e6594;
  pdVar1 = pdVar9;
  if (dVar13 <= dVar12) {
    pdVar1 = pdVar3;
  }
  func_0x0001081e76c4(pdVar1);
LAB_1081e6738:
  FUN_1081e63d8();
  if (((ulong)plVar2 & 1) == 0) {
    return 0;
  }
  goto LAB_1081e6594;
}



/* Entry: 1081e676c; end: 1081e67b3;  */

bool FUN_1081e676c(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_2;
  if (param_1 <= param_2) {
    dVar1 = param_1;
  }
  dVar2 = param_4;
  if (param_3 <= param_4) {
    dVar2 = param_3;
  }
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  *param_5 = dVar2;
  if (param_4 <= param_3) {
    param_4 = param_3;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  *param_6 = param_4;
  return *param_5 < param_4;
}



/* Entry: 1081e67b4; end: 1081e691f;  */

undefined8
FUN_1081e67b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  
  lVar1 = param_6;
  func_0x0001081ec4e4();
  lVar2 = lVar1;
  func_0x0001081e7784();
  func_0x0001081ec4e4();
  if (lVar1 == 0) {
    return 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
  func_0x0001081e7744();
  if (extraout_w8 == 0) {
    lVar1 = param_6;
    func_0x0001081ec4e4(param_6,param_3);
    lVar2 = param_7;
    func_0x0001081ec4e4(param_7,param_3);
    if (lVar1 == 0) {
      return 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    func_0x0001081e7744();
    if (extraout_w8_01 == 0) {
      return 1;
    }
  }
  lVar2 = param_6;
  func_0x0001081ec4e4(param_6,param_4);
  lVar3 = param_7;
  func_0x0001081ec4e4(param_7,param_4);
  if (lVar2 == 0) {
    return 0;
  }
  if (lVar3 != 0) {
    func_0x0001081e7768();
    if (extraout_w8_00 == 0) {
      func_0x0001081ec4e4(param_6,param_5);
      func_0x0001081ec4e4(param_7,param_5);
      if (param_6 == 0) {
        return 0;
      }
      if (param_7 == 0) {
        return 0;
      }
      func_0x0001081e7768();
      lVar2 = param_6;
      if (extraout_w8_02 == 0) {
        return 1;
      }
    }
    if (*(long *)(*(long *)(lVar1 + 0x10) + 0x28) != *(long *)(*(long *)(lVar2 + 0x10) + 0x28)) {
      func_0x0001081e784c();
      FUN_1081e547c();
    }
    return 1;
  }
  return 0;
}



/* Entry: 1081e6920; end: 1081e69ab;  */

undefined8 FUN_1081e6920(double param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return 0;
    }
    lVar1 = *(long *)((long)((double *)param_2[1])[2] + 0x28);
    lVar2 = *(long *)((long)((double *)param_2[3])[2] + 0x28);
    if (((lVar1 == param_3 && lVar2 == param_4) &&
        (lVar2 = param_4,
        (*(double *)param_2[3] - param_1) * (*(double *)param_2[4] - param_1) <= 0.0)) ||
       ((lVar1 == param_4 && lVar2 == param_3 &&
        ((*(double *)param_2[1] - param_1) * (*(double *)param_2[2] - param_1) <= 0.0)))) break;
    param_2 = (long *)*param_2;
  }
  return 1;
}



/* Entry: 1081e69ac; end: 1081e6abb;  */

undefined8
FUN_1081e69ac(long *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  long extraout_x8;
  double *extraout_x9;
  double *extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long unaff_x24;
  long unaff_x25;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    func_0x0001081e769c();
    pdVar1 = param_2;
    pdVar2 = param_3;
    pdVar3 = param_4;
    pdVar4 = param_5;
    if ((((ulong)param_1 & 1) == 0) &&
       (pdVar1 = param_4, pdVar2 = param_5, pdVar3 = param_2, pdVar4 = param_3,
       unaff_x25 = unaff_x24, *param_5 < *param_4)) {
      pdVar1 = param_5;
      pdVar2 = param_4;
      pdVar3 = param_3;
      pdVar4 = param_2;
    }
    dVar7 = *pdVar4;
    dVar8 = *pdVar3;
    dVar6 = dVar7;
    if (dVar8 <= dVar7) {
      dVar6 = dVar8;
    }
    if (dVar7 <= dVar8) {
      dVar7 = dVar8;
    }
    do {
      func_0x0001081e7840();
      if ((((extraout_x8 == extraout_x10) && (*extraout_x9 <= *pdVar1)) &&
          (*pdVar2 <= *(double *)plVar5[2])) &&
         (func_0x0001081e7840(), unaff_x25 == extraout_x10_00)) {
        dVar8 = *(double *)plVar5[4];
        dVar9 = *extraout_x9_00;
        dVar10 = dVar8;
        if (dVar9 <= dVar8) {
          dVar10 = dVar9;
        }
        if (dVar10 <= dVar6) {
          if (dVar8 <= dVar9) {
            dVar8 = dVar9;
          }
          if (dVar7 <= dVar8) {
            return 1;
          }
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return 0;
}



/* Entry: 1081e6abc; end: 1081e6ae7;  */

void FUN_1081e6abc(long *param_1)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    FUN_1081e4f3c(param_1);
  }
  return;
}



/* Entry: 1081e6ae8; end: 1081e6d57;  */

undefined8 FUN_1081e6ae8(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  
  param_1 = (long *)*param_1;
  do {
    if (param_1 == (long *)0x0) {
      return 1;
    }
    pdVar18 = *(double **)(param_1[1] + 0x10);
    dVar25 = *pdVar18;
    if (dVar25 == 1.0) {
      return 0;
    }
    if (((ulong)pdVar18[4] & 1) == 0) {
      pdVar19 = *(double **)(param_1[2] + 0x10);
      bVar14 = true;
      if ((pdVar19 != pdVar18) && (bVar14 = false, !NAN(dVar25) && !NAN(*pdVar19))) {
        bVar14 = dVar25 < *pdVar19;
      }
      if (!bVar14) {
        return 0;
      }
      pdVar17 = (double *)param_1[3];
      pdVar15 = (double *)param_1[4];
      dVar25 = *pdVar17;
      dVar26 = *pdVar15;
      pdVar16 = pdVar15;
      if (dVar25 <= dVar26) {
        pdVar16 = pdVar17;
      }
      pdVar16 = (double *)pdVar16[2];
      if (*pdVar16 == 1.0) {
        return 0;
      }
      if (((ulong)pdVar16[4] & 1) == 0) {
        if (dVar25 <= dVar26) {
          pdVar17 = pdVar15;
        }
        dVar20 = pdVar18[5];
        dVar21 = pdVar16[5];
        lVar22 = *(long *)((long)dVar20 + 0xd0);
        cVar11 = *(char *)(lVar22 + 0x14d);
        lVar23 = *(long *)((long)dVar21 + 0xd0);
        cVar12 = *(char *)(lVar23 + 0x14d);
        if (dVar25 <= dVar26) {
          lVar24 = 0x60;
        }
        else {
          if (((ulong)((double *)pdVar17[2])[4] & 1) != 0) goto LAB_1081e6b5c;
          while (pdVar15 = (double *)pdVar16[0xc], pdVar15 != (double *)pdVar17[2]) {
            pdVar16 = pdVar15;
            if (*pdVar15 == 1.0) {
              return 0;
            }
          }
          lVar24 = 0x40;
        }
LAB_1081e6bc8:
        pdVar17 = pdVar16;
        iVar7 = *(int *)(pdVar18 + 0xe);
        iVar9 = *(int *)((long)pdVar18 + 0x74);
        iVar8 = *(int *)(pdVar17 + 0xe);
        iVar10 = *(int *)((long)pdVar17 + 0x74);
        iVar3 = iVar7;
        iVar4 = iVar8;
        if (cVar11 != cVar12) {
          iVar3 = iVar9;
          iVar4 = iVar10;
        }
        iVar1 = -iVar4;
        if (dVar26 < dVar25) {
          iVar1 = iVar4;
        }
        iVar2 = -iVar3;
        if (dVar26 < dVar25) {
          iVar2 = iVar3;
        }
        if ((iVar7 == 0) || ((iVar7 <= iVar1 && (iVar7 != iVar1 || iVar2 < iVar8)))) {
          if (*(char *)((long)pdVar17 + 0x7c) != '\x01') goto LAB_1081e6c84;
LAB_1081e6c08:
          iVar3 = -iVar4;
          if (dVar25 <= dVar26) {
            iVar3 = iVar4;
          }
          uVar5 = iVar3 + iVar7 & 1;
          if (*(char *)(lVar22 + 0x14f) == '\0') {
            uVar5 = iVar3 + iVar7;
          }
          if ((int)uVar5 < 0) {
            return 0;
          }
          if (cVar11 != cVar12) {
            iVar10 = iVar8;
          }
          iVar3 = -iVar10;
          if (dVar25 <= dVar26) {
            iVar3 = iVar10;
          }
          uVar6 = iVar3 + iVar9 & 1;
          if (*(char *)(lVar22 + 0x150) == '\0') {
            uVar6 = iVar3 + iVar9;
          }
          *(uint *)(pdVar18 + 0xe) = uVar5;
          *(uint *)((long)pdVar18 + 0x74) = uVar6;
          pdVar17[0xe] = 0.0;
          if ((uVar5 == 0 && uVar6 == 0) && ((*(byte *)((long)pdVar18 + 0x7c) & 1) == 0)) {
            *(undefined1 *)((long)pdVar18 + 0x7c) = 1;
            *(int *)((long)dVar20 + 0x108) = *(int *)((long)dVar20 + 0x108) + 1;
          }
LAB_1081e6cfc:
          if ((*(byte *)((long)pdVar17 + 0x7c) & 1) == 0) {
            *(undefined1 *)((long)pdVar17 + 0x7c) = 1;
            *(int *)((long)dVar21 + 0x108) = *(int *)((long)dVar21 + 0x108) + 1;
          }
        }
        else {
          if ((*(byte *)((long)pdVar18 + 0x7c) & 1) == 0) goto LAB_1081e6c08;
LAB_1081e6c84:
          iVar4 = -iVar3;
          if (dVar25 <= dVar26) {
            iVar4 = iVar3;
          }
          cVar13 = *(char *)(lVar23 + 0x150);
          uVar5 = iVar4 + iVar8 & 1;
          if (*(char *)(lVar23 + 0x14f) == '\0') {
            uVar5 = iVar4 + iVar8;
          }
          pdVar18[0xe] = 0.0;
          if ((int)uVar5 < 0) {
            return 0;
          }
          if (cVar11 != cVar12) {
            iVar9 = iVar7;
          }
          iVar3 = -iVar9;
          if (dVar25 <= dVar26) {
            iVar3 = iVar9;
          }
          uVar6 = iVar10 + iVar3 & 1;
          if (cVar13 == '\0') {
            uVar6 = iVar10 + iVar3;
          }
          *(uint *)(pdVar17 + 0xe) = uVar5;
          *(uint *)((long)pdVar17 + 0x74) = uVar6;
          if ((*(byte *)((long)pdVar18 + 0x7c) & 1) == 0) {
            *(undefined1 *)((long)pdVar18 + 0x7c) = 1;
            *(int *)((long)dVar20 + 0x108) = *(int *)((long)dVar20 + 0x108) + 1;
          }
          if (uVar5 == 0 && uVar6 == 0) goto LAB_1081e6cfc;
        }
        pdVar18 = (double *)pdVar18[0xc];
        if (pdVar18 != pdVar19) {
          if (*pdVar18 == 1.0) {
            return 0;
          }
          pdVar15 = *(double **)((long)pdVar17 + lVar24);
          pdVar16 = pdVar17;
          if ((pdVar15 != (double *)0x0) && (pdVar16 = pdVar15, *pdVar15 == 1.0)) {
            pdVar16 = pdVar17;
          }
          goto LAB_1081e6bc8;
        }
      }
    }
LAB_1081e6b5c:
    param_1 = (long *)*param_1;
  } while( true );
}



/* Entry: 1081e6d58; end: 1081e6db7;  */

void FUN_1081e6d58(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
    plVar4 = (long *)0x0;
    do {
      plVar2 = (long *)*plVar1;
      plVar3 = plVar1;
      if (*(char *)(plVar1[1] + 0x20) == '\x01') {
        if (plVar4 == (long *)0x0) {
          if (param_2 == (long *)*param_1) {
            plVar3 = (long *)0x0;
            *param_1 = (long)plVar2;
          }
          else {
            plVar3 = (long *)0x0;
            param_1[1] = (long)plVar2;
          }
        }
        else {
          *plVar4 = (long)plVar2;
          plVar3 = plVar4;
        }
      }
      plVar1 = plVar2;
      plVar4 = plVar3;
    } while (plVar2 != (long *)0x0);
  }
  return;
}



/* Entry: 1081e6db8; end: 1081e6de3;  */

void FUN_1081e6db8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_1081e6d58(param_1,*param_1);
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    plVar5 = (long *)0x0;
    do {
      plVar3 = (long *)*plVar2;
      plVar4 = plVar2;
      if (*(char *)(plVar2[1] + 0x20) == '\x01') {
        if (plVar5 == (long *)0x0) {
          if (plVar1 == (long *)*param_1) {
            plVar4 = (long *)0x0;
            *param_1 = (long)plVar3;
          }
          else {
            plVar4 = (long *)0x0;
            param_1[1] = (long)plVar3;
          }
        }
        else {
          *plVar5 = (long)plVar3;
          plVar4 = plVar5;
        }
      }
      plVar2 = plVar3;
      plVar5 = plVar4;
    } while (plVar3 != (long *)0x0);
  }
  return;
}



/* Entry: 1081e6de4; end: 1081e6e73;  */

undefined8 FUN_1081e6de4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      plVar1 = plVar2;
      FUN_1081e5020();
      if ((int)plVar1 != 0) {
        plVar1 = (long *)*param_1;
        do {
          if (((plVar2 != plVar1) && (plVar2[1] == plVar1[1])) && (plVar2[3] == plVar1[3])) {
            FUN_1081e64d8(param_1);
            break;
          }
          plVar1 = (long *)*plVar1;
        } while (plVar1 != (long *)0x0);
        uVar3 = 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return uVar3;
}



/* Entry: 1081e6e74; end: 1081e6f73;  */

bool FUN_1081e6e74(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_2 = 0;
  param_2[1] = 0;
LAB_1081e6e9c:
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
LAB_1081e6f50:
    return param_1 == (long *)0x0;
  }
  lVar4 = *(long *)(*(long *)(param_1[1] + 0x10) + 0x28);
  lVar5 = *(long *)(*(long *)(param_1[3] + 0x10) + 0x28);
  plVar8 = param_1;
LAB_1081e6ec0:
  do {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_1081e6e9c;
    lVar6 = *(long *)(*(long *)(plVar8[1] + 0x10) + 0x28);
    if (lVar4 != lVar6) {
      lVar7 = *(long *)(*(long *)(plVar8[3] + 0x10) + 0x28);
      if (lVar5 == lVar6) {
        uVar1 = param_1[3];
        func_0x0001081e76b8(uVar1,param_1[4],plVar8[1],plVar8[2]);
        if ((uVar1 & 1) == 0) goto LAB_1081e6f00;
      }
      else {
LAB_1081e6f00:
        if (lVar4 == lVar7) {
          uVar1 = param_1[1];
          func_0x0001081e76b8(uVar1,param_1[2],plVar8[3],plVar8[4]);
          if ((uVar1 & 1) != 0) goto LAB_1081e6f30;
        }
        if (lVar5 != lVar7) goto LAB_1081e6ec0;
        uVar2 = param_1[3];
        func_0x0001081e76b8(uVar2,param_1[4],plVar8[3],plVar8[4]);
        if ((int)uVar2 == 0) goto LAB_1081e6ec0;
      }
LAB_1081e6f30:
      puVar3 = param_2;
      FUN_1081e67b4(param_2,lVar4,lVar5,lVar6,lVar7,uStack_58,uStack_60);
      if ((int)puVar3 == 0) goto LAB_1081e6f50;
    }
  } while( true );
}



/* Entry: 1081e6f74; end: 1081e702f;  */

bool FUN_1081e6f74(double *param_1,double *param_2,double *param_3,double *param_4,long *param_5,
                  long *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = *param_1;
  dVar8 = *param_2;
  dVar5 = *param_3;
  dVar6 = *param_4;
  pdVar2 = param_3;
  dVar3 = dVar5;
  if (dVar6 <= dVar5) {
    pdVar2 = param_4;
    dVar3 = dVar6;
  }
  pdVar1 = param_1;
  dVar4 = dVar7;
  if (dVar8 <= dVar7) {
    pdVar1 = param_2;
    dVar4 = dVar8;
  }
  if (0.0 < (dVar5 - dVar4) * (dVar6 - dVar4)) {
    pdVar1 = (double *)0x0;
  }
  if (0.0 < (dVar7 - dVar3) * (dVar8 - dVar3)) {
    pdVar2 = pdVar1;
  }
  *param_5 = (long)pdVar2;
  if (dVar6 <= dVar5) {
    param_4 = param_3;
  }
  if (0.0 < (dVar7 - *param_4) * (dVar8 - *param_4)) {
    param_4 = param_2;
    if (dVar8 <= dVar7) {
      param_4 = param_1;
    }
    if (0.0 < (dVar5 - *param_4) * (dVar6 - *param_4)) {
      param_4 = (double *)0x0;
    }
  }
  *param_6 = (long)param_4;
  if ((double *)*param_5 == param_4) {
    return false;
  }
  return param_4 != (double *)0x0 && (double *)*param_5 != (double *)0x0;
}



/* Entry: 1081e7030; end: 1081e708b;  */

void FUN_1081e7030(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081e7790();
  if (*param_1 != 0) {
    FUN_1081e708c(param_1);
  }
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    return;
  }
  do {
    lVar1 = plVar2[2];
    lVar3 = plVar2[1];
    if (plVar2[1] == unaff_x20) {
      if (*(long *)(lVar1 + 0x10) != *(long *)(unaff_x19 + 0x10)) {
        plVar2[1] = unaff_x19;
        *(undefined1 *)(unaff_x19 + 0x22) = 1;
        lVar3 = unaff_x19;
        goto LAB_1081e70e0;
      }
LAB_1081e714c:
      func_0x0001081e7784();
      FUN_1081e64d8();
    }
    else {
LAB_1081e70e0:
      if (lVar1 == unaff_x20) {
        if (*(long *)(lVar3 + 0x10) == *(long *)(unaff_x19 + 0x10)) goto LAB_1081e714c;
        plVar2[2] = unaff_x19;
        *(undefined1 *)(unaff_x19 + 0x22) = 1;
      }
      lVar1 = plVar2[4];
      lVar3 = plVar2[3];
      if (plVar2[3] == unaff_x20) {
        if (*(long *)(lVar1 + 0x10) == *(long *)(unaff_x19 + 0x10)) goto LAB_1081e714c;
        plVar2[3] = unaff_x19;
        *(undefined1 *)(unaff_x19 + 0x22) = 1;
        lVar3 = unaff_x19;
      }
      if (lVar1 == unaff_x20) {
        if (*(long *)(lVar3 + 0x10) == *(long *)(unaff_x19 + 0x10)) goto LAB_1081e714c;
        plVar2[4] = unaff_x19;
        *(undefined1 *)(unaff_x19 + 0x22) = 1;
      }
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
  } while( true );
}



/* Entry: 1081e708c; end: 1081e7167;  */

void FUN_1081e708c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  do {
    lVar1 = param_2[2];
    lVar2 = param_2[1];
    if (param_2[1] == param_3) {
      if (*(long *)(lVar1 + 0x10) != *(long *)(param_4 + 0x10)) {
        param_2[1] = param_4;
        *(undefined1 *)(param_4 + 0x22) = 1;
        lVar2 = param_4;
        goto LAB_1081e70e0;
      }
LAB_1081e714c:
      func_0x0001081e7784();
      FUN_1081e64d8();
    }
    else {
LAB_1081e70e0:
      if (lVar1 == param_3) {
        if (*(long *)(lVar2 + 0x10) == *(long *)(param_4 + 0x10)) goto LAB_1081e714c;
        param_2[2] = param_4;
        *(undefined1 *)(param_4 + 0x22) = 1;
      }
      lVar1 = param_2[4];
      lVar2 = param_2[3];
      if (param_2[3] == param_3) {
        if (*(long *)(lVar1 + 0x10) == *(long *)(param_4 + 0x10)) goto LAB_1081e714c;
        param_2[3] = param_4;
        *(undefined1 *)(param_4 + 0x22) = 1;
        lVar2 = param_4;
      }
      if (lVar1 == param_3) {
        if (*(long *)(lVar2 + 0x10) == *(long *)(param_4 + 0x10)) goto LAB_1081e714c;
        param_2[4] = param_4;
        *(undefined1 *)(param_4 + 0x22) = 1;
      }
    }
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      return;
    }
  } while( true );
}



/* Entry: 1081e7168; end: 1081e72cb;  */

undefined8 FUN_1081e7168(long *param_1)

{
  double *pdVar1;
  undefined1 uVar2;
  long *plVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uStack_71;
  
  param_1 = (long *)*param_1;
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 1;
    }
    pdVar7 = *(double **)(param_1[1] + 0x10);
    if ((*pdVar7 == 1.0) || (((ulong)pdVar7[4] & 1) != 0)) {
      return 0;
    }
    pdVar5 = (double *)((double *)param_1[4])[2];
    if (((ulong)pdVar5[4] & 1) != 0) {
      return 0;
    }
    pdVar6 = (double *)((double *)param_1[3])[2];
    dVar10 = *(double *)param_1[3];
    dVar11 = *(double *)param_1[4];
    pdVar1 = pdVar6;
    if (dVar10 <= dVar11) {
      pdVar1 = pdVar5;
      pdVar5 = pdVar6;
    }
    if (*pdVar5 == 1.0) break;
    pdVar6 = *(double **)(param_1[2] + 0x10);
    FUN_1081e72cc(pdVar7,pdVar5);
    func_0x0001081e7300(pdVar6,pdVar1);
    dVar8 = pdVar7[5];
    dVar9 = pdVar5[5];
    plVar3 = param_1;
    FUN_1081e5280(param_1,&uStack_71);
    uVar2 = uStack_71;
    if ((int)plVar3 == 0) {
      return 0;
    }
    while (pdVar7 = (double *)pdVar7[0xc], pdVar7 != pdVar6) {
      if (*pdVar7 == 1.0) {
        return 0;
      }
      pdVar4 = pdVar7;
      FUN_1081eca80(pdVar7,dVar9,dVar11 < dVar10,uVar2);
      if (((ulong)pdVar4 & 1) == 0) {
        return 0;
      }
    }
    while (pdVar5 = (double *)pdVar5[0xc], pdVar5 != pdVar1) {
      if (*pdVar5 == 1.0) {
        return 0;
      }
      pdVar7 = pdVar5;
      FUN_1081eca80(pdVar5,dVar8,dVar11 < dVar10,uVar2);
      if (((ulong)pdVar7 & 1) == 0) {
        return 0;
      }
    }
    param_1 = (long *)*param_1;
  }
  return 0;
}



/* Entry: 1081e72cc; end: 1081e7333;  */

void FUN_1081e72cc(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)param_1;
  FUN_1081e762c();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  return;
}



/* Entry: 1081e7334; end: 1081e73ef;  */

void FUN_1081e7334(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  double dVar3;
  
  func_0x0001081e7790();
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    plVar2 = param_2;
    FUN_1081e4eac();
    if ((int)plVar2 != 0) {
      dVar3 = *(double *)param_2[1];
      bVar1 = true;
      if ((dVar3 != 0.0) && (bVar1 = false, !NAN(dVar3))) {
        bVar1 = dVar3 == 1.0;
      }
      if (bVar1) {
        dVar3 = *(double *)param_2[2];
        bVar1 = true;
        if ((dVar3 != 0.0) && (bVar1 = false, !NAN(dVar3))) {
          bVar1 = dVar3 == 1.0;
        }
        if (bVar1) {
          func_0x0001081e7828();
        }
      }
      dVar3 = *(double *)param_2[3];
      bVar1 = true;
      if ((dVar3 != 0.0) && (bVar1 = false, !NAN(dVar3))) {
        bVar1 = dVar3 == 1.0;
      }
      if (bVar1) {
        dVar3 = *(double *)param_2[4];
        bVar1 = true;
        if ((dVar3 != 0.0) && (bVar1 = false, !NAN(dVar3))) {
          bVar1 = dVar3 == 1.0;
        }
        if (bVar1) {
          func_0x0001081e7828();
        }
      }
      FUN_1081e64d8(param_1);
    }
  }
  return;
}



/* Entry: 1081e73f0; end: 1081e7427;  */

void FUN_1081e73f0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  double dVar4;
  
  FUN_1081e7334(param_1,*param_1,param_2);
  plVar3 = (long *)param_1[1];
  func_0x0001081e7790(param_1,plVar3,param_2);
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plVar2 = plVar3;
    FUN_1081e4eac(plVar3,unaff_x19);
    if ((int)plVar2 != 0) {
      dVar4 = *(double *)plVar3[1];
      bVar1 = true;
      if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
        bVar1 = dVar4 == 1.0;
      }
      if (bVar1) {
        dVar4 = *(double *)plVar3[2];
        bVar1 = true;
        if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
          bVar1 = dVar4 == 1.0;
        }
        if (bVar1) {
          func_0x0001081e7828();
        }
      }
      dVar4 = *(double *)plVar3[3];
      bVar1 = true;
      if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
        bVar1 = dVar4 == 1.0;
      }
      if (bVar1) {
        dVar4 = *(double *)plVar3[4];
        bVar1 = true;
        if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
          bVar1 = dVar4 == 1.0;
        }
        if (bVar1) {
          func_0x0001081e7828();
        }
      }
      FUN_1081e64d8(param_1,unaff_x20,plVar3);
    }
  }
  return;
}



/* Entry: 1081e7428; end: 1081e7497;  */

void FUN_1081e7428(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  for (plVar1 = (long *)*param_1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    func_0x0001081e76d4(plVar1[1]);
    if (((((bool)in_ZR) || (func_0x0001081e76d4(plVar1[2]), (bool)in_ZR)) ||
        (func_0x0001081e76d4(plVar1[3]), (bool)in_ZR)) ||
       (func_0x0001081e76d4(plVar1[4]), (bool)in_ZR)) {
      FUN_1081e64d8(param_1,*param_1,plVar1);
    }
  }
  return;
}



/* Entry: 1081e7498; end: 1081e74af;  */

undefined1  [16] FUN_1081e7498(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(float)param_1[1] - (double)(float)*param_1;
  auVar1._8_8_ = (double)(float)((ulong)param_1[1] >> 0x20) -
                 (double)(float)((ulong)*param_1 >> 0x20);
  return auVar1;
}



/* Entry: 1081e74b0; end: 1081e7543;  */

void FUN_1081e74b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x0001081e77c8();
  FUN_1081f0fb8(param_2,auStack_50);
  return;
}



/* Entry: 1081e7544; end: 1081e757f;  */

void FUN_1081e7544(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_30 = (double)(float)*param_1;
  dStack_28 = (double)(float)((ulong)*param_1 >> 0x20);
  dStack_20 = (double)(float)param_1[1];
  dStack_18 = (double)(float)((ulong)param_1[1] >> 0x20);
  FUN_1081dff94(param_3,&dStack_30,param_2);
  return;
}



/* Entry: 1081e7580; end: 1081e75b3;  */

void FUN_1081e7580(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  func_0x0001081e7790();
  func_0x0001081e77c8();
  func_0x0001081e784c(param_1,auStack_50);
  FUN_1081e0c3c();
  return;
}



/* Entry: 1081e75b4; end: 1081e75f7;  */

void FUN_1081e75b4(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [48];
  undefined4 uStack_38;
  
  func_0x0001081e7790();
  func_0x0001081e77d4();
  uStack_38 = param_1;
  func_0x0001081e784c(param_2,auStack_68);
  FUN_1081ddfb0();
  return;
}



/* Entry: 1081e75f8; end: 1081e762b;  */

void FUN_1081e75f8(undefined8 param_1)

{
  undefined1 auStack_60 [64];
  
  func_0x0001081e7790();
  func_0x0001081e77bc();
  func_0x0001081e784c(param_1,auStack_60);
  FUN_1081df0b8();
  return;
}



/* Entry: 1081e762c; end: 1081e7877;  */

bool FUN_1081e762c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x50);
  } while (lVar1 != param_2 && lVar1 != param_1);
  return lVar1 != param_1;
}



/* Entry: 1081e7878; end: 1081e7913;  */

/* WARNING: Removing unreachable block (ram,0x00010840f420) */

int * FUN_1081e7878(int *param_1,int *param_2)

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
  int *piVar18;
  int *piVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  double *pdVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  int iVar32;
  long *plVar33;
  long *plVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
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
  int *piStack_f8;
  int iStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  int iStack_d0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  
  if (param_1[0x51] == 0) {
    return param_1;
  }
  param_1 = param_1 + 2;
  do {
    piVar18 = param_1;
    FUN_1081e97e0(param_1,param_1,param_1 + 0x20,param_2);
    param_1 = *(int **)(param_1 + 0x36);
  } while (param_1 != (int *)0x0);
  func_0x0001081f7904(param_2);
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar14 = param_2;
  func_0x0001081f7904();
  uVar5 = param_2[0xd];
  if (uVar5 != 0) {
    plVar30 = *(long **)(param_2 + 10);
    for (uVar29 = 0; uVar29 != (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar29 = uVar29 + 1) {
      pdVar24 = (double *)plVar30[uVar29];
      FUN_108376ad8(auStack_118);
      FUN_1081f7554(auStack_e8,auStack_118);
      while( true ) {
        dVar35 = *pdVar24;
        bVar13 = true;
        if ((dVar35 != 0.0) && (bVar13 = false, !NAN(dVar35))) {
          bVar13 = dVar35 == 1.0;
        }
        if (!bVar13) break;
        auStack_160[0] = 0xffffffff;
        if (dVar35 != 0.0) {
          auStack_160[0] = 1;
        }
        lVar15 = 0x40;
        if (dVar35 == 0.0) {
          lVar15 = 0x60;
        }
        apdStack_148[0] = *(double **)((long)pdVar24[2] + lVar15);
        lVar15 = *(long *)((long)pdVar24[2] + 0x28);
        FUN_1081ea790(lVar15,apdStack_148,auStack_160);
        if (lVar15 == 0) break;
        lVar15 = 0x40;
        if (*apdStack_148[0] == 0.0) {
          lVar15 = 0x60;
        }
        pdVar24 = *(double **)((long)apdStack_148[0] + lVar15);
        pdVar3 = apdStack_148[0];
        if (*pdVar24 <= *apdStack_148[0]) {
          pdVar3 = pdVar24;
        }
        if ((*(byte *)((long)pdVar3 + 0x7d) & 1) != 0) break;
        FUN_1081e97e0();
        plVar30[uVar29] = (long)pdVar24;
      }
      func_0x0001081f7904(auStack_e8);
      uVar16 = uStack_d8;
      if (iStack_d0 != 0) {
        uVar21 = uVar29 >> 1 & 0x7fffffff;
        if ((param_2[6] <= (int)uVar21) || (iStack_d0 < 1)) goto LAB_1081f81bc;
        lVar15 = *(long *)(param_2 + 4) + uVar21 * 0x10;
        if ((uVar29 & 1) == 0) {
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
    uVar29 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    uVar10 = uStack_168._4_4_;
    uVar11 = uStack_150._4_4_;
    uVar21 = (ulong)uStack_150._4_4_;
    for (lVar15 = 0; uVar29 << 2 != lVar15; lVar15 = lVar15 + 4) {
      if (((ulong)(uStack_168._4_4_ & ((int)uStack_168._4_4_ >> 0x1f ^ 0xffffffffU)) << 2 == lVar15)
         || (*(undefined4 *)((long)piStack_170 + lVar15) = 0x7fffffff,
            (ulong)(uStack_150._4_4_ & ((int)uStack_150._4_4_ >> 0x1f ^ 0xffffffffU)) << 2 == lVar15
            )) goto LAB_1081f81bc;
      *(undefined4 *)((long)piStack_158 + lVar15) = 0x7fffffff;
    }
    uVar22 = uVar5 - 1;
    puStack_a8 = auStack_e8;
    uStack_a0 = 0x1000000000;
    uVar27 = (int)(uVar22 * uVar5) / 2;
    uVar31 = (ulong)uVar27;
    if (0x11 < (int)(uVar22 * uVar5)) {
      uVar16 = 0;
      uVar28 = uVar31;
      FUN_1081f8400(0x3ff0000000000000,0,uVar31);
      FUN_1081f83bc(&puStack_a8,uVar16,uVar28);
    }
    FUN_1081f8280(auStack_118,uVar31);
    FUN_1081f8280(apdStack_148,uVar31);
    uVar31 = 0;
    iVar32 = 0;
    iVar20 = 1;
    iVar25 = 1;
    plVar33 = plVar30;
    while (plVar33 = plVar33 + 1, uVar31 != (uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU))) {
      lVar15 = plVar30[uVar31];
      uVar31 = uVar31 + 1;
      plVar34 = plVar33;
      iVar26 = iVar25;
      for (iVar23 = iVar20; iVar23 < (int)uVar5; iVar23 = iVar23 + 1) {
        fVar37 = *(float *)(*plVar34 + 8);
        fVar38 = *(float *)(*plVar34 + 0xc);
        fVar40 = *(float *)(lVar15 + 8);
        fVar39 = *(float *)(lVar15 + 0xc);
        puStack_180 = (undefined1 *)CONCAT44(puStack_180._4_4_,iVar26);
        FUN_1081f82c8(&lStack_128,&puStack_180);
        dVar35 = (double)(fVar37 - fVar40);
        dVar36 = (double)(fVar38 - fVar39);
        dVar35 = dVar36 * dVar36 + dVar35 * dVar35;
        uVar28 = uStack_a0 & 0xffffffff;
        if ((int)uStack_a0 < (int)(uStack_a0._4_4_ >> 1)) {
          *(double *)(puStack_a8 + (long)(int)uStack_a0 * 8) = dVar35;
        }
        else {
          uVar16 = 1;
          FUN_1081f8400(0x3ff8000000000000,uVar28,1);
          *(double *)(uVar28 + (long)(int)uStack_a0 * 8) = dVar35;
          FUN_1081f83bc(&puStack_a8,uVar28,uVar16);
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + 1);
        puStack_180 = (undefined1 *)CONCAT44(puStack_180._4_4_,iVar32);
        FUN_1081f82c8(&piStack_f8,&puStack_180);
        iVar32 = iVar32 + 1;
        plVar34 = plVar34 + 1;
        iVar26 = iVar26 + 1;
      }
      iVar25 = iVar25 + uVar5 + 1;
      iVar20 = iVar20 + 1;
    }
    puStack_180 = puStack_a8;
    piVar18 = piStack_f8;
    if (1 < iStack_f0) {
      FUN_1081f8540((int)LZCOUNT(iStack_f0 + -2) * -2 + 0x40,piStack_f8,iStack_f0,&puStack_180);
      piVar18 = piStack_f8;
    }
    uVar22 = uVar8;
    for (uVar31 = 0; (uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)) != uVar31; uVar31 = uVar31 + 1)
    {
      if ((((long)iStack_f0 <= (long)uVar31) || (uVar6 = piVar18[uVar31], (int)uVar6 < 0)) ||
         (iStack_120 <= (int)uVar6)) goto LAB_1081f81bc;
      iVar32 = *(int *)(lStack_128 + (ulong)uVar6 * 4);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = iVar32 / (int)uVar5;
      }
      uVar1 = (int)uVar6 >> 1;
      piVar19 = piVar14;
      if ((uVar6 & 1) != 0) {
        piVar19 = piVar17;
      }
      if (piVar19[(int)uVar1] == 0x7fffffff) {
        uVar7 = iVar32 - uVar6 * uVar5;
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
          piVar19[(long)((ulong)uVar6 << 0x20) >> 0x21] = uVar2;
          piVar4[(long)((ulong)uVar7 << 0x20) >> 0x21] = uVar1;
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) break;
        }
      }
    }
    uVar31 = 0;
LAB_1081f7f68:
    if ((int)uVar11 <= (int)uVar31) {
LAB_1081f81bc:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1081f81c0);
      (*pcVar12)();
    }
    uVar5 = piVar14[uVar31 & 0xffffffff];
    piVar14[uVar31 & 0xffffffff] = 0x7fffffff;
    if ((int)uVar5 < 0) {
      piVar19 = piVar14;
      uVar27 = ~uVar5;
      if ((int)uVar11 <= (int)~uVar5) goto LAB_1081f81bc;
    }
    else {
      piVar19 = piVar17;
      uVar27 = uVar5;
      if ((int)uVar10 <= (int)uVar5) goto LAB_1081f81bc;
    }
    uVar28 = (ulong)(uint)piVar19[uVar27];
    piVar19[uVar27] = 0x7fffffff;
    bVar13 = true;
    bVar9 = true;
    do {
      uVar27 = (uint)uVar31;
      if (((int)uVar27 < 0) || (param_2[6] <= (int)uVar27)) goto LAB_1081f81bc;
      piVar19 = (int *)(*(long *)(param_2 + 4) + (uVar31 & 0xffffffff) * 0x10);
      plVar30 = *(long **)(param_2 + 0xe);
      if (bVar9) {
        if (bVar13) goto LAB_1081f8014;
LAB_1081f802c:
        FUN_108379448(plVar30);
        piVar18 = piVar19;
      }
      else {
        if (*(int *)(*plVar30 + 0x30) < 1) goto LAB_1081f8158;
        if (bVar13 == false) goto LAB_1081f802c;
        FUN_108377828(piVar19,0);
LAB_1081f8014:
        func_0x000108142250(plVar30,piVar19,bVar9 ^ 1);
        piVar18 = piVar19;
      }
      if (uVar5 == ((uint)uVar28 ^ -(uint)(byte)(bVar13 ^ uVar27 == (uint)uVar28)))
      goto LAB_1081f810c;
      piVar19 = piVar17;
      if (bVar13 == false) {
        if ((int)uVar11 <= (int)uVar27) goto LAB_1081f81bc;
        uVar27 = piVar14[uVar31 & 0xffffffff];
        uVar28 = (ulong)uVar27;
        piVar14[uVar31 & 0xffffffff] = 0x7fffffff;
        if ((int)uVar27 < 0) {
          uVar31 = (ulong)~uVar27;
          piVar19 = piVar14;
          if (uVar11 <= ~uVar27) goto LAB_1081f81bc;
        }
        else {
          uVar31 = uVar28;
          if ((int)uVar10 <= (int)uVar27) goto LAB_1081f81bc;
        }
      }
      else {
        if ((int)uVar10 <= (int)uVar27) goto LAB_1081f81bc;
        uVar27 = piVar17[uVar31 & 0xffffffff];
        uVar28 = (ulong)uVar27;
        piVar17[uVar31 & 0xffffffff] = 0x7fffffff;
        if ((int)uVar27 < 0) {
          uVar31 = (ulong)~uVar27;
          if (uVar10 <= ~uVar27) goto LAB_1081f81bc;
        }
        else {
          uVar31 = uVar28;
          piVar19 = piVar14;
          if ((int)uVar11 <= (int)uVar27) goto LAB_1081f81bc;
        }
      }
      bVar9 = false;
      piVar19[uVar31] = 0x7fffffff;
      uVar27 = (uint)uVar28;
      uVar31 = (ulong)(uVar27 ^ (int)uVar27 >> 0x1f);
      bVar13 = (bool)(bVar13 ^ (int)uVar27 < 0);
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
  iVar32 = piVar14[5];
  iVar20 = (int)piVar18;
  if (iVar20 <= piVar14[4] - iVar32) {
    piVar14[5] = iVar32 + iVar20;
    return piVar14;
  }
  if (0 < iVar20) {
    iVar25 = piVar14[5];
    piVar17 = piVar14;
    FUN_10840f278(piVar14,piVar18);
    func_0x00010840f168(piVar14,piVar17);
    FUN_10840f2ec(piVar14,iVar20 + iVar32,iVar32,iVar25);
  }
  return (int *)(*(long *)(piVar14 + 2) + (long)*piVar14 * (long)iVar32);
LAB_1081f810c:
  FUN_108377ec8(*(undefined8 *)(param_2 + 0xe));
  uVar31 = 0;
  while( true ) {
    if (uVar29 == uVar31) goto LAB_1081f8158;
    if (uVar21 == uVar31) goto LAB_1081f81bc;
    if (piVar14[uVar31] != 0x7fffffff) break;
    uVar31 = uVar31 + 1;
  }
  if ((int)uVar8 <= (int)uVar31) goto LAB_1081f8158;
  goto LAB_1081f7f68;
LAB_1081f8158:
  FUN_1081f8340(&lStack_128);
  FUN_1081f8340(&piStack_f8);
  func_0x0001081f87f0();
  _free(piVar17);
  _free();
  goto LAB_1081f817c;
}



/* Entry: 1081e7914; end: 1081e7947;  */

double * FUN_1081e7914(long param_1)

{
  double *pdVar1;
  
  pdVar1 = (double *)(param_1 + 8);
  while (*(int *)(pdVar1 + 0x21) == *(int *)((long)pdVar1 + 0x104)) {
    pdVar1 = (double *)pdVar1[0x1b];
    if (pdVar1 == (double *)0x0) {
      *(undefined1 *)(param_1 + 0x14c) = 1;
      return (double *)0x0;
    }
  }
  do {
    if (*(char *)((long)pdVar1 + 0x7c) != '\x01') {
      return pdVar1;
    }
    pdVar1 = (double *)pdVar1[0xc];
  } while (*pdVar1 != 1.0);
  return (double *)0x0;
}



/* Entry: 1081e7948; end: 1081e797f;  */

undefined8 * FUN_1081e7948(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  
  func_0x0001081e7e1c();
  FUN_1081e7980();
  func_0x0001081e7e10(*unaff_x20);
  func_0x0001081e7e1c();
  FUN_1081eacac();
  func_0x0001081e7e6c();
  uStack_40 = (undefined4)param_1;
  func_0x0001081e7e28(auStack_70);
  FUN_1081ef8d8(param_1);
  return unaff_x20;
}



/* Entry: 1081e7980; end: 1081e79d3;  */

void FUN_1081e7980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar1 = (undefined8 *)**(long **)*param_1;
    func_0x0001081e7dcc(puVar1,2);
    uVar2 = param_1[1];
    puVar1[1] = param_1[2];
    *puVar1 = uVar2;
    func_0x0001081e7be8(*param_1,puVar1);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 1081e79d4; end: 1081e7a07;  */

undefined8 FUN_1081e79d4(undefined8 param_1)

{
  undefined8 unaff_x20;
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  
  FUN_1081e7e10();
  func_0x0001081e7e1c();
  FUN_1081eacac();
  func_0x0001081e7e6c();
  uStack_40 = (undefined4)param_1;
  func_0x0001081e7e28(auStack_70);
  FUN_1081ef8d8(param_1);
  return unaff_x20;
}



/* Entry: 1081e7a08; end: 1081e7a53;  */

undefined8 * FUN_1081e7a08(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [64];
  
  func_0x0001081e7e1c();
  FUN_1081e7980();
  func_0x0001081e7e10(*unaff_x20);
  func_0x0001081e7e1c();
  FUN_1081eacac(0x3f800000);
  func_0x0001081ddb44(auStack_60,unaff_x19);
  func_0x0001081e7e28(0x3f800000,auStack_60);
  FUN_1081ef93c();
  return unaff_x20;
}



/* Entry: 1081e7a54; end: 1081e7b27;  */

undefined8 * FUN_1081e7a54(undefined8 param_1,undefined8 *param_2,int param_3,float *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined4 uStack_40;
  
  if (param_3 != 1) {
    puVar2 = (undefined8 *)**(long **)*param_2;
    if (param_3 == 4) {
      func_0x0001081e7dcc(puVar2,4);
      uVar6 = *(undefined8 *)param_4;
      uVar5 = *(undefined8 *)(param_4 + 6);
      uVar4 = *(undefined8 *)(param_4 + 4);
      puVar2[1] = *(undefined8 *)(param_4 + 2);
      *puVar2 = uVar6;
      puVar2[3] = uVar5;
      puVar2[2] = uVar4;
      func_0x0001081e7e1c(param_2,puVar2);
      FUN_1081e7980();
      func_0x0001081e7e10(*unaff_x20,unaff_x19);
      func_0x0001081e7e1c();
      FUN_1081eacac(0x3f800000);
      func_0x0001081ddb44(auStack_60,unaff_x19);
      func_0x0001081e7e28(0x3f800000,auStack_60);
      func_0x0001081ef93c();
    }
    else {
      if (param_3 == 3) {
        func_0x0001081e7dcc(puVar2,3);
        func_0x0001081e7e44();
        func_0x0001081e7e1c();
        FUN_1081e7980();
        func_0x0001081e7e10(*unaff_x20,unaff_x19);
        func_0x0001081e7e1c();
        FUN_1081eacac();
        func_0x0001081e7e6c();
        uStack_40 = (undefined4)param_1;
        func_0x0001081e7e28(auStack_70);
        FUN_1081ef8d8(param_1);
        return unaff_x20;
      }
      if (param_3 != 2) {
        return puVar2;
      }
      func_0x0001081e7dcc(puVar2,3);
      func_0x0001081e7e44();
      func_0x0001081e7e1c();
      FUN_1081e7980();
      func_0x0001081e7e10(*unaff_x20,unaff_x19);
      func_0x0001081e7e1c();
      FUN_1081eacac(0x3f800000);
      func_0x0001081e7e6c();
      func_0x0001081e7e28(0x3f800000,auStack_60);
      func_0x0001081ef98c();
    }
    return unaff_x20;
  }
  puVar2 = param_2;
  if (*(char *)(param_2 + 3) == '\x01') {
    bVar1 = false;
    if ((*(float *)(param_2 + 1) == param_4[2]) &&
       (bVar1 = false, !NAN(*(float *)((long)param_2 + 0xc)) && !NAN(param_4[3]))) {
      bVar1 = *(float *)((long)param_2 + 0xc) == param_4[3];
    }
    if (bVar1) {
      bVar1 = false;
      if ((*(float *)(param_2 + 2) == *param_4) &&
         (bVar1 = false, !NAN(*(float *)((long)param_2 + 0x14)) && !NAN(param_4[1]))) {
        bVar1 = *(float *)((long)param_2 + 0x14) == param_4[1];
      }
      if (bVar1) {
        uVar3 = 0;
        goto LAB_1081e7b84;
      }
    }
    FUN_1081e7980(param_2);
  }
  uVar4 = *(undefined8 *)param_4;
  param_2[2] = *(undefined8 *)(param_4 + 2);
  param_2[1] = uVar4;
  uVar3 = 1;
LAB_1081e7b84:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return puVar2;
}



/* Entry: 1081e7b28; end: 1081e7c5b;  */

void FUN_1081e7b28(long param_1,float *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    bVar1 = false;
    if ((*(float *)(param_1 + 8) == param_2[2]) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0xc)) && !NAN(param_2[3]))) {
      bVar1 = *(float *)(param_1 + 0xc) == param_2[3];
    }
    if (bVar1) {
      bVar1 = false;
      if ((*(float *)(param_1 + 0x10) == *param_2) &&
         (bVar1 = false, !NAN(*(float *)(param_1 + 0x14)) && !NAN(param_2[1]))) {
        bVar1 = *(float *)(param_1 + 0x14) == param_2[1];
      }
      if (bVar1) {
        uVar2 = 0;
        goto LAB_1081e7b84;
      }
    }
    FUN_1081e7980(param_1);
  }
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar2 = 1;
LAB_1081e7b84:
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  return;
}



/* Entry: 1081e7c5c; end: 1081e7caf;  */

void FUN_1081e7c5c(undefined8 param_1)

{
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  
  func_0x0001081e7e1c();
  FUN_1081eacac();
  func_0x0001081e7e6c();
  uStack_40 = (undefined4)param_1;
  func_0x0001081e7e28(auStack_70);
  FUN_1081ef8d8(param_1);
  return;
}



/* Entry: 1081e7cb0; end: 1081e7ccf;  */

void FUN_1081e7cb0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1081e7cd0(param_1,&uStack_11);
  return;
}



/* Entry: 1081e7cd0; end: 1081e7e0f;  */

long FUN_1081e7cd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001081865e0(param_1,0x118,8);
  *(long *)(param_1 + 8) = lVar1 + 0x118;
  _bzero();
  return lVar1;
}



/* Entry: 1081e7e10; end: 1081e7e77;  */

void FUN_1081e7e10(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x144);
  *(int *)((long)param_1 + 0x144) = iVar1 + 1;
  if (iVar1 == 0) {
    puVar2 = param_1 + 1;
  }
  else {
    puVar2 = *(undefined8 **)*param_1;
    FUN_1081e7cb0();
  }
  lVar3 = param_1[0x24];
  puVar2[0x1c] = lVar3;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 0xd8) = puVar2;
  }
  param_1[0x24] = puVar2;
  return;
}



/* Entry: 1081e7e78; end: 1081e8163;  */

undefined8 FUN_1081e7e78(double *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  double *pdVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint extraout_w9;
  uint extraout_w9_00;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_a0 [8];
  double adStack_98 [7];
  
  uVar8 = 0;
  pdVar7 = param_1 + 3;
  for (uVar11 = 1; uVar11 != 4; uVar11 = uVar11 + 1) {
    dVar17 = (param_1 + uVar8 * 2)[1];
    if ((*pdVar7 < dVar17) || ((dVar17 == *pdVar7 && (pdVar7[-1] < param_1[uVar8 * 2])))) {
      uVar8 = uVar11;
    }
    pdVar7 = pdVar7 + 2;
  }
  iVar10 = 0;
  uVar11 = 0xffffffff;
  *(char *)param_2 = (char)uVar8;
  do {
    uVar9 = uVar8;
    uVar13 = (uint)uVar11;
    uVar12 = (uint)uVar9;
    if (iVar10 == 2) break;
    uVar15 = 0xffffffff;
    for (uVar8 = 0; uVar13 = (uint)uVar11, uVar8 != 4; uVar8 = uVar8 + 1) {
      uVar16 = uVar15;
      if (uVar9 != uVar8) {
        func_0x0001081e82a0((uint)uVar8 ^ uVar12);
        uVar1 = extraout_w8 ^ uVar12 ^ 3;
        bVar14 = (byte)extraout_w8 ^ (byte)uVar8 ^ 3;
        pdVar7 = param_1;
        func_0x0001081e8164(param_1,uVar9,uVar8,auStack_a0);
        if (((ulong)pdVar7 & 1) == 0) {
          *(char *)((long)param_2 + 1) = (char)uVar1;
          goto LAB_1081e812c;
        }
        dVar17 = adStack_98[(long)(int)uVar1 * 2] - adStack_98[(long)(int)uVar12 * 2];
        cVar6 = NAN(dVar17);
        bVar5 = dVar17 == 0.0;
        cVar4 = dVar17 < 0.0;
        cVar3 = !(bool)cVar4;
        if (0.0 < dVar17) {
          cVar3 = cVar3 + '\x01';
        }
        func_0x0001081e828c(cVar3);
        uVar1 = extraout_w9;
        if (!bVar5 && cVar4 == cVar6) {
          uVar1 = extraout_w9 + 1;
        }
        if ((uVar1 ^ extraout_w8_00) == 2) {
          uVar11 = uVar8;
          if (-1 < (int)uVar13) {
            *param_2 = 0x300;
            dVar17 = param_1[2];
            dVar24 = param_1[3];
            dVar23 = *param_1;
            dVar18 = param_1[1];
            bVar5 = false;
            if ((dVar17 == dVar23) && (bVar5 = false, !NAN(dVar24) && !NAN(dVar18))) {
              bVar5 = dVar24 == dVar18;
            }
            if (!bVar5) {
              dVar22 = param_1[6];
              dVar21 = param_1[7];
              bVar5 = false;
              if ((dVar17 == dVar22) && (bVar5 = false, !NAN(dVar24) && !NAN(dVar21))) {
                bVar5 = dVar24 == dVar21;
              }
              if (!bVar5) {
                dVar24 = param_1[4];
                dVar25 = param_1[5];
                bVar5 = false;
                if ((dVar24 == dVar23) && (bVar5 = false, !NAN(dVar25) && !NAN(dVar18))) {
                  bVar5 = dVar25 == dVar18;
                }
                if (!bVar5) {
                  bVar5 = false;
                  if ((dVar24 == dVar22) && (bVar5 = false, !NAN(dVar25) && !NAN(dVar21))) {
                    bVar5 = dVar25 == dVar21;
                  }
                  if (!bVar5) {
                    dVar19 = param_1[5] - dVar18;
                    dVar18 = param_1[3] - dVar18;
                    dVar25 = param_1[5] - dVar21;
                    dVar21 = param_1[3] - dVar21;
                    dVar19 = dVar19 * dVar19 + (dVar24 - dVar23) * (dVar24 - dVar23);
                    dVar20 = dVar18 * dVar18 + (dVar17 - dVar23) * (dVar17 - dVar23);
                    dVar18 = dVar25 * dVar25 + (dVar24 - dVar22) * (dVar24 - dVar22);
                    dVar23 = dVar21 * dVar21 + (dVar17 - dVar22) * (dVar17 - dVar22);
                    dVar18 = (double)((ulong)dVar18 ^
                                     ((ulong)dVar18 ^ (ulong)dVar19) & ~-(ulong)(dVar18 < dVar19));
                    dVar23 = (double)((ulong)dVar23 ^
                                     ((ulong)dVar23 ^ (ulong)dVar20) & ~-(ulong)(dVar23 < dVar20));
                    dVar17 = dVar18;
                    if (dVar23 <= dVar18) {
                      dVar17 = dVar23;
                    }
                    if (ABS(dVar17) < 1.1920928955078125e-07) {
                      bVar14 = 2;
                      if (dVar18 <= dVar23) {
                        bVar14 = 1;
                      }
                      goto LAB_1081e812c;
                    }
                    goto LAB_1081e8054;
                  }
                }
                bVar14 = 1;
                goto LAB_1081e812c;
              }
            }
            bVar14 = 2;
LAB_1081e812c:
            *(byte *)(param_2 + 1) = bVar14;
            return 3;
          }
        }
        else {
          uVar16 = (uint)uVar8;
          if (extraout_w8_00 != uVar1) {
            uVar16 = uVar15;
          }
        }
      }
LAB_1081e8054:
      uVar15 = uVar16;
    }
    if (-1 < (int)uVar13) break;
    iVar10 = iVar10 + 1;
    uVar8 = (ulong)uVar15;
  } while (-1 < (int)uVar15);
  uVar15 = uVar12 ^ 3;
  if (-1 < (int)uVar13) {
    uVar15 = uVar13;
  }
  func_0x0001081e82a0(uVar15 ^ uVar12);
  uVar13 = extraout_w8_01 ^ 3 ^ uVar12;
  uVar16 = extraout_w8_01 ^ 3 ^ uVar15;
  *(char *)param_2 = (char)uVar9;
  *(char *)((long)param_2 + 1) = (char)uVar13;
  func_0x0001081e8164(param_1,uVar13,uVar16,auStack_a0);
  if (((ulong)param_1 & 1) == 0) {
    *(char *)(param_2 + 1) = (char)uVar15;
  }
  else {
    dVar17 = adStack_98[(long)(int)uVar12 * 2] - adStack_98[(long)(int)uVar13 * 2];
    cVar6 = NAN(dVar17);
    bVar5 = dVar17 == 0.0;
    cVar4 = dVar17 < 0.0;
    cVar3 = !(bool)cVar4;
    if (0.0 < dVar17) {
      cVar3 = cVar3 + '\x01';
    }
    func_0x0001081e828c(cVar3);
    uVar12 = extraout_w9_00;
    if (!bVar5 && cVar4 == cVar6) {
      uVar12 = extraout_w9_00 + 1;
    }
    uVar2 = (undefined1)uVar16;
    if ((uVar12 ^ extraout_w8_02) == 2) {
      *(char *)(param_2 + 1) = (char)uVar15;
      *(undefined1 *)((long)param_2 + 3) = uVar2;
      return 4;
    }
    *(undefined1 *)(param_2 + 1) = uVar2;
  }
  return 3;
}



/* Entry: 1081e8164; end: 1081e82b3;  */

undefined8 FUN_1081e8164(double *param_1,uint param_2,uint param_3,double *param_4)

{
  uint uVar1;
  double *pdVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pdVar2 = param_1 + (long)(int)param_2 * 2;
  dVar6 = (param_1 + (long)(int)param_3 * 2)[1];
  dVar4 = dVar6 - pdVar2[1];
  dVar5 = param_1[(long)(int)param_3 * 2] - *pdVar2;
  if (1.1920928955078125e-07 <= ABS(dVar6 - pdVar2[1])) {
    lVar3 = 4;
    pdVar2 = param_4 + 1;
    do {
      dVar6 = param_1[1];
      pdVar2[-1] = dVar4 * dVar6 + dVar5 * *param_1;
      *pdVar2 = *param_1 * -dVar4 + dVar5 * dVar6;
      lVar3 = lVar3 + -1;
      param_1 = param_1 + 2;
      pdVar2 = pdVar2 + 2;
    } while (lVar3 != 0);
  }
  else {
    if (ABS(dVar5) < 1.1920928955078125e-07) {
      return 0;
    }
    dVar6 = param_1[1];
    dVar5 = *param_1;
    dVar8 = param_1[3];
    dVar7 = param_1[2];
    dVar9 = param_1[4];
    dVar11 = param_1[7];
    dVar10 = param_1[6];
    param_4[5] = param_1[5];
    param_4[4] = dVar9;
    param_4[7] = dVar11;
    param_4[6] = dVar10;
    param_4[1] = dVar6;
    *param_4 = dVar5;
    param_4[3] = dVar8;
    param_4[2] = dVar7;
    if (dVar4 == 0.0) {
      return 1;
    }
    dVar4 = pdVar2[1];
    param_4[(long)(int)param_3 * 2 + 1] = dVar4;
    uVar1 = 1U >> (ulong)(3 - (param_3 ^ param_2) & 0x1f) ^ 3;
    param_3 = uVar1 ^ param_3;
    uVar1 = uVar1 ^ param_2;
    if (ABS(param_1[(long)(int)param_3 * 2 + 1] - dVar4) < 1.1920928955078125e-07) {
      param_4[(long)(int)param_3 * 2 + 1] = dVar4;
      dVar4 = pdVar2[1];
    }
    if (ABS(param_1[(long)(int)uVar1 * 2 + 1] - dVar4) < 1.1920928955078125e-07) {
      param_4[(long)(int)uVar1 * 2 + 1] = dVar4;
    }
  }
  return 1;
}



/* Entry: 1081e82b4; end: 1081e82f3;  */

void FUN_1081e82b4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)param_1;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  uVar1 = 1;
  if ((*(byte *)(*(long *)(param_1 + 8) + 0xe) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  FUN_1081e82f4();
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  return;
}



/* Entry: 1081e82f4; end: 1081e8577;  */

void FUN_1081e82f4(ulong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  uint uVar8;
  long extraout_x8;
  byte *pbVar9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 unaff_x21;
  byte *unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  float *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar12;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  do {
    uVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = *(ulong *)(uVar4 + 8);
    func_0x000108377398();
    if ((uVar5 & 1) == 0) {
      param_1 = 0;
      *(undefined1 *)(uVar4 + 0x8e) = 1;
    }
    else {
      param_2 = *(undefined1 **)(uVar4 + 8);
      puVar6 = (undefined8 *)((long)register0x00000008 + -0xc0);
      FUN_1081e8e40();
      unaff_x21 = 0;
      pbVar9 = *(byte **)((long)register0x00000008 + -0xc0);
      unaff_x22 = *(byte **)((long)register0x00000008 + -0xb8);
      *(byte **)((long)register0x00000008 + -0xd8) = pbVar9;
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x98);
      unaff_x24 = &UNK_10df0970c;
      unaff_d8 = 0x3600000036000000;
      unaff_d9 = 0x3f800000;
      while( true ) {
        in_ZR = pbVar9 == unaff_x22;
        if ((bool)in_ZR) break;
        uVar8 = (uint)*pbVar9;
        if (4 < uVar8 - 1) {
          if (uVar8 != 0) goto LAB_1081e8570;
          unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xd0);
          if (((uint)unaff_x21 & (*(byte *)(uVar4 + 0x8d) ^ 0xffffffff)) != 0) {
            func_0x0001081e9258();
          }
          func_0x0001081e9268();
          *(undefined1 *)puVar6 = 0;
          uVar11 = *unaff_x20;
          func_0x0001081e9248();
          *(undefined8 *)((long)register0x00000008 + -0x98) = uVar11;
          puVar6 = (undefined8 *)(uVar4 + 0x10);
          func_0x0001081e8e18();
          unaff_x21 = 0;
          *puVar6 = *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0xa0) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          goto LAB_1081e84fc;
        }
        unaff_x25 = *(float **)((long)register0x00000008 + -200);
        switch(uVar8) {
        case 1:
          uVar11 = **(undefined8 **)((long)register0x00000008 + -0xd0);
          func_0x0001081e9248();
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
          puVar6 = (undefined8 *)((long)register0x00000008 + -0x98);
          param_2 = (undefined1 *)((long)register0x00000008 + -0x90);
          FUN_1081de720();
          if ((int)puVar6 != 0) {
            if (*(int *)(uVar4 + 0x54) == 0) {
LAB_1081e8570:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1081e8574);
              (*pcVar2)();
            }
            if (1 < *(byte *)(*(long *)(uVar4 + 0x48) + (long)*(int *)(uVar4 + 0x54) + -1)) {
              *(undefined8 *)((long)register0x00000008 + -0x98) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
              if (*(int *)(uVar4 + 0x24) == 0) goto LAB_1081e8570;
              *(undefined8 *)(*(long *)(uVar4 + 0x18) + (long)*(int *)(uVar4 + 0x24) * 8 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
            }
            break;
          }
          puVar10 = (undefined8 *)0x1;
          goto code_r0x0001081e84b8;
        case 2:
          func_0x0001081e921c();
          func_0x0001081e92a8();
          iVar3 = (int)puVar6;
          goto joined_r0x0001081e8490;
        case 3:
          func_0x0001081e921c();
          func_0x0001081e92a8();
          if ((int)puVar6 != 0) {
            puVar10 = puVar6;
            if ((int)puVar6 == 2) {
              if (*unaff_x25 == 1.0) {
                puVar10 = (undefined8 *)0x2;
              }
              else {
                puVar10 = (undefined8 *)0x3;
              }
            }
            goto code_r0x0001081e84b8;
          }
          break;
        case 4:
          func_0x0001081e921c();
          uVar11 = *(undefined8 *)(extraout_x8 + 0x10);
          func_0x0001081e9248();
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
          puVar6 = (undefined8 *)((long)register0x00000008 + -0x98);
          param_2 = (undefined1 *)((long)register0x00000008 + -0x98);
          func_0x0001081f8d04();
          iVar3 = (int)puVar6;
joined_r0x0001081e8490:
          puVar10 = puVar6;
          if (iVar3 != 0) {
code_r0x0001081e84b8:
            func_0x0001081e9268();
            iVar3 = (int)puVar10;
            *(char *)puVar6 = (char)puVar10;
            uVar5 = (ulong)(iVar3 - (iVar3 + 1U >> 2));
            param_2 = (undefined1 *)((long)register0x00000008 + -0x90);
            FUN_10840f460(uVar4 + 0x10,param_2,uVar5);
            if (iVar3 == 3) {
              fVar12 = *unaff_x25;
              unaff_d10 = (ulong)(uint)fVar12;
              pfVar7 = (float *)(uVar4 + 0x28);
              func_0x0001081e8ea0();
              *pfVar7 = fVar12;
            }
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)(unaff_x23 + uVar5 * 8);
            unaff_x21 = 1;
            unaff_x20 = puVar10;
          }
          break;
        case 5:
          func_0x0001081e9258();
          unaff_x21 = 0;
        }
LAB_1081e84fc:
        puVar6 = (undefined8 *)((long)register0x00000008 + -0xd8);
        func_0x0001081e8ec8();
        pbVar9 = *(byte **)((long)register0x00000008 + -0xd8);
      }
      if (((uint)unaff_x21 & (*(byte *)(uVar4 + 0x8d) ^ 0xffffffff)) != 0) {
        func_0x0001081e9258();
      }
      func_0x0001081e9268();
      *(undefined1 *)puVar6 = 6;
      param_1 = (ulong)(*(int *)(uVar4 + 0x54) - 1);
    }
    func_0x0001081e92c8(*(undefined8 *)((long)register0x00000008 + -0x78));
    if ((bool)in_ZR) {
      return;
    }
    unaff_x30 = FUN_1081e8578;
    ___stack_chk_fail();
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
    *(undefined1 **)(param_1 + 8) = param_2;
    in_ZR = (param_2[0xe] & 1) == 0;
    uVar1 = 1;
    if ((bool)in_ZR) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x19 = uVar4;
  } while( true );
}



/* Entry: 1081e8578; end: 1081e859f;  */

void FUN_1081e8578(ulong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  uint uVar9;
  long extraout_x8;
  byte *pbVar10;
  ulong unaff_x19;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  float *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar13;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  do {
    uVar8 = param_1;
    *(int *)(uVar8 + 0x54) = *(int *)(uVar8 + 0x54) + -1;
    *(undefined1 **)(uVar8 + 8) = param_2;
    uVar3 = (param_2[0xe] & 1) == 0;
    uVar1 = 1;
    if ((bool)uVar3) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(uVar8 + 0x84) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = *(ulong *)(uVar8 + 8);
    func_0x000108377398();
    if ((uVar5 & 1) == 0) {
      param_1 = 0;
      *(undefined1 *)(uVar8 + 0x8e) = 1;
    }
    else {
      param_2 = *(undefined1 **)(uVar8 + 8);
      puVar6 = (undefined8 *)((long)register0x00000008 + -0xc0);
      FUN_1081e8e40();
      unaff_x21 = 0;
      pbVar10 = *(byte **)((long)register0x00000008 + -0xc0);
      unaff_x22 = *(byte **)((long)register0x00000008 + -0xb8);
      *(byte **)((long)register0x00000008 + -0xd8) = pbVar10;
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x98);
      unaff_x24 = &UNK_10df0970c;
      unaff_d8 = 0x3600000036000000;
      unaff_d9 = 0x3f800000;
      while( true ) {
        uVar3 = pbVar10 == unaff_x22;
        if ((bool)uVar3) break;
        uVar9 = (uint)*pbVar10;
        if (4 < uVar9 - 1) {
          if (uVar9 != 0) goto LAB_1081e8570;
          unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xd0);
          if (((uint)unaff_x21 & (*(byte *)(uVar8 + 0x8d) ^ 0xffffffff)) != 0) {
            func_0x0001081e9258();
          }
          func_0x0001081e9268();
          *(undefined1 *)puVar6 = 0;
          uVar12 = *unaff_x20;
          func_0x0001081e9248();
          *(undefined8 *)((long)register0x00000008 + -0x98) = uVar12;
          puVar6 = (undefined8 *)(uVar8 + 0x10);
          func_0x0001081e8e18();
          unaff_x21 = 0;
          *puVar6 = *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0xa0) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          goto LAB_1081e84fc;
        }
        unaff_x25 = *(float **)((long)register0x00000008 + -200);
        switch(uVar9) {
        case 1:
          uVar12 = **(undefined8 **)((long)register0x00000008 + -0xd0);
          func_0x0001081e9248();
          *(undefined8 *)((long)register0x00000008 + -0x90) = uVar12;
          puVar6 = (undefined8 *)((long)register0x00000008 + -0x98);
          param_2 = (undefined1 *)((long)register0x00000008 + -0x90);
          FUN_1081de720();
          if ((int)puVar6 != 0) {
            if (*(int *)(uVar8 + 0x54) == 0) {
LAB_1081e8570:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1081e8574);
              (*pcVar2)();
            }
            if (1 < *(byte *)(*(long *)(uVar8 + 0x48) + (long)*(int *)(uVar8 + 0x54) + -1)) {
              *(undefined8 *)((long)register0x00000008 + -0x98) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
              if (*(int *)(uVar8 + 0x24) == 0) goto LAB_1081e8570;
              *(undefined8 *)(*(long *)(uVar8 + 0x18) + (long)*(int *)(uVar8 + 0x24) * 8 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
            }
            break;
          }
          puVar11 = (undefined8 *)0x1;
          goto code_r0x0001081e84b8;
        case 2:
          func_0x0001081e921c();
          func_0x0001081e92a8();
          iVar4 = (int)puVar6;
          goto joined_r0x0001081e8490;
        case 3:
          func_0x0001081e921c();
          func_0x0001081e92a8();
          if ((int)puVar6 != 0) {
            puVar11 = puVar6;
            if ((int)puVar6 == 2) {
              if (*unaff_x25 == 1.0) {
                puVar11 = (undefined8 *)0x2;
              }
              else {
                puVar11 = (undefined8 *)0x3;
              }
            }
            goto code_r0x0001081e84b8;
          }
          break;
        case 4:
          func_0x0001081e921c();
          uVar12 = *(undefined8 *)(extraout_x8 + 0x10);
          func_0x0001081e9248();
          *(undefined8 *)((long)register0x00000008 + -0x80) = uVar12;
          puVar6 = (undefined8 *)((long)register0x00000008 + -0x98);
          param_2 = (undefined1 *)((long)register0x00000008 + -0x98);
          func_0x0001081f8d04();
          iVar4 = (int)puVar6;
joined_r0x0001081e8490:
          puVar11 = puVar6;
          if (iVar4 != 0) {
code_r0x0001081e84b8:
            func_0x0001081e9268();
            iVar4 = (int)puVar11;
            *(char *)puVar6 = (char)puVar11;
            uVar5 = (ulong)(iVar4 - (iVar4 + 1U >> 2));
            param_2 = (undefined1 *)((long)register0x00000008 + -0x90);
            FUN_10840f460(uVar8 + 0x10,param_2,uVar5);
            if (iVar4 == 3) {
              fVar13 = *unaff_x25;
              unaff_d10 = (ulong)(uint)fVar13;
              pfVar7 = (float *)(uVar8 + 0x28);
              func_0x0001081e8ea0();
              *pfVar7 = fVar13;
            }
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)(unaff_x23 + uVar5 * 8);
            unaff_x21 = 1;
            unaff_x20 = puVar11;
          }
          break;
        case 5:
          func_0x0001081e9258();
          unaff_x21 = 0;
        }
LAB_1081e84fc:
        puVar6 = (undefined8 *)((long)register0x00000008 + -0xd8);
        func_0x0001081e8ec8();
        pbVar10 = *(byte **)((long)register0x00000008 + -0xd8);
      }
      if (((uint)unaff_x21 & (*(byte *)(uVar8 + 0x8d) ^ 0xffffffff)) != 0) {
        func_0x0001081e9258();
      }
      func_0x0001081e9268();
      *(undefined1 *)puVar6 = 6;
      param_1 = (ulong)(*(int *)(uVar8 + 0x54) - 1);
    }
    func_0x0001081e92c8(*(undefined8 *)((long)register0x00000008 + -0x78));
    if ((bool)uVar3) {
      return;
    }
    unaff_x30 = FUN_1081e8578;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x19 = uVar8;
  } while( true );
}



/* Entry: 1081e85a0; end: 1081e85fb;  */

long FUN_1081e85a0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x8c) = 0;
  if ((*(byte *)(param_1 + 0x8e) & 1) != 0) {
    return 0;
  }
  lVar1 = param_1;
  FUN_1081e85fc();
  if ((int)lVar1 != 0) {
    FUN_1081e8cc4(param_1);
    if ((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 0x144) == 0)) {
      FUN_1081e8d04(*(undefined8 *)(param_1 + 0x78));
    }
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 1081e85fc; end: 1081e8cc3;  */

void FUN_1081e85fc(double param_1,double param_2,float param_3,float param_4,undefined8 *param_5)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  undefined8 *puVar21;
  float *pfVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long *plVar30;
  byte *pbVar31;
  long lVar32;
  char *pcVar33;
  uint uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  float fStack_278;
  char acStack_254 [4];
  undefined8 uStack_250;
  double dStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined1 auStack_234 [12];
  undefined8 uStack_228;
  undefined1 auStack_220 [4];
  uint uStack_21c;
  int iStack_200;
  char acStack_1fc [88];
  char acStack_1a4 [184];
  float afStack_ec [3];
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  
  lVar18 = 0;
  uStack_a0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar30 = param_5 + 0xb;
  puVar27 = (undefined8 *)*plVar30;
  pbVar31 = (byte *)param_5[9];
  pbVar2 = pbVar31 + *(int *)(param_5 + 0x11);
  puVar29 = (undefined8 *)param_5[3];
  pfVar22 = (float *)param_5[6];
code_r0x0001081e86b4:
  do {
    fVar35 = SUB84(param_1,0);
    fVar37 = SUB84(param_2,0);
    bVar6 = *pbVar31;
    uVar34 = (uint)bVar6;
    if (bVar6 == 6) {
      FUN_1081e7980(plVar30);
      if (((puVar27 != (undefined8 *)0x0) && (*(int *)((long)puVar27 + 0x144) != 0)) &&
         ((*(byte *)((long)param_5 + 0x8d) & 1) == 0)) {
        func_0x0001081e92a0();
      }
LAB_1081e8c80:
      bVar9 = uVar34 == 6;
      uVar16 = (ulong)bVar9;
      func_0x0001081e92c8(uStack_a0);
      if (!bVar9) {
        ___stack_chk_fail();
        FUN_1081e7980(uVar16 + 0x58);
        if ((*(long *)(uVar16 + 0x58) != 0) && (*(int *)(*(long *)(uVar16 + 0x58) + 0x144) != 0)) {
          FUN_1081e8f8c();
          FUN_1081e7980(uVar16 + 0x58);
          *(undefined8 *)(uVar16 + 0x58) = 0;
        }
        return;
      }
      return;
    }
    if (pbVar31 == pbVar2) {
      *(undefined1 *)((long)param_5 + 0x8c) = 1;
    }
    if (5 < bVar6) goto LAB_1081e8c80;
    pbVar31 = pbVar31 + 1;
    switch(bVar6) {
    case 0:
      if (puVar27 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)param_5[0xf];
        puVar28 = *(undefined8 **)*puVar21;
        puVar27 = puVar28;
        func_0x0001081865e0(puVar28,0x158,8);
        puVar28[1] = puVar27 + 0x2b;
        puVar27[0x1f] = 0;
        puVar27[0x20] = 0;
        *(undefined4 *)((long)puVar27 + 0x144) = 0;
        *(undefined1 *)((long)puVar27 + 0x14c) = 0;
        param_1 = 0.0;
        puVar27[0x25] = 0;
        puVar27[0x24] = 0;
        puVar27[0x27] = 0;
        puVar27[0x26] = 0;
        do {
          puVar28 = puVar21;
          puVar21 = (undefined8 *)puVar28[0x25];
        } while (puVar21 != (undefined8 *)0x0);
        puVar28[0x25] = puVar27;
        FUN_1081e7980(plVar30);
        *plVar30 = (long)puVar27;
      }
      else if (*(int *)((long)puVar27 + 0x144) != 0) {
        func_0x0001081e92a0();
      }
      bVar6 = *(byte *)((long)param_5 + 0x8c);
      iVar38 = *(int *)((long)param_5 + (ulong)bVar6 * 4 + 0x80);
      *puVar27 = *param_5;
      *(byte *)((long)puVar27 + 0x14d) = bVar6;
      *(bool *)((long)puVar27 + 0x14f) = iVar38 == 1;
      puVar29 = puVar29 + lVar18;
      lVar18 = 1;
      goto code_r0x0001081e86b4;
    case 1:
      func_0x0001081e92bc();
      func_0x0001081e7b28();
      break;
    case 2:
      func_0x0001081e9270();
      param_2 = (double)(ulong)(uint)(param_4 * fVar37);
      fVar35 = param_4 * fVar37 + fVar35 * param_3;
      param_1 = (double)(ulong)(uint)fVar35;
      if ((fVar35 < 0.0) &&
         (puVar21 = puVar29, FUN_108351820(puVar29,&uStack_250), (int)puVar21 != 1)) {
        fVar35 = (float)uStack_250 - (float)uStack_250;
        for (lVar23 = 4; param_1 = (double)(ulong)(uint)fVar35, lVar23 != 0x28; lVar23 = lVar23 + 4)
        {
          param_2 = (double)(ulong)(uint)*(float *)((long)&uStack_250 + lVar23);
          fVar35 = fVar35 * *(float *)((long)&uStack_250 + lVar23);
        }
        if (NAN(fVar35)) goto LAB_1081e8c80;
        for (lVar23 = 0; lVar23 != 0x28; lVar23 = lVar23 + 8) {
          uVar36 = *(undefined8 *)((long)&uStack_250 + lVar23);
          iVar38 = -(uint)(ABS((float)uVar36) < 1.9073486e-06);
          iVar39 = -(uint)(ABS((float)((ulong)uVar36 >> 0x20)) < 1.9073486e-06);
          param_2 = (double)CONCAT44(iVar39,iVar38);
          param_1 = (double)CONCAT17((byte)((ulong)uVar36 >> 0x38) & ~(byte)((uint)iVar39 >> 0x18),
                                     CONCAT16((byte)((ulong)uVar36 >> 0x30) &
                                              ~(byte)((uint)iVar39 >> 0x10),
                                              CONCAT15((byte)((ulong)uVar36 >> 0x28) &
                                                       ~(byte)((uint)iVar39 >> 8),
                                                       CONCAT14((byte)((ulong)uVar36 >> 0x20) &
                                                                ~(byte)iVar39,
                                                                CONCAT13((byte)((ulong)uVar36 >>
                                                                               0x18) &
                                                                         ~(byte)((uint)iVar38 >>
                                                                                0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar36 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar36 >> 8) &
                                                           ~(byte)((uint)iVar38 >> 8),
                                                           (byte)uVar36 & ~(byte)iVar38)))))));
          *(double *)((long)&uStack_250 + lVar23) = param_1;
        }
        puVar21 = &uStack_250;
        func_0x0001081f8c48(puVar21,auStack_e0);
        puVar14 = &uStack_240;
        func_0x0001081f8c48(&uStack_240,&uStack_d0);
        puVar28 = auStack_e0;
        if ((int)puVar21 != 1) {
          puVar28 = &uStack_250;
        }
        puVar4 = &uStack_d0;
        if ((int)puVar14 != 1) {
          puVar4 = &uStack_240;
        }
        puVar15 = puVar21;
        FUN_1081e8f1c(puVar21,puVar28);
        if ((((ulong)puVar15 & 1) != 0) &&
           (puVar15 = puVar14, FUN_1081e8f1c(puVar14,puVar4), ((ulong)puVar15 & 1) != 0)) {
          FUN_1081e7a54(0x3f800000,plVar30,puVar21,puVar28);
          param_1 = 5.26354424712089e-315;
          FUN_1081e7a54(plVar30,puVar14,puVar4);
          break;
        }
      }
      func_0x0001081e92bc();
      func_0x0001081e7b9c();
      break;
    case 3:
      func_0x0001081e9270();
      fVar40 = *pfVar22;
      param_1 = (double)(ulong)(uint)fVar40;
      param_2 = (double)(ulong)(uint)(param_4 * fVar37);
      fVar35 = param_4 * fVar37 + fVar35 * param_3;
      if (fVar35 < 0.0) {
        FUN_1083517c0(puVar29);
        bVar9 = false;
        if ((0.0 < fVar35) && (bVar9 = false, !NAN(fVar35))) {
          bVar9 = fVar35 < 1.0;
        }
        if (bVar9) {
          uStack_288 = puVar29[1];
          uStack_290 = *puVar29;
          uStack_280 = puVar29[2];
          bVar9 = false;
          bVar7 = true;
          bVar8 = false;
          if (!NAN(fVar40 - fVar40)) {
            bVar9 = false;
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar40)) {
              bVar9 = fVar40 < 0.0;
              bVar7 = fVar40 == 0.0;
              bVar8 = false;
            }
          }
          fStack_278 = fVar40;
          if (bVar7 || bVar9 != bVar8) {
            fStack_278 = 1.0;
          }
          param_2 = (double)(ulong)(uint)fStack_278;
          puVar21 = &uStack_290;
          FUN_108352a8c(puVar21,&uStack_250);
          if (((ulong)puVar21 & 1) != 0) {
            puVar21 = &uStack_250;
            func_0x0001081f8cc0(puVar21,auStack_e0);
            puVar13 = auStack_234;
            func_0x0001081f8cc0(auStack_234,auStack_c8);
            puVar28 = auStack_e0;
            if ((int)puVar21 != 1) {
              puVar28 = &uStack_250;
            }
            iVar38 = (int)puVar13;
            puVar3 = auStack_c8;
            if (iVar38 != 1) {
              puVar3 = auStack_234;
            }
            puVar14 = puVar21;
            FUN_1081e8f1c(puVar21,puVar28);
            if (((int)puVar14 != 0) &&
               (FUN_1081e8f1c((ulong)puVar13 & 0xffffffff,puVar3), iVar38 != 0)) {
              FUN_1081e7a54(uStack_238,plVar30,puVar21,puVar28);
              param_1 = (double)(ulong)uStack_21c;
              FUN_1081e7a54(plVar30,(ulong)puVar13 & 0xffffffff,puVar3);
              pfVar22 = pfVar22 + 1;
              break;
            }
          }
        }
      }
      func_0x0001081e92bc();
      FUN_1081e7948();
      pfVar22 = pfVar22 + 1;
      break;
    case 4:
      puVar21 = puVar29;
      FUN_1081ee4a0(puVar29,afStack_ec);
      uVar10 = (uint)puVar21;
      if (uVar10 == 0) {
        func_0x0001081e92bc();
        FUN_1081e7a08();
      }
      else {
        if (1 < (int)uVar10) {
          FUN_1081e9034((int)LZCOUNT(uVar10 - 2) * -2 + 0x40,afStack_ec);
        }
        lVar20 = 0;
        lVar32 = (long)(int)uVar10;
        lVar25 = -4;
        for (lVar23 = 0; lVar23 <= lVar32; lVar23 = lVar23 + 1) {
          if (lVar20 == 0) {
            param_1 = 0.0;
          }
          else {
            param_1 = (double)*(float *)((long)afStack_ec + lVar25);
          }
          *(double *)((long)&uStack_250 + lVar20) = param_1;
          param_2 = 1.0;
          if (lVar23 < lVar32) {
            param_2 = (double)*(float *)((long)afStack_ec + lVar25 + 4);
          }
          *(double *)((long)&dStack_248 + lVar20) = param_2;
          func_0x0001081ddb44(auStack_e0,puVar29);
          FUN_1081eefcc(&uStack_290);
          lVar12 = (long)&uStack_240 + lVar20;
          puVar21 = &uStack_290;
          FUN_1081ef338(puVar21,lVar12);
          if ((int)puVar21 == 0) goto LAB_1081e8c80;
          func_0x0001081f8d04(lVar12,auStack_220 + lVar20);
          uVar11 = (undefined4)lVar12;
          *(undefined4 *)((long)&iStack_200 + lVar20) = uVar11;
          FUN_1081e8f1c();
          acStack_1fc[lVar20] = (char)uVar11;
          lVar25 = lVar25 + 4;
          lVar20 = lVar20 + 0x58;
        }
        uVar16 = 0;
        if (2 < (int)uVar10) {
          uVar10 = 3;
        }
        lVar23 = 1;
        pcVar24 = acStack_254;
        pcVar33 = acStack_1a4;
        while( true ) {
          uVar26 = (uint)uVar16;
          uVar1 = uVar10;
          if ((int)uVar10 <= (int)uVar26) {
            uVar1 = uVar26;
          }
          if (lVar32 < (long)uVar16) break;
          lVar25 = lVar23;
          pcVar19 = pcVar24;
          if (acStack_1fc[uVar16 * 0x58] == '\x01') {
            do {
              lVar25 = lVar25 + -1;
              if (lVar25 < 1) {
                lVar25 = 0;
                break;
              }
              cVar5 = *pcVar19;
              pcVar19 = pcVar19 + -0x58;
            } while (cVar5 != '\x01');
            iVar38 = (int)lVar25;
            if ((long)iVar38 < (long)uVar16) {
              (&uStack_250)[uVar16 * 0xb] = (&uStack_250)[(long)iVar38 * 0xb];
              (&uStack_240)[uVar16 * 0xb] = (&uStack_240)[(long)iVar38 * 0xb];
            }
            lVar25 = -1;
            pcVar19 = pcVar33;
            do {
              if ((long)(int)uVar10 <= (long)(uVar16 + lVar25 + 1)) goto code_r0x0001081e89f8;
              cVar5 = *pcVar19;
              lVar25 = lVar25 + 1;
              pcVar19 = pcVar19 + 0x58;
            } while (cVar5 != '\x01');
            uVar1 = uVar26 + (int)lVar25;
code_r0x0001081e89f8:
            uVar17 = (ulong)uVar1;
            if (uVar16 < uVar17) {
              (&dStack_248)[uVar16 * 0xb] = (&dStack_248)[uVar17 * 0xb];
              (&uStack_228)[uVar16 * 0xb] = (&uStack_228)[uVar17 * 0xb];
code_r0x0001081e8a28:
              puVar21 = &uStack_240 + uVar16 * 0xb;
              func_0x0001081f8d04(puVar21,auStack_220 + uVar16 * 0x58);
              iVar38 = (int)puVar21;
              (&iStack_200)[uVar16 * 0x16] = iVar38;
            }
            else {
              if ((long)iVar38 < (long)uVar16) goto code_r0x0001081e8a28;
              iVar38 = (&iStack_200)[uVar16 * 0x16];
            }
            lVar25 = 0x10;
            if (iVar38 != 4) {
              lVar25 = 0x30;
            }
            FUN_1081e8f1c();
            if (iVar38 == 0) goto LAB_1081e8c80;
            param_1 = 5.26354424712089e-315;
            FUN_1081e7a54(plVar30,(&iStack_200)[uVar16 * 0x16],
                          (long)(&uStack_250 + uVar16 * 0xb) + lVar25);
          }
          uVar16 = uVar16 + 1;
          pcVar24 = pcVar24 + 0x58;
          lVar23 = lVar23 + 1;
          pcVar33 = pcVar33 + 0x58;
        }
      }
      break;
    case 5:
      goto code_r0x0001081e8ba8;
    }
    puVar29 = puVar29 + (int)(uVar34 - (uVar34 + 1 >> 2));
  } while( true );
code_r0x0001081e8ba8:
  func_0x0001081e92a0();
  puVar27 = (undefined8 *)0x0;
  goto code_r0x0001081e86b4;
}



/* Entry: 1081e8cc4; end: 1081e8d03;  */

void FUN_1081e8cc4(long param_1)

{
  FUN_1081e7980(param_1 + 0x58);
  if ((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 0x144) != 0)) {
    FUN_1081e8f8c();
    FUN_1081e7980(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 1081e8d04; end: 1081e8d23;  */

void FUN_1081e8d04(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != param_1) {
    do {
      lVar1 = param_1;
      param_1 = *(long *)(lVar1 + 0x128);
    } while (param_1 != param_2);
    *(undefined8 *)(lVar1 + 0x128) = 0;
  }
  return;
}



/* Entry: 1081e8d24; end: 1081e8e3f;  */

void FUN_1081e8d24(long param_1,undefined8 *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  
  FUN_1081de720(param_2,param_3);
  if (((ulong)param_2 & 1) == 0) {
    func_0x0001081e9268();
    *(undefined1 *)param_2 = 1;
    param_2 = (undefined8 *)(param_1 + 0x10);
    func_0x0001081e8e18();
    *param_2 = *(undefined8 *)param_3;
  }
  else {
    if (*(int *)(param_1 + 0x54) < 1) {
LAB_1081e8dec:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1081e8df0);
      (*pcVar4)();
    }
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar3 = *(int *)(param_1 + 0x54) - 1;
    if (*(char *)(*(long *)(param_1 + 0x48) + (ulong)uVar3) == '\x01') {
      if ((int)uVar2 < 2) goto LAB_1081e8dec;
      lVar6 = *(long *)(param_1 + 0x18);
      lVar1 = lVar6 + (ulong)uVar2 * 8;
      fVar7 = *(float *)(lVar1 + -0xc);
      bVar5 = false;
      if ((*(float *)(lVar1 + -0x10) == *param_3) &&
         (bVar5 = false, !NAN(fVar7) && !NAN(param_3[1]))) {
        bVar5 = fVar7 == param_3[1];
      }
      if (bVar5) {
        *(uint *)(param_1 + 0x54) = uVar3;
        *(uint *)(param_1 + 0x24) = uVar2 - 1;
        goto LAB_1081e8dd8;
      }
    }
    else {
      if ((int)uVar2 < 1) goto LAB_1081e8dec;
      lVar6 = *(long *)(param_1 + 0x18);
    }
    *(undefined8 *)(lVar6 + (ulong)uVar2 * 8 + -8) = *(undefined8 *)param_3;
  }
LAB_1081e8dd8:
  func_0x0001081e9268();
  *(undefined1 *)param_2 = 5;
  return;
}



/* Entry: 1081e8e40; end: 1081e8e9f;  */

undefined8 * FUN_1081e8e40(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*param_2 + 0x40);
  plVar1 = param_2;
  func_0x000108377398();
  lVar2 = *param_2;
  lVar4 = *(long *)(lVar2 + 0x40);
  if ((int)plVar1 != 0) {
    lVar4 = lVar4 + *(int *)(lVar2 + 0x48);
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  *param_1 = uVar6;
  param_1[1] = lVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar3;
  return param_1;
}



/* Entry: 1081e8ea0; end: 1081e8f1b;  */

long FUN_1081e8ea0(void)

{
  long unaff_x19;
  
  func_0x0001081e92b4();
  return *(long *)(unaff_x19 + 8) + (long)*(int *)(unaff_x19 + 0x14) * 4 + -4;
}



/* Entry: 1081e8f1c; end: 1081e8f8b;  */

ulong FUN_1081e8f1c(ulong param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1;
  if (iVar1 != 0) {
    for (lVar2 = 0; lVar2 <= iVar1 - (iVar1 + 1 >> 2); lVar2 = lVar2 + 1) {
      uVar3 = *(undefined8 *)(param_2 + lVar2 * 8);
      iVar4 = -(uint)(ABS((float)uVar3) < 1.9073486e-06);
      iVar5 = -(uint)(ABS((float)((ulong)uVar3 >> 0x20)) < 1.9073486e-06);
      *(ulong *)(param_2 + lVar2 * 8) =
           CONCAT17((byte)((ulong)uVar3 >> 0x38) & ~(byte)((uint)iVar5 >> 0x18),
                    CONCAT16((byte)((ulong)uVar3 >> 0x30) & ~(byte)((uint)iVar5 >> 0x10),
                             CONCAT15((byte)((ulong)uVar3 >> 0x28) & ~(byte)((uint)iVar5 >> 8),
                                      CONCAT14((byte)((ulong)uVar3 >> 0x20) & ~(byte)iVar5,
                                               CONCAT13((byte)((ulong)uVar3 >> 0x18) &
                                                        ~(byte)((uint)iVar4 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                 ~(byte)((uint)iVar4 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar3 >> 8)
                                                                          & ~(byte)((uint)iVar4 >> 8
                                                                                   ),
                                                                          (byte)uVar3 & ~(byte)iVar4
                                                                         )))))));
    }
    if (iVar1 != 1) {
      return 1;
    }
    FUN_1081de720(param_2,param_2 + 8);
    param_1 = (ulong)((uint)param_2 ^ 1);
  }
  return param_1;
}



/* Entry: 1081e8f8c; end: 1081e8fc7;  */

void FUN_1081e8f8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xf8);
  while (lVar1 = *(long *)(lVar1 + 0xd8), lVar1 != 0) {
    FUN_1081e8fc8(param_1 + 0x130,lVar1 + 0xf0);
  }
  return;
}


