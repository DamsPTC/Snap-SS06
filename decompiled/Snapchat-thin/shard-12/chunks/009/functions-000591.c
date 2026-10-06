/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b4f7e8; end: 109b4f823;  */

void FUN_109b4f7e8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b4f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b4f824; end: 109b4f877;  */

long * FUN_109b4f824(long *param_1)

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
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b4f878; end: 109b4f8ef;  */

undefined8 * FUN_109b4f878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b285f8;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b4f8f0; end: 109b4fc9b;  */

void FUN_109b4f8f0(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar16 = *(undefined8 **)(param_1 + 0x20);
  dVar30 = *(double *)(param_1 + 0x10);
  if (param_6 == (uint)((ulong)(*(long *)(param_1 + 0x28) - (long)puVar16) >> 2)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 8) + -1) {
        puVar7 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar7 = 1;
        puStack_70 = puVar7 + 1;
        uStack_68 = 0x13;
        *(undefined1 *)((long)puVar7 + 0x17) = 0;
        *(undefined4 *)((long)puVar7 + 0x13) = 0x312d657a;
        *(undefined8 *)(puVar7 + 3) = 0x7a69736b203d3d20;
        *(undefined8 *)(puVar7 + 1) = 0x746e756f436d7573;
        FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59e0ac,0x3a2);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109b4fc70);
        (*pcVar5)();
      }
      param_2 = param_2 + (long)*(int *)(param_1 + 8) + -1;
      goto LAB_109b4fa3c;
    }
  }
  else {
    func_0x000108a5942c((long *)(param_1 + 0x20),(long)(int)param_6);
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x20);
  }
  _bzero(puVar16,(long)(int)param_6 << 2);
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 8) + -1) {
    do {
      puVar10 = (undefined8 *)*param_2;
      if ((int)param_6 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        puVar8 = puVar16;
        puVar9 = puVar10;
        do {
          uVar18 = *puVar9;
          puVar8[1] = CONCAT44((int)((ulong)puVar9[1] >> 0x20) + (int)((ulong)puVar8[1] >> 0x20),
                               (int)puVar9[1] + (int)puVar8[1]);
          *puVar8 = CONCAT44((int)((ulong)uVar18 >> 0x20) + (int)((ulong)*puVar8 >> 0x20),
                             (int)uVar18 + (int)*puVar8);
          uVar14 = uVar14 + 4;
          puVar8 = puVar8 + 2;
          puVar9 = puVar9 + 2;
        } while ((long)uVar14 <= (long)(int)(param_6 - 4));
        uVar14 = uVar14 & 0xffffffff;
      }
      if ((int)uVar14 < (int)param_6) {
        lVar12 = param_6 - uVar14;
        piVar6 = (int *)((long)puVar10 + uVar14 * 4);
        piVar11 = (int *)((long)puVar16 + uVar14 * 4);
        do {
          *piVar11 = *piVar11 + *piVar6;
          lVar12 = lVar12 + -1;
          piVar6 = piVar6 + 1;
          piVar11 = piVar11 + 1;
        } while (lVar12 != 0);
      }
      iVar1 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar1;
      param_2 = param_2 + 1;
    } while (iVar1 < *(int *)(param_1 + 8) + -1);
  }
LAB_109b4fa3c:
  if (param_5 != 0) {
    fVar17 = (float)dVar30;
    puVar10 = (undefined8 *)(param_3 + 0x10);
    do {
      lVar12 = *param_2;
      lVar13 = param_2[1 - (long)*(int *)(param_1 + 8)];
      if (dVar30 == 1.0) {
        if ((int)param_6 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          piVar6 = (int *)(lVar12 + 0x10);
          puVar8 = puVar10;
          puVar9 = puVar16 + 2;
          puVar15 = (undefined8 *)(lVar13 + 0x10);
          do {
            iVar19 = piVar6[-4] + (int)puVar9[-2];
            iVar20 = piVar6[-3] + (int)((ulong)puVar9[-2] >> 0x20);
            iVar21 = piVar6[-2] + (int)puVar9[-1];
            iVar22 = piVar6[-1] + (int)((ulong)puVar9[-1] >> 0x20);
            iVar23 = *piVar6 + (int)*puVar9;
            iVar24 = piVar6[1] + (int)((ulong)*puVar9 >> 0x20);
            iVar25 = piVar6[2] + (int)puVar9[1];
            iVar26 = piVar6[3] + (int)((ulong)puVar9[1] >> 0x20);
            auVar27._4_4_ = iVar20;
            auVar27._0_4_ = iVar19;
            auVar27._8_4_ = iVar21;
            auVar27._12_4_ = iVar22;
            auVar27 = NEON_scvtf(auVar27,4);
            auVar28._4_4_ = iVar24;
            auVar28._0_4_ = iVar23;
            auVar28._8_4_ = iVar25;
            auVar28._12_4_ = iVar26;
            auVar28 = NEON_scvtf(auVar28,4);
            puVar8[-1] = auVar27._8_8_;
            puVar8[-2] = auVar27._0_8_;
            puVar8[1] = auVar28._8_8_;
            *puVar8 = auVar28._0_8_;
            iVar1 = *(int *)(puVar15 + -2);
            iVar4 = *(int *)((long)puVar15 + -0xc);
            puVar9[-1] = CONCAT44(iVar22 - *(int *)((long)puVar15 + -4),
                                  iVar21 - *(int *)(puVar15 + -1));
            puVar9[-2] = CONCAT44(iVar20 - iVar4,iVar19 - iVar1);
            uVar18 = *puVar15;
            uVar14 = uVar14 + 8;
            puVar9[1] = CONCAT44(iVar26 - (int)((ulong)puVar15[1] >> 0x20),iVar25 - (int)puVar15[1])
            ;
            *puVar9 = CONCAT44(iVar24 - (int)((ulong)uVar18 >> 0x20),iVar23 - (int)uVar18);
            piVar6 = piVar6 + 8;
            puVar8 = puVar8 + 4;
            puVar9 = puVar9 + 4;
            puVar15 = puVar15 + 4;
          } while ((long)uVar14 <= (long)(int)(param_6 - 8));
          uVar14 = uVar14 & 0xffffffff;
        }
        if ((int)uVar14 < (int)param_6) {
          do {
            iVar1 = *(int *)(lVar12 + uVar14 * 4) + *(int *)((long)puVar16 + uVar14 * 4);
            *(float *)(param_3 + uVar14 * 4) = (float)iVar1;
            *(int *)((long)puVar16 + uVar14 * 4) = iVar1 - *(int *)(lVar13 + uVar14 * 4);
            uVar14 = uVar14 + 1;
          } while (param_6 != uVar14);
        }
      }
      else {
        if ((int)param_6 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          piVar6 = (int *)(lVar12 + 0x10);
          puVar8 = puVar10;
          puVar9 = puVar16 + 2;
          puVar15 = (undefined8 *)(lVar13 + 0x10);
          do {
            iVar19 = piVar6[-4] + (int)puVar9[-2];
            iVar20 = piVar6[-3] + (int)((ulong)puVar9[-2] >> 0x20);
            iVar21 = piVar6[-2] + (int)puVar9[-1];
            iVar22 = piVar6[-1] + (int)((ulong)puVar9[-1] >> 0x20);
            iVar23 = *piVar6 + (int)*puVar9;
            iVar24 = piVar6[1] + (int)((ulong)*puVar9 >> 0x20);
            iVar25 = piVar6[2] + (int)puVar9[1];
            iVar26 = piVar6[3] + (int)((ulong)puVar9[1] >> 0x20);
            auVar2._4_4_ = iVar20;
            auVar2._0_4_ = iVar19;
            auVar2._8_4_ = iVar21;
            auVar2._12_4_ = iVar22;
            auVar27 = NEON_scvtf(auVar2,4);
            auVar3._4_4_ = iVar24;
            auVar3._0_4_ = iVar23;
            auVar3._8_4_ = iVar25;
            auVar3._12_4_ = iVar26;
            auVar28 = NEON_scvtf(auVar3,4);
            auVar29._0_8_ = CONCAT44(auVar28._4_4_ * fVar17,auVar28._0_4_ * fVar17);
            auVar29._8_4_ = auVar28._8_4_ * fVar17;
            auVar29._12_4_ = auVar28._12_4_ * fVar17;
            *(float *)(puVar8 + -1) = auVar27._8_4_ * fVar17;
            *(float *)((long)puVar8 + -4) = auVar27._12_4_ * fVar17;
            *(float *)(puVar8 + -2) = auVar27._0_4_ * fVar17;
            *(float *)((long)puVar8 + -0xc) = auVar27._4_4_ * fVar17;
            puVar8[1] = auVar29._8_8_;
            *puVar8 = auVar29._0_8_;
            iVar1 = *(int *)(puVar15 + -2);
            iVar4 = *(int *)((long)puVar15 + -0xc);
            puVar9[-1] = CONCAT44(iVar22 - *(int *)((long)puVar15 + -4),
                                  iVar21 - *(int *)(puVar15 + -1));
            puVar9[-2] = CONCAT44(iVar20 - iVar4,iVar19 - iVar1);
            uVar18 = *puVar15;
            uVar14 = uVar14 + 8;
            puVar9[1] = CONCAT44(iVar26 - (int)((ulong)puVar15[1] >> 0x20),iVar25 - (int)puVar15[1])
            ;
            *puVar9 = CONCAT44(iVar24 - (int)((ulong)uVar18 >> 0x20),iVar23 - (int)uVar18);
            piVar6 = piVar6 + 8;
            puVar8 = puVar8 + 4;
            puVar9 = puVar9 + 4;
            puVar15 = puVar15 + 4;
          } while ((long)uVar14 <= (long)(int)(param_6 - 8));
          uVar14 = uVar14 & 0xffffffff;
        }
        if ((int)uVar14 < (int)param_6) {
          do {
            iVar1 = *(int *)(lVar12 + uVar14 * 4) + *(int *)((long)puVar16 + uVar14 * 4);
            *(float *)(param_3 + uVar14 * 4) = (float)(dVar30 * (double)iVar1);
            *(int *)((long)puVar16 + uVar14 * 4) = iVar1 - *(int *)(lVar13 + uVar14 * 4);
            uVar14 = uVar14 + 1;
          } while (param_6 != uVar14);
        }
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      puVar10 = (undefined8 *)((long)puVar10 + (long)param_4);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b4fc9c; end: 109b4fcab;  */

void FUN_109b4fc9c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109b4fcac; end: 109b4fce7;  */

void FUN_109b4fcac(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b4fce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b4fce8; end: 109b4fd3b;  */

long * FUN_109b4fce8(long *param_1)

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
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b4fd3c; end: 109b4fdb3;  */

undefined8 * FUN_109b4fd3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b28680;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b4fdb4; end: 109b50117;  */

void FUN_109b4fdb4(long param_1,long *param_2,undefined8 *param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  long lVar9;
  ulong uVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 *puVar13;
  double *pdVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  pdVar14 = *(double **)(param_1 + 0x20);
  dVar20 = *(double *)(param_1 + 0x10);
  if (param_6 == (uint)((ulong)(*(long *)(param_1 + 0x28) - (long)pdVar14) >> 3)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0x18) != iVar1 + -1) {
        puVar5 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        puStack_60 = puVar5 + 1;
        uStack_58 = 0x13;
        *(undefined1 *)((long)puVar5 + 0x17) = 0;
        *(undefined4 *)((long)puVar5 + 0x13) = 0x312d657a;
        *(undefined8 *)(puVar5 + 3) = 0x7a69736b203d3d20;
        *(undefined8 *)(puVar5 + 1) = 0x746e756f436d7573;
        FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f55aaab,&UNK_10f59e0ac,0x99);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109b500ec);
        (*pcVar3)();
      }
      param_2 = param_2 + (long)iVar1 + -1;
      goto joined_r0x000109b4ff04;
    }
  }
  else {
    func_0x000108a851e4((long *)(param_1 + 0x20),(long)(int)param_6);
    *(undefined4 *)(param_1 + 0x18) = 0;
    pdVar14 = *(double **)(param_1 + 0x20);
  }
  _bzero(pdVar14,(long)(int)param_6 << 3);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1 + -1;
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 < iVar2) {
    do {
      pdVar7 = (double *)*param_2;
      if ((int)param_6 < 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        pdVar8 = pdVar14;
        pdVar4 = pdVar7;
        do {
          dVar15 = *pdVar4;
          pdVar8[1] = pdVar8[1] + pdVar4[1];
          *pdVar8 = *pdVar8 + dVar15;
          uVar10 = uVar10 + 2;
          pdVar8 = pdVar8 + 2;
          pdVar4 = pdVar4 + 2;
        } while ((long)uVar10 <= (long)(int)(param_6 - 2));
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 < (int)param_6) {
        lVar9 = param_6 - uVar10;
        pdVar7 = pdVar7 + uVar10;
        pdVar8 = pdVar14 + uVar10;
        do {
          *pdVar8 = *pdVar7 + *pdVar8;
          lVar9 = lVar9 + -1;
          pdVar7 = pdVar7 + 1;
          pdVar8 = pdVar8 + 1;
        } while (lVar9 != 0);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 1;
    } while (iVar6 != iVar2);
    *(int *)(param_1 + 0x18) = iVar2;
  }
joined_r0x000109b4ff04:
  if (param_5 != 0) {
    do {
      pdVar7 = (double *)*param_2;
      pdVar8 = (double *)param_2[1 - iVar1];
      if (dVar20 == 1.0) {
        if ((int)param_6 < 2) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          pdVar4 = pdVar8;
          pdVar11 = pdVar14;
          pdVar12 = pdVar7;
          puVar13 = param_3;
          do {
            dVar18 = pdVar11[1];
            dVar16 = *pdVar11;
            dVar19 = pdVar12[1];
            dVar15 = *pdVar12;
            *puVar13 = CONCAT44((float)(dVar18 + dVar19),(float)(dVar16 + dVar15));
            dVar17 = *pdVar4;
            pdVar11[1] = (dVar18 + dVar19) - pdVar4[1];
            *pdVar11 = (dVar16 + dVar15) - dVar17;
            uVar10 = uVar10 + 2;
            pdVar4 = pdVar4 + 2;
            pdVar11 = pdVar11 + 2;
            pdVar12 = pdVar12 + 2;
            puVar13 = puVar13 + 1;
          } while ((long)uVar10 <= (long)(int)(param_6 - 2));
          uVar10 = uVar10 & 0xffffffff;
        }
        if ((int)uVar10 < (int)param_6) {
          do {
            dVar17 = pdVar14[uVar10];
            dVar15 = pdVar7[uVar10];
            *(float *)((long)param_3 + uVar10 * 4) = (float)(dVar17 + dVar15);
            pdVar14[uVar10] = (dVar17 + dVar15) - pdVar8[uVar10];
            uVar10 = uVar10 + 1;
          } while (param_6 != uVar10);
        }
      }
      else {
        if ((int)param_6 < 2) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          pdVar4 = pdVar8;
          pdVar11 = pdVar14;
          pdVar12 = pdVar7;
          puVar13 = param_3;
          do {
            dVar18 = pdVar11[1];
            dVar16 = *pdVar11;
            dVar19 = pdVar12[1];
            dVar15 = *pdVar12;
            *puVar13 = CONCAT44((float)((dVar18 + dVar19) * dVar20),
                                (float)((dVar16 + dVar15) * dVar20));
            dVar17 = *pdVar4;
            pdVar11[1] = (dVar18 + dVar19) - pdVar4[1];
            *pdVar11 = (dVar16 + dVar15) - dVar17;
            uVar10 = uVar10 + 2;
            pdVar4 = pdVar4 + 2;
            pdVar11 = pdVar11 + 2;
            pdVar12 = pdVar12 + 2;
            puVar13 = puVar13 + 1;
          } while ((long)uVar10 <= (long)(int)(param_6 - 2));
          uVar10 = uVar10 & 0xffffffff;
        }
        if ((int)uVar10 < (int)param_6) {
          do {
            dVar17 = pdVar14[uVar10];
            dVar15 = pdVar7[uVar10];
            *(float *)((long)param_3 + uVar10 * 4) = (float)(dVar20 * (dVar17 + dVar15));
            pdVar14[uVar10] = (dVar17 + dVar15) - pdVar8[uVar10];
            uVar10 = uVar10 + 1;
          } while (param_6 != uVar10);
        }
      }
      param_3 = (undefined8 *)((long)param_3 + (long)param_4);
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b50118; end: 109b50127;  */

void FUN_109b50118(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109b50128; end: 109b50163;  */

void FUN_109b50128(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b50160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b50164; end: 109b501b7;  */

long * FUN_109b50164(long *param_1)

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
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b501b8; end: 109b5022f;  */

undefined8 * FUN_109b501b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b28708;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b50230; end: 109b505af;  */

void FUN_109b50230(long param_1,long *param_2,double *param_3,int param_4,int param_5,uint param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  puVar13 = *(undefined8 **)(param_1 + 0x20);
  dVar18 = *(double *)(param_1 + 0x10);
  if (param_6 == (uint)((ulong)(*(long *)(param_1 + 0x28) - (long)puVar13) >> 2)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 8) + -1) {
        puVar3 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_60 = puVar3 + 1;
        uStack_58 = 0x13;
        *(undefined1 *)((long)puVar3 + 0x17) = 0;
        *(undefined4 *)((long)puVar3 + 0x13) = 0x312d657a;
        *(undefined8 *)(puVar3 + 3) = 0x7a69736b203d3d20;
        *(undefined8 *)(puVar3 + 1) = 0x746e756f436d7573;
        FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f55aaab,&UNK_10f59e0ac,0x99);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109b50584);
        (*pcVar1)();
      }
      param_2 = param_2 + (long)*(int *)(param_1 + 8) + -1;
      goto joined_r0x000109b50388;
    }
  }
  else {
    func_0x000108a5942c((long *)(param_1 + 0x20),(long)(int)param_6);
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar13 = *(undefined8 **)(param_1 + 0x20);
  }
  _bzero(puVar13,(long)(int)param_6 << 2);
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 8) + -1) {
    do {
      puVar7 = (undefined8 *)*param_2;
      if ((int)param_6 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        puVar8 = puVar13;
        puVar2 = puVar7;
        do {
          *puVar8 = CONCAT44((int)((ulong)*puVar2 >> 0x20) + (int)((ulong)*puVar8 >> 0x20),
                             (int)*puVar2 + (int)*puVar8);
          uVar9 = uVar9 + 2;
          puVar8 = puVar8 + 1;
          puVar2 = puVar2 + 1;
        } while ((long)uVar9 <= (long)(int)(param_6 - 2));
        uVar9 = uVar9 & 0xffffffff;
      }
      if ((int)uVar9 < (int)param_6) {
        lVar5 = param_6 - uVar9;
        piVar4 = (int *)((long)puVar7 + uVar9 * 4);
        piVar6 = (int *)((long)puVar13 + uVar9 * 4);
        do {
          *piVar6 = *piVar6 + *piVar4;
          lVar5 = lVar5 + -1;
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (lVar5 != 0);
      }
      iVar14 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar14;
      param_2 = param_2 + 1;
    } while (iVar14 < *(int *)(param_1 + 8) + -1);
  }
joined_r0x000109b50388:
  if (param_5 != 0) {
    do {
      puVar7 = (undefined8 *)*param_2;
      puVar8 = (undefined8 *)param_2[1 - (long)*(int *)(param_1 + 8)];
      if (dVar18 == 1.0) {
        if ((int)param_6 < 2) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          puVar2 = puVar13;
          puVar10 = puVar7;
          puVar11 = puVar8;
          do {
            iVar14 = (int)*puVar10 + (int)*puVar2;
            iVar15 = (int)((ulong)*puVar10 >> 0x20) + (int)((ulong)*puVar2 >> 0x20);
            uVar16 = *puVar11;
            param_3[uVar9] = (double)iVar14;
            (param_3 + uVar9)[1] = (double)iVar15;
            *puVar2 = CONCAT44(iVar15 - (int)((ulong)uVar16 >> 0x20),iVar14 - (int)uVar16);
            uVar9 = uVar9 + 2;
            puVar2 = puVar2 + 1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while ((long)uVar9 <= (long)(int)(param_6 - 2));
          uVar9 = uVar9 & 0xffffffff;
        }
        if ((int)uVar9 < (int)param_6) {
          do {
            iVar14 = *(int *)((long)puVar7 + uVar9 * 4) + *(int *)((long)puVar13 + uVar9 * 4);
            param_3[uVar9] = (double)iVar14;
            *(int *)((long)puVar13 + uVar9 * 4) = iVar14 - *(int *)((long)puVar8 + uVar9 * 4);
            uVar9 = uVar9 + 1;
          } while (param_6 != uVar9);
        }
      }
      else {
        if ((int)param_6 < 2) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          puVar2 = puVar8;
          puVar10 = puVar13;
          puVar11 = puVar7;
          pdVar12 = param_3;
          do {
            iVar14 = (int)*puVar11 + (int)*puVar10;
            iVar15 = (int)((ulong)*puVar11 >> 0x20) + (int)((ulong)*puVar10 >> 0x20);
            auVar17._0_8_ = (long)iVar14;
            auVar17._8_8_ = (long)iVar15;
            auVar17 = NEON_scvtf(auVar17,8);
            pdVar12[1] = auVar17._8_8_ * dVar18;
            *pdVar12 = auVar17._0_8_ * dVar18;
            *puVar10 = CONCAT44(iVar15 - (int)((ulong)*puVar2 >> 0x20),iVar14 - (int)*puVar2);
            uVar9 = uVar9 + 2;
            puVar2 = puVar2 + 1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
            pdVar12 = pdVar12 + 2;
          } while ((long)uVar9 <= (long)(int)(param_6 - 2));
          uVar9 = uVar9 & 0xffffffff;
        }
        if ((int)uVar9 < (int)param_6) {
          do {
            iVar14 = *(int *)((long)puVar7 + uVar9 * 4) + *(int *)((long)puVar13 + uVar9 * 4);
            param_3[uVar9] = dVar18 * (double)iVar14;
            *(int *)((long)puVar13 + uVar9 * 4) = iVar14 - *(int *)((long)puVar8 + uVar9 * 4);
            uVar9 = uVar9 + 1;
          } while (param_6 != uVar9);
        }
      }
      param_3 = (double *)((long)param_3 + (long)param_4);
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b505b0; end: 109b505bf;  */

void FUN_109b505b0(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109b505c0; end: 109b505fb;  */

void FUN_109b505c0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b505f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b505fc; end: 109b5064f;  */

long * FUN_109b505fc(long *param_1)

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
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b50650; end: 109b506c7;  */

undefined8 * FUN_109b50650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b28790;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b506c8; end: 109b50a0b;  */

void FUN_109b506c8(long param_1,long *param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  ulong uVar9;
  double *pdVar10;
  long lVar11;
  double *pdVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  pdVar13 = *(double **)(param_1 + 0x20);
  dVar17 = *(double *)(param_1 + 0x10);
  if (param_6 == (uint)((ulong)(*(long *)(param_1 + 0x28) - (long)pdVar13) >> 3)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0x18) != iVar1 + -1) {
        puVar4 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar4 = 1;
        puStack_60 = puVar4 + 1;
        uStack_58 = 0x13;
        *(undefined1 *)((long)puVar4 + 0x17) = 0;
        *(undefined4 *)((long)puVar4 + 0x13) = 0x312d657a;
        *(undefined8 *)(puVar4 + 3) = 0x7a69736b203d3d20;
        *(undefined8 *)(puVar4 + 1) = 0x746e756f436d7573;
        FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f55aaab,&UNK_10f59e0ac,0x99);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109b509e0);
        (*pcVar3)();
      }
      param_2 = param_2 + (long)iVar1 + -1;
      goto joined_r0x000109b50818;
    }
  }
  else {
    func_0x000108a851e4((long *)(param_1 + 0x20),(long)(int)param_6);
    *(undefined4 *)(param_1 + 0x18) = 0;
    pdVar13 = *(double **)(param_1 + 0x20);
  }
  _bzero(pdVar13,(long)(int)param_6 << 3);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1 + -1;
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 < iVar2) {
    do {
      pdVar7 = (double *)*param_2;
      if ((int)param_6 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        pdVar10 = pdVar13;
        pdVar12 = pdVar7;
        do {
          dVar14 = *pdVar12;
          pdVar10[1] = pdVar10[1] + pdVar12[1];
          *pdVar10 = *pdVar10 + dVar14;
          uVar9 = uVar9 + 2;
          pdVar10 = pdVar10 + 2;
          pdVar12 = pdVar12 + 2;
        } while ((long)uVar9 <= (long)(int)(param_6 - 2));
        uVar9 = uVar9 & 0xffffffff;
      }
      if ((int)uVar9 < (int)param_6) {
        lVar6 = param_6 - uVar9;
        pdVar7 = pdVar7 + uVar9;
        pdVar10 = pdVar13 + uVar9;
        do {
          *pdVar10 = *pdVar7 + *pdVar10;
          lVar6 = lVar6 + -1;
          pdVar7 = pdVar7 + 1;
          pdVar10 = pdVar10 + 1;
        } while (lVar6 != 0);
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 1;
    } while (iVar5 != iVar2);
    *(int *)(param_1 + 0x18) = iVar2;
  }
joined_r0x000109b50818:
  if (param_5 != 0) {
    do {
      lVar6 = *param_2;
      lVar8 = param_2[1 - iVar1];
      if (dVar17 == 1.0) {
        if ((int)param_6 < 2) {
          uVar9 = 0;
        }
        else {
          lVar11 = 0;
          uVar9 = 0;
          do {
            dVar14 = *(double *)((long)pdVar13 + lVar11) + *(double *)(lVar6 + lVar11);
            dVar15 = ((double *)((long)pdVar13 + lVar11))[1] + ((double *)(lVar6 + lVar11))[1];
            ((double *)(param_3 + lVar11))[1] = dVar15;
            *(double *)(param_3 + lVar11) = dVar14;
            dVar16 = *(double *)(lVar8 + lVar11);
            ((double *)((long)pdVar13 + lVar11))[1] = dVar15 - ((double *)(lVar8 + lVar11))[1];
            *(double *)((long)pdVar13 + lVar11) = dVar14 - dVar16;
            uVar9 = uVar9 + 2;
            lVar11 = lVar11 + 0x10;
          } while ((long)uVar9 <= (long)(int)(param_6 - 2));
          uVar9 = uVar9 & 0xffffffff;
        }
        if ((int)uVar9 < (int)param_6) {
          do {
            dVar14 = pdVar13[uVar9] + *(double *)(lVar6 + uVar9 * 8);
            *(double *)(param_3 + uVar9 * 8) = dVar14;
            pdVar13[uVar9] = dVar14 - *(double *)(lVar8 + uVar9 * 8);
            uVar9 = uVar9 + 1;
          } while (param_6 != uVar9);
        }
      }
      else {
        if ((int)param_6 < 2) {
          uVar9 = 0;
        }
        else {
          lVar11 = 0;
          uVar9 = 0;
          do {
            dVar14 = *(double *)((long)pdVar13 + lVar11) + *(double *)(lVar6 + lVar11);
            dVar15 = ((double *)((long)pdVar13 + lVar11))[1] + ((double *)(lVar6 + lVar11))[1];
            ((double *)(param_3 + lVar11))[1] = dVar15 * dVar17;
            *(double *)(param_3 + lVar11) = dVar14 * dVar17;
            dVar16 = *(double *)(lVar8 + lVar11);
            ((double *)((long)pdVar13 + lVar11))[1] = dVar15 - ((double *)(lVar8 + lVar11))[1];
            *(double *)((long)pdVar13 + lVar11) = dVar14 - dVar16;
            uVar9 = uVar9 + 2;
            lVar11 = lVar11 + 0x10;
          } while ((long)uVar9 <= (long)(int)(param_6 - 2));
          uVar9 = uVar9 & 0xffffffff;
        }
        if ((int)uVar9 < (int)param_6) {
          do {
            dVar14 = pdVar13[uVar9] + *(double *)(lVar6 + uVar9 * 8);
            *(double *)(param_3 + uVar9 * 8) = dVar17 * dVar14;
            pdVar13[uVar9] = dVar14 - *(double *)(lVar8 + uVar9 * 8);
            uVar9 = uVar9 + 1;
          } while (param_6 != uVar9);
        }
      }
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109b50a0c; end: 109b50a1b;  */

void FUN_109b50a0c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109b50a1c; end: 109b50a57;  */

void FUN_109b50a1c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b50a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b50a58; end: 109b50aab;  */

long * FUN_109b50a58(long *param_1)

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
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b50aac; end: 109b513ab;  */

void FUN_109b50aac(uint *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  short sVar20;
  short sVar21;
  code *pcVar22;
  bool bVar23;
  long lVar24;
  undefined4 *puVar25;
  ushort uVar26;
  ushort uVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  short *psVar30;
  byte *pbVar31;
  short *psVar32;
  short *psVar33;
  ulong uVar34;
  short *psVar35;
  long lVar36;
  ushort uVar37;
  ushort uVar38;
  int *piVar39;
  uint uVar40;
  byte *pbVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  ushort uVar45;
  byte *pbVar46;
  byte *pbVar47;
  short *psVar48;
  short *psVar49;
  byte *pbVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  int *piStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar28 = *(ulong **)(param_1 + 2);
    piStack_90 = (int *)((ulong)&uStack_d0 | 8);
    uStack_c8 = puVar28[1];
    uStack_d0 = *puVar28;
    uStack_b8 = puVar28[3];
    uStack_c0 = puVar28[2];
    uStack_a8 = puVar28[5];
    uStack_b0 = puVar28[4];
    uStack_98 = puVar28[7];
    uStack_a0 = puVar28[6];
    plStack_88 = &lStack_80;
    lStack_80 = 0;
    lStack_78 = 0;
    if (puVar28[7] != 0) {
      piVar39 = (int *)(puVar28[7] + 0x14);
      do {
        cVar17 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar23) {
          *piVar39 = *piVar39 + 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
    }
    if (*(int *)((long)puVar28 + 4) < 3) {
      lStack_80 = *(long *)puVar28[9];
      lStack_78 = ((long *)puVar28[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  if (uStack_c0 != 0) {
    uVar34 = (ulong)uStack_d0._4_4_;
    if ((int)uStack_d0._4_4_ < 3) {
      lVar36 = (long)uStack_c8._4_4_ * (long)(int)uStack_c8;
    }
    else {
      lVar36 = 1;
      piVar39 = piStack_90;
      do {
        lVar36 = lVar36 * *piVar39;
        uVar34 = uVar34 - 1;
        piVar39 = piVar39 + 1;
      } while (uVar34 != 0);
    }
    if (lVar36 != 0) {
      if ((uStack_d0 & 0xfff) == 0) {
        if ((param_5 == 1) || (param_5 == 4)) {
          uStack_130 = (undefined8 *)NEON_rev64(*(undefined8 *)piStack_90,4);
          FUN_109a8ee3c(param_2,&uStack_130,3,0xffffffff,0,0);
          uStack_130 = (undefined8 *)NEON_rev64(*(undefined8 *)piStack_90,4);
          FUN_109a8ee3c(param_3,&uStack_130,3,0xffffffff,0,0);
          if ((*param_2 & 0x1f0000) == 0x10000) {
            puVar29 = *(undefined8 **)(param_2 + 2);
            uStack_f0 = (ulong)&uStack_130 | 8;
            uStack_128 = puVar29[1];
            uStack_130 = (undefined8 *)*puVar29;
            uStack_118 = puVar29[3];
            lStack_120 = puVar29[2];
            uStack_108 = puVar29[5];
            uStack_110 = puVar29[4];
            lStack_f8 = puVar29[7];
            uStack_100 = puVar29[6];
            plStack_e8 = &lStack_e0;
            lStack_e0 = 0;
            lStack_d8 = 0;
            if (puVar29[7] != 0) {
              piVar39 = (int *)(puVar29[7] + 0x14);
              do {
                cVar17 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
                if (bVar23) {
                  *piVar39 = *piVar39 + 1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
            }
            if (*(int *)((long)puVar29 + 4) < 3) {
              lStack_e0 = *(long *)puVar29[9];
              lStack_d8 = ((long *)puVar29[9])[1];
            }
            else {
              uStack_130 = (undefined8 *)((ulong)uStack_130 & 0xffffffff);
              func_0x000109a84868(&uStack_130);
            }
          }
          else {
            FUN_109a8a180(&uStack_130,param_2,0xffffffff);
          }
          if ((*param_3 & 0x1f0000) == 0x10000) {
            puVar28 = *(ulong **)(param_3 + 2);
            uStack_150 = (ulong)&uStack_190 | 8;
            uStack_188 = puVar28[1];
            uStack_190 = *puVar28;
            uStack_178 = puVar28[3];
            uStack_180 = puVar28[2];
            uStack_168 = puVar28[5];
            uStack_170 = puVar28[4];
            uStack_158 = puVar28[7];
            uStack_160 = puVar28[6];
            plStack_148 = &lStack_140;
            lStack_140 = 0;
            lStack_138 = 0;
            if (puVar28[7] != 0) {
              piVar39 = (int *)(puVar28[7] + 0x14);
              do {
                cVar17 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
                if (bVar23) {
                  *piVar39 = *piVar39 + 1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
            }
            if (*(int *)((long)puVar28 + 4) < 3) {
              lStack_140 = *(long *)puVar28[9];
              lStack_138 = ((long *)puVar28[9])[1];
            }
            else {
              uStack_190 = uStack_190 & 0xffffffff;
              func_0x000109a84868(&uStack_190);
            }
          }
          else {
            FUN_109a8a180(&uStack_190,param_3,0xffffffff);
          }
          if (param_4 == 3) {
            uVar18 = (int)uStack_c8 - 1;
            uVar19 = (int)uStack_c8 - 2;
            if ((int)uStack_c8 < 2) {
              uVar19 = uVar18;
            }
            bVar23 = param_5 == 4;
            uVar5 = uVar18;
            if (bVar23) {
              uVar5 = uVar19;
            }
            uVar34 = 0;
            if (bVar23) {
              uVar34 = (ulong)(1 < uStack_c8._4_4_);
            }
            iVar10 = 0;
            if (bVar23) {
              iVar10 = -(uint)(1 < uStack_c8._4_4_);
            }
            uVar6 = 0;
            if (bVar23) {
              uVar6 = (ulong)(1 < (int)uStack_c8);
            }
            if (0 < (int)uStack_c8) {
              uVar42 = 0;
              lVar43 = *plStack_88;
              lVar36 = *plStack_e8;
              lVar44 = *plStack_148;
              uVar19 = uStack_c8._4_4_ - 1;
              iVar8 = iVar10;
              if (uVar19 != 0 && 0 < uStack_c8._4_4_) {
                iVar8 = 1;
              }
              psVar35 = (short *)(uStack_180 + 2);
              psVar30 = (short *)(lStack_120 + 2);
              pbVar1 = (byte *)(uStack_c0 + 2);
              pbVar46 = pbVar1;
              do {
                uVar7 = uVar6;
                if (uVar42 != 0) {
                  uVar7 = uVar42 - 1;
                }
                pbVar3 = (byte *)(uStack_c0 + uVar7 * lVar43);
                pbVar50 = (byte *)(uStack_c0 + uVar42 * lVar43);
                lVar9 = (long)(int)uVar5;
                if (uVar42 != uVar18) {
                  lVar9 = uVar42 + 1;
                }
                pbVar4 = (byte *)(uStack_c0 + lVar9 * lVar43);
                psVar49 = (short *)(lStack_120 + uVar42 * lVar36);
                psVar48 = (short *)(uStack_180 + uVar42 * lVar44);
                bVar13 = pbVar3[uVar34];
                bVar14 = pbVar3[iVar8];
                bVar11 = *pbVar3;
                bVar15 = pbVar4[uVar34];
                bVar12 = *pbVar4;
                bVar16 = pbVar4[iVar8];
                *psVar49 = ((ushort)bVar14 - (ushort)bVar15) +
                           ((ushort)pbVar50[iVar8] - (ushort)pbVar50[uVar34]) * 2 +
                           ((ushort)bVar16 - (ushort)bVar13);
                *psVar48 = (((ushort)bVar16 - (ushort)bVar13) - ((ushort)bVar14 - (ushort)bVar15)) +
                           ((ushort)bVar12 - (ushort)bVar11) * 2;
                uVar51 = (ushort)*pbVar3;
                uVar45 = (ushort)pbVar3[1];
                uVar26 = (ushort)*pbVar50;
                uVar37 = (ushort)*pbVar4;
                uVar53 = (ushort)pbVar4[1];
                if (uStack_c8._4_4_ < 3) {
                  uVar40 = 1;
                }
                else {
                  bVar11 = pbVar50[1];
                  lVar24 = (ulong)uVar19 - 1;
                  pbVar31 = pbVar1 + lVar9 * lVar43;
                  psVar32 = psVar35;
                  psVar33 = psVar30;
                  pbVar41 = pbVar1 + uVar7 * lVar43;
                  pbVar47 = pbVar46;
                  uVar27 = uVar26;
                  uVar52 = uVar51;
                  uVar38 = uVar37;
                  do {
                    uVar37 = uVar53;
                    uVar51 = uVar45;
                    uVar26 = (ushort)bVar11;
                    uVar53 = (ushort)*pbVar31;
                    sVar20 = *pbVar31 - uVar52;
                    uVar45 = (ushort)*pbVar41;
                    bVar11 = *pbVar47;
                    sVar21 = *pbVar41 - uVar38;
                    *psVar33 = sVar20 + sVar21 + (bVar11 - uVar27) * 2;
                    *psVar32 = (sVar20 - sVar21) + (uVar37 - uVar51) * 2;
                    lVar24 = lVar24 + -1;
                    pbVar31 = pbVar31 + 1;
                    psVar32 = psVar32 + 1;
                    psVar33 = psVar33 + 1;
                    pbVar41 = pbVar41 + 1;
                    pbVar47 = pbVar47 + 1;
                    uVar40 = uVar19;
                    uVar27 = uVar26;
                    uVar52 = uVar51;
                    uVar38 = uVar37;
                  } while (lVar24 != 0);
                }
                if ((int)uVar40 < uStack_c8._4_4_) {
                  iVar2 = uVar40 + iVar10;
                  bVar11 = pbVar3[iVar2];
                  bVar12 = pbVar4[iVar2];
                  psVar49[uVar40] =
                       (bVar12 - uVar51) + (bVar11 - uVar37) + (pbVar50[iVar2] - uVar26) * 2;
                  psVar48[uVar40] = ((bVar12 - uVar51) - (bVar11 - uVar37)) + (uVar53 - uVar45) * 2;
                }
                uVar42 = uVar42 + 1;
                psVar35 = (short *)((long)psVar35 + lVar44);
                psVar30 = (short *)((long)psVar30 + lVar36);
                pbVar46 = pbVar46 + lVar43;
              } while (uVar42 != (uStack_c8 & 0xffffffff));
            }
            if (uStack_158 != 0) {
              piVar39 = (int *)(uStack_158 + 0x14);
              do {
                iVar10 = *piVar39;
                cVar17 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
                if (bVar23) {
                  *piVar39 = iVar10 + -1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              if (iVar10 + -1 == 0) {
                func_0x000109a848d4(&uStack_190);
              }
            }
            uStack_158 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            if (0 < uStack_190._4_4_) {
              lVar36 = 0;
              do {
                *(undefined4 *)(uStack_150 + lVar36 * 4) = 0;
                lVar36 = lVar36 + 1;
              } while (lVar36 < uStack_190._4_4_);
            }
            if (plStack_148 != &lStack_140 && plStack_148 != (long *)0x0) {
              _free(plStack_148[-1]);
            }
            if (lStack_f8 != 0) {
              piVar39 = (int *)(lStack_f8 + 0x14);
              do {
                iVar10 = *piVar39;
                cVar17 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
                if (bVar23) {
                  *piVar39 = iVar10 + -1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              if (iVar10 + -1 == 0) {
                func_0x000109a848d4(&uStack_130);
              }
            }
            lStack_f8 = 0;
            uStack_118 = 0;
            lStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            if (0 < uStack_130._4_4_) {
              lVar36 = 0;
              do {
                *(undefined4 *)(uStack_f0 + lVar36 * 4) = 0;
                lVar36 = lVar36 + 1;
              } while (lVar36 < uStack_130._4_4_);
            }
            if (plStack_e8 != &lStack_e0 && plStack_e8 != (long *)0x0) {
              _free(plStack_e8[-1]);
            }
            if (uStack_98 != 0) {
              piVar39 = (int *)(uStack_98 + 0x14);
              do {
                iVar10 = *piVar39;
                cVar17 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar39,0x10);
                if (bVar23) {
                  *piVar39 = iVar10 + -1;
                  cVar17 = ExclusiveMonitorsStatus();
                }
              } while (cVar17 != '\0');
              if (iVar10 + -1 == 0) {
                func_0x000109a848d4(&uStack_d0);
              }
            }
            uStack_98 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            if (0 < (int)uStack_d0._4_4_) {
              lVar36 = 0;
              do {
                piStack_90[lVar36] = 0;
                lVar36 = lVar36 + 1;
              } while (lVar36 < (int)uStack_d0._4_4_);
            }
            if (plStack_88 != &lStack_80 && plStack_88 != (long *)0x0) {
              _free(plStack_88[-1]);
            }
            return;
          }
          puVar25 = (undefined4 *)0x10;
          func_0x000107c2ae8c();
          *puVar25 = 1;
          puStack_1a0 = (undefined8 *)(puVar25 + 1);
          *puStack_1a0 = 0x3d3d20657a69736b;
          uStack_198 = 10;
          *(undefined1 *)((long)puVar25 + 0xe) = 0;
          *(undefined2 *)(puVar25 + 3) = 0x3320;
          FUN_109ac3188(0xffffff29,&puStack_1a0,&UNK_10f59e3b9,&UNK_10f59e3c9,0x5f);
        }
        else {
          puVar25 = (undefined4 *)0x44;
          func_0x000107c2ae8c();
          *puVar25 = 1;
          uStack_130 = (undefined8 *)(puVar25 + 1);
          uStack_128 = 0x3e;
          *(undefined8 *)(puVar25 + 3) = 0x4f42203d3d206570;
          *(undefined8 *)(puVar25 + 1) = 0x7954726564726f62;
          *(undefined1 *)((long)puVar25 + 0x42) = 0;
          *(undefined8 *)(puVar25 + 7) = 0x207c7c20544c5541;
          *(undefined8 *)(puVar25 + 5) = 0x4645445f52454452;
          *(undefined8 *)(puVar25 + 0xb) = 0x4f42203d3d206570;
          *(undefined8 *)(puVar25 + 9) = 0x7954726564726f62;
          *(undefined8 *)((long)puVar25 + 0x3a) = 0x45544143494c5045;
          *(undefined8 *)((long)puVar25 + 0x32) = 0x525f524544524f42;
          FUN_109ac3188(0xffffff29,&uStack_130,&UNK_10f59e3b9,&UNK_10f59e3c9,0x56);
        }
      }
      else {
        puVar25 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar25 = 1;
        uStack_130 = (undefined8 *)(puVar25 + 1);
        uStack_128 = 0x15;
        *(undefined1 *)((long)puVar25 + 0x19) = 0;
        *(undefined8 *)(puVar25 + 3) = 0x5643203d3d202928;
        *(undefined8 *)(puVar25 + 1) = 0x657079742e637273;
        *(undefined8 *)((long)puVar25 + 0x11) = 0x314355385f564320;
        FUN_109ac3188(0xffffff29,&uStack_130,&UNK_10f59e3b9,&UNK_10f59e3c9,0x55);
      }
      goto LAB_109b512d0;
    }
  }
  puVar25 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar25 = 1;
  uStack_130 = (undefined8 *)(puVar25 + 1);
  *uStack_130 = 0x706d652e63727321;
  uStack_128 = 0xc;
  *(undefined1 *)(puVar25 + 4) = 0;
  puVar25[3] = 0x29287974;
  FUN_109ac3188(0xffffff29,&uStack_130,&UNK_10f59e3b9,&UNK_10f59e3c9,0x54);
LAB_109b512d0:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x109b512d4);
  (*pcVar22)();
}



/* Entry: 109b513ac; end: 109b51e0f;  */

void FUN_109b513ac(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,uint param_6
                  )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint *puVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  int iStack_1fc;
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
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_78;
  int iStack_74;
  
  puVar14 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  uVar13 = (uint)puVar14;
  uVar4 = uVar13 & 7;
  uVar6 = 4;
  if (((ulong)puVar14 & 7) != 0) {
    uVar6 = 6;
  }
  if (0 < (int)param_5) {
    uVar6 = param_5 & 7;
  }
  uVar7 = 6;
  if (0 < (int)param_6) {
    uVar7 = param_6 & 7;
  }
  FUN_109a8b004(&iStack_78,param_1,0xffffffff);
  iVar1 = iStack_78 + 1;
  iVar2 = iStack_74 + 1;
  uStack_e0 = CONCAT44(iVar2,iVar1);
  uVar5 = uVar6 | (uVar13 >> 3 & 0x1ff) << 3;
  FUN_109a8ee3c(param_2,&uStack_e0,uVar5,0xffffffff,0,0);
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar15 = *(ulong **)(param_1 + 2);
    puStack_a0 = (undefined8 *)((ulong)&uStack_e0 | 8);
    uStack_d8 = puVar15[1];
    uStack_e0 = *puVar15;
    uStack_c8 = puVar15[3];
    uStack_d0 = puVar15[2];
    uStack_b8 = puVar15[5];
    uStack_c0 = puVar15[4];
    uStack_a8 = puVar15[7];
    uStack_b0 = puVar15[6];
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    if (puVar15[7] != 0) {
      piVar3 = (int *)(puVar15[7] + 0x14);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = *piVar3 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (*(int *)((long)puVar15 + 4) < 3) {
      uStack_90 = *(undefined8 *)puVar15[9];
      uStack_88 = ((undefined8 *)puVar15[9])[1];
    }
    else {
      uStack_e0 = uStack_e0 & 0xffffffff;
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar15 = *(ulong **)(param_2 + 2);
    uStack_100 = (ulong)&uStack_140 | 8;
    uStack_138 = puVar15[1];
    uStack_140 = *puVar15;
    uStack_128 = puVar15[3];
    uStack_130 = puVar15[2];
    uStack_118 = puVar15[5];
    uStack_120 = puVar15[4];
    uStack_108 = puVar15[7];
    uStack_110 = puVar15[6];
    puStack_f8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if (puVar15[7] != 0) {
      piVar3 = (int *)(puVar15[7] + 0x14);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = *piVar3 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (*(int *)((long)puVar15 + 4) < 3) {
      uStack_f0 = *(undefined8 *)puVar15[9];
      uStack_e8 = ((undefined8 *)puVar15[9])[1];
    }
    else {
      uStack_140 = uStack_140 & 0xffffffff;
      func_0x000109a84868(&uStack_140);
    }
  }
  else {
    FUN_109a8a180(&uStack_140,param_2,0xffffffff);
  }
  uStack_1a0 = 0x42ff0000;
  uStack_194 = 0;
  uStack_190 = 0;
  iStack_19c = 0;
  uStack_198 = 0;
  uVar13 = uVar13 >> 3 & 0x1ff;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uVar20 = (ulong)&uStack_1a0 | 8;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_200 = 0x42ff0000;
  uVar19 = (ulong)&uStack_200 | 8;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  iStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1d4 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = uVar19;
  puStack_1b8 = &uStack_1b0;
  uStack_160 = uVar20;
  puStack_158 = &uStack_150;
  if ((*param_3 & 0x1f0000) != 0) {
    uStack_260 = CONCAT44(iVar2,iVar1);
    FUN_109a8ee3c(param_3,&uStack_260,uVar13 << 3 | uVar7,0xffffffff,0,0);
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar15 = *(ulong **)(param_3 + 2);
      uStack_220 = (ulong)&uStack_260 | 8;
      uStack_258 = puVar15[1];
      uStack_260 = *puVar15;
      uStack_248 = puVar15[3];
      uStack_250 = puVar15[2];
      uStack_238 = puVar15[5];
      uStack_240 = puVar15[4];
      uStack_228 = puVar15[7];
      uStack_230 = puVar15[6];
      puStack_218 = &uStack_210;
      uStack_210 = 0;
      uStack_208 = 0;
      if (puVar15[7] != 0) {
        piVar3 = (int *)(puVar15[7] + 0x14);
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = *piVar3 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if (*(int *)((long)puVar15 + 4) < 3) {
        uStack_210 = *(undefined8 *)puVar15[9];
        uStack_208 = ((undefined8 *)puVar15[9])[1];
      }
      else {
        uStack_260 = uStack_260 & 0xffffffff;
        func_0x000109a84868(&uStack_260);
      }
    }
    else {
      FUN_109a8a180(&uStack_260,param_3,0xffffffff);
    }
    if (uStack_168 != 0) {
      piVar3 = (int *)(uStack_168 + 0x14);
      do {
        iVar8 = *piVar3;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = iVar8 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(&uStack_1a0);
      }
    }
    if (0 < iStack_19c) {
      lVar16 = 0;
      do {
        *(undefined4 *)(uStack_160 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iStack_19c);
    }
    uStack_198 = (undefined4)uStack_258;
    uStack_194 = (undefined4)(uStack_258 >> 0x20);
    uStack_1a0 = (undefined4)uStack_260;
    uStack_188 = (undefined4)uStack_248;
    uStack_184 = (undefined4)(uStack_248 >> 0x20);
    uStack_190 = (undefined4)uStack_250;
    uStack_18c = (undefined4)(uStack_250 >> 0x20);
    uStack_178 = (undefined4)uStack_238;
    uStack_174 = (undefined4)(uStack_238 >> 0x20);
    uStack_180 = (undefined4)uStack_240;
    uStack_17c = (undefined4)(uStack_240 >> 0x20);
    uStack_168 = uStack_228;
    uStack_170 = (undefined4)uStack_230;
    uStack_16c = (undefined4)(uStack_230 >> 0x20);
    iStack_19c = uStack_260._4_4_;
    uVar10 = uStack_160;
    puVar17 = puStack_158;
    if ((puStack_158 != &uStack_150) &&
       (uVar10 = uVar20, puVar17 = &uStack_150, puStack_158 != (undefined8 *)0x0)) {
      _free(puStack_158[-1]);
    }
    puStack_158 = puVar17;
    uStack_160 = uVar10;
    if (uStack_260._4_4_ < 3) {
      puVar17 = (undefined8 *)((ulong)&uStack_260 | 4);
      *puStack_158 = *puStack_218;
      puStack_158[1] = puStack_218[1];
      uStack_260 = CONCAT44(uStack_260._4_4_,0x42ff0000);
      puVar17[1] = 0;
      *puVar17 = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      *(undefined8 *)((long)puVar17 + 0x34) = 0;
      *(undefined8 *)((long)puVar17 + 0x2c) = 0;
      if (puStack_218 != &uStack_210) {
        _free(puStack_218[-1]);
      }
    }
    else {
      uStack_160 = uStack_220;
      puStack_158 = puStack_218;
    }
  }
  if ((*param_4 & 0x1f0000) != 0) {
    uStack_260 = CONCAT44(iVar2,iVar1);
    FUN_109a8ee3c(param_4,&uStack_260,uVar5,0xffffffff,0,0);
    if ((*param_4 & 0x1f0000) == 0x10000) {
      puVar15 = *(ulong **)(param_4 + 2);
      uStack_220 = (ulong)&uStack_260 | 8;
      uStack_258 = puVar15[1];
      uStack_260 = *puVar15;
      uStack_248 = puVar15[3];
      uStack_250 = puVar15[2];
      uStack_238 = puVar15[5];
      uStack_240 = puVar15[4];
      uStack_228 = puVar15[7];
      uStack_230 = puVar15[6];
      puStack_218 = &uStack_210;
      uStack_210 = 0;
      uStack_208 = 0;
      if (puVar15[7] != 0) {
        piVar3 = (int *)(puVar15[7] + 0x14);
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = *piVar3 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if (*(int *)((long)puVar15 + 4) < 3) {
        uStack_210 = *(undefined8 *)puVar15[9];
        uStack_208 = ((undefined8 *)puVar15[9])[1];
      }
      else {
        uStack_260 = uStack_260 & 0xffffffff;
        func_0x000109a84868(&uStack_260);
      }
    }
    else {
      FUN_109a8a180(&uStack_260,param_4,0xffffffff);
    }
    if (uStack_1c8 != 0) {
      piVar3 = (int *)(uStack_1c8 + 0x14);
      do {
        iVar1 = *piVar3;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = iVar1 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_200);
      }
    }
    if (0 < iStack_1fc) {
      lVar16 = 0;
      do {
        *(undefined4 *)(uStack_1c0 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iStack_1fc);
    }
    uStack_1f8 = (undefined4)uStack_258;
    uStack_1f4 = (undefined4)(uStack_258 >> 0x20);
    uStack_200 = (undefined4)uStack_260;
    uStack_1e8 = (undefined4)uStack_248;
    uStack_1e4 = (undefined4)(uStack_248 >> 0x20);
    uStack_1f0 = (undefined4)uStack_250;
    uStack_1ec = (undefined4)(uStack_250 >> 0x20);
    uStack_1d8 = (undefined4)uStack_238;
    uStack_1d4 = (undefined4)(uStack_238 >> 0x20);
    uStack_1e0 = (undefined4)uStack_240;
    uStack_1dc = (undefined4)(uStack_240 >> 0x20);
    uStack_1c8 = uStack_228;
    uStack_1d0 = (undefined4)uStack_230;
    uStack_1cc = (undefined4)(uStack_230 >> 0x20);
    iStack_1fc = uStack_260._4_4_;
    uVar20 = uStack_1c0;
    puVar17 = puStack_1b8;
    if ((puStack_1b8 != &uStack_1b0) &&
       (uVar20 = uVar19, puVar17 = &uStack_1b0, puStack_1b8 != (undefined8 *)0x0)) {
      _free(puStack_1b8[-1]);
    }
    puStack_1b8 = puVar17;
    uStack_1c0 = uVar20;
    if (uStack_260._4_4_ < 3) {
      puVar17 = (undefined8 *)((ulong)&uStack_260 | 4);
      *puStack_1b8 = *puStack_218;
      puStack_1b8[1] = puStack_218[1];
      uStack_260 = CONCAT44(uStack_260._4_4_,0x42ff0000);
      puVar17[1] = 0;
      *puVar17 = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      *(undefined8 *)((long)puVar17 + 0x34) = 0;
      *(undefined8 *)((long)puVar17 + 0x2c) = 0;
      if (puStack_218 != &uStack_210) {
        _free(puStack_218[-1]);
      }
    }
    else {
      uStack_1c0 = uStack_220;
      puStack_1b8 = puStack_218;
    }
  }
  bVar11 = ((ulong)puVar14 & 7) != 0;
  bVar12 = uVar6 != 4;
  if ((uVar7 != 6) || (bVar11 || bVar12)) {
    if (uVar7 != 5 || (bVar11 || bVar12)) {
      if (uVar7 != 4 || (bVar11 || bVar12)) {
        bVar11 = ((ulong)puVar14 & 7) != 0;
        if ((uVar7 != 6) || (bVar11 || uVar6 != 5)) {
          if (uVar7 != 5 || (bVar11 || uVar6 != 5)) {
            if (((uVar7 == 6) && (((ulong)puVar14 & 7) == 0)) && (uVar6 == 6)) {
              pcVar18 = (code *)0x109b53c7c;
            }
            else if (((uVar7 == 6) && (uVar4 == 2)) && (uVar6 == 6)) {
              pcVar18 = (code *)0x109b54280;
            }
            else if (((uVar7 == 6) && (uVar4 == 3)) && (uVar6 == 6)) {
              pcVar18 = (code *)0x109b54894;
            }
            else if ((uVar7 != 6) || (uVar4 != 5 || uVar6 != 5)) {
              if (uVar7 != 5 || (uVar4 != 5 || uVar6 != 5)) {
                if (((uVar7 == 6) && (uVar4 == 5)) && (uVar6 == 6)) {
                  pcVar18 = (code *)0x109b55ab4;
                }
                else {
                  if (((uVar7 != 6) || (uVar4 != 6)) || (uVar6 != 6)) {
                    FUN_109a38ed8(&uStack_260,"");
                    FUN_109ac3188(0xffffff2e,&uStack_260,&UNK_10f59e49d,&UNK_10f59e4a6,0x22a);
                    /* WARNING: Does not return */
                    pcVar18 = (code *)SoftwareBreakpoint(1,0x109b51d74);
                    (*pcVar18)();
                  }
                  pcVar18 = (code *)0x109b560c8;
                }
              }
              else {
                pcVar18 = (code *)0x109b554b4;
              }
            }
            else {
              pcVar18 = (code *)0x109b54ea8;
            }
          }
          else {
            pcVar18 = (code *)0x109b53670;
          }
        }
        else {
          pcVar18 = (code *)0x109b53050;
        }
      }
      else {
        pcVar18 = (code *)0x109b52a38;
      }
    }
    else {
      pcVar18 = (code *)0x109b52420;
    }
  }
  else {
    pcVar18 = FUN_109b51e10;
  }
  uStack_260 = NEON_rev64(*puStack_a0,4);
  (*pcVar18)(uStack_d0,uStack_90,uStack_130,uStack_f0,CONCAT44(uStack_18c,uStack_190),uStack_150,
             CONCAT44(uStack_1ec,uStack_1f0),uStack_1b0,&uStack_260,uVar13 + 1);
  if (uStack_1c8 != 0) {
    piVar3 = (int *)(uStack_1c8 + 0x14);
    do {
      iVar1 = *piVar3;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar11) {
        *piVar3 = iVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_200);
    }
  }
  uStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  if (0 < iStack_1fc) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_1c0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_1fc);
  }
  if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
    _free(puStack_1b8[-1]);
  }
  if (uStack_168 != 0) {
    piVar3 = (int *)(uStack_168 + 0x14);
    do {
      iVar1 = *piVar3;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar11) {
        *piVar3 = iVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_1a0);
    }
  }
  uStack_168 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  if (0 < iStack_19c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_160 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_19c);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    _free(puStack_158[-1]);
  }
  if (uStack_108 != 0) {
    piVar3 = (int *)(uStack_108 + 0x14);
    do {
      iVar1 = *piVar3;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar11) {
        *piVar3 = iVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  uStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_100 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (uStack_a8 != 0) {
    piVar3 = (int *)(uStack_a8 + 0x14);
    do {
      iVar1 = *piVar3;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar11) {
        *piVar3 = iVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)puStack_a0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 109b51e10; end: 109b566d3;  */

void FUN_109b51e10(byte *param_1,int param_2,long param_3,ulong param_4,double *param_5,
                  ulong param_6,long param_7,ulong param_8,int *param_9,uint param_10)

{
  int iVar1;
  double *pdVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  undefined1 *puVar29;
  int *piVar30;
  ulong uVar31;
  int *piVar32;
  long lVar33;
  int *piVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_488 [1064];
  
  uVar31 = (ulong)param_10;
  iVar4 = param_9[1];
  uVar6 = *param_9 * param_10;
  uVar21 = uVar6 + param_10;
  puVar29 = (undefined1 *)(-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2);
  _bzero(param_3,puVar29);
  iVar27 = (int)(param_4 >> 2);
  iVar13 = (int)(param_6 >> 3);
  if (param_5 != (double *)0x0) {
    _bzero(param_5,(long)(int)uVar21 << 3);
    param_5 = param_5 + (int)(param_10 + iVar13);
  }
  piVar30 = (int *)(param_3 + (long)(int)(param_10 + iVar27) * 4);
  iVar26 = (int)(param_8 >> 2);
  if (param_7 == 0) {
    piVar32 = (int *)0x0;
  }
  else {
    _bzero(param_7,puVar29);
    piVar32 = (int *)(param_7 + (long)(int)(param_10 + iVar26) * 4);
  }
  iVar7 = -param_10;
  if (param_5 == (double *)0x0 && piVar32 == (int *)0x0) {
    if (0 < iVar4) {
      iVar13 = 0;
      do {
        if (0 < (int)param_10) {
          uVar21 = 0;
          do {
            piVar30[iVar7] = 0;
            if (0 < (int)uVar6) {
              lVar25 = 0;
              iVar26 = 0;
              do {
                iVar26 = iVar26 + (uint)param_1[lVar25];
                piVar30[lVar25] = iVar26 + piVar30[lVar25 - iVar27];
                lVar25 = lVar25 + (int)param_10;
              } while (lVar25 < (long)(ulong)uVar6);
            }
            uVar21 = uVar21 + 1;
            param_1 = param_1 + 1;
            piVar30 = piVar30 + 1;
          } while (uVar21 != param_10);
        }
        iVar13 = iVar13 + 1;
        param_1 = param_1 + ((long)param_2 - (long)(int)param_10);
        piVar30 = piVar30 + (int)(iVar27 - param_10);
      } while (iVar13 != iVar4);
    }
  }
  else if (piVar32 == (int *)0x0) {
    if (0 < iVar4) {
      iVar26 = 0;
      do {
        if (0 < (int)param_10) {
          uVar21 = 0;
          do {
            piVar30[iVar7] = 0;
            param_5[iVar7] = 0.0;
            if (0 < (int)uVar6) {
              lVar25 = 0;
              iVar16 = 0;
              dVar35 = 0.0;
              do {
                iVar16 = iVar16 + (uint)param_1[lVar25];
                dVar36 = (double)(uint)param_1[lVar25];
                dVar35 = dVar35 + dVar36 * dVar36;
                dVar36 = param_5[lVar25 - iVar13];
                piVar30[lVar25] = iVar16 + piVar30[lVar25 - iVar27];
                param_5[lVar25] = dVar36 + dVar35;
                lVar25 = lVar25 + (int)param_10;
              } while (lVar25 < (long)(ulong)uVar6);
            }
            uVar21 = uVar21 + 1;
            param_1 = param_1 + 1;
            piVar30 = piVar30 + 1;
            param_5 = param_5 + 1;
          } while (uVar21 != param_10);
        }
        iVar26 = iVar26 + 1;
        param_1 = param_1 + ((long)param_2 - (long)(int)param_10);
        piVar30 = piVar30 + (int)(iVar27 - param_10);
        param_5 = param_5 + (int)(iVar13 - param_10);
      } while (iVar26 != iVar4);
    }
  }
  else {
    puVar9 = auStack_488;
    if (0x108 < uVar21) {
      if ((int)uVar21 < 0) {
        puVar29 = (undefined1 *)0xffffffffffffffff;
      }
      __Znam();
      puVar9 = puVar29;
    }
    puVar29 = puVar9;
    if (0 < (int)param_10) {
      uVar21 = 0;
      do {
        piVar32[iVar7] = 0;
        piVar30[iVar7] = 0;
        if (0 < (int)uVar6) {
          lVar25 = 0;
          iVar16 = 0;
          dVar35 = 0.0;
          do {
            bVar5 = param_1[lVar25];
            piVar32[lVar25] = (uint)bVar5;
            *(uint *)(puVar29 + lVar25 * 4) = (uint)bVar5;
            iVar16 = iVar16 + (uint)bVar5;
            dVar36 = (double)(uint)bVar5;
            dVar35 = dVar35 + dVar36 * dVar36;
            piVar30[lVar25] = iVar16;
            if (param_5 != (double *)0x0) {
              param_5[lVar25] = dVar35;
            }
            lVar25 = lVar25 + uVar31;
          } while (uVar6 - (int)lVar25 != 0 && (int)lVar25 <= (int)uVar6);
        }
        if (uVar6 - param_10 == 0) {
          *(undefined4 *)(puVar29 + uVar31 * 4) = 0;
        }
        if (param_5 != (double *)0x0) {
          param_5[iVar7] = 0.0;
          param_5 = param_5 + 1;
        }
        uVar21 = uVar21 + 1;
        param_1 = param_1 + 1;
        piVar30 = piVar30 + 1;
        piVar32 = piVar32 + 1;
        puVar29 = puVar29 + 4;
      } while (uVar21 != param_10);
    }
    if (1 < iVar4) {
      lVar25 = (long)(int)param_10;
      lVar22 = (long)iVar7;
      uVar14 = -(ulong)(param_10 >> 0x1f) & 0xfffffff800000000 | uVar31 << 3;
      iVar16 = 1;
      do {
        pbVar15 = param_1 + ((long)param_2 - (long)(int)param_10);
        piVar10 = piVar30 + (int)(iVar27 - param_10);
        piVar34 = piVar32 + (int)(iVar26 - param_10);
        pdVar2 = param_5 + (int)(iVar13 - param_10);
        bVar8 = param_5 != (double *)0x0;
        param_5 = (double *)0x0;
        if (bVar8) {
          param_5 = pdVar2;
        }
        puVar11 = puVar29 + lVar22 * 4;
        if (0 < (int)param_10) {
          uVar21 = 0;
          lVar33 = (long)piVar32 +
                   (-(param_8 >> 0x21 & 1) & 0xfffffffc00000000 | (param_8 >> 2 & 0xffffffff) << 2);
          puVar29 = puVar29 + uVar14 + (long)iVar7 * 4;
          piVar32 = piVar30 + iVar27;
          param_1 = param_1 + param_2;
          do {
            bVar5 = *pbVar15;
            uVar17 = (uint)bVar5;
            uVar18 = (uint)bVar5;
            dVar35 = (double)uVar17 * (double)uVar17;
            piVar10[lVar22] = 0;
            piVar3 = piVar34 + -iVar26;
            if (param_5 == (double *)0x0) {
              piVar34[lVar22] = *piVar3;
              iVar23 = piVar10[-iVar27];
            }
            else {
              param_5[lVar22] = 0.0;
              piVar34[lVar22] = *piVar3;
              iVar23 = piVar10[-iVar27];
              *param_5 = dVar35 + *(double *)
                                   ((long)param_5 + ((long)-((param_6 >> 3) << 0x20) >> 0x1d));
            }
            *piVar10 = iVar23 + (uint)bVar5;
            iVar23 = *(int *)(puVar11 + lVar25 * 4);
            *piVar34 = *piVar3 + (uint)bVar5 + iVar23;
            uVar19 = param_10;
            uVar24 = uVar18;
            if ((int)param_10 < (int)(uVar6 - param_10)) {
              lVar28 = 0;
              uVar20 = uVar31;
              iVar12 = -iVar26;
              uVar24 = uVar17;
              do {
                *(uint *)(puVar11 + lVar28 * 4) = uVar17 + iVar23;
                bVar5 = param_1[lVar28];
                uVar17 = (uint)bVar5;
                uVar18 = (uint)bVar5;
                uVar24 = uVar24 + bVar5;
                dVar35 = dVar35 + (double)uVar17 * (double)uVar17;
                piVar32[lVar28] = uVar24 + piVar30[lVar28];
                if (param_5 != (double *)0x0) {
                  *(double *)((long)param_5 + lVar28 * 8 + uVar14) =
                       dVar35 + *(double *)((long)param_5 + lVar28 * 8 + uVar14 + (long)iVar13 * -8)
                  ;
                }
                iVar1 = iVar23 + (uint)bVar5;
                iVar23 = *(int *)(puVar29 + lVar28 * 4);
                *(int *)(lVar33 + lVar28 * 4) = iVar1 + iVar23 + piVar34[iVar12];
                lVar28 = lVar28 + lVar25;
                iVar12 = iVar12 + param_10;
                uVar19 = (int)uVar20 + param_10;
                uVar20 = (ulong)uVar19;
              } while (lVar25 + lVar28 < (long)(int)(uVar6 - param_10));
            }
            if (uVar6 - param_10 != 0 && (int)param_10 <= (int)uVar6) {
              iVar23 = *(int *)(puVar11 + (long)(int)uVar19 * 4);
              *(uint *)(puVar11 + (long)(int)(uVar19 - param_10) * 4) = iVar23 + uVar18;
              bVar5 = pbVar15[(int)uVar19];
              piVar10[(int)uVar19] = uVar24 + bVar5 + piVar10[(int)(uVar19 - iVar27)];
              if (param_5 != (double *)0x0) {
                dVar36 = (double)(uint)bVar5;
                param_5[(int)uVar19] = dVar35 + dVar36 * dVar36 + param_5[(int)(uVar19 - iVar13)];
              }
              piVar34[(int)uVar19] =
                   iVar23 + (uint)bVar5 + piVar34[(int)(uVar19 - (param_10 + iVar26))];
              *(uint *)(puVar11 + (long)(int)uVar19 * 4) = (uint)bVar5;
            }
            pdVar2 = param_5 + 1;
            bVar8 = param_5 != (double *)0x0;
            param_5 = (double *)0x0;
            if (bVar8) {
              param_5 = pdVar2;
            }
            uVar21 = uVar21 + 1;
            pbVar15 = pbVar15 + 1;
            piVar10 = piVar10 + 1;
            piVar34 = piVar34 + 1;
            puVar11 = puVar11 + 4;
            lVar33 = lVar33 + 4;
            puVar29 = puVar29 + 4;
            piVar32 = piVar32 + 1;
            piVar30 = piVar30 + 1;
            param_1 = param_1 + 1;
          } while (uVar21 != param_10);
        }
        piVar32 = piVar34;
        iVar16 = iVar16 + 1;
        puVar29 = puVar11;
        param_1 = pbVar15;
        piVar30 = piVar10;
      } while (iVar16 != iVar4);
    }
    if (puVar9 != auStack_488) {
      __ZdaPv();
    }
  }
  return;
}



/* Entry: 109b566d4; end: 109b59077;  */

void FUN_109b566d4(double param_1,ulong *param_2,ulong *param_3,uint *param_4,uint *param_5,
                  uint param_6,int *param_7,uint param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  code *pcVar22;
  bool bVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  undefined8 *puVar47;
  undefined4 auStack_510 [2];
  uint *puStack_508;
  undefined8 uStack_500;
  undefined4 *puStack_4f8;
  uint *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  undefined8 *puStack_4a0;
  long *plStack_498;
  long lStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_448;
  long lStack_440;
  undefined1 *puStack_438;
  undefined1 auStack_430 [16];
  undefined8 uStack_420;
  undefined8 uStack_418;
  uint uStack_410;
  uint uStack_40c;
  int iStack_408;
  int iStack_404;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  long lStack_3d0;
  long *plStack_3c8;
  long alStack_3c0 [2];
  uint uStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  int iStack_3a4;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  long lStack_370;
  long *plStack_368;
  long alStack_360 [2];
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  long *plStack_310;
  long *plStack_308;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  uint *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 *puStack_230;
  long *plStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  uint uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2d8 = 0;
  uStack_348 = (uint *)param_3[1];
  uStack_350 = *param_3;
  uStack_338 = param_3[3];
  uStack_340 = param_3[2];
  plStack_310 = (long *)((ulong)&uStack_350 | 8);
  iVar38 = *(int *)((long)param_3 + 4);
  uStack_328 = param_3[5];
  uStack_330 = param_3[4];
  uStack_318 = param_3[7];
  uStack_320 = param_3[6];
  lStack_2f8 = 0;
  lStack_300 = 0;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar11 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar23) {
        *piVar1 = *piVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    iVar38 = *(int *)((long)param_3 + 4);
  }
  plStack_308 = &lStack_300;
  if (iVar38 < 3) {
    lStack_300 = *(long *)param_3[9];
    lStack_2f8 = ((long *)param_3[9])[1];
  }
  else {
    uStack_350 = uStack_350 & 0xffffffff;
    func_0x000109a84868(&uStack_350,param_3);
  }
  if (((2 < (int)*(uint *)((long)param_2 + 4)) || (2 < uStack_350._4_4_)) || (2 < (int)param_4[1]))
  {
    puVar25 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar25 = 1;
    uStack_e8 = puVar25 + 1;
    uStack_e0._0_4_ = 0x32;
    uStack_e0._4_4_ = 0;
    *(undefined8 *)(puVar25 + 3) = 0x26262032203d3c20;
    *(undefined8 *)(puVar25 + 1) = 0x736d69642e676d69;
    *(undefined2 *)(puVar25 + 0xd) = 0x3220;
    *(undefined1 *)((long)puVar25 + 0x36) = 0;
    *(undefined8 *)(puVar25 + 7) = 0x32203d3c20736d69;
    *(undefined8 *)(puVar25 + 5) = 0x642e6c706d657420;
    *(undefined8 *)(puVar25 + 0xb) = 0x3d3c20736d69642e;
    *(undefined8 *)(puVar25 + 9) = 0x72726f6320262620;
    FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f59e55d,&UNK_10f59e567,0x288);
    goto LAB_109b58928;
  }
  uVar42 = (uint)*param_2;
  uVar46 = (ulong)uVar42 & 7;
  uVar18 = (uint)uStack_350;
  uVar26 = (uint)uStack_350 & 7;
  uVar45 = (uint)uVar46;
  uVar43 = uVar46;
  if (uVar45 == uVar26) {
LAB_109b56854:
    uVar26 = param_5[1];
    if ((int)uVar26 < (int)((int)uStack_348 + (uint)param_2[1])) {
      uVar30 = *param_5;
      if ((int)uVar30 < (int)(uStack_348._4_4_ + *(uint *)((long)param_2 + 0xc))) {
        if (((param_6 & 0xff8) != 0) && (param_1 != 0.0)) {
          puVar25 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar25 = 1;
          uStack_e8 = puVar25 + 1;
          uStack_e0._0_4_ = 0x16;
          uStack_e0._4_4_ = 0;
          *(undefined1 *)((long)puVar25 + 0x1a) = 0;
          *(undefined8 *)(puVar25 + 3) = 0x746c6564207c7c20;
          *(undefined8 *)(puVar25 + 1) = 0x31203d3d206e6363;
          *(undefined8 *)((long)puVar25 + 0x12) = 0x30203d3d2061746c;
          FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f59e55d,&UNK_10f59e567,0x294);
          goto LAB_109b58928;
        }
        if ((((2 < (int)param_4[1]) || (param_4[2] != uVar26)) || (param_4[3] != uVar30)) ||
           (((*param_4 & 0xfff) != (param_6 & 0xfff) || (*(long *)(param_4 + 4) == 0)))) {
          uStack_e8._0_4_ = uVar26;
          uStack_e8._4_4_ = uVar30;
          FUN_109a83fd0(param_4,2,&uStack_e8);
          uVar26 = param_4[2];
          uVar30 = param_4[3];
        }
        uVar3 = param_6 & 7;
        uVar41 = (uint)uVar43;
        uVar7 = uVar41;
        if (uVar41 <= uVar3) {
          uVar7 = uVar3;
        }
        if (uVar7 < 6) {
          uVar7 = 5;
        }
        uVar8 = 6;
        if (uVar45 < 2) {
          uVar8 = uVar7;
        }
        uVar36 = (uint)(long)(double)(long)((double)uStack_348._4_4_ * 4.5);
        uVar7 = 0x101U - uStack_348._4_4_;
        if ((int)(0x101U - uStack_348._4_4_) <= (int)uVar36) {
          uVar7 = uVar36;
        }
        uVar36 = uVar30;
        if ((int)uVar7 <= (int)uVar30) {
          uVar36 = uVar7;
        }
        uVar7 = (uStack_348._4_4_ + uVar36) - 1;
        if (uVar7 < 0x7eb495a0) {
          iVar38 = 0;
          iVar37 = 0x672;
          do {
            iVar39 = iVar38 + iVar37 >> 1;
            if (*(int *)(&UNK_10e02ae40 + (long)iVar39 * 4) < (int)uVar7) {
              iVar38 = iVar39 + 1;
              iVar39 = iVar37;
            }
            iVar37 = iVar39;
          } while (iVar38 < iVar39);
          iVar38 = *(int *)(&UNK_10e02ae40 + (long)iVar39 * 4);
        }
        else {
          iVar38 = -1;
        }
        uVar36 = (uint)(long)(double)(long)((double)(int)uStack_348 * 4.5);
        uVar7 = 0x101U - (int)uStack_348;
        if ((int)(0x101U - (int)uStack_348) <= (int)uVar36) {
          uVar7 = uVar36;
        }
        uVar36 = uVar26;
        if ((int)uVar7 <= (int)uVar26) {
          uVar36 = uVar7;
        }
        if (iVar38 < 3) {
          iVar38 = 2;
        }
        uVar7 = ((int)uStack_348 + uVar36) - 1;
        if (uVar7 < 0x7eb495a0) {
          iVar37 = 0;
          uVar36 = uVar42 >> 3 & 0x1ff;
          uVar18 = uVar18 >> 3 & 0x1ff;
          iVar39 = 0x672;
          do {
            iVar4 = iVar37 + iVar39 >> 1;
            if (*(int *)(&UNK_10e02ae40 + (long)iVar4 * 4) < (int)uVar7) {
              iVar37 = iVar4 + 1;
              iVar4 = iVar39;
            }
            iVar39 = iVar4;
          } while (iVar37 < iVar4);
          iVar37 = *(int *)(&UNK_10e02ae40 + (long)iVar4 * 4);
          if (0 < iVar37) {
            uStack_e8._0_4_ = 0x42ff0000;
            if (iVar38 - uStack_348._4_4_ < (int)uVar30) {
              uVar30 = (iVar38 - uStack_348._4_4_) + 1;
            }
            if (iVar37 - (int)uStack_348 < (int)uVar26) {
              uVar26 = (iVar37 - (int)uStack_348) + 1;
            }
            uStack_e0._4_4_ = 0;
            uStack_d8 = 0;
            uStack_e8._4_4_ = 0;
            uStack_e0._0_4_ = 0;
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            uStack_bc = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            uStack_148 = iVar37 * (uVar18 + 1);
            lStack_b0 = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            puStack_a8 = &uStack_e0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_144 = CONCAT44(uStack_144._4_4_,iVar38);
            puStack_a0 = &uStack_98;
            FUN_109a83fd0(&uStack_e8,2,&uStack_148,uVar8);
            uStack_148 = 0x42ff0000;
            lStack_108 = (long)&uStack_144 + 4;
            uStack_13c = 0;
            uStack_138 = 0;
            uStack_144 = 0;
            uStack_12c = 0;
            uStack_128 = 0;
            uStack_134 = 0;
            uStack_130 = 0;
            uStack_11c = 0;
            uStack_124 = 0;
            uStack_120 = 0;
            lStack_110 = 0;
            uStack_118 = 0;
            uStack_114 = 0;
            uStack_f0 = 0;
            uStack_f8 = 0;
            uStack_1b0 = CONCAT44(iVar38,iVar37);
            puStack_100 = &uStack_f8;
            FUN_109a83fd0(&uStack_148,2,&uStack_1b0,uVar8);
            iVar39 = 0;
            if ((uVar18 != 0) && (uVar41 != uVar8)) {
              iVar39 = (int)uStack_348 * uStack_348._4_4_ <<
                       (ulong)(0xfa50U >> (ulong)(uVar41 << 1) & 3);
            }
            if (((uVar36 != 0) && (uVar45 != uVar8)) &&
               (iVar4 = (uVar26 + (int)uStack_348 + -1) * (uVar30 + uStack_348._4_4_ + -1) <<
                        (ulong)(0xfa50U >> (ulong)(uVar45 << 1) & 3), iVar39 <= iVar4)) {
              iVar39 = iVar4;
            }
            if (((((uVar42 | param_6) & 0xff8) != 0) && (uVar3 != uVar8)) &&
               (iVar4 = uVar26 * uVar30 << (ulong)(0xfa50U >> (ulong)(uVar3 << 1) & 3),
               iVar39 <= iVar4)) {
              iVar39 = iVar4;
            }
            uVar43 = (ulong)iVar39;
            uVar34 = uStack_2e0 - uStack_2e8;
            if (uVar43 < uVar34 || uVar43 - uVar34 == 0) {
              if (uVar43 < uVar34) {
                uStack_2e0 = uStack_2e8 + uVar43;
              }
            }
            else {
              func_0x000107c27d58(&uStack_2e8,uVar43 - uVar34);
            }
            uVar42 = 0;
            uVar44 = (ulong)&uStack_1b0 | 8;
            puVar47 = (undefined8 *)((ulong)&uStack_210 | 4);
            uVar43 = (ulong)&uStack_210 | 8;
            uVar34 = (ulong)(0xfa50U >> (ulong)(uVar41 << 1) & 3);
            do {
              uStack_1a8 = uStack_348;
              uStack_1b0 = uStack_350;
              uStack_198 = uStack_338;
              uStack_1a0 = uStack_340;
              uStack_188 = uStack_328;
              uStack_190 = uStack_330;
              uStack_178 = uStack_318;
              uStack_180 = uStack_320;
              lStack_160 = 0;
              lStack_158 = 0;
              if (uStack_318 != 0) {
                piVar1 = (int *)(uStack_318 + 0x14);
                do {
                  cVar11 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar23) {
                    *piVar1 = *piVar1 + 1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
              }
              uStack_170 = uVar44;
              plStack_168 = &lStack_160;
              if (uStack_350._4_4_ < 3) {
                lStack_160 = *plStack_308;
                lStack_158 = plStack_308[1];
              }
              else {
                uStack_1b0 = uStack_350 & 0xffffffff;
                func_0x000109a84868(&uStack_1b0,&uStack_350);
              }
              uStack_410 = 0;
              uStack_40c = uVar42 * iVar37;
              iStack_408 = iVar38;
              iStack_404 = iVar37;
              FUN_109a852c8(&uStack_3b0,&uStack_e8,&uStack_410);
              uStack_210 = (ulong)(uVar42 * iVar37) << 0x20;
              uStack_208 = (uint *)NEON_rev64(uStack_348,4);
              FUN_109a852c8(&uStack_410,&uStack_e8,&uStack_210);
              if (uVar18 != 0) {
                uStack_1d0 = uVar43;
                plStack_1c8 = &lStack_1c0;
                if (uVar41 == uVar8) {
                  uStack_208 = (uint *)CONCAT44(iStack_404,iStack_408);
                  uStack_210 = CONCAT44(uStack_40c,uStack_410);
                  uStack_1f8 = uStack_3f8;
                  uStack_200 = uStack_400;
                  uStack_1e8 = uStack_3e8;
                  uStack_1f0 = uStack_3f0;
                  uStack_1d8 = uStack_3d8;
                  uStack_1e0 = uStack_3e0;
                  lStack_1c0 = 0;
                  uStack_1b8 = 0;
                  if (uStack_3d8 != 0) {
                    piVar1 = (int *)(uStack_3d8 + 0x14);
                    do {
                      cVar11 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar23) {
                        *piVar1 = *piVar1 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  if ((int)uStack_40c < 3) {
                    lStack_1c0 = *plStack_3c8;
                    uStack_1b8 = plStack_3c8[1];
                  }
                  else {
                    uStack_210 = (ulong)uStack_410;
                    func_0x000109a84868(&uStack_210,&uStack_410);
                  }
                }
                else {
                  uStack_208 = (uint *)*plStack_310;
                  uStack_210 = CONCAT44(2,uVar41 | 0x42ff0000);
                  uStack_200 = uStack_2e8;
                  uStack_1f8 = uStack_2e8;
                  uStack_1e8 = 0;
                  uStack_1f0 = 0;
                  uStack_1d8 = 0;
                  uStack_1e0 = 0;
                  lStack_1c0 = 0;
                  uStack_1b8 = 0;
                  if ((uStack_2e8 == 0) &&
                     ((long)(int)*plStack_310 * (long)*(int *)((long)plStack_310 + 4) != 0)) {
                    puVar25 = (undefined4 *)0x24;
                    func_0x000107c2ae8c();
                    *puVar25 = 1;
                    uStack_480 = puVar25 + 1;
                    uStack_478 = (uint *)0x1c;
                    *(undefined1 *)(puVar25 + 8) = 0;
                    *(undefined8 *)(puVar25 + 3) = 0x207c7c2030203d3d;
                    *(undefined8 *)(puVar25 + 1) = 0x2029286c61746f74;
                    *(undefined8 *)(puVar25 + 6) = 0x4c4c554e203d2120;
                    *(undefined8 *)(puVar25 + 4) = 0x61746164207c7c20;
                    FUN_109ac3188(0xffffff29,&uStack_480,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb);
                    goto LAB_109b58928;
                  }
                  lStack_1c0 = (long)*(int *)((long)plStack_310 + 4) << uVar34;
                  uStack_210 = CONCAT44(2,uVar41 | 0x42ff4000);
                  uStack_1f0 = uStack_2e8 + lStack_1c0 * (int)*plStack_310;
                  uStack_1e8 = uStack_1f0;
                  uStack_1b8 = (ulong)(uint)(1 << uVar34);
                }
                if (uStack_178 != 0) {
                  piVar1 = (int *)(uStack_178 + 0x14);
                  do {
                    iVar39 = *piVar1;
                    cVar11 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar23) {
                      *piVar1 = iVar39 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar39 + -1 == 0) {
                    func_0x000109a848d4(&uStack_1b0);
                  }
                }
                if (0 < uStack_1b0._4_4_) {
                  lVar28 = 0;
                  do {
                    *(undefined4 *)(uStack_170 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < uStack_1b0._4_4_);
                }
                uStack_1a8 = uStack_208;
                uStack_1b0 = uStack_210;
                uStack_198 = uStack_1f8;
                uStack_1a0 = uStack_200;
                uStack_188 = uStack_1e8;
                uStack_190 = uStack_1f0;
                uStack_178 = uStack_1d8;
                uStack_180 = uStack_1e0;
                uVar21 = uStack_170;
                plVar20 = plStack_168;
                if ((plStack_168 != &lStack_160) &&
                   (uVar21 = uVar44, plVar20 = &lStack_160, plStack_168 != (long *)0x0)) {
                  _free(plStack_168[-1]);
                }
                plStack_168 = plVar20;
                uStack_170 = uVar21;
                if (uStack_210._4_4_ < 3) {
                  *plStack_168 = *plStack_1c8;
                  plStack_168[1] = plStack_1c8[1];
                  uStack_210 = CONCAT44(uStack_210._4_4_,0x42ff0000);
                  puVar47[1] = 0;
                  *puVar47 = 0;
                  puVar47[3] = 0;
                  puVar47[2] = 0;
                  puVar47[5] = 0;
                  puVar47[4] = 0;
                  *(undefined8 *)((long)puVar47 + 0x34) = 0;
                  *(undefined8 *)((long)puVar47 + 0x2c) = 0;
                  if (plStack_1c8 != &lStack_1c0) {
                    _free(plStack_1c8[-1]);
                  }
                }
                else {
                  plStack_168 = plStack_1c8;
                  uStack_170 = uStack_1d0;
                }
                uStack_210 = (ulong)uVar42;
                FUN_109a3e710(&uStack_350,1,&uStack_1b0,1,&uStack_210,1);
              }
              if (uStack_400 != uStack_1a0) {
                uStack_210 = CONCAT44(uStack_210._4_4_,0x2010000);
                uStack_200 = 0;
                uStack_208 = &uStack_410;
                FUN_109a41858(0x3ff0000000000000,0,&uStack_1b0,&uStack_210,uStack_410 & 7);
              }
              if (uStack_348._4_4_ < iStack_3a4) {
                uStack_480 = (undefined4 *)((long)uStack_348 << 0x20);
                uStack_4e0 = CONCAT44(iStack_3a4,uStack_348._4_4_);
                FUN_109a84930(&uStack_210,&uStack_3b0,&uStack_480,&uStack_4e0);
                uStack_478 = (uint *)0x0;
                uStack_480 = (undefined4 *)0x0;
                uStack_468 = 0;
                uStack_470 = 0;
                FUN_109a48880(&uStack_210,&uStack_480);
                if (uStack_1d8 != 0) {
                  piVar1 = (int *)(uStack_1d8 + 0x14);
                  do {
                    iVar39 = *piVar1;
                    cVar11 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar23) {
                      *piVar1 = iVar39 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar39 + -1 == 0) {
                    func_0x000109a848d4(&uStack_210);
                  }
                }
                uStack_1d8 = 0;
                uStack_1f8 = 0;
                uStack_200 = 0;
                uStack_1e8 = 0;
                uStack_1f0 = 0;
                if (0 < uStack_210._4_4_) {
                  lVar28 = 0;
                  do {
                    *(undefined4 *)(uStack_1d0 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < uStack_210._4_4_);
                }
                if (plStack_1c8 != &lStack_1c0 && plStack_1c8 != (long *)0x0) {
                  _free(plStack_1c8[-1]);
                }
              }
              uStack_200 = 0;
              uStack_210 = CONCAT44(uStack_210._4_4_,0x1010000);
              uStack_480 = (undefined4 *)CONCAT44(uStack_480._4_4_,0x2010000);
              uStack_470 = 0;
              uStack_478 = &uStack_3b0;
              uStack_208 = &uStack_3b0;
              FUN_109a50598(&uStack_210,&uStack_480,0,(ulong)uStack_348 & 0xffffffff);
              if (uStack_3d8 != 0) {
                piVar1 = (int *)(uStack_3d8 + 0x14);
                do {
                  iVar39 = *piVar1;
                  cVar11 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar23) {
                    *piVar1 = iVar39 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar39 + -1 == 0) {
                  func_0x000109a848d4(&uStack_410);
                }
              }
              uStack_3d8 = 0;
              uStack_3f8 = 0;
              uStack_400 = 0;
              uStack_3e8 = 0;
              uStack_3f0 = 0;
              if (0 < (int)uStack_40c) {
                lVar28 = 0;
                do {
                  *(undefined4 *)(lStack_3d0 + lVar28 * 4) = 0;
                  lVar28 = lVar28 + 1;
                } while (lVar28 < (int)uStack_40c);
              }
              if (plStack_3c8 != alStack_3c0 && plStack_3c8 != (long *)0x0) {
                _free(plStack_3c8[-1]);
              }
              if (uStack_378 != 0) {
                piVar1 = (int *)(uStack_378 + 0x14);
                do {
                  iVar39 = *piVar1;
                  cVar11 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar23) {
                    *piVar1 = iVar39 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar39 + -1 == 0) {
                  func_0x000109a848d4(&uStack_3b0);
                }
              }
              uStack_378 = 0;
              uStack_398 = 0;
              uStack_3a0 = 0;
              uStack_388 = 0;
              uStack_390 = 0;
              if (0 < iStack_3ac) {
                lVar28 = 0;
                do {
                  *(undefined4 *)(lStack_370 + lVar28 * 4) = 0;
                  lVar28 = lVar28 + 1;
                } while (lVar28 < iStack_3ac);
              }
              if (plStack_368 != alStack_360 && plStack_368 != (long *)0x0) {
                _free(plStack_368[-1]);
              }
              if (uStack_178 != 0) {
                piVar1 = (int *)(uStack_178 + 0x14);
                do {
                  iVar39 = *piVar1;
                  cVar11 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar23) {
                    *piVar1 = iVar39 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar39 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1b0);
                }
              }
              uStack_178 = 0;
              uStack_198 = 0;
              uStack_1a0 = 0;
              uStack_188 = 0;
              uStack_190 = 0;
              if (0 < uStack_1b0._4_4_) {
                lVar28 = 0;
                do {
                  *(undefined4 *)(uStack_170 + lVar28 * 4) = 0;
                  lVar28 = lVar28 + 1;
                } while (lVar28 < uStack_1b0._4_4_);
              }
              if (plStack_168 != &lStack_160 && plStack_168 != (long *)0x0) {
                _free(plStack_168[-1]);
              }
              bVar23 = uVar42 != uVar18;
              uVar42 = uVar42 + 1;
            } while (bVar23);
            uVar42 = param_4[2];
            uVar7 = param_4[3];
            uStack_418 = NEON_rev64(*(undefined8 *)param_2[8],4);
            uStack_420 = 0;
            uStack_170 = (ulong)&uStack_1b0 | 8;
            uStack_1a8 = (uint *)param_2[1];
            uStack_1b0 = *param_2;
            uStack_198 = param_2[3];
            uStack_1a0 = param_2[2];
            uVar41 = *(uint *)((long)param_2 + 4);
            uStack_188 = param_2[5];
            uStack_190 = param_2[4];
            uStack_178 = param_2[7];
            uStack_180 = param_2[6];
            lStack_158 = 0;
            lStack_160 = 0;
            if (param_2[7] != 0) {
              piVar1 = (int *)(param_2[7] + 0x14);
              do {
                cVar11 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = *piVar1 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              uVar41 = *(uint *)((long)param_2 + 4);
            }
            plStack_168 = &lStack_160;
            if ((int)uVar41 < 3) {
              lStack_160 = *(long *)param_2[9];
              lStack_158 = ((long *)param_2[9])[1];
            }
            else {
              uStack_1b0 = uStack_1b0 & 0xffffffff;
              func_0x000109a84868(&uStack_1b0,param_2);
            }
            if ((param_8 >> 4 & 1) == 0) {
              FUN_109a86b88(param_2,&uStack_418,&uStack_420);
              FUN_109a86cdc(&uStack_1b0,uStack_420._4_4_,
                            uStack_418._4_4_ - (uStack_420._4_4_ + (uint)param_2[1]),
                            uStack_420 & 0xffffffff,
                            (int)uStack_418 - ((int)uStack_420 + *(uint *)((long)param_2 + 0xc)));
            }
            iVar39 = 0;
            if (uVar30 != 0) {
              iVar39 = (int)(uVar30 + uVar7 + -1) / (int)uVar30;
            }
            iVar4 = 0;
            if (uVar26 != 0) {
              iVar4 = (int)(uVar26 + uVar42 + -1) / (int)uVar26;
            }
            if (0 < iVar4 * iVar39) {
              iVar40 = 0;
              puVar47 = (undefined8 *)((ulong)&uStack_4e0 | 8);
              puVar31 = (undefined8 *)((ulong)&uStack_270 | 4);
              puVar32 = (undefined8 *)((ulong)&uStack_270 | 8);
              puVar35 = (undefined8 *)((ulong)&uStack_2d0 | 4);
              uVar34 = 0xfa50UL >> (uVar46 << 1) & 3;
              uVar46 = (ulong)(0xfa50U >> (ulong)(uVar3 << 1) & 3);
              uVar43 = (ulong)(uint)(1 << uVar46);
              do {
                iVar27 = 0;
                if (iVar39 != 0) {
                  iVar27 = iVar40 / iVar39;
                }
                iVar10 = (iVar40 - iVar27 * iVar39) * uVar30;
                iVar27 = iVar27 * uVar26;
                uVar42 = param_4[3] - iVar10;
                if ((int)uVar30 <= (int)(param_4[3] - iVar10)) {
                  uVar42 = uVar30;
                }
                uVar7 = param_4[2] - iVar27;
                if ((int)uVar26 <= (int)(param_4[2] - iVar27)) {
                  uVar7 = uVar26;
                }
                iVar12 = uStack_348._4_4_ + uVar42 + -1;
                iVar13 = (int)uStack_348 + uVar7 + -1;
                uVar41 = (iVar10 - *param_7) + (int)uStack_420;
                uVar2 = (iVar27 - param_7[1]) + uStack_420._4_4_;
                uVar5 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
                iVar16 = uVar41 + iVar12;
                if (uStack_1a8._4_4_ <= (int)(uVar41 + iVar12)) {
                  iVar16 = uStack_1a8._4_4_;
                }
                uVar9 = uVar2 + iVar13;
                if ((int)(uint)uStack_1a8 <= (int)(uVar2 + iVar13)) {
                  uVar9 = (uint)uStack_1a8;
                }
                uVar6 = uVar41 & ((int)uVar41 >> 0x1f ^ 0xffffffffU);
                uStack_210 = CONCAT44(iVar16,uVar6);
                uStack_410 = uVar5;
                uStack_40c = uVar9;
                FUN_109a84930(&uStack_3b0,&uStack_1b0,&uStack_410,&uStack_210);
                uStack_210 = 0;
                uStack_208 = (uint *)CONCAT44(iVar13,iVar12);
                FUN_109a852c8(&uStack_410,&uStack_148,&uStack_210);
                iVar14 = uVar6 - uVar41;
                iVar15 = uVar5 - uVar2;
                iVar16 = iVar16 - uVar6;
                uStack_480 = (undefined4 *)CONCAT44(iVar15,iVar14);
                iVar17 = uVar9 - uVar5;
                uStack_478 = (uint *)CONCAT44(iVar17,iVar16);
                FUN_109a852c8(&uStack_210,&uStack_148,&uStack_480);
                uStack_4e0 = CONCAT44(iVar27,iVar10);
                uStack_4d8 = (uint *)CONCAT44(uVar7,uVar42);
                FUN_109a852c8(&uStack_480,param_4,&uStack_4e0);
                uVar41 = 0;
                lVar28 = (long)iVar16 << uVar34;
                lVar33 = (long)(int)uVar42 << uVar46;
                do {
                  uStack_4d8 = (uint *)CONCAT44(iStack_3a4,uStack_3a8);
                  uStack_4e0 = CONCAT44(iStack_3ac,uStack_3b0);
                  uStack_4c8 = uStack_398;
                  uStack_4d0 = uStack_3a0;
                  uStack_4b8 = uStack_388;
                  uStack_4c0 = uStack_390;
                  uStack_4a8 = uStack_378;
                  uStack_4b0 = uStack_380;
                  lStack_490 = 0;
                  lStack_488 = 0;
                  if (uStack_378 != 0) {
                    piVar1 = (int *)(uStack_378 + 0x14);
                    do {
                      cVar11 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar23) {
                        *piVar1 = *piVar1 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  puStack_4a0 = puVar47;
                  plStack_498 = &lStack_490;
                  if (iStack_3ac < 3) {
                    lStack_490 = *plStack_368;
                    lStack_488 = plStack_368[1];
                  }
                  else {
                    uStack_4e0 = (ulong)uStack_3b0;
                    func_0x000109a84868(&uStack_4e0,&uStack_3b0);
                  }
                  uStack_258 = 0;
                  uStack_260 = 0;
                  puStack_268 = (uint *)0x0;
                  uStack_270 = 0;
                  FUN_109a48880(&uStack_148,&uStack_270);
                  if (uVar36 != 0) {
                    puStack_230 = puVar32;
                    plStack_228 = &lStack_220;
                    if (uVar45 == uVar8) {
                      puStack_268 = uStack_208;
                      uStack_270 = uStack_210;
                      uStack_258 = uStack_1f8;
                      uStack_260 = uStack_200;
                      uStack_248 = uStack_1e8;
                      uStack_250 = uStack_1f0;
                      uStack_238 = uStack_1d8;
                      uStack_240 = uStack_1e0;
                      lStack_220 = 0;
                      lStack_218 = 0;
                      if (uStack_1d8 != 0) {
                        piVar1 = (int *)(uStack_1d8 + 0x14);
                        do {
                          cVar11 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar23) {
                            *piVar1 = *piVar1 + 1;
                            cVar11 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar11 != '\0');
                      }
                      if (uStack_210._4_4_ < 3) {
                        lStack_220 = *plStack_1c8;
                        lStack_218 = plStack_1c8[1];
                      }
                      else {
                        uStack_270 = uStack_210 & 0xffffffff;
                        func_0x000109a84868(&uStack_270,&uStack_210);
                      }
                    }
                    else {
                      uStack_270 = CONCAT44(2,uVar45 | 0x42ff0000);
                      puStack_268 = (uint *)CONCAT44(iVar16,iVar17);
                      uStack_260 = uStack_2e8;
                      uStack_258 = uStack_2e8;
                      uStack_248 = 0;
                      uStack_250 = 0;
                      uStack_238 = 0;
                      uStack_240 = 0;
                      lStack_220 = 0;
                      lStack_218 = 0;
                      if (((long)iVar17 * (long)iVar16 != 0) && (uStack_2e8 == 0)) {
                        puVar25 = (undefined4 *)0x24;
                        func_0x000107c2ae8c();
                        *puVar25 = 1;
                        uStack_2d0 = puVar25 + 1;
                        uStack_2c8 = (uint *)0x1c;
                        *(undefined1 *)(puVar25 + 8) = 0;
                        *(undefined8 *)(puVar25 + 3) = 0x207c7c2030203d3d;
                        *(undefined8 *)(puVar25 + 1) = 0x2029286c61746f74;
                        *(undefined8 *)(puVar25 + 6) = 0x4c4c554e203d2120;
                        *(undefined8 *)(puVar25 + 4) = 0x61746164207c7c20;
                        FUN_109ac3188(0xffffff29,&uStack_2d0,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
                        goto LAB_109b58928;
                      }
                      uStack_270 = CONCAT44(2,uVar45 | 0x42ff4000);
                      uStack_250 = uStack_2e8 + lVar28 * iVar17;
                      uStack_248 = uStack_250;
                      lStack_220 = lVar28;
                      lStack_218 = 1L << uVar34;
                    }
                    if (uStack_4a8 != 0) {
                      piVar1 = (int *)(uStack_4a8 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar11 = '\x01';
                        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar23) {
                          *piVar1 = iVar27 + -1;
                          cVar11 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar11 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&uStack_4e0);
                      }
                    }
                    if (0 < uStack_4e0._4_4_) {
                      lVar29 = 0;
                      do {
                        *(undefined4 *)((long)puStack_4a0 + lVar29 * 4) = 0;
                        lVar29 = lVar29 + 1;
                      } while (lVar29 < uStack_4e0._4_4_);
                    }
                    uStack_4d8 = puStack_268;
                    uStack_4e0 = uStack_270;
                    uStack_4c8 = uStack_258;
                    uStack_4d0 = uStack_260;
                    uStack_4b8 = uStack_248;
                    uStack_4c0 = uStack_250;
                    uStack_4a8 = uStack_238;
                    uStack_4b0 = uStack_240;
                    iVar27 = uStack_270._4_4_;
                    puVar24 = puStack_4a0;
                    plVar20 = plStack_498;
                    if ((plStack_498 != &lStack_490) &&
                       (puVar24 = puVar47, plVar20 = &lStack_490, plStack_498 != (long *)0x0)) {
                      _free(plStack_498[-1]);
                      iVar27 = uStack_270._4_4_;
                    }
                    plStack_498 = plVar20;
                    puStack_4a0 = puVar24;
                    plVar20 = plStack_228;
                    if (iVar27 < 3) {
                      *plStack_498 = *plStack_228;
                      plStack_498[1] = plVar20[1];
                      uStack_270 = CONCAT44(uStack_270._4_4_,0x42ff0000);
                      puVar31[1] = 0;
                      *puVar31 = 0;
                      puVar31[3] = 0;
                      puVar31[2] = 0;
                      puVar31[5] = 0;
                      puVar31[4] = 0;
                      *(undefined8 *)((long)puVar31 + 0x34) = 0;
                      *(undefined8 *)((long)puVar31 + 0x2c) = 0;
                      if (plVar20 != &lStack_220) {
                        _free(plVar20[-1]);
                      }
                    }
                    else {
                      plStack_498 = plStack_228;
                      puStack_4a0 = puStack_230;
                    }
                    uStack_270 = (ulong)uVar41;
                    FUN_109a3e710(&uStack_3b0,1,&uStack_4e0,1,&uStack_270,1);
                  }
                  if (uStack_200 != uStack_4d0) {
                    uStack_270 = CONCAT44(uStack_270._4_4_,0x2010000);
                    uStack_260 = 0;
                    puStack_268 = (uint *)&uStack_210;
                    FUN_109a41858(0x3ff0000000000000,0,&uStack_4e0,&uStack_270,(uint)uStack_210 & 7)
                    ;
                  }
                  if (iVar16 < iVar12 || iVar17 < iVar13) {
                    uStack_2c0 = 0;
                    uStack_2d0 = (undefined4 *)CONCAT44(uStack_2d0._4_4_,0x1010000);
                    uStack_2c8 = (uint *)&uStack_210;
                    puStack_4f8 = (undefined4 *)CONCAT44(puStack_4f8._4_4_,0x2010000);
                    puStack_4f0 = &uStack_410;
                    uStack_4e8 = 0;
                    uStack_258 = 0;
                    uStack_260 = 0;
                    puStack_268 = (uint *)0x0;
                    uStack_270 = 0;
                    FUN_109a4a0a4(&uStack_2d0,&puStack_4f8,iVar15,
                                  iStack_408 - (iVar15 + (int)uStack_208),iVar14,
                                  iStack_404 - (iVar14 + uStack_208._4_4_),param_8 | 0x10,
                                  &uStack_270);
                  }
                  uStack_260 = 0;
                  uStack_270 = CONCAT44(uStack_270._4_4_,0x1010000);
                  uStack_2c8 = &uStack_148;
                  uStack_2d0 = (undefined4 *)CONCAT44(uStack_2d0._4_4_,0x2010000);
                  uStack_2c0 = 0;
                  puStack_268 = uStack_2c8;
                  FUN_109a50598(&uStack_270,&uStack_2d0,0,iVar13);
                  uStack_2d0._4_4_ = 0;
                  if (uVar18 != 0) {
                    uStack_2d0._4_4_ = uVar41 * iVar37;
                  }
                  uStack_2d0._0_4_ = 0;
                  uStack_2c8 = (uint *)CONCAT44(iVar37,iVar38);
                  FUN_109a852c8(&uStack_270,&uStack_e8,&uStack_2d0);
                  uStack_2c0 = 0;
                  uStack_2d0._0_4_ = 0x1010000;
                  uStack_2c8 = &uStack_148;
                  uStack_4e8 = 0;
                  puStack_4f8._0_4_ = 0x1010000;
                  puStack_4f0 = (uint *)&uStack_270;
                  auStack_510[0] = 0x2010000;
                  uStack_500 = 0;
                  puStack_508 = &uStack_148;
                  FUN_109a53070(&uStack_2d0,&puStack_4f8,auStack_510,0,1);
                  uStack_2c0 = 0;
                  uStack_2d0 = (undefined4 *)CONCAT44(uStack_2d0._4_4_,0x1010000);
                  puStack_4f8 = (undefined4 *)CONCAT44(puStack_4f8._4_4_,0x2010000);
                  uStack_4e8 = 0;
                  puStack_4f0 = &uStack_148;
                  uStack_2c8 = &uStack_148;
                  FUN_109a50598(&uStack_2d0,&puStack_4f8,3,uVar7);
                  puStack_4f8 = (undefined4 *)0x0;
                  puStack_4f0 = (uint *)CONCAT44(uVar7,uVar42);
                  puVar24 = &uStack_2d0;
                  FUN_109a852c8(puVar24,&uStack_148,&puStack_4f8);
                  if (uStack_4a8 != 0) {
                    piVar1 = (int *)(uStack_4a8 + 0x14);
                    do {
                      iVar27 = *piVar1;
                      cVar11 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar23) {
                        *piVar1 = iVar27 + -1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    if (iVar27 + -1 == 0) {
                      puVar24 = &uStack_4e0;
                      func_0x000109a848d4(puVar24);
                    }
                  }
                  if (0 < uStack_4e0._4_4_) {
                    lVar29 = 0;
                    do {
                      *(undefined4 *)((long)puStack_4a0 + lVar29 * 4) = 0;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 < uStack_4e0._4_4_);
                  }
                  uStack_4d8 = uStack_2c8;
                  uStack_4e0 = (ulong)uStack_2d0;
                  uStack_4c8 = uStack_2b8;
                  uStack_4d0 = uStack_2c0;
                  uStack_4b8 = uStack_2a8;
                  uStack_4c0 = uStack_2b0;
                  uStack_4a8 = uStack_298;
                  uStack_4b0 = uStack_2a0;
                  iVar27 = uStack_2d0._4_4_;
                  puVar19 = puStack_4a0;
                  plVar20 = plStack_498;
                  if ((plStack_498 != &lStack_490) &&
                     (puVar19 = puVar47, plVar20 = &lStack_490, plStack_498 != (long *)0x0)) {
                    puVar24 = (undefined8 *)plStack_498[-1];
                    _free(puVar24);
                    iVar27 = uStack_2d0._4_4_;
                  }
                  plStack_498 = plVar20;
                  puStack_4a0 = puVar19;
                  plVar20 = plStack_288;
                  if (iVar27 < 3) {
                    *plStack_498 = *plStack_288;
                    plStack_498[1] = plVar20[1];
                    uStack_2d0 = (undefined4 *)CONCAT44(uStack_2d0._4_4_,0x42ff0000);
                    puVar35[1] = 0;
                    *puVar35 = 0;
                    puVar35[3] = 0;
                    puVar35[2] = 0;
                    puVar35[5] = 0;
                    puVar35[4] = 0;
                    *(undefined8 *)((long)puVar35 + 0x34) = 0;
                    *(undefined8 *)((long)puVar35 + 0x2c) = 0;
                    if (plVar20 != &lStack_280) {
                      puVar24 = (undefined8 *)plVar20[-1];
                      _free(puVar24);
                    }
                    if ((param_6 & 0xff8) == 0) goto LAB_109b57cb8;
LAB_109b57b70:
                    if (uVar3 != uVar8) {
                      uStack_2d0 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff0000);
                      uStack_2c8 = (uint *)CONCAT44(uVar42,uVar7);
                      uStack_2c0 = uStack_2e8;
                      uStack_2b8 = uStack_2e8;
                      uStack_2a8 = 0;
                      uStack_2b0 = 0;
                      uStack_298 = 0;
                      uStack_2a0 = 0;
                      lStack_280 = 0;
                      uStack_278 = 0;
                      if (((long)(int)uVar7 * (long)(int)uVar42 != 0) && (uStack_2e8 == 0)) {
                        puVar25 = (undefined4 *)0x24;
                        puStack_290 = &uStack_2c8;
                        plStack_288 = &lStack_280;
                        func_0x000107c2ae8c();
                        *puVar25 = 1;
                        puStack_4f8 = puVar25 + 1;
                        puStack_4f0 = (uint *)0x1c;
                        *(undefined1 *)(puVar25 + 8) = 0;
                        *(undefined8 *)(puVar25 + 3) = 0x207c7c2030203d3d;
                        *(undefined8 *)(puVar25 + 1) = 0x2029286c61746f74;
                        *(undefined8 *)(puVar25 + 6) = 0x4c4c554e203d2120;
                        *(undefined8 *)(puVar25 + 4) = 0x61746164207c7c20;
                        FUN_109ac3188(0xffffff29,&puStack_4f8,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb);
                        goto LAB_109b58928;
                      }
                      uStack_2d0 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff4000);
                      uStack_2b0 = uStack_2e8 + lVar33 * (int)uVar7;
                      puStack_4f8 = (undefined4 *)CONCAT44(puStack_4f8._4_4_,0x2010000);
                      uStack_4e8 = 0;
                      puStack_4f0 = (uint *)&uStack_2d0;
                      uStack_2a8 = uStack_2b0;
                      puStack_290 = &uStack_2c8;
                      plStack_288 = &lStack_280;
                      lStack_280 = lVar33;
                      uStack_278 = uVar43;
                      FUN_109a41858(0x3ff0000000000000,param_1,&uStack_4e0,&puStack_4f8,uVar3);
                      if (uStack_298 != 0) {
                        piVar1 = (int *)(uStack_298 + 0x14);
                        do {
                          cVar11 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar23) {
                            *piVar1 = *piVar1 + 1;
                            cVar11 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar11 != '\0');
                      }
                      if (uStack_4a8 != 0) {
                        piVar1 = (int *)(uStack_4a8 + 0x14);
                        do {
                          iVar27 = *piVar1;
                          cVar11 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar23) {
                            *piVar1 = iVar27 + -1;
                            cVar11 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar11 != '\0');
                        if (iVar27 + -1 == 0) {
                          func_0x000109a848d4(&uStack_4e0);
                        }
                      }
                      plVar20 = plStack_288;
                      uStack_4a8 = 0;
                      uStack_4c8 = 0;
                      uStack_4d0 = 0;
                      uStack_4b8 = 0;
                      uStack_4c0 = 0;
                      if (uStack_4e0._4_4_ < 1) {
LAB_109b57e28:
                        if (2 < uStack_2d0._4_4_) goto LAB_109b57e5c;
                        uStack_4e0 = (ulong)uStack_2d0;
                        uStack_4d8 = uStack_2c8;
                        *plStack_498 = *plStack_288;
                        plStack_498[1] = plVar20[1];
                      }
                      else {
                        lVar29 = 0;
                        do {
                          *(undefined4 *)((long)puStack_4a0 + lVar29 * 4) = 0;
                          lVar29 = lVar29 + 1;
                        } while (lVar29 < uStack_4e0._4_4_);
                        if (uStack_4e0._4_4_ < 3) goto LAB_109b57e28;
LAB_109b57e5c:
                        uStack_4e0 = CONCAT44(uStack_4e0._4_4_,(uint)uStack_2d0);
                        func_0x000109a84868(&uStack_4e0,&uStack_2d0);
                      }
                      uStack_4c8 = uStack_2b8;
                      uStack_4d0 = uStack_2c0;
                      uStack_4b8 = uStack_2a8;
                      uStack_4c0 = uStack_2b0;
                      uStack_4a8 = uStack_298;
                      uStack_4b0 = uStack_2a0;
                      if (uStack_298 != 0) {
                        piVar1 = (int *)(uStack_298 + 0x14);
                        do {
                          iVar27 = *piVar1;
                          cVar11 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar23) {
                            *piVar1 = iVar27 + -1;
                            cVar11 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar11 != '\0');
                        if (iVar27 + -1 == 0) {
                          func_0x000109a848d4(&uStack_2d0);
                        }
                      }
                      uStack_298 = 0;
                      uStack_2b8 = 0;
                      uStack_2c0 = 0;
                      uStack_2a8 = 0;
                      uStack_2b0 = 0;
                      if (0 < uStack_2d0._4_4_) {
                        lVar29 = 0;
                        do {
                          *(undefined4 *)((long)puStack_290 + lVar29 * 4) = 0;
                          lVar29 = lVar29 + 1;
                        } while (lVar29 < uStack_2d0._4_4_);
                      }
                      if (plStack_288 != &lStack_280 && plStack_288 != (long *)0x0) {
                        _free(plStack_288[-1]);
                      }
                    }
                    uStack_2d0 = (undefined4 *)((ulong)uVar41 << 0x20);
                    FUN_109a3e710(&uStack_4e0,1,&uStack_480,1,&uStack_2d0,1);
                  }
                  else {
                    puStack_4a0 = puStack_290;
                    plStack_498 = plStack_288;
                    if ((param_6 & 0xff8) != 0) goto LAB_109b57b70;
LAB_109b57cb8:
                    if (uVar41 == 0) {
                      uStack_2d0 = (undefined4 *)CONCAT44(uStack_2d0._4_4_,0x2010000);
                      uStack_2c0 = 0;
                      uStack_2c8 = (uint *)&uStack_480;
                      FUN_109a41858(0x3ff0000000000000,param_1,&uStack_4e0,&uStack_2d0,uVar3);
                    }
                    else {
                      if (uVar3 != uVar8) {
                        uStack_2d0 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff0000);
                        uStack_2c8 = (uint *)CONCAT44(uVar42,uVar7);
                        uStack_2c0 = uStack_2e8;
                        uStack_2b8 = uStack_2e8;
                        uStack_2a8 = 0;
                        uStack_2b0 = 0;
                        uStack_298 = 0;
                        uStack_2a0 = 0;
                        lStack_280 = 0;
                        uStack_278 = 0;
                        if (((long)(int)uVar7 * (long)(int)uVar42 != 0) && (uStack_2e8 == 0)) {
                          puVar25 = (undefined4 *)0x24;
                          puStack_290 = &uStack_2c8;
                          plStack_288 = &lStack_280;
                          func_0x000107c2ae8c();
                          *puVar25 = 1;
                          puStack_4f8 = puVar25 + 1;
                          puStack_4f0 = (uint *)0x1c;
                          *(undefined1 *)(puVar25 + 8) = 0;
                          *(undefined8 *)(puVar25 + 3) = 0x207c7c2030203d3d;
                          *(undefined8 *)(puVar25 + 1) = 0x2029286c61746f74;
                          *(undefined8 *)(puVar25 + 6) = 0x4c4c554e203d2120;
                          *(undefined8 *)(puVar25 + 4) = 0x61746164207c7c20;
                          FUN_109ac3188(0xffffff29,&puStack_4f8,&UNK_10f2e8162,&UNK_10f594bc9,0x1bb)
                          ;
                          goto LAB_109b58928;
                        }
                        uStack_2d0 = (undefined4 *)CONCAT44(2,uVar3 | 0x42ff4000);
                        uStack_2b0 = uStack_2e8 + lVar33 * (int)uVar7;
                        puStack_4f8 = (undefined4 *)CONCAT44(puStack_4f8._4_4_,0x2010000);
                        uStack_4e8 = 0;
                        puVar24 = &uStack_4e0;
                        puStack_4f0 = (uint *)&uStack_2d0;
                        uStack_2a8 = uStack_2b0;
                        puStack_290 = &uStack_2c8;
                        plStack_288 = &lStack_280;
                        lStack_280 = lVar33;
                        uStack_278 = uVar43;
                        FUN_109a41858(0x3ff0000000000000,0,puVar24,&puStack_4f8,uVar3);
                        if (uStack_298 != 0) {
                          piVar1 = (int *)(uStack_298 + 0x14);
                          do {
                            cVar11 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar23) {
                              *piVar1 = *piVar1 + 1;
                              cVar11 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar11 != '\0');
                        }
                        if (uStack_4a8 != 0) {
                          piVar1 = (int *)(uStack_4a8 + 0x14);
                          do {
                            iVar27 = *piVar1;
                            cVar11 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar23) {
                              *piVar1 = iVar27 + -1;
                              cVar11 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar11 != '\0');
                          if (iVar27 + -1 == 0) {
                            puVar24 = &uStack_4e0;
                            func_0x000109a848d4(puVar24);
                          }
                        }
                        plVar20 = plStack_288;
                        uStack_4a8 = 0;
                        uStack_4c8 = 0;
                        uStack_4d0 = 0;
                        uStack_4b8 = 0;
                        uStack_4c0 = 0;
                        if (uStack_4e0._4_4_ < 1) {
LAB_109b57f24:
                          if (2 < uStack_2d0._4_4_) goto LAB_109b57f58;
                          uStack_4e0 = (ulong)uStack_2d0;
                          uStack_4d8 = uStack_2c8;
                          *plStack_498 = *plStack_288;
                          plStack_498[1] = plVar20[1];
                        }
                        else {
                          lVar29 = 0;
                          do {
                            *(undefined4 *)((long)puStack_4a0 + lVar29 * 4) = 0;
                            lVar29 = lVar29 + 1;
                          } while (lVar29 < uStack_4e0._4_4_);
                          if (uStack_4e0._4_4_ < 3) goto LAB_109b57f24;
LAB_109b57f58:
                          uStack_4e0 = CONCAT44(uStack_4e0._4_4_,(uint)uStack_2d0);
                          puVar24 = &uStack_4e0;
                          func_0x000109a84868(puVar24,&uStack_2d0);
                        }
                        uStack_4c8 = uStack_2b8;
                        uStack_4d0 = uStack_2c0;
                        uStack_4b8 = uStack_2a8;
                        uStack_4c0 = uStack_2b0;
                        uStack_4a8 = uStack_298;
                        uStack_4b0 = uStack_2a0;
                        if (uStack_298 != 0) {
                          piVar1 = (int *)(uStack_298 + 0x14);
                          do {
                            iVar27 = *piVar1;
                            cVar11 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar23) {
                              *piVar1 = iVar27 + -1;
                              cVar11 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar11 != '\0');
                          if (iVar27 + -1 == 0) {
                            puVar24 = &uStack_2d0;
                            func_0x000109a848d4(puVar24);
                          }
                        }
                        uStack_298 = 0;
                        uStack_2b8 = 0;
                        uStack_2c0 = 0;
                        uStack_2a8 = 0;
                        uStack_2b0 = 0;
                        if (0 < uStack_2d0._4_4_) {
                          lVar29 = 0;
                          do {
                            *(undefined4 *)((long)puStack_290 + lVar29 * 4) = 0;
                            lVar29 = lVar29 + 1;
                          } while (lVar29 < uStack_2d0._4_4_);
                        }
                        if (plStack_288 != &lStack_280 && plStack_288 != (long *)0x0) {
                          puVar24 = (undefined8 *)plStack_288[-1];
                          _free(puVar24);
                        }
                      }
                      uStack_2c0 = 0;
                      uStack_2d0 = (undefined4 *)CONCAT44(uStack_2d0._4_4_,0x1010000);
                      uStack_2c8 = (uint *)&uStack_4e0;
                      uStack_4e8 = 0;
                      puStack_4f8 = (undefined4 *)CONCAT44(puStack_4f8._4_4_,0x1010000);
                      puStack_508 = (uint *)&uStack_480;
                      auStack_510[0] = 0x2010000;
                      uStack_500 = 0;
                      puStack_4f0 = puStack_508;
                      FUN_109a91d90();
                      FUN_109a293c4(&uStack_2d0,&puStack_4f8,auStack_510,puVar24,0xffffffff,
                                    &PTR_FUN_1132e8bd0,0,0);
                    }
                  }
                  if (uStack_238 != 0) {
                    piVar1 = (int *)(uStack_238 + 0x14);
                    do {
                      iVar27 = *piVar1;
                      cVar11 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar23) {
                        *piVar1 = iVar27 + -1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    if (iVar27 + -1 == 0) {
                      func_0x000109a848d4(&uStack_270);
                    }
                  }
                  uStack_238 = 0;
                  uStack_258 = 0;
                  uStack_260 = 0;
                  uStack_248 = 0;
                  uStack_250 = 0;
                  if (0 < uStack_270._4_4_) {
                    lVar29 = 0;
                    do {
                      *(undefined4 *)((long)puStack_230 + lVar29 * 4) = 0;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 < uStack_270._4_4_);
                  }
                  if (plStack_228 != &lStack_220 && plStack_228 != (long *)0x0) {
                    _free(plStack_228[-1]);
                  }
                  if (uStack_4a8 != 0) {
                    piVar1 = (int *)(uStack_4a8 + 0x14);
                    do {
                      iVar27 = *piVar1;
                      cVar11 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar23) {
                        *piVar1 = iVar27 + -1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    if (iVar27 + -1 == 0) {
                      func_0x000109a848d4(&uStack_4e0);
                    }
                  }
                  uStack_4a8 = 0;
                  uStack_4c8 = 0;
                  uStack_4d0 = 0;
                  uStack_4b8 = 0;
                  uStack_4c0 = 0;
                  if (0 < uStack_4e0._4_4_) {
                    lVar29 = 0;
                    do {
                      *(undefined4 *)((long)puStack_4a0 + lVar29 * 4) = 0;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 < uStack_4e0._4_4_);
                  }
                  if (plStack_498 != &lStack_490 && plStack_498 != (long *)0x0) {
                    _free(plStack_498[-1]);
                  }
                  bVar23 = uVar41 != uVar36;
                  uVar41 = uVar41 + 1;
                } while (bVar23);
                if (lStack_448 != 0) {
                  piVar1 = (int *)(lStack_448 + 0x14);
                  do {
                    iVar27 = *piVar1;
                    cVar11 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar23) {
                      *piVar1 = iVar27 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar27 + -1 == 0) {
                    func_0x000109a848d4(&uStack_480);
                  }
                }
                lStack_448 = 0;
                uStack_468 = 0;
                uStack_470 = 0;
                uStack_458 = 0;
                uStack_460 = 0;
                if (0 < uStack_480._4_4_) {
                  lVar28 = 0;
                  do {
                    *(undefined4 *)(lStack_440 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < uStack_480._4_4_);
                }
                if (puStack_438 != auStack_430 && puStack_438 != (undefined1 *)0x0) {
                  _free(*(undefined8 *)(puStack_438 + -8));
                }
                if (uStack_1d8 != 0) {
                  piVar1 = (int *)(uStack_1d8 + 0x14);
                  do {
                    iVar27 = *piVar1;
                    cVar11 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar23) {
                      *piVar1 = iVar27 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar27 + -1 == 0) {
                    func_0x000109a848d4(&uStack_210);
                  }
                }
                uStack_1d8 = 0;
                uStack_1f8 = 0;
                uStack_200 = 0;
                uStack_1e8 = 0;
                uStack_1f0 = 0;
                if (0 < uStack_210._4_4_) {
                  lVar28 = 0;
                  do {
                    *(undefined4 *)(uStack_1d0 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < uStack_210._4_4_);
                }
                if (plStack_1c8 != &lStack_1c0 && plStack_1c8 != (long *)0x0) {
                  _free(plStack_1c8[-1]);
                }
                if (uStack_3d8 != 0) {
                  piVar1 = (int *)(uStack_3d8 + 0x14);
                  do {
                    iVar27 = *piVar1;
                    cVar11 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar23) {
                      *piVar1 = iVar27 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar27 + -1 == 0) {
                    func_0x000109a848d4(&uStack_410);
                  }
                }
                uStack_3d8 = 0;
                uStack_3f8 = 0;
                uStack_400 = 0;
                uStack_3e8 = 0;
                uStack_3f0 = 0;
                if (0 < (int)uStack_40c) {
                  lVar28 = 0;
                  do {
                    *(undefined4 *)(lStack_3d0 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < (int)uStack_40c);
                }
                if (plStack_3c8 != alStack_3c0 && plStack_3c8 != (long *)0x0) {
                  _free(plStack_3c8[-1]);
                }
                if (uStack_378 != 0) {
                  piVar1 = (int *)(uStack_378 + 0x14);
                  do {
                    iVar27 = *piVar1;
                    cVar11 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar23) {
                      *piVar1 = iVar27 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar27 + -1 == 0) {
                    func_0x000109a848d4(&uStack_3b0);
                  }
                }
                uStack_378 = 0;
                uStack_398 = 0;
                uStack_3a0 = 0;
                uStack_388 = 0;
                uStack_390 = 0;
                if (0 < iStack_3ac) {
                  lVar28 = 0;
                  do {
                    *(undefined4 *)(lStack_370 + lVar28 * 4) = 0;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < iStack_3ac);
                }
                if (plStack_368 != alStack_360 && plStack_368 != (long *)0x0) {
                  _free(plStack_368[-1]);
                }
                iVar40 = iVar40 + 1;
              } while (iVar40 != iVar4 * iVar39);
            }
            if (uStack_178 != 0) {
              piVar1 = (int *)(uStack_178 + 0x14);
              do {
                iVar38 = *piVar1;
                cVar11 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = iVar38 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar38 + -1 == 0) {
                func_0x000109a848d4(&uStack_1b0);
              }
            }
            uStack_178 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            if (0 < uStack_1b0._4_4_) {
              lVar28 = 0;
              do {
                *(undefined4 *)(uStack_170 + lVar28 * 4) = 0;
                lVar28 = lVar28 + 1;
              } while (lVar28 < uStack_1b0._4_4_);
            }
            if (plStack_168 != &lStack_160 && plStack_168 != (long *)0x0) {
              _free(plStack_168[-1]);
            }
            if (lStack_110 != 0) {
              piVar1 = (int *)(lStack_110 + 0x14);
              do {
                iVar38 = *piVar1;
                cVar11 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = iVar38 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar38 + -1 == 0) {
                func_0x000109a848d4(&uStack_148);
              }
            }
            lStack_110 = 0;
            uStack_130 = 0;
            uStack_12c = 0;
            uStack_138 = 0;
            uStack_134 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            if (0 < (int)uStack_144) {
              lVar28 = 0;
              do {
                *(undefined4 *)(lStack_108 + lVar28 * 4) = 0;
                lVar28 = lVar28 + 1;
              } while (lVar28 < (int)uStack_144);
            }
            if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
              _free(puStack_100[-1]);
            }
            if (lStack_b0 != 0) {
              piVar1 = (int *)(lStack_b0 + 0x14);
              do {
                iVar38 = *piVar1;
                cVar11 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = iVar38 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar38 + -1 == 0) {
                func_0x000109a848d4(&uStack_e8);
              }
            }
            lStack_b0 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            if (0 < (int)uStack_e8._4_4_) {
              lVar28 = 0;
              do {
                *(undefined4 *)((long)puStack_a8 + lVar28 * 4) = 0;
                lVar28 = lVar28 + 1;
              } while (lVar28 < (int)uStack_e8._4_4_);
            }
            if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
              _free(puStack_a0[-1]);
            }
            if (uStack_318 != 0) {
              piVar1 = (int *)(uStack_318 + 0x14);
              do {
                iVar38 = *piVar1;
                cVar11 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = iVar38 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar38 + -1 == 0) {
                func_0x000109a848d4(&uStack_350);
              }
            }
            uStack_318 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            if (0 < uStack_350._4_4_) {
              lVar28 = 0;
              do {
                *(undefined4 *)((long)plStack_310 + lVar28 * 4) = 0;
                lVar28 = lVar28 + 1;
              } while (lVar28 < uStack_350._4_4_);
            }
            if (plStack_308 != &lStack_300 && plStack_308 != (long *)0x0) {
              _free(plStack_308[-1]);
            }
            if (uStack_2e8 != 0) {
              uStack_2e0 = uStack_2e8;
              __ZdlPv();
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
              return;
            }
            ___stack_chk_fail();
            goto LAB_109b588c4;
          }
        }
        puVar25 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar25 = 1;
        uStack_e8 = puVar25 + 1;
        uStack_e0._0_4_ = 0x1c;
        uStack_e0._4_4_ = 0;
        *(undefined1 *)(puVar25 + 8) = 0;
        *(undefined8 *)(puVar25 + 3) = 0x7379617272612074;
        *(undefined8 *)(puVar25 + 1) = 0x75706e6920656874;
        *(undefined8 *)(puVar25 + 6) = 0x676962206f6f7420;
        *(undefined8 *)(puVar25 + 4) = 0x6572612073796172;
        FUN_109ac3188(0xffffff2d,&uStack_e8,&UNK_10f59e55d,&UNK_10f59e567,0x2a5);
        goto LAB_109b58928;
      }
    }
    puVar25 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar25 = 1;
    uStack_e8 = puVar25 + 1;
    uStack_e0._0_4_ = 0x5b;
    uStack_e0._4_4_ = 0;
    *(undefined8 *)(puVar25 + 0xb) = 0x2026262031202d20;
    *(undefined8 *)(puVar25 + 9) = 0x73776f722e6c706d;
    *(undefined8 *)(puVar25 + 0xf) = 0x3c2068746469772e;
    *(undefined8 *)(puVar25 + 0xd) = 0x657a697372726f63;
    *(undefined8 *)(puVar25 + 0x13) = 0x6d6574202b20736c;
    *(undefined8 *)(puVar25 + 0x11) = 0x6f632e676d69203d;
    *(undefined8 *)((long)puVar25 + 0x57) = 0x31202d20736c6f63;
    *(undefined8 *)((long)puVar25 + 0x4f) = 0x2e6c706d6574202b;
    *(undefined8 *)(puVar25 + 3) = 0x207468676965682e;
    *(undefined8 *)(puVar25 + 1) = 0x657a697372726f63;
    *(undefined1 *)((long)puVar25 + 0x5f) = 0;
    *(undefined8 *)(puVar25 + 7) = 0x6574202b2073776f;
    *(undefined8 *)(puVar25 + 5) = 0x722e676d69203d3c;
    FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f59e55d,&UNK_10f59e567,0x292);
  }
  else {
    uVar30 = uVar45;
    if (uVar45 < 6) {
      uVar30 = 5;
    }
    if (uVar26 != uVar30) {
      uStack_e8._0_4_ = 0x2010000;
      uStack_e0 = &uStack_350;
      uStack_d8 = 0;
      uStack_d4 = 0;
      FUN_109a41858(0x3ff0000000000000,0,param_3,&uStack_e8);
      uVar26 = (uint)uStack_350 & 7;
    }
    uVar43 = (ulong)uVar26;
    if ((uVar45 == uVar26) || (uVar26 == 5)) goto LAB_109b56854;
LAB_109b588c4:
    puVar25 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar25 = 1;
    uStack_e8 = puVar25 + 1;
    uStack_e0._0_4_ = 0x23;
    uStack_e0._4_4_ = 0;
    *(undefined1 *)((long)puVar25 + 0x27) = 0;
    *(undefined4 *)((long)puVar25 + 0x23) = 0x4632335f;
    *(undefined8 *)(puVar25 + 3) = 0x2068747065647420;
    *(undefined8 *)(puVar25 + 1) = 0x3d3d206874706564;
    *(undefined8 *)(puVar25 + 7) = 0x5f5643203d3d2068;
    *(undefined8 *)(puVar25 + 5) = 0x7470656474207c7c;
    FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f59e55d,&UNK_10f59e567,0x290);
  }
LAB_109b58928:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x109b5892c);
  (*pcVar22)();
}



/* Entry: 109b59078; end: 109b5a147;  */

/* WARNING: Removing unreachable block (ram,0x000109b59928) */
/* WARNING: Removing unreachable block (ram,0x000109b5992c) */
/* WARNING: Removing unreachable block (ram,0x000109b59934) */
/* WARNING: Removing unreachable block (ram,0x000109b5993c) */
/* WARNING: Removing unreachable block (ram,0x000109b59940) */
/* WARNING: Removing unreachable block (ram,0x000109b59964) */
/* WARNING: Removing unreachable block (ram,0x000109b5996c) */
/* WARNING: Removing unreachable block (ram,0x000109b59980) */
/* WARNING: Removing unreachable block (ram,0x000109b59990) */

double FUN_109b59078(double param_1,double param_2,uint *param_3,uint *param_4,uint param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  double *pdVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uStack_620;
  double dStack_618;
  double dStack_610;
  double dStack_608;
  double dStack_600;
  double dStack_5f8;
  double dStack_5f0;
  double dStack_5e8;
  ulong uStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  uint uStack_5b8;
  int iStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_580;
  undefined4 *puStack_578;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  double dStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  double dStack_540;
  double dStack_538;
  double dStack_530;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  int *piStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  uint uStack_4f0;
  int iStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  uint *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  long lStack_448;
  undefined4 *puStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  int iStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  double dStack_3e8;
  undefined4 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  uint uStack_3b0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar13 = *(undefined8 **)(param_3 + 2);
    puStack_4b0 = (uint *)((ulong)&uStack_4f0 | 8);
    lStack_4e0 = puVar13[2];
    uStack_4d8 = puVar13[3];
    uStack_4e8 = (undefined4)puVar13[1];
    uStack_4e4 = (undefined4)((ulong)puVar13[1] >> 0x20);
    uStack_4f0 = (uint)*puVar13;
    iStack_4ec = (int)((ulong)*puVar13 >> 0x20);
    uStack_4d0 = puVar13[4];
    uStack_4c8 = puVar13[5];
    uStack_4c0 = puVar13[6];
    lStack_4b8 = puVar13[7];
    puStack_4a8 = &uStack_4a0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    if (puVar13[7] != 0) {
      piVar20 = (int *)(puVar13[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar10) {
          *piVar20 = *piVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_4a0 = *(undefined8 *)puVar13[9];
      uStack_498 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      iStack_4ec = 0;
      func_0x000109a84868(&uStack_4f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4f0,param_3,0xffffffff);
  }
  uVar7 = uStack_4f0;
  uVar30 = param_5 & 0xfffffff8;
  uVar19 = (uint)uStack_4a0;
  if (uVar30 == 8) {
    if ((uStack_4f0 & 0xfff) != 0) {
      puVar12 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      uStack_488 = (undefined **)(puVar12 + 1);
      uStack_480._0_4_ = 0x15;
      uStack_480._4_4_ = 0;
      *(undefined1 *)((long)puVar12 + 0x19) = 0;
      *(undefined8 *)(puVar12 + 3) = 0x5643203d3d202928;
      *(undefined8 *)(puVar12 + 1) = 0x657079742e637273;
      *(undefined8 *)((long)puVar12 + 0x11) = 0x314355385f564320;
      FUN_109ac3188(0xffffff29,&uStack_488,&DAT_10f2e8c7d,&UNK_10f59e6da,0x4b4);
      goto LAB_109b5a010;
    }
    uVar24 = *puStack_4b0;
    uVar23 = puStack_4b0[1];
    bVar10 = (uStack_4f0 & 0x4000) != 0;
    uVar30 = uVar23;
    if (bVar10) {
      uVar30 = uVar24 * uVar23;
    }
    uVar3 = uVar24;
    if (bVar10) {
      uVar3 = 1;
    }
    _bzero(&uStack_488,0x400);
    if (0 < (int)uVar3) {
      uVar16 = 0;
      if ((uVar7 & 0x4000) != 0) {
        uVar19 = uVar24 * uVar23;
      }
      lVar15 = lStack_4e0;
      do {
        if ((int)uVar30 < 4) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          do {
            pbVar1 = (byte *)(lVar15 + uVar17);
            bVar4 = pbVar1[1];
            *(int *)((long)&uStack_488 + (ulong)*pbVar1 * 4) =
                 *(int *)((long)&uStack_488 + (ulong)*pbVar1 * 4) + 1;
            *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) =
                 *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) + 1;
            bVar4 = pbVar1[3];
            *(int *)((long)&uStack_488 + (ulong)pbVar1[2] * 4) =
                 *(int *)((long)&uStack_488 + (ulong)pbVar1[2] * 4) + 1;
            *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) =
                 *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) + 1;
            uVar17 = uVar17 + 4;
          } while ((long)uVar17 <= (long)(int)(uVar30 - 4));
          uVar17 = uVar17 & 0xffffffff;
        }
        if ((int)uVar17 < (int)uVar30) {
          do {
            *(int *)((long)&uStack_488 + (ulong)*(byte *)(lVar15 + uVar17) * 4) =
                 *(int *)((long)&uStack_488 + (ulong)*(byte *)(lVar15 + uVar17) * 4) + 1;
            uVar17 = uVar17 + 1;
          } while (uVar30 != uVar17);
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + (int)uVar19;
      } while (uVar16 != uVar3);
    }
    uVar16 = 0;
    dVar26 = 0.0;
    do {
      dVar26 = dVar26 + (double)*(int *)((long)&uStack_488 + uVar16 * 4) *
                        (double)(uVar16 & 0xffffffff);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x100);
    uVar16 = 0;
    dVar28 = 1.0 / (double)(int)(uVar30 * uVar3);
    dVar33 = 0.0;
    dVar34 = 0.0;
    dVar31 = 0.0;
    dVar32 = 0.0;
    do {
      dVar36 = dVar28 * (double)*(int *)((long)&uStack_488 + uVar16 * 4);
      dVar33 = dVar33 * dVar34;
      dVar34 = dVar34 + dVar36;
      dVar35 = 1.0 - dVar34;
      dVar38 = dVar35;
      if (dVar34 <= dVar35) {
        dVar38 = dVar34;
      }
      dVar37 = dVar31;
      param_1 = dVar32;
      if (1.1920928955078125e-07 <= dVar38) {
        dVar38 = dVar35;
        if (dVar35 <= dVar34) {
          dVar38 = dVar34;
        }
        if (dVar38 <= 0.9999998807907104) {
          dVar33 = (dVar33 + dVar36 * (double)(uVar16 & 0xffffffff)) / dVar34;
          dVar37 = dVar33 - (dVar28 * dVar26 - dVar33 * dVar34) / dVar35;
          dVar37 = dVar37 * dVar34 * dVar35 * dVar37;
          param_1 = (double)(uVar16 & 0xffffffff);
          if (dVar37 <= dVar31) {
            dVar37 = dVar31;
            param_1 = dVar32;
          }
        }
      }
      uVar16 = uVar16 + 1;
      dVar31 = dVar37;
      dVar32 = param_1;
    } while (uVar16 != 0x100);
    uVar30 = 0;
LAB_109b59600:
    uStack_488._4_4_ = uVar24;
    uStack_488._0_4_ = uVar23;
    puVar11 = param_4;
    FUN_109a8ee3c(param_4,&uStack_488,uVar30,0xffffffff,0,0);
    if ((*param_4 & 0x1f0000) == 0x10000) {
      pdVar14 = *(double **)(param_4 + 2);
      piStack_510 = (int *)((ulong)&uStack_550 | 8);
      uStack_550 = *pdVar14;
      uStack_548 = pdVar14[1];
      dStack_540 = pdVar14[2];
      dStack_538 = pdVar14[3];
      dStack_530 = pdVar14[4];
      dStack_528 = pdVar14[5];
      dStack_520 = pdVar14[6];
      dStack_518 = pdVar14[7];
      puStack_508 = &uStack_500;
      uStack_500 = 0;
      uStack_4f8 = 0;
      if (pdVar14[7] != 0.0) {
        piVar20 = (int *)((long)pdVar14[7] + 0x14);
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = *piVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(int *)((long)pdVar14 + 4) < 3) {
        uStack_500 = *(undefined8 *)pdVar14[9];
        uStack_4f8 = ((undefined8 *)pdVar14[9])[1];
        param_4 = puVar11;
      }
      else {
        uStack_550 = (double)((ulong)uStack_550 & 0xffffffff);
        param_4 = (uint *)&uStack_550;
        func_0x000109a84868(param_4);
      }
    }
    else {
      FUN_109a8a180(&uStack_550,param_4,0xffffffff);
    }
    uVar30 = param_5 & 7;
    uVar19 = uStack_4f0 & 7;
    if (uVar19 == 5) {
LAB_109b59780:
      dStack_558 = (double)((long)uStack_548 << 0x20);
      uStack_5b8 = uStack_4f0;
      puStack_578 = &uStack_5b0;
      iStack_5b4 = iStack_4ec;
      uStack_5b0 = uStack_4e8;
      uStack_5ac = uStack_4e4;
      uStack_5a0 = uStack_4d8;
      lStack_5a8 = lStack_4e0;
      uStack_590 = uStack_4c8;
      uStack_598 = uStack_4d0;
      lStack_580 = lStack_4b8;
      uStack_588 = uStack_4c0;
      uStack_568 = 0;
      uStack_560 = 0;
      if (lStack_4b8 != 0) {
        piVar20 = (int *)(lStack_4b8 + 0x14);
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = *piVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puStack_570 = &uStack_568;
      if (iStack_4ec < 3) {
        uStack_568 = *puStack_4a8;
        uStack_560 = puStack_4a8[1];
      }
      else {
        iStack_5b4 = 0;
        func_0x000109a84868(&uStack_5b8,&uStack_4f0);
      }
      uStack_5e0 = (ulong)&uStack_620 | 8;
      dStack_618 = uStack_548;
      uStack_620 = uStack_550;
      dStack_608 = dStack_538;
      dStack_610 = dStack_540;
      dStack_5f8 = dStack_528;
      dStack_600 = dStack_530;
      dStack_5e8 = dStack_518;
      dStack_5f0 = dStack_520;
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      if (dStack_518 != 0.0) {
        piVar20 = (int *)((long)dStack_518 + 0x14);
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = *piVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puStack_5d8 = &uStack_5d0;
      if ((int)uStack_550._4_4_ < 3) {
        uStack_5d0 = *puStack_508;
        uStack_5c8 = puStack_508[1];
      }
      else {
        uStack_620 = (double)((ulong)uStack_550 & 0xffffffff);
        func_0x000109a84868(&uStack_620,&uStack_550);
      }
      uStack_488 = &PTR_FUN_110b28818;
      uStack_474 = 0;
      uStack_480._4_4_ = 0;
      uStack_478 = 0;
      puStack_440 = &uStack_478;
      uStack_450 = 0;
      uStack_44c = 0;
      puStack_438 = &uStack_430;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_420 = 0x42ff0000;
      puStack_3e0 = &uStack_418;
      uStack_414 = 0;
      uStack_410 = 0;
      iStack_41c = 0;
      uStack_418 = 0;
      uStack_404 = 0;
      uStack_400 = 0;
      uStack_40c = 0;
      uStack_408 = 0;
      uStack_3f4 = 0;
      uStack_3fc = 0;
      uStack_3f8 = 0;
      dStack_3e8 = 0.0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      puStack_3d8 = &uStack_3d0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      if (lStack_580 != 0) {
        piVar20 = (int *)(lStack_580 + 0x14);
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = *piVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lStack_448 = 0;
      uStack_468 = 0;
      uStack_464 = 0;
      uStack_470 = 0;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 0;
      uStack_45c = 0;
      uStack_480._0_4_ = uStack_5b8;
      if (iStack_5b4 < 3) {
        uStack_480._4_4_ = iStack_5b4;
        uStack_478 = uStack_5b0;
        uStack_474 = uStack_5ac;
        uStack_430 = *puStack_570;
        uStack_428 = puStack_570[1];
      }
      else {
        func_0x000109a84868(&uStack_480,&uStack_5b8);
      }
      uStack_468 = (undefined4)uStack_5a0;
      uStack_464 = (undefined4)((ulong)uStack_5a0 >> 0x20);
      uStack_470 = (undefined4)lStack_5a8;
      uStack_46c = (undefined4)((ulong)lStack_5a8 >> 0x20);
      uStack_458 = (undefined4)uStack_590;
      uStack_454 = (undefined4)((ulong)uStack_590 >> 0x20);
      uStack_460 = (undefined4)uStack_598;
      uStack_45c = (undefined4)((ulong)uStack_598 >> 0x20);
      lStack_448 = lStack_580;
      uStack_450 = (undefined4)uStack_588;
      uStack_44c = (undefined4)((ulong)uStack_588 >> 0x20);
      if (dStack_5e8 != 0.0) {
        piVar20 = (int *)((long)dStack_5e8 + 0x14);
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = *piVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (dStack_3e8 != 0.0) {
        piVar20 = (int *)((long)dStack_3e8 + 0x14);
        do {
          iVar18 = *piVar20;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = iVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar18 + -1 == 0) {
          func_0x000109a848d4(&uStack_420);
        }
      }
      dStack_3e8 = 0.0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      if (iStack_41c < 1) {
LAB_109b59a88:
        uStack_420 = (undefined4)uStack_620;
        if (2 < uStack_620._4_4_) goto LAB_109b59abc;
        iStack_41c = uStack_620._4_4_;
        uStack_418 = SUB84(dStack_618,0);
        uStack_414 = (undefined4)((ulong)dStack_618 >> 0x20);
        *puStack_3d8 = *puStack_5d8;
        puStack_3d8[1] = puStack_5d8[1];
      }
      else {
        lVar15 = 0;
        do {
          puStack_3e0[lVar15] = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_41c);
        if (iStack_41c < 3) goto LAB_109b59a88;
LAB_109b59abc:
        uStack_420 = (undefined4)uStack_620;
        func_0x000109a84868(&uStack_420,&uStack_620);
      }
      uStack_408 = SUB84(dStack_608,0);
      uStack_404 = (undefined4)((ulong)dStack_608 >> 0x20);
      uStack_410 = SUB84(dStack_610,0);
      uStack_40c = (undefined4)((ulong)dStack_610 >> 0x20);
      uStack_3f8 = SUB84(dStack_5f8,0);
      uStack_3f4 = (undefined4)((ulong)dStack_5f8 >> 0x20);
      uStack_400 = SUB84(dStack_600,0);
      uStack_3fc = (undefined4)((ulong)dStack_600 >> 0x20);
      dStack_3e8 = dStack_5e8;
      uStack_3f0 = SUB84(dStack_5f0,0);
      uStack_3ec = (undefined4)((ulong)dStack_5f0 >> 0x20);
      uVar16 = (ulong)uStack_550._4_4_;
      if ((int)uStack_550._4_4_ < 3) {
        uVar17 = (long)uStack_548._4_4_ * (long)(int)uStack_548;
      }
      else {
        uVar17 = 1;
        piVar20 = piStack_510;
        do {
          uVar17 = uVar17 * (long)*piVar20;
          uVar16 = uVar16 - 1;
          piVar20 = piVar20 + 1;
        } while (uVar16 != 0);
      }
      dStack_3c0 = param_1;
      dStack_3b8 = param_2;
      uStack_3b0 = uVar30;
      func_0x000109aa87cc((double)uVar17 / 65536.0,&dStack_558,&uStack_488);
      FUN_109b5c268(&uStack_488);
      if (dStack_5e8 != 0.0) {
        piVar20 = (int *)((long)dStack_5e8 + 0x14);
        do {
          iVar18 = *piVar20;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = iVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar18 + -1 == 0) {
          func_0x000109a848d4(&uStack_620);
        }
      }
      dStack_5e8 = 0.0;
      dStack_608 = 0.0;
      dStack_610 = 0.0;
      dStack_5f8 = 0.0;
      dStack_600 = 0.0;
      if (0 < uStack_620._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)(uStack_5e0 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_620._4_4_);
      }
      if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
        _free(puStack_5d8[-1]);
      }
      if (lStack_580 != 0) {
        piVar20 = (int *)(lStack_580 + 0x14);
        do {
          iVar18 = *piVar20;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar10) {
            *piVar20 = iVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar18 + -1 == 0) {
          func_0x000109a848d4(&uStack_5b8);
        }
      }
      lStack_580 = 0;
      uStack_5a0 = 0;
      lStack_5a8 = 0;
      uStack_590 = 0;
      uStack_598 = 0;
      if (0 < iStack_5b4) {
        lVar15 = 0;
        do {
          puStack_578[lVar15] = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_5b4);
      }
      uStack_480 = (double *)CONCAT44(uStack_480._4_4_,(uint)uStack_480);
      if (puStack_570 != &uStack_568 && puStack_570 != (undefined8 *)0x0) {
        _free(puStack_570[-1]);
      }
    }
    else if (uVar19 == 3) {
      iVar21 = (int)param_1 - (uint)(param_1 < (double)(int)param_1);
      param_1 = (double)iVar21;
      iVar18 = iVar21;
      if (uVar30 != 2) {
        iVar18 = (int)(long)(double)(long)param_2;
      }
      if (iVar18 < -0x7fff) {
        iVar18 = -0x8000;
      }
      if (0x7ffe < iVar18) {
        iVar18 = 0x7fff;
      }
      if (iVar21 + 0x8000U < 0xffff) {
        param_2 = (double)(int)(short)iVar18;
        goto LAB_109b59780;
      }
      if ((uVar30 < 2) ||
         ((uVar30 == 4 || uVar30 == 2) && iVar21 < -0x8000 || uVar30 == 3 && 0x7ffe < iVar21)) {
        iVar2 = iVar18;
        if (iVar21 < 0x7fff) {
          iVar2 = 0;
        }
        iVar6 = 0;
        if (iVar21 < 0x7fff) {
          iVar6 = iVar18;
        }
        iVar18 = 0;
        if ((param_5 & 7) == 0) {
          iVar18 = iVar6;
        }
        if (uVar30 != 1) {
          iVar2 = iVar18;
        }
        dStack_558 = (double)iVar2;
        uStack_488 = (undefined **)CONCAT44(uStack_488._4_4_,0xc1020006);
        uStack_480 = &dStack_558;
        uStack_478 = 1;
        uStack_474 = 1;
        FUN_109a91d90();
        FUN_109a48a40(&uStack_550,&uStack_488,param_4);
      }
      else {
        uStack_488 = (undefined **)CONCAT44(uStack_488._4_4_,0x2010000);
        uStack_480 = (double *)&uStack_550;
        uStack_478 = 0;
        uStack_474 = 0;
        FUN_109a479a0(&uStack_4f0,&uStack_488);
      }
    }
    else {
      if (uVar19 != 0) {
        puVar12 = (undefined4 *)0x8;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        uStack_488 = (undefined **)(puVar12 + 1);
        *(undefined1 *)uStack_488 = 0;
        uStack_480._0_4_ = 0;
        uStack_480._4_4_ = 0;
        FUN_109ac3188(0xffffff2e,&uStack_488,&DAT_10f2e8c7d,&UNK_10f59e6da,0x4f9);
        goto LAB_109b5a010;
      }
      uVar7 = (int)param_1 - (uint)(param_1 < (double)(int)param_1);
      param_1 = (double)(int)uVar7;
      uVar19 = uVar7;
      if (uVar30 != 2) {
        uVar19 = (uint)(long)(double)(long)param_2;
      }
      uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar19) {
        uVar19 = 0xff;
      }
      if (uVar7 < 0xff) {
        param_2 = (double)(uVar19 & 0xff);
        goto LAB_109b59780;
      }
      if ((uVar30 < 2) ||
         ((uVar30 == 4 || uVar30 == 2) && (int)uVar7 < 0 || uVar30 == 3 && 0xfe < (int)uVar7)) {
        uVar24 = uVar19;
        if ((int)uVar7 < 0xff) {
          uVar24 = 0;
        }
        uVar23 = 0;
        if ((int)uVar7 < 0xff) {
          uVar23 = uVar19;
        }
        uVar19 = 0;
        if ((param_5 & 7) == 0) {
          uVar19 = uVar23;
        }
        if (uVar30 != 1) {
          uVar24 = uVar19;
        }
        dStack_558 = (double)uVar24;
        uStack_488 = (undefined **)CONCAT44(uStack_488._4_4_,0xc1020006);
        uStack_480 = &dStack_558;
        uStack_478 = 1;
        uStack_474 = 1;
        FUN_109a91d90();
        FUN_109a48a40(&uStack_550,&uStack_488,param_4);
      }
      else {
        uStack_488 = (undefined **)CONCAT44(uStack_488._4_4_,0x2010000);
        uStack_480 = (double *)&uStack_550;
        uStack_478 = 0;
        uStack_474 = 0;
        FUN_109a479a0(&uStack_4f0,&uStack_488);
      }
    }
    if (dStack_518 != 0.0) {
      piVar20 = (int *)((long)dStack_518 + 0x14);
      do {
        iVar18 = *piVar20;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar10) {
          *piVar20 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar18 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    dStack_518 = 0.0;
    dStack_538 = 0.0;
    dStack_540 = 0.0;
    dStack_528 = 0.0;
    dStack_530 = 0.0;
    if (0 < (int)uStack_550._4_4_) {
      lVar15 = 0;
      do {
        piStack_510[lVar15] = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)uStack_550._4_4_);
    }
    if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
      _free(puStack_508[-1]);
    }
    if (lStack_4b8 != 0) {
      piVar20 = (int *)(lStack_4b8 + 0x14);
      do {
        iVar18 = *piVar20;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar10) {
          *piVar20 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar18 + -1 == 0) {
        func_0x000109a848d4(&uStack_4f0);
      }
    }
    lStack_4b8 = 0;
    uStack_4d8 = 0;
    lStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    if (0 < iStack_4ec) {
      lVar15 = 0;
      do {
        puStack_4b0[lVar15] = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iStack_4ec);
    }
    if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
      _free(puStack_4a8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar30 == 0x10) {
      if ((uStack_4f0 & 0xfff) != 0) {
        puVar12 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        uStack_488 = (undefined **)(puVar12 + 1);
        uStack_480._0_4_ = 0x15;
        uStack_480._4_4_ = 0;
        *(undefined1 *)((long)puVar12 + 0x19) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x5643203d3d202928;
        *(undefined8 *)(puVar12 + 1) = 0x657079742e637273;
        *(undefined8 *)((long)puVar12 + 0x11) = 0x314355385f564320;
        FUN_109ac3188(0xffffff29,&uStack_488,&DAT_10f2e8c7d,&UNK_10f59e6da,0x4b9);
        goto LAB_109b5a010;
      }
      uVar24 = *puStack_4b0;
      uVar23 = puStack_4b0[1];
      bVar10 = (uStack_4f0 & 0x4000) != 0;
      uVar30 = uVar24;
      if (bVar10) {
        uVar30 = 1;
      }
      uVar3 = uVar23;
      if (bVar10) {
        uVar3 = uVar24 * uVar23;
      }
      _bzero(&uStack_488,0x400);
      if (0 < (int)uVar30) {
        uVar16 = 0;
        if ((uVar7 & 0x4000) != 0) {
          uVar19 = uVar24 * uVar23;
        }
        lVar15 = lStack_4e0;
        do {
          if ((int)uVar3 < 4) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            do {
              pbVar1 = (byte *)(lVar15 + uVar17);
              bVar4 = pbVar1[1];
              *(int *)((long)&uStack_488 + (ulong)*pbVar1 * 4) =
                   *(int *)((long)&uStack_488 + (ulong)*pbVar1 * 4) + 1;
              *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) =
                   *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) + 1;
              bVar4 = pbVar1[3];
              *(int *)((long)&uStack_488 + (ulong)pbVar1[2] * 4) =
                   *(int *)((long)&uStack_488 + (ulong)pbVar1[2] * 4) + 1;
              *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) =
                   *(int *)((long)&uStack_488 + (ulong)bVar4 * 4) + 1;
              uVar17 = uVar17 + 4;
            } while ((long)uVar17 <= (long)(int)(uVar3 - 4));
            uVar17 = uVar17 & 0xffffffff;
          }
          if ((int)uVar17 < (int)uVar3) {
            do {
              *(int *)((long)&uStack_488 + (ulong)*(byte *)(lVar15 + uVar17) * 4) =
                   *(int *)((long)&uStack_488 + (ulong)*(byte *)(lVar15 + uVar17) * 4) + 1;
              uVar17 = uVar17 + 1;
            } while (uVar3 != uVar17);
          }
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + (int)uVar19;
        } while (uVar16 != uVar30);
      }
      lVar15 = 0;
      uVar16 = 4;
      do {
        auVar27._0_4_ = -(uint)(0 < *(int *)((long)&uStack_488 + lVar15));
        auVar27._4_4_ = -(uint)(0 < *(int *)((long)&uStack_488 + lVar15 + 4));
        auVar27._8_4_ = -(uint)(0 < *(int *)((long)&uStack_480 + lVar15));
        auVar27._12_4_ = -(uint)(0 < *(int *)((long)&uStack_480 + lVar15 + 4));
        uVar30 = NEON_umaxv(auVar27,4);
        uVar16 = uVar16 - 4;
        if ((uVar30 & 1) != 0) break;
        bVar10 = lVar15 != 0x3f0;
        lVar15 = lVar15 + 0x10;
      } while (bVar10);
      if ((byte)(((byte)auVar27._0_4_ & 1) + ((byte)auVar27._4_4_ & 2) +
                ((byte)auVar27._8_4_ & 4) + ((byte)auVar27._12_4_ & 8)) == '\0') {
        iVar18 = 0;
      }
      else {
        uVar25 = NEON_umaxv(CONCAT26((short)auVar27._12_4_,
                                     CONCAT24((short)auVar27._8_4_,
                                              CONCAT22((short)auVar27._4_4_,(short)auVar27._0_4_)))
                            & 0x1000200030004,2);
        iVar18 = 0;
        if (((ulong)(4 - uVar25) & 0xff) != uVar16) {
          iVar18 = ~(uint)uVar16 + (4 - uVar25 & 0xff);
        }
      }
      uVar16 = 0xff;
      do {
        uVar30 = (uint)uVar16;
        if (0 < *(int *)((long)&uStack_488 + uVar16 * 4)) {
          if (uVar30 < 0xff) {
            uVar30 = uVar30 + 1;
          }
          goto LAB_109b59504;
        }
        uVar16 = (ulong)(uVar30 - 1);
      } while (uVar30 - 1 != 0);
      uVar30 = 1;
LAB_109b59504:
      lVar15 = 0;
      iVar21 = 0;
      uVar19 = 0;
      do {
        uVar7 = *(uint *)((long)&uStack_488 + lVar15 * 4);
        iVar2 = (int)lVar15;
        if ((int)uVar7 <= (int)uVar19) {
          uVar7 = uVar19;
          iVar2 = iVar21;
        }
        iVar21 = iVar2;
        lVar15 = lVar15 + 1;
        uVar19 = uVar7;
      } while (lVar15 != 0x100);
      iVar2 = iVar21 - iVar18;
      iVar6 = uVar30 - iVar21;
      if (iVar2 < iVar6) {
        lVar15 = 0x3f0;
        pauVar22 = (undefined1 (*) [16])&uStack_488;
        do {
          auVar27 = *pauVar22;
          auVar29 = NEON_rev64(*(undefined1 (*) [16])((long)&uStack_488 + lVar15),4);
          auVar29 = NEON_ext(auVar29,auVar29,8,1);
          *(long *)(*pauVar22 + 8) = auVar29._8_8_;
          *(long *)*pauVar22 = auVar29._0_8_;
          auVar27 = NEON_rev64(auVar27,4);
          auVar27 = NEON_ext(auVar27,auVar27,8,1);
          *(long *)((long)&uStack_480 + lVar15) = auVar27._8_8_;
          *(long *)((long)&uStack_488 + lVar15) = auVar27._0_8_;
          lVar15 = lVar15 + -0x10;
          pauVar22 = pauVar22 + 1;
        } while (lVar15 != 0x1f0);
        iVar18 = 0xff - uVar30;
        iVar21 = 0xff - iVar21;
      }
      dVar26 = (double)iVar18;
      iVar8 = iVar18 - iVar21;
      if (iVar18 < iVar21) {
        lVar15 = (long)iVar21 - (long)iVar18;
        piVar20 = (int *)((long)&uStack_488 + (long)iVar18 * 4);
        dVar31 = 0.0;
        do {
          iVar18 = iVar18 + 1;
          piVar20 = piVar20 + 1;
          dVar32 = (double)iVar8 * (double)*piVar20 + (double)iVar18 * (double)uVar7;
          dVar28 = (double)iVar18;
          if (dVar32 <= dVar31) {
            dVar32 = dVar31;
            dVar28 = dVar26;
          }
          dVar26 = dVar28;
          lVar15 = lVar15 + -1;
          dVar31 = dVar32;
        } while (lVar15 != 0);
      }
      uVar30 = 0;
      param_1 = 255.0 - (dVar26 + -1.0);
      if (iVar6 <= iVar2) {
        param_1 = dVar26 + -1.0;
      }
      goto LAB_109b59600;
    }
    if (uVar30 != 0x18) {
      uVar24 = *puStack_4b0;
      uVar23 = puStack_4b0[1];
      uVar30 = uStack_4f0 & 0xfff;
      goto LAB_109b59600;
    }
  }
  puVar12 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar12 = 1;
  uStack_488 = (undefined **)(puVar12 + 1);
  uStack_480._0_4_ = 0x39;
  uStack_480._4_4_ = 0;
  *(undefined8 *)(puVar12 + 3) = 0x6873657268745f63;
  *(undefined8 *)(puVar12 + 1) = 0x6974616d6f747561;
  *(undefined1 *)((long)puVar12 + 0x3d) = 0;
  *(undefined8 *)(puVar12 + 7) = 0x4f5f485345524854;
  *(undefined8 *)(puVar12 + 5) = 0x5f564328203d2120;
  *(undefined8 *)(puVar12 + 0xb) = 0x5f4853455248545f;
  *(undefined8 *)(puVar12 + 9) = 0x5643207c20555354;
  *(undefined8 *)((long)puVar12 + 0x35) = 0x29454c474e414952;
  *(undefined8 *)((long)puVar12 + 0x2d) = 0x545f485345524854;
  FUN_109ac3188(0xffffff29,&uStack_488,&DAT_10f2e8c7d,&UNK_10f59e6da,0x4b1);
LAB_109b5a010:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109b5a014);
  (*pcVar9)();
}



/* Entry: 109b5a148; end: 109b5a14b;  */

undefined8 * FUN_109b5a148(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b28818;
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



/* Entry: 109b5a14c; end: 109b5ae77;  */

/* WARNING: Removing unreachable block (ram,0x000109b5a3a0) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3a4) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3ac) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3b4) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3b8) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3d8) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3e0) */
/* WARNING: Removing unreachable block (ram,0x000109b5a3f4) */
/* WARNING: Removing unreachable block (ram,0x000109b5a404) */

void FUN_109b5a14c(double param_1,double param_2,uint *param_3,uint *param_4,int param_5,int param_6
                  ,uint param_7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uStack_548;
  uint uStack_544;
  undefined8 uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  uint uStack_528;
  uint uStack_524;
  undefined8 *puStack_520;
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
  long lStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  int iStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  ulong uStack_478;
  undefined4 *puStack_470;
  long *plStack_468;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  long *plStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  uint *puStack_3b0;
  long *plStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_291 [521];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_3 + 2);
    puStack_3b0 = (uint *)((ulong)&uStack_3f0 | 8);
    uStack_3e8 = puVar9[1];
    uStack_3f0 = *puVar9;
    uStack_3d8 = puVar9[3];
    uStack_3e0 = puVar9[2];
    uStack_3c8 = puVar9[5];
    uStack_3d0 = puVar9[4];
    uStack_3b8 = puVar9[7];
    uStack_3c0 = puVar9[6];
    plStack_3a8 = &lStack_3a0;
    lStack_3a0 = 0;
    lStack_398 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      lStack_3a0 = *(long *)puVar9[9];
      lStack_398 = ((long *)puVar9[9])[1];
    }
    else {
      uStack_3f0 = uStack_3f0 & 0xffffffff;
      func_0x000109a84868(&uStack_3f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_3f0,param_3,0xffffffff);
  }
  if ((uStack_3f0 & 0xfff) != 0) {
    puVar8 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_390 = puVar8 + 1;
    uStack_388._0_4_ = 0x15;
    uStack_388._4_4_ = 0;
    *(undefined1 *)((long)puVar8 + 0x19) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x5643203d3d202928;
    *(undefined8 *)(puVar8 + 1) = 0x657079742e637273;
    *(undefined8 *)((long)puVar8 + 0x11) = 0x314355385f564320;
    FUN_109ac3188(0xffffff29,&uStack_390,&UNK_10f59e75b,&UNK_10f59e6da,0x506);
    goto LAB_109b5ad54;
  }
  if (((int)param_7 < 2) || ((param_7 & 0x80000001) != 1)) {
    puVar8 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    uStack_390 = puVar8 + 1;
    uStack_388._0_4_ = 0x23;
    uStack_388._4_4_ = 0;
    *(undefined1 *)((long)puVar8 + 0x27) = 0;
    *(undefined4 *)((long)puVar8 + 0x23) = 0x31203e20;
    *(undefined8 *)(puVar8 + 3) = 0x3d3d203220252065;
    *(undefined8 *)(puVar8 + 1) = 0x7a69536b636f6c62;
    *(undefined8 *)(puVar8 + 7) = 0x20657a69536b636f;
    *(undefined8 *)(puVar8 + 5) = 0x6c62202626203120;
    FUN_109ac3188(0xffffff29,&uStack_390,&UNK_10f59e75b,&UNK_10f59e6da,0x507);
    goto LAB_109b5ad54;
  }
  uVar19 = *puStack_3b0;
  uVar18 = puStack_3b0[1];
  uStack_390._0_4_ = uVar18;
  uStack_390._4_4_ = uVar19;
  FUN_109a8ee3c(param_4,&uStack_390,0,0xffffffff,0,0);
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_4 + 2);
    uStack_410 = (ulong)&uStack_450 | 8;
    uStack_448 = puVar9[1];
    uStack_450 = *puVar9;
    uStack_438 = puVar9[3];
    uStack_440 = puVar9[2];
    uStack_428 = puVar9[5];
    uStack_430 = puVar9[4];
    uStack_418 = puVar9[7];
    uStack_420 = puVar9[6];
    plStack_408 = &lStack_400;
    lStack_400 = 0;
    lStack_3f8 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      lStack_400 = *(long *)puVar9[9];
      lStack_3f8 = ((long *)puVar9[9])[1];
    }
    else {
      uStack_450 = uStack_450 & 0xffffffff;
      func_0x000109a84868(&uStack_450);
    }
  }
  else {
    FUN_109a8a180(&uStack_450,param_4,0xffffffff);
  }
  if (0.0 <= param_1) {
    uStack_4b0 = 0x42ff0000;
    puStack_470 = &uStack_4a8;
    uStack_4a4 = 0;
    uStack_4a0 = 0;
    iStack_4ac = 0;
    uStack_4a8 = 0;
    uStack_494 = 0;
    uStack_490 = 0;
    uStack_49c = 0;
    uStack_498 = 0;
    uStack_484 = 0;
    uStack_48c = 0;
    uStack_488 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_47c = 0;
    lStack_460 = 0;
    lStack_458 = 0;
    plStack_468 = &lStack_460;
    if (uStack_3e0 != uStack_440) {
      if (uStack_418 != 0) {
        piVar1 = (int *)(uStack_418 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_478 = 0;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_4a0 = 0;
      uStack_49c = 0;
      uStack_488 = 0;
      uStack_484 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_4b0 = (uint)uStack_450;
      if (uStack_450._4_4_ < 3) {
        iStack_4ac = uStack_450._4_4_;
        uStack_4a8 = (undefined4)uStack_448;
        uStack_4a4 = (undefined4)(uStack_448 >> 0x20);
        lStack_460 = *plStack_408;
        lStack_458 = plStack_408[1];
      }
      else {
        func_0x000109a84868(&uStack_4b0,&uStack_450);
      }
      uStack_498 = (undefined4)uStack_438;
      uStack_494 = (undefined4)(uStack_438 >> 0x20);
      uStack_4a0 = (undefined4)uStack_440;
      uStack_49c = (undefined4)(uStack_440 >> 0x20);
      uStack_488 = (undefined4)uStack_428;
      uStack_484 = (undefined4)(uStack_428 >> 0x20);
      uStack_490 = (undefined4)uStack_430;
      uStack_48c = (undefined4)(uStack_430 >> 0x20);
      uStack_480 = (undefined4)uStack_420;
      uStack_47c = (undefined4)(uStack_420 >> 0x20);
      uStack_478 = uStack_418;
    }
    if (param_5 == 1) {
      uStack_390._0_4_ = 0x42ff0000;
      uStack_388._4_4_ = 0;
      uStack_380 = 0;
      uStack_390._4_4_ = 0;
      uStack_388._0_4_ = 0;
      puStack_520 = &uStack_390;
      puStack_350 = &uStack_388;
      uStack_374 = 0;
      uStack_370 = 0;
      uStack_37c = 0;
      uStack_378 = 0;
      uStack_364 = 0;
      uStack_36c = 0;
      uStack_368 = 0;
      lStack_358 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_510._0_4_ = 0x42ff0000;
      puStack_4d0 = &uStack_508;
      uStack_508._4_4_ = 0;
      uStack_500 = 0;
      uStack_510._4_4_ = 0;
      uStack_508._0_4_ = 0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4fc = 0;
      uStack_4f8 = 0;
      uStack_4e4 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      lStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_528 = 0x2010000;
      uStack_518 = 0;
      puStack_4c8 = &uStack_4c0;
      puStack_348 = &uStack_340;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_3f0,&uStack_528,5);
      if (lStack_358 != 0) {
        piVar1 = (int *)(lStack_358 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (lStack_4d8 != 0) {
        piVar1 = (int *)(lStack_4d8 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_510);
        }
      }
      puVar6 = puStack_348;
      lStack_4d8 = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      if ((int)uStack_510._4_4_ < 1) {
LAB_109b5a5dc:
        uStack_510._0_4_ = (uint)uStack_390;
        if (2 < (int)uStack_390._4_4_) goto LAB_109b5a610;
        uStack_510._4_4_ = uStack_390._4_4_;
        uStack_508._0_4_ = (undefined4)uStack_388;
        uStack_508._4_4_ = uStack_388._4_4_;
        *puStack_4c8 = *puStack_348;
        puStack_4c8[1] = puVar6[1];
      }
      else {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_4d0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_510._4_4_);
        if ((int)uStack_510._4_4_ < 3) goto LAB_109b5a5dc;
LAB_109b5a610:
        uStack_510._0_4_ = (uint)uStack_390;
        func_0x000109a84868(&uStack_510,&uStack_390);
      }
      puStack_520 = &uStack_390;
      uStack_4f8 = uStack_378;
      uStack_4f4 = uStack_374;
      uStack_500 = uStack_380;
      uStack_4fc = uStack_37c;
      uStack_4e8 = uStack_368;
      uStack_4e4 = uStack_364;
      uStack_4f0 = uStack_370;
      uStack_4ec = uStack_36c;
      lStack_4d8 = lStack_358;
      uStack_4e0 = uStack_360;
      uStack_4dc = uStack_35c;
      uStack_518 = 0;
      uStack_528 = 0x1010000;
      uStack_540 = CONCAT44(uStack_540._4_4_,0x2010000);
      puStack_538 = &uStack_510;
      uStack_530 = 0;
      uStack_548 = param_7;
      uStack_544 = param_7;
      FUN_109b44a6c(0,0,&uStack_528,&uStack_540,&uStack_548,1);
      uStack_528 = 0x2010000;
      puStack_520 = (undefined8 *)&uStack_4b0;
      uStack_518 = 0;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_510,&uStack_528,(uint)uStack_3f0 & 0xfff);
      if (lStack_4d8 != 0) {
        piVar1 = (int *)(lStack_4d8 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_510);
        }
      }
      lStack_4d8 = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      if (0 < (int)uStack_510._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_4d0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_510._4_4_);
      }
      if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
        _free(puStack_4c8[-1]);
      }
      if (lStack_358 != 0) {
        piVar1 = (int *)(lStack_358 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_390);
        }
      }
      puVar6 = (undefined8 *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_388);
      lStack_358 = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      if (0 < (int)uStack_390._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_350 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_390._4_4_);
      }
      if (puStack_348 != &uStack_340 && puStack_348 != (undefined8 *)0x0) {
        _free(puStack_348[-1]);
        puVar6 = (undefined8 *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_388);
      }
LAB_109b5a780:
      uVar2 = (uint)(long)(double)(long)param_1 &
              ((int)(uint)(long)(double)(long)param_1 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar2) {
        uVar2 = 0xff;
      }
      bVar13 = (byte)uVar2;
      uStack_388 = puVar6;
      if (param_6 == 1) {
        lVar10 = 0;
        lVar12 = (long)(int)((uint)(param_2 < (double)(int)param_2) - (int)param_2) + 0xff;
        lVar21 = 0xf;
        lVar20 = 0xe;
        lVar23 = 0xd;
        lVar22 = 0xc;
        lVar25 = 0xb;
        lVar24 = 10;
        lVar27 = 9;
        lVar26 = 8;
        lVar29 = 7;
        lVar28 = 6;
        lVar31 = 5;
        lVar30 = 4;
        lVar33 = 3;
        lVar32 = 2;
        lVar35 = 1;
        lVar34 = 0;
        do {
          *(ulong *)((long)&uStack_388 + lVar10) =
               CONCAT17(bVar13 & ~-(lVar12 < lVar21),
                        CONCAT16(bVar13 & ~-(lVar12 < lVar20),
                                 CONCAT15(bVar13 & ~-(lVar12 < lVar23),
                                          CONCAT14(bVar13 & ~-(lVar12 < lVar22),
                                                   CONCAT13(bVar13 & ~-(lVar12 < lVar25),
                                                            CONCAT12(bVar13 & ~-(lVar12 < lVar24),
                                                                     CONCAT11(bVar13 & ~-(lVar12 < 
                                                  lVar27),bVar13 & ~-(lVar12 < lVar26))))))));
          *(ulong *)((long)&uStack_390 + lVar10) =
               CONCAT17(bVar13 & ~-(lVar12 < lVar29),
                        CONCAT16(bVar13 & ~-(lVar12 < lVar28),
                                 CONCAT15(bVar13 & ~-(lVar12 < lVar31),
                                          CONCAT14(bVar13 & ~-(lVar12 < lVar30),
                                                   CONCAT13(bVar13 & ~-(lVar12 < lVar33),
                                                            CONCAT12(bVar13 & ~-(lVar12 < lVar32),
                                                                     CONCAT11(bVar13 & ~-(lVar12 < 
                                                  lVar35),bVar13 & ~-(lVar12 < lVar34))))))));
          lVar10 = lVar10 + 0x10;
          lVar30 = lVar30 + 0x10;
          lVar31 = lVar31 + 0x10;
          lVar32 = lVar32 + 0x10;
          lVar33 = lVar33 + 0x10;
          lVar34 = lVar34 + 0x10;
          lVar35 = lVar35 + 0x10;
          lVar28 = lVar28 + 0x10;
          lVar29 = lVar29 + 0x10;
          lVar26 = lVar26 + 0x10;
          lVar27 = lVar27 + 0x10;
          lVar24 = lVar24 + 0x10;
          lVar25 = lVar25 + 0x10;
          lVar22 = lVar22 + 0x10;
          lVar23 = lVar23 + 0x10;
          lVar20 = lVar20 + 0x10;
          lVar21 = lVar21 + 0x10;
        } while (lVar10 != 0x300);
      }
      else {
        if (param_6 != 0) {
          puVar8 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *puVar8 = 1;
          uStack_510 = puVar8 + 1;
          uStack_508._0_4_ = 0x22;
          uStack_508._4_4_ = 0;
          *(undefined1 *)((long)puVar8 + 0x26) = 0;
          *(undefined2 *)(puVar8 + 9) = 0x6570;
          *(undefined8 *)(puVar8 + 3) = 0x726f707075736e75;
          *(undefined8 *)(puVar8 + 1) = 0x2f6e776f6e6b6e55;
          *(undefined8 *)(puVar8 + 7) = 0x797420646c6f6873;
          *(undefined8 *)(puVar8 + 5) = 0x6572687420646574;
          FUN_109ac3188(0xffffff32,&uStack_510,&UNK_10f59e75b,&UNK_10f59e6da,0x532);
          goto LAB_109b5ad54;
        }
        lVar10 = 0;
        lVar12 = (long)(int)(-(int)param_2 - (uint)((double)(int)param_2 < param_2)) + 0xff;
        lVar21 = 0xf;
        lVar20 = 0xe;
        lVar23 = 0xd;
        lVar22 = 0xc;
        lVar25 = 0xb;
        lVar24 = 10;
        lVar27 = 9;
        lVar26 = 8;
        lVar29 = 7;
        lVar28 = 6;
        lVar31 = 5;
        lVar30 = 4;
        lVar33 = 3;
        lVar32 = 2;
        lVar35 = 1;
        lVar34 = 0;
        do {
          *(ulong *)((long)&uStack_388 + lVar10) =
               CONCAT17(bVar13 & -(lVar12 < lVar21),
                        CONCAT16(bVar13 & -(lVar12 < lVar20),
                                 CONCAT15(bVar13 & -(lVar12 < lVar23),
                                          CONCAT14(bVar13 & -(lVar12 < lVar22),
                                                   CONCAT13(bVar13 & -(lVar12 < lVar25),
                                                            CONCAT12(bVar13 & -(lVar12 < lVar24),
                                                                     CONCAT11(bVar13 & -(lVar12 < 
                                                  lVar27),bVar13 & -(lVar12 < lVar26))))))));
          *(ulong *)((long)&uStack_390 + lVar10) =
               CONCAT17(bVar13 & -(lVar12 < lVar29),
                        CONCAT16(bVar13 & -(lVar12 < lVar28),
                                 CONCAT15(bVar13 & -(lVar12 < lVar31),
                                          CONCAT14(bVar13 & -(lVar12 < lVar30),
                                                   CONCAT13(bVar13 & -(lVar12 < lVar33),
                                                            CONCAT12(bVar13 & -(lVar12 < lVar32),
                                                                     CONCAT11(bVar13 & -(lVar12 < 
                                                  lVar35),bVar13 & -(lVar12 < lVar34))))))));
          lVar10 = lVar10 + 0x10;
          lVar30 = lVar30 + 0x10;
          lVar31 = lVar31 + 0x10;
          lVar32 = lVar32 + 0x10;
          lVar33 = lVar33 + 0x10;
          lVar34 = lVar34 + 0x10;
          lVar35 = lVar35 + 0x10;
          lVar28 = lVar28 + 0x10;
          lVar29 = lVar29 + 0x10;
          lVar26 = lVar26 + 0x10;
          lVar27 = lVar27 + 0x10;
          lVar24 = lVar24 + 0x10;
          lVar25 = lVar25 + 0x10;
          lVar22 = lVar22 + 0x10;
          lVar23 = lVar23 + 0x10;
          lVar20 = lVar20 + 0x10;
          lVar21 = lVar21 + 0x10;
        } while (lVar10 != 0x300);
      }
      if (((uStack_3f0._1_1_ >> 6 & 1) == 0) || ((uStack_4b0._1_1_ >> 6 & 1) == 0)) {
LAB_109b5a994:
        if (0 < (int)uVar19) goto LAB_109b5a99c;
      }
      else {
        uVar2 = uVar19;
        if ((uStack_450 & 0x4000) == 0) {
          uVar2 = 1;
        }
        uVar18 = uVar2 * uVar18;
        if (((uint)uStack_450 >> 0xe & 1) == 0) goto LAB_109b5a994;
        uVar19 = 1;
LAB_109b5a99c:
        uVar11 = 0;
        do {
          if (0 < (int)uVar18) {
            puVar14 = (undefined1 *)(uStack_440 + *plStack_408 * uVar11);
            pbVar15 = (byte *)(CONCAT44(uStack_49c,uStack_4a0) + *plStack_468 * uVar11);
            pbVar16 = (byte *)(uStack_3e0 + *plStack_3a8 * uVar11);
            uVar17 = (ulong)uVar18;
            do {
              *puVar14 = auStack_291[(ulong)*pbVar16 - (ulong)*pbVar15];
              uVar17 = uVar17 - 1;
              puVar14 = puVar14 + 1;
              pbVar15 = pbVar15 + 1;
              pbVar16 = pbVar16 + 1;
            } while (uVar17 != 0);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar19);
      }
      if (uStack_478 != 0) {
        piVar1 = (int *)(uStack_478 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_4b0);
        }
      }
      uStack_478 = 0;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_4a0 = 0;
      uStack_49c = 0;
      uStack_488 = 0;
      uStack_484 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      if (0 < iStack_4ac) {
        lVar12 = 0;
        do {
          puStack_470[lVar12] = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_4ac);
      }
      if (plStack_468 != &lStack_460 && plStack_468 != (long *)0x0) {
        _free(plStack_468[-1]);
      }
      goto LAB_109b5aa88;
    }
    if (param_5 == 0) {
      uStack_390._0_4_ = 0x1010000;
      uStack_388 = &uStack_3f0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_510._0_4_ = 0x2010000;
      uStack_508 = &uStack_4b0;
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_540 = 0xffffffffffffffff;
      uStack_528 = param_7;
      uStack_524 = param_7;
      FUN_109b437c0(&uStack_390,&uStack_510,(uint)uStack_3f0 & 0xfff,&uStack_528,&uStack_540,1,1);
      puVar6 = uStack_388;
      goto LAB_109b5a780;
    }
  }
  else {
    uStack_388._0_4_ = 0;
    uStack_388._4_4_ = 0;
    uStack_390._0_4_ = 0;
    uStack_390._4_4_ = 0;
    uStack_378 = 0;
    uStack_374 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    FUN_109a48880(&uStack_450,&uStack_390);
LAB_109b5aa88:
    if (uStack_418 != 0) {
      piVar1 = (int *)(uStack_418 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_450);
      }
    }
    uStack_418 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    if (0 < uStack_450._4_4_) {
      lVar12 = 0;
      do {
        *(undefined4 *)(uStack_410 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < uStack_450._4_4_);
    }
    if (plStack_408 != &lStack_400 && plStack_408 != (long *)0x0) {
      _free(plStack_408[-1]);
    }
    if (uStack_3b8 != 0) {
      piVar1 = (int *)(uStack_3b8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_3f0);
      }
    }
    uStack_3b8 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    if (0 < uStack_3f0._4_4_) {
      lVar12 = 0;
      do {
        puStack_3b0[lVar12] = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < uStack_3f0._4_4_);
    }
    if (plStack_3a8 != &lStack_3a0 && plStack_3a8 != (long *)0x0) {
      _free(plStack_3a8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar8 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_390 = puVar8 + 1;
  uStack_388._0_4_ = 0x2d;
  uStack_388._4_4_ = 0;
  *(undefined1 *)((long)puVar8 + 0x31) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x726f707075736e75;
  *(undefined8 *)(puVar8 + 1) = 0x2f6e776f6e6b6e55;
  *(undefined8 *)(puVar8 + 7) = 0x7268742065766974;
  *(undefined8 *)(puVar8 + 5) = 0x7061646120646574;
  *(undefined8 *)((long)puVar8 + 0x29) = 0x646f6874656d2064;
  *(undefined8 *)((long)puVar8 + 0x21) = 0x6c6f687365726874;
  FUN_109ac3188(0xffffff32,&uStack_390,&UNK_10f59e75b,&UNK_10f59e6da,0x524);
LAB_109b5ad54:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109b5ad58);
  (*pcVar7)();
}



/* Entry: 109b5ae78; end: 109b5b2d3;  */

undefined8
FUN_109b5ae78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  undefined4 auStack_1a0 [2];
  uint *puStack_198;
  undefined8 uStack_190;
  undefined4 *puStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  int *piStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  
  FUN_109a85f44(&uStack_b0,param_3,0,1,0,0);
  FUN_109a85f44(&uStack_110,param_4,0,1,0,0);
  uStack_170 = CONCAT44(iStack_10c,uStack_110);
  uStack_130 = (ulong)&uStack_170 | 8;
  uStack_168 = uStack_108;
  uStack_158 = uStack_f8;
  lStack_160 = lStack_100;
  uStack_148 = uStack_e8;
  uStack_150 = uStack_f0;
  lStack_138 = lStack_d8;
  uStack_140 = uStack_e0;
  uStack_120 = 0;
  uStack_118 = 0;
  if (lStack_d8 != 0) {
    piVar7 = (int *)(lStack_d8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = *piVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_128 = &uStack_120;
  if (iStack_10c < 3) {
    uStack_120 = *puStack_c8;
    uStack_118 = puStack_c8[1];
  }
  else {
    uStack_170 = (ulong)uStack_110;
    func_0x000109a84868(&uStack_170,&uStack_110);
  }
  uVar2 = piStack_70[-1];
  uVar10 = (ulong)uVar2;
  if (uVar2 == piStack_d0[-1]) {
    if (uVar2 == 2) {
      if ((*piStack_70 != *piStack_d0) || (piStack_70[1] != piStack_d0[1])) goto LAB_109b5b1e8;
    }
    else {
      piVar7 = piStack_70;
      piVar9 = piStack_d0;
      if (0 < (int)uVar2) {
        do {
          if (*piVar7 != *piVar9) goto LAB_109b5b1e8;
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar10 != 0);
      }
    }
    if ((((uStack_110 ^ uStack_b0) & 0xff8) == 0) &&
       ((uStack_b0 & 7) == (uStack_110 & 7) || (uStack_110 & 7) == 0)) {
      puStack_188._0_4_ = 0x1010000;
      puStack_180 = &uStack_b0;
      uStack_178 = 0;
      auStack_1a0[0] = 0x2010000;
      puStack_198 = &uStack_110;
      uStack_190 = 0;
      FUN_109b59078(param_1,param_2,&puStack_188,auStack_1a0,param_5);
      if (lStack_160 != lStack_100) {
        puStack_188._0_4_ = 0x2010000;
        puStack_180 = (uint *)&uStack_170;
        uStack_178 = 0;
        FUN_109a41858(0x3ff0000000000000,0,&uStack_110,&puStack_188,(uint)uStack_170 & 7);
      }
      if (lStack_138 != 0) {
        piVar7 = (int *)(lStack_138 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_170);
        }
      }
      lStack_138 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      if (0 < uStack_170._4_4_) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_130 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < uStack_170._4_4_);
      }
      if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
        _free(puStack_128[-1]);
      }
      if (lStack_d8 != 0) {
        piVar7 = (int *)(lStack_d8 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < iStack_10c) {
        lVar8 = 0;
        do {
          piStack_d0[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_10c);
      }
      if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (lStack_78 != 0) {
        piVar7 = (int *)(lStack_78 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      lStack_78 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < iStack_ac) {
        lVar8 = 0;
        do {
          piStack_70[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_ac);
      }
      if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_68 + -8));
      }
      return param_1;
    }
  }
LAB_109b5b1e8:
  puVar6 = (undefined4 *)0x78;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  puStack_188 = puVar6 + 1;
  puStack_180 = (uint *)0x70;
  *(undefined8 *)(puVar6 + 0xf) = 0x6372732820262620;
  *(undefined8 *)(puVar6 + 0xd) = 0x2928736c656e6e61;
  *(undefined8 *)(puVar6 + 0x13) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 0x11) = 0x292868747065642e;
  *(undefined8 *)(puVar6 + 0x17) = 0x642e747364207c7c;
  *(undefined8 *)(puVar6 + 0x15) = 0x2029286874706564;
  *(undefined8 *)(puVar6 + 0x1b) = 0x2955385f5643203d;
  *(undefined8 *)(puVar6 + 0x19) = 0x3d20292868747065;
  *(undefined8 *)(puVar6 + 3) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 1) = 0x657a69732e637273;
  *(undefined8 *)(puVar6 + 7) = 0x6e6168632e637273;
  *(undefined8 *)(puVar6 + 5) = 0x20262620657a6973;
  *(undefined1 *)(puVar6 + 0x1d) = 0;
  *(undefined8 *)(puVar6 + 0xb) = 0x68632e747364203d;
  *(undefined8 *)(puVar6 + 9) = 0x3d202928736c656e;
  FUN_109ac3188(0xffffff29,&puStack_188,&UNK_10f59e853,&UNK_10f59e6da,0x54b);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b5b264);
  (*pcVar5)();
}



/* Entry: 109b5b2d4; end: 109b5b2e7;  */

void FUN_109b5b2d4(void)

{
  FUN_109b5c268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b5b2e8; end: 109b5c267;  */

void FUN_109b5b2e8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  short *psVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  code *pcVar25;
  long lVar26;
  undefined4 *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  short sVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  byte bVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  short sVar51;
  float fVar52;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar64;
  undefined8 uVar65;
  byte bVar67;
  byte bVar68;
  undefined8 uVar66;
  int iVar69;
  int iVar70;
  undefined8 uStack_228;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f0;
  long lStack_1e8;
  ulong *puStack_1e0;
  ulong auStack_1d8 [2];
  uint uStack_1c8;
  int iStack_1c4;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  uint *puStack_188;
  ulong *puStack_180;
  ulong auStack_178 [2];
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = (undefined4 *)*param_2;
  uStack_158 = (undefined4 *)*param_2;
  uStack_228 = 0x7fffffff80000000;
  FUN_109a84930(&uStack_1c8,param_1 + 8,&uStack_158,&uStack_228);
  puStack_168 = (undefined4 *)0x7fffffff80000000;
  uStack_158 = puVar27;
  FUN_109a84930(&uStack_228,param_1 + 0x68,&uStack_158,&puStack_168);
  uVar43 = uStack_1c8 & 7;
  if (uVar43 == 5) {
    iVar69 = *(int *)(param_1 + 0xd8);
    uVar42 = *puStack_188;
    uVar41 = puStack_188[1] + puStack_188[1] * (uStack_1c8 >> 3 & 0x1ff);
    uVar43 = uVar42;
    if ((uStack_1c8 >> 0xe & 1) != 0) {
      if ((uStack_228 & 0x4000) == 0) {
        uVar42 = 1;
      }
      else {
        uVar43 = 1;
      }
      uVar41 = uVar42 * uVar41;
    }
    fVar12 = (float)*(double *)(param_1 + 200);
    auStack_178[0] = auStack_178[0] >> 2;
    auStack_1d8[0] = auStack_1d8[0] >> 2;
    if (iVar69 < 2) {
      fVar64 = (float)*(double *)(param_1 + 0xd0);
      bVar46 = SUB41(fVar64,0);
      bVar39 = (byte)((uint)fVar64 >> 8);
      bVar67 = (byte)((uint)fVar64 >> 0x10);
      bVar68 = (byte)((uint)fVar64 >> 0x18);
      if (iVar69 == 0) {
        if (0 < (int)uVar43) {
          uVar42 = 0;
          do {
            if ((int)uVar41 < 4) {
              uVar37 = 0;
            }
            else {
              lVar31 = 0;
              uVar37 = 0;
              do {
                uVar66 = ((undefined8 *)(lStack_1b8 + lVar31))[1];
                uVar65 = *(undefined8 *)(lStack_1b8 + lVar31);
                iVar69 = -(uint)(fVar12 < (float)uVar65);
                iVar40 = -(uint)(fVar12 < (float)((ulong)uVar65 >> 0x20));
                iVar34 = -(uint)(fVar12 < (float)uVar66);
                iVar70 = -(uint)(fVar12 < (float)((ulong)uVar66 >> 0x20));
                ((undefined8 *)(lStack_218 + lVar31))[1] =
                     CONCAT17((byte)((uint)iVar70 >> 0x18) & bVar68,
                              CONCAT16((byte)((uint)iVar70 >> 0x10) & bVar67,
                                       CONCAT15((byte)((uint)iVar70 >> 8) & bVar39,
                                                CONCAT14((byte)iVar70 & bVar46,
                                                         CONCAT13((byte)((uint)iVar34 >> 0x18) &
                                                                  bVar68,CONCAT12((byte)((uint)
                                                  iVar34 >> 0x10) & bVar67,
                                                  CONCAT11((byte)((uint)iVar34 >> 8) & bVar39,
                                                           (byte)iVar34 & bVar46)))))));
                *(undefined8 *)(lStack_218 + lVar31) =
                     CONCAT17((byte)((uint)iVar40 >> 0x18) & bVar68,
                              CONCAT16((byte)((uint)iVar40 >> 0x10) & bVar67,
                                       CONCAT15((byte)((uint)iVar40 >> 8) & bVar39,
                                                CONCAT14((byte)iVar40 & bVar46,
                                                         CONCAT13((byte)((uint)iVar69 >> 0x18) &
                                                                  bVar68,CONCAT12((byte)((uint)
                                                  iVar69 >> 0x10) & bVar67,
                                                  CONCAT11((byte)((uint)iVar69 >> 8) & bVar39,
                                                           (byte)iVar69 & bVar46)))))));
                uVar37 = uVar37 + 4;
                lVar31 = lVar31 + 0x10;
              } while ((long)uVar37 <= (long)(int)(uVar41 - 4));
              uVar37 = uVar37 & 0xffffffff;
            }
            if ((int)uVar37 < (int)uVar41) {
              do {
                fVar52 = fVar64;
                if (*(float *)(lStack_1b8 + uVar37 * 4) <= fVar12) {
                  fVar52 = 0.0;
                }
                *(float *)(lStack_218 + uVar37 * 4) = fVar52;
                uVar37 = uVar37 + 1;
              } while (uVar41 != uVar37);
            }
            uVar42 = uVar42 + 1;
            lStack_218 = lStack_218 + auStack_1d8[0] * 4;
            lStack_1b8 = lStack_1b8 + auStack_178[0] * 4;
          } while (uVar42 != uVar43);
        }
      }
      else {
        if (iVar69 != 1) {
LAB_109b5c124:
          puVar27 = (undefined4 *)0x8;
          func_0x000107c2ae8c();
          *puVar27 = 1;
          uStack_158 = puVar27 + 1;
          *(undefined1 *)uStack_158 = 0;
          uStack_150 = 0;
          FUN_109ac3188(0xfffffffb,&uStack_158,&UNK_10f59e88b,&UNK_10f59e6da,0x387);
          goto LAB_109b5c1c4;
        }
        if (0 < (int)uVar43) {
          uVar42 = 0;
          do {
            if ((int)uVar41 < 4) {
              uVar37 = 0;
            }
            else {
              lVar31 = 0;
              uVar37 = 0;
              do {
                uVar66 = ((undefined8 *)(lStack_1b8 + lVar31))[1];
                uVar65 = *(undefined8 *)(lStack_1b8 + lVar31);
                iVar69 = -(uint)((float)uVar65 <= fVar12);
                iVar40 = -(uint)((float)((ulong)uVar65 >> 0x20) <= fVar12);
                iVar34 = -(uint)((float)uVar66 <= fVar12);
                iVar70 = -(uint)((float)((ulong)uVar66 >> 0x20) <= fVar12);
                ((undefined8 *)(lStack_218 + lVar31))[1] =
                     CONCAT17((byte)((uint)iVar70 >> 0x18) & bVar68,
                              CONCAT16((byte)((uint)iVar70 >> 0x10) & bVar67,
                                       CONCAT15((byte)((uint)iVar70 >> 8) & bVar39,
                                                CONCAT14((byte)iVar70 & bVar46,
                                                         CONCAT13((byte)((uint)iVar34 >> 0x18) &
                                                                  bVar68,CONCAT12((byte)((uint)
                                                  iVar34 >> 0x10) & bVar67,
                                                  CONCAT11((byte)((uint)iVar34 >> 8) & bVar39,
                                                           (byte)iVar34 & bVar46)))))));
                *(undefined8 *)(lStack_218 + lVar31) =
                     CONCAT17((byte)((uint)iVar40 >> 0x18) & bVar68,
                              CONCAT16((byte)((uint)iVar40 >> 0x10) & bVar67,
                                       CONCAT15((byte)((uint)iVar40 >> 8) & bVar39,
                                                CONCAT14((byte)iVar40 & bVar46,
                                                         CONCAT13((byte)((uint)iVar69 >> 0x18) &
                                                                  bVar68,CONCAT12((byte)((uint)
                                                  iVar69 >> 0x10) & bVar67,
                                                  CONCAT11((byte)((uint)iVar69 >> 8) & bVar39,
                                                           (byte)iVar69 & bVar46)))))));
                uVar37 = uVar37 + 4;
                lVar31 = lVar31 + 0x10;
              } while ((long)uVar37 <= (long)(int)(uVar41 - 4));
              uVar37 = uVar37 & 0xffffffff;
            }
            if ((int)uVar37 < (int)uVar41) {
              do {
                fVar52 = fVar64;
                if (fVar12 < *(float *)(lStack_1b8 + uVar37 * 4)) {
                  fVar52 = 0.0;
                }
                *(float *)(lStack_218 + uVar37 * 4) = fVar52;
                uVar37 = uVar37 + 1;
              } while (uVar41 != uVar37);
            }
            uVar42 = uVar42 + 1;
            lStack_218 = lStack_218 + auStack_1d8[0] * 4;
            lStack_1b8 = lStack_1b8 + auStack_178[0] * 4;
          } while (uVar42 != uVar43);
        }
      }
    }
    else if (iVar69 == 2) {
      if (0 < (int)uVar43) {
        uVar42 = 0;
        auVar50._4_4_ = fVar12;
        auVar50._0_4_ = fVar12;
        auVar50._8_4_ = fVar12;
        auVar50._12_4_ = fVar12;
        do {
          if ((int)uVar41 < 4) {
            uVar37 = 0;
          }
          else {
            lVar31 = 0;
            uVar37 = 0;
            do {
              auVar55 = NEON_fmin(*(undefined1 (*) [16])(lStack_1b8 + lVar31),auVar50,4);
              ((undefined8 *)(lStack_218 + lVar31))[1] = auVar55._8_8_;
              *(undefined8 *)(lStack_218 + lVar31) = auVar55._0_8_;
              uVar37 = uVar37 + 4;
              lVar31 = lVar31 + 0x10;
            } while ((long)uVar37 <= (long)(int)(uVar41 - 4));
            uVar37 = uVar37 & 0xffffffff;
          }
          if ((int)uVar37 < (int)uVar41) {
            do {
              fVar52 = *(float *)(lStack_1b8 + uVar37 * 4);
              fVar64 = fVar12;
              if (fVar52 <= fVar12) {
                fVar64 = fVar52;
              }
              *(float *)(lStack_218 + uVar37 * 4) = fVar64;
              uVar37 = uVar37 + 1;
            } while (uVar41 != uVar37);
          }
          uVar42 = uVar42 + 1;
          lStack_218 = lStack_218 + auStack_1d8[0] * 4;
          lStack_1b8 = lStack_1b8 + auStack_178[0] * 4;
        } while (uVar42 != uVar43);
      }
    }
    else if (iVar69 == 3) {
      if (0 < (int)uVar43) {
        uVar42 = 0;
        do {
          if ((int)uVar41 < 4) {
            uVar37 = 0;
          }
          else {
            lVar31 = 0;
            uVar37 = 0;
            do {
              uVar66 = ((undefined8 *)(lStack_1b8 + lVar31))[1];
              uVar65 = *(undefined8 *)(lStack_1b8 + lVar31);
              iVar69 = -(uint)(fVar12 < (float)uVar65);
              iVar40 = -(uint)(fVar12 < (float)((ulong)uVar65 >> 0x20));
              iVar34 = -(uint)(fVar12 < (float)uVar66);
              iVar70 = -(uint)(fVar12 < (float)((ulong)uVar66 >> 0x20));
              ((undefined8 *)(lStack_218 + lVar31))[1] =
                   CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((ulong)uVar66 >> 0x38),
                            CONCAT16((byte)((uint)iVar70 >> 0x10) & (byte)((ulong)uVar66 >> 0x30),
                                     CONCAT15((byte)((uint)iVar70 >> 8) &
                                              (byte)((ulong)uVar66 >> 0x28),
                                              CONCAT14((byte)iVar70 & (byte)((ulong)uVar66 >> 0x20),
                                                       CONCAT13((byte)((uint)iVar34 >> 0x18) &
                                                                (byte)((ulong)uVar66 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar34 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  uVar66 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar34 >> 8) &
                                                           (byte)((ulong)uVar66 >> 8),
                                                           (byte)iVar34 & (byte)uVar66)))))));
              *(undefined8 *)(lStack_218 + lVar31) =
                   CONCAT17((byte)((uint)iVar40 >> 0x18) & (byte)((ulong)uVar65 >> 0x38),
                            CONCAT16((byte)((uint)iVar40 >> 0x10) & (byte)((ulong)uVar65 >> 0x30),
                                     CONCAT15((byte)((uint)iVar40 >> 8) &
                                              (byte)((ulong)uVar65 >> 0x28),
                                              CONCAT14((byte)iVar40 & (byte)((ulong)uVar65 >> 0x20),
                                                       CONCAT13((byte)((uint)iVar69 >> 0x18) &
                                                                (byte)((ulong)uVar65 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar69 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  uVar65 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar69 >> 8) &
                                                           (byte)((ulong)uVar65 >> 8),
                                                           (byte)iVar69 & (byte)uVar65)))))));
              uVar37 = uVar37 + 4;
              lVar31 = lVar31 + 0x10;
            } while ((long)uVar37 <= (long)(int)(uVar41 - 4));
            uVar37 = uVar37 & 0xffffffff;
          }
          if ((int)uVar37 < (int)uVar41) {
            do {
              fVar64 = *(float *)(lStack_1b8 + uVar37 * 4);
              if (fVar64 <= fVar12) {
                fVar64 = 0.0;
              }
              *(float *)(lStack_218 + uVar37 * 4) = fVar64;
              uVar37 = uVar37 + 1;
            } while (uVar41 != uVar37);
          }
          uVar42 = uVar42 + 1;
          lStack_218 = lStack_218 + auStack_1d8[0] * 4;
          lStack_1b8 = lStack_1b8 + auStack_178[0] * 4;
        } while (uVar42 != uVar43);
      }
    }
    else {
      if (iVar69 != 4) goto LAB_109b5c124;
      if (0 < (int)uVar43) {
        uVar42 = 0;
        do {
          if ((int)uVar41 < 4) {
            uVar37 = 0;
          }
          else {
            lVar31 = 0;
            uVar37 = 0;
            do {
              uVar66 = ((undefined8 *)(lStack_1b8 + lVar31))[1];
              uVar65 = *(undefined8 *)(lStack_1b8 + lVar31);
              iVar69 = -(uint)((float)uVar65 <= fVar12);
              iVar40 = -(uint)((float)((ulong)uVar65 >> 0x20) <= fVar12);
              iVar34 = -(uint)((float)uVar66 <= fVar12);
              iVar70 = -(uint)((float)((ulong)uVar66 >> 0x20) <= fVar12);
              ((undefined8 *)(lStack_218 + lVar31))[1] =
                   CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((ulong)uVar66 >> 0x38),
                            CONCAT16((byte)((uint)iVar70 >> 0x10) & (byte)((ulong)uVar66 >> 0x30),
                                     CONCAT15((byte)((uint)iVar70 >> 8) &
                                              (byte)((ulong)uVar66 >> 0x28),
                                              CONCAT14((byte)iVar70 & (byte)((ulong)uVar66 >> 0x20),
                                                       CONCAT13((byte)((uint)iVar34 >> 0x18) &
                                                                (byte)((ulong)uVar66 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar34 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  uVar66 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar34 >> 8) &
                                                           (byte)((ulong)uVar66 >> 8),
                                                           (byte)iVar34 & (byte)uVar66)))))));
              *(undefined8 *)(lStack_218 + lVar31) =
                   CONCAT17((byte)((uint)iVar40 >> 0x18) & (byte)((ulong)uVar65 >> 0x38),
                            CONCAT16((byte)((uint)iVar40 >> 0x10) & (byte)((ulong)uVar65 >> 0x30),
                                     CONCAT15((byte)((uint)iVar40 >> 8) &
                                              (byte)((ulong)uVar65 >> 0x28),
                                              CONCAT14((byte)iVar40 & (byte)((ulong)uVar65 >> 0x20),
                                                       CONCAT13((byte)((uint)iVar69 >> 0x18) &
                                                                (byte)((ulong)uVar65 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar69 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  uVar65 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar69 >> 8) &
                                                           (byte)((ulong)uVar65 >> 8),
                                                           (byte)iVar69 & (byte)uVar65)))))));
              uVar37 = uVar37 + 4;
              lVar31 = lVar31 + 0x10;
            } while ((long)uVar37 <= (long)(int)(uVar41 - 4));
            uVar37 = uVar37 & 0xffffffff;
          }
          if ((int)uVar37 < (int)uVar41) {
            do {
              fVar64 = *(float *)(lStack_1b8 + uVar37 * 4);
              if (fVar12 < fVar64) {
                fVar64 = 0.0;
              }
              *(float *)(lStack_218 + uVar37 * 4) = fVar64;
              uVar37 = uVar37 + 1;
            } while (uVar41 != uVar37);
          }
          uVar42 = uVar42 + 1;
          lStack_218 = lStack_218 + auStack_1d8[0] * 4;
          lStack_1b8 = lStack_1b8 + auStack_178[0] * 4;
        } while (uVar42 != uVar43);
      }
    }
LAB_109b5bfa8:
    if (lStack_1f0 != 0) {
      piVar1 = (int *)(lStack_1f0 + 0x14);
      do {
        iVar69 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar69 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar69 + -1 == 0) {
        func_0x000109a848d4(&uStack_228);
      }
    }
    lStack_1f0 = 0;
    uStack_210 = 0;
    lStack_218 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    if (0 < uStack_228._4_4_) {
      lVar31 = 0;
      do {
        *(undefined4 *)(lStack_1e8 + lVar31 * 4) = 0;
        lVar31 = lVar31 + 1;
      } while (lVar31 < uStack_228._4_4_);
    }
    if (puStack_1e0 != auStack_1d8 && puStack_1e0 != (ulong *)0x0) {
      _free(puStack_1e0[-1]);
    }
    if (lStack_190 != 0) {
      piVar1 = (int *)(lStack_190 + 0x14);
      do {
        iVar69 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar69 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar69 + -1 == 0) {
        func_0x000109a848d4(&uStack_1c8);
      }
    }
    lStack_190 = 0;
    uStack_1b0 = 0;
    lStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    if (0 < iStack_1c4) {
      lVar31 = 0;
      do {
        puStack_188[lVar31] = 0;
        lVar31 = lVar31 + 1;
      } while (lVar31 < iStack_1c4);
    }
    if (puStack_180 != auStack_178 && puStack_180 != (ulong *)0x0) {
      _free(puStack_180[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar43 != 3) {
      if (uVar43 == 0) {
        iVar69 = *(int *)(param_1 + 0xd8);
        uVar43 = *puStack_188;
        uVar42 = puStack_188[1] + puStack_188[1] * (uStack_1c8 >> 3 & 0x1ff);
        uVar37 = auStack_178[0];
        uVar35 = auStack_1d8[0];
        if ((uStack_1c8 >> 0xe & 1) != 0) {
          uVar41 = uVar42 * uVar43;
          if ((uStack_228 & 0x4000) != 0) {
            uVar43 = 1;
            uVar37 = (long)(int)uVar41;
            uVar35 = (long)(int)uVar41;
            uVar42 = uVar41;
          }
        }
        uVar41 = (uint)*(double *)(param_1 + 200);
        uVar32 = (ulong)uVar41;
        bVar46 = (byte)uVar41;
        if (iVar69 < 2) {
          iVar40 = (int)*(double *)(param_1 + 0xd0);
          bVar39 = (byte)iVar40;
          if (iVar69 == 0) {
            _bzero(&uStack_158,uVar32 + 1);
            if (uVar41 != 0xff) {
              _memset((long)&uStack_158 + uVar32 + 1,iVar40,~uVar41 & 0xff);
            }
            if (0 < (int)uVar43) {
              lVar30 = 0;
              lVar31 = 0;
              uVar32 = 0;
              do {
                if ((int)uVar42 < 0x10) {
                  uVar29 = 0;
                }
                else {
                  uVar29 = 0;
                  do {
                    pbVar2 = (byte *)(lStack_1b8 + lVar30 + uVar29);
                    auVar55._0_8_ =
                         CONCAT17(-(bVar46 < pbVar2[7]) & bVar39,
                                  CONCAT16(-(bVar46 < pbVar2[6]) & bVar39,
                                           CONCAT15(-(bVar46 < pbVar2[5]) & bVar39,
                                                    CONCAT14(-(bVar46 < pbVar2[4]) & bVar39,
                                                             CONCAT13(-(bVar46 < pbVar2[3]) & bVar39
                                                                      ,CONCAT12(-(bVar46 < pbVar2[2]
                                                                                 ) & bVar39,
                                                                                CONCAT11(-(bVar46 < 
                                                  pbVar2[1]) & bVar39,-(bVar46 < *pbVar2) & bVar39))
                                                  )))));
                    auVar55[8] = -(bVar46 < pbVar2[8]) & bVar39;
                    auVar55[9] = -(bVar46 < pbVar2[9]) & bVar39;
                    auVar55[10] = -(bVar46 < pbVar2[10]) & bVar39;
                    auVar55[0xb] = -(bVar46 < pbVar2[0xb]) & bVar39;
                    auVar55[0xc] = -(bVar46 < pbVar2[0xc]) & bVar39;
                    auVar55[0xd] = -(bVar46 < pbVar2[0xd]) & bVar39;
                    auVar55[0xe] = -(bVar46 < pbVar2[0xe]) & bVar39;
                    auVar55[0xf] = -(bVar46 < pbVar2[0xf]) & bVar39;
                    puVar8 = (undefined8 *)(lStack_218 + lVar31 + uVar29);
                    puVar8[1] = auVar55._8_8_;
                    *puVar8 = auVar55._0_8_;
                    uVar29 = uVar29 + 0x10;
                  } while ((long)uVar29 <= (long)(int)(uVar42 - 0x10));
                  uVar29 = uVar29 & 0xffffffff;
                }
                uVar32 = uVar32 + 1;
                lVar31 = lVar31 + uVar35;
                lVar30 = lVar30 + uVar37;
              } while (uVar32 != uVar43);
              goto LAB_109b5becc;
            }
          }
          else {
            if (iVar69 != 1) {
LAB_109b5c168:
              puVar27 = (undefined4 *)0x1c;
              func_0x000107c2ae8c();
              *puVar27 = 1;
              puStack_168 = puVar27 + 1;
              uStack_160 = 0x16;
              *(undefined1 *)((long)puVar27 + 0x1a) = 0;
              *(undefined8 *)(puVar27 + 3) = 0x6c6f687365726874;
              *(undefined8 *)(puVar27 + 1) = 0x206e776f6e6b6e55;
              *(undefined8 *)((long)puVar27 + 0x12) = 0x6570797420646c6f;
              FUN_109ac3188(0xfffffffb,&puStack_168,&UNK_10f59e876,&UNK_10f59e6da,0xa1);
              goto LAB_109b5c1c4;
            }
            _memset(&uStack_158,iVar40,uVar32 + 1);
            if (uVar41 != 0xff) {
              _bzero((long)&uStack_158 + uVar32 + 1,~uVar41 & 0xff);
            }
            if (0 < (int)uVar43) {
              lVar30 = 0;
              lVar31 = 0;
              uVar32 = 0;
              do {
                if ((int)uVar42 < 0x10) {
                  uVar29 = 0;
                }
                else {
                  uVar29 = 0;
                  do {
                    pbVar2 = (byte *)(lStack_1b8 + lVar30 + uVar29);
                    auVar54._0_8_ =
                         CONCAT17(-(pbVar2[7] <= bVar46) & bVar39,
                                  CONCAT16(-(pbVar2[6] <= bVar46) & bVar39,
                                           CONCAT15(-(pbVar2[5] <= bVar46) & bVar39,
                                                    CONCAT14(-(pbVar2[4] <= bVar46) & bVar39,
                                                             CONCAT13(-(pbVar2[3] <= bVar46) &
                                                                      bVar39,CONCAT12(-(pbVar2[2] <=
                                                                                       bVar46) &
                                                                                      bVar39,
                                                  CONCAT11(-(pbVar2[1] <= bVar46) & bVar39,
                                                           -(*pbVar2 <= bVar46) & bVar39)))))));
                    auVar54[8] = -(pbVar2[8] <= bVar46) & bVar39;
                    auVar54[9] = -(pbVar2[9] <= bVar46) & bVar39;
                    auVar54[10] = -(pbVar2[10] <= bVar46) & bVar39;
                    auVar54[0xb] = -(pbVar2[0xb] <= bVar46) & bVar39;
                    auVar54[0xc] = -(pbVar2[0xc] <= bVar46) & bVar39;
                    auVar54[0xd] = -(pbVar2[0xd] <= bVar46) & bVar39;
                    auVar54[0xe] = -(pbVar2[0xe] <= bVar46) & bVar39;
                    auVar54[0xf] = -(pbVar2[0xf] <= bVar46) & bVar39;
                    puVar8 = (undefined8 *)(lStack_218 + lVar31 + uVar29);
                    puVar8[1] = auVar54._8_8_;
                    *puVar8 = auVar54._0_8_;
                    uVar29 = uVar29 + 0x10;
                  } while ((long)uVar29 <= (long)(int)(uVar42 - 0x10));
                  uVar29 = uVar29 & 0xffffffff;
                }
                uVar32 = uVar32 + 1;
                lVar31 = lVar31 + uVar35;
                lVar30 = lVar30 + uVar37;
              } while (uVar32 != uVar43);
              goto LAB_109b5becc;
            }
          }
        }
        else if (iVar69 == 2) {
          uVar29 = 0;
          do {
            uVar28 = uVar29;
            *(char *)((long)&uStack_158 + uVar28) = (char)uVar28;
            uVar29 = uVar28 + 1;
          } while ((ulong)(uVar41 + 1) != uVar28 + 1);
          if (uVar28 < 0xff) {
            _memset((long)&uStack_158 + (ulong)(uVar41 + 1),uVar32,(ulong)(0xfe - uVar41) + 1);
          }
          if (0 < (int)uVar43) {
            lVar30 = 0;
            lVar31 = 0;
            uVar32 = 0;
            do {
              if ((int)uVar42 < 0x10) {
                uVar29 = 0;
              }
              else {
                uVar29 = 0;
                do {
                  auVar10[1] = bVar46;
                  auVar10[0] = bVar46;
                  auVar10[2] = bVar46;
                  auVar10[3] = bVar46;
                  auVar10[4] = bVar46;
                  auVar10[5] = bVar46;
                  auVar10[6] = bVar46;
                  auVar10[7] = bVar46;
                  auVar10[8] = bVar46;
                  auVar10[9] = bVar46;
                  auVar10[10] = bVar46;
                  auVar10[0xb] = bVar46;
                  auVar10[0xc] = bVar46;
                  auVar10[0xd] = bVar46;
                  auVar10[0xe] = bVar46;
                  auVar10[0xf] = bVar46;
                  auVar50 = NEON_umin(*(undefined1 (*) [16])(lStack_1b8 + lVar30 + uVar29),auVar10,1
                                     );
                  puVar8 = (undefined8 *)(lStack_218 + lVar31 + uVar29);
                  puVar8[1] = auVar50._8_8_;
                  *puVar8 = auVar50._0_8_;
                  uVar29 = uVar29 + 0x10;
                } while ((long)uVar29 <= (long)(int)(uVar42 - 0x10));
                uVar29 = uVar29 & 0xffffffff;
              }
              uVar32 = uVar32 + 1;
              lVar31 = lVar31 + uVar35;
              lVar30 = lVar30 + uVar37;
            } while (uVar32 != uVar43);
LAB_109b5becc:
            if (((int)uVar29 < (int)uVar42) && (0 < (int)uVar43)) {
              lVar30 = 0;
              lVar31 = 0;
              uVar32 = 0;
              do {
                uVar28 = uVar29;
                if ((int)uVar29 <= (int)(uVar42 - 4)) {
                  do {
                    pbVar2 = (byte *)(lStack_1b8 + lVar31 + uVar28);
                    uVar44 = *(undefined1 *)((long)&uStack_158 + (ulong)pbVar2[1]);
                    puVar3 = (undefined1 *)(lStack_218 + lVar30 + uVar28);
                    *puVar3 = *(undefined1 *)((long)&uStack_158 + (ulong)*pbVar2);
                    puVar3[1] = uVar44;
                    uVar44 = *(undefined1 *)((long)&uStack_158 + (ulong)pbVar2[3]);
                    puVar3[2] = *(undefined1 *)((long)&uStack_158 + (ulong)pbVar2[2]);
                    puVar3[3] = uVar44;
                    uVar28 = uVar28 + 4;
                  } while ((long)uVar28 <= (long)(int)(uVar42 - 4));
                  uVar28 = uVar28 & 0xffffffff;
                }
                if ((int)uVar28 < (int)uVar42) {
                  lVar26 = uVar42 - uVar28;
                  lVar38 = lStack_218 + uVar28;
                  lVar36 = lStack_1b8 + uVar28;
                  do {
                    *(undefined1 *)(lVar38 + lVar30) =
                         *(undefined1 *)((long)&uStack_158 + (ulong)*(byte *)(lVar36 + lVar31));
                    lVar38 = lVar38 + 1;
                    lVar36 = lVar36 + 1;
                    lVar26 = lVar26 + -1;
                  } while (lVar26 != 0);
                }
                uVar32 = uVar32 + 1;
                lVar31 = lVar31 + uVar37;
                lVar30 = lVar30 + uVar35;
              } while (uVar32 != uVar43);
            }
          }
        }
        else if (iVar69 == 3) {
          lVar31 = uVar32 + 1;
          _bzero(&uStack_158,lVar31);
          if (uVar41 == 0xff) {
            bVar46 = 0xff;
          }
          else {
            do {
              *(char *)((long)&uStack_158 + lVar31) = (char)lVar31;
              lVar31 = lVar31 + 1;
            } while (lVar31 != 0x100);
          }
          if (0 < (int)uVar43) {
            lVar30 = 0;
            lVar31 = 0;
            uVar32 = 0;
            do {
              if ((int)uVar42 < 0x10) {
                uVar29 = 0;
              }
              else {
                uVar29 = 0;
                do {
                  pbVar2 = (byte *)(lStack_1b8 + lVar30 + uVar29);
                  bVar39 = *pbVar2;
                  bVar67 = pbVar2[1];
                  bVar68 = pbVar2[2];
                  bVar13 = pbVar2[3];
                  bVar14 = pbVar2[4];
                  bVar15 = pbVar2[5];
                  bVar16 = pbVar2[6];
                  bVar17 = pbVar2[7];
                  bVar18 = pbVar2[9];
                  bVar19 = pbVar2[10];
                  bVar20 = pbVar2[0xb];
                  bVar21 = pbVar2[0xc];
                  bVar22 = pbVar2[0xd];
                  bVar23 = pbVar2[0xe];
                  bVar24 = pbVar2[0xf];
                  pbVar9 = (byte *)(lStack_218 + lVar31 + uVar29);
                  pbVar9[8] = -(bVar46 < pbVar2[8]) & pbVar2[8];
                  pbVar9[9] = -(bVar46 < bVar18) & bVar18;
                  pbVar9[10] = -(bVar46 < bVar19) & bVar19;
                  pbVar9[0xb] = -(bVar46 < bVar20) & bVar20;
                  pbVar9[0xc] = -(bVar46 < bVar21) & bVar21;
                  pbVar9[0xd] = -(bVar46 < bVar22) & bVar22;
                  pbVar9[0xe] = -(bVar46 < bVar23) & bVar23;
                  pbVar9[0xf] = -(bVar46 < bVar24) & bVar24;
                  *pbVar9 = -(bVar46 < bVar39) & bVar39;
                  pbVar9[1] = -(bVar46 < bVar67) & bVar67;
                  pbVar9[2] = -(bVar46 < bVar68) & bVar68;
                  pbVar9[3] = -(bVar46 < bVar13) & bVar13;
                  pbVar9[4] = -(bVar46 < bVar14) & bVar14;
                  pbVar9[5] = -(bVar46 < bVar15) & bVar15;
                  pbVar9[6] = -(bVar46 < bVar16) & bVar16;
                  pbVar9[7] = -(bVar46 < bVar17) & bVar17;
                  uVar29 = uVar29 + 0x10;
                } while ((long)uVar29 <= (long)(int)(uVar42 - 0x10));
                uVar29 = uVar29 & 0xffffffff;
              }
              uVar32 = uVar32 + 1;
              lVar31 = lVar31 + uVar35;
              lVar30 = lVar30 + uVar37;
            } while (uVar32 != uVar43);
            goto LAB_109b5becc;
          }
        }
        else {
          if (iVar69 != 4) goto LAB_109b5c168;
          uVar32 = 0;
          do {
            uVar29 = uVar32;
            *(char *)((long)&uStack_158 + uVar29) = (char)uVar29;
            uVar32 = uVar29 + 1;
          } while ((ulong)(uVar41 + 1) != uVar29 + 1);
          if (uVar29 < 0xff) {
            _bzero((long)&uStack_158 + (ulong)(uVar41 + 1),(ulong)(0xfe - uVar41) + 1);
          }
          if (0 < (int)uVar43) {
            lVar30 = 0;
            lVar31 = 0;
            uVar32 = 0;
            do {
              if ((int)uVar42 < 0x10) {
                uVar29 = 0;
              }
              else {
                uVar29 = 0;
                do {
                  pbVar2 = (byte *)(lStack_1b8 + lVar30 + uVar29);
                  auVar47._0_8_ =
                       CONCAT17(-(pbVar2[7] <= bVar46) & pbVar2[7],
                                CONCAT16(-(pbVar2[6] <= bVar46) & pbVar2[6],
                                         CONCAT15(-(pbVar2[5] <= bVar46) & pbVar2[5],
                                                  CONCAT14(-(pbVar2[4] <= bVar46) & pbVar2[4],
                                                           CONCAT13(-(pbVar2[3] <= bVar46) &
                                                                    pbVar2[3],
                                                                    CONCAT12(-(pbVar2[2] <= bVar46)
                                                                             & pbVar2[2],
                                                                             CONCAT11(-(pbVar2[1] <=
                                                                                       bVar46) &
                                                                                      pbVar2[1],
                                                                                      -(*pbVar2 <=
                                                                                       bVar46) &
                                                                                      *pbVar2)))))))
                  ;
                  auVar47[8] = -(pbVar2[8] <= bVar46) & pbVar2[8];
                  auVar47[9] = -(pbVar2[9] <= bVar46) & pbVar2[9];
                  auVar47[10] = -(pbVar2[10] <= bVar46) & pbVar2[10];
                  auVar47[0xb] = -(pbVar2[0xb] <= bVar46) & pbVar2[0xb];
                  auVar47[0xc] = -(pbVar2[0xc] <= bVar46) & pbVar2[0xc];
                  auVar47[0xd] = -(pbVar2[0xd] <= bVar46) & pbVar2[0xd];
                  auVar47[0xe] = -(pbVar2[0xe] <= bVar46) & pbVar2[0xe];
                  auVar47[0xf] = -(pbVar2[0xf] <= bVar46) & pbVar2[0xf];
                  puVar8 = (undefined8 *)(lStack_218 + lVar31 + uVar29);
                  puVar8[1] = auVar47._8_8_;
                  *puVar8 = auVar47._0_8_;
                  uVar29 = uVar29 + 0x10;
                } while ((long)uVar29 <= (long)(int)(uVar42 - 0x10));
                uVar29 = uVar29 & 0xffffffff;
              }
              uVar32 = uVar32 + 1;
              lVar31 = lVar31 + uVar35;
              lVar30 = lVar30 + uVar37;
            } while (uVar32 != uVar43);
            goto LAB_109b5becc;
          }
        }
      }
      goto LAB_109b5bfa8;
    }
    iVar69 = *(int *)(param_1 + 0xd8);
    uVar43 = *puStack_188;
    uVar42 = puStack_188[1] + puStack_188[1] * (uStack_1c8 >> 3 & 0x1ff);
    uVar37 = auStack_178[0] >> 1;
    uVar35 = auStack_1d8[0] >> 1;
    if ((uStack_1c8 >> 0xe & 1) != 0) {
      uVar41 = uVar42 * uVar43;
      if ((uStack_228 & 0x4000) != 0) {
        uVar43 = 1;
        uVar37 = (long)(int)uVar41;
        uVar35 = (long)(int)uVar41;
        uVar42 = uVar41;
      }
    }
    iVar40 = (int)*(double *)(param_1 + 200);
    sVar33 = (short)iVar40;
    uVar45 = (undefined1)((uint)iVar40 >> 8);
    uVar44 = (undefined1)iVar40;
    if (1 < iVar69) {
      if (iVar69 == 2) {
        if (0 < (int)uVar43) {
          uVar41 = 0;
          do {
            if ((int)uVar42 < 8) {
              uVar32 = 0;
            }
            else {
              lVar31 = 0;
              uVar32 = 0;
              do {
                auVar11[2] = uVar44;
                auVar11._0_2_ = sVar33;
                auVar11[3] = uVar45;
                auVar11[4] = uVar44;
                auVar11[5] = uVar45;
                auVar11[6] = uVar44;
                auVar11[7] = uVar45;
                auVar11[8] = uVar44;
                auVar11[9] = uVar45;
                auVar11[10] = uVar44;
                auVar11[0xb] = uVar45;
                auVar11[0xc] = uVar44;
                auVar11[0xd] = uVar45;
                auVar11[0xe] = uVar44;
                auVar11[0xf] = uVar45;
                auVar50 = NEON_smin(*(undefined1 (*) [16])(lStack_1b8 + lVar31),auVar11,2);
                ((undefined8 *)(lStack_218 + lVar31))[1] = auVar50._8_8_;
                *(undefined8 *)(lStack_218 + lVar31) = auVar50._0_8_;
                uVar32 = uVar32 + 8;
                lVar31 = lVar31 + 0x10;
              } while ((long)uVar32 <= (long)(int)(uVar42 - 8));
              uVar32 = uVar32 & 0xffffffff;
            }
            if ((int)uVar32 < (int)uVar42) {
              do {
                sVar51 = *(short *)(lStack_1b8 + uVar32 * 2);
                iVar69 = (int)sVar51;
                if (iVar40 <= sVar51) {
                  iVar69 = iVar40;
                }
                *(short *)(lStack_218 + uVar32 * 2) = (short)iVar69;
                uVar32 = uVar32 + 1;
              } while (uVar42 != uVar32);
            }
            uVar41 = uVar41 + 1;
            lStack_218 = lStack_218 + uVar35 * 2;
            lStack_1b8 = lStack_1b8 + uVar37 * 2;
          } while (uVar41 != uVar43);
        }
      }
      else if (iVar69 == 3) {
        if (0 < (int)uVar43) {
          uVar41 = 0;
          do {
            if ((int)uVar42 < 8) {
              uVar32 = 0;
            }
            else {
              lVar31 = 0;
              uVar32 = 0;
              do {
                auVar50 = *(undefined1 (*) [16])(lStack_1b8 + lVar31);
                sVar51 = -(ushort)(sVar33 < auVar50._0_2_);
                sVar57 = -(ushort)(sVar33 < auVar50._2_2_);
                sVar58 = -(ushort)(sVar33 < auVar50._4_2_);
                sVar59 = -(ushort)(sVar33 < auVar50._6_2_);
                sVar60 = -(ushort)(sVar33 < auVar50._8_2_);
                sVar61 = -(ushort)(sVar33 < auVar50._10_2_);
                sVar62 = -(ushort)(sVar33 < auVar50._12_2_);
                sVar63 = -(ushort)(sVar33 < auVar50._14_2_);
                auVar49._0_8_ =
                     CONCAT17((byte)((ushort)sVar59 >> 8) & auVar50[7],
                              CONCAT16((byte)sVar59 & auVar50[6],
                                       CONCAT15((byte)((ushort)sVar58 >> 8) & auVar50[5],
                                                CONCAT14((byte)sVar58 & auVar50[4],
                                                         CONCAT13((byte)((ushort)sVar57 >> 8) &
                                                                  auVar50[3],
                                                                  CONCAT12((byte)sVar57 & auVar50[2]
                                                                           ,CONCAT11((byte)((ushort)
                                                  sVar51 >> 8) & auVar50[1],
                                                  (byte)sVar51 & auVar50[0])))))));
                auVar49[8] = (byte)sVar60 & auVar50[8];
                auVar49[9] = (byte)((ushort)sVar60 >> 8) & auVar50[9];
                auVar49[10] = (byte)sVar61 & auVar50[10];
                auVar49[0xb] = (byte)((ushort)sVar61 >> 8) & auVar50[0xb];
                auVar49[0xc] = (byte)sVar62 & auVar50[0xc];
                auVar49[0xd] = (byte)((ushort)sVar62 >> 8) & auVar50[0xd];
                auVar49[0xe] = (byte)sVar63 & auVar50[0xe];
                auVar49[0xf] = (byte)((ushort)sVar63 >> 8) & auVar50[0xf];
                ((undefined8 *)(lStack_218 + lVar31))[1] = auVar49._8_8_;
                *(undefined8 *)(lStack_218 + lVar31) = auVar49._0_8_;
                uVar32 = uVar32 + 8;
                lVar31 = lVar31 + 0x10;
              } while ((long)uVar32 <= (long)(int)(uVar42 - 8));
              uVar32 = uVar32 & 0xffffffff;
            }
            if ((int)uVar32 < (int)uVar42) {
              do {
                sVar51 = *(short *)(lStack_1b8 + uVar32 * 2);
                if (sVar51 <= iVar40) {
                  sVar51 = 0;
                }
                *(short *)(lStack_218 + uVar32 * 2) = sVar51;
                uVar32 = uVar32 + 1;
              } while (uVar42 != uVar32);
            }
            uVar41 = uVar41 + 1;
            lStack_218 = lStack_218 + uVar35 * 2;
            lStack_1b8 = lStack_1b8 + uVar37 * 2;
          } while (uVar41 != uVar43);
        }
      }
      else {
        if (iVar69 != 4) goto LAB_109b5c0e0;
        if (0 < (int)uVar43) {
          uVar41 = 0;
          do {
            if ((int)uVar42 < 8) {
              uVar32 = 0;
            }
            else {
              lVar31 = 0;
              uVar32 = 0;
              do {
                auVar50 = *(undefined1 (*) [16])(lStack_1b8 + lVar31);
                sVar51 = -(ushort)(auVar50._0_2_ <= sVar33);
                sVar57 = -(ushort)(auVar50._2_2_ <= sVar33);
                sVar58 = -(ushort)(auVar50._4_2_ <= sVar33);
                sVar59 = -(ushort)(auVar50._6_2_ <= sVar33);
                sVar60 = -(ushort)(auVar50._8_2_ <= sVar33);
                sVar61 = -(ushort)(auVar50._10_2_ <= sVar33);
                sVar62 = -(ushort)(auVar50._12_2_ <= sVar33);
                sVar63 = -(ushort)(auVar50._14_2_ <= sVar33);
                auVar48._0_8_ =
                     CONCAT17((byte)((ushort)sVar59 >> 8) & auVar50[7],
                              CONCAT16((byte)sVar59 & auVar50[6],
                                       CONCAT15((byte)((ushort)sVar58 >> 8) & auVar50[5],
                                                CONCAT14((byte)sVar58 & auVar50[4],
                                                         CONCAT13((byte)((ushort)sVar57 >> 8) &
                                                                  auVar50[3],
                                                                  CONCAT12((byte)sVar57 & auVar50[2]
                                                                           ,CONCAT11((byte)((ushort)
                                                  sVar51 >> 8) & auVar50[1],
                                                  (byte)sVar51 & auVar50[0])))))));
                auVar48[8] = (byte)sVar60 & auVar50[8];
                auVar48[9] = (byte)((ushort)sVar60 >> 8) & auVar50[9];
                auVar48[10] = (byte)sVar61 & auVar50[10];
                auVar48[0xb] = (byte)((ushort)sVar61 >> 8) & auVar50[0xb];
                auVar48[0xc] = (byte)sVar62 & auVar50[0xc];
                auVar48[0xd] = (byte)((ushort)sVar62 >> 8) & auVar50[0xd];
                auVar48[0xe] = (byte)sVar63 & auVar50[0xe];
                auVar48[0xf] = (byte)((ushort)sVar63 >> 8) & auVar50[0xf];
                ((undefined8 *)(lStack_218 + lVar31))[1] = auVar48._8_8_;
                *(undefined8 *)(lStack_218 + lVar31) = auVar48._0_8_;
                uVar32 = uVar32 + 8;
                lVar31 = lVar31 + 0x10;
              } while ((long)uVar32 <= (long)(int)(uVar42 - 8));
              uVar32 = uVar32 & 0xffffffff;
            }
            if ((int)uVar32 < (int)uVar42) {
              do {
                sVar57 = *(short *)(lStack_1b8 + uVar32 * 2);
                sVar51 = 0;
                if (sVar57 <= iVar40) {
                  sVar51 = sVar57;
                }
                *(short *)(lStack_218 + uVar32 * 2) = sVar51;
                uVar32 = uVar32 + 1;
              } while (uVar42 != uVar32);
            }
            uVar41 = uVar41 + 1;
            lStack_218 = lStack_218 + uVar35 * 2;
            lStack_1b8 = lStack_1b8 + uVar37 * 2;
          } while (uVar41 != uVar43);
        }
      }
      goto LAB_109b5bfa8;
    }
    iVar34 = (int)*(double *)(param_1 + 0xd0);
    bVar46 = (byte)iVar34;
    bVar39 = (byte)((uint)iVar34 >> 8);
    if (iVar69 == 0) {
      if (0 < (int)uVar43) {
        uVar41 = 0;
        do {
          if ((int)uVar42 < 8) {
            uVar32 = 0;
          }
          else {
            lVar31 = 0;
            uVar32 = 0;
            do {
              psVar7 = (short *)(lStack_1b8 + lVar31);
              auVar56._0_8_ =
                   CONCAT17((byte)((ushort)-(ushort)(sVar33 < psVar7[3]) >> 8) & bVar39,
                            CONCAT16((byte)-(ushort)(sVar33 < psVar7[3]) & bVar46,
                                     CONCAT15((byte)((ushort)-(ushort)(sVar33 < psVar7[2]) >> 8) &
                                              bVar39,CONCAT14((byte)-(ushort)(sVar33 < psVar7[2]) &
                                                              bVar46,CONCAT13((byte)((ushort)-(
                                                  ushort)(sVar33 < psVar7[1]) >> 8) & bVar39,
                                                  CONCAT12((byte)-(ushort)(sVar33 < psVar7[1]) &
                                                           bVar46,CONCAT11((byte)((ushort)-(ushort)(
                                                  sVar33 < *psVar7) >> 8) & bVar39,
                                                  (byte)-(ushort)(sVar33 < *psVar7) & bVar46)))))));
              auVar56[8] = (byte)-(ushort)(sVar33 < psVar7[4]) & bVar46;
              auVar56[9] = (byte)((ushort)-(ushort)(sVar33 < psVar7[4]) >> 8) & bVar39;
              auVar56[10] = (byte)-(ushort)(sVar33 < psVar7[5]) & bVar46;
              auVar56[0xb] = (byte)((ushort)-(ushort)(sVar33 < psVar7[5]) >> 8) & bVar39;
              auVar56[0xc] = (byte)-(ushort)(sVar33 < psVar7[6]) & bVar46;
              auVar56[0xd] = (byte)((ushort)-(ushort)(sVar33 < psVar7[6]) >> 8) & bVar39;
              auVar56[0xe] = (byte)-(ushort)(sVar33 < psVar7[7]) & bVar46;
              auVar56[0xf] = (byte)((ushort)-(ushort)(sVar33 < psVar7[7]) >> 8) & bVar39;
              ((undefined8 *)(lStack_218 + lVar31))[1] = auVar56._8_8_;
              *(undefined8 *)(lStack_218 + lVar31) = auVar56._0_8_;
              uVar32 = uVar32 + 8;
              lVar31 = lVar31 + 0x10;
            } while ((long)uVar32 <= (long)(int)(uVar42 - 8));
            uVar32 = uVar32 & 0xffffffff;
          }
          if ((int)uVar32 < (int)uVar42) {
            do {
              uVar4 = (short)iVar34;
              if (*(short *)(lStack_1b8 + uVar32 * 2) <= iVar40) {
                uVar4 = 0;
              }
              *(undefined2 *)(lStack_218 + uVar32 * 2) = uVar4;
              uVar32 = uVar32 + 1;
            } while (uVar42 != uVar32);
          }
          uVar41 = uVar41 + 1;
          lStack_218 = lStack_218 + uVar35 * 2;
          lStack_1b8 = lStack_1b8 + uVar37 * 2;
        } while (uVar41 != uVar43);
      }
      goto LAB_109b5bfa8;
    }
    if (iVar69 == 1) {
      if (0 < (int)uVar43) {
        uVar41 = 0;
        do {
          if ((int)uVar42 < 8) {
            uVar32 = 0;
          }
          else {
            lVar31 = 0;
            uVar32 = 0;
            do {
              psVar7 = (short *)(lStack_1b8 + lVar31);
              auVar53._0_8_ =
                   CONCAT17((byte)((ushort)-(ushort)(psVar7[3] <= sVar33) >> 8) & bVar39,
                            CONCAT16((byte)-(ushort)(psVar7[3] <= sVar33) & bVar46,
                                     CONCAT15((byte)((ushort)-(ushort)(psVar7[2] <= sVar33) >> 8) &
                                              bVar39,CONCAT14((byte)-(ushort)(psVar7[2] <= sVar33) &
                                                              bVar46,CONCAT13((byte)((ushort)-(
                                                  ushort)(psVar7[1] <= sVar33) >> 8) & bVar39,
                                                  CONCAT12((byte)-(ushort)(psVar7[1] <= sVar33) &
                                                           bVar46,CONCAT11((byte)((ushort)-(ushort)(
                                                  *psVar7 <= sVar33) >> 8) & bVar39,
                                                  (byte)-(ushort)(*psVar7 <= sVar33) & bVar46)))))))
              ;
              auVar53[8] = (byte)-(ushort)(psVar7[4] <= sVar33) & bVar46;
              auVar53[9] = (byte)((ushort)-(ushort)(psVar7[4] <= sVar33) >> 8) & bVar39;
              auVar53[10] = (byte)-(ushort)(psVar7[5] <= sVar33) & bVar46;
              auVar53[0xb] = (byte)((ushort)-(ushort)(psVar7[5] <= sVar33) >> 8) & bVar39;
              auVar53[0xc] = (byte)-(ushort)(psVar7[6] <= sVar33) & bVar46;
              auVar53[0xd] = (byte)((ushort)-(ushort)(psVar7[6] <= sVar33) >> 8) & bVar39;
              auVar53[0xe] = (byte)-(ushort)(psVar7[7] <= sVar33) & bVar46;
              auVar53[0xf] = (byte)((ushort)-(ushort)(psVar7[7] <= sVar33) >> 8) & bVar39;
              ((undefined8 *)(lStack_218 + lVar31))[1] = auVar53._8_8_;
              *(undefined8 *)(lStack_218 + lVar31) = auVar53._0_8_;
              uVar32 = uVar32 + 8;
              lVar31 = lVar31 + 0x10;
            } while ((long)uVar32 <= (long)(int)(uVar42 - 8));
            uVar32 = uVar32 & 0xffffffff;
          }
          if ((int)uVar32 < (int)uVar42) {
            do {
              uVar4 = 0;
              if (*(short *)(lStack_1b8 + uVar32 * 2) <= iVar40) {
                uVar4 = (short)iVar34;
              }
              *(undefined2 *)(lStack_218 + uVar32 * 2) = uVar4;
              uVar32 = uVar32 + 1;
            } while (uVar42 != uVar32);
          }
          uVar41 = uVar41 + 1;
          lStack_218 = lStack_218 + uVar35 * 2;
          lStack_1b8 = lStack_1b8 + uVar37 * 2;
        } while (uVar41 != uVar43);
      }
      goto LAB_109b5bfa8;
    }
  }
LAB_109b5c0e0:
  puVar27 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar27 = 1;
  uStack_158 = puVar27 + 1;
  *(undefined1 *)uStack_158 = 0;
  uStack_150 = 0;
  FUN_109ac3188(0xfffffffb,&uStack_158,&UNK_10f59e880,&UNK_10f59e6da,0x28c);
LAB_109b5c1c4:
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x109b5c1c8);
  (*pcVar25)();
}



/* Entry: 109b5c268; end: 109b5c393;  */

undefined8 * FUN_109b5c268(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b28818;
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



/* Entry: 109b5c394; end: 109b5c64b;  */

undefined8 * FUN_109b5c394(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  if ((*param_2 & 0xfff) == 6) {
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    puVar10 = param_2 + 1;
    uVar5 = *puVar10;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar11;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
        uVar5 = *puVar10;
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    puVar9 = *(undefined8 **)(param_2 + 0x12);
    if ((int)uVar5 < 3) {
      *puVar8 = *puVar9;
      puVar8[1] = puVar9[1];
    }
    else {
      param_1[9] = puVar9;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(uint **)(param_2 + 0x10) = param_2 + 2;
      *(uint **)(param_2 + 0x12) = param_2 + 0x14;
    }
    *param_2 = 0x42ff0000;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
  }
  else if ((*param_2 & 7) == 6) {
    FUN_109a9ad84(&uStack_a0,param_2,1,param_2[1],0);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    param_1[1] = puStack_98;
    *param_1 = CONCAT44(iStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    if (iStack_9c < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar8 = *puStack_58;
      puVar8[1] = puStack_58[1];
      uStack_a0 = 0x42ff0000;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_58 != auStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = uStack_60;
      param_1[9] = puStack_58;
    }
  }
  else {
    uStack_a0 = 0x82010006;
    uStack_90 = 0;
    puStack_98 = param_1;
    FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_a0,6);
  }
  return param_1;
}



/* Entry: 109b5c64c; end: 109b5ccaf;  */

void FUN_109b5c64c(double param_1,double param_2,undefined8 *param_3,double *param_4,double *param_5
                  ,double *param_6)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  double *pdVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double adStack_2e8 [9];
  double adStack_2a0 [9];
  double adStack_258 [9];
  double adStack_210 [19];
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  double adStack_138 [9];
  double adStack_f0 [3];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  double adStack_a8 [5];
  double dStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  
  dVar9 = param_2;
  ___sincos_stret();
  dVar8 = dVar9;
  ___sincos_stret();
  lVar1 = 0;
  adStack_a8[0] = 1.0;
  adStack_a8[1] = 0.0;
  dStack_70 = -param_1;
  adStack_a8[2] = 0.0;
  adStack_a8[3] = 0.0;
  adStack_a8[4] = dVar9;
  dStack_80 = param_1;
  uStack_78 = 0;
  dStack_68 = dVar9;
  adStack_f0[2] = -param_2;
  adStack_f0[0] = dVar8;
  adStack_f0[1] = 0.0;
  uStack_d0 = 0x3ff0000000000000;
  uStack_d8 = 0;
  uStack_c8 = 0;
  dStack_c0 = param_2;
  uStack_b8 = 0;
  pdVar2 = adStack_f0;
  dStack_b0 = dVar8;
  do {
    lVar4 = 0;
    pdVar3 = adStack_a8;
    do {
      lVar6 = 0;
      dVar7 = 0.0;
      pdVar5 = pdVar3;
      do {
        dVar7 = dVar7 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
        lVar6 = lVar6 + 8;
        pdVar5 = pdVar5 + 3;
      } while (lVar6 != 0x18);
      adStack_138[lVar4 + lVar1 * 3] = dVar7;
      lVar4 = lVar4 + 1;
      pdVar3 = pdVar3 + 1;
    } while (lVar4 != 3);
    lVar1 = lVar1 + 1;
    pdVar2 = pdVar2 + 3;
  } while (lVar1 != 3);
  adStack_210[0x12] = adStack_138[8];
  uStack_178 = 0;
  dStack_170 = -adStack_138[2];
  uStack_168 = 0;
  dStack_160 = adStack_138[8];
  dStack_158 = -adStack_138[5];
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0x3ff0000000000000;
  if (param_3 != (undefined8 *)0x0) {
    lVar1 = 0;
    pdVar2 = adStack_210 + 0x12;
    do {
      lVar4 = 0;
      pdVar3 = adStack_138;
      do {
        lVar6 = 0;
        dVar7 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar7 = dVar7 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_210[lVar4 + lVar1 * 3 + 9] = dVar7;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    param_3[5] = adStack_210[0xe];
    param_3[4] = adStack_210[0xd];
    param_3[7] = adStack_210[0x10];
    param_3[6] = adStack_210[0xf];
    param_3[8] = adStack_210[0x11];
    param_3[1] = adStack_210[10];
    *param_3 = adStack_210[9];
    param_3[3] = adStack_210[0xc];
    param_3[2] = adStack_210[0xb];
  }
  if (param_4 != (double *)0x0) {
    lVar1 = 0;
    adStack_210[1] = 0.0;
    adStack_210[0] = 0.0;
    adStack_210[3] = 0.0;
    adStack_210[2] = 0.0;
    adStack_210[4] = dStack_70;
    adStack_210[5] = dVar9;
    adStack_210[6] = 0.0;
    pdVar2 = adStack_f0;
    adStack_210[7] = -dVar9;
    adStack_210[8] = dStack_70;
    do {
      lVar4 = 0;
      pdVar3 = adStack_210;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_210[lVar4 + lVar1 * 3 + 9] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    lVar1 = 0;
    adStack_210[0] = adStack_210[0x11];
    adStack_210[1] = 0.0;
    adStack_210[2] = -adStack_210[0xb];
    adStack_210[3] = 0.0;
    adStack_210[4] = adStack_210[0x11];
    adStack_210[5] = -adStack_210[0xe];
    adStack_210[7] = 0.0;
    adStack_210[8] = 0.0;
    adStack_210[6] = 0.0;
    pdVar2 = adStack_210 + 0x12;
    do {
      lVar4 = 0;
      pdVar3 = adStack_210 + 9;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_2a0[lVar4 + lVar1 * 3] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    lVar1 = 0;
    pdVar2 = adStack_210;
    do {
      lVar4 = 0;
      pdVar3 = adStack_138;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_2e8[lVar4 + lVar1 * 3] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    lVar1 = 0;
    do {
      *(double *)((long)adStack_258 + lVar1) =
           *(double *)((long)adStack_2a0 + lVar1) + *(double *)((long)adStack_2e8 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x48);
    param_4[5] = adStack_258[5];
    param_4[4] = adStack_258[4];
    param_4[7] = adStack_258[7];
    param_4[6] = adStack_258[6];
    param_4[8] = adStack_258[8];
    param_4[1] = adStack_258[1];
    *param_4 = adStack_258[0];
    param_4[3] = adStack_258[3];
    param_4[2] = adStack_258[2];
  }
  if (param_5 != (double *)0x0) {
    lVar1 = 0;
    adStack_210[0] = adStack_f0[2];
    adStack_210[1] = 0.0;
    adStack_210[2] = -dVar8;
    adStack_210[4] = 0.0;
    adStack_210[5] = 0.0;
    adStack_210[3] = 0.0;
    adStack_210[6] = dVar8;
    adStack_210[7] = 0.0;
    pdVar2 = adStack_210;
    adStack_210[8] = adStack_f0[2];
    do {
      lVar4 = 0;
      pdVar3 = adStack_a8;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_210[lVar4 + lVar1 * 3 + 9] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    lVar1 = 0;
    adStack_210[0] = adStack_210[0x11];
    adStack_210[1] = 0.0;
    adStack_210[2] = -adStack_210[0xb];
    adStack_210[3] = 0.0;
    adStack_210[4] = adStack_210[0x11];
    adStack_210[5] = -adStack_210[0xe];
    adStack_210[7] = 0.0;
    adStack_210[8] = 0.0;
    adStack_210[6] = 0.0;
    pdVar2 = adStack_210 + 0x12;
    do {
      lVar4 = 0;
      pdVar3 = adStack_210 + 9;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_2a0[lVar4 + lVar1 * 3] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    lVar1 = 0;
    pdVar2 = adStack_210;
    do {
      lVar4 = 0;
      pdVar3 = adStack_138;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_2e8[lVar4 + lVar1 * 3] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    lVar1 = 0;
    do {
      *(double *)((long)adStack_258 + lVar1) =
           *(double *)((long)adStack_2a0 + lVar1) + *(double *)((long)adStack_2e8 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x48);
    param_5[5] = adStack_258[5];
    param_5[4] = adStack_258[4];
    param_5[7] = adStack_258[7];
    param_5[6] = adStack_258[6];
    param_5[8] = adStack_258[8];
    param_5[1] = adStack_258[1];
    *param_5 = adStack_258[0];
    param_5[3] = adStack_258[3];
    param_5[2] = adStack_258[2];
  }
  if (param_6 != (double *)0x0) {
    lVar1 = 0;
    adStack_210[9] = 1.0 / adStack_138[8];
    adStack_210[10] = 0.0;
    adStack_210[0xb] = adStack_210[9] * adStack_138[2];
    adStack_210[0xc] = 0.0;
    adStack_210[0xd] = adStack_210[9];
    adStack_210[0xe] = adStack_210[9] * adStack_138[5];
    adStack_210[0xf] = 0.0;
    adStack_210[0x10] = 0.0;
    adStack_210[0x11] = 1.0;
    pdVar2 = adStack_258;
    pdVar3 = adStack_138;
    do {
      lVar4 = 0;
      pdVar5 = pdVar3;
      do {
        *(double *)((long)pdVar2 + lVar4) = *pdVar5;
        lVar4 = lVar4 + 8;
        pdVar5 = pdVar5 + 3;
      } while (lVar4 != 0x18);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
      pdVar3 = pdVar3 + 1;
    } while (lVar1 != 3);
    lVar1 = 0;
    pdVar2 = adStack_258;
    do {
      lVar4 = 0;
      pdVar3 = adStack_210 + 9;
      do {
        lVar6 = 0;
        dVar9 = 0.0;
        pdVar5 = pdVar3;
        do {
          dVar9 = dVar9 + *pdVar5 * *(double *)((long)pdVar2 + lVar6);
          lVar6 = lVar6 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar6 != 0x18);
        adStack_210[lVar4 + lVar1 * 3] = dVar9;
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 1;
      } while (lVar4 != 3);
      lVar1 = lVar1 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar1 != 3);
    param_6[5] = adStack_210[5];
    param_6[4] = adStack_210[4];
    param_6[7] = adStack_210[7];
    param_6[6] = adStack_210[6];
    param_6[8] = adStack_210[8];
    param_6[1] = adStack_210[1];
    *param_6 = adStack_210[0];
    param_6[3] = adStack_210[3];
    param_6[2] = adStack_210[2];
  }
  return;
}



/* Entry: 109b5ccb0; end: 109b5d5b7;  */

void FUN_109b5ccb0(uint *param_1,uint *param_2,undefined4 **param_3,undefined4 **param_4,
                  undefined4 **param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  double *pdVar9;
  code *pcVar10;
  undefined4 **ppuVar11;
  undefined4 **ppuVar12;
  undefined4 **ppuVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined4 **ppuVar17;
  long lVar18;
  uint *puVar19;
  undefined4 **ppuVar20;
  uint *puVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  double dVar32;
  undefined4 *puVar33;
  double dVar34;
  undefined4 *puVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  uint uStack_650;
  undefined4 uStack_64c;
  undefined8 uStack_648;
  undefined4 uStack_640;
  ulong uStack_638;
  int iStack_630;
  int iStack_62c;
  uint uStack_628;
  undefined4 uStack_624;
  undefined8 uStack_620;
  undefined4 uStack_618;
  ulong uStack_610;
  int iStack_608;
  int iStack_604;
  uint uStack_600;
  undefined4 uStack_5fc;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  ulong uStack_5e8;
  int iStack_5e0;
  int iStack_5dc;
  uint uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  ulong uStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  uint uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  ulong uStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  uint uStack_588;
  undefined4 uStack_584;
  undefined8 uStack_580;
  undefined4 uStack_578;
  ulong uStack_570;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  int *piStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  int *piStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  int *piStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  double *pdStack_320;
  ulong uStack_318;
  undefined4 **ppuStack_310;
  uint *puStack_308;
  uint *puStack_300;
  undefined4 **ppuStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined4 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 **ppuStack_2b0;
  undefined8 uStack_2a8;
  double adStack_2a0 [5];
  undefined4 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 *puStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  double *pdStack_218;
  undefined8 uStack_210;
  uint uStack_208;
  int iStack_204;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  double *pdStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  double *pdStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double adStack_b0 [2];
  double dStack_a0;
  double dStack_90;
  double dStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_118 = 0.0;
  dStack_120 = 0.0;
  dStack_108 = 0.0;
  dStack_110 = 0.0;
  dStack_138 = 0.0;
  dStack_140 = 0.0;
  dStack_128 = 0.0;
  dStack_130 = 0.0;
  dStack_158 = 0.0;
  dStack_160 = 0.0;
  dStack_148 = 0.0;
  dStack_150 = 0.0;
  dStack_168 = 0.0;
  dStack_170 = 0.0;
  uStack_1c0 = 0x300000003;
  puStack_1e0 = (undefined4 *)0x1842424006;
  pdStack_1c8 = adStack_b0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_210 = 0x300000003;
  puStack_230 = (undefined4 *)0x1842424006;
  pdStack_218 = &dStack_f8;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  puStack_278 = (undefined4 *)0x3ff0000000000000;
  uStack_258 = 0x3ff0000000000000;
  uStack_240 = 0;
  uStack_238 = 0x3ff0000000000000;
  if ((((((param_1 == (uint *)0x0) || (*param_1 >> 0x10 != 0x4242)) ||
        (uVar2 = param_1[9], (int)uVar2 < 1)) ||
       (((uVar3 = param_1[8], (int)uVar3 < 1 || (param_2 == (uint *)0x0)) ||
        ((*(long *)(param_1 + 6) == 0 ||
         ((*param_2 >> 0x10 != 0x4242 || (uVar4 = param_2[9], (int)uVar4 < 1)))))))) ||
      ((uVar5 = param_2[8], (int)uVar5 < 1 ||
       ((*(long *)(param_2 + 6) == 0 || ((uVar2 != 1 && (uVar3 != 1)))))))) ||
     (((uVar4 != 1 && (uVar5 != 1)) ||
      (((uVar3 + uVar2 != uVar5 + uVar4 || (1 < (*param_1 & 0xfff) - 0xd)) ||
       (1 < (*param_2 & 0xfff) - 0xd)))))) {
    puVar33 = (undefined4 *)0x158;
    func_0x000107c2ae8c();
    puStack_1b8 = puVar33 + 1;
    *puVar33 = 1;
    dStack_1b0 = 1.66006057002659e-321;
    *(undefined1 *)(puVar33 + 0x55) = 0;
    _memcpy(puStack_1b8,&UNK_10f59e91a,0x150);
    FUN_109ac3188(0xffffff29,&puStack_1b8,&UNK_10f59ea6b,&UNK_10f59e896,0x12a);
    goto LAB_109b5d50c;
  }
  if (((param_3 == (undefined4 **)0x0) || (*(short *)((long)param_3 + 2) != 0x4242)) ||
     (((((int)*(uint *)((long)param_3 + 0x24) < 1 ||
        (((int)*(uint *)(param_3 + 4) < 1 || (*(uint *)((long)param_3 + 0x24) != 3)))) ||
       (*(uint *)(param_3 + 4) != 3)) || (param_3[3] == (undefined4 *)0x0)))) {
    puVar33 = (undefined4 *)0x58;
    func_0x000107c2ae8c();
    *puVar33 = 1;
    puStack_1b8 = puVar33 + 1;
    dStack_1b0 = 3.95252516672997e-322;
    *(undefined8 *)(puVar33 + 7) = 0x6d61635f20262620;
    *(undefined8 *)(puVar33 + 5) = 0x2978697274614d61;
    *(undefined8 *)(puVar33 + 0xb) = 0x2073776f723e2d78;
    *(undefined8 *)(puVar33 + 9) = 0x697274614d617265;
    *(undefined8 *)(puVar33 + 0xf) = 0x4d6172656d61635f;
    *(undefined8 *)(puVar33 + 0xd) = 0x2026262033203d3d;
    *(undefined8 *)(puVar33 + 0x13) = 0x33203d3d20736c6f;
    *(undefined8 *)(puVar33 + 0x11) = 0x633e2d7869727461;
    *(undefined1 *)(puVar33 + 0x15) = 0;
    *(undefined8 *)(puVar33 + 3) = 0x72656d61635f2854;
    *(undefined8 *)(puVar33 + 1) = 0x414d5f53495f5643;
    FUN_109ac3188(0xffffff29,&puStack_1b8,&UNK_10f59ea6b,&UNK_10f59e896,0x12d);
    goto LAB_109b5d50c;
  }
  ppuVar13 = &puStack_1e0;
  ppuVar17 = param_4;
  ppuVar20 = param_5;
  puVar21 = param_6;
  FUN_109a42cd4(0x3ff0000000000000,0,param_3);
  if (param_4 == (undefined4 **)0x0) {
    uVar29 = 1;
    if (param_5 != (undefined4 **)0x0) goto LAB_109b5cf48;
LAB_109b5cfa8:
    ppuVar11 = &puStack_230;
    FUN_109a9a630(0x3ff0000000000000,0,0,0);
  }
  else {
    if ((((((*(uint *)param_4 >> 0x10 != 0x4242) ||
           (uVar2 = *(uint *)((long)param_4 + 0x24), (int)uVar2 < 1)) ||
          (uVar3 = *(uint *)(param_4 + 4), (int)uVar3 < 1)) || (param_4[3] == (undefined4 *)0x0)) ||
        ((uVar2 != 1 && (uVar3 != 1)))) ||
       ((0xe < uVar3 * uVar2 || ((1 << (ulong)(uVar3 * uVar2 & 0x1f) & 0x5130U) == 0)))) {
      puVar33 = (undefined4 *)0x134;
      func_0x000107c2ae8c();
      puStack_1b8 = puVar33 + 1;
      *puVar33 = 1;
      dStack_1b0 = 1.48219693752374e-321;
      *(undefined1 *)(puVar33 + 0x4c) = 0;
      _memcpy(puStack_1b8,&UNK_10f59eace,300);
      FUN_109ac3188(0xffffff29,&puStack_1b8,&UNK_10f59ea6b,&UNK_10f59e896,0x139);
      goto LAB_109b5d50c;
    }
    uVar4 = *(uint *)param_4 & 0xff8;
    uStack_208 = uVar4 | 0x42424006;
    iStack_204 = uVar2 * (uVar4 + 8);
    uStack_200 = 0;
    uStack_1f8 = 0;
    pdStack_1f0 = &dStack_170;
    ppuVar13 = (undefined4 **)&uStack_208;
    uStack_1e8 = uVar3;
    uStack_1e4 = uVar2;
    FUN_109a42cd4(0x3ff0000000000000,0,param_4);
    if ((dStack_110 != 0.0) || (dStack_108 != 0.0)) {
      ppuVar17 = &puStack_278;
      ppuVar13 = (undefined4 **)0x0;
      param_3 = (undefined4 **)0x0;
      FUN_109b5c64c(0);
    }
    uVar29 = 5;
    if (param_5 == (undefined4 **)0x0) goto LAB_109b5cfa8;
LAB_109b5cf48:
    if ((((*(short *)((long)param_5 + 2) != 0x4242) || ((int)*(uint *)((long)param_5 + 0x24) < 1))
        || ((int)*(uint *)(param_5 + 4) < 1)) ||
       (((*(uint *)((long)param_5 + 0x24) != 3 || (*(uint *)(param_5 + 4) != 3)) ||
        (param_5[3] == (undefined4 *)0x0)))) {
      puVar33 = (undefined4 *)0x3c;
      func_0x000107c2ae8c();
      *puVar33 = 1;
      puStack_1b8 = puVar33 + 1;
      dStack_1b0 = 2.61854792295861e-322;
      *(undefined8 *)(puVar33 + 3) = 0x20295274616d2854;
      *(undefined8 *)(puVar33 + 1) = 0x414d5f53495f5643;
      *(undefined1 *)((long)puVar33 + 0x39) = 0;
      *(undefined8 *)(puVar33 + 7) = 0x3d3d2073776f723e;
      *(undefined8 *)(puVar33 + 5) = 0x2d5274616d202626;
      *(undefined8 *)(puVar33 + 0xb) = 0x736c6f633e2d5274;
      *(undefined8 *)(puVar33 + 9) = 0x616d202626203320;
      *(undefined8 *)((long)puVar33 + 0x31) = 0x33203d3d20736c6f;
      FUN_109ac3188(0xffffff29,&puStack_1b8,&UNK_10f59ea6b,&UNK_10f59e896,0x146);
      goto LAB_109b5d50c;
    }
    ppuVar13 = &puStack_230;
    ppuVar11 = param_5;
    FUN_109a42cd4(0x3ff0000000000000,0);
  }
  if (param_6 != (uint *)0x0) {
    uStack_2a8 = 0x300000003;
    puStack_2c8 = (undefined4 *)0x1842424006;
    ppuStack_2b0 = &puStack_1b8;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    if (((*(short *)((long)param_6 + 2) != 0x4242) || ((int)param_6[9] < 1)) ||
       (((int)param_6[8] < 1 ||
        (((1 < param_6[9] - 3 || (param_6[8] != 3)) || (*(long *)(param_6 + 6) == 0)))))) {
      puVar33 = (undefined4 *)0x50;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar33 + 7) = 0x3d3d2073776f723e;
      *(undefined8 *)(puVar33 + 5) = 0x2d5074616d202626;
      *(undefined8 *)(puVar33 + 0xb) = 0x6c6f633e2d507461;
      *(undefined8 *)(puVar33 + 9) = 0x6d28202626203320;
      *(undefined8 *)(puVar33 + 0xf) = 0x3e2d5074616d207c;
      *(undefined8 *)(puVar33 + 0xd) = 0x7c2033203d3d2073;
      *(undefined8 *)((long)puVar33 + 0x46) = 0x2934203d3d20736c;
      *(undefined8 *)((long)puVar33 + 0x3e) = 0x6f633e2d5074616d;
      *puVar33 = 1;
      puStack_2d8 = puVar33 + 1;
      uStack_2d0 = 0x4a;
      *(undefined1 *)((long)puVar33 + 0x4e) = 0;
      *(undefined8 *)(puVar33 + 3) = 0x20295074616d2854;
      *(undefined8 *)(puVar33 + 1) = 0x414d5f53495f5643;
      FUN_109ac3188(0xffffff29,&puStack_2d8,&UNK_10f59ea6b,&UNK_10f59e896,0x150);
LAB_109b5d50c:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x109b5d510);
      (*pcVar10)();
    }
    FUN_109a3bf58(param_6,adStack_2a0,0,3);
    FUN_109a42cd4(0x3ff0000000000000,0);
    ppuVar11 = &puStack_2c8;
    ppuVar13 = &puStack_230;
    ppuVar17 = &puStack_230;
    param_3 = (undefined4 **)0x0;
    ppuVar20 = (undefined4 **)0x0;
    FUN_109a73754(0x3ff0000000000000,0x3ff0000000000000);
  }
  uVar2 = *param_1;
  if (param_1[8] == 1) {
    lVar23 = 1;
  }
  else {
    iVar1 = (uVar2 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar2 & 7) << 1) & 3);
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = (int)param_1[1] / iVar1;
    }
    lVar23 = (long)iVar6;
  }
  uVar3 = *param_2;
  if (param_2[8] == 1) {
    lVar24 = 1;
  }
  else {
    iVar1 = (uVar3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar3 & 7) << 1) & 3);
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = (int)param_2[1] / iVar1;
    }
    lVar24 = (long)iVar6;
  }
  uVar4 = (param_1[8] + param_1[9]) - 1;
  if (0 < (int)uVar4) {
    uVar25 = 0;
    lVar27 = *(long *)(param_1 + 6);
    lVar28 = *(long *)(param_2 + 6);
    auVar30 = NEON_fmov(0x3ff0000000000000,8);
    ppuVar11 = &puStack_1b8;
    do {
      if ((uVar2 & 0xfff) == 0xd) {
        uVar31 = *(undefined8 *)(lVar27 + uVar25 * lVar23 * 8);
        dVar32 = (double)(float)uVar31;
        dVar34 = (double)(float)((ulong)uVar31 >> 0x20);
      }
      else {
        pdVar9 = (double *)(lVar27 + uVar25 * lVar23 * 0x10);
        dVar34 = pdVar9[1];
        dVar32 = *pdVar9;
      }
      lVar14 = 0;
      adStack_2a0[1] = (auVar30._8_8_ / dStack_90) * (dVar34 - dStack_88);
      adStack_2a0[0] = (auVar30._0_8_ / adStack_b0[0]) * (dVar32 - dStack_a0);
      adStack_2a0[2] = 1.0;
      param_3 = &puStack_278;
      do {
        lVar18 = 0;
        puVar33 = (undefined4 *)0x0;
        do {
          puVar33 = (undefined4 *)
                    ((double)puVar33 +
                    *(double *)((long)adStack_2a0 + lVar18) * *(double *)((long)param_3 + lVar18));
          lVar18 = lVar18 + 8;
        } while (lVar18 != 0x18);
        ppuVar11[lVar14] = puVar33;
        lVar14 = lVar14 + 1;
        param_3 = param_3 + 3;
      } while (lVar14 != 3);
      dVar32 = 1.0 / dStack_1a8;
      if (dStack_1a8 == 0.0) {
        dVar32 = 1.0;
      }
      uVar15 = uVar29;
      dVar34 = (double)puStack_1b8 * dVar32;
      dVar37 = dStack_1b0 * dVar32;
      do {
        dVar38 = dVar37 * dVar37 + dVar34 * dVar34;
        dVar39 = (dVar38 * (dStack_148 + dVar38 * (dStack_140 + dVar38 * dStack_138)) + 1.0) /
                 (dVar38 * (dStack_170 + dVar38 * (dStack_168 + dVar38 * dStack_150)) + 1.0);
        dVar36 = (dStack_158 + dStack_158) * dVar34;
        dVar34 = dVar39 * ((double)puStack_1b8 * dVar32 -
                          (dStack_158 * (dVar38 + dVar34 * (dVar34 + dVar34)) +
                           dVar37 * (dStack_160 + dStack_160) * dVar34 + dVar38 * dStack_130 +
                          dVar38 * dStack_128 * dVar38));
        dVar37 = dVar39 * (dStack_1b0 * dVar32 -
                          (dVar37 * dVar36 + (dVar38 + dVar37 * (dVar37 + dVar37)) * dStack_160 +
                           dVar38 * dStack_120 + dVar38 * dStack_118 * dVar38));
        uVar5 = (int)uVar15 - 1;
        uVar15 = (ulong)uVar5;
      } while (uVar5 != 0);
      dVar32 = 1.0 / (dStack_b8 + dVar37 * dStack_c0 + dVar34 * dStack_c8);
      puVar35 = (undefined4 *)((dStack_e8 + dVar37 * dStack_f0 + dVar34 * dStack_f8) * dVar32);
      puVar33 = (undefined4 *)((dStack_d0 + dVar37 * dStack_d8 + dVar34 * dStack_e0) * dVar32);
      if ((uVar3 & 0xfff) == 0xd) {
        ppuVar13 = (undefined4 **)(lVar28 + uVar25 * lVar24 * 8);
        *(float *)ppuVar13 = (float)(double)puVar35;
        *(float *)((long)ppuVar13 + 4) = (float)(double)puVar33;
      }
      else {
        ppuVar13 = (undefined4 **)(lVar28 + uVar25 * lVar24 * 0x10);
        *ppuVar13 = puVar35;
        ppuVar13[1] = puVar33;
      }
      uVar25 = uVar25 + 1;
      ppuVar17 = (undefined4 **)0x18;
    } while (uVar25 != uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_2d8 = (undefined4 *)0x0;
  uStack_2d0 = 0;
  do {
    uVar2 = *param_1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar8) {
      *param_1 = uVar2 - 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (uVar2 - 1 == 0) {
    _free(*(undefined8 *)(param_1 + -2));
  }
  ppuVar12 = ppuVar11;
  __Unwind_Resume();
  pdStack_320 = &dStack_170;
  uStack_318 = uVar29;
  ppuStack_310 = param_5;
  puStack_308 = param_6;
  puStack_300 = param_1;
  ppuStack_2f8 = ppuVar11;
  puStack_2f0 = &stack0xfffffffffffffff0;
  pcStack_2e8 = FUN_109b5d5b8;
  puVar19 = &uStack_650;
  if (((ulong)*ppuVar12 & 0x1f0000) == 0x10000) {
    puVar16 = (ulong *)ppuVar12[1];
    uStack_380 = *puVar16;
    uStack_378 = puVar16[1];
    uStack_368 = puVar16[3];
    uStack_370 = puVar16[2];
    uStack_358 = puVar16[5];
    uStack_360 = puVar16[4];
    uStack_348 = puVar16[7];
    uStack_350 = puVar16[6];
    puStack_340 = (undefined8 *)((ulong)&uStack_380 | 8);
    puStack_338 = &uStack_330;
    uStack_330 = 0;
    uStack_328 = 0;
    if (puVar16[7] != 0) {
      piVar26 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar8) {
          *piVar26 = *piVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_330 = *(undefined8 *)puVar16[9];
      uStack_328 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_380 = uStack_380 & 0xffffffff;
      func_0x000109a84868(&uStack_380);
    }
  }
  else {
    FUN_109a8a180(&uStack_380);
  }
  if (((ulong)*param_3 & 0x1f0000) == 0x10000) {
    puVar16 = (ulong *)param_3[1];
    uStack_3e0 = *puVar16;
    uStack_3d8 = puVar16[1];
    uStack_3c8 = puVar16[3];
    uStack_3d0 = puVar16[2];
    uStack_3b8 = puVar16[5];
    uStack_3c0 = puVar16[4];
    uStack_3a8 = puVar16[7];
    uStack_3b0 = puVar16[6];
    uStack_3a0 = (ulong)&uStack_3e0 | 8;
    puStack_398 = &uStack_390;
    uStack_390 = 0;
    uStack_388 = 0;
    if (puVar16[7] != 0) {
      piVar26 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar8) {
          *piVar26 = *piVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_390 = *(undefined8 *)puVar16[9];
      uStack_388 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_3e0 = uStack_3e0 & 0xffffffff;
      func_0x000109a84868(&uStack_3e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_3e0,param_3,0xffffffff);
  }
  if (((ulong)*ppuVar17 & 0x1f0000) == 0x10000) {
    puVar16 = (ulong *)ppuVar17[1];
    piStack_400 = (int *)((ulong)&uStack_440 | 8);
    uStack_438 = puVar16[1];
    uStack_440 = *puVar16;
    uStack_428 = puVar16[3];
    uStack_430 = puVar16[2];
    uStack_418 = puVar16[5];
    uStack_420 = puVar16[4];
    uStack_408 = puVar16[7];
    uStack_410 = puVar16[6];
    puStack_3f8 = &uStack_3f0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    if (puVar16[7] != 0) {
      piVar26 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar8) {
          *piVar26 = *piVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_3f0 = *(undefined8 *)puVar16[9];
      uStack_3e8 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_440 = uStack_440 & 0xffffffff;
      func_0x000109a84868(&uStack_440);
    }
  }
  else {
    FUN_109a8a180(&uStack_440,ppuVar17,0xffffffff);
  }
  if (((ulong)*ppuVar20 & 0x1f0000) == 0x10000) {
    puVar16 = (ulong *)ppuVar20[1];
    piStack_460 = (int *)((ulong)&uStack_4a0 | 8);
    uStack_498 = puVar16[1];
    uStack_4a0 = *puVar16;
    uStack_488 = puVar16[3];
    uStack_490 = puVar16[2];
    uStack_478 = puVar16[5];
    uStack_480 = puVar16[4];
    uStack_468 = puVar16[7];
    uStack_470 = puVar16[6];
    puStack_458 = &uStack_450;
    uStack_448 = 0;
    uStack_450 = 0;
    if (puVar16[7] != 0) {
      piVar26 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar8) {
          *piVar26 = *piVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_450 = *(undefined8 *)puVar16[9];
      uStack_448 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_4a0 = uStack_4a0 & 0xffffffff;
      func_0x000109a84868(&uStack_4a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_4a0,ppuVar20,0xffffffff);
  }
  if ((*puVar21 & 0x1f0000) == 0x10000) {
    puVar16 = *(ulong **)(puVar21 + 2);
    piStack_4c0 = (int *)((ulong)&uStack_500 | 8);
    uStack_4f8 = puVar16[1];
    uStack_500 = *puVar16;
    uStack_4e8 = puVar16[3];
    uStack_4f0 = puVar16[2];
    uStack_4d8 = puVar16[5];
    uStack_4e0 = puVar16[4];
    uStack_4c8 = puVar16[7];
    uStack_4d0 = puVar16[6];
    puStack_4b8 = &uStack_4b0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    if (puVar16[7] != 0) {
      piVar26 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar8) {
          *piVar26 = *piVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_4b0 = *(undefined8 *)puVar16[9];
      uStack_4a8 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_500 = uStack_500 & 0xffffffff;
      func_0x000109a84868(&uStack_500);
    }
  }
  else {
    FUN_109a8a180(&uStack_500,puVar21,0xffffffff);
  }
  if (((((uint)uStack_380 >> 0xe & 1) == 0) || (1 < ((uint)uStack_380 & 7) - 5)) ||
     (((((uint)uStack_380 & 0xff8) != 8 || ((int)uStack_378 != 1)) &&
      (uStack_378._4_4_ + uStack_378._4_4_ * ((uint)uStack_380 >> 3 & 0x1ff) != 2)))) {
    puVar33 = (undefined4 *)0x98;
    func_0x000107c2ae8c();
    *puVar33 = 1;
    uStack_560 = puVar33 + 1;
    uStack_558 = 0x92;
    *(undefined8 *)(puVar33 + 0x17) = 0x6372732026262031;
    *(undefined8 *)(puVar33 + 0x15) = 0x203d3d2073776f72;
    *(undefined8 *)(puVar33 + 0x1b) = 0x32203d3d20292873;
    *(undefined8 *)(puVar33 + 0x19) = 0x6c656e6e6168632e;
    *(undefined8 *)(puVar33 + 0x1f) = 0x72732a736c6f632e;
    *(undefined8 *)(puVar33 + 0x1d) = 0x637273207c7c2029;
    *(undefined8 *)(puVar33 + 0x23) = 0x203d3d202928736c;
    *(undefined8 *)(puVar33 + 0x21) = 0x656e6e6168632e63;
    *(undefined8 *)(puVar33 + 7) = 0x68747065642e6372;
    *(undefined8 *)(puVar33 + 5) = 0x7328202626202928;
    *(undefined8 *)(puVar33 + 0xb) = 0x207c7c204632335f;
    *(undefined8 *)(puVar33 + 9) = 0x5643203d3d202928;
    *(undefined8 *)(puVar33 + 0xf) = 0x43203d3d20292868;
    *(undefined8 *)(puVar33 + 0xd) = 0x747065642e637273;
    *(undefined8 *)(puVar33 + 0x13) = 0x2e63727328282026;
    *(undefined8 *)(puVar33 + 0x11) = 0x2620294634365f56;
    *(undefined1 *)((long)puVar33 + 0x96) = 0;
    *(undefined2 *)(puVar33 + 0x25) = 0x2932;
    *(undefined8 *)(puVar33 + 3) = 0x73756f756e69746e;
    *(undefined8 *)(puVar33 + 1) = 0x6f4373692e637273;
    FUN_109ac3188(0xffffff29,&uStack_560,&UNK_10f59ed0f,&UNK_10f59e896,0x1a7);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109b5e01c);
    (*pcVar10)();
  }
  uStack_560 = (undefined4 *)NEON_rev64(*puStack_340,4);
  FUN_109a8ee3c(ppuVar13,&uStack_560,(uint)uStack_380 & 0xfff,0xffffffff,1,0);
  if (((ulong)*ppuVar13 & 0x1f0000) == 0x10000) {
    puVar16 = (ulong *)ppuVar13[1];
    uStack_520 = (ulong)&uStack_560 | 8;
    uStack_558 = puVar16[1];
    uStack_560 = (undefined4 *)*puVar16;
    uStack_548 = puVar16[3];
    uStack_550 = puVar16[2];
    uStack_538 = puVar16[5];
    uStack_540 = puVar16[4];
    uStack_528 = puVar16[7];
    uStack_530 = puVar16[6];
    puStack_518 = &uStack_510;
    uStack_510 = 0;
    uStack_508 = 0;
    if (puVar16[7] != 0) {
      piVar26 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar8) {
          *piVar26 = *piVar26 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_510 = *(undefined8 *)puVar16[9];
      uStack_508 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_560 = (undefined4 *)((ulong)uStack_560 & 0xffffffff);
      func_0x000109a84868(&uStack_560);
    }
  }
  else {
    FUN_109a8a180(&uStack_560,ppuVar13,0xffffffff);
  }
  uStack_564 = uStack_378._4_4_;
  if (uStack_380._4_4_ == 1) {
    uStack_564 = 1;
  }
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = uStack_370;
  uStack_568 = (int)uStack_378;
  uStack_588 = (uint)uStack_380 & 0x4fff | 0x42420000;
  uStack_584 = (undefined4)*puStack_338;
  uStack_598 = uStack_550;
  uStack_58c = uStack_558._4_4_;
  if (uStack_560._4_4_ == 1) {
    uStack_58c = 1;
  }
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_590 = (undefined4)uStack_558;
  uStack_5b0 = (uint)uStack_560 & 0x4fff | 0x42420000;
  uStack_5ac = (undefined4)*puStack_518;
  uStack_5c0 = uStack_3d0;
  uStack_5b4 = uStack_3d8._4_4_;
  if (uStack_3e0._4_4_ == 1) {
    uStack_5b4 = 1;
  }
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_5b8 = (undefined4)uStack_3d8;
  uStack_5d8 = (uint)uStack_3e0 & 0x4fff | 0x42420000;
  uStack_5d4 = (undefined4)*puStack_398;
  if (uStack_490 == 0) {
LAB_109b5db40:
    puVar21 = (uint *)0x0;
  }
  else {
    uVar29 = (ulong)uStack_4a0._4_4_;
    if ((int)uStack_4a0._4_4_ < 3) {
      lVar23 = (long)uStack_498._4_4_ * (long)(int)uStack_498;
    }
    else {
      lVar23 = 1;
      piVar26 = piStack_460;
      do {
        lVar23 = lVar23 * *piVar26;
        uVar29 = uVar29 - 1;
        piVar26 = piVar26 + 1;
      } while (uVar29 != 0);
    }
    if (lVar23 == 0) goto LAB_109b5db40;
    iStack_5dc = uStack_498._4_4_;
    if (uStack_4a0._4_4_ == 1) {
      iStack_5dc = 1;
    }
    uStack_600 = (uint)uStack_4a0 & 0x4fff | 0x42420000;
    uStack_5fc = (undefined4)*puStack_458;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = uStack_490;
    iStack_5e0 = (int)uStack_498;
    puVar21 = &uStack_600;
  }
  if (uStack_4f0 == 0) {
LAB_109b5dbd0:
    puVar22 = (uint *)0x0;
  }
  else {
    uVar29 = (ulong)uStack_500._4_4_;
    if ((int)uStack_500._4_4_ < 3) {
      lVar23 = (long)uStack_4f8._4_4_ * (long)(int)uStack_4f8;
    }
    else {
      lVar23 = 1;
      piVar26 = piStack_4c0;
      do {
        lVar23 = lVar23 * *piVar26;
        uVar29 = uVar29 - 1;
        piVar26 = piVar26 + 1;
      } while (uVar29 != 0);
    }
    if (lVar23 == 0) goto LAB_109b5dbd0;
    iStack_604 = uStack_4f8._4_4_;
    if (uStack_500._4_4_ == 1) {
      iStack_604 = 1;
    }
    uStack_628 = (uint)uStack_500 & 0x4fff | 0x42420000;
    uStack_624 = (undefined4)*puStack_4b8;
    uStack_620 = 0;
    uStack_618 = 0;
    uStack_610 = uStack_4f0;
    iStack_608 = (int)uStack_4f8;
    puVar22 = &uStack_628;
  }
  if (uStack_430 != 0) {
    uVar29 = (ulong)uStack_440._4_4_;
    if ((int)uStack_440._4_4_ < 3) {
      lVar23 = (long)uStack_438._4_4_ * (long)(int)uStack_438;
    }
    else {
      lVar23 = 1;
      piVar26 = piStack_400;
      do {
        lVar23 = lVar23 * *piVar26;
        uVar29 = uVar29 - 1;
        piVar26 = piVar26 + 1;
      } while (uVar29 != 0);
    }
    if (lVar23 != 0) {
      iStack_62c = uStack_438._4_4_;
      if (uStack_440._4_4_ == 1) {
        iStack_62c = 1;
      }
      uStack_650 = (uint)uStack_440 & 0x4fff | 0x42420000;
      uStack_64c = (undefined4)*puStack_3f8;
      uStack_648 = 0;
      uStack_640 = 0;
      uStack_638 = uStack_430;
      iStack_630 = (int)uStack_438;
      goto LAB_109b5dc64;
    }
  }
  puVar19 = (uint *)0x0;
LAB_109b5dc64:
  FUN_109b5ccb0(&uStack_588,&uStack_5b0,&uStack_5d8,puVar19,puVar21,puVar22);
  if (uStack_528 != 0) {
    piVar26 = (int *)(uStack_528 + 0x14);
    do {
      iVar1 = *piVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar8) {
        *piVar26 = iVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_560);
    }
  }
  uStack_528 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  if (0 < uStack_560._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_520 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_560._4_4_);
  }
  if (puStack_518 != &uStack_510 && puStack_518 != (undefined8 *)0x0) {
    _free(puStack_518[-1]);
  }
  if (uStack_4c8 != 0) {
    piVar26 = (int *)(uStack_4c8 + 0x14);
    do {
      iVar1 = *piVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar8) {
        *piVar26 = iVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_500);
    }
  }
  uStack_4c8 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  if (0 < (int)uStack_500._4_4_) {
    lVar23 = 0;
    do {
      piStack_4c0[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_500._4_4_);
  }
  if (puStack_4b8 != &uStack_4b0 && puStack_4b8 != (undefined8 *)0x0) {
    _free(puStack_4b8[-1]);
  }
  if (uStack_468 != 0) {
    piVar26 = (int *)(uStack_468 + 0x14);
    do {
      iVar1 = *piVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar8) {
        *piVar26 = iVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_4a0);
    }
  }
  uStack_468 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  if (0 < (int)uStack_4a0._4_4_) {
    lVar23 = 0;
    do {
      piStack_460[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_4a0._4_4_);
  }
  if (puStack_458 != &uStack_450 && puStack_458 != (undefined8 *)0x0) {
    _free(puStack_458[-1]);
  }
  if (uStack_408 != 0) {
    piVar26 = (int *)(uStack_408 + 0x14);
    do {
      iVar1 = *piVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar8) {
        *piVar26 = iVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_440);
    }
  }
  uStack_408 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  if (0 < (int)uStack_440._4_4_) {
    lVar23 = 0;
    do {
      piStack_400[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_440._4_4_);
  }
  if (puStack_3f8 != &uStack_3f0 && puStack_3f8 != (undefined8 *)0x0) {
    _free(puStack_3f8[-1]);
  }
  if (uStack_3a8 != 0) {
    piVar26 = (int *)(uStack_3a8 + 0x14);
    do {
      iVar1 = *piVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar8) {
        *piVar26 = iVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_3e0);
    }
  }
  uStack_3a8 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  if (0 < uStack_3e0._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(uStack_3a0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_3e0._4_4_);
  }
  if (puStack_398 != &uStack_390 && puStack_398 != (undefined8 *)0x0) {
    _free(puStack_398[-1]);
  }
  if (uStack_348 != 0) {
    piVar26 = (int *)(uStack_348 + 0x14);
    do {
      iVar1 = *piVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar8) {
        *piVar26 = iVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_380);
    }
  }
  uStack_348 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  if (0 < uStack_380._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)((long)puStack_340 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_380._4_4_);
  }
  if (puStack_338 != &uStack_330 && puStack_338 != (undefined8 *)0x0) {
    _free(puStack_338[-1]);
  }
  return;
}



/* Entry: 109b5d5b8; end: 109b5e0c7;  */

void FUN_109b5d5b8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  uint uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined4 uStack_360;
  ulong uStack_358;
  int iStack_350;
  int iStack_34c;
  uint uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  ulong uStack_330;
  int iStack_328;
  int iStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  ulong uStack_308;
  int iStack_300;
  int iStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  ulong uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  ulong uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  ulong uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  int *piStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  int *piStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  int *piStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = &uStack_370;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_1 + 2);
    puStack_60 = (undefined8 *)((ulong)&uStack_a0 | 8);
    uStack_98 = puVar6[1];
    uStack_a0 = *puVar6;
    uStack_88 = puVar6[3];
    uStack_90 = puVar6[2];
    uStack_78 = puVar6[5];
    uStack_80 = puVar6[4];
    uStack_68 = puVar6[7];
    uStack_70 = puVar6[6];
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    if (puVar6[7] != 0) {
      piVar12 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_50 = *(undefined8 *)puVar6[9];
      uStack_48 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_a0 = uStack_a0 & 0xffffffff;
      func_0x000109a84868(&uStack_a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_a0,param_1,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_3 + 2);
    uStack_c0 = (ulong)&uStack_100 | 8;
    uStack_f8 = puVar6[1];
    uStack_100 = *puVar6;
    uStack_e8 = puVar6[3];
    uStack_f0 = puVar6[2];
    uStack_d8 = puVar6[5];
    uStack_e0 = puVar6[4];
    uStack_c8 = puVar6[7];
    uStack_d0 = puVar6[6];
    puStack_b8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (puVar6[7] != 0) {
      piVar12 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_b0 = *(undefined8 *)puVar6[9];
      uStack_a8 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_100 = uStack_100 & 0xffffffff;
      func_0x000109a84868(&uStack_100);
    }
  }
  else {
    FUN_109a8a180(&uStack_100,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_4 + 2);
    piStack_120 = (int *)((ulong)&uStack_160 | 8);
    uStack_158 = puVar6[1];
    uStack_160 = *puVar6;
    uStack_148 = puVar6[3];
    uStack_150 = puVar6[2];
    uStack_138 = puVar6[5];
    uStack_140 = puVar6[4];
    uStack_128 = puVar6[7];
    uStack_130 = puVar6[6];
    puStack_118 = &uStack_110;
    uStack_108 = 0;
    uStack_110 = 0;
    if (puVar6[7] != 0) {
      piVar12 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_110 = *(undefined8 *)puVar6[9];
      uStack_108 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_160 = uStack_160 & 0xffffffff;
      func_0x000109a84868(&uStack_160);
    }
  }
  else {
    FUN_109a8a180(&uStack_160,param_4,0xffffffff);
  }
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_5 + 2);
    piStack_180 = (int *)((ulong)&uStack_1c0 | 8);
    uStack_1b8 = puVar6[1];
    uStack_1c0 = *puVar6;
    uStack_1a8 = puVar6[3];
    uStack_1b0 = puVar6[2];
    uStack_198 = puVar6[5];
    uStack_1a0 = puVar6[4];
    uStack_188 = puVar6[7];
    uStack_190 = puVar6[6];
    puStack_178 = &uStack_170;
    uStack_168 = 0;
    uStack_170 = 0;
    if (puVar6[7] != 0) {
      piVar12 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_170 = *(undefined8 *)puVar6[9];
      uStack_168 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_1c0 = uStack_1c0 & 0xffffffff;
      func_0x000109a84868(&uStack_1c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1c0,param_5,0xffffffff);
  }
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_6 + 2);
    piStack_1e0 = (int *)((ulong)&uStack_220 | 8);
    uStack_218 = puVar6[1];
    uStack_220 = *puVar6;
    uStack_208 = puVar6[3];
    uStack_210 = puVar6[2];
    uStack_1f8 = puVar6[5];
    uStack_200 = puVar6[4];
    uStack_1e8 = puVar6[7];
    uStack_1f0 = puVar6[6];
    puStack_1d8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    if (puVar6[7] != 0) {
      piVar12 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_1d0 = *(undefined8 *)puVar6[9];
      uStack_1c8 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_220 = uStack_220 & 0xffffffff;
      func_0x000109a84868(&uStack_220);
    }
  }
  else {
    FUN_109a8a180(&uStack_220,param_6,0xffffffff);
  }
  if (((((uint)uStack_a0 >> 0xe & 1) == 0) || (1 < ((uint)uStack_a0 & 7) - 5)) ||
     (((((uint)uStack_a0 & 0xff8) != 8 || ((int)uStack_98 != 1)) &&
      (uStack_98._4_4_ + uStack_98._4_4_ * ((uint)uStack_a0 >> 3 & 0x1ff) != 2)))) {
    puVar5 = (undefined4 *)0x98;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    uStack_280 = puVar5 + 1;
    uStack_278 = 0x92;
    *(undefined8 *)(puVar5 + 0x17) = 0x6372732026262031;
    *(undefined8 *)(puVar5 + 0x15) = 0x203d3d2073776f72;
    *(undefined8 *)(puVar5 + 0x1b) = 0x32203d3d20292873;
    *(undefined8 *)(puVar5 + 0x19) = 0x6c656e6e6168632e;
    *(undefined8 *)(puVar5 + 0x1f) = 0x72732a736c6f632e;
    *(undefined8 *)(puVar5 + 0x1d) = 0x637273207c7c2029;
    *(undefined8 *)(puVar5 + 0x23) = 0x203d3d202928736c;
    *(undefined8 *)(puVar5 + 0x21) = 0x656e6e6168632e63;
    *(undefined8 *)(puVar5 + 7) = 0x68747065642e6372;
    *(undefined8 *)(puVar5 + 5) = 0x7328202626202928;
    *(undefined8 *)(puVar5 + 0xb) = 0x207c7c204632335f;
    *(undefined8 *)(puVar5 + 9) = 0x5643203d3d202928;
    *(undefined8 *)(puVar5 + 0xf) = 0x43203d3d20292868;
    *(undefined8 *)(puVar5 + 0xd) = 0x747065642e637273;
    *(undefined8 *)(puVar5 + 0x13) = 0x2e63727328282026;
    *(undefined8 *)(puVar5 + 0x11) = 0x2620294634365f56;
    *(undefined1 *)((long)puVar5 + 0x96) = 0;
    *(undefined2 *)(puVar5 + 0x25) = 0x2932;
    *(undefined8 *)(puVar5 + 3) = 0x73756f756e69746e;
    *(undefined8 *)(puVar5 + 1) = 0x6f4373692e637273;
    FUN_109ac3188(0xffffff29,&uStack_280,&UNK_10f59ed0f,&UNK_10f59e896,0x1a7);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109b5e01c);
    (*pcVar4)();
  }
  uStack_280 = (undefined4 *)NEON_rev64(*puStack_60,4);
  FUN_109a8ee3c(param_2,&uStack_280,(uint)uStack_a0 & 0xfff,0xffffffff,1,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_2 + 2);
    uStack_240 = (ulong)&uStack_280 | 8;
    uStack_278 = puVar6[1];
    uStack_280 = (undefined4 *)*puVar6;
    uStack_268 = puVar6[3];
    uStack_270 = puVar6[2];
    uStack_258 = puVar6[5];
    uStack_260 = puVar6[4];
    uStack_248 = puVar6[7];
    uStack_250 = puVar6[6];
    puStack_238 = &uStack_230;
    uStack_230 = 0;
    uStack_228 = 0;
    if (puVar6[7] != 0) {
      piVar12 = (int *)(puVar6[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_230 = *(undefined8 *)puVar6[9];
      uStack_228 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_280 = (undefined4 *)((ulong)uStack_280 & 0xffffffff);
      func_0x000109a84868(&uStack_280);
    }
  }
  else {
    FUN_109a8a180(&uStack_280,param_2,0xffffffff);
  }
  uStack_284 = uStack_98._4_4_;
  if (uStack_a0._4_4_ == 1) {
    uStack_284 = 1;
  }
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = uStack_90;
  uStack_288 = (int)uStack_98;
  uStack_2a8 = (uint)uStack_a0 & 0x4fff | 0x42420000;
  uStack_2a4 = (undefined4)*puStack_58;
  uStack_2b8 = uStack_270;
  uStack_2ac = uStack_278._4_4_;
  if (uStack_280._4_4_ == 1) {
    uStack_2ac = 1;
  }
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b0 = (undefined4)uStack_278;
  uStack_2d0 = (uint)uStack_280 & 0x4fff | 0x42420000;
  uStack_2cc = (undefined4)*puStack_238;
  uStack_2e0 = uStack_f0;
  uStack_2d4 = uStack_f8._4_4_;
  if (uStack_100._4_4_ == 1) {
    uStack_2d4 = 1;
  }
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2d8 = (undefined4)uStack_f8;
  uStack_2f8 = (uint)uStack_100 & 0x4fff | 0x42420000;
  uStack_2f4 = (undefined4)*puStack_b8;
  if (uStack_1b0 == 0) {
LAB_109b5db40:
    puVar8 = (uint *)0x0;
  }
  else {
    uVar10 = (ulong)uStack_1c0._4_4_;
    if ((int)uStack_1c0._4_4_ < 3) {
      lVar11 = (long)uStack_1b8._4_4_ * (long)(int)uStack_1b8;
    }
    else {
      lVar11 = 1;
      piVar12 = piStack_180;
      do {
        lVar11 = lVar11 * *piVar12;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 == 0) goto LAB_109b5db40;
    iStack_2fc = uStack_1b8._4_4_;
    if (uStack_1c0._4_4_ == 1) {
      iStack_2fc = 1;
    }
    uStack_320 = (uint)uStack_1c0 & 0x4fff | 0x42420000;
    uStack_31c = (undefined4)*puStack_178;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = uStack_1b0;
    iStack_300 = (int)uStack_1b8;
    puVar8 = &uStack_320;
  }
  if (uStack_210 == 0) {
LAB_109b5dbd0:
    puVar9 = (uint *)0x0;
  }
  else {
    uVar10 = (ulong)uStack_220._4_4_;
    if ((int)uStack_220._4_4_ < 3) {
      lVar11 = (long)uStack_218._4_4_ * (long)(int)uStack_218;
    }
    else {
      lVar11 = 1;
      piVar12 = piStack_1e0;
      do {
        lVar11 = lVar11 * *piVar12;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 == 0) goto LAB_109b5dbd0;
    iStack_324 = uStack_218._4_4_;
    if (uStack_220._4_4_ == 1) {
      iStack_324 = 1;
    }
    uStack_348 = (uint)uStack_220 & 0x4fff | 0x42420000;
    uStack_344 = (undefined4)*puStack_1d8;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = uStack_210;
    iStack_328 = (int)uStack_218;
    puVar9 = &uStack_348;
  }
  if (uStack_150 != 0) {
    uVar10 = (ulong)uStack_160._4_4_;
    if ((int)uStack_160._4_4_ < 3) {
      lVar11 = (long)uStack_158._4_4_ * (long)(int)uStack_158;
    }
    else {
      lVar11 = 1;
      piVar12 = piStack_120;
      do {
        lVar11 = lVar11 * *piVar12;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 != 0) {
      iStack_34c = uStack_158._4_4_;
      if (uStack_160._4_4_ == 1) {
        iStack_34c = 1;
      }
      uStack_370 = (uint)uStack_160 & 0x4fff | 0x42420000;
      uStack_36c = (undefined4)*puStack_118;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_358 = uStack_150;
      iStack_350 = (int)uStack_158;
      goto LAB_109b5dc64;
    }
  }
  puVar7 = (uint *)0x0;
LAB_109b5dc64:
  FUN_109b5ccb0(&uStack_2a8,&uStack_2d0,&uStack_2f8,puVar7,puVar8,puVar9);
  if (uStack_248 != 0) {
    piVar12 = (int *)(uStack_248 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_280);
    }
  }
  uStack_248 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  if (0 < uStack_280._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_240 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_280._4_4_);
  }
  if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
    _free(puStack_238[-1]);
  }
  if (uStack_1e8 != 0) {
    piVar12 = (int *)(uStack_1e8 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  uStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (0 < (int)uStack_220._4_4_) {
    lVar11 = 0;
    do {
      piStack_1e0[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_220._4_4_);
  }
  if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  if (uStack_188 != 0) {
    piVar12 = (int *)(uStack_188 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_1c0);
    }
  }
  uStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (0 < (int)uStack_1c0._4_4_) {
    lVar11 = 0;
    do {
      piStack_180[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_1c0._4_4_);
  }
  if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
    _free(puStack_178[-1]);
  }
  if (uStack_128 != 0) {
    piVar12 = (int *)(uStack_128 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  uStack_128 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (0 < (int)uStack_160._4_4_) {
    lVar11 = 0;
    do {
      piStack_120[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_160._4_4_);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  if (uStack_c8 != 0) {
    piVar12 = (int *)(uStack_c8 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  uStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_100._4_4_);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
  if (uStack_68 != 0) {
    piVar12 = (int *)(uStack_68 + 0x14);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < uStack_a0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)((long)puStack_60 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_a0._4_4_);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return;
}



/* Entry: 109b5e0c8; end: 109b5e2ef;  */

uint * FUN_109b5e0c8(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_80;
  int iStack_7c;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if ((*param_2 & 0xfff) != 6) {
    if ((*param_2 & 7) != 6) {
      uStack_80 = 0x82010006;
      uStack_70 = 0;
      puStack_78 = param_1;
      FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_80,6);
      return param_1;
    }
    FUN_109a9ad84(&uStack_80,param_2,1,param_2[1],0);
    FUN_109b5c394(param_1,&uStack_80);
    if (lStack_48 != 0) {
      piVar1 = (int *)(lStack_48 + 0x14);
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
        func_0x000109a848d4(&uStack_80);
      }
    }
    lStack_48 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (0 < iStack_7c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_7c);
    }
    if (puStack_38 == auStack_30 || puStack_38 == (undefined1 *)0x0) {
      return param_1;
    }
    _free(*(undefined8 *)(puStack_38 + -8));
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_109b5e26c:
    if ((int)param_2[1] < 3) {
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar6 = *(undefined8 **)(param_2 + 0x12);
      puVar8 = *(undefined8 **)(param_1 + 0x12);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_109b5e2ac;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_109b5e26c;
  }
  func_0x000109a84868(param_1,param_2);
LAB_109b5e2ac:
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  return param_1;
}



/* Entry: 109b5e2f0; end: 109b5e62b;  */

long FUN_109b5e2f0(uint param_1,uint *param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  
  if (((param_2 == (uint *)0x0) || (param_3 == 0)) || (param_4 == 0)) {
    puVar2 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_58 = puVar2 + 1;
    uStack_50 = 0x2d;
    *(undefined8 *)(puVar2 + 3) = 0x746e6f6320262620;
    *(undefined8 *)(puVar2 + 1) = 0x30203d2120727261;
    *(undefined1 *)((long)puVar2 + 0x31) = 0;
    *(undefined8 *)(puVar2 + 7) = 0x2030203d21207265;
    *(undefined8 *)(puVar2 + 5) = 0x646165685f72756f;
    *(undefined8 *)((long)puVar2 + 0x29) = 0x30203d21206b636f;
    *(undefined8 *)((long)puVar2 + 0x21) = 0x6c62202626203020;
    FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59ed4d,&UNK_10f59ed5f,0x2f);
  }
  else {
    uVar3 = *param_2;
    if (((uVar3 >> 0x10 == 0x4242) && (0 < (int)param_2[9])) &&
       ((0 < (int)param_2[8] && (*(long *)(param_2 + 6) != 0)))) {
      if (((uVar3 & 0xff8) == 0) && (param_2[9] == 2)) {
        FUN_109a3ca64(param_2,&puStack_58,2,0);
        uVar3 = *param_2;
      }
      if ((uVar3 & 0xfff) - 0xe < 0xfffffffe) {
        puVar2 = (undefined4 *)0x5c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar2 + 0xb) = 0x636e657571657320;
        *(undefined8 *)(puVar2 + 9) = 0x746e696f70206f74;
        *(undefined8 *)(puVar2 + 0xf) = 0x616e6920666f2065;
        *(undefined8 *)(puVar2 + 0xd) = 0x7375616365622065;
        *(undefined8 *)(puVar2 + 0x13) = 0x656d656c65206574;
        *(undefined8 *)(puVar2 + 0x11) = 0x616972706f727070;
        *(undefined8 *)(puVar2 + 3) = 0x6e206e6163207869;
        *(undefined8 *)(puVar2 + 1) = 0x7274616d20656854;
        *puVar2 = 1;
        puStack_68 = puVar2 + 1;
        uStack_60 = 0x57;
        *(undefined1 *)((long)puVar2 + 0x5b) = 0;
        *(undefined8 *)((long)puVar2 + 0x53) = 0x6570797420746e65;
        *(undefined8 *)(puVar2 + 7) = 0x206465747265766e;
        *(undefined8 *)(puVar2 + 5) = 0x6f6320656220746f;
        FUN_109ac3188(0xffffff2e,&puStack_68,&UNK_10f59ed4d,&UNK_10f59ed5f,0x3f);
      }
      else {
        if (((param_2[9] == 1) || (param_2[8] == 1)) && ((uVar3 >> 0xe & 1) != 0)) {
          FUN_109a4cef0(uVar3 & 0xfff | param_1 & 0x7000,0x80,
                        (uVar3 >> 3 & 0x1ff) + 1 <<
                        (ulong)(0xfa50U >> (ulong)((uVar3 & 7) << 1) & 3),
                        *(undefined8 *)(param_2 + 6),param_2[8] * param_2[9],param_3,param_4);
          return param_3;
        }
        puVar2 = (undefined4 *)0x50;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar2 + 7) = 0x657320746e696f70;
        *(undefined8 *)(puVar2 + 5) = 0x206f742064657472;
        *(undefined8 *)(puVar2 + 0xb) = 0x3120656220747375;
        *(undefined8 *)(puVar2 + 9) = 0x6d2065636e657571;
        *(undefined8 *)(puVar2 + 0xf) = 0x646e61206c616e6f;
        *(undefined8 *)(puVar2 + 0xd) = 0x69736e656d69642d;
        *(undefined8 *)((long)puVar2 + 0x47) = 0x73756f756e69746e;
        *(undefined8 *)((long)puVar2 + 0x3f) = 0x6f6320646e61206c;
        *puVar2 = 1;
        puStack_68 = puVar2 + 1;
        uStack_60 = 0x4b;
        *(undefined1 *)((long)puVar2 + 0x4f) = 0;
        *(undefined8 *)(puVar2 + 3) = 0x65766e6f63207869;
        *(undefined8 *)(puVar2 + 1) = 0x7274616d20656854;
        FUN_109ac3188(0xfffffffb,&puStack_68,&UNK_10f59ed4d,&UNK_10f59ed5f,0x44);
      }
    }
    else {
      puVar2 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar2 = 1;
      puStack_68 = puVar2 + 1;
      uStack_60 = 0x21;
      *(undefined2 *)(puVar2 + 9) = 0x78;
      *(undefined8 *)(puVar2 + 3) = 0x6e20736920796172;
      *(undefined8 *)(puVar2 + 1) = 0x7261207475706e49;
      *(undefined8 *)(puVar2 + 7) = 0x697274616d206469;
      *(undefined8 *)(puVar2 + 5) = 0x6c6176206120746f;
      FUN_109ac3188(0xfffffffb,&puStack_68,&UNK_10f59ed4d,&UNK_10f59ed5f,0x36);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109b5e5ac);
  (*pcVar1)();
}



/* Entry: 109b5e62c; end: 109b5ece7;  */

void FUN_109b5e62c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  if (0 < lVar3) {
    puVar1 = param_2;
    do {
      uVar5 = puVar1[1];
      uVar4 = *puVar1;
      uVar7 = param_3[1];
      uVar6 = *param_3;
      puVar2 = puVar1 + 2;
      puVar1[1] = CONCAT17((char)((ulong)uVar7 >> 0x38) + (char)((ulong)uVar5 >> 0x38),
                           CONCAT16((char)((ulong)uVar7 >> 0x30) + (char)((ulong)uVar5 >> 0x30),
                                    CONCAT15((char)((ulong)uVar7 >> 0x28) +
                                             (char)((ulong)uVar5 >> 0x28),
                                             CONCAT14((char)((ulong)uVar7 >> 0x20) +
                                                      (char)((ulong)uVar5 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar7 >> 0x18) +
                                                               (char)((ulong)uVar5 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar7 >> 0x10)
                                                                        + (char)((ulong)uVar5 >>
                                                                                0x10),
                                                                        CONCAT11((char)((ulong)uVar7
                                                                                       >> 8) +
                                                                                 (char)((ulong)uVar5
                                                                                       >> 8),
                                                                                 (char)uVar7 +
                                                                                 (char)uVar5)))))));
      *puVar1 = CONCAT17((char)((ulong)uVar6 >> 0x38) + (char)((ulong)uVar4 >> 0x38),
                         CONCAT16((char)((ulong)uVar6 >> 0x30) + (char)((ulong)uVar4 >> 0x30),
                                  CONCAT15((char)((ulong)uVar6 >> 0x28) +
                                           (char)((ulong)uVar4 >> 0x28),
                                           CONCAT14((char)((ulong)uVar6 >> 0x20) +
                                                    (char)((ulong)uVar4 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar6 >> 0x18) +
                                                             (char)((ulong)uVar4 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar6 >> 0x10) +
                                                                      (char)((ulong)uVar4 >> 0x10),
                                                                      CONCAT11((char)((ulong)uVar6
                                                                                     >> 8) +
                                                                               (char)((ulong)uVar4
                                                                                     >> 8),
                                                                               (char)uVar6 +
                                                                               (char)uVar4)))))));
      puVar1 = puVar2;
      param_3 = param_3 + 2;
    } while (puVar2 < (undefined8 *)((long)param_2 + lVar3));
  }
  return;
}



/* Entry: 109b5ece8; end: 109b5ed67;  */

void FUN_109b5ece8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  bVar1 = (*(uint *)(param_1 + 0x128) & 0x800) == 0;
  if ((*(byte *)(param_1 + 0x213) & 0x20) != 0) {
    bVar1 = ((*(uint *)(param_1 + 0x128) ^ 0xffffffff) & 0x300) != 0;
  }
  if ((param_3 != 0) && (bVar1)) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x244);
    do {
      uVar3 = (uint)param_3;
      if (uVar3 == 0) {
        uVar3 = 0xffffffff;
      }
      _crc32();
      param_3 = param_3 - (ulong)uVar3;
    } while (param_3 != 0);
    *(int *)(param_1 + 0x244) = (int)uVar2;
  }
  return;
}



/* Entry: 109b5ed68; end: 109b5ef4b;  */

void FUN_109b5ed68(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_6b0 [192];
  undefined8 auStack_5f0 [24];
  undefined *puStack_530;
  undefined1 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  char *pcStack_508;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_108;
  char acStack_98 [30];
  char acStack_7a [97];
  undefined1 uStack_19;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (char *)0x0) {
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x20000;
  }
  else {
    lVar9 = 0;
    uVar6 = 0;
    do {
      cVar5 = param_2[lVar9];
      if (cVar5 != (&UNK_10f59eea5)[lVar9]) {
        *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x20000;
      }
      if (cVar5 == '.') {
        uVar6 = uVar6 + 1;
      }
      bVar2 = lVar9 != 6;
      lVar9 = lVar9 + 1;
    } while ((uVar6 < 2 && bVar2) && cVar5 != '\0');
    if ((*(byte *)(param_1 + 0x12a) >> 1 & 1) == 0) {
      uVar3 = 1;
      goto LAB_109b5ef24;
    }
  }
  cVar5 = 'A';
  lVar9 = 0;
  do {
    acStack_98[lVar9] = cVar5;
    lVar12 = lVar9 + 1;
    cVar5 = (&UNK_10f59eead)[lVar9];
    lVar9 = lVar12;
  } while (lVar12 != 0x1e);
  acStack_7a[0] = 0;
  if ((param_2 == (char *)0x0) || (cVar5 = *param_2, cVar5 == '\0')) {
    acStack_7a[0] = 0;
    uVar8 = 0x1e;
LAB_109b5ee70:
    lVar9 = 0;
    uVar10 = 0x7e - uVar8;
    uVar7 = uVar10;
    if (0x10 < uVar10) {
      uVar7 = 0x11;
    }
    cVar5 = ' ';
    do {
      acStack_98[lVar9 + uVar8] = cVar5;
      cVar5 = (&UNK_10f59eecc)[lVar9];
      lVar9 = lVar9 + 1;
    } while (uVar7 + 1 != lVar9);
    lVar12 = uVar8 + lVar9;
    acStack_98[lVar12] = '\0';
    if (0x7d < lVar12 - 1U) goto LAB_109b5ef0c;
    uVar10 = uVar10 - lVar9;
    if (4 < uVar10) {
      uVar10 = 5;
    }
    lVar9 = uVar10 + 1;
    cVar5 = '1';
    pcVar11 = ".6.37";
    do {
      lVar13 = lVar12 + 1;
      acStack_98[lVar12] = cVar5;
      cVar5 = *pcVar11;
      lVar9 = lVar9 + -1;
      pcVar11 = pcVar11 + 1;
      lVar12 = lVar13;
    } while (lVar9 != 0);
  }
  else {
    uVar8 = 0x1e;
    do {
      uVar7 = uVar8;
      param_2 = param_2 + 1;
      uVar8 = uVar7 + 1;
      acStack_98[uVar7] = cVar5;
      cVar5 = *param_2;
      if (cVar5 == '\0') break;
    } while (uVar7 < 0x7e);
    acStack_98[uVar7 + 1] = '\0';
    if (uVar7 < 0x7e) goto LAB_109b5ee70;
    uStack_19 = 0;
LAB_109b5ef0c:
    lVar13 = 0x7f;
  }
  acStack_98[lVar13] = '\0';
  param_2 = acStack_98;
  FUN_109b62608();
  uVar3 = 0;
LAB_109b5ef24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uVar3);
  iVar1 = (int)auStack_6b0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = auStack_5f0;
  _bzero(puVar4,0x4e8);
  uStack_1d4 = 1000000;
  uStack_1d0 = 0x3e8000f4240;
  uStack_1c8 = 8000000;
  uStack_518 = param_3;
  uStack_510 = param_4;
  pcStack_508 = param_2;
  uStack_210 = param_5;
  uStack_208 = param_6;
  uStack_200 = param_7;
  _setjmp();
  if (iVar1 == 0) {
    uStack_520 = 0;
    puStack_530 = PTR__longjmp_11034c548;
    puStack_528 = auStack_6b0;
    FUN_109b5ed68(puVar4,uVar3);
    if ((int)puVar4 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = auStack_5f0;
      FUN_109b63258(puVar4,0x4e8);
      if (puVar4 != (undefined8 *)0x0) {
        uStack_478 = 0x109b5ecb8;
        uStack_470 = 0x109b5ecc8;
        puStack_528 = (undefined1 *)0x0;
        uStack_520 = 0;
        puStack_530 = (undefined *)0x0;
        puStack_468 = puVar4;
        _memcpy();
      }
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined8 *)0x0) {
    if ((code *)puVar4[0x7d] == (code *)0x0) {
      puVar4 = (undefined8 *)0x168;
      _malloc();
    }
    else {
      (*(code *)puVar4[0x7d])();
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x2c] = 0;
      puVar4[0x29] = 0;
      puVar4[0x28] = 0;
      puVar4[0x2b] = 0;
      puVar4[0x2a] = 0;
      puVar4[0x25] = 0;
      puVar4[0x24] = 0;
      puVar4[0x27] = 0;
      puVar4[0x26] = 0;
      puVar4[0x21] = 0;
      puVar4[0x20] = 0;
      puVar4[0x23] = 0;
      puVar4[0x22] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x19] = 0;
      puVar4[0x18] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0x17] = 0;
      puVar4[0x16] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
    }
  }
  return;
}



/* Entry: 109b5ef4c; end: 109b5f0b3;  */

void FUN_109b5ef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_610 [192];
  undefined8 auStack_550 [24];
  undefined *puStack_490;
  undefined1 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_68;
  
  iVar1 = (int)auStack_610;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_550;
  _bzero(puVar2,0x4e8);
  uStack_134 = 1000000;
  uStack_130 = 0x3e8000f4240;
  uStack_128 = 8000000;
  uStack_478 = param_3;
  uStack_470 = param_4;
  uStack_468 = param_2;
  uStack_170 = param_5;
  uStack_168 = param_6;
  uStack_160 = param_7;
  _setjmp();
  if (iVar1 == 0) {
    uStack_480 = 0;
    puStack_490 = PTR__longjmp_11034c548;
    puStack_488 = auStack_610;
    FUN_109b5ed68(puVar2,param_1);
    if ((int)puVar2 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = auStack_550;
      FUN_109b63258(puVar2,0x4e8);
      if (puVar2 != (undefined8 *)0x0) {
        uStack_3d8 = 0x109b5ecb8;
        uStack_3d0 = 0x109b5ecc8;
        puStack_488 = (undefined1 *)0x0;
        uStack_480 = 0;
        puStack_490 = (undefined *)0x0;
        puStack_3c8 = puVar2;
        _memcpy();
      }
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (puVar2 != (undefined8 *)0x0) {
      if ((code *)puVar2[0x7d] == (code *)0x0) {
        puVar2 = (undefined8 *)0x168;
        _malloc();
      }
      else {
        (*(code *)puVar2[0x7d])();
      }
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[0x2c] = 0;
        puVar2[0x29] = 0;
        puVar2[0x28] = 0;
        puVar2[0x2b] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x25] = 0;
        puVar2[0x24] = 0;
        puVar2[0x27] = 0;
        puVar2[0x26] = 0;
        puVar2[0x21] = 0;
        puVar2[0x20] = 0;
        puVar2[0x23] = 0;
        puVar2[0x22] = 0;
        puVar2[0x1d] = 0;
        puVar2[0x1c] = 0;
        puVar2[0x1f] = 0;
        puVar2[0x1e] = 0;
        puVar2[0x19] = 0;
        puVar2[0x18] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x1a] = 0;
        puVar2[0x15] = 0;
        puVar2[0x14] = 0;
        puVar2[0x17] = 0;
        puVar2[0x16] = 0;
        puVar2[0x11] = 0;
        puVar2[0x10] = 0;
        puVar2[0x13] = 0;
        puVar2[0x12] = 0;
        puVar2[0xd] = 0;
        puVar2[0xc] = 0;
        puVar2[0xf] = 0;
        puVar2[0xe] = 0;
        puVar2[9] = 0;
        puVar2[8] = 0;
        puVar2[0xb] = 0;
        puVar2[10] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 109b5f0b4; end: 109b5f123;  */

void FUN_109b5f0b4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((code *)param_1[0x7d] == (code *)0x0) {
      param_1 = (undefined8 *)0x168;
      _malloc();
    }
    else {
      (*(code *)param_1[0x7d])(param_1,0x168);
    }
    if (param_1 != (undefined8 *)0x0) {
      param_1[0x2c] = 0;
      param_1[0x29] = 0;
      param_1[0x28] = 0;
      param_1[0x2b] = 0;
      param_1[0x2a] = 0;
      param_1[0x25] = 0;
      param_1[0x24] = 0;
      param_1[0x27] = 0;
      param_1[0x26] = 0;
      param_1[0x21] = 0;
      param_1[0x20] = 0;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
  }
  return;
}



/* Entry: 109b5f124; end: 109b5f1c3;  */

void FUN_109b5f124(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) &&
     (puVar1 = (undefined8 *)*param_2, puVar1 != (undefined8 *)0x0)) {
    *param_2 = 0;
    FUN_109b5f1c4(param_1,puVar1,0xffff,0xffffffff);
    puVar1[0x2c] = 0;
    puVar1[0x29] = 0;
    puVar1[0x28] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x25] = 0;
    puVar1[0x24] = 0;
    puVar1[0x27] = 0;
    puVar1[0x26] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    if (*(code **)(param_1 + 0x3f0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b5f1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x3f0))(param_1,puVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(puVar1);
    return;
  }
  return;
}



/* Entry: 109b5f1c4; end: 109b5f86b;  */

void FUN_109b5f1c4(long param_1,long param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0xa0);
  iVar5 = (int)param_4;
  if ((lVar2 != 0) && (((param_3 & *(uint *)(param_2 + 300)) >> 0xe & 1) != 0)) {
    if (iVar5 == -1) {
      if (*(int *)(param_2 + 0x94) < 1) {
LAB_109b5f288:
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      else {
        lVar2 = 0;
        lVar7 = 8;
        do {
          lVar3 = *(long *)(*(long *)(param_2 + 0xa0) + lVar7);
          if (lVar3 != 0) {
            if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
              _free(lVar3);
            }
            else {
              (**(code **)(param_1 + 0x3f0))(param_1);
            }
          }
          lVar2 = lVar2 + 1;
          lVar7 = lVar7 + 0x38;
        } while (lVar2 < *(int *)(param_2 + 0x94));
        lVar2 = *(long *)(param_2 + 0xa0);
        if (lVar2 != 0) goto LAB_109b5f288;
      }
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0x94) = 0;
      *(undefined4 *)(param_2 + 0x98) = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + (long)iVar5 * 0x38 + 8);
      if (lVar2 != 0) {
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)iVar5 * 0x38 + 8) = 0;
    }
  }
  uVar4 = *(uint *)(param_2 + 300);
  if (((param_3 & uVar4) >> 0xd & 1) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
    if (*(long *)(param_2 + 0xb8) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0xb8));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0;
    uVar4 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar4) >> 8 & 1) != 0) {
    if (*(long *)(param_2 + 0x150) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x150));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    if (*(long *)(param_2 + 0x158) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x158));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_2 + 0x150) = 0;
    *(undefined8 *)(param_2 + 0x158) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
    uVar4 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar4) >> 7 & 1) != 0) {
    if (*(long *)(param_2 + 0x108) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x108));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    if (*(long *)(param_2 + 0x118) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x118));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    lVar2 = *(long *)(param_2 + 0x120);
    if (lVar2 != 0) {
      if (*(char *)(param_2 + 0x129) == '\0') {
LAB_109b5f420:
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      else {
        uVar6 = 0;
        do {
          lVar2 = *(long *)(*(long *)(param_2 + 0x120) + uVar6 * 8);
          if (lVar2 != 0) {
            if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
              _free(lVar2);
            }
            else {
              (**(code **)(param_1 + 0x3f0))(param_1);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(byte *)(param_2 + 0x129));
        lVar2 = *(long *)(param_2 + 0x120);
        if (lVar2 != 0) goto LAB_109b5f420;
      }
      *(undefined8 *)(param_2 + 0x120) = 0;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    uVar4 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar4) >> 4 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x80);
    if (lVar2 != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(lVar2);
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    if (*(long *)(param_2 + 0x88) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x88));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(long *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
  }
  lVar2 = *(long *)(param_2 + 0x140);
  if ((lVar2 != 0) && (((param_3 & *(uint *)(param_2 + 300)) >> 5 & 1) != 0)) {
    if (iVar5 == -1) {
      if (*(int *)(param_2 + 0x148) < 1) {
LAB_109b5f578:
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      else {
        lVar7 = 0;
        lVar2 = 0;
        do {
          lVar3 = *(long *)(*(long *)(param_2 + 0x140) + lVar7);
          if (lVar3 != 0) {
            if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
              _free(lVar3);
            }
            else {
              (**(code **)(param_1 + 0x3f0))(param_1);
            }
          }
          lVar3 = *(long *)(*(long *)(param_2 + 0x140) + lVar7 + 0x10);
          if (lVar3 != 0) {
            if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
              _free(lVar3);
            }
            else {
              (**(code **)(param_1 + 0x3f0))(param_1);
            }
          }
          lVar2 = lVar2 + 1;
          lVar7 = lVar7 + 0x20;
        } while (lVar2 < *(int *)(param_2 + 0x148));
        lVar2 = *(long *)(param_2 + 0x140);
        if (lVar2 != 0) goto LAB_109b5f578;
      }
      *(undefined8 *)(param_2 + 0x140) = 0;
      *(undefined4 *)(param_2 + 0x148) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
    }
    else {
      lVar2 = *(long *)(lVar2 + (-(param_4 >> 0x1f & 1) & 0xffffffe000000000 |
                                (param_4 & 0xffffffff) << 5));
      if (lVar2 != 0) {
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      lVar2 = *(long *)(*(long *)(param_2 + 0x140) + (long)iVar5 * 0x20 + 0x10);
      if (lVar2 != 0) {
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x140) + (long)iVar5 * 0x20);
      *puVar1 = 0;
      puVar1[2] = 0;
    }
  }
  lVar2 = *(long *)(param_2 + 0x130);
  if ((lVar2 != 0) && (((param_3 & *(uint *)(param_2 + 300)) >> 9 & 1) != 0)) {
    if (iVar5 == -1) {
      if (*(int *)(param_2 + 0x138) < 1) {
LAB_109b5f688:
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      else {
        lVar2 = 0;
        lVar7 = 8;
        do {
          lVar3 = *(long *)(*(long *)(param_2 + 0x130) + lVar7);
          if (lVar3 != 0) {
            if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
              _free(lVar3);
            }
            else {
              (**(code **)(param_1 + 0x3f0))(param_1);
            }
          }
          lVar2 = lVar2 + 1;
          lVar7 = lVar7 + 0x20;
        } while (lVar2 < *(int *)(param_2 + 0x138));
        lVar2 = *(long *)(param_2 + 0x130);
        if (lVar2 != 0) goto LAB_109b5f688;
      }
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined4 *)(param_2 + 0x138) = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + (long)iVar5 * 0x20 + 8);
      if (lVar2 != 0) {
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar2);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1);
        }
      }
      *(undefined8 *)(*(long *)(param_2 + 0x130) + (long)iVar5 * 0x20 + 8) = 0;
    }
  }
  uVar4 = *(uint *)(param_2 + 300);
  if (((param_3 & uVar4) >> 0xf & 1) != 0) {
    if (*(long *)(param_2 + 0xf8) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0xf8));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
      *(undefined8 *)(param_2 + 0xf8) = 0;
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0xf0));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
      *(undefined8 *)(param_2 + 0xf0) = 0;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffeffff;
    uVar4 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar4) >> 3 & 1) != 0) {
    if (*(long *)(param_2 + 0x100) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x100));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
    uVar4 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar4) >> 0xc & 1) != 0) {
    if (*(long *)(param_2 + 0x18) != 0) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(*(long *)(param_2 + 0x18));
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
    *(undefined2 *)(param_2 + 0x20) = 0;
    uVar4 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar4) >> 6 & 1) == 0) goto LAB_109b5f840;
  lVar2 = *(long *)(param_2 + 0x160);
  if (lVar2 != 0) {
    if (*(int *)(param_2 + 4) == 0) {
LAB_109b5f810:
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(lVar2);
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    else {
      uVar6 = 0;
      do {
        lVar2 = *(long *)(*(long *)(param_2 + 0x160) + uVar6 * 8);
        if (lVar2 != 0) {
          if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
            _free(lVar2);
          }
          else {
            (**(code **)(param_1 + 0x3f0))(param_1);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_2 + 4));
      lVar2 = *(long *)(param_2 + 0x160);
      if (lVar2 != 0) goto LAB_109b5f810;
    }
    *(undefined8 *)(param_2 + 0x160) = 0;
    uVar4 = *(uint *)(param_2 + 300);
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
LAB_109b5f840:
  if (iVar5 != -1) {
    param_3 = param_3 & 0xffffbddf;
  }
  *(uint *)(param_2 + 300) = uVar4 & (param_3 ^ 0xffffffff);
  return;
}



/* Entry: 109b5f86c; end: 109b5f8f7;  */

undefined1 FUN_109b5f86c(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (*(int *)(param_1 + 0x3bc) != 0)) {
    piVar2 = (int *)((long)*(int **)(param_1 + 0x3c0) + (ulong)(uint)(*(int *)(param_1 + 0x3bc) * 5)
                    );
    do {
      piVar1 = (int *)((long)piVar2 + -5);
      if (*param_2 == *piVar1) {
        return *(undefined1 *)((long)piVar2 + -1);
      }
      piVar2 = piVar1;
    } while (*(int **)(param_1 + 0x3c0) < piVar1);
  }
  return 0;
}



/* Entry: 109b5f8f8; end: 109b5f9a3;  */

undefined *
FUN_109b5f8f8(undefined *param_1,int *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,uint *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  ulong uVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  undefined *unaff_x19;
  undefined8 uVar23;
  undefined8 unaff_x20;
  ushort uVar24;
  undefined8 unaff_x21;
  undefined *puVar25;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar26;
  undefined8 unaff_x30;
  undefined8 uVar27;
  
  if ((int)param_3 + 0xdabf41bfU < 0xdabf41cf) {
    uVar24 = *(ushort *)((long)param_2 + 0x4a);
    pcVar15 = "gamma value out of range";
  }
  else {
    uVar24 = *(ushort *)((long)param_2 + 0x4a);
    if ((-1 < (char)param_1[0x125]) || ((uVar24 >> 3 & 1) == 0)) {
      if ((-1 < (short)uVar24) && (FUN_109b5f9a4(param_1,param_2,param_3,1), (int)param_1 != 0)) {
        *param_2 = (int)param_3;
        *(ushort *)((long)param_2 + 0x4a) = uVar24 | 9;
      }
      return param_1;
    }
    pcVar15 = "duplicate";
  }
  *(ushort *)((long)param_2 + 0x4a) = uVar24 | 0x8000;
  pcVar16 = (char *)0x1;
  puVar9 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar12 = param_1;
    *(undefined8 *)(puVar9 + -0x20) = unaff_x20;
    *(undefined **)(puVar9 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar9 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar9 + -8) = unaff_x30;
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = puVar12;
    if (-1 < (char)puVar12[0x125]) break;
    if ((int)pcVar16 < 2) {
      pcVar16 = pcVar15;
      FUN_109b62a98(puVar12,puVar9 + -0xfe);
      pcVar15 = puVar9 + -0xfe;
      FUN_109b62608();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x28)) {
        return puVar13;
      }
      goto LAB_109b62cf0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar9 + -0x28)) goto LAB_109b62cf0;
    unaff_x20 = *(undefined8 *)(puVar9 + -0x20);
    *(undefined8 *)(puVar9 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    unaff_x29 = puVar9 + -0x10;
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_1 = puVar12;
    if (((byte)puVar12[0x12a] >> 4 & 1) == 0) {
      pcVar16 = pcVar15;
      func_0x000109b62a30();
    }
    else {
      pcVar16 = pcVar15;
      FUN_109b62a98(puVar12,puVar9 + -0xfe);
      pcVar15 = puVar9 + -0xfe;
      FUN_109b62608();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x28)) {
        return param_1;
      }
    }
    unaff_x30 = 0x109b62bdc;
    ___stack_chk_fail();
    puVar9 = puVar9 + -0x100;
    unaff_x19 = puVar12;
  }
  puVar8 = puVar9;
  if ((int)pcVar16 < 1) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar9 + -0x28)) goto LAB_109b62cf0;
    uVar27 = *(undefined8 *)(puVar9 + -8);
    uVar11 = *(undefined8 *)(puVar9 + -0x20);
    uVar23 = *(undefined8 *)(puVar9 + -0x18);
    puVar26 = *(undefined1 **)(puVar9 + -0x10);
    if (((byte)puVar12[0x12a] >> 5 & 1) != 0) goto code_r0x000109b62608;
    puVar8 = puVar9 + -0x10;
    puVar26 = puVar9 + -0x10;
    *(undefined1 **)(puVar9 + -0x10) = *(undefined1 **)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = uVar27;
    uVar27 = 0x109b62a80;
    FUN_109b6244c();
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar9 + -0x28)) {
LAB_109b62cf0:
      ___stack_chk_fail();
      *(undefined8 *)(puVar9 + -0x130) = unaff_x22;
      *(undefined8 *)(puVar9 + -0x128) = unaff_x21;
      *(undefined8 *)(puVar9 + -0x120) = unaff_x20;
      *(undefined **)(puVar9 + -0x118) = puVar12;
      *(undefined1 **)(puVar9 + -0x110) = puVar9 + -0x10;
      *(code **)(puVar9 + -0x108) = FUN_109b62cf4;
      puVar12 = puVar13;
      if (puVar13 != (undefined *)0x0) {
        puVar12 = *(undefined **)(puVar13 + 200);
        if (puVar12 == (undefined *)0x0) {
          *(undefined8 *)(puVar13 + 0xd0) = 0;
          if (pcVar16 < (char *)0xc1) {
            *(undefined **)(puVar13 + 200) = puVar13;
            puVar12 = puVar13;
          }
          else {
            puVar12 = puVar13;
            FUN_109b63258(puVar13,pcVar16);
            *(undefined **)(puVar13 + 200) = puVar12;
            if (puVar12 == (undefined *)0x0) {
              return (undefined *)0x0;
            }
            *(char **)(puVar13 + 0xd0) = pcVar16;
          }
        }
        else {
          pcVar19 = *(char **)(puVar13 + 0xd0);
          if (pcVar19 == (char *)0x0) {
            if (puVar12 != puVar13) {
              puVar12 = &UNK_10f59f632;
              puVar14 = puVar13;
              pcVar19 = pcVar16;
              FUN_109b6244c();
              *(undefined8 *)(puVar9 + -0x160) = unaff_x22;
              *(char **)(puVar9 + -0x158) = pcVar16;
              *(char **)(puVar9 + -0x150) = pcVar15;
              *(undefined **)(puVar9 + -0x148) = puVar13;
              *(undefined1 **)(puVar9 + -0x140) = puVar9 + -0x110;
              *(undefined8 *)(puVar9 + -0x138) = 0x109b62da4;
              *(undefined8 *)(puVar9 + -0x168) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              puVar13 = puVar14;
              if (puVar14 != (undefined *)0x0) {
                puVar25 = *(undefined **)(puVar14 + 200);
                if ((puVar25 != (undefined *)0x0) &&
                   (puVar25 != puVar14 && *(long *)(puVar14 + 0xd0) != 0)) {
                  puVar13 = puVar9 + -0x228;
                  _setjmp();
                  if ((int)puVar13 == 0) {
                    *(undefined8 *)(puVar14 + 0xd0) = 0;
                    *(undefined **)(puVar14 + 0xc0) = PTR__longjmp_11034c548;
                    *(undefined1 **)(puVar14 + 200) = puVar9 + -0x228;
                    if (*(code **)(puVar14 + 0x3f0) == (code *)0x0) {
                      puVar12 = puVar25;
                      _free();
                      puVar13 = puVar25;
                    }
                    else {
                      puVar13 = puVar14;
                      (**(code **)(puVar14 + 0x3f0))();
                      puVar12 = puVar25;
                    }
                  }
                }
                *(undefined8 *)(puVar14 + 0xc0) = 0;
                *(undefined8 *)(puVar14 + 200) = 0;
                *(undefined8 *)(puVar14 + 0xd0) = 0;
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar9 + -0x168)) {
                ___stack_chk_fail();
                *(undefined1 **)(puVar9 + -0x240) = puVar9 + -0x140;
                *(code **)(puVar9 + -0x238) = FUN_109b62e60;
                if (((puVar13 != (undefined *)0x0) &&
                    (puVar2 = (undefined8 *)(puVar13 + 0xc0), (code *)*puVar2 != (code *)0x0)) &&
                   (puVar13 = *(undefined **)(puVar13 + 200), puVar13 != (undefined *)0x0)) {
                  (*(code *)*puVar2)();
                }
                _abort();
                puVar14 = (undefined *)0x0;
                if ((((puVar13 != (undefined *)0x0) && (puVar12 != (undefined *)0x0)) &&
                    ((puVar14 = (undefined *)0x0, param_6 != (uint *)0x0 &&
                     ((param_5 != (undefined8 *)0x0 && (pcVar19 != (char *)0x0)))))) &&
                   ((*(uint *)(puVar12 + 8) >> 0xc & 1) != 0)) {
                  puVar4 = *(uint **)(puVar12 + 0x88);
                  *(undefined8 *)pcVar19 = *(undefined8 *)(puVar12 + 0x80);
                  *param_5 = puVar4;
                  uVar5 = *puVar4;
                  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  *param_6 = uVar5 >> 0x10 | uVar5 << 0x10;
                  if (param_4 != (undefined4 *)0x0) {
                    *param_4 = 0;
                  }
                  puVar14 = (undefined *)0x1000;
                }
                return puVar14;
              }
              return puVar13;
            }
            pcVar19 = (char *)0xc0;
          }
          if (pcVar19 != pcVar16) {
            FUN_109b62608(puVar13,&UNK_10f59f651);
            return (undefined *)0x0;
          }
        }
        *(char **)(puVar13 + 0xc0) = pcVar15;
      }
      return puVar12;
    }
    puVar26 = *(undefined1 **)(puVar9 + -0x10);
    uVar27 = *(undefined8 *)(puVar9 + -8);
    uVar11 = *(undefined8 *)(puVar9 + -0x20);
    uVar23 = *(undefined8 *)(puVar9 + -0x18);
  }
  if (((byte)puVar12[0x12a] >> 6 & 1) == 0) {
    *(undefined1 **)(puVar8 + -0x10) = puVar26;
    *(undefined8 *)(puVar8 + -8) = uVar27;
    FUN_109b6244c();
    iVar17 = 0;
    uVar5 = *(uint *)(puVar12 + 0x210);
    uVar21 = 0x18;
    do {
      uVar6 = uVar5 >> (ulong)(uVar21 & 0x1f);
      uVar7 = (uVar6 & 0xff) - 0x5b;
      bVar10 = (uVar6 & 0xff) - 0x7b < 0xffffffc6;
      if ((!bVar10 && 4 < uVar7) && (bVar10 || uVar7 != 5)) {
        pcVar15[iVar17] = (char)uVar6;
        iVar17 = iVar17 + 1;
      }
      else {
        pcVar19 = pcVar15 + iVar17;
        *pcVar19 = '[';
        pcVar19[1] = (&UNK_10e035494)[(ulong)(uVar6 >> 4) & 0xf];
        pcVar19[2] = (&UNK_10e035494)[(ulong)uVar6 & 0xf];
        iVar17 = iVar17 + 4;
        pcVar19[3] = ']';
      }
      uVar21 = uVar21 - 8;
    } while (uVar21 != 0xfffffff8);
    pcVar19 = pcVar15 + iVar17;
    if (pcVar16 != (char *)0x0) {
      lVar22 = 0;
      pcVar19[0] = ':';
      pcVar19[1] = ' ';
      iVar3 = iVar17 + 2;
      lVar1 = (long)iVar3;
      do {
        iVar20 = iVar3;
        if (pcVar16[lVar22] == '\0') break;
        pcVar15[lVar22 + lVar1] = pcVar16[lVar22];
        lVar22 = lVar22 + 1;
        iVar3 = iVar3 + 1;
        iVar20 = iVar17 + 0xc5;
      } while (lVar22 != 0xc3);
      pcVar19 = pcVar15 + iVar20;
    }
    *pcVar19 = '\0';
    return puVar12;
  }
code_r0x000109b62608:
  puVar13 = PTR____stderrp_11034bdc8;
  if (puVar12 == (undefined *)0x0) {
    uVar18 = 0;
  }
  else {
    if (*pcVar15 == '#') {
      uVar18 = 1;
      do {
        if (pcVar15[uVar18] == ' ') break;
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0xf);
    }
    else {
      uVar18 = 0;
    }
    if (*(code **)(puVar12 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar12 + 0xe0))();
      return puVar12;
    }
  }
  *(undefined8 *)(puVar8 + -0x20) = uVar11;
  *(undefined8 *)(puVar8 + -0x18) = uVar23;
  *(undefined1 **)(puVar8 + -0x10) = puVar26;
  *(undefined8 *)(puVar8 + -8) = uVar27;
  uVar11 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)(puVar8 + -0x30) = pcVar15 + (uVar18 & 0xffffffff);
  _fprintf(uVar11,&UNK_10f59f68d);
  puVar12 = (undefined *)0xa;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar13);
  return puVar12;
}



/* Entry: 109b5f9a4; end: 109b5fa63;  */

bool FUN_109b5f9a4(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  
  if ((*(ushort *)((long)param_2 + 0x4a) & 1) != 0) {
    if ((param_3 != 0) && (*param_2 != 0)) {
      dVar3 = (double)(long)(((double)*param_2 * 100000.0) / (double)param_3 + 0.5);
      bVar1 = true;
      bVar2 = false;
      if (dVar3 <= 2147483647.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar3)) {
          bVar1 = dVar3 < -2147483648.0;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2 && (int)dVar3 - 95000U < 0x2711) {
        return true;
      }
    }
    if ((param_4 == 2) || ((*(ushort *)((long)param_2 + 0x4a) >> 5 & 1) != 0)) {
      func_0x000109b62bdc(param_1,&UNK_10f59f518,2);
      return param_4 == 2;
    }
    func_0x000109b62bdc(param_1,&UNK_10f59f538,0);
  }
  return true;
}



/* Entry: 109b5fa64; end: 109b5fabb;  */

/* WARNING: Removing unreachable block (ram,0x000109b5f7bc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7c4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7cc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7d0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7dc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7f0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7e4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f7f8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f808) */
/* WARNING: Removing unreachable block (ram,0x000109b5f810) */
/* WARNING: Removing unreachable block (ram,0x000109b5f824) */
/* WARNING: Removing unreachable block (ram,0x000109b5f818) */
/* WARNING: Removing unreachable block (ram,0x000109b5f82c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f834) */
/* WARNING: Removing unreachable block (ram,0x000109b5f738) */
/* WARNING: Removing unreachable block (ram,0x000109b5f740) */
/* WARNING: Removing unreachable block (ram,0x000109b5f754) */
/* WARNING: Removing unreachable block (ram,0x000109b5f748) */
/* WARNING: Removing unreachable block (ram,0x000109b5f75c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f60c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f61c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f69c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f624) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6a4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f4d0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f4e0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f58c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f4e8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f594) */
/* WARNING: Removing unreachable block (ram,0x000109b5f5a4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f5b8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f5ac) */
/* WARNING: Removing unreachable block (ram,0x000109b5f5c0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f37c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f384) */
/* WARNING: Removing unreachable block (ram,0x000109b5f398) */
/* WARNING: Removing unreachable block (ram,0x000109b5f38c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3a0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3a8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3bc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3b0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3c4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3d4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3dc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3e0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3ec) */
/* WARNING: Removing unreachable block (ram,0x000109b5f400) */
/* WARNING: Removing unreachable block (ram,0x000109b5f3f4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f408) */
/* WARNING: Removing unreachable block (ram,0x000109b5f418) */
/* WARNING: Removing unreachable block (ram,0x000109b5f420) */
/* WARNING: Removing unreachable block (ram,0x000109b5f434) */
/* WARNING: Removing unreachable block (ram,0x000109b5f428) */
/* WARNING: Removing unreachable block (ram,0x000109b5f43c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f440) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2d4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2e8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2fc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2f0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f304) */
/* WARNING: Removing unreachable block (ram,0x000109b5f204) */
/* WARNING: Removing unreachable block (ram,0x000109b5f230) */
/* WARNING: Removing unreachable block (ram,0x000109b5f23c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f244) */
/* WARNING: Removing unreachable block (ram,0x000109b5f250) */
/* WARNING: Removing unreachable block (ram,0x000109b5f264) */
/* WARNING: Removing unreachable block (ram,0x000109b5f258) */
/* WARNING: Removing unreachable block (ram,0x000109b5f26c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f280) */
/* WARNING: Removing unreachable block (ram,0x000109b5f288) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2b8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f290) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2c0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f20c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f21c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f29c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f224) */
/* WARNING: Removing unreachable block (ram,0x000109b5f2a4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f318) */
/* WARNING: Removing unreachable block (ram,0x000109b5f320) */
/* WARNING: Removing unreachable block (ram,0x000109b5f334) */
/* WARNING: Removing unreachable block (ram,0x000109b5f328) */
/* WARNING: Removing unreachable block (ram,0x000109b5f33c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f344) */
/* WARNING: Removing unreachable block (ram,0x000109b5f358) */
/* WARNING: Removing unreachable block (ram,0x000109b5f34c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f360) */
/* WARNING: Removing unreachable block (ram,0x000109b5f4c8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f4f4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f500) */
/* WARNING: Removing unreachable block (ram,0x000109b5f508) */
/* WARNING: Removing unreachable block (ram,0x000109b5f514) */
/* WARNING: Removing unreachable block (ram,0x000109b5f528) */
/* WARNING: Removing unreachable block (ram,0x000109b5f51c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f530) */
/* WARNING: Removing unreachable block (ram,0x000109b5f540) */
/* WARNING: Removing unreachable block (ram,0x000109b5f554) */
/* WARNING: Removing unreachable block (ram,0x000109b5f548) */
/* WARNING: Removing unreachable block (ram,0x000109b5f55c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f570) */
/* WARNING: Removing unreachable block (ram,0x000109b5f578) */
/* WARNING: Removing unreachable block (ram,0x000109b5f5d4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f580) */
/* WARNING: Removing unreachable block (ram,0x000109b5f5dc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f604) */
/* WARNING: Removing unreachable block (ram,0x000109b5f630) */
/* WARNING: Removing unreachable block (ram,0x000109b5f63c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f644) */
/* WARNING: Removing unreachable block (ram,0x000109b5f650) */
/* WARNING: Removing unreachable block (ram,0x000109b5f664) */
/* WARNING: Removing unreachable block (ram,0x000109b5f658) */
/* WARNING: Removing unreachable block (ram,0x000109b5f66c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f680) */
/* WARNING: Removing unreachable block (ram,0x000109b5f688) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6b4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f690) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6bc) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6d0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6d8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6ec) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6e0) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6f4) */
/* WARNING: Removing unreachable block (ram,0x000109b5f6f8) */
/* WARNING: Removing unreachable block (ram,0x000109b5f700) */
/* WARNING: Removing unreachable block (ram,0x000109b5f714) */
/* WARNING: Removing unreachable block (ram,0x000109b5f708) */
/* WARNING: Removing unreachable block (ram,0x000109b5f71c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f720) */
/* WARNING: Removing unreachable block (ram,0x000109b5f778) */
/* WARNING: Removing unreachable block (ram,0x000109b5f780) */
/* WARNING: Removing unreachable block (ram,0x000109b5f794) */
/* WARNING: Removing unreachable block (ram,0x000109b5f788) */
/* WARNING: Removing unreachable block (ram,0x000109b5f79c) */
/* WARNING: Removing unreachable block (ram,0x000109b5f84c) */

void FUN_109b5fa64(long param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  
  sVar2 = *(short *)(param_2 + 0x7e);
  uVar1 = *(uint *)(param_2 + 8);
  if (sVar2 < 0) {
    *(uint *)(param_2 + 8) = uVar1 & 0xffffe7fa;
    if ((param_1 != 0) && (param_2 != 0)) {
      if ((*(uint *)(param_2 + 300) & 0x10) != 0) {
        lVar3 = *(long *)(param_2 + 0x80);
        if (lVar3 != 0) {
          if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
            _free(lVar3);
          }
          else {
            (**(code **)(param_1 + 0x3f0))(param_1);
          }
        }
        if (*(long *)(param_2 + 0x88) != 0) {
          if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
            _free(*(long *)(param_2 + 0x88));
          }
          else {
            (**(code **)(param_1 + 0x3f0))(param_1);
          }
        }
        *(long *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
      }
      *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) & 0xffffffef;
    }
    return;
  }
  uVar4 = ((int)sVar2 & 0x80U) << 4 | ((uint)(int)sVar2 >> 1 & 1) << 2;
  if (((int)sVar2 & 1U) == 0) {
    uVar4 = uVar1 & 0xfffff7fa | uVar4;
  }
  else {
    uVar4 = uVar1 & 0xfffff7fb | uVar4 | 1;
  }
  *(uint *)(param_2 + 8) = uVar4;
  return;
}



/* Entry: 109b5fabc; end: 109b5fb63;  */

int * FUN_109b5fabc(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_a0 [32];
  long lStack_80;
  int *piStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_54 [36];
  
  puVar9 = auStack_54;
  FUN_109b5fb64(puVar9,param_3);
  if ((int)puVar9 == 1) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
    FUN_109b628a0(param_1,&UNK_10f59efd4);
    return (int *)0x0;
  }
  if ((int)puVar9 == 0) {
    FUN_109b60228(param_1,param_2,param_3,auStack_54,param_4);
    return param_1;
  }
  *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  puVar11 = (uint *)&UNK_10f59efeb;
  piVar10 = param_1;
  FUN_109b6244c();
  uVar1 = *puVar11;
  if (((100000 < uVar1) || (uVar14 = puVar11[1], (int)uVar14 < 0)) ||
     ((int)(100000 - uVar1) < (int)uVar14)) {
    return (int *)0x1;
  }
  uVar12 = puVar11[2];
  if (100000 < uVar12) {
    return (int *)0x1;
  }
  uVar2 = puVar11[3];
  if ((int)uVar2 < 0) {
    return (int *)0x1;
  }
  if ((int)(100000 - uVar12) < (int)uVar2) {
    return (int *)0x1;
  }
  uVar3 = puVar11[4];
  if (100000 < uVar3) {
    return (int *)0x1;
  }
  uVar4 = puVar11[5];
  if ((int)uVar4 < 0) {
    return (int *)0x1;
  }
  if ((int)uVar4 <= (int)(100000 - uVar3)) {
    uVar5 = puVar11[6];
    if (100000 < uVar5) {
      return (int *)0x1;
    }
    uVar6 = puVar11[7];
    if (4 < (int)uVar6) {
      if ((int)(100000 - uVar5) < (int)uVar6) {
        return (int *)0x1;
      }
      pcStack_68 = FUN_109b5fb64;
      iVar16 = 0;
      iVar13 = uVar12 - uVar3;
      if ((iVar13 != 0) && (uVar14 != uVar4)) {
        dVar19 = (double)(long)(((double)iVar13 * (double)(int)(uVar14 - uVar4)) / 7.0 + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar19 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar19)) {
            bVar7 = dVar19 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return (int *)0x2;
        }
        iVar16 = (int)dVar19;
      }
      iVar17 = 0;
      iVar15 = uVar1 - uVar3;
      if ((iVar15 != 0) && (uVar2 != uVar4)) {
        dVar19 = (double)(long)(((double)iVar15 * (double)(int)(uVar2 - uVar4)) / 7.0 + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar19 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar19)) {
            bVar7 = dVar19 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return (int *)0x2;
        }
        iVar17 = (int)dVar19;
      }
      iVar18 = 0;
      if ((uVar12 != uVar3) && (uVar6 != uVar4)) {
        dVar19 = (double)(long)(((double)iVar13 * (double)(int)(uVar6 - uVar4)) / 7.0 + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar19 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar19)) {
            bVar7 = dVar19 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return (int *)0x2;
        }
        iVar18 = (int)dVar19;
      }
      iVar13 = 0;
      if ((uVar2 != uVar4) && (uVar5 != uVar3)) {
        dVar19 = (double)(long)(((double)(int)(uVar2 - uVar4) * (double)(int)(uVar5 - uVar3)) / 7.0
                               + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar19 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar19)) {
            bVar7 = dVar19 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return (int *)0x2;
        }
        iVar13 = (int)dVar19;
      }
      if (iVar18 - iVar13 != 0) {
        if (iVar16 == iVar17) {
          uVar12 = 0;
        }
        else {
          dVar19 = (double)(long)(((double)uVar6 * (double)(iVar16 - iVar17)) /
                                  (double)(iVar18 - iVar13) + 0.5);
          bVar7 = true;
          bVar8 = false;
          if (dVar19 <= 2147483647.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dVar19)) {
              bVar7 = dVar19 < -2147483648.0;
              bVar8 = false;
            }
          }
          if (bVar7 != bVar8) {
            return (int *)0x1;
          }
          uVar12 = (uint)dVar19;
        }
        if ((int)uVar12 <= (int)uVar6) {
          return (int *)0x1;
        }
        iVar13 = 0;
        if ((uVar14 != uVar4) && (uVar5 != uVar3)) {
          dVar19 = (double)(long)(((double)(int)(uVar14 - uVar4) * (double)(int)(uVar5 - uVar3)) /
                                  7.0 + 0.5);
          bVar7 = true;
          bVar8 = false;
          if (dVar19 <= 2147483647.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dVar19)) {
              bVar7 = dVar19 < -2147483648.0;
              bVar8 = false;
            }
          }
          if (bVar7 != bVar8) {
            return (int *)0x2;
          }
          iVar13 = (int)dVar19;
        }
        iVar18 = 0;
        if ((uVar1 != uVar3) && (uVar6 != uVar4)) {
          dVar19 = (double)(long)(((double)iVar15 * (double)(int)(uVar6 - uVar4)) / 7.0 + 0.5);
          bVar7 = true;
          bVar8 = false;
          if (dVar19 <= 2147483647.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dVar19)) {
              bVar7 = dVar19 < -2147483648.0;
              bVar8 = false;
            }
          }
          if (bVar7 != bVar8) {
            return (int *)0x2;
          }
          iVar18 = (int)dVar19;
        }
        if (iVar13 - iVar18 != 0) {
          if (iVar16 == iVar17) {
            uVar14 = 0;
          }
          else {
            dVar19 = (double)(long)(((double)uVar6 * (double)(iVar16 - iVar17)) /
                                    (double)(iVar13 - iVar18) + 0.5);
            bVar7 = true;
            bVar8 = false;
            if (dVar19 <= 2147483647.0) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar19)) {
                bVar7 = dVar19 < -2147483648.0;
                bVar8 = false;
              }
            }
            if (bVar7 != bVar8) {
              return (int *)0x1;
            }
            uVar14 = (uint)dVar19;
          }
          if ((int)uVar6 < (int)uVar14) {
            dVar19 = 10000000000.0 / (double)uVar6 + 0.5;
            dVar20 = (double)(long)dVar19;
            bVar7 = false;
            bVar8 = true;
            if (-2147483648.0 <= dVar20) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar20)) {
                bVar7 = dVar20 == 2147483647.0;
                bVar8 = 2147483647.0 <= dVar20;
              }
            }
            iVar13 = (int)dVar19;
            if (bVar8 && !bVar7) {
              iVar13 = 0;
            }
            dVar20 = (double)uVar12;
            dVar19 = 10000000000.0 / dVar20 + 0.5;
            dVar22 = (double)(long)dVar19;
            bVar7 = false;
            bVar8 = true;
            if (-2147483648.0 <= dVar22) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar22)) {
                bVar7 = dVar22 == 2147483647.0;
                bVar8 = 2147483647.0 <= dVar22;
              }
            }
            iVar16 = (int)dVar19;
            dVar19 = (double)uVar14;
            if (bVar8 && !bVar7) {
              iVar16 = 0;
            }
            dVar22 = 10000000000.0 / dVar19 + 0.5;
            dVar21 = (double)(long)dVar22;
            bVar7 = false;
            bVar8 = true;
            if (-2147483648.0 <= dVar21) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar21)) {
                bVar7 = dVar21 == 2147483647.0;
                bVar8 = 2147483647.0 <= dVar21;
              }
            }
            iVar15 = (int)dVar22;
            if (bVar8 && !bVar7) {
              iVar15 = 0;
            }
            uVar14 = iVar13 - (iVar16 + iVar15);
            if (0 < (int)uVar14) {
              iVar13 = 0;
              if (uVar1 != 0) {
                dVar22 = (double)(long)(((double)uVar1 * 100000.0) / dVar20 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar22 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar22)) {
                    bVar7 = dVar22 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar13 = (int)dVar22;
              }
              *piVar10 = iVar13;
              iVar13 = 0;
              if (puVar11[1] != 0) {
                dVar22 = (double)(long)(((double)(int)puVar11[1] * 100000.0) / dVar20 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar22 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar22)) {
                    bVar7 = dVar22 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar13 = (int)dVar22;
              }
              piVar10[1] = iVar13;
              iVar13 = 100000 - (puVar11[1] + *puVar11);
              iVar16 = 0;
              if (iVar13 != 0) {
                dVar20 = (double)(long)(((double)iVar13 * 100000.0) / dVar20 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar20 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar20)) {
                    bVar7 = dVar20 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar16 = (int)dVar20;
              }
              piVar10[2] = iVar16;
              iVar13 = 0;
              if (puVar11[2] != 0) {
                dVar20 = (double)(long)(((double)(int)puVar11[2] * 100000.0) / dVar19 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar20 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar20)) {
                    bVar7 = dVar20 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar13 = (int)dVar20;
              }
              piVar10[3] = iVar13;
              iVar13 = 0;
              if (puVar11[3] != 0) {
                dVar20 = (double)(long)(((double)(int)puVar11[3] * 100000.0) / dVar19 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar20 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar20)) {
                    bVar7 = dVar20 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar13 = (int)dVar20;
              }
              piVar10[4] = iVar13;
              iVar13 = 100000 - (puVar11[3] + puVar11[2]);
              iVar16 = 0;
              if (iVar13 != 0) {
                dVar19 = (double)(long)(((double)iVar13 * 100000.0) / dVar19 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar19 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar19)) {
                    bVar7 = dVar19 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar16 = (int)dVar19;
              }
              piVar10[5] = iVar16;
              iVar13 = 0;
              if (puVar11[4] != 0) {
                dVar19 = (double)(long)(((double)uVar14 * (double)(int)puVar11[4]) / 100000.0 + 0.5)
                ;
                bVar7 = true;
                bVar8 = false;
                if (dVar19 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar19)) {
                    bVar7 = dVar19 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar13 = (int)dVar19;
              }
              piVar10[6] = iVar13;
              iVar13 = 0;
              if (puVar11[5] != 0) {
                dVar19 = (double)(long)(((double)uVar14 * (double)(int)puVar11[5]) / 100000.0 + 0.5)
                ;
                bVar7 = true;
                bVar8 = false;
                if (dVar19 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar19)) {
                    bVar7 = dVar19 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar13 = (int)dVar19;
              }
              piVar10[7] = iVar13;
              iVar13 = 100000 - (puVar11[5] + puVar11[4]);
              iVar16 = 0;
              if (iVar13 != 0) {
                dVar19 = (double)(long)(((double)uVar14 * (double)iVar13) / 100000.0 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar19 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar19)) {
                    bVar7 = dVar19 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return (int *)0x1;
                }
                iVar16 = (int)dVar19;
              }
              piVar10[8] = iVar16;
              puVar9 = auStack_a0;
              lStack_80 = param_2;
              piStack_78 = param_1;
              puStack_70 = &stack0xfffffffffffffff0;
              FUN_109b62198(puVar9,piVar10);
              if ((int)puVar9 == 0) {
                FUN_109b607dc(puVar11,auStack_a0,5);
                return (int *)(ulong)((uint)puVar11 ^ 1);
              }
            }
          }
        }
      }
      return (int *)0x1;
    }
    return (int *)0x1;
  }
  return (int *)0x1;
}



/* Entry: 109b5fb64; end: 109b60227;  */

uint FUN_109b5fb64(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_40 [32];
  
  uVar1 = *param_2;
  if (((100000 < uVar1) || (uVar12 = param_2[1], (int)uVar12 < 0)) ||
     ((int)(100000 - uVar1) < (int)uVar12)) {
    return 1;
  }
  uVar10 = param_2[2];
  if (100000 < uVar10) {
    return 1;
  }
  uVar2 = param_2[3];
  if ((int)uVar2 < 0) {
    return 1;
  }
  if ((int)(100000 - uVar10) < (int)uVar2) {
    return 1;
  }
  uVar3 = param_2[4];
  if (100000 < uVar3) {
    return 1;
  }
  uVar4 = param_2[5];
  if ((int)uVar4 < 0) {
    return 1;
  }
  if ((int)uVar4 <= (int)(100000 - uVar3)) {
    uVar5 = param_2[6];
    if (100000 < uVar5) {
      return 1;
    }
    uVar6 = param_2[7];
    if (4 < (int)uVar6) {
      if ((int)(100000 - uVar5) < (int)uVar6) {
        return 1;
      }
      iVar14 = 0;
      iVar11 = uVar10 - uVar3;
      if ((iVar11 != 0) && (uVar12 != uVar4)) {
        dVar17 = (double)(long)(((double)iVar11 * (double)(int)(uVar12 - uVar4)) / 7.0 + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar17 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar17)) {
            bVar7 = dVar17 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return 2;
        }
        iVar14 = (int)dVar17;
      }
      iVar15 = 0;
      iVar13 = uVar1 - uVar3;
      if ((iVar13 != 0) && (uVar2 != uVar4)) {
        dVar17 = (double)(long)(((double)iVar13 * (double)(int)(uVar2 - uVar4)) / 7.0 + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar17 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar17)) {
            bVar7 = dVar17 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return 2;
        }
        iVar15 = (int)dVar17;
      }
      iVar16 = 0;
      if ((uVar10 != uVar3) && (uVar6 != uVar4)) {
        dVar17 = (double)(long)(((double)iVar11 * (double)(int)(uVar6 - uVar4)) / 7.0 + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar17 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar17)) {
            bVar7 = dVar17 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return 2;
        }
        iVar16 = (int)dVar17;
      }
      iVar11 = 0;
      if ((uVar2 != uVar4) && (uVar5 != uVar3)) {
        dVar17 = (double)(long)(((double)(int)(uVar2 - uVar4) * (double)(int)(uVar5 - uVar3)) / 7.0
                               + 0.5);
        bVar7 = true;
        bVar8 = false;
        if (dVar17 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar17)) {
            bVar7 = dVar17 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 != bVar8) {
          return 2;
        }
        iVar11 = (int)dVar17;
      }
      if (iVar16 - iVar11 != 0) {
        if (iVar14 == iVar15) {
          uVar10 = 0;
        }
        else {
          dVar17 = (double)(long)(((double)uVar6 * (double)(iVar14 - iVar15)) /
                                  (double)(iVar16 - iVar11) + 0.5);
          bVar7 = true;
          bVar8 = false;
          if (dVar17 <= 2147483647.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dVar17)) {
              bVar7 = dVar17 < -2147483648.0;
              bVar8 = false;
            }
          }
          if (bVar7 != bVar8) {
            return 1;
          }
          uVar10 = (uint)dVar17;
        }
        if ((int)uVar10 <= (int)uVar6) {
          return 1;
        }
        iVar11 = 0;
        if ((uVar12 != uVar4) && (uVar5 != uVar3)) {
          dVar17 = (double)(long)(((double)(int)(uVar12 - uVar4) * (double)(int)(uVar5 - uVar3)) /
                                  7.0 + 0.5);
          bVar7 = true;
          bVar8 = false;
          if (dVar17 <= 2147483647.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dVar17)) {
              bVar7 = dVar17 < -2147483648.0;
              bVar8 = false;
            }
          }
          if (bVar7 != bVar8) {
            return 2;
          }
          iVar11 = (int)dVar17;
        }
        iVar16 = 0;
        if ((uVar1 != uVar3) && (uVar6 != uVar4)) {
          dVar17 = (double)(long)(((double)iVar13 * (double)(int)(uVar6 - uVar4)) / 7.0 + 0.5);
          bVar7 = true;
          bVar8 = false;
          if (dVar17 <= 2147483647.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dVar17)) {
              bVar7 = dVar17 < -2147483648.0;
              bVar8 = false;
            }
          }
          if (bVar7 != bVar8) {
            return 2;
          }
          iVar16 = (int)dVar17;
        }
        if (iVar11 - iVar16 != 0) {
          if (iVar14 == iVar15) {
            uVar12 = 0;
          }
          else {
            dVar17 = (double)(long)(((double)uVar6 * (double)(iVar14 - iVar15)) /
                                    (double)(iVar11 - iVar16) + 0.5);
            bVar7 = true;
            bVar8 = false;
            if (dVar17 <= 2147483647.0) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar17)) {
                bVar7 = dVar17 < -2147483648.0;
                bVar8 = false;
              }
            }
            if (bVar7 != bVar8) {
              return 1;
            }
            uVar12 = (uint)dVar17;
          }
          if ((int)uVar6 < (int)uVar12) {
            dVar17 = 10000000000.0 / (double)uVar6 + 0.5;
            dVar18 = (double)(long)dVar17;
            bVar7 = false;
            bVar8 = true;
            if (-2147483648.0 <= dVar18) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar18)) {
                bVar7 = dVar18 == 2147483647.0;
                bVar8 = 2147483647.0 <= dVar18;
              }
            }
            iVar11 = (int)dVar17;
            if (bVar8 && !bVar7) {
              iVar11 = 0;
            }
            dVar18 = (double)uVar10;
            dVar17 = 10000000000.0 / dVar18 + 0.5;
            dVar20 = (double)(long)dVar17;
            bVar7 = false;
            bVar8 = true;
            if (-2147483648.0 <= dVar20) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar20)) {
                bVar7 = dVar20 == 2147483647.0;
                bVar8 = 2147483647.0 <= dVar20;
              }
            }
            iVar14 = (int)dVar17;
            dVar17 = (double)uVar12;
            if (bVar8 && !bVar7) {
              iVar14 = 0;
            }
            dVar20 = 10000000000.0 / dVar17 + 0.5;
            dVar19 = (double)(long)dVar20;
            bVar7 = false;
            bVar8 = true;
            if (-2147483648.0 <= dVar19) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar19)) {
                bVar7 = dVar19 == 2147483647.0;
                bVar8 = 2147483647.0 <= dVar19;
              }
            }
            iVar13 = (int)dVar20;
            if (bVar8 && !bVar7) {
              iVar13 = 0;
            }
            uVar12 = iVar11 - (iVar14 + iVar13);
            if (0 < (int)uVar12) {
              iVar11 = 0;
              if (uVar1 != 0) {
                dVar20 = (double)(long)(((double)uVar1 * 100000.0) / dVar18 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar20 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar20)) {
                    bVar7 = dVar20 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar11 = (int)dVar20;
              }
              *param_1 = iVar11;
              iVar11 = 0;
              if (param_2[1] != 0) {
                dVar20 = (double)(long)(((double)(int)param_2[1] * 100000.0) / dVar18 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar20 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar20)) {
                    bVar7 = dVar20 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar11 = (int)dVar20;
              }
              param_1[1] = iVar11;
              iVar11 = 100000 - (param_2[1] + *param_2);
              iVar14 = 0;
              if (iVar11 != 0) {
                dVar18 = (double)(long)(((double)iVar11 * 100000.0) / dVar18 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar18 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar18)) {
                    bVar7 = dVar18 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar14 = (int)dVar18;
              }
              param_1[2] = iVar14;
              iVar11 = 0;
              if (param_2[2] != 0) {
                dVar18 = (double)(long)(((double)(int)param_2[2] * 100000.0) / dVar17 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar18 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar18)) {
                    bVar7 = dVar18 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar11 = (int)dVar18;
              }
              param_1[3] = iVar11;
              iVar11 = 0;
              if (param_2[3] != 0) {
                dVar18 = (double)(long)(((double)(int)param_2[3] * 100000.0) / dVar17 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar18 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar18)) {
                    bVar7 = dVar18 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar11 = (int)dVar18;
              }
              param_1[4] = iVar11;
              iVar11 = 100000 - (param_2[3] + param_2[2]);
              iVar14 = 0;
              if (iVar11 != 0) {
                dVar17 = (double)(long)(((double)iVar11 * 100000.0) / dVar17 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar17 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar17)) {
                    bVar7 = dVar17 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar14 = (int)dVar17;
              }
              param_1[5] = iVar14;
              iVar11 = 0;
              if (param_2[4] != 0) {
                dVar17 = (double)(long)(((double)uVar12 * (double)(int)param_2[4]) / 100000.0 + 0.5)
                ;
                bVar7 = true;
                bVar8 = false;
                if (dVar17 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar17)) {
                    bVar7 = dVar17 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar11 = (int)dVar17;
              }
              param_1[6] = iVar11;
              iVar11 = 0;
              if (param_2[5] != 0) {
                dVar17 = (double)(long)(((double)uVar12 * (double)(int)param_2[5]) / 100000.0 + 0.5)
                ;
                bVar7 = true;
                bVar8 = false;
                if (dVar17 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar17)) {
                    bVar7 = dVar17 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar11 = (int)dVar17;
              }
              param_1[7] = iVar11;
              iVar11 = 100000 - (param_2[5] + param_2[4]);
              iVar14 = 0;
              if (iVar11 != 0) {
                dVar17 = (double)(long)(((double)uVar12 * (double)iVar11) / 100000.0 + 0.5);
                bVar7 = true;
                bVar8 = false;
                if (dVar17 <= 2147483647.0) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(dVar17)) {
                    bVar7 = dVar17 < -2147483648.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 != bVar8) {
                  return 1;
                }
                iVar14 = (int)dVar17;
              }
              param_1[8] = iVar14;
              puVar9 = auStack_40;
              FUN_109b62198(puVar9,param_1);
              if ((int)puVar9 == 0) {
                FUN_109b607dc(param_2,auStack_40,5);
                return (uint)param_2 ^ 1;
              }
            }
          }
        }
      }
      return 1;
    }
    return 1;
  }
  return 1;
}



/* Entry: 109b60228; end: 109b6045b;  */

undefined8
FUN_109b60228(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(ushort *)(param_2 + 0x4a);
  if ((short)uVar2 < 0) {
LAB_109b602f0:
    uVar4 = 0;
  }
  else {
    if ((param_5 < 2) && (((uint)(int)(short)uVar2 >> 1 & 1) != 0)) {
      puVar3 = param_3;
      FUN_109b607dc(param_3,param_2 + 4,100);
      if ((int)puVar3 == 0) {
        *(ushort *)(param_2 + 0x4a) = uVar2 | 0x8000;
        FUN_109b628a0(param_1,&UNK_10f59f563);
        goto LAB_109b602f0;
      }
      if (param_5 == 0) {
        return 1;
      }
    }
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(param_2 + 0xc) = param_3[1];
    *(undefined8 *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 0x1c) = uVar6;
    *(undefined8 *)(param_2 + 0x14) = uVar5;
    uVar4 = *param_4;
    uVar6 = param_4[3];
    uVar5 = param_4[2];
    *(undefined8 *)(param_2 + 0x2c) = param_4[1];
    *(undefined8 *)(param_2 + 0x24) = uVar4;
    *(undefined8 *)(param_2 + 0x3c) = uVar6;
    *(undefined8 *)(param_2 + 0x34) = uVar5;
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_4 + 4);
    FUN_109b607dc(param_3,&UNK_10e035394,1000);
    uVar1 = uVar2 & 0x7fbd | 2;
    if ((int)param_3 != 0) {
      uVar1 = uVar2 | 0x42;
    }
    *(ushort *)(param_2 + 0x4a) = uVar1;
    uVar4 = 2;
  }
  return uVar4;
}



/* Entry: 109b6045c; end: 109b607db;  */

int * FUN_109b6045c(int *param_1,long param_2,char *param_3,ulong param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  char acStack_104 [22];
  char acStack_ee [2];
  undefined4 uStack_ec;
  char acStack_e8 [192];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
  cVar4 = 'p';
  lVar10 = 0;
  do {
    acStack_ee[lVar10 + 2] = cVar4;
    lVar1 = lVar10 + 1;
    cVar4 = (&UNK_10f59f580)[lVar10];
    lVar10 = lVar1;
  } while (lVar1 != 9);
  acStack_e8[5] = 0;
  if ((param_3 == (char *)0x0) || (cVar4 = *param_3, cVar4 == '\0')) {
    uVar9 = 9;
  }
  else {
    uVar9 = 9;
    do {
      uVar6 = uVar9;
      param_3 = param_3 + 1;
      uVar9 = uVar6 + 1;
      acStack_ee[uVar6 + 2] = cVar4;
      cVar4 = *param_3;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x56);
    acStack_ee[uVar6 + 3] = '\0';
    if (0xc1 < uVar6) {
      uVar6 = 0xc3;
      goto LAB_109b6053c;
    }
  }
  cVar4 = '\'';
  lVar10 = 3;
  pcVar8 = ": ";
  do {
    uVar6 = uVar9 + 1;
    acStack_ee[uVar9 + 2] = cVar4;
    cVar4 = *pcVar8;
    lVar10 = lVar10 + -1;
    uVar9 = uVar6;
    pcVar8 = pcVar8 + 1;
  } while (lVar10 != 0);
LAB_109b6053c:
  acStack_ee[uVar6 + 2] = '\0';
  uVar9 = param_4 >> 0x18;
  if ((((((uVar9 == 0x20) || (0xfffffffffffffff5 < uVar9 - 0x3a)) ||
        (0xffffffffffffffe5 < (uVar9 & 0xffffffffffffffdf) - 0x5b)) &&
       (((0xffffffffffffffe5 < (param_4 >> 0x10 & 0xdf) - 0x5b ||
         (uVar9 = param_4 >> 0x10 & 0xff, uVar9 == 0x20)) || (0xfffffffffffffff5 < uVar9 - 0x3a))))
      && (((0xffffffffffffffe5 < (param_4 >> 8 & 0xdf) - 0x5b ||
           (uVar9 = param_4 >> 8 & 0xff, uVar9 == 0x20)) || (0xfffffffffffffff5 < uVar9 - 0x3a))))
     && (((0xffffffffffffffe5 < (param_4 & 0xdf) - 0x5b || ((param_4 & 0xff) == 0x20)) ||
         (0xfffffffffffffff5 < (param_4 & 0xff) - 0x3a)))) {
    acStack_ee[uVar6 + 2] = '\'';
    uVar11 = (uint)(param_4 >> 0x18) & 0xff;
    if (0x5e < uVar11 - 0x20) {
      uVar11 = 0x3f;
    }
    acStack_ee[uVar6 + 3] = (char)uVar11;
    cVar4 = (char)(param_4 >> 0x10);
    uVar11 = (uint)param_4;
    if (0x5e < (uVar11 >> 0x10 & 0xff) - 0x20) {
      cVar4 = '?';
    }
    acStack_ee[uVar6 + 4] = cVar4;
    cVar4 = (char)(param_4 >> 8);
    if (0x5e < (uVar11 >> 8 & 0xff) - 0x20) {
      cVar4 = '?';
    }
    acStack_ee[uVar6 + 5] = cVar4;
    if (0x5e < (uVar11 & 0xff) - 0x20) {
      uVar11 = 0x3f;
    }
    acStack_ee[uVar6 + 6] = (char)uVar11;
    acStack_ee[uVar6 + 7] = '\'';
    (acStack_ee + uVar6 + 8)[0] = ':';
    (acStack_ee + uVar6 + 8)[1] = ' ';
    uVar6 = uVar6 + 8;
  }
  else {
    acStack_ee[1] = 0;
    lVar10 = 0;
    do {
      if ((param_4 == 0) && ((int)lVar10 != 0)) {
        pcVar8 = acStack_ee + lVar10 + 1;
        break;
      }
      pcVar8 = acStack_104;
      acStack_ee[lVar10] = (&UNK_10f59f617)[param_4 & 0xf];
      param_4 = param_4 >> 4;
      pcVar2 = acStack_ee + lVar10;
      lVar10 = lVar10 + -1;
    } while (pcVar8 < pcVar2);
    if (uVar6 < 0xc4) {
      if (uVar6 != 0xc3) {
        cVar4 = *pcVar8;
        uVar9 = uVar6;
        while (uVar6 = uVar9, cVar4 != '\0') {
          pcVar8 = pcVar8 + 1;
          acStack_ee[uVar9 + 2] = cVar4;
          uVar6 = uVar9 + 1;
          if (0xc1 < uVar9) break;
          uVar9 = uVar6;
          cVar4 = *pcVar8;
        }
      }
      acStack_ee[uVar6 + 2] = '\0';
      if (uVar6 < 0xc3) {
        uVar9 = 0xc2 - uVar6;
        if (1 < uVar9) {
          uVar9 = 2;
        }
        lVar10 = uVar9 + 1;
        cVar4 = 'h';
        uVar9 = uVar6;
        pcVar8 = ": ";
        do {
          uVar6 = uVar9 + 1;
          acStack_ee[uVar9 + 2] = cVar4;
          cVar4 = *pcVar8;
          lVar10 = lVar10 + -1;
          uVar9 = uVar6;
          pcVar8 = pcVar8 + 1;
        } while (lVar10 != 0);
      }
      else {
        uVar6 = 0xc3;
      }
      acStack_ee[uVar6 + 2] = '\0';
    }
  }
  if (uVar6 < 0xc4) {
    if ((param_5 != (char *)0x0) && (uVar6 != 0xc3)) {
      cVar4 = *param_5;
      uVar9 = uVar6;
      while (uVar6 = uVar9, cVar4 != '\0') {
        param_5 = param_5 + 1;
        acStack_ee[uVar9 + 2] = cVar4;
        uVar6 = uVar9 + 1;
        if (0xc1 < uVar9) break;
        uVar9 = uVar6;
        cVar4 = *param_5;
      }
    }
    acStack_ee[uVar6 + 2] = '\0';
  }
  iVar5 = 1;
  if (param_2 != 0) {
    iVar5 = 2;
  }
  piVar3 = (int *)(acStack_ee + 2);
  func_0x000109b62bdc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (((param_1[6] < piVar3[6] - iVar5 || piVar3[6] + iVar5 < param_1[6]) ||
        (param_1[7] < piVar3[7] - iVar5 || piVar3[7] + iVar5 < param_1[7])) ||
       (*param_1 < *piVar3 - iVar5 || *piVar3 + iVar5 < *param_1)) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)0x0;
      if ((piVar3[1] - iVar5 <= param_1[1]) && (param_1[1] <= piVar3[1] + iVar5)) {
        piVar7 = (int *)0x0;
        if ((piVar3[2] - iVar5 <= param_1[2]) && (param_1[2] <= piVar3[2] + iVar5)) {
          piVar7 = (int *)0x0;
          if ((piVar3[3] - iVar5 <= param_1[3]) && (param_1[3] <= piVar3[3] + iVar5)) {
            piVar7 = (int *)0x0;
            if ((piVar3[4] - iVar5 <= param_1[4]) && (param_1[4] <= piVar3[4] + iVar5)) {
              piVar7 = (int *)(ulong)(piVar3[5] - iVar5 <= param_1[5] &&
                                     param_1[5] <= piVar3[5] + iVar5);
            }
          }
        }
      }
    }
    return piVar7;
  }
  return param_1;
}



/* Entry: 109b607dc; end: 109b608eb;  */

bool FUN_109b607dc(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  
  if (((param_1[6] < param_2[6] - param_3 || param_2[6] + param_3 < param_1[6]) ||
      (param_1[7] < param_2[7] - param_3 || param_2[7] + param_3 < param_1[7])) ||
     (*param_1 < *param_2 - param_3 || *param_2 + param_3 < *param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((param_2[1] - param_3 <= param_1[1]) && (param_1[1] <= param_2[1] + param_3)) {
      bVar1 = false;
      if ((param_2[2] - param_3 <= param_1[2]) && (param_1[2] <= param_2[2] + param_3)) {
        bVar1 = false;
        if ((param_2[3] - param_3 <= param_1[3]) && (param_1[3] <= param_2[3] + param_3)) {
          bVar1 = false;
          if ((param_2[4] - param_3 <= param_1[4]) && (param_1[4] <= param_2[4] + param_3)) {
            bVar1 = param_2[5] - param_3 <= param_1[5] && param_1[5] <= param_2[5] + param_3;
          }
        }
      }
    }
  }
  return bVar1;
}



/* Entry: 109b608ec; end: 109b6093f;  */

undefined8 FUN_109b608ec(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 < 0x84) ||
     ((*(ulong *)(param_1 + 0x428) != 0 && (*(ulong *)(param_1 + 0x428) < (ulong)param_4)))) {
    FUN_109b6045c();
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109b60940; end: 109b60c6b;  */

undefined8
FUN_109b60940(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint *param_5,
             uint param_6)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar1 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (uVar1 != param_4) {
    puVar2 = &UNK_10f59f0b1;
    param_4 = uVar1;
    goto LAB_109b609f4;
  }
  if (((param_4 & 3) != 0) && (3 < (byte)param_5[2])) {
    puVar2 = &UNK_10f59f0cf;
    goto LAB_109b609f4;
  }
  uVar1 = (param_5[0x20] & 0xff00ff00) >> 8 | (param_5[0x20] & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (0x1555554a < uVar1 || param_4 < uVar1 * 0xc + 0x84) {
    puVar2 = &UNK_10f59f0de;
    param_4 = uVar1;
    goto LAB_109b609f4;
  }
  uVar1 = (param_5[0x10] & 0xff00ff00) >> 8 | (param_5[0x10] & 0xff00ff) << 8;
  param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (0xfffe < param_4) {
    puVar2 = &UNK_10f59f0f2;
    goto LAB_109b609f4;
  }
  if (3 < param_4) {
    FUN_109b6045c(param_1,0,param_3,param_4,&UNK_10f59f10b);
  }
  uVar1 = (param_5[9] & 0xff00ff00) >> 8 | (param_5[9] & 0xff00ff) << 8;
  param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_4 != 0x61637370) {
    puVar2 = &UNK_10f59f128;
    goto LAB_109b609f4;
  }
  if (*(long *)(param_5 + 0x11) != 0x100d6f60000 || param_5[0x13] != 0x2dd30000) {
    FUN_109b6045c(param_1,0,param_3,0,&UNK_10f59f13a);
  }
  uVar1 = (param_5[4] & 0xff00ff00) >> 8 | (param_5[4] & 0xff00ff) << 8;
  param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_4 == 0x47524159) {
    if ((param_6 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f59f183;
      param_4 = 0x47524159;
      goto LAB_109b609f4;
    }
  }
  else {
    if (param_4 != 0x52474220) {
      puVar2 = &UNK_10f59f1ad;
      goto LAB_109b609f4;
    }
    if ((param_6 >> 1 & 1) == 0) {
      puVar2 = &UNK_10f59f154;
      param_4 = 0x52474220;
      goto LAB_109b609f4;
    }
  }
  uVar1 = (param_5[3] & 0xff00ff00) >> 8 | (param_5[3] & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((int)uVar1 < 0x6e6d636c) {
    if (uVar1 == 0x61627374) {
      puVar2 = &UNK_10f59f1cd;
      param_4 = 0x61627374;
      goto LAB_109b609f4;
    }
    if (uVar1 == 0x6c696e6b) {
      puVar2 = &UNK_10f59f1f3;
      param_4 = 0x6c696e6b;
      goto LAB_109b609f4;
    }
    uVar3 = 0x6d6e7472;
LAB_109b60bb4:
    if (uVar1 != uVar3) {
      puVar2 = &UNK_10f59f243;
LAB_109b60c10:
      FUN_109b6045c(param_1,0,param_3,uVar1,puVar2);
    }
  }
  else {
    if ((int)uVar1 < 0x73636e72) {
      if (uVar1 != 0x6e6d636c) {
        uVar3 = 0x70727472;
        goto LAB_109b60bb4;
      }
      puVar2 = &UNK_10f59f21b;
      uVar1 = 0x6e6d636c;
      goto LAB_109b60c10;
    }
    if (uVar1 != 0x73636e72) {
      uVar3 = 0x73706163;
      goto LAB_109b60bb4;
    }
  }
  uVar1 = (param_5[5] & 0xff00ff00) >> 8 | (param_5[5] & 0xff00ff) << 8;
  param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_4 == 0x4c616220) {
    return 1;
  }
  if (param_4 == 0x58595a20) {
    return 1;
  }
  puVar2 = &UNK_10f59f262;
LAB_109b609f4:
  FUN_109b6045c(param_1,param_2,param_3,param_4,puVar2);
  return 0;
}



/* Entry: 109b60c6c; end: 109b60d4f;  */

undefined8
FUN_109b60c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar2;
  
  uVar4 = (*(uint *)(param_5 + 0x80) & 0xff00ff00) >> 8 |
          (*(uint *)(param_5 + 0x80) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar4 != 0) {
    puVar5 = (uint *)(param_5 + 0x84);
    do {
      uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
      uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (uint)(byte)puVar5[1] << 0x18 | (uint)*(byte *)((long)puVar5 + 5) << 0x10 |
              (uint)*(byte *)((long)puVar5 + 6) << 8 | (uint)*(byte *)((long)puVar5 + 7);
      if ((param_4 < uVar1) ||
         (uVar3 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8,
         param_4 - uVar1 < (uVar3 >> 0x10 | uVar3 << 0x10))) {
        FUN_109b6045c(param_1,param_2,param_3,uVar2,&UNK_10f59f27e);
        return 0;
      }
      if ((*(byte *)((long)puVar5 + 7) & 3) != 0) {
        FUN_109b6045c(param_1,0,param_3,uVar2,&UNK_10f59f29e);
      }
      puVar5 = puVar5 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 1;
}



/* Entry: 109b60d50; end: 109b60fcf;  */

/* WARNING: Possible PIC construction at 0x000109b60ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109b603b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b60ea4) */

uint * FUN_109b60d50(uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4,
                    undefined8 *param_5,uint *param_6)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  uint *unaff_x19;
  undefined8 uVar23;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *puVar24;
  ulong unaff_x22;
  ulong uVar25;
  ushort *puVar26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined8 unaff_x30;
  undefined8 uVar28;
  
  if (((param_1[0xe0] ^ 0xffffffff) & 0x30) != 0) {
    uVar25 = 0;
    uVar3 = (param_3[0x15] & 0xff00ff00) >> 8 | (param_3[0x15] & 0xff00ff) << 8;
    uVar21 = 0x10000;
    puVar26 = (ushort *)&UNK_10e0353d2;
    lVar20 = 7;
    do {
      if (((((uVar3 >> 0x10 | uVar3 << 0x10) == *(uint *)(puVar26 + -9)) &&
           (uVar4 = (param_3[0x16] & 0xff00ff00) >> 8 | (param_3[0x16] & 0xff00ff) << 8,
           (uVar4 >> 0x10 | uVar4 << 0x10) == *(uint *)(puVar26 + -7))) &&
          (uVar4 = (param_3[0x17] & 0xff00ff00) >> 8 | (param_3[0x17] & 0xff00ff) << 8,
          (uVar4 >> 0x10 | uVar4 << 0x10) == *(uint *)(puVar26 + -5))) &&
         (uVar4 = (param_3[0x18] & 0xff00ff00) >> 8 | (param_3[0x18] & 0xff00ff) << 8,
         (uVar4 >> 0x10 | uVar4 << 0x10) == *(uint *)(puVar26 + -3))) {
        if ((int)uVar25 == 0) {
          uVar21 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
          uVar25 = (ulong)(uVar21 >> 0x10 | uVar21 << 0x10);
          uVar21 = (param_3[0x10] & 0xff00ff00) >> 8 | (param_3[0x10] & 0xff00ff) << 8;
          uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
        }
        if (((int)uVar25 == *(int *)(puVar26 + -0xb)) && (uVar21 == *puVar26)) {
          if (param_4 == (undefined4 *)0x0) {
            param_4 = (undefined4 *)0x0;
            _adler32(0,0,0);
            _adler32();
          }
          if (param_4 == (undefined4 *)(ulong)*(uint *)(puVar26 + -0xf)) {
            uVar9 = 0;
            _crc32(0,0,0);
            _crc32();
            if (uVar9 == *(uint *)(puVar26 + -0xd)) {
              if (*(char *)((long)puVar26 + -1) == '\0') {
                if ((char)puVar26[-1] != '\0') {
                  uVar3 = (param_3[0x10] & 0xff00ff00) >> 8 | (param_3[0x10] & 0xff00ff) << 8;
                  uVar21 = uVar3 >> 0x10 | uVar3 << 0x10;
                  unaff_x20 = (uint *)(ulong)uVar21;
                  uVar2 = *(ushort *)((long)param_2 + 0x4a);
                  if ((short)uVar2 < 0) {
                    return (uint *)0x0;
                  }
                  unaff_x29 = &stack0xfffffffffffffff0;
                  if (uVar21 < 4) {
                    unaff_x22 = (ulong)uVar2;
                    if (((uVar2 >> 2 & 1) == 0) || (uVar21 == (ushort)param_2[0x12])) {
                      if ((uVar2 >> 5 & 1) != 0) {
                        FUN_109b628a0(param_1,&UNK_10f59f054);
                        return (uint *)0x0;
                      }
                      if ((uVar2 >> 1 & 1) != 0) {
                        iVar17 = 0xe035394;
                        FUN_109b607dc(&UNK_10e035394,param_2 + 1,100);
                        if (iVar17 == 0) {
                          pcVar14 = "cHRM chunk does not match sRGB";
                          pcVar15 = (char *)0x2;
                          unaff_x30 = 0x109b603bc;
                          puVar7 = &stack0xffffffffffffffc0;
                          unaff_x19 = param_2;
                          unaff_x21 = param_1;
                          goto SUB_109b62bdc;
                        }
                      }
                      FUN_109b5f9a4(param_1,param_2,0xb18f,2);
                      param_2[3] = 30000;
                      param_2[4] = 60000;
                      param_2[1] = 64000;
                      param_2[2] = 33000;
                      param_2[7] = 0x7a26;
                      param_2[8] = 0x8084;
                      param_2[5] = 15000;
                      param_2[6] = 6000;
                      param_2[0xb] = 0x78d;
                      param_2[0xc] = 0x8bae;
                      param_2[9] = 0xa117;
                      param_2[10] = 0x5310;
                      *(short *)(param_2 + 0x12) = (short)(uVar3 >> 0x10);
                      param_2[0x11] = 0x1734d;
                      param_2[0xf] = 0x4680;
                      param_2[0x10] = 0x1c33;
                      param_2[0xd] = 0x1175d;
                      param_2[0xe] = 0x2e8f;
                      *param_2 = 0xb18f;
                      *(ushort *)((long)param_2 + 0x4a) = uVar2 | 0xe7;
                      return (uint *)0x1;
                    }
                    puVar16 = &UNK_10f59f035;
                  }
                  else {
                    unaff_x20 = (uint *)(long)(int)uVar21;
                    puVar16 = &UNK_10f59f017;
                  }
                  FUN_109b6045c(param_1,param_2,&UNK_10f59f012,unaff_x20,puVar16);
                  return (uint *)0x0;
                }
                pcVar14 = "out-of-date sRGB profile with no signature";
                pcVar15 = (char *)0x0;
              }
              else {
                pcVar14 = "known incorrect sRGB profile";
                pcVar15 = (char *)0x2;
              }
              unaff_x30 = 0x109b60ea4;
              puVar7 = &stack0xffffffffffffffc0;
              unaff_x19 = param_1;
              unaff_x20 = param_2;
              unaff_x21 = param_3;
              unaff_x22 = uVar25;
              unaff_x29 = &stack0xfffffffffffffff0;
              goto SUB_109b62bdc;
            }
          }
          pcVar14 = "Not recognizing known sRGB profile that has been edited";
          pcVar15 = (char *)0x0;
          puVar7 = (undefined1 *)register0x00000008;
          goto SUB_109b62bdc;
        }
      }
      puVar26 = puVar26 + 0x10;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  return param_1;
SUB_109b62bdc:
  puVar12 = param_1;
  *(uint **)(puVar7 + -0x20) = unaff_x20;
  *(uint **)(puVar7 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar7 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar7 + -8) = unaff_x30;
  *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar12;
  if (-1 < *(char *)((long)puVar12 + 0x125)) goto code_r0x000109b62c0c;
  if ((int)pcVar15 < 2) {
    pcVar15 = pcVar14;
    FUN_109b62a98(puVar12,puVar7 + -0xfe);
    pcVar14 = puVar7 + -0xfe;
    FUN_109b62608();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x28)) {
      return puVar11;
    }
    goto LAB_109b62cf0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar7 + -0x28)) goto LAB_109b62cf0;
  unaff_x20 = *(uint **)(puVar7 + -0x20);
  *(uint **)(puVar7 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
  *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  unaff_x29 = puVar7 + -0x10;
  *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1 = puVar12;
  if ((*(byte *)((long)puVar12 + 0x12a) >> 4 & 1) == 0) {
    pcVar15 = pcVar14;
    func_0x000109b62a30();
  }
  else {
    pcVar15 = pcVar14;
    FUN_109b62a98(puVar12,puVar7 + -0xfe);
    pcVar14 = puVar7 + -0xfe;
    FUN_109b62608();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x28)) {
      return param_1;
    }
  }
  unaff_x30 = 0x109b62bdc;
  ___stack_chk_fail();
  puVar7 = puVar7 + -0x100;
  unaff_x19 = puVar12;
  goto SUB_109b62bdc;
code_r0x000109b62c0c:
  puVar6 = puVar7;
  if ((int)pcVar15 < 1) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar7 + -0x28)) goto LAB_109b62cf0;
    uVar28 = *(undefined8 *)(puVar7 + -8);
    uVar10 = *(undefined8 *)(puVar7 + -0x20);
    uVar23 = *(undefined8 *)(puVar7 + -0x18);
    puVar27 = *(undefined1 **)(puVar7 + -0x10);
    if ((*(byte *)((long)puVar12 + 0x12a) >> 5 & 1) != 0) goto code_r0x000109b62608;
    puVar6 = puVar7 + -0x10;
    puVar27 = puVar7 + -0x10;
    *(undefined1 **)(puVar7 + -0x10) = *(undefined1 **)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = uVar28;
    uVar28 = 0x109b62a80;
    FUN_109b6244c();
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar7 + -0x28)) {
LAB_109b62cf0:
      ___stack_chk_fail();
      *(ulong *)(puVar7 + -0x130) = unaff_x22;
      *(uint **)(puVar7 + -0x128) = unaff_x21;
      *(uint **)(puVar7 + -0x120) = unaff_x20;
      *(uint **)(puVar7 + -0x118) = puVar12;
      *(undefined1 **)(puVar7 + -0x110) = puVar7 + -0x10;
      *(code **)(puVar7 + -0x108) = FUN_109b62cf4;
      puVar12 = puVar11;
      if (puVar11 != (uint *)0x0) {
        puVar12 = *(uint **)(puVar11 + 0x32);
        if (puVar12 == (uint *)0x0) {
          puVar11[0x34] = 0;
          puVar11[0x35] = 0;
          if (pcVar15 < (char *)0xc1) {
            *(uint **)(puVar11 + 0x32) = puVar11;
            puVar12 = puVar11;
          }
          else {
            puVar12 = puVar11;
            FUN_109b63258(puVar11,pcVar15);
            *(uint **)(puVar11 + 0x32) = puVar12;
            if (puVar12 == (uint *)0x0) {
              return (uint *)0x0;
            }
            *(char **)(puVar11 + 0x34) = pcVar15;
          }
        }
        else {
          pcVar18 = *(char **)(puVar11 + 0x34);
          if (pcVar18 == (char *)0x0) {
            if (puVar12 != puVar11) {
              puVar12 = (uint *)&UNK_10f59f632;
              puVar13 = puVar11;
              pcVar18 = pcVar15;
              FUN_109b6244c();
              *(ulong *)(puVar7 + -0x160) = unaff_x22;
              *(char **)(puVar7 + -0x158) = pcVar15;
              *(char **)(puVar7 + -0x150) = pcVar14;
              *(uint **)(puVar7 + -0x148) = puVar11;
              *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0x110;
              *(undefined8 *)(puVar7 + -0x138) = 0x109b62da4;
              *(undefined8 *)(puVar7 + -0x168) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              puVar11 = puVar13;
              if (puVar13 != (uint *)0x0) {
                puVar24 = *(uint **)(puVar13 + 0x32);
                if ((puVar24 != (uint *)0x0) &&
                   (puVar24 != puVar13 && *(long *)(puVar13 + 0x34) != 0)) {
                  puVar11 = (uint *)(puVar7 + -0x228);
                  _setjmp();
                  if ((int)puVar11 == 0) {
                    puVar13[0x34] = 0;
                    puVar13[0x35] = 0;
                    *(undefined **)(puVar13 + 0x30) = PTR__longjmp_11034c548;
                    *(undefined1 **)(puVar13 + 0x32) = puVar7 + -0x228;
                    if (*(code **)(puVar13 + 0xfc) == (code *)0x0) {
                      puVar12 = puVar24;
                      _free();
                      puVar11 = puVar24;
                    }
                    else {
                      puVar11 = puVar13;
                      (**(code **)(puVar13 + 0xfc))();
                      puVar12 = puVar24;
                    }
                  }
                }
                puVar13[0x30] = 0;
                puVar13[0x31] = 0;
                puVar13[0x32] = 0;
                puVar13[0x33] = 0;
                puVar13[0x34] = 0;
                puVar13[0x35] = 0;
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x168)) {
                return puVar11;
              }
              ___stack_chk_fail();
              *(undefined1 **)(puVar7 + -0x240) = puVar7 + -0x140;
              *(code **)(puVar7 + -0x238) = FUN_109b62e60;
              if (((puVar11 != (uint *)0x0) &&
                  (puVar13 = puVar11 + 0x30, *(code **)puVar13 != (code *)0x0)) &&
                 (puVar11 = *(uint **)(puVar11 + 0x32), puVar11 != (uint *)0x0)) {
                (**(code **)puVar13)();
              }
              _abort();
              puVar13 = (uint *)0x0;
              if ((((puVar11 != (uint *)0x0) && (puVar12 != (uint *)0x0)) &&
                  ((puVar13 = (uint *)0x0, param_6 != (uint *)0x0 &&
                   ((param_5 != (undefined8 *)0x0 && (pcVar18 != (char *)0x0)))))) &&
                 ((puVar12[2] >> 0xc & 1) != 0)) {
                puVar11 = *(uint **)(puVar12 + 0x22);
                *(undefined8 *)pcVar18 = *(undefined8 *)(puVar12 + 0x20);
                *param_5 = puVar11;
                uVar3 = *puVar11;
                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                *param_6 = uVar3 >> 0x10 | uVar3 << 0x10;
                if (param_4 != (undefined4 *)0x0) {
                  *param_4 = 0;
                }
                puVar13 = (uint *)0x1000;
              }
              return puVar13;
            }
            pcVar18 = (char *)0xc0;
          }
          if (pcVar18 != pcVar15) {
            FUN_109b62608(puVar11,&UNK_10f59f651);
            return (uint *)0x0;
          }
        }
        *(char **)(puVar11 + 0x30) = pcVar14;
      }
      return puVar12;
    }
    puVar27 = *(undefined1 **)(puVar7 + -0x10);
    uVar28 = *(undefined8 *)(puVar7 + -8);
    uVar10 = *(undefined8 *)(puVar7 + -0x20);
    uVar23 = *(undefined8 *)(puVar7 + -0x18);
  }
  if ((*(byte *)((long)puVar12 + 0x12a) >> 6 & 1) == 0) {
    *(undefined1 **)(puVar6 + -0x10) = puVar27;
    *(undefined8 *)(puVar6 + -8) = uVar28;
    FUN_109b6244c();
    iVar17 = 0;
    uVar3 = puVar12[0x84];
    uVar21 = 0x18;
    do {
      uVar4 = uVar3 >> (ulong)(uVar21 & 0x1f);
      uVar5 = (uVar4 & 0xff) - 0x5b;
      bVar8 = (uVar4 & 0xff) - 0x7b < 0xffffffc6;
      if ((!bVar8 && 4 < uVar5) && (bVar8 || uVar5 != 5)) {
        pcVar14[iVar17] = (char)uVar4;
        iVar17 = iVar17 + 1;
      }
      else {
        pcVar18 = pcVar14 + iVar17;
        *pcVar18 = '[';
        pcVar18[1] = (&UNK_10e035494)[(ulong)(uVar4 >> 4) & 0xf];
        pcVar18[2] = (&UNK_10e035494)[(ulong)uVar4 & 0xf];
        iVar17 = iVar17 + 4;
        pcVar18[3] = ']';
      }
      uVar21 = uVar21 - 8;
    } while (uVar21 != 0xfffffff8);
    pcVar18 = pcVar14 + iVar17;
    if (pcVar15 != (char *)0x0) {
      lVar22 = 0;
      pcVar18[0] = ':';
      pcVar18[1] = ' ';
      iVar1 = iVar17 + 2;
      lVar20 = (long)iVar1;
      do {
        iVar19 = iVar1;
        if (pcVar15[lVar22] == '\0') break;
        pcVar14[lVar22 + lVar20] = pcVar15[lVar22];
        lVar22 = lVar22 + 1;
        iVar1 = iVar1 + 1;
        iVar19 = iVar17 + 0xc5;
      } while (lVar22 != 0xc3);
      pcVar18 = pcVar14 + iVar19;
    }
    *pcVar18 = '\0';
    return puVar12;
  }
code_r0x000109b62608:
  puVar16 = PTR____stderrp_11034bdc8;
  if (puVar12 == (uint *)0x0) {
    uVar25 = 0;
  }
  else {
    if (*pcVar14 == '#') {
      uVar25 = 1;
      do {
        if (pcVar14[uVar25] == ' ') break;
        uVar25 = uVar25 + 1;
      } while (uVar25 != 0xf);
    }
    else {
      uVar25 = 0;
    }
    if (*(code **)(puVar12 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar12 + 0x38))();
      return puVar12;
    }
  }
  *(undefined8 *)(puVar6 + -0x20) = uVar10;
  *(undefined8 *)(puVar6 + -0x18) = uVar23;
  *(undefined1 **)(puVar6 + -0x10) = puVar27;
  *(undefined8 *)(puVar6 + -8) = uVar28;
  uVar10 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)(puVar6 + -0x30) = pcVar14 + (uVar25 & 0xffffffff);
  _fprintf(uVar10,&UNK_10f59f68d);
  puVar11 = (uint *)0xa;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar16);
  return puVar11;
}



/* Entry: 109b60fd0; end: 109b61197;  */

ulong FUN_109b60fd0(ulong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,uint param_5,
                   int param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  
  if (*(char *)(param_1 + 0x3c9) != '\0') {
    return param_1;
  }
  if ((*(ushort *)(param_1 + 0x4e2) >> 1 & 1) == 0) {
    return param_1;
  }
  uVar13 = *(uint *)(param_1 + 0x4c0);
  if ((int)uVar13 < 0) {
LAB_109b61180:
    FUN_109b6244c(param_1,&UNK_10f59f2f2);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4cc);
    uVar2 = *(uint *)(param_1 + 0x4d8);
    uVar14 = uVar1 + uVar13 + uVar2;
    if ((int)uVar14 < 1) goto LAB_109b61180;
    uVar10 = 0;
    if (uVar13 != 0) {
      dVar16 = (double)(long)(((double)uVar13 * 32768.0) / (double)uVar14 + 0.5);
      bVar4 = true;
      bVar5 = false;
      if (dVar16 <= 2147483647.0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(dVar16)) {
          bVar4 = dVar16 < -2147483648.0;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) goto LAB_109b61180;
      uVar10 = (uint)dVar16;
    }
    if (((int)uVar1 < 0) || (0x8000 < uVar10)) goto LAB_109b61180;
    uVar13 = 0;
    if (uVar1 != 0) {
      dVar16 = (double)(long)(((double)uVar1 * 32768.0) / (double)uVar14 + 0.5);
      bVar4 = true;
      bVar5 = false;
      if (dVar16 <= 2147483647.0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(dVar16)) {
          bVar4 = dVar16 < -2147483648.0;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) goto LAB_109b61180;
      uVar13 = (uint)dVar16;
    }
    if (((int)uVar2 < 0) || (0x8000 < uVar13)) goto LAB_109b61180;
    if (uVar2 == 0) {
      uVar14 = 0;
    }
    else {
      dVar16 = ((double)uVar2 * 32768.0) / (double)uVar14 + 0.5;
      dVar17 = (double)(long)dVar16;
      bVar4 = true;
      bVar5 = false;
      if (dVar17 <= 2147483647.0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(dVar17)) {
          bVar4 = dVar17 < -2147483648.0;
          bVar5 = false;
        }
      }
      if ((bVar4 != bVar5) || (uVar14 = (uint)dVar16, 0x8000 < uVar14)) goto LAB_109b61180;
    }
    uVar1 = uVar13 + uVar10 + uVar14;
    if (0x8001 < uVar1) goto LAB_109b61180;
    if (uVar1 == 0x8001) {
      iVar15 = -1;
LAB_109b6112c:
      if ((uVar13 < uVar10) || (uVar13 < uVar14)) {
        if ((uVar10 < uVar13) || (uVar10 < uVar14)) {
          uVar14 = iVar15 + uVar14;
        }
        else {
          uVar10 = iVar15 + uVar10;
        }
      }
      else {
        uVar13 = iVar15 + uVar13;
      }
    }
    else if (uVar1 >> 0xf == 0) {
      iVar15 = 1;
      goto LAB_109b6112c;
    }
    if (uVar13 + uVar10 + uVar14 == 0x8000) {
      *(short *)(param_1 + 0x3ca) = (short)uVar10;
      *(short *)(param_1 + 0x3cc) = (short)uVar13;
      return param_1;
    }
  }
  uVar13 = 0xf59f2c8;
  FUN_109b6244c();
  uVar6 = param_1;
  puVar8 = param_3;
  puVar9 = param_4;
  if (uVar13 == 0) {
    puVar7 = &UNK_10f59f314;
LAB_109b611f8:
    FUN_109b62608(param_1,puVar7);
    bVar4 = true;
  }
  else {
    if ((int)uVar13 < 0) {
      puVar7 = &UNK_10f59f330;
      goto LAB_109b611f8;
    }
    bVar4 = false;
  }
  if (*(uint *)(param_1 + 0x41c) < uVar13) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f34c);
    bVar4 = true;
  }
  uVar13 = (uint)param_3;
  if (uVar13 == 0) {
    puVar7 = &UNK_10f59f373;
LAB_109b61240:
    uVar6 = param_1;
    FUN_109b62608(param_1,puVar7);
    bVar4 = true;
  }
  else if ((int)uVar13 < 0) {
    puVar7 = &UNK_10f59f390;
    goto LAB_109b61240;
  }
  if (*(uint *)(param_1 + 0x420) < uVar13) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f3ad);
    bVar4 = true;
  }
  uVar13 = (uint)param_4;
  if ((0x10 < uVar13) || ((1 << (ulong)(uVar13 & 0x1f) & 0x10116U) == 0)) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f3d5);
    bVar4 = true;
  }
  uVar14 = param_5 & 0xfffffffb;
  if ((6 < param_5) || (uVar14 == 1)) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f3ef);
    bVar4 = true;
  }
  if (((int)uVar13 < 9) || (param_5 != 3)) {
    if ((7 < (int)uVar13) || (param_5 != 4 && uVar14 != 2)) goto LAB_109b612f0;
  }
  uVar6 = param_1;
  FUN_109b62608(param_1,&UNK_10f59f40a);
  bVar4 = true;
LAB_109b612f0:
  if (1 < param_6) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f43b);
    bVar4 = true;
  }
  if (param_7 != 0) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f45c);
    bVar4 = true;
  }
  if (((*(byte *)(param_1 + 0x125) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x3d8) != 0)) {
    uVar6 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f47f);
  }
  if ((param_8 == 0) ||
     ((((param_8 == 0x40 && ((*(uint *)(param_1 + 0x3d8) >> 2 & 1) != 0)) && (uVar14 == 2)) &&
      ((*(uint *)(param_1 + 0x124) >> 0xc & 1) == 0)))) {
    if (!bVar4) {
      return uVar6;
    }
  }
  else {
    FUN_109b62608(param_1,&UNK_10f59f4b0);
    if ((*(byte *)(param_1 + 0x125) >> 4 & 1) != 0) {
      FUN_109b62608(param_1,&UNK_10f59f4ce);
    }
  }
  puVar7 = &UNK_10f59f4ec;
  FUN_109b6244c();
  uVar13 = *puVar8;
  puVar11 = (undefined *)*puVar9;
  puVar12 = puVar11;
  if (puVar7 <= puVar11) {
LAB_109b6154c:
    *puVar8 = uVar13;
    *puVar9 = puVar12;
    return (ulong)(uVar13 >> 3 & 1);
  }
  do {
    bVar3 = puVar11[param_1];
    uVar14 = (uint)bVar3;
    puVar12 = puVar11;
    if (bVar3 < 0x31) {
      if (uVar14 == 0x2d || bVar3 < 0x2d) {
        if (uVar14 == 0x2b) {
          uVar14 = 4;
        }
        else {
          if (uVar14 != 0x2d) goto LAB_109b6154c;
          uVar14 = 0x84;
        }
      }
      else if (uVar14 == 0x2e) {
        uVar14 = 0x10;
      }
      else {
        if (uVar14 != 0x30) goto LAB_109b6154c;
        uVar14 = 8;
      }
    }
    else if (uVar14 - 0x31 < 9) {
      uVar14 = 0x108;
    }
    else {
      if ((uVar14 != 0x45) && (uVar14 != 0x65)) goto LAB_109b6154c;
      uVar14 = 0x20;
    }
    uVar1 = uVar14 & 0x3c | uVar13 & 3;
    if (uVar1 < 10) {
      if (uVar1 < 8) {
        if (uVar1 == 4) {
          if ((uVar13 & 0x3c) != 0) goto LAB_109b6154c;
LAB_109b61500:
          uVar13 = uVar14 | uVar13;
        }
        else {
          if ((uVar1 != 6) || ((uVar13 & 0x3c) != 0)) goto LAB_109b6154c;
          uVar13 = uVar13 | 4;
        }
      }
      else {
        if (uVar1 == 8) {
          if ((uVar13 & 0x10) != 0) {
            uVar13 = uVar13 & 0x180 | 0x11;
          }
        }
        else if (uVar1 != 9) goto LAB_109b6154c;
        uVar13 = uVar13 | uVar14 | 0x40;
      }
    }
    else if (uVar1 < 0x20) {
      if (uVar1 == 10) {
        uVar13 = uVar13 | 0x48;
      }
      else {
        if ((uVar1 != 0x10) || ((uVar13 >> 4 & 1) != 0)) goto LAB_109b6154c;
        if ((uVar13 >> 3 & 1) != 0) goto LAB_109b61500;
        uVar13 = uVar13 & 0x1c0 | uVar14 | 1;
      }
    }
    else {
      if (((uVar1 != 0x20) && (uVar1 != 0x21)) || ((uVar13 >> 3 & 1) == 0)) goto LAB_109b6154c;
      uVar13 = uVar13 & 0x1c0 | 2;
    }
    puVar11 = puVar11 + 1;
    puVar12 = puVar7;
    if (puVar7 == puVar11) goto LAB_109b6154c;
  } while( true );
}



/* Entry: 109b61198; end: 109b613d7;  */

ulong FUN_109b61198(ulong param_1,uint param_2,uint *param_3,undefined8 *param_4,uint param_5,
                   int param_6,int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar4 = param_1;
  puVar6 = param_3;
  puVar7 = param_4;
  if (param_2 == 0) {
    puVar5 = &UNK_10f59f314;
LAB_109b611f8:
    FUN_109b62608(param_1,puVar5);
    bVar3 = true;
  }
  else {
    if ((int)param_2 < 0) {
      puVar5 = &UNK_10f59f330;
      goto LAB_109b611f8;
    }
    bVar3 = false;
  }
  if (*(uint *)(param_1 + 0x41c) < param_2) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f34c);
    bVar3 = true;
  }
  uVar11 = (uint)param_3;
  if (uVar11 == 0) {
    puVar5 = &UNK_10f59f373;
LAB_109b61240:
    uVar4 = param_1;
    FUN_109b62608(param_1,puVar5);
    bVar3 = true;
  }
  else if ((int)uVar11 < 0) {
    puVar5 = &UNK_10f59f390;
    goto LAB_109b61240;
  }
  if (*(uint *)(param_1 + 0x420) < uVar11) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f3ad);
    bVar3 = true;
  }
  uVar11 = (uint)param_4;
  if ((0x10 < uVar11) || ((1 << (ulong)(uVar11 & 0x1f) & 0x10116U) == 0)) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f3d5);
    bVar3 = true;
  }
  uVar10 = param_5 & 0xfffffffb;
  if ((6 < param_5) || (uVar10 == 1)) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f3ef);
    bVar3 = true;
  }
  if (((int)uVar11 < 9) || (param_5 != 3)) {
    if ((7 < (int)uVar11) || (param_5 != 4 && uVar10 != 2)) goto LAB_109b612f0;
  }
  uVar4 = param_1;
  FUN_109b62608(param_1,&UNK_10f59f40a);
  bVar3 = true;
LAB_109b612f0:
  if (1 < param_6) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f43b);
    bVar3 = true;
  }
  if (param_7 != 0) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f45c);
    bVar3 = true;
  }
  if (((*(byte *)(param_1 + 0x125) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x3d8) != 0)) {
    uVar4 = param_1;
    FUN_109b62608(param_1,&UNK_10f59f47f);
  }
  if ((param_8 == 0) ||
     ((((param_8 == 0x40 && ((*(uint *)(param_1 + 0x3d8) >> 2 & 1) != 0)) && (uVar10 == 2)) &&
      ((*(uint *)(param_1 + 0x124) >> 0xc & 1) == 0)))) {
    if (!bVar3) {
      return uVar4;
    }
  }
  else {
    FUN_109b62608(param_1,&UNK_10f59f4b0);
    if ((*(byte *)(param_1 + 0x125) >> 4 & 1) != 0) {
      FUN_109b62608(param_1,&UNK_10f59f4ce);
    }
  }
  puVar5 = &UNK_10f59f4ec;
  FUN_109b6244c();
  uVar11 = *puVar6;
  puVar8 = (undefined *)*puVar7;
  puVar9 = puVar8;
  if (puVar8 < puVar5) {
    do {
      bVar2 = puVar8[param_1];
      uVar10 = (uint)bVar2;
      puVar9 = puVar8;
      if (bVar2 < 0x31) {
        if (uVar10 == 0x2d || bVar2 < 0x2d) {
          if (uVar10 == 0x2b) {
            uVar10 = 4;
          }
          else {
            if (uVar10 != 0x2d) break;
            uVar10 = 0x84;
          }
        }
        else if (uVar10 == 0x2e) {
          uVar10 = 0x10;
        }
        else {
          if (uVar10 != 0x30) break;
          uVar10 = 8;
        }
      }
      else if (uVar10 - 0x31 < 9) {
        uVar10 = 0x108;
      }
      else {
        if ((uVar10 != 0x45) && (uVar10 != 0x65)) break;
        uVar10 = 0x20;
      }
      uVar1 = uVar10 & 0x3c | uVar11 & 3;
      if (uVar1 < 10) {
        if (uVar1 < 8) {
          if (uVar1 == 4) {
            if ((uVar11 & 0x3c) != 0) break;
LAB_109b61500:
            uVar11 = uVar10 | uVar11;
          }
          else {
            if ((uVar1 != 6) || ((uVar11 & 0x3c) != 0)) break;
            uVar11 = uVar11 | 4;
          }
        }
        else {
          if (uVar1 == 8) {
            if ((uVar11 & 0x10) != 0) {
              uVar11 = uVar11 & 0x180 | 0x11;
            }
          }
          else if (uVar1 != 9) break;
          uVar11 = uVar11 | uVar10 | 0x40;
        }
      }
      else if (uVar1 < 0x20) {
        if (uVar1 == 10) {
          uVar11 = uVar11 | 0x48;
        }
        else {
          if ((uVar1 != 0x10) || ((uVar11 >> 4 & 1) != 0)) break;
          if ((uVar11 >> 3 & 1) != 0) goto LAB_109b61500;
          uVar11 = uVar11 & 0x1c0 | uVar10 | 1;
        }
      }
      else {
        if (((uVar1 != 0x20) && (uVar1 != 0x21)) || ((uVar11 >> 3 & 1) == 0)) break;
        uVar11 = uVar11 & 0x1c0 | 2;
      }
      puVar8 = puVar8 + 1;
      puVar9 = puVar5;
      if (puVar5 == puVar8) break;
    } while( true );
  }
  *puVar6 = uVar11;
  *puVar7 = puVar9;
  return (ulong)(uVar11 >> 3 & 1);
}



/* Entry: 109b613d8; end: 109b6155b;  */

uint FUN_109b613d8(long param_1,ulong param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_3;
  uVar3 = *param_4;
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
LAB_109b6154c:
    *param_3 = uVar5;
    *param_4 = uVar4;
    return uVar5 >> 3 & 1;
  }
  do {
    bVar2 = *(byte *)(param_1 + uVar3);
    uVar6 = (uint)bVar2;
    uVar4 = uVar3;
    if (bVar2 < 0x31) {
      if (uVar6 == 0x2d || bVar2 < 0x2d) {
        if (uVar6 == 0x2b) {
          uVar6 = 4;
        }
        else {
          if (uVar6 != 0x2d) goto LAB_109b6154c;
          uVar6 = 0x84;
        }
      }
      else if (uVar6 == 0x2e) {
        uVar6 = 0x10;
      }
      else {
        if (uVar6 != 0x30) goto LAB_109b6154c;
        uVar6 = 8;
      }
    }
    else if (uVar6 - 0x31 < 9) {
      uVar6 = 0x108;
    }
    else {
      if ((uVar6 != 0x45) && (uVar6 != 0x65)) goto LAB_109b6154c;
      uVar6 = 0x20;
    }
    uVar1 = uVar6 & 0x3c | uVar5 & 3;
    if (uVar1 < 10) {
      if (uVar1 < 8) {
        if (uVar1 == 4) {
          if ((uVar5 & 0x3c) != 0) goto LAB_109b6154c;
LAB_109b61500:
          uVar5 = uVar6 | uVar5;
        }
        else {
          if ((uVar1 != 6) || ((uVar5 & 0x3c) != 0)) goto LAB_109b6154c;
          uVar5 = uVar5 | 4;
        }
      }
      else {
        if (uVar1 == 8) {
          if ((uVar5 & 0x10) != 0) {
            uVar5 = uVar5 & 0x180 | 0x11;
          }
        }
        else if (uVar1 != 9) goto LAB_109b6154c;
        uVar5 = uVar5 | uVar6 | 0x40;
      }
    }
    else if (uVar1 < 0x20) {
      if (uVar1 == 10) {
        uVar5 = uVar5 | 0x48;
      }
      else {
        if ((uVar1 != 0x10) || ((uVar5 >> 4 & 1) != 0)) goto LAB_109b6154c;
        if ((uVar5 >> 3 & 1) != 0) goto LAB_109b61500;
        uVar5 = uVar5 & 0x1c0 | uVar6 | 1;
      }
    }
    else {
      if (((uVar1 != 0x20) && (uVar1 != 0x21)) || ((uVar5 >> 3 & 1) == 0)) goto LAB_109b6154c;
      uVar5 = uVar5 & 0x1c0 | 2;
    }
    uVar3 = uVar3 + 1;
    uVar4 = param_2;
    if (param_2 == uVar3) goto LAB_109b6154c;
  } while( true );
}



/* Entry: 109b6155c; end: 109b615bb;  */

void FUN_109b6155c(undefined8 param_1,undefined8 param_2)

{
  long lStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  lStack_30 = 0;
  FUN_109b613d8(param_1,param_2,&uStack_24,&lStack_30);
  return;
}



/* Entry: 109b615bc; end: 109b61663;  */

uint FUN_109b615bc(long param_1,uint param_2,int param_3)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x260) == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar1 = (double)param_2 / 255.0;
      _pow(dVar1,(double)param_3 * 1e-05);
      param_2 = (uint)(dVar1 * 255.0 + 0.5);
    }
    param_2 = param_2 & 0xff;
  }
  else if (param_2 - 1 < 0xfffe) {
    dVar1 = (double)param_2 / 65535.0;
    _pow(dVar1,(double)param_3 * 1e-05);
    param_2 = (uint)(dVar1 * 65535.0 + 0.5);
  }
  return param_2 & 0xffff;
}



/* Entry: 109b61664; end: 109b618d3;  */

void FUN_109b61664(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x2a0) != 0)) {
    if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
      _free(*(long *)(param_1 + 0x2a0));
    }
    else {
      (**(code **)(param_1 + 0x3f0))(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  lVar2 = *(long *)(param_1 + 0x2a8);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x298) != -0x17) {
      lVar2 = 0;
      uVar1 = 1 << (ulong)(8U - *(int *)(param_1 + 0x298) & 0x1f);
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        if ((param_1 != 0) && (lVar3 = *(long *)(*(long *)(param_1 + 0x2a8) + lVar2), lVar3 != 0)) {
          if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
            _free(lVar3);
          }
          else {
            (**(code **)(param_1 + 0x3f0))(param_1);
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 << 3 != lVar2);
      lVar2 = *(long *)(param_1 + 0x2a8);
    }
    if ((param_1 != 0) && (lVar2 != 0)) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(lVar2);
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x2b0) != 0)) {
    if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
      _free(*(long *)(param_1 + 0x2b0));
    }
    else {
      (**(code **)(param_1 + 0x3f0))(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x2b8) != 0)) {
    if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
      _free(*(long *)(param_1 + 0x2b8));
    }
    else {
      (**(code **)(param_1 + 0x3f0))(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  lVar2 = *(long *)(param_1 + 0x2c0);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x298) != -0x17) {
      lVar2 = 0;
      uVar1 = 1 << (ulong)(8U - *(int *)(param_1 + 0x298) & 0x1f);
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        if ((param_1 != 0) && (lVar3 = *(long *)(*(long *)(param_1 + 0x2c0) + lVar2), lVar3 != 0)) {
          if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
            _free(lVar3);
          }
          else {
            (**(code **)(param_1 + 0x3f0))(param_1);
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 << 3 != lVar2);
      lVar2 = *(long *)(param_1 + 0x2c0);
    }
    if ((param_1 != 0) && (lVar2 != 0)) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(lVar2);
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x2c8);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x298) != -0x17) {
      lVar2 = 0;
      uVar1 = 1 << (ulong)(8U - *(int *)(param_1 + 0x298) & 0x1f);
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        if ((param_1 != 0) && (lVar3 = *(long *)(*(long *)(param_1 + 0x2c8) + lVar2), lVar3 != 0)) {
          if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
            _free(lVar3);
          }
          else {
            (**(code **)(param_1 + 0x3f0))(param_1);
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 << 3 != lVar2);
      lVar2 = *(long *)(param_1 + 0x2c8);
    }
    if ((param_1 != 0) && (lVar2 != 0)) {
      if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
        _free(lVar2);
      }
      else {
        (**(code **)(param_1 + 0x3f0))(param_1);
      }
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  return;
}



/* Entry: 109b618d4; end: 109b61dc3;  */

void FUN_109b618d4(long *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  char cVar21;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  char cVar41;
  char cVar42;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  undefined1 auVar31 [16];
  double dVar43;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  if ((param_1[0x54] != 0) || (param_1[0x55] != 0)) {
    FUN_109b62608(param_1,&UNK_10f59f4fe);
    FUN_109b61664(param_1);
  }
  if (param_2 < 9) {
    if ((int)*(uint *)((long)param_1 + 0x29c) < 1) {
      iVar14 = 100000;
    }
    else {
      if ((int)param_1[0x93] != 0) {
        dVar22 = (1e+15 / (double)(int)param_1[0x93]) / (double)*(uint *)((long)param_1 + 0x29c) +
                 0.5;
        dVar51 = (double)(long)dVar22;
        bVar7 = true;
        bVar8 = false;
        if (dVar51 <= 2147483647.0) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(dVar51)) {
            bVar7 = dVar51 < -2147483648.0;
            bVar8 = false;
          }
        }
        if (bVar7 == bVar8) {
          iVar14 = (int)dVar22;
          goto LAB_109b61bf0;
        }
      }
      iVar14 = 0;
    }
LAB_109b61bf0:
    FUN_109b61dc4(param_1,param_1 + 0x54,iVar14);
    if ((*(uint *)((long)param_1 + 300) & 0x600080) == 0) {
      return;
    }
    dVar22 = 10000000000.0 / (double)(int)param_1[0x93] + 0.5;
    dVar51 = (double)(long)dVar22;
    bVar7 = false;
    bVar8 = true;
    if (-2147483648.0 <= dVar51) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(dVar51)) {
        bVar7 = dVar51 == 2147483647.0;
        bVar8 = 2147483647.0 <= dVar51;
      }
    }
    iVar14 = (int)dVar22;
    if (bVar8 && !bVar7) {
      iVar14 = 0;
    }
    FUN_109b61dc4(param_1,param_1 + 0x57,iVar14);
    if ((int)*(uint *)((long)param_1 + 0x29c) < 1) {
      iVar14 = (int)param_1[0x93];
    }
    else {
      dVar22 = 10000000000.0 / (double)*(uint *)((long)param_1 + 0x29c) + 0.5;
      dVar51 = (double)(long)dVar22;
      bVar7 = false;
      bVar8 = true;
      if (-2147483648.0 <= dVar51) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(dVar51)) {
          bVar7 = dVar51 == 2147483647.0;
          bVar8 = 2147483647.0 <= dVar51;
        }
      }
      iVar14 = (int)dVar22;
      if (bVar8 && !bVar7) {
        iVar14 = 0;
      }
    }
    plVar9 = param_1 + 0x56;
    func_0x000109b630ec(param_1,0x100);
    *plVar9 = (long)param_1;
    if (iVar14 - 95000U < 0x2711) {
      lVar16 = 0;
      cVar21 = '\0';
      cVar35 = '\x01';
      cVar36 = '\x02';
      cVar37 = '\x03';
      cVar38 = '\x04';
      cVar39 = '\x05';
      cVar40 = '\x06';
      cVar41 = '\a';
      cVar42 = '\b';
      cVar44 = '\t';
      cVar45 = '\n';
      cVar46 = '\v';
      cVar47 = '\f';
      cVar48 = '\r';
      cVar49 = '\x0e';
      cVar50 = '\x0f';
      do {
        pcVar3 = (char *)((long)param_1 + lVar16);
        pcVar3[8] = cVar42;
        pcVar3[9] = cVar44;
        pcVar3[10] = cVar45;
        pcVar3[0xb] = cVar46;
        pcVar3[0xc] = cVar47;
        pcVar3[0xd] = cVar48;
        pcVar3[0xe] = cVar49;
        pcVar3[0xf] = cVar50;
        *pcVar3 = cVar21;
        pcVar3[1] = cVar35;
        pcVar3[2] = cVar36;
        pcVar3[3] = cVar37;
        pcVar3[4] = cVar38;
        pcVar3[5] = cVar39;
        pcVar3[6] = cVar40;
        pcVar3[7] = cVar41;
        lVar16 = lVar16 + 0x10;
        cVar21 = cVar21 + '\x10';
        cVar35 = cVar35 + '\x10';
        cVar36 = cVar36 + '\x10';
        cVar37 = cVar37 + '\x10';
        cVar38 = cVar38 + '\x10';
        cVar39 = cVar39 + '\x10';
        cVar40 = cVar40 + '\x10';
        cVar41 = cVar41 + '\x10';
        cVar42 = cVar42 + '\x10';
        cVar44 = cVar44 + '\x10';
        cVar45 = cVar45 + '\x10';
        cVar46 = cVar46 + '\x10';
        cVar47 = cVar47 + '\x10';
        cVar48 = cVar48 + '\x10';
        cVar49 = cVar49 + '\x10';
        cVar50 = cVar50 + '\x10';
      } while (lVar16 != 0x100);
    }
    else {
      uVar19 = 0;
      do {
        iVar15 = (int)uVar19;
        if (iVar15 - 1U < 0xfe) {
          dVar22 = (double)_pow((double)(uVar19 & 0xffffffff) / 255.0,(double)iVar14 * 1e-05);
          iVar15 = (int)(dVar22 * 255.0 + 0.5);
        }
        *(char *)((long)param_1 + uVar19) = (char)iVar15;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x100);
    }
    return;
  }
  if ((*(byte *)((long)param_1 + 0x25f) >> 1 & 1) == 0) {
    uVar12 = (uint)*(byte *)((long)param_1 + 0x2d3);
  }
  else {
    bVar1 = *(byte *)((long)param_1 + 0x2d1);
    if (*(byte *)((long)param_1 + 0x2d1) <= *(byte *)(param_1 + 0x5a)) {
      bVar1 = *(byte *)(param_1 + 0x5a);
    }
    uVar12 = (uint)*(byte *)((long)param_1 + 0x2d2);
    if ((uint)*(byte *)((long)param_1 + 0x2d2) <= (uint)bVar1) {
      uVar12 = (uint)bVar1;
    }
  }
  uVar2 = 0x10 - uVar12;
  if (0xe < uVar12 - 1) {
    uVar2 = 0;
  }
  uVar12 = uVar2 & 0xff;
  if (uVar12 < 6) {
    uVar12 = 5;
  }
  uVar20 = *(uint *)((long)param_1 + 300) & 0x4000400;
  if (uVar20 != 0) {
    uVar2 = uVar12;
  }
  uVar12 = uVar2 & 0xff;
  if ((uVar2 & 0xf8) != 0) {
    uVar12 = 8;
  }
  *(uint *)(param_1 + 0x53) = uVar12;
  uVar2 = *(uint *)((long)param_1 + 0x29c);
  if (uVar20 != 0) {
    if ((int)uVar2 < 1) {
      dVar22 = 1.0;
    }
    else {
      dVar22 = (double)(int)param_1[0x93] * 1e-05 * (double)uVar2 + 0.5;
      dVar51 = (double)(long)dVar22;
      bVar7 = false;
      bVar8 = true;
      if (-2147483648.0 <= dVar51) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(dVar51)) {
          bVar7 = dVar51 == 2147483647.0;
          bVar8 = 2147483647.0 <= dVar51;
        }
      }
      dVar22 = (double)(int)dVar22 * 1e-05;
      if (bVar8 && !bVar7) {
        dVar22 = 0.0;
      }
    }
    uVar2 = 8 - uVar12;
    uVar19 = (ulong)(uint)(1 << (ulong)(uVar2 & 0x1f));
    plVar9 = param_1;
    func_0x000109b630b4(param_1,uVar19 << 3);
    param_1[0x55] = (long)plVar9;
    plVar11 = plVar9;
    do {
      plVar10 = param_1;
      func_0x000109b630ec(param_1,0x200);
      *plVar11 = (long)plVar10;
      uVar19 = uVar19 - 1;
      plVar11 = plVar11 + 1;
    } while (uVar19 != 0);
    iVar14 = 0;
    uVar20 = 0;
    uVar17 = 0xff >> (ulong)(uVar12 & 0x1f);
    do {
      dVar51 = (double)_pow((double)((iVar14 * 0x101 & 0xffffU) + 0x80) / 65535.0,dVar22);
      uVar13 = (uint)(dVar51 * 65535.0 + 0.5);
      uVar13 = (((uVar13 & 0xffff) << (ulong)(0x10 - uVar12 & 0x1f)) - (uVar13 & 0xffff)) + 0x8000;
      if (uVar20 <= uVar13 / 0xffff) {
        uVar13 = uVar13 / 0xffff;
        do {
          *(short *)(plVar9[uVar20 & uVar17] + (ulong)(uVar20 >> (ulong)(uVar2 & 0x1f)) * 2) =
               (short)(iVar14 * 0x101);
          uVar20 = uVar20 + 1;
        } while (uVar13 + 1 != uVar20);
        uVar20 = uVar13 + 1;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0xff);
    uVar13 = 0x100 << (ulong)(uVar2 & 0x1f);
    if (uVar20 < uVar13) {
      do {
        *(undefined2 *)(plVar9[uVar20 & uVar17] + (ulong)(uVar20 >> (ulong)(uVar2 & 0x1f)) * 2) =
             0xffff;
        uVar20 = uVar20 + 1;
      } while (uVar13 != uVar20);
    }
    goto LAB_109b61cdc;
  }
  if ((int)uVar2 < 1) {
    iVar14 = 100000;
  }
  else {
    if ((int)param_1[0x93] != 0) {
      dVar22 = (1e+15 / (double)(int)param_1[0x93]) / (double)uVar2 + 0.5;
      dVar51 = (double)(long)dVar22;
      bVar7 = true;
      bVar8 = false;
      if (dVar51 <= 2147483647.0) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(dVar51)) {
          bVar7 = dVar51 < -2147483648.0;
          bVar8 = false;
        }
      }
      if (bVar7 == bVar8) {
        iVar14 = (int)dVar22;
        goto LAB_109b61ccc;
      }
    }
    iVar14 = 0;
  }
LAB_109b61ccc:
  FUN_109b61ea4(param_1,param_1 + 0x55,uVar12,iVar14);
LAB_109b61cdc:
  if ((*(uint *)((long)param_1 + 300) & 0x600080) == 0) {
    return;
  }
  dVar22 = 10000000000.0 / (double)(int)param_1[0x93] + 0.5;
  dVar51 = (double)(long)dVar22;
  bVar7 = false;
  bVar8 = true;
  if (-2147483648.0 <= dVar51) {
    bVar7 = false;
    bVar8 = true;
    if (!NAN(dVar51)) {
      bVar7 = dVar51 == 2147483647.0;
      bVar8 = 2147483647.0 <= dVar51;
    }
  }
  iVar14 = (int)dVar22;
  if (bVar8 && !bVar7) {
    iVar14 = 0;
  }
  FUN_109b61ea4(param_1,param_1 + 0x59,uVar12,iVar14);
  if ((int)*(uint *)((long)param_1 + 0x29c) < 1) {
    iVar14 = (int)param_1[0x93];
  }
  else {
    dVar22 = 10000000000.0 / (double)*(uint *)((long)param_1 + 0x29c) + 0.5;
    dVar51 = (double)(long)dVar22;
    bVar7 = false;
    bVar8 = true;
    if (-2147483648.0 <= dVar51) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(dVar51)) {
        bVar7 = dVar51 == 2147483647.0;
        bVar8 = 2147483647.0 <= dVar51;
      }
    }
    iVar14 = (int)dVar22;
    if (bVar8 && !bVar7) {
      iVar14 = 0;
    }
  }
  uVar20 = 8 - uVar12;
  uVar2 = ~(-1 << (ulong)(0x10 - uVar12 & 0x1f));
  uVar18 = (ulong)(uint)(1 << (ulong)(uVar20 & 0x1f));
  dVar22 = 1.0 / (double)uVar2;
  plVar9 = param_1;
  func_0x000109b630b4(param_1,uVar18 << 3);
  uVar19 = 0;
  param_1[0x58] = (long)plVar9;
  dVar60 = (double)iVar14 * 1e-05;
  auVar31 = NEON_fmov(0x3fe0000000000000,8);
  dVar43 = auVar31._8_8_;
  dVar51 = auVar31._0_8_;
  do {
    plVar11 = param_1;
    func_0x000109b630ec(param_1,0x200);
    plVar9[uVar19] = (long)plVar11;
    iVar15 = (int)uVar19;
    if (iVar14 - 95000U < 0x2711) {
      lVar16 = 0;
      do {
        uVar17 = ((int)lVar16 << (ulong)(uVar20 & 0x1f)) + iVar15;
        if (uVar12 != 0) {
          iVar4 = uVar17 * 0xffff;
          uVar17 = 0;
          if (uVar2 != 0) {
            uVar17 = (uint)((1 << (ulong)((uVar12 ^ 0xf) & 0x1f)) + iVar4) / uVar2;
          }
        }
        *(short *)((long)plVar11 + lVar16 * 2) = (short)uVar17;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x100);
    }
    else {
      lVar16 = 0;
      auVar31._8_8_ = 0x300000002;
      auVar31._0_8_ = 0x100000000;
      auVar59._8_8_ = 0x700000006;
      auVar59._0_8_ = 0x500000004;
      do {
        auVar6._4_4_ = uVar20;
        auVar6._0_4_ = uVar20;
        auVar6._8_4_ = uVar20;
        auVar6._12_4_ = uVar20;
        auVar32 = NEON_ushl(auVar31,auVar6,4);
        auVar52 = NEON_ushl(auVar59,auVar6,4);
        auVar53._0_4_ = auVar52._0_4_ + iVar15;
        auVar53._4_4_ = auVar52._4_4_ + iVar15;
        auVar53._8_4_ = auVar52._8_4_ + iVar15;
        auVar53._12_4_ = auVar52._12_4_ + iVar15;
        auVar33._0_4_ = auVar32._0_4_ + iVar15;
        auVar33._4_4_ = auVar32._4_4_ + iVar15;
        auVar33._8_4_ = auVar32._8_4_ + iVar15;
        auVar33._12_4_ = auVar32._12_4_ + iVar15;
        auVar55._4_4_ = 0;
        auVar55._0_4_ = auVar33._0_4_;
        auVar55._8_4_ = auVar33._4_4_;
        auVar55._12_4_ = 0;
        auVar56 = NEON_ucvtf(auVar55,8);
        auVar34._0_8_ = auVar33._8_8_ & 0xffffffff;
        auVar34._8_8_ = auVar33._8_8_ >> 0x20;
        auVar32 = NEON_ucvtf(auVar34,8);
        auVar57._4_4_ = 0;
        auVar57._0_4_ = auVar53._0_4_;
        auVar57._8_4_ = auVar53._4_4_;
        auVar57._12_4_ = 0;
        auVar58 = NEON_ucvtf(auVar57,8);
        auVar54._0_8_ = auVar53._8_8_ & 0xffffffff;
        auVar54._8_8_ = auVar53._8_8_ >> 0x20;
        auVar52 = NEON_ucvtf(auVar54,8);
        dVar23 = (double)_pow(auVar56._0_8_ * dVar22,dVar60);
        dVar24 = (double)_pow(auVar56._8_8_ * dVar22,dVar60);
        dVar25 = (double)_pow(auVar32._0_8_ * dVar22,dVar60);
        dVar26 = (double)_pow(auVar32._8_8_ * dVar22,dVar60);
        dVar27 = (double)_pow(auVar58._0_8_ * dVar22,dVar60);
        dVar28 = (double)_pow(auVar58._8_8_ * dVar22,dVar60);
        dVar29 = (double)_pow(auVar52._0_8_ * dVar22,dVar60);
        dVar30 = (double)_pow(auVar52._8_8_ * dVar22,dVar60);
        iStack_d0 = auVar59._0_4_;
        iStack_cc = auVar59._4_4_;
        iStack_c8 = auVar59._8_4_;
        iStack_c4 = auVar59._12_4_;
        iStack_c0 = auVar31._0_4_;
        iStack_bc = auVar31._4_4_;
        iStack_b8 = auVar31._8_4_;
        iStack_b4 = auVar31._12_4_;
        auVar5._8_8_ = 0x3534313025242120;
        auVar5._0_8_ = 0x1514111005040100;
        auVar32._4_4_ = (int)(long)(double)(long)(dVar43 + dVar24 * 65535.0);
        auVar32._0_4_ = (int)(long)(double)(long)(dVar51 + dVar23 * 65535.0);
        auVar32._8_8_ = 0;
        auVar52._4_4_ = (int)(long)(double)(long)(dVar43 + dVar26 * 65535.0);
        auVar52._0_4_ = (int)(long)(double)(long)(dVar51 + dVar25 * 65535.0);
        auVar52._8_8_ = 0;
        auVar56._4_4_ = (int)(long)(double)(long)(dVar43 + dVar28 * 65535.0);
        auVar56._0_4_ = (int)(long)(double)(long)(dVar51 + dVar27 * 65535.0);
        auVar56._8_8_ = 0;
        auVar58._4_4_ = (int)(long)(double)(long)(dVar43 + dVar30 * 65535.0);
        auVar58._0_4_ = (int)(long)(double)(long)(dVar51 + dVar29 * 65535.0);
        auVar58._8_8_ = 0;
        auVar31 = a64_TBL(ZEXT816(0),auVar32,auVar52,auVar56,auVar58,auVar5);
        ((undefined8 *)((long)plVar11 + lVar16))[1] = auVar31._8_8_;
        *(undefined8 *)((long)plVar11 + lVar16) = auVar31._0_8_;
        auVar31._0_4_ = iStack_c0 + 8;
        auVar31._4_4_ = iStack_bc + 8;
        auVar31._8_4_ = iStack_b8 + 8;
        auVar31._12_4_ = iStack_b4 + 8;
        auVar59._0_4_ = iStack_d0 + 8;
        auVar59._4_4_ = iStack_cc + 8;
        auVar59._8_4_ = iStack_c8 + 8;
        auVar59._12_4_ = iStack_c4 + 8;
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x200);
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar18);
  return;
}



/* Entry: 109b61dc4; end: 109b61ea3;  */

void FUN_109b61dc4(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  
  func_0x000109b630ec(param_1,0x100);
  *param_2 = param_1;
  if (param_3 - 95000U < 0x2711) {
    lVar2 = 0;
    uVar6 = 0xf0e0d0c0b0a0908;
    uVar4 = 0x706050403020100;
    do {
      ((undefined8 *)(param_1 + lVar2))[1] = uVar6;
      *(undefined8 *)(param_1 + lVar2) = uVar4;
      lVar2 = lVar2 + 0x10;
      uVar4 = CONCAT17((char)((ulong)uVar4 >> 0x38) + '\x10',
                       CONCAT16((char)((ulong)uVar4 >> 0x30) + '\x10',
                                CONCAT15((char)((ulong)uVar4 >> 0x28) + '\x10',
                                         CONCAT14((char)((ulong)uVar4 >> 0x20) + '\x10',
                                                  CONCAT13((char)((ulong)uVar4 >> 0x18) + '\x10',
                                                           CONCAT12((char)((ulong)uVar4 >> 0x10) +
                                                                    '\x10',CONCAT11((char)((ulong)
                                                  uVar4 >> 8) + '\x10',(char)uVar4 + '\x10')))))));
      uVar6 = CONCAT17((char)((ulong)uVar6 >> 0x38) + '\x10',
                       CONCAT16((char)((ulong)uVar6 >> 0x30) + '\x10',
                                CONCAT15((char)((ulong)uVar6 >> 0x28) + '\x10',
                                         CONCAT14((char)((ulong)uVar6 >> 0x20) + '\x10',
                                                  CONCAT13((char)((ulong)uVar6 >> 0x18) + '\x10',
                                                           CONCAT12((char)((ulong)uVar6 >> 0x10) +
                                                                    '\x10',CONCAT11((char)((ulong)
                                                  uVar6 >> 8) + '\x10',(char)uVar6 + '\x10')))))));
    } while (lVar2 != 0x100);
  }
  else {
    uVar3 = 0;
    do {
      iVar1 = (int)uVar3;
      if (iVar1 - 1U < 0xfe) {
        dVar5 = (double)(uVar3 & 0xffffffff) / 255.0;
        _pow(dVar5,(double)param_3 * 1e-05);
        iVar1 = (int)(dVar5 * 255.0 + 0.5);
      }
      *(char *)(param_1 + uVar3) = (char)iVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
  }
  return;
}



/* Entry: 109b61ea4; end: 109b62197;  */

void FUN_109b61ea4(long param_1,long *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  double dVar13;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar14;
  double dVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  uVar2 = 8 - param_3;
  uVar1 = ~(-1 << (ulong)(0x10 - param_3 & 0x1f));
  uVar10 = (ulong)(uint)(1 << (ulong)(uVar2 & 0x1f));
  dVar13 = 1.0 / (double)uVar1;
  lVar6 = param_1;
  FUN_109b630b4(param_1,uVar10 << 3);
  uVar12 = 0;
  *param_2 = lVar6;
  dVar36 = (double)param_4 * 1e-05;
  auVar23 = NEON_fmov(0x3fe0000000000000,8);
  dVar27 = auVar23._8_8_;
  dVar14 = auVar23._0_8_;
  do {
    lVar7 = param_1;
    func_0x000109b630ec(param_1,0x200);
    *(long *)(lVar6 + uVar12 * 8) = lVar7;
    iVar11 = (int)uVar12;
    if (param_4 - 95000U < 0x2711) {
      lVar8 = 0;
      do {
        uVar9 = ((int)lVar8 << (ulong)(uVar2 & 0x1f)) + iVar11;
        if (param_3 != 0) {
          iVar3 = uVar9 * 0xffff;
          uVar9 = 0;
          if (uVar1 != 0) {
            uVar9 = (uint)((1 << (ulong)((param_3 ^ 0xf) & 0x1f)) + iVar3) / uVar1;
          }
        }
        *(short *)(lVar7 + lVar8 * 2) = (short)uVar9;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x100);
    }
    else {
      lVar8 = 0;
      auVar23._8_8_ = 0x300000002;
      auVar23._0_8_ = 0x100000000;
      auVar35._8_8_ = 0x700000006;
      auVar35._0_8_ = 0x500000004;
      do {
        auVar5._4_4_ = uVar2;
        auVar5._0_4_ = uVar2;
        auVar5._8_4_ = uVar2;
        auVar5._12_4_ = uVar2;
        auVar24 = NEON_ushl(auVar23,auVar5,4);
        auVar28 = NEON_ushl(auVar35,auVar5,4);
        auVar29._0_4_ = auVar28._0_4_ + iVar11;
        auVar29._4_4_ = auVar28._4_4_ + iVar11;
        auVar29._8_4_ = auVar28._8_4_ + iVar11;
        auVar29._12_4_ = auVar28._12_4_ + iVar11;
        auVar25._0_4_ = auVar24._0_4_ + iVar11;
        auVar25._4_4_ = auVar24._4_4_ + iVar11;
        auVar25._8_4_ = auVar24._8_4_ + iVar11;
        auVar25._12_4_ = auVar24._12_4_ + iVar11;
        auVar31._4_4_ = 0;
        auVar31._0_4_ = auVar25._0_4_;
        auVar31._8_4_ = auVar25._4_4_;
        auVar31._12_4_ = 0;
        auVar32 = NEON_ucvtf(auVar31,8);
        auVar26._0_8_ = auVar25._8_8_ & 0xffffffff;
        auVar26._8_8_ = auVar25._8_8_ >> 0x20;
        auVar24 = NEON_ucvtf(auVar26,8);
        auVar33._4_4_ = 0;
        auVar33._0_4_ = auVar29._0_4_;
        auVar33._8_4_ = auVar29._4_4_;
        auVar33._12_4_ = 0;
        auVar34 = NEON_ucvtf(auVar33,8);
        auVar30._0_8_ = auVar29._8_8_ & 0xffffffff;
        auVar30._8_8_ = auVar29._8_8_ >> 0x20;
        auVar28 = NEON_ucvtf(auVar30,8);
        dVar15 = (double)_pow(auVar32._0_8_ * dVar13,dVar36);
        dVar16 = (double)_pow(auVar32._8_8_ * dVar13,dVar36);
        dVar17 = (double)_pow(auVar24._0_8_ * dVar13,dVar36);
        dVar18 = (double)_pow(auVar24._8_8_ * dVar13,dVar36);
        dVar19 = (double)_pow(auVar34._0_8_ * dVar13,dVar36);
        dVar20 = (double)_pow(auVar34._8_8_ * dVar13,dVar36);
        dVar21 = (double)_pow(auVar28._0_8_ * dVar13,dVar36);
        dVar22 = (double)_pow(auVar28._8_8_ * dVar13,dVar36);
        iStack_d0 = auVar35._0_4_;
        iStack_cc = auVar35._4_4_;
        iStack_c8 = auVar35._8_4_;
        iStack_c4 = auVar35._12_4_;
        iStack_c0 = auVar23._0_4_;
        iStack_bc = auVar23._4_4_;
        iStack_b8 = auVar23._8_4_;
        iStack_b4 = auVar23._12_4_;
        auVar4._8_8_ = 0x3534313025242120;
        auVar4._0_8_ = 0x1514111005040100;
        auVar24._4_4_ = (int)(long)(double)(long)(dVar27 + dVar16 * 65535.0);
        auVar24._0_4_ = (int)(long)(double)(long)(dVar14 + dVar15 * 65535.0);
        auVar24._8_8_ = 0;
        auVar28._4_4_ = (int)(long)(double)(long)(dVar27 + dVar18 * 65535.0);
        auVar28._0_4_ = (int)(long)(double)(long)(dVar14 + dVar17 * 65535.0);
        auVar28._8_8_ = 0;
        auVar32._4_4_ = (int)(long)(double)(long)(dVar27 + dVar20 * 65535.0);
        auVar32._0_4_ = (int)(long)(double)(long)(dVar14 + dVar19 * 65535.0);
        auVar32._8_8_ = 0;
        auVar34._4_4_ = (int)(long)(double)(long)(dVar27 + dVar22 * 65535.0);
        auVar34._0_4_ = (int)(long)(double)(long)(dVar14 + dVar21 * 65535.0);
        auVar34._8_8_ = 0;
        auVar23 = a64_TBL(ZEXT816(0),auVar24,auVar28,auVar32,auVar34,auVar4);
        ((undefined8 *)(lVar7 + lVar8))[1] = auVar23._8_8_;
        *(undefined8 *)(lVar7 + lVar8) = auVar23._0_8_;
        auVar23._0_4_ = iStack_c0 + 8;
        auVar23._4_4_ = iStack_bc + 8;
        auVar23._8_4_ = iStack_b8 + 8;
        auVar23._12_4_ = iStack_b4 + 8;
        auVar35._0_4_ = iStack_d0 + 8;
        auVar35._4_4_ = iStack_cc + 8;
        auVar35._8_4_ = iStack_c8 + 8;
        auVar35._12_4_ = iStack_c4 + 8;
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0x200);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != uVar10);
  return;
}



/* Entry: 109b62198; end: 109b6244b;  */

undefined8 FUN_109b62198(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  
  iVar8 = *param_2;
  iVar6 = param_2[1] + iVar8 + param_2[2];
  if (iVar6 != 0) {
    iVar7 = 0;
    if (iVar8 != 0) {
      dVar12 = (double)(long)(((double)iVar8 * 100000.0) / (double)iVar6 + 0.5);
      bVar4 = true;
      bVar5 = false;
      if (dVar12 <= 2147483647.0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(dVar12)) {
          bVar4 = dVar12 < -2147483648.0;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) {
        return 1;
      }
      iVar7 = (int)dVar12;
    }
    *param_1 = iVar7;
    iVar8 = 0;
    if (param_2[1] != 0) {
      dVar12 = (double)(long)(((double)param_2[1] * 100000.0) / (double)iVar6 + 0.5);
      bVar4 = true;
      bVar5 = false;
      if (dVar12 <= 2147483647.0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(dVar12)) {
          bVar4 = dVar12 < -2147483648.0;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) {
        return 1;
      }
      iVar8 = (int)dVar12;
    }
    param_1[1] = iVar8;
    iVar7 = param_2[3];
    iVar8 = param_2[4] + iVar7 + param_2[5];
    if (iVar8 != 0) {
      iVar9 = *param_2;
      iVar2 = param_2[1];
      iVar10 = 0;
      if (iVar7 != 0) {
        dVar12 = (double)(long)(((double)iVar7 * 100000.0) / (double)iVar8 + 0.5);
        bVar4 = true;
        bVar5 = false;
        if (dVar12 <= 2147483647.0) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(dVar12)) {
            bVar4 = dVar12 < -2147483648.0;
            bVar5 = false;
          }
        }
        if (bVar4 != bVar5) {
          return 1;
        }
        iVar10 = (int)dVar12;
      }
      param_1[2] = iVar10;
      iVar7 = 0;
      if (param_2[4] != 0) {
        dVar12 = (double)(long)(((double)param_2[4] * 100000.0) / (double)iVar8 + 0.5);
        bVar4 = true;
        bVar5 = false;
        if (dVar12 <= 2147483647.0) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(dVar12)) {
            bVar4 = dVar12 < -2147483648.0;
            bVar5 = false;
          }
        }
        if (bVar4 != bVar5) {
          return 1;
        }
        iVar7 = (int)dVar12;
      }
      param_1[3] = iVar7;
      iVar10 = param_2[6];
      iVar7 = param_2[7] + iVar10 + param_2[8];
      if (iVar7 != 0) {
        iVar1 = param_2[3];
        iVar3 = param_2[4];
        iVar11 = 0;
        if (iVar10 != 0) {
          dVar12 = (double)(long)(((double)iVar10 * 100000.0) / (double)iVar7 + 0.5);
          bVar4 = true;
          bVar5 = false;
          if (dVar12 <= 2147483647.0) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(dVar12)) {
              bVar4 = dVar12 < -2147483648.0;
              bVar5 = false;
            }
          }
          if (bVar4 != bVar5) {
            return 1;
          }
          iVar11 = (int)dVar12;
        }
        param_1[4] = iVar11;
        iVar10 = 0;
        if (param_2[7] != 0) {
          dVar12 = (double)(long)(((double)param_2[7] * 100000.0) / (double)iVar7 + 0.5);
          bVar4 = true;
          bVar5 = false;
          if (dVar12 <= 2147483647.0) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(dVar12)) {
              bVar4 = dVar12 < -2147483648.0;
              bVar5 = false;
            }
          }
          if (bVar4 != bVar5) {
            return 1;
          }
          iVar10 = (int)dVar12;
        }
        param_1[5] = iVar10;
        iVar7 = iVar8 + iVar6 + iVar7;
        if (iVar7 != 0) {
          iVar8 = param_2[7];
          iVar6 = iVar1 + iVar9 + param_2[6];
          iVar9 = 0;
          if (iVar6 != 0) {
            dVar12 = (double)(long)(((double)iVar6 * 100000.0) / (double)iVar7 + 0.5);
            bVar4 = true;
            bVar5 = false;
            if (dVar12 <= 2147483647.0) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar12)) {
                bVar4 = dVar12 < -2147483648.0;
                bVar5 = false;
              }
            }
            if (bVar4 != bVar5) {
              return 1;
            }
            iVar9 = (int)dVar12;
          }
          param_1[6] = iVar9;
          iVar8 = iVar3 + iVar2 + iVar8;
          if (iVar8 == 0) {
            iVar6 = 0;
          }
          else {
            dVar12 = (double)(long)(((double)iVar8 * 100000.0) / (double)iVar7 + 0.5);
            bVar4 = true;
            bVar5 = false;
            if (dVar12 <= 2147483647.0) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar12)) {
                bVar4 = dVar12 < -2147483648.0;
                bVar5 = false;
              }
            }
            if (bVar4 != bVar5) {
              return 1;
            }
            iVar6 = (int)dVar12;
          }
          param_1[7] = iVar6;
          return 0;
        }
      }
    }
  }
  return 1;
}



/* Entry: 109b6244c; end: 109b624db;  */

/* WARNING: Possible PIC construction at 0x000109b62480: Changing call to branch */

undefined1 * FUN_109b6244c(undefined1 *param_1,undefined8 param_2,int param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  if ((param_1 != (undefined1 *)0x0) && (*(code **)(param_1 + 0xd8) != (code *)0x0)) {
    (**(code **)(param_1 + 0xd8))(param_1,param_2);
  }
  puVar2 = PTR____stderrp_11034bdc8;
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f59f672);
  _fputc(10,*(undefined8 *)puVar2);
  lVar3 = 1;
  FUN_109b62e60();
  puVar4 = (undefined1 *)(lVar3 + -1);
  *puVar4 = 0;
  if (param_1 < puVar4) {
    bVar1 = false;
    iVar5 = 0;
    iVar6 = 1;
    do {
      if ((param_4 == 0) && (iVar6 <= iVar5)) {
        return puVar4;
      }
      uVar7 = 0;
      if (param_3 < 3) {
        if (param_3 != 1) {
          if (param_3 != 2) goto LAB_109b625c0;
          iVar6 = 2;
        }
        uVar7 = param_4 / 10;
        puVar4[-1] = (&UNK_10f59f617)[param_4 % 10];
LAB_109b6259c:
        puVar4 = puVar4 + -1;
        iVar5 = iVar5 + 1;
        param_4 = uVar7;
      }
      else {
        if (param_3 == 3) {
LAB_109b6258c:
          puVar4[-1] = (&UNK_10f59f617)[param_4 & 0xf];
          uVar7 = param_4 >> 4;
          goto LAB_109b6259c;
        }
        if (param_3 == 4) {
          iVar6 = 2;
          goto LAB_109b6258c;
        }
        if (param_3 == 5) {
          uVar7 = param_4 / 10;
          if ((bVar1) || (param_4 % 10 != 0)) {
            puVar4 = puVar4 + -1;
            *puVar4 = (&UNK_10f59f617)[param_4 % 10];
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          iVar6 = 5;
        }
LAB_109b625c0:
        iVar5 = iVar5 + 1;
        param_4 = uVar7;
        if (((param_3 == 5) && (iVar5 == 5)) && (param_1 < puVar4)) {
          if (bVar1) {
            puVar4 = puVar4 + -1;
            *puVar4 = 0x2e;
            bVar1 = true;
          }
          else {
            bVar1 = false;
            if (uVar7 == 0) {
              puVar4 = puVar4 + -1;
              *puVar4 = 0x30;
            }
          }
          iVar5 = 5;
        }
      }
    } while (param_1 < puVar4);
  }
  return puVar4;
}



/* Entry: 109b624dc; end: 109b62607;  */

undefined1 * FUN_109b624dc(undefined1 *param_1,long param_2,int param_3,ulong param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  puVar2 = (undefined1 *)(param_2 + -1);
  *puVar2 = 0;
  if (param_1 < puVar2) {
    bVar1 = false;
    iVar3 = 0;
    iVar4 = 1;
    do {
      if ((param_4 == 0) && (iVar4 <= iVar3)) {
        return puVar2;
      }
      uVar5 = 0;
      if (param_3 < 3) {
        if (param_3 != 1) {
          if (param_3 != 2) goto LAB_109b625c0;
          iVar4 = 2;
        }
        uVar5 = param_4 / 10;
        puVar2[-1] = (&UNK_10f59f617)[param_4 % 10];
LAB_109b6259c:
        puVar2 = puVar2 + -1;
        iVar3 = iVar3 + 1;
        param_4 = uVar5;
      }
      else {
        if (param_3 == 3) {
LAB_109b6258c:
          puVar2[-1] = (&UNK_10f59f617)[param_4 & 0xf];
          uVar5 = param_4 >> 4;
          goto LAB_109b6259c;
        }
        if (param_3 == 4) {
          iVar4 = 2;
          goto LAB_109b6258c;
        }
        if (param_3 == 5) {
          uVar5 = param_4 / 10;
          if ((bVar1) || (param_4 % 10 != 0)) {
            puVar2 = puVar2 + -1;
            *puVar2 = (&UNK_10f59f617)[param_4 % 10];
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          iVar4 = 5;
        }
LAB_109b625c0:
        iVar3 = iVar3 + 1;
        param_4 = uVar5;
        if (((param_3 == 5) && (iVar3 == 5)) && (param_1 < puVar2)) {
          if (bVar1) {
            puVar2 = puVar2 + -1;
            *puVar2 = 0x2e;
            bVar1 = true;
          }
          else {
            bVar1 = false;
            if (uVar5 == 0) {
              puVar2 = puVar2 + -1;
              *puVar2 = 0x30;
            }
          }
          iVar3 = 5;
        }
      }
    } while (param_1 < puVar2);
  }
  return puVar2;
}



/* Entry: 109b62608; end: 109b6269b;  */

void FUN_109b62608(long param_1,char *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR____stderrp_11034bdc8;
  if (param_1 != 0) {
    if (*param_2 == '#') {
      uVar2 = 1;
      do {
        if (param_2[uVar2] == ' ') break;
        uVar2 = uVar2 + 1;
      } while (uVar2 != 0xf);
    }
    else {
      uVar2 = 0;
    }
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xe0))(param_1,param_2 + (uVar2 & 0xffffffff));
      return;
    }
  }
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f59f68d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar1);
  return;
}



/* Entry: 109b6269c; end: 109b6277b;  */

/* WARNING: Possible PIC construction at 0x000109b62974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b62978) */
/* WARNING: Removing unreachable block (ram,0x000109b629e0) */
/* WARNING: Removing unreachable block (ram,0x000109b62a18) */
/* WARNING: Removing unreachable block (ram,0x000109b629a0) */
/* WARNING: Removing unreachable block (ram,0x000109b62a2c) */
/* WARNING: Removing unreachable block (ram,0x000109b629d0) */

void FUN_109b6269c(char *param_1,ulong param_2,char *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  char cVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  code *pcVar24;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined1 auStack_330 [10];
  char acStack_326 [214];
  ulong uStack_250;
  char *pcStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined1 auStack_22e [214];
  long lStack_158;
  ulong uStack_150;
  char *pcStack_148;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [8];
  char acStack_128 [192];
  long lStack_68;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  char acStack_50 [24];
  long lStack_38;
  
  pcVar10 = acStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = &lStack_38;
  FUN_109b624dc();
  if ((param_4 < 0) && (acStack_50 < pcVar10)) {
    pcVar10 = pcVar10 + -1;
    *pcVar10 = '-';
  }
  if (((int)param_2 - 1U < 8) &&
     (pcVar12 = param_1 + (param_2 & 0xffffffff) * 0x20 + -0x20, pcVar12 != (char *)0x0)) {
    cVar19 = *pcVar10;
    if (cVar19 == '\0') {
      uVar18 = 0;
    }
    else {
      uVar21 = 0;
      do {
        uVar18 = uVar21 + 1;
        pcVar12[uVar21] = cVar19;
        if (0x1d < uVar21) break;
        cVar19 = pcVar10[uVar21 + 1];
        uVar21 = uVar18;
      } while (cVar19 != '\0');
    }
    pcVar12[uVar18] = '\0';
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppppuVar7 = (undefined8 ****)auStack_130;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  pcStack_58 = FUN_109b6277c;
  uVar18 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar19 = *param_3;
    if (cVar19 == '\0') break;
    pcVar12 = param_3;
    if ((plVar11 == (long *)0x0) || (cVar19 != '@')) {
LAB_109b6283c:
      param_3 = pcVar12 + 1;
      acStack_128[uVar18] = cVar19;
      uVar18 = uVar18 + 1;
    }
    else {
      cVar19 = param_3[1];
      if (cVar19 == '\0') {
        cVar19 = '@';
        goto LAB_109b6283c;
      }
      plVar20 = plVar11 + -4;
      uVar21 = 0;
      do {
        uVar22 = uVar21;
        plVar20 = plVar20 + 4;
        if (uVar22 == 9) break;
        uVar21 = uVar22 + 1;
      } while ((&UNK_10f59f628)[uVar22] != cVar19);
      pcVar12 = param_3 + 1;
      if (7 < uVar22) goto LAB_109b6283c;
      uVar21 = 0;
      do {
        if ((0x1f < uVar21) || (*(char *)((long)plVar20 + uVar21) == '\0')) {
          uVar18 = uVar18 + uVar21;
          goto LAB_109b6285c;
        }
        acStack_128[uVar21 + uVar18] = *(char *)((long)plVar20 + uVar21);
        uVar21 = uVar21 + 1;
      } while (uVar18 + uVar21 != 0xbf);
      uVar18 = 0xbf;
LAB_109b6285c:
      param_3 = param_3 + 2;
    }
  } while (uVar18 < 0xbf);
  acStack_128[uVar18] = '\0';
  pcVar12 = acStack_128;
  FUN_109b62608();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = (code *)0x109b628a0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = param_2;
  pcStack_148 = param_1;
  pppuStack_140 = &ppuStack_60;
  if (((byte)pcVar10[0x12a] >> 4 & 1) == 0) {
    if (((*(uint *)(pcVar10 + 0x124) >> 0xf & 1) == 0) ||
       (pcVar13 = pcVar12, *(int *)(pcVar10 + 0x210) == 0)) {
      FUN_109b6244c(pcVar10,pcVar12);
      goto LAB_109b62968;
    }
  }
  else {
    if (((*(uint *)(pcVar10 + 0x124) >> 0xf & 1) == 0) || (*(int *)(pcVar10 + 0x210) == 0)) {
      ppppuVar23 = (undefined8 ****)&ppuStack_60;
      pcVar24 = pcStack_138;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) goto code_r0x000109b62608;
    }
    else {
      FUN_109b62a98(pcVar10,auStack_22e);
      FUN_109b62608(pcVar10,auStack_22e);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
        return;
      }
    }
LAB_109b62968:
    ___stack_chk_fail();
    pcVar13 = pcVar12;
  }
  ppppuVar7 = (undefined8 ****)auStack_330;
  uStack_238 = 0x109b62978;
  ppppuVar23 = &pppuStack_240;
  param_1 = pcVar10;
  uStack_250 = param_2;
  pcStack_248 = pcVar10;
  pppuStack_240 = &pppuStack_140;
  if (pcVar10 == (char *)0x0) {
    FUN_109b6244c(0,pcVar13);
    param_1 = pcVar10;
  }
  FUN_109b62a98();
  pcVar12 = acStack_326;
  pcVar24 = FUN_109b62a68;
  pcVar10 = param_1;
  FUN_109b6244c();
  if (((byte)pcVar10[0x12a] >> 5 & 1) == 0) {
    ppppuVar7 = &pppuStack_340;
    pcStack_338 = FUN_109b62a68;
    pcVar24 = (code *)0x109b62a80;
    pppuStack_340 = ppppuVar23;
    FUN_109b6244c();
    ppppuVar23 = &pppuStack_340;
    if (((byte)pcVar10[0x12a] >> 6 & 1) == 0) {
      FUN_109b6244c();
      iVar14 = 0;
      uVar3 = *(uint *)(pcVar10 + 0x210);
      uVar16 = 0x18;
      do {
        uVar4 = uVar3 >> (ulong)(uVar16 & 0x1f);
        uVar5 = (uVar4 & 0xff) - 0x5b;
        bVar8 = (uVar4 & 0xff) - 0x7b < 0xffffffc6;
        if ((!bVar8 && 4 < uVar5) && (bVar8 || uVar5 != 5)) {
          pcVar12[iVar14] = (char)uVar4;
          iVar14 = iVar14 + 1;
        }
        else {
          pcVar10 = pcVar12 + iVar14;
          *pcVar10 = '[';
          pcVar10[1] = (&UNK_10e035494)[(ulong)(uVar4 >> 4) & 0xf];
          pcVar10[2] = (&UNK_10e035494)[(ulong)uVar4 & 0xf];
          iVar14 = iVar14 + 4;
          pcVar10[3] = ']';
        }
        uVar16 = uVar16 - 8;
      } while (uVar16 != 0xfffffff8);
      pcVar10 = pcVar12 + iVar14;
      if (pcVar13 != (char *)0x0) {
        lVar17 = 0;
        pcVar10[0] = ':';
        pcVar10[1] = ' ';
        iVar2 = iVar14 + 2;
        lVar1 = (long)iVar2;
        do {
          iVar15 = iVar2;
          if (pcVar13[lVar17] == '\0') break;
          pcVar12[lVar17 + lVar1] = pcVar13[lVar17];
          lVar17 = lVar17 + 1;
          iVar2 = iVar2 + 1;
          iVar15 = iVar14 + 0xc5;
        } while (lVar17 != 0xc3);
        pcVar10 = pcVar12 + iVar15;
      }
      *pcVar10 = '\0';
      return;
    }
  }
code_r0x000109b62608:
  puVar6 = PTR____stderrp_11034bdc8;
  if (pcVar10 == (char *)0x0) {
    uVar18 = 0;
  }
  else {
    if (*pcVar12 == '#') {
      uVar18 = 1;
      do {
        if (pcVar12[uVar18] == ' ') break;
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0xf);
    }
    else {
      uVar18 = 0;
    }
    if (*(code **)(pcVar10 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pcVar10 + 0xe0))();
      return;
    }
  }
  *(ulong *)((long)ppppuVar7 + -0x20) = param_2;
  *(char **)((long)ppppuVar7 + -0x18) = param_1;
  *(undefined8 *****)((long)ppppuVar7 + -0x10) = ppppuVar23;
  *(code **)((long)ppppuVar7 + -8) = pcVar24;
  uVar9 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)((long)ppppuVar7 + -0x30) = pcVar12 + (uVar18 & 0xffffffff);
  _fprintf(uVar9,&UNK_10f59f68d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar6);
  return;
}



/* Entry: 109b6277c; end: 109b6289f;  */

/* WARNING: Possible PIC construction at 0x000109b62974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b62978) */
/* WARNING: Removing unreachable block (ram,0x000109b629e0) */
/* WARNING: Removing unreachable block (ram,0x000109b62a18) */
/* WARNING: Removing unreachable block (ram,0x000109b629a0) */
/* WARNING: Removing unreachable block (ram,0x000109b62a2c) */
/* WARNING: Removing unreachable block (ram,0x000109b629d0) */

void FUN_109b6277c(long param_1,long param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar21;
  code *pcVar22;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined1 auStack_2e0 [10];
  char acStack_2d6 [214];
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1de [214];
  long lStack_108;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  char acStack_d8 [192];
  long lStack_18;
  
  ppppuVar6 = (undefined8 ****)auStack_e0;
  uVar16 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar17 = *param_3;
    if (cVar17 == '\0') break;
    pcVar9 = param_3;
    if ((param_2 == 0) || (cVar17 != '@')) {
LAB_109b6283c:
      param_3 = pcVar9 + 1;
      acStack_d8[uVar16] = cVar17;
      uVar16 = uVar16 + 1;
    }
    else {
      cVar17 = param_3[1];
      if (cVar17 == '\0') {
        cVar17 = '@';
        goto LAB_109b6283c;
      }
      lVar18 = param_2 + -0x20;
      uVar19 = 0;
      do {
        uVar20 = uVar19;
        lVar18 = lVar18 + 0x20;
        if (uVar20 == 9) break;
        uVar19 = uVar20 + 1;
      } while ((&UNK_10f59f628)[uVar20] != cVar17);
      pcVar9 = param_3 + 1;
      if (7 < uVar20) goto LAB_109b6283c;
      uVar19 = 0;
      do {
        if ((0x1f < uVar19) || (*(char *)(lVar18 + uVar19) == '\0')) {
          uVar16 = uVar16 + uVar19;
          goto LAB_109b6285c;
        }
        acStack_d8[uVar19 + uVar16] = *(char *)(lVar18 + uVar19);
        uVar19 = uVar19 + 1;
      } while (uVar16 + uVar19 != 0xbf);
      uVar16 = 0xbf;
LAB_109b6285c:
      param_3 = param_3 + 2;
    }
  } while (uVar16 < 0xbf);
  acStack_d8[uVar16] = '\0';
  pcVar9 = acStack_d8;
  FUN_109b62608();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = (code *)0x109b628a0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_f0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((*(byte *)(param_1 + 0x12a) >> 4 & 1) == 0) {
    if (((*(uint *)(param_1 + 0x124) >> 0xf & 1) == 0) ||
       (pcVar10 = pcVar9, *(int *)(param_1 + 0x210) == 0)) {
      FUN_109b6244c(param_1,pcVar9);
      goto LAB_109b62968;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x124) >> 0xf & 1) == 0) || (*(int *)(param_1 + 0x210) == 0)) {
      ppppuVar21 = (undefined8 ****)&stack0xfffffffffffffff0;
      pcVar22 = pcStack_e8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) goto code_r0x000109b62608;
    }
    else {
      FUN_109b62a98(param_1,auStack_1de);
      FUN_109b62608(param_1,auStack_1de);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
        return;
      }
    }
LAB_109b62968:
    ___stack_chk_fail();
    pcVar10 = pcVar9;
  }
  ppppuVar6 = (undefined8 ****)auStack_2e0;
  uStack_1e8 = 0x109b62978;
  ppppuVar21 = &pppuStack_1f0;
  unaff_x19 = param_1;
  pppuStack_1f0 = &pppuStack_f0;
  if (param_1 == 0) {
    FUN_109b6244c(0,pcVar10);
    unaff_x19 = param_1;
  }
  FUN_109b62a98();
  pcVar9 = acStack_2d6;
  pcVar22 = FUN_109b62a68;
  param_1 = unaff_x19;
  FUN_109b6244c();
  if ((*(byte *)(param_1 + 0x12a) >> 5 & 1) == 0) {
    ppppuVar6 = &pppuStack_2f0;
    pcStack_2e8 = FUN_109b62a68;
    pcVar22 = (code *)0x109b62a80;
    pppuStack_2f0 = ppppuVar21;
    FUN_109b6244c();
    ppppuVar21 = &pppuStack_2f0;
    if ((*(byte *)(param_1 + 0x12a) >> 6 & 1) == 0) {
      FUN_109b6244c();
      iVar11 = 0;
      uVar2 = *(uint *)(param_1 + 0x210);
      uVar14 = 0x18;
      do {
        uVar3 = uVar2 >> (ulong)(uVar14 & 0x1f);
        uVar4 = (uVar3 & 0xff) - 0x5b;
        bVar7 = (uVar3 & 0xff) - 0x7b < 0xffffffc6;
        if ((!bVar7 && 4 < uVar4) && (bVar7 || uVar4 != 5)) {
          pcVar9[iVar11] = (char)uVar3;
          iVar11 = iVar11 + 1;
        }
        else {
          pcVar13 = pcVar9 + iVar11;
          *pcVar13 = '[';
          pcVar13[1] = (&UNK_10e035494)[(ulong)(uVar3 >> 4) & 0xf];
          pcVar13[2] = (&UNK_10e035494)[(ulong)uVar3 & 0xf];
          iVar11 = iVar11 + 4;
          pcVar13[3] = ']';
        }
        uVar14 = uVar14 - 8;
      } while (uVar14 != 0xfffffff8);
      pcVar13 = pcVar9 + iVar11;
      if (pcVar10 != (char *)0x0) {
        lVar15 = 0;
        pcVar13[0] = ':';
        pcVar13[1] = ' ';
        iVar1 = iVar11 + 2;
        lVar18 = (long)iVar1;
        do {
          iVar12 = iVar1;
          if (pcVar10[lVar15] == '\0') break;
          pcVar9[lVar15 + lVar18] = pcVar10[lVar15];
          lVar15 = lVar15 + 1;
          iVar1 = iVar1 + 1;
          iVar12 = iVar11 + 0xc5;
        } while (lVar15 != 0xc3);
        pcVar13 = pcVar9 + iVar12;
      }
      *pcVar13 = '\0';
      return;
    }
  }
code_r0x000109b62608:
  puVar5 = PTR____stderrp_11034bdc8;
  if (param_1 == 0) {
    uVar16 = 0;
  }
  else {
    if (*pcVar9 == '#') {
      uVar16 = 1;
      do {
        if (pcVar9[uVar16] == ' ') break;
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xf);
    }
    else {
      uVar16 = 0;
    }
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xe0))();
      return;
    }
  }
  *(undefined8 *)((long)ppppuVar6 + -0x20) = unaff_x20;
  *(long *)((long)ppppuVar6 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)ppppuVar6 + -0x10) = ppppuVar21;
  *(code **)((long)ppppuVar6 + -8) = pcVar22;
  uVar8 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)((long)ppppuVar6 + -0x30) = pcVar9 + (uVar16 & 0xffffffff);
  _fprintf(uVar8,&UNK_10f59f68d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar5);
  return;
}



/* Entry: 109b628a0; end: 109b62a67;  */

/* WARNING: Possible PIC construction at 0x000109b62974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b62978) */
/* WARNING: Removing unreachable block (ram,0x000109b629e0) */
/* WARNING: Removing unreachable block (ram,0x000109b62a18) */
/* WARNING: Removing unreachable block (ram,0x000109b629a0) */
/* WARNING: Removing unreachable block (ram,0x000109b62a2c) */
/* WARNING: Removing unreachable block (ram,0x000109b629d0) */

void FUN_109b628a0(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 ***pppuVar7;
  bool bVar8;
  undefined8 uVar9;
  char *pcVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  long lVar16;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 ***unaff_x29;
  code *unaff_x30;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined1 auStack_200 [10];
  char acStack_1f6 [214];
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_fe [214];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x12a) >> 4 & 1) == 0) {
    if (((*(uint *)(param_1 + 0x124) >> 0xf & 1) == 0) ||
       (pcVar10 = param_2, *(int *)(param_1 + 0x210) == 0)) {
      FUN_109b6244c(param_1,param_2);
      goto LAB_109b62968;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x124) >> 0xf & 1) == 0) || (*(int *)(param_1 + 0x210) == 0)) {
      pppuVar7 = (undefined1 ***)register0x00000008;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0)
      goto code_r0x000109b62608;
    }
    else {
      FUN_109b62a98(param_1,auStack_fe);
      FUN_109b62608(param_1,auStack_fe);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
    }
LAB_109b62968:
    ___stack_chk_fail();
    pcVar10 = param_2;
  }
  pppuVar7 = (undefined1 ***)auStack_200;
  uStack_108 = 0x109b62978;
  unaff_x29 = (undefined1 ***)&puStack_110;
  unaff_x19 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  if (param_1 == 0) {
    FUN_109b6244c(0,pcVar10);
    unaff_x19 = param_1;
  }
  FUN_109b62a98();
  param_2 = acStack_1f6;
  unaff_x30 = FUN_109b62a68;
  param_1 = unaff_x19;
  FUN_109b6244c();
  if ((*(byte *)(param_1 + 0x12a) >> 5 & 1) == 0) {
    pppuVar7 = &ppuStack_210;
    pcStack_208 = FUN_109b62a68;
    unaff_x30 = (code *)0x109b62a80;
    ppuStack_210 = (undefined1 **)unaff_x29;
    FUN_109b6244c();
    unaff_x29 = &ppuStack_210;
    if ((*(byte *)(param_1 + 0x12a) >> 6 & 1) == 0) {
      FUN_109b6244c();
      iVar11 = 0;
      uVar3 = *(uint *)(param_1 + 0x210);
      uVar15 = 0x18;
      do {
        uVar4 = uVar3 >> (ulong)(uVar15 & 0x1f);
        uVar5 = (uVar4 & 0xff) - 0x5b;
        bVar8 = (uVar4 & 0xff) - 0x7b < 0xffffffc6;
        if ((!bVar8 && 4 < uVar5) && (bVar8 || uVar5 != 5)) {
          param_2[iVar11] = (char)uVar4;
          iVar11 = iVar11 + 1;
        }
        else {
          pcVar14 = param_2 + iVar11;
          *pcVar14 = '[';
          pcVar14[1] = (&UNK_10e035494)[(ulong)(uVar4 >> 4) & 0xf];
          pcVar14[2] = (&UNK_10e035494)[(ulong)uVar4 & 0xf];
          iVar11 = iVar11 + 4;
          pcVar14[3] = ']';
        }
        uVar15 = uVar15 - 8;
      } while (uVar15 != 0xfffffff8);
      pcVar14 = param_2 + iVar11;
      if (pcVar10 != (char *)0x0) {
        lVar16 = 0;
        pcVar14[0] = ':';
        pcVar14[1] = ' ';
        iVar2 = iVar11 + 2;
        lVar1 = (long)iVar2;
        do {
          iVar13 = iVar2;
          if (pcVar10[lVar16] == '\0') break;
          param_2[lVar16 + lVar1] = pcVar10[lVar16];
          lVar16 = lVar16 + 1;
          iVar2 = iVar2 + 1;
          iVar13 = iVar11 + 0xc5;
        } while (lVar16 != 0xc3);
        pcVar14 = param_2 + iVar13;
      }
      *pcVar14 = '\0';
      return;
    }
  }
code_r0x000109b62608:
  puVar6 = PTR____stderrp_11034bdc8;
  if (param_1 == 0) {
    uVar12 = 0;
  }
  else {
    if (*param_2 == '#') {
      uVar12 = 1;
      do {
        if (param_2[uVar12] == ' ') break;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0xf);
    }
    else {
      uVar12 = 0;
    }
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xe0))();
      return;
    }
  }
  *(undefined8 *)((long)pppuVar7 + -0x20) = unaff_x20;
  *(long *)((long)pppuVar7 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar7 + -0x10) = unaff_x29;
  *(code **)((long)pppuVar7 + -8) = unaff_x30;
  uVar9 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)((long)pppuVar7 + -0x30) = param_2 + (uVar12 & 0xffffffff);
  _fprintf(uVar9,&UNK_10f59f68d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar6);
  return;
}



/* Entry: 109b62a68; end: 109b62a97;  */

void FUN_109b62a68(long param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((*(byte *)(param_1 + 0x12a) >> 5 & 1) == 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x109b62a80;
    FUN_109b6244c();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    if ((*(byte *)(param_1 + 0x12a) >> 6 & 1) == 0) {
      FUN_109b6244c();
      iVar9 = 0;
      uVar3 = *(uint *)(param_1 + 0x210);
      uVar13 = 0x18;
      do {
        uVar4 = uVar3 >> (ulong)(uVar13 & 0x1f);
        uVar5 = (uVar4 & 0xff) - 0x5b;
        bVar7 = (uVar4 & 0xff) - 0x7b < 0xffffffc6;
        if ((!bVar7 && 4 < uVar5) && (bVar7 || uVar5 != 5)) {
          param_2[iVar9] = (char)uVar4;
          iVar9 = iVar9 + 1;
        }
        else {
          pcVar12 = param_2 + iVar9;
          *pcVar12 = '[';
          pcVar12[1] = (&UNK_10e035494)[(ulong)(uVar4 >> 4) & 0xf];
          pcVar12[2] = (&UNK_10e035494)[(ulong)uVar4 & 0xf];
          iVar9 = iVar9 + 4;
          pcVar12[3] = ']';
        }
        uVar13 = uVar13 - 8;
      } while (uVar13 != 0xfffffff8);
      pcVar12 = param_2 + iVar9;
      if (param_3 != 0) {
        lVar14 = 0;
        pcVar12[0] = ':';
        pcVar12[1] = ' ';
        iVar2 = iVar9 + 2;
        lVar1 = (long)iVar2;
        do {
          iVar11 = iVar2;
          if (*(char *)(param_3 + lVar14) == '\0') break;
          param_2[lVar14 + lVar1] = *(char *)(param_3 + lVar14);
          lVar14 = lVar14 + 1;
          iVar2 = iVar2 + 1;
          iVar11 = iVar9 + 0xc5;
        } while (lVar14 != 0xc3);
        pcVar12 = param_2 + iVar11;
      }
      *pcVar12 = '\0';
      return;
    }
  }
  puVar6 = PTR____stderrp_11034bdc8;
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    if (*param_2 == '#') {
      uVar10 = 1;
      do {
        if (param_2[uVar10] == ' ') break;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0xf);
    }
    else {
      uVar10 = 0;
    }
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xe0))();
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar8 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)((long)register0x00000008 + -0x30) = param_2 + (uVar10 & 0xffffffff);
  _fprintf(uVar8,&UNK_10f59f68d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar6);
  return;
}



/* Entry: 109b62a98; end: 109b62b5b;  */

void FUN_109b62a98(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  long lVar12;
  
  iVar8 = 0;
  uVar4 = *(uint *)(param_1 + 0x210);
  uVar11 = 0x18;
  do {
    uVar5 = uVar4 >> (ulong)(uVar11 & 0x1f);
    uVar6 = (uVar5 & 0xff) - 0x5b;
    bVar7 = (uVar5 & 0xff) - 0x7b < 0xffffffc6;
    if ((!bVar7 && 4 < uVar6) && (bVar7 || uVar6 != 5)) {
      *(char *)(param_2 + iVar8) = (char)uVar5;
      iVar8 = iVar8 + 1;
    }
    else {
      puVar2 = (undefined1 *)(param_2 + iVar8);
      *puVar2 = 0x5b;
      puVar2[1] = (&UNK_10e035494)[(ulong)(uVar5 >> 4) & 0xf];
      puVar2[2] = (&UNK_10e035494)[(ulong)uVar5 & 0xf];
      iVar8 = iVar8 + 4;
      puVar2[3] = 0x5d;
    }
    uVar11 = uVar11 - 8;
  } while (uVar11 != 0xfffffff8);
  puVar10 = (undefined2 *)(param_2 + iVar8);
  if (param_3 != 0) {
    lVar12 = 0;
    *puVar10 = 0x203a;
    iVar3 = iVar8 + 2;
    lVar1 = (long)iVar3;
    do {
      iVar9 = iVar3;
      if (*(char *)(param_3 + lVar12) == '\0') break;
      *(char *)(param_2 + lVar1 + lVar12) = *(char *)(param_3 + lVar12);
      lVar12 = lVar12 + 1;
      iVar3 = iVar3 + 1;
      iVar9 = iVar8 + 0xc5;
    } while (lVar12 != 0xc3);
    puVar10 = (undefined2 *)(param_2 + iVar9);
  }
  *(undefined1 *)puVar10 = 0;
  return;
}



/* Entry: 109b62b5c; end: 109b62cf3;  */

undefined *
FUN_109b62b5c(undefined *param_1,char *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,uint *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined *puVar22;
  undefined8 unaff_x22;
  undefined1 *puVar23;
  undefined8 unaff_x29;
  undefined8 uVar24;
  undefined8 unaff_x30;
  
  while( true ) {
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = param_1;
    pcVar14 = param_2;
    if (((byte)param_1[0x12a] >> 4 & 1) == 0) {
      func_0x000109b62a30();
    }
    else {
      FUN_109b62a98(param_1,(undefined1 *)((long)register0x00000008 + -0xfe));
      param_2 = (char *)((long)register0x00000008 + -0xfe);
      FUN_109b62608();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
      {
        return puVar11;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x118) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x110) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x109b62bdc;
    *(undefined8 *)((long)register0x00000008 + -0x128) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = puVar11;
    if (-1 < (char)puVar11[0x125]) break;
    if ((int)pcVar14 < 2) {
      pcVar14 = param_2;
      FUN_109b62a98(puVar11,(undefined1 *)((long)register0x00000008 + -0x1fe));
      param_2 = (char *)((long)register0x00000008 + -0x1fe);
      FUN_109b62608();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x128))
      {
        return puVar12;
      }
      goto LAB_109b62cf0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x128))
    goto LAB_109b62cf0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x110);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x108);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x118);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x100);
    param_1 = puVar11;
  }
  if ((int)pcVar14 < 1) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x128)) {
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0x108);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x120);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x118);
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x100);
      puVar23 = *(undefined1 **)((long)register0x00000008 + -0x110);
      if (((byte)puVar11[0x12a] >> 5 & 1) == 0) {
        puVar8 = (undefined1 *)((long)register0x00000008 + -0x110);
        puVar23 = (undefined1 *)((long)register0x00000008 + -0x110);
        *(undefined1 **)((long)register0x00000008 + -0x110) =
             *(undefined1 **)((long)register0x00000008 + -0x110);
        *(undefined8 *)((long)register0x00000008 + -0x108) = uVar24;
        uVar24 = 0x109b62a80;
        FUN_109b6244c();
        goto SUB_109b62a80;
      }
      goto code_r0x000109b62608;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x128)
          ) {
    puVar23 = *(undefined1 **)((long)register0x00000008 + -0x110);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x108);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x120);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x118);
SUB_109b62a80:
    if (((byte)puVar11[0x12a] >> 6 & 1) == 0) {
      *(undefined1 **)(puVar8 + -0x10) = puVar23;
      *(undefined8 *)(puVar8 + -8) = uVar24;
      FUN_109b6244c();
      iVar15 = 0;
      uVar5 = *(uint *)(puVar11 + 0x210);
      uVar19 = 0x18;
      do {
        uVar6 = uVar5 >> (ulong)(uVar19 & 0x1f);
        uVar7 = (uVar6 & 0xff) - 0x5b;
        bVar9 = (uVar6 & 0xff) - 0x7b < 0xffffffc6;
        if ((!bVar9 && 4 < uVar7) && (bVar9 || uVar7 != 5)) {
          param_2[iVar15] = (char)uVar6;
          iVar15 = iVar15 + 1;
        }
        else {
          pcVar17 = param_2 + iVar15;
          *pcVar17 = '[';
          pcVar17[1] = (&UNK_10e035494)[(ulong)(uVar6 >> 4) & 0xf];
          pcVar17[2] = (&UNK_10e035494)[(ulong)uVar6 & 0xf];
          iVar15 = iVar15 + 4;
          pcVar17[3] = ']';
        }
        uVar19 = uVar19 - 8;
      } while (uVar19 != 0xfffffff8);
      pcVar17 = param_2 + iVar15;
      if (pcVar14 != (char *)0x0) {
        lVar20 = 0;
        pcVar17[0] = ':';
        pcVar17[1] = ' ';
        iVar3 = iVar15 + 2;
        lVar1 = (long)iVar3;
        do {
          iVar18 = iVar3;
          if (pcVar14[lVar20] == '\0') break;
          param_2[lVar20 + lVar1] = pcVar14[lVar20];
          lVar20 = lVar20 + 1;
          iVar3 = iVar3 + 1;
          iVar18 = iVar15 + 0xc5;
        } while (lVar20 != 0xc3);
        pcVar17 = param_2 + iVar18;
      }
      *pcVar17 = '\0';
      return puVar11;
    }
code_r0x000109b62608:
    puVar12 = PTR____stderrp_11034bdc8;
    if (puVar11 == (undefined *)0x0) {
      uVar16 = 0;
      goto LAB_109b62654;
    }
    if (*param_2 != '#') {
      uVar16 = 0;
      goto LAB_109b62644;
    }
    uVar16 = 1;
    goto LAB_109b6261c;
  }
LAB_109b62cf0:
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x230) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x228) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x220) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x218) = puVar11;
  *(undefined1 **)((long)register0x00000008 + -0x210) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(code **)((long)register0x00000008 + -0x208) = FUN_109b62cf4;
  puVar11 = puVar12;
  if (puVar12 != (undefined *)0x0) {
    puVar11 = *(undefined **)(puVar12 + 200);
    if (puVar11 == (undefined *)0x0) {
      *(undefined8 *)(puVar12 + 0xd0) = 0;
      if (pcVar14 < (char *)0xc1) {
        *(undefined **)(puVar12 + 200) = puVar12;
        puVar11 = puVar12;
      }
      else {
        puVar11 = puVar12;
        FUN_109b63258(puVar12,pcVar14);
        *(undefined **)(puVar12 + 200) = puVar11;
        if (puVar11 == (undefined *)0x0) {
          return (undefined *)0x0;
        }
        *(char **)(puVar12 + 0xd0) = pcVar14;
      }
    }
    else {
      pcVar17 = *(char **)(puVar12 + 0xd0);
      if (pcVar17 == (char *)0x0) {
        if (puVar11 != puVar12) {
          puVar11 = &UNK_10f59f632;
          puVar13 = puVar12;
          pcVar17 = pcVar14;
          FUN_109b6244c();
          *(undefined8 *)((long)register0x00000008 + -0x260) = unaff_x22;
          *(char **)((long)register0x00000008 + -600) = pcVar14;
          *(char **)((long)register0x00000008 + -0x250) = param_2;
          *(undefined **)((long)register0x00000008 + -0x248) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x240) =
               (undefined1 *)((long)register0x00000008 + -0x210);
          *(undefined8 *)((long)register0x00000008 + -0x238) = 0x109b62da4;
          *(undefined8 *)((long)register0x00000008 + -0x268) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puVar12 = puVar13;
          if (puVar13 != (undefined *)0x0) {
            puVar22 = *(undefined **)(puVar13 + 200);
            if ((puVar22 != (undefined *)0x0) &&
               (puVar22 != puVar13 && *(long *)(puVar13 + 0xd0) != 0)) {
              puVar12 = (undefined *)((long)register0x00000008 + -0x328);
              _setjmp();
              if ((int)puVar12 == 0) {
                *(undefined8 *)(puVar13 + 0xd0) = 0;
                *(undefined **)(puVar13 + 0xc0) = PTR__longjmp_11034c548;
                *(undefined **)(puVar13 + 200) = (undefined *)((long)register0x00000008 + -0x328);
                if (*(code **)(puVar13 + 0x3f0) == (code *)0x0) {
                  puVar11 = puVar22;
                  _free();
                  puVar12 = puVar22;
                }
                else {
                  puVar12 = puVar13;
                  (**(code **)(puVar13 + 0x3f0))();
                  puVar11 = puVar22;
                }
              }
            }
            *(undefined8 *)(puVar13 + 0xc0) = 0;
            *(undefined8 *)(puVar13 + 200) = 0;
            *(undefined8 *)(puVar13 + 0xd0) = 0;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
              *(long *)((long)register0x00000008 + -0x268)) {
            ___stack_chk_fail();
            *(undefined1 **)((long)register0x00000008 + -0x340) =
                 (undefined1 *)((long)register0x00000008 + -0x240);
            *(code **)((long)register0x00000008 + -0x338) = FUN_109b62e60;
            if (((puVar12 != (undefined *)0x0) &&
                (puVar2 = (undefined8 *)(puVar12 + 0xc0), (code *)*puVar2 != (code *)0x0)) &&
               (puVar12 = *(undefined **)(puVar12 + 200), puVar12 != (undefined *)0x0)) {
              (*(code *)*puVar2)();
            }
            _abort();
            puVar13 = (undefined *)0x0;
            if ((((puVar12 != (undefined *)0x0) && (puVar11 != (undefined *)0x0)) &&
                ((puVar13 = (undefined *)0x0, param_6 != (uint *)0x0 &&
                 ((param_5 != (undefined8 *)0x0 && (pcVar17 != (char *)0x0)))))) &&
               ((*(uint *)(puVar11 + 8) >> 0xc & 1) != 0)) {
              puVar4 = *(uint **)(puVar11 + 0x88);
              *(undefined8 *)pcVar17 = *(undefined8 *)(puVar11 + 0x80);
              *param_5 = puVar4;
              uVar5 = *puVar4;
              uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
              *param_6 = uVar5 >> 0x10 | uVar5 << 0x10;
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = 0;
              }
              puVar13 = (undefined *)0x1000;
            }
            return puVar13;
          }
          return puVar12;
        }
        pcVar17 = (char *)0xc0;
      }
      if (pcVar17 != pcVar14) {
        FUN_109b62608(puVar12,&UNK_10f59f651);
        return (undefined *)0x0;
      }
    }
    *(char **)(puVar12 + 0xc0) = param_2;
  }
  return puVar11;
  while (uVar16 = uVar16 + 1, uVar16 != 0xf) {
LAB_109b6261c:
    if (param_2[uVar16] == ' ') break;
  }
LAB_109b62644:
  if (*(code **)(puVar11 + 0xe0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b62650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar11 + 0xe0))();
    return puVar11;
  }
LAB_109b62654:
  *(undefined8 *)(puVar8 + -0x20) = uVar10;
  *(undefined8 *)(puVar8 + -0x18) = uVar21;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined8 *)(puVar8 + -8) = uVar24;
  uVar10 = *(undefined8 *)PTR____stderrp_11034bdc8;
  *(char **)(puVar8 + -0x30) = param_2 + (uVar16 & 0xffffffff);
  _fprintf(uVar10,&UNK_10f59f68d);
  puVar11 = (undefined *)0xa;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(10,*(undefined8 *)puVar12);
  return puVar11;
}



/* Entry: 109b62cf4; end: 109b62e5f;  */

undefined *
FUN_109b62cf4(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined auStack_128 [192];
  long lStack_68;
  
  puVar3 = param_1;
  if (param_1 != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 200);
    if (puVar3 == (undefined *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (param_3 < (undefined8 *)0xc1) {
        *(undefined **)(param_1 + 200) = param_1;
        puVar3 = param_1;
      }
      else {
        puVar3 = param_1;
        FUN_109b63258(param_1,param_3);
        *(undefined **)(param_1 + 200) = puVar3;
        if (puVar3 == (undefined *)0x0) {
          return (undefined *)0x0;
        }
        *(undefined8 **)(param_1 + 0xd0) = param_3;
      }
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 0xd0);
      if (puVar5 == (undefined8 *)0x0) {
        if (puVar3 != param_1) {
          puVar3 = &UNK_10f59f632;
          FUN_109b6244c();
          lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar4 = param_1;
          if (param_1 != (undefined *)0x0) {
            puVar6 = *(undefined **)(param_1 + 200);
            if ((puVar6 != (undefined *)0x0) &&
               (puVar6 != param_1 && *(long *)(param_1 + 0xd0) != 0)) {
              puVar4 = auStack_128;
              _setjmp();
              if ((int)puVar4 == 0) {
                *(undefined8 *)(param_1 + 0xd0) = 0;
                *(undefined **)(param_1 + 0xc0) = PTR__longjmp_11034c548;
                *(undefined **)(param_1 + 200) = auStack_128;
                if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
                  puVar3 = puVar6;
                  _free();
                  puVar4 = puVar6;
                }
                else {
                  puVar4 = param_1;
                  (**(code **)(param_1 + 0x3f0))();
                  puVar3 = puVar6;
                }
              }
            }
            *(undefined8 *)(param_1 + 0xc0) = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined8 *)(param_1 + 0xd0) = 0;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
            ___stack_chk_fail();
            if (((puVar4 != (undefined *)0x0) &&
                (puVar5 = (undefined8 *)(puVar4 + 0xc0), (code *)*puVar5 != (code *)0x0)) &&
               (puVar4 = *(undefined **)(puVar4 + 200), puVar4 != (undefined *)0x0)) {
              (*(code *)*puVar5)();
            }
            _abort();
            puVar6 = (undefined *)0x0;
            if ((((puVar4 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) &&
                ((puVar6 = (undefined *)0x0, param_6 != (uint *)0x0 &&
                 ((param_5 != (undefined8 *)0x0 && (param_3 != (undefined8 *)0x0)))))) &&
               ((*(uint *)(puVar3 + 8) >> 0xc & 1) != 0)) {
              puVar1 = *(uint **)(puVar3 + 0x88);
              *param_3 = *(undefined8 *)(puVar3 + 0x80);
              *param_5 = puVar1;
              uVar2 = *puVar1;
              uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
              *param_6 = uVar2 >> 0x10 | uVar2 << 0x10;
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = 0;
              }
              puVar6 = (undefined *)0x1000;
            }
            return puVar6;
          }
          return puVar4;
        }
        puVar5 = (undefined8 *)0xc0;
      }
      if (puVar5 != param_3) {
        FUN_109b62608(param_1,&UNK_10f59f651);
        return (undefined *)0x0;
      }
    }
    *(undefined8 *)(param_1 + 0xc0) = param_2;
  }
  return puVar3;
}



/* Entry: 109b62e60; end: 109b62e83;  */

undefined8
FUN_109b62e60(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,undefined8 *param_5,
             uint *param_6)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (((param_1 != 0) && (puVar1 = (undefined8 *)(param_1 + 0xc0), (code *)*puVar1 != (code *)0x0))
     && (param_1 = *(long *)(param_1 + 200), param_1 != 0)) {
    (*(code *)*puVar1)();
  }
  _abort();
  uVar4 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((uVar4 = 0, param_6 != (uint *)0x0 &&
       ((param_5 != (undefined8 *)0x0 && (param_3 != (undefined8 *)0x0)))))) &&
     ((*(uint *)(param_2 + 8) >> 0xc & 1) != 0)) {
    puVar2 = *(uint **)(param_2 + 0x88);
    *param_3 = *(undefined8 *)(param_2 + 0x80);
    *param_5 = puVar2;
    uVar3 = *puVar2;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *param_6 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    uVar4 = 0x1000;
  }
  return uVar4;
}



/* Entry: 109b62e84; end: 109b62ed3;  */

undefined8
FUN_109b62e84(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,undefined8 *param_5,
             uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar3 = 0, param_6 != (uint *)0x0)) &&
     (((param_5 != (undefined8 *)0x0 && (param_3 != (undefined8 *)0x0)) &&
      ((*(uint *)(param_2 + 8) >> 0xc & 1) != 0)))) {
    puVar1 = *(uint **)(param_2 + 0x88);
    *param_3 = *(undefined8 *)(param_2 + 0x80);
    *param_5 = puVar1;
    uVar2 = *puVar1;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *param_6 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    uVar3 = 0x1000;
  }
  return uVar3;
}



/* Entry: 109b62ed4; end: 109b62f6b;  */

undefined8
FUN_109b62ed4(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5
             ,uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_2[1];
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(param_2 + 9);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = (uint)*(byte *)((long)param_2 + 0x25);
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((long)param_2 + 0x26);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((long)param_2 + 0x27);
    }
    bVar1 = *(byte *)(param_2 + 10);
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)bVar1;
    }
    FUN_109b61198(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 9),
                  *(undefined1 *)((long)param_2 + 0x25),bVar1,*(undefined1 *)((long)param_2 + 0x26),
                  *(undefined1 *)((long)param_2 + 0x27));
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109b62f6c; end: 109b62ffb;  */

undefined8 FUN_109b62f6c(long param_1,long param_2,undefined8 *param_3,uint *param_4,long *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 8) >> 4 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x25) == '\x03') {
      if (param_3 == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        *param_3 = *(undefined8 *)(param_2 + 0xb8);
        uVar1 = 0x10;
      }
      if (param_5 != (long *)0x0) {
        *param_5 = param_2 + 0xc0;
      }
    }
    else {
      if (param_5 == (long *)0x0) {
        uVar1 = 0;
      }
      else {
        *param_5 = param_2 + 0xc0;
        uVar1 = 0x10;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
      }
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(ushort *)(param_2 + 0x22);
      uVar1 = 0x10;
    }
  }
  return uVar1;
}



/* Entry: 109b62ffc; end: 109b63093;  */

void FUN_109b62ffc(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_510 [1008];
  code *pcStack_120;
  long lStack_28;
  
  puVar1 = auStack_510;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined1 *)0x0;
  if (param_1 != 0) {
    _memcpy(auStack_510,param_1,0x4e8);
    param_2 = 0x4e8;
    _bzero(param_1);
    if (pcStack_120 == (code *)0x0) {
      _free(param_1);
    }
    else {
      (*pcStack_120)(auStack_510);
      param_2 = param_1;
    }
    func_0x000109b62da4();
    puVar2 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar2 != (undefined1 *)0x0) && (param_2 != 0)) {
    if (*(code **)(puVar2 + 0x3f0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b630a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2 + 0x3f0))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_2);
    return;
  }
  return;
}



/* Entry: 109b63094; end: 109b630b3;  */

void FUN_109b63094(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(code **)(param_1 + 0x3f0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109b630a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x3f0))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_2);
    return;
  }
  return;
}



/* Entry: 109b630b4; end: 109b6313f;  */

long FUN_109b630b4(long param_1,undefined8 param_2)

{
  func_0x000109b630ec();
  if (param_1 != 0) {
    _bzero(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109b63140; end: 109b63163;  */

long FUN_109b63140(long param_1,undefined *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  
  if (((int)param_2 < 1) || (param_3 == 0)) {
    param_2 = &UNK_10f59f6a0;
    FUN_109b6244c();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (ulong)param_2 & 0xffffffff;
  if ((SUB168(auVar1 * auVar2,8) == 0) &&
     (lVar3 = param_3 * ((ulong)param_2 & 0xffffffff), lVar3 != 0)) {
    if ((param_1 != 0) && (*(code **)(param_1 + 1000) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109b63188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 1000))();
      return param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__malloc_11034c5e8)(lVar3);
    return lVar3;
  }
  return 0;
}



/* Entry: 109b63164; end: 109b6319b;  */

long FUN_109b63164(long param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2 & 0xffffffff;
  if ((SUB168(auVar1 * auVar2,8) != 0) || (lVar3 = param_3 * (param_2 & 0xffffffff), lVar3 == 0)) {
    return 0;
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 1000) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109b63188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 1000))();
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(lVar3);
  return lVar3;
}



/* Entry: 109b6319c; end: 109b63257;  */

undefined * FUN_109b6319c(undefined *param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  if ((((-1 < (int)param_3) && (0 < (int)param_4)) && (param_5 != 0)) &&
     ((param_2 != 0 || (param_3 == 0)))) {
    if ((param_3 ^ 0x7fffffff) < param_4) {
      param_1 = (undefined *)0x0;
    }
    else {
      FUN_109b63164(param_1,param_4 + param_3,param_5);
      if (param_1 != (undefined *)0x0) {
        if (param_3 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = param_5 * (ulong)param_3;
          _memcpy(param_1,param_2,lVar2);
        }
        _bzero(param_1 + lVar2,param_5 * (ulong)param_4);
      }
    }
    return param_1;
  }
  puVar1 = &UNK_10f59f6bc;
  FUN_109b6244c();
  if (param_1 != (undefined *)0x0) {
    if (puVar1 != (undefined *)0x0) {
      if (*(code **)(param_1 + 1000) == (code *)0x0) {
        _malloc();
      }
      else {
        puVar1 = param_1;
        (**(code **)(param_1 + 1000))();
      }
      if (puVar1 != (undefined *)0x0) {
        return puVar1;
      }
    }
    FUN_109b62608(param_1,&UNK_10f59f6da);
  }
  return (undefined *)0x0;
}



/* Entry: 109b63258; end: 109b6330b;  */

void FUN_109b63258(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      if (*(code **)(param_1 + 1000) == (code *)0x0) {
        _malloc();
      }
      else {
        param_2 = param_1;
        (**(code **)(param_1 + 1000))();
      }
      if (param_2 != 0) {
        return;
      }
    }
    FUN_109b62608(param_1,&UNK_10f59f6da);
  }
  return;
}



/* Entry: 109b6330c; end: 109b6333b;  */

void FUN_109b6330c(long param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  byte abStack_a4 [100];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x368);
  if (iVar1 != 2) {
    lVar5 = param_1;
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        *(undefined8 *)(param_1 + 0x358) = 0;
        return;
      }
      unaff_x29 = &stack0xfffffffffffffff0;
      bVar3 = *(byte *)(param_1 + 0x265);
      unaff_x20 = (undefined *)(ulong)bVar3;
      unaff_x22 = *(ulong *)(param_1 + 0x358);
      if (8U - (long)unaff_x20 <= *(ulong *)(param_1 + 0x358)) {
        unaff_x22 = 8U - (long)unaff_x20;
      }
      unaff_x21 = param_2 + 0x2c;
      FUN_109b63da8(param_1,unaff_x21 + (long)unaff_x20,unaff_x22);
      uVar10 = (uint)*(byte *)(param_1 + 0x265) + (int)unaff_x22;
      *(char *)(param_1 + 0x265) = (char)uVar10;
      puVar7 = unaff_x21;
      func_0x000109b5ec6c(unaff_x21,unaff_x20,unaff_x22);
      if ((int)puVar7 == 0) {
        if (7 < (uVar10 & 0xff)) {
          *(undefined4 *)(param_1 + 0x368) = 1;
        }
        return;
      }
      if ((bVar3 < 4) &&
         (puVar7 = unaff_x21, func_0x000109b5ec6c(unaff_x21,unaff_x20,unaff_x22 - 4),
         (int)puVar7 != 0)) {
        param_2 = &UNK_10f59f6e8;
      }
      else {
        param_2 = &UNK_10f59f6f7;
      }
      unaff_x30 = FUN_109b63534;
      FUN_109b6244c();
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
    }
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar10 = *(uint *)(lVar5 + 0x124);
    if ((uVar10 >> 8 & 1) == 0) {
      if (*(ulong *)(lVar5 + 0x358) < 8) goto LAB_109b637ac;
      FUN_109b63da8(lVar5,(undefined1 *)((long)register0x00000008 + -0x38),4);
      if (-1 < (int)((uint)*(byte *)((long)register0x00000008 + -0x38) << 0x18)) {
        *(uint *)(lVar5 + 0x340) =
             (uint)*(byte *)((long)register0x00000008 + -0x35) |
             (uint)*(byte *)((long)register0x00000008 + -0x37) << 0x10 |
             (uint)*(byte *)((long)register0x00000008 + -0x36) << 8 |
             (uint)*(byte *)((long)register0x00000008 + -0x38) << 0x18;
        uVar4 = 0;
        _crc32(0,0,0);
        *(undefined4 *)(lVar5 + 0x244) = uVar4;
        FUN_109b69a24(lVar5,(undefined1 *)((long)register0x00000008 + -0x3c),4);
        uVar10 = (*(uint *)((long)register0x00000008 + -0x3c) & 0xff00ff00) >> 8 |
                 (*(uint *)((long)register0x00000008 + -0x3c) & 0xff00ff) << 8;
        *(uint *)(lVar5 + 0x210) = uVar10 >> 0x10 | uVar10 << 0x10;
        FUN_109b6991c(lVar5);
        func_0x000109b6995c(lVar5,*(undefined4 *)(lVar5 + 0x340));
        uVar10 = *(uint *)(lVar5 + 0x124) | 0x100;
        *(uint *)(lVar5 + 0x124) = uVar10;
        goto LAB_109b635ec;
      }
      puVar7 = &UNK_10f59fca5;
    }
    else {
LAB_109b635ec:
      uVar2 = *(uint *)(lVar5 + 0x210);
      unaff_x21 = (undefined *)(ulong)uVar2;
      if (uVar2 == 0x49484452) {
        if (*(int *)(lVar5 + 0x340) == 0xd) {
          if (0x10 < *(ulong *)(lVar5 + 0x358)) {
            FUN_109b69c38(lVar5,param_2,0xd);
            goto LAB_109b637e0;
          }
          goto LAB_109b637ac;
        }
        puVar7 = &UNK_10f59f765;
      }
      else {
        if (uVar2 == 0x49454e44) {
          if ((ulong)(*(int *)(lVar5 + 0x340) + 4) <= *(ulong *)(lVar5 + 0x358)) {
            FUN_109b6a064(lVar5,param_2);
            *(undefined4 *)(lVar5 + 0x368) = 6;
            if (*(code **)(lVar5 + 0x318) != (code *)0x0) {
              (**(code **)(lVar5 + 0x318))(lVar5,param_2);
            }
            goto LAB_109b637e0;
          }
          goto LAB_109b637ac;
        }
        lVar6 = lVar5;
        if (uVar2 != 0x49444154) {
          *(char *)((long)register0x00000008 + -0x38) = (char)(uVar2 >> 0x18);
          *(char *)((long)register0x00000008 + -0x37) = (char)(uVar2 >> 0x10);
          *(char *)((long)register0x00000008 + -0x36) = (char)(uVar2 >> 8);
          *(char *)((long)register0x00000008 + -0x35) = (char)uVar2;
          *(undefined1 *)((long)register0x00000008 + -0x34) = 0;
          FUN_109b5f86c(lVar5,(undefined1 *)((long)register0x00000008 + -0x38));
          if ((int)lVar6 == 0) {
            uVar8 = (ulong)(*(int *)(lVar5 + 0x340) + 4);
            uVar9 = *(ulong *)(lVar5 + 0x358);
            if ((int)uVar2 < 0x70485973) {
              if ((int)uVar2 < 0x68495354) {
                if ((int)uVar2 < 0x6348524d) {
                  if (uVar2 == 0x504c5445) {
                    if (uVar8 <= uVar9) {
                      FUN_109b69dc4(lVar5,param_2);
                      goto LAB_109b637e0;
                    }
                    goto LAB_109b637ac;
                  }
                  if (uVar2 == 0x624b4744) {
                    if (uVar8 <= uVar9) {
                      FUN_109b6b774(lVar5,param_2);
                      goto LAB_109b637e0;
                    }
                    goto LAB_109b637ac;
                  }
                }
                else {
                  if (uVar2 == 0x6348524d) {
                    if (uVar8 <= uVar9) {
                      FUN_109b6a3d8(lVar5,param_2);
                      goto LAB_109b637e0;
                    }
                    goto LAB_109b637ac;
                  }
                  if (uVar2 == 0x67414d41) {
                    if (uVar8 <= uVar9) {
                      FUN_109b6a0d4(lVar5,param_2);
                      goto LAB_109b637e0;
                    }
                    goto LAB_109b637ac;
                  }
                }
              }
              else if ((int)uVar2 < 0x69545874) {
                if (uVar2 == 0x68495354) {
                  if (uVar8 <= uVar9) {
                    FUN_109b6bb94(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (uVar2 == 0x69434350) {
                  if (uVar8 <= uVar9) {
                    FUN_109b6a8c0(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
              else {
                if (uVar2 == 0x69545874) {
                  if (uVar9 < uVar8) goto LAB_109b637ac;
                  FUN_109b6cd14(lVar5,param_2);
                  goto LAB_109b637e0;
                }
                if (uVar2 == 0x6f464673) {
                  if (uVar8 <= uVar9) {
                    func_0x000109b6bea8(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (uVar2 == 0x7043414c) {
                  if (uVar8 <= uVar9) {
                    FUN_109b6c0b8(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
            }
            else if ((int)uVar2 < 0x73524742) {
              if ((int)uVar2 < 0x7343414c) {
                if (uVar2 == 0x70485973) {
                  if (uVar8 <= uVar9) {
                    func_0x000109b6bd3c(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (uVar2 == 0x73424954) {
                  if (uVar8 <= uVar9) {
                    FUN_109b6a1f8(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
              else {
                if (uVar2 == 0x7343414c) {
                  if (uVar8 <= uVar9) {
                    FUN_109b6c40c(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (uVar2 == 0x73504c54) {
                  if (uVar8 <= uVar9) {
                    FUN_109b6b228(lVar5,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
            }
            else if ((int)uVar2 < 0x74494d45) {
              if (uVar2 == 0x73524742) {
                if (uVar8 <= uVar9) {
                  func_0x000109b6a764(lVar5,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (uVar2 == 0x74455874) {
                if (uVar8 <= uVar9) {
                  FUN_109b6c73c(lVar5,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (uVar2 == 0x74494d45) {
                if (uVar8 <= uVar9) {
                  FUN_109b6c650(lVar5,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (uVar2 == 0x74524e53) {
                if (uVar8 <= uVar9) {
                  FUN_109b6b4f8(lVar5,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (uVar2 == 0x7a545874) {
                if (uVar8 <= uVar9) {
                  FUN_109b6c898(lVar5,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            if (uVar8 <= uVar9) {
              FUN_109b6cfc8(lVar5,param_2,*(int *)(lVar5 + 0x340),0);
              goto LAB_109b637e0;
            }
            goto LAB_109b637ac;
          }
LAB_109b63794:
          if ((ulong)(*(int *)(lVar5 + 0x340) + 4) <= *(ulong *)(lVar5 + 0x358)) {
            FUN_109b6cfc8(lVar5,param_2,*(int *)(lVar5 + 0x340),lVar6);
            if (uVar2 == 0x504c5445) {
              *(uint *)(lVar5 + 0x124) = *(uint *)(lVar5 + 0x124) | 2;
            }
LAB_109b637e0:
            *(uint *)(lVar5 + 0x124) = *(uint *)(lVar5 + 0x124) & 0xfffffeff;
            return;
          }
LAB_109b637ac:
          FUN_109b6333c(lVar5);
          return;
        }
        if ((uVar10 >> 3 & 1) != 0) {
          uVar10 = uVar10 | 0x2000;
          *(uint *)(lVar5 + 0x124) = uVar10;
        }
        if ((uVar10 & 1) == 0) {
          puVar7 = &UNK_10f59f71e;
        }
        else {
          if (((uVar10 >> 1 & 1) != 0) || (*(char *)(lVar5 + 0x25f) != '\x03')) {
            *(undefined4 *)(lVar5 + 0x368) = 2;
            if (((uVar10 & 0x2004) == 4) && (*(int *)(lVar5 + 0x340) == 0)) {
              return;
            }
            *(uint *)(lVar5 + 0x124) = uVar10 | 4;
            if ((uVar10 >> 3 & 1) != 0) {
              FUN_109b628a0(lVar5,&UNK_10f59f750);
            }
            *(undefined4 *)((long)register0x00000008 + -0x38) = 0x54414449;
            *(undefined1 *)((long)register0x00000008 + -0x34) = 0;
            FUN_109b5f86c(lVar5,(undefined1 *)((long)register0x00000008 + -0x38));
            if ((int)lVar6 == 0) {
              *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x340);
              *(undefined4 *)(lVar5 + 0x368) = 2;
              if (*(code **)(lVar5 + 0x308) != (code *)0x0) {
                (**(code **)(lVar5 + 0x308))(lVar5,param_2);
              }
              bVar3 = *(byte *)(lVar5 + 0x262);
              iVar1 = (int)((ulong)*(uint *)(lVar5 + 0x208) * (ulong)(uint)bVar3 + 7 >> 3);
              if (7 < bVar3) {
                iVar1 = *(uint *)(lVar5 + 0x208) * (uint)(bVar3 >> 3);
              }
              *(int *)(lVar5 + 0x158) = iVar1 + 1;
              *(undefined8 *)(lVar5 + 0x150) = *(undefined8 *)(lVar5 + 0x220);
              return;
            }
            goto LAB_109b63794;
          }
          puVar7 = &UNK_10f59f737;
        }
      }
    }
    unaff_x30 = FUN_109b63b9c;
    param_1 = lVar5;
    FUN_109b6244c(lVar5,puVar7);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar5;
    unaff_x20 = param_2;
  }
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if ((*(byte *)(param_1 + 0x125) & 1) == 0) {
    if (*(ulong *)(param_1 + 0x358) < 8) goto LAB_109b63d3c;
    uVar8 = 4;
    FUN_109b63da8(param_1,(undefined1 *)((long)register0x00000008 + -0x24));
    if ((int)((uint)*(byte *)((long)register0x00000008 + -0x24) << 0x18) < 0) {
      puVar7 = &UNK_10f59fca5;
LAB_109b63da0:
      lVar5 = param_1;
      FUN_109b6244c(param_1,puVar7);
      if (lVar5 != 0) {
        *(ulong *)((long)register0x00000008 + -0x60) = unaff_x22;
        *(undefined **)((long)register0x00000008 + -0x58) = unaff_x21;
        *(undefined **)((long)register0x00000008 + -0x50) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x48) = param_1;
        *(undefined1 **)((long)register0x00000008 + -0x40) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x38) = FUN_109b63da8;
        uVar9 = *(ulong *)(lVar5 + 0x348);
        if (uVar9 != 0) {
          if (uVar8 <= uVar9) {
            uVar9 = uVar8;
          }
          _memcpy(puVar7,*(undefined8 *)(lVar5 + 800),uVar9);
          uVar8 = uVar8 - uVar9;
          puVar7 = puVar7 + uVar9;
          *(ulong *)(lVar5 + 0x358) = *(long *)(lVar5 + 0x358) - uVar9;
          *(ulong *)(lVar5 + 0x348) = *(long *)(lVar5 + 0x348) - uVar9;
          *(ulong *)(lVar5 + 800) = *(long *)(lVar5 + 800) + uVar9;
        }
        if ((uVar8 != 0) && (uVar9 = *(ulong *)(lVar5 + 0x360), uVar9 != 0)) {
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          _memcpy(puVar7,*(undefined8 *)(lVar5 + 0x330),uVar8);
          *(ulong *)(lVar5 + 0x360) = *(long *)(lVar5 + 0x360) - uVar8;
          *(long *)(lVar5 + 0x358) = *(long *)(lVar5 + 0x358) - uVar8;
          *(ulong *)(lVar5 + 0x330) = *(long *)(lVar5 + 0x330) + uVar8;
        }
      }
      return;
    }
    *(uint *)(param_1 + 0x340) =
         (uint)*(byte *)((long)register0x00000008 + -0x21) |
         (uint)*(byte *)((long)register0x00000008 + -0x23) << 0x10 |
         (uint)*(byte *)((long)register0x00000008 + -0x22) << 8 |
         (uint)*(byte *)((long)register0x00000008 + -0x24) << 0x18;
    uVar4 = 0;
    _crc32(0,0,0);
    *(undefined4 *)(param_1 + 0x244) = uVar4;
    uVar8 = 4;
    FUN_109b69a24(param_1,(undefined1 *)((long)register0x00000008 + -0x28));
    uVar10 = (*(uint *)((long)register0x00000008 + -0x28) & 0xff00ff00) >> 8 |
             (*(uint *)((long)register0x00000008 + -0x28) & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    *(uint *)(param_1 + 0x210) = uVar10;
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x100;
    if (uVar10 != 0x49444154) {
      *(undefined4 *)(param_1 + 0x368) = 1;
      if ((*(byte *)(param_1 + 0x128) >> 3 & 1) != 0) {
        return;
      }
      puVar7 = &UNK_10f59f7d1;
      goto LAB_109b63da0;
    }
    uVar10 = *(uint *)(param_1 + 0x340);
    *(uint *)(param_1 + 0x240) = uVar10;
    if (uVar10 != 0) goto LAB_109b63c64;
LAB_109b63c54:
    uVar9 = *(ulong *)(param_1 + 0x358);
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x240);
    if (uVar10 == 0) goto LAB_109b63c54;
LAB_109b63c64:
    uVar8 = *(ulong *)(param_1 + 0x348);
    if (uVar8 == 0) {
LAB_109b63ccc:
      uVar8 = *(ulong *)(param_1 + 0x360);
      if (uVar8 == 0) {
        return;
      }
      if (uVar10 <= uVar8) {
        uVar8 = (ulong)uVar10;
      }
      FUN_109b5ece8(param_1,*(undefined8 *)(param_1 + 0x330),uVar8);
      func_0x000109b63e68(param_1,*(undefined8 *)(param_1 + 0x330),uVar8);
      uVar9 = *(long *)(param_1 + 0x358) - uVar8;
      *(ulong *)(param_1 + 0x358) = uVar9;
      *(ulong *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - uVar8;
      *(ulong *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + uVar8;
      iVar1 = *(int *)(param_1 + 0x240) - (int)uVar8;
      *(int *)(param_1 + 0x240) = iVar1;
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      if (uVar10 <= uVar8) {
        uVar8 = (ulong)uVar10;
      }
      FUN_109b5ece8(param_1,*(undefined8 *)(param_1 + 800),uVar8);
      func_0x000109b63e68(param_1,*(undefined8 *)(param_1 + 800),uVar8);
      uVar9 = *(long *)(param_1 + 0x358) - uVar8;
      *(ulong *)(param_1 + 0x358) = uVar9;
      *(ulong *)(param_1 + 0x348) = *(long *)(param_1 + 0x348) - uVar8;
      *(ulong *)(param_1 + 800) = *(long *)(param_1 + 800) + uVar8;
      uVar10 = *(int *)(param_1 + 0x240) - (int)uVar8;
      *(uint *)(param_1 + 0x240) = uVar10;
      if (uVar10 != 0) goto LAB_109b63ccc;
    }
  }
  if (3 < uVar9) {
    func_0x000109b69a94(param_1,0);
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffffeff | 8;
    *(undefined4 *)(param_1 + 0x130) = 0;
    return;
  }
LAB_109b63d3c:
  FUN_109b6333c(param_1);
  return;
}



/* Entry: 109b6333c; end: 109b63473;  */

void FUN_109b6333c(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  uint uStack_d8;
  byte bStack_d4;
  byte bStack_d3;
  byte bStack_d2;
  byte bStack_d1;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  ulong uStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar8 = *(ulong *)(param_1 + 0x348);
  if (uVar8 != 0) {
    puVar10 = *(undefined1 **)(param_1 + 800);
    puVar11 = *(undefined1 **)(param_1 + 0x328);
    uVar12 = uVar8;
    if (puVar10 != puVar11) {
      do {
        *puVar11 = *puVar10;
        uVar12 = uVar12 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar12 != 0);
    }
  }
  lVar7 = *(long *)(param_1 + 0x360);
  if (lVar7 + uVar8 <= *(ulong *)(param_1 + 0x350)) goto LAB_109b63404;
  if (-lVar7 - 0x101U < uVar8) {
    puVar6 = &UNK_10f59f779;
  }
  else {
    lVar7 = lVar7 + uVar8 + 0x100;
    lVar13 = *(long *)(param_1 + 0x328);
    lVar4 = param_1;
    FUN_109b63258(param_1,lVar7);
    *(long *)(param_1 + 0x328) = lVar4;
    if (lVar4 != 0) {
      if (lVar13 == 0) {
        if (*(long *)(param_1 + 0x348) != 0) {
          puVar6 = &UNK_10f59f7bf;
          goto LAB_109b6346c;
        }
      }
      else {
        _memcpy();
        if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
          _free(lVar13);
        }
        else {
          (**(code **)(param_1 + 0x3f0))(param_1,lVar13);
        }
      }
      *(long *)(param_1 + 0x350) = lVar7;
      lVar7 = *(long *)(param_1 + 0x360);
LAB_109b63404:
      if (lVar7 != 0) {
        _memcpy(*(long *)(param_1 + 0x328) + *(long *)(param_1 + 0x348),
                *(undefined8 *)(param_1 + 0x330));
        *(long *)(param_1 + 0x348) = *(long *)(param_1 + 0x348) + *(long *)(param_1 + 0x360);
        *(undefined8 *)(param_1 + 0x360) = 0;
      }
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x328);
      *(undefined8 *)(param_1 + 0x358) = 0;
      return;
    }
    FUN_109b63094(param_1,lVar13);
    puVar6 = &UNK_10f59f79b;
  }
LAB_109b6346c:
  FUN_109b6244c();
  pcStack_38 = FUN_109b63474;
  bVar2 = *(byte *)(param_1 + 0x265);
  uVar12 = (ulong)bVar2;
  uVar8 = *(ulong *)(param_1 + 0x358);
  if (8 - uVar12 <= *(ulong *)(param_1 + 0x358)) {
    uVar8 = 8 - uVar12;
  }
  puVar6 = puVar6 + 0x2c;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_109b63da8();
  uVar9 = (uint)*(byte *)(param_1 + 0x265) + (int)uVar8;
  *(char *)(param_1 + 0x265) = (char)uVar9;
  puVar5 = puVar6;
  func_0x000109b5ec6c(puVar6,uVar12,uVar8);
  if ((int)puVar5 == 0) {
    if (7 < (uVar9 & 0xff)) {
      *(undefined4 *)(param_1 + 0x368) = 1;
    }
    return;
  }
  if ((bVar2 < 4) &&
     (puVar5 = puVar6, func_0x000109b5ec6c(puVar6,uVar12,uVar8 - 4), (int)puVar5 != 0)) {
    puVar5 = &UNK_10f59f6e8;
  }
  else {
    puVar5 = &UNK_10f59f6f7;
  }
  lVar7 = param_1;
  FUN_109b6244c();
  pcStack_78 = FUN_109b63534;
  uVar9 = *(uint *)(lVar7 + 0x124);
  uStack_a0 = uVar8;
  puStack_98 = puVar6;
  uStack_90 = uVar12;
  lStack_88 = param_1;
  ppuStack_80 = &puStack_40;
  if ((uVar9 >> 8 & 1) == 0) {
    if (*(ulong *)(lVar7 + 0x358) < 8) goto LAB_109b637ac;
    FUN_109b63da8(lVar7,&uStack_a8,4);
    if (-1 < (int)(uStack_a8 << 0x18)) {
      *(uint *)(lVar7 + 0x340) =
           uStack_a8 >> 0x18 | (uStack_a8 >> 8 & 0xff) << 0x10 | (uStack_a8 >> 0x10 & 0xff) << 8 |
           uStack_a8 << 0x18;
      uVar3 = 0;
      _crc32(0,0,0);
      *(undefined4 *)(lVar7 + 0x244) = uVar3;
      FUN_109b69a24(lVar7,&uStack_ac,4);
      uVar9 = (uStack_ac & 0xff00ff00) >> 8 | (uStack_ac & 0xff00ff) << 8;
      *(uint *)(lVar7 + 0x210) = uVar9 >> 0x10 | uVar9 << 0x10;
      FUN_109b6991c(lVar7);
      func_0x000109b6995c(lVar7,*(undefined4 *)(lVar7 + 0x340));
      uVar9 = *(uint *)(lVar7 + 0x124) | 0x100;
      *(uint *)(lVar7 + 0x124) = uVar9;
      goto LAB_109b635ec;
    }
    puVar6 = &UNK_10f59fca5;
  }
  else {
LAB_109b635ec:
    iVar1 = *(int *)(lVar7 + 0x210);
    if (iVar1 == 0x49484452) {
      if (*(int *)(lVar7 + 0x340) == 0xd) {
        if (0x10 < *(ulong *)(lVar7 + 0x358)) {
          FUN_109b69c38(lVar7,puVar5,0xd);
          goto LAB_109b637e0;
        }
        goto LAB_109b637ac;
      }
      puVar6 = &UNK_10f59f765;
    }
    else {
      if (iVar1 == 0x49454e44) {
        if ((ulong)(*(int *)(lVar7 + 0x340) + 4) <= *(ulong *)(lVar7 + 0x358)) {
          FUN_109b6a064(lVar7,puVar5);
          *(undefined4 *)(lVar7 + 0x368) = 6;
          if (*(code **)(lVar7 + 0x318) != (code *)0x0) {
            (**(code **)(lVar7 + 0x318))(lVar7,puVar5);
          }
          goto LAB_109b637e0;
        }
        goto LAB_109b637ac;
      }
      lVar4 = lVar7;
      if (iVar1 != 0x49444154) {
        uStack_a8 = CONCAT13((char)iVar1,
                             CONCAT12((char)((uint)iVar1 >> 8),
                                      CONCAT11((char)((uint)iVar1 >> 0x10),
                                               (char)((uint)iVar1 >> 0x18))));
        uStack_a4 = 0;
        FUN_109b5f86c(lVar7,&uStack_a8);
        if ((int)lVar4 == 0) {
          uVar8 = (ulong)(*(int *)(lVar7 + 0x340) + 4);
          uVar12 = *(ulong *)(lVar7 + 0x358);
          if (iVar1 < 0x70485973) {
            if (iVar1 < 0x68495354) {
              if (iVar1 < 0x6348524d) {
                if (iVar1 == 0x504c5445) {
                  if (uVar8 <= uVar12) {
                    FUN_109b69dc4(lVar7,puVar5);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (iVar1 == 0x624b4744) {
                  if (uVar8 <= uVar12) {
                    FUN_109b6b774(lVar7,puVar5);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
              else {
                if (iVar1 == 0x6348524d) {
                  if (uVar8 <= uVar12) {
                    FUN_109b6a3d8(lVar7,puVar5);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (iVar1 == 0x67414d41) {
                  if (uVar8 <= uVar12) {
                    FUN_109b6a0d4(lVar7,puVar5);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
            }
            else if (iVar1 < 0x69545874) {
              if (iVar1 == 0x68495354) {
                if (uVar8 <= uVar12) {
                  FUN_109b6bb94(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x69434350) {
                if (uVar8 <= uVar12) {
                  FUN_109b6a8c0(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (iVar1 == 0x69545874) {
                if (uVar12 < uVar8) goto LAB_109b637ac;
                FUN_109b6cd14(lVar7,puVar5);
                goto LAB_109b637e0;
              }
              if (iVar1 == 0x6f464673) {
                if (uVar8 <= uVar12) {
                  func_0x000109b6bea8(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x7043414c) {
                if (uVar8 <= uVar12) {
                  FUN_109b6c0b8(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
          }
          else if (iVar1 < 0x73524742) {
            if (iVar1 < 0x7343414c) {
              if (iVar1 == 0x70485973) {
                if (uVar8 <= uVar12) {
                  func_0x000109b6bd3c(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x73424954) {
                if (uVar8 <= uVar12) {
                  FUN_109b6a1f8(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (iVar1 == 0x7343414c) {
                if (uVar8 <= uVar12) {
                  FUN_109b6c40c(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x73504c54) {
                if (uVar8 <= uVar12) {
                  FUN_109b6b228(lVar7,puVar5);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
          }
          else if (iVar1 < 0x74494d45) {
            if (iVar1 == 0x73524742) {
              if (uVar8 <= uVar12) {
                func_0x000109b6a764(lVar7,puVar5);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x74455874) {
              if (uVar8 <= uVar12) {
                FUN_109b6c73c(lVar7,puVar5);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
          }
          else {
            if (iVar1 == 0x74494d45) {
              if (uVar8 <= uVar12) {
                FUN_109b6c650(lVar7,puVar5);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x74524e53) {
              if (uVar8 <= uVar12) {
                FUN_109b6b4f8(lVar7,puVar5);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x7a545874) {
              if (uVar8 <= uVar12) {
                FUN_109b6c898(lVar7,puVar5);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
          }
          if (uVar8 <= uVar12) {
            FUN_109b6cfc8(lVar7,puVar5,*(int *)(lVar7 + 0x340),0);
            goto LAB_109b637e0;
          }
          goto LAB_109b637ac;
        }
LAB_109b63794:
        if ((ulong)(*(int *)(lVar7 + 0x340) + 4) <= *(ulong *)(lVar7 + 0x358)) {
          FUN_109b6cfc8(lVar7,puVar5,*(int *)(lVar7 + 0x340),lVar4);
          if (iVar1 == 0x504c5445) {
            *(uint *)(lVar7 + 0x124) = *(uint *)(lVar7 + 0x124) | 2;
          }
LAB_109b637e0:
          *(uint *)(lVar7 + 0x124) = *(uint *)(lVar7 + 0x124) & 0xfffffeff;
          return;
        }
LAB_109b637ac:
        FUN_109b6333c(lVar7);
        return;
      }
      if ((uVar9 >> 3 & 1) != 0) {
        uVar9 = uVar9 | 0x2000;
        *(uint *)(lVar7 + 0x124) = uVar9;
      }
      if ((uVar9 & 1) == 0) {
        puVar6 = &UNK_10f59f71e;
      }
      else {
        if (((uVar9 >> 1 & 1) != 0) || (*(char *)(lVar7 + 0x25f) != '\x03')) {
          *(undefined4 *)(lVar7 + 0x368) = 2;
          if (((uVar9 & 0x2004) == 4) && (*(int *)(lVar7 + 0x340) == 0)) {
            return;
          }
          *(uint *)(lVar7 + 0x124) = uVar9 | 4;
          if ((uVar9 >> 3 & 1) != 0) {
            FUN_109b628a0(lVar7,&UNK_10f59f750);
          }
          uStack_a8 = 0x54414449;
          uStack_a4 = 0;
          FUN_109b5f86c(lVar7,&uStack_a8);
          if ((int)lVar4 == 0) {
            *(undefined4 *)(lVar7 + 0x240) = *(undefined4 *)(lVar7 + 0x340);
            *(undefined4 *)(lVar7 + 0x368) = 2;
            if (*(code **)(lVar7 + 0x308) != (code *)0x0) {
              (**(code **)(lVar7 + 0x308))(lVar7,puVar5);
            }
            bVar2 = *(byte *)(lVar7 + 0x262);
            iVar1 = (int)((ulong)*(uint *)(lVar7 + 0x208) * (ulong)(uint)bVar2 + 7 >> 3);
            if (7 < bVar2) {
              iVar1 = *(uint *)(lVar7 + 0x208) * (uint)(bVar2 >> 3);
            }
            *(int *)(lVar7 + 0x158) = iVar1 + 1;
            *(undefined8 *)(lVar7 + 0x150) = *(undefined8 *)(lVar7 + 0x220);
            return;
          }
          goto LAB_109b63794;
        }
        puVar6 = &UNK_10f59f737;
      }
    }
  }
  lVar4 = lVar7;
  FUN_109b6244c(lVar7,puVar6);
  pcStack_b8 = FUN_109b63b9c;
  puStack_d0 = puVar5;
  lStack_c8 = lVar7;
  pppuStack_c0 = &ppuStack_80;
  if ((*(byte *)(lVar4 + 0x125) & 1) == 0) {
    if (*(ulong *)(lVar4 + 0x358) < 8) goto LAB_109b63d3c;
    uVar8 = 4;
    FUN_109b63da8(lVar4,&bStack_d4);
    if ((int)((uint)bStack_d4 << 0x18) < 0) {
      puVar6 = &UNK_10f59fca5;
LAB_109b63da0:
      FUN_109b6244c(lVar4,puVar6);
      if (lVar4 != 0) {
        uVar12 = *(ulong *)(lVar4 + 0x348);
        if (uVar12 != 0) {
          if (uVar8 <= uVar12) {
            uVar12 = uVar8;
          }
          _memcpy(puVar6,*(undefined8 *)(lVar4 + 800),uVar12);
          uVar8 = uVar8 - uVar12;
          puVar6 = puVar6 + uVar12;
          *(ulong *)(lVar4 + 0x358) = *(long *)(lVar4 + 0x358) - uVar12;
          *(ulong *)(lVar4 + 0x348) = *(long *)(lVar4 + 0x348) - uVar12;
          *(ulong *)(lVar4 + 800) = *(long *)(lVar4 + 800) + uVar12;
        }
        if ((uVar8 != 0) && (uVar12 = *(ulong *)(lVar4 + 0x360), uVar12 != 0)) {
          if (uVar12 <= uVar8) {
            uVar8 = uVar12;
          }
          _memcpy(puVar6,*(undefined8 *)(lVar4 + 0x330),uVar8);
          *(ulong *)(lVar4 + 0x360) = *(long *)(lVar4 + 0x360) - uVar8;
          *(long *)(lVar4 + 0x358) = *(long *)(lVar4 + 0x358) - uVar8;
          *(ulong *)(lVar4 + 0x330) = *(long *)(lVar4 + 0x330) + uVar8;
        }
      }
      return;
    }
    *(uint *)(lVar4 + 0x340) =
         (uint)bStack_d1 | (uint)bStack_d3 << 0x10 | (uint)bStack_d2 << 8 | (uint)bStack_d4 << 0x18;
    uVar3 = 0;
    _crc32(0,0,0);
    *(undefined4 *)(lVar4 + 0x244) = uVar3;
    uVar8 = 4;
    FUN_109b69a24(lVar4,&uStack_d8);
    uVar9 = (uStack_d8 & 0xff00ff00) >> 8 | (uStack_d8 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    *(uint *)(lVar4 + 0x210) = uVar9;
    *(uint *)(lVar4 + 0x124) = *(uint *)(lVar4 + 0x124) | 0x100;
    if (uVar9 != 0x49444154) {
      *(undefined4 *)(lVar4 + 0x368) = 1;
      if ((*(byte *)(lVar4 + 0x128) >> 3 & 1) != 0) {
        return;
      }
      puVar6 = &UNK_10f59f7d1;
      goto LAB_109b63da0;
    }
    uVar9 = *(uint *)(lVar4 + 0x340);
    *(uint *)(lVar4 + 0x240) = uVar9;
    if (uVar9 != 0) goto LAB_109b63c64;
LAB_109b63c54:
    uVar12 = *(ulong *)(lVar4 + 0x358);
  }
  else {
    uVar9 = *(uint *)(lVar4 + 0x240);
    if (uVar9 == 0) goto LAB_109b63c54;
LAB_109b63c64:
    uVar8 = *(ulong *)(lVar4 + 0x348);
    if (uVar8 == 0) {
LAB_109b63ccc:
      uVar8 = *(ulong *)(lVar4 + 0x360);
      if (uVar8 == 0) {
        return;
      }
      if (uVar9 <= uVar8) {
        uVar8 = (ulong)uVar9;
      }
      FUN_109b5ece8(lVar4,*(undefined8 *)(lVar4 + 0x330),uVar8);
      func_0x000109b63e68(lVar4,*(undefined8 *)(lVar4 + 0x330),uVar8);
      uVar12 = *(long *)(lVar4 + 0x358) - uVar8;
      *(ulong *)(lVar4 + 0x358) = uVar12;
      *(ulong *)(lVar4 + 0x360) = *(long *)(lVar4 + 0x360) - uVar8;
      *(ulong *)(lVar4 + 0x330) = *(long *)(lVar4 + 0x330) + uVar8;
      iVar1 = *(int *)(lVar4 + 0x240) - (int)uVar8;
      *(int *)(lVar4 + 0x240) = iVar1;
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      if (uVar9 <= uVar8) {
        uVar8 = (ulong)uVar9;
      }
      FUN_109b5ece8(lVar4,*(undefined8 *)(lVar4 + 800),uVar8);
      func_0x000109b63e68(lVar4,*(undefined8 *)(lVar4 + 800),uVar8);
      uVar12 = *(long *)(lVar4 + 0x358) - uVar8;
      *(ulong *)(lVar4 + 0x358) = uVar12;
      *(ulong *)(lVar4 + 0x348) = *(long *)(lVar4 + 0x348) - uVar8;
      *(ulong *)(lVar4 + 800) = *(long *)(lVar4 + 800) + uVar8;
      uVar9 = *(int *)(lVar4 + 0x240) - (int)uVar8;
      *(uint *)(lVar4 + 0x240) = uVar9;
      if (uVar9 != 0) goto LAB_109b63ccc;
    }
  }
  if (3 < uVar12) {
    func_0x000109b69a94(lVar4,0);
    *(uint *)(lVar4 + 0x124) = *(uint *)(lVar4 + 0x124) & 0xfffffeff | 8;
    *(undefined4 *)(lVar4 + 0x130) = 0;
    return;
  }
LAB_109b63d3c:
  FUN_109b6333c(lVar4);
  return;
}



/* Entry: 109b63474; end: 109b63533;  */

void FUN_109b63474(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uStack_a8;
  byte bStack_a4;
  byte bStack_a3;
  byte bStack_a2;
  byte bStack_a1;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  bVar2 = *(byte *)(param_1 + 0x265);
  uVar10 = (ulong)bVar2;
  uVar8 = *(ulong *)(param_1 + 0x358);
  if (8 - uVar10 <= *(ulong *)(param_1 + 0x358)) {
    uVar8 = 8 - uVar10;
  }
  param_2 = param_2 + 0x2c;
  FUN_109b63da8(param_1,param_2 + uVar10,uVar8);
  uVar9 = (uint)*(byte *)(param_1 + 0x265) + (int)uVar8;
  *(char *)(param_1 + 0x265) = (char)uVar9;
  lVar4 = param_2;
  func_0x000109b5ec6c(param_2,uVar10,uVar8);
  if ((int)lVar4 == 0) {
    if (7 < (uVar9 & 0xff)) {
      *(undefined4 *)(param_1 + 0x368) = 1;
    }
    return;
  }
  if ((bVar2 < 4) &&
     (lVar4 = param_2, func_0x000109b5ec6c(param_2,uVar10,uVar8 - 4), (int)lVar4 != 0)) {
    puVar6 = &UNK_10f59f6e8;
  }
  else {
    puVar6 = &UNK_10f59f6f7;
  }
  lVar4 = param_1;
  FUN_109b6244c();
  pcStack_48 = FUN_109b63534;
  uVar9 = *(uint *)(lVar4 + 0x124);
  uStack_70 = uVar8;
  lStack_68 = param_2;
  uStack_60 = uVar10;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((uVar9 >> 8 & 1) == 0) {
    if (*(ulong *)(lVar4 + 0x358) < 8) goto LAB_109b637ac;
    FUN_109b63da8(lVar4,&uStack_78,4);
    if (-1 < (int)(uStack_78 << 0x18)) {
      *(uint *)(lVar4 + 0x340) =
           uStack_78 >> 0x18 | (uStack_78 >> 8 & 0xff) << 0x10 | (uStack_78 >> 0x10 & 0xff) << 8 |
           uStack_78 << 0x18;
      uVar3 = 0;
      _crc32(0,0,0);
      *(undefined4 *)(lVar4 + 0x244) = uVar3;
      FUN_109b69a24(lVar4,&uStack_7c,4);
      uVar9 = (uStack_7c & 0xff00ff00) >> 8 | (uStack_7c & 0xff00ff) << 8;
      *(uint *)(lVar4 + 0x210) = uVar9 >> 0x10 | uVar9 << 0x10;
      FUN_109b6991c(lVar4);
      func_0x000109b6995c(lVar4,*(undefined4 *)(lVar4 + 0x340));
      uVar9 = *(uint *)(lVar4 + 0x124) | 0x100;
      *(uint *)(lVar4 + 0x124) = uVar9;
      goto LAB_109b635ec;
    }
    puVar7 = &UNK_10f59fca5;
  }
  else {
LAB_109b635ec:
    iVar1 = *(int *)(lVar4 + 0x210);
    if (iVar1 == 0x49484452) {
      if (*(int *)(lVar4 + 0x340) == 0xd) {
        if (0x10 < *(ulong *)(lVar4 + 0x358)) {
          FUN_109b69c38(lVar4,puVar6,0xd);
          goto LAB_109b637e0;
        }
        goto LAB_109b637ac;
      }
      puVar7 = &UNK_10f59f765;
    }
    else {
      if (iVar1 == 0x49454e44) {
        if ((ulong)(*(int *)(lVar4 + 0x340) + 4) <= *(ulong *)(lVar4 + 0x358)) {
          FUN_109b6a064(lVar4,puVar6);
          *(undefined4 *)(lVar4 + 0x368) = 6;
          if (*(code **)(lVar4 + 0x318) != (code *)0x0) {
            (**(code **)(lVar4 + 0x318))(lVar4,puVar6);
          }
          goto LAB_109b637e0;
        }
        goto LAB_109b637ac;
      }
      lVar5 = lVar4;
      if (iVar1 != 0x49444154) {
        uStack_78 = CONCAT13((char)iVar1,
                             CONCAT12((char)((uint)iVar1 >> 8),
                                      CONCAT11((char)((uint)iVar1 >> 0x10),
                                               (char)((uint)iVar1 >> 0x18))));
        uStack_74 = 0;
        FUN_109b5f86c(lVar4,&uStack_78);
        if ((int)lVar5 == 0) {
          uVar8 = (ulong)(*(int *)(lVar4 + 0x340) + 4);
          uVar10 = *(ulong *)(lVar4 + 0x358);
          if (iVar1 < 0x70485973) {
            if (iVar1 < 0x68495354) {
              if (iVar1 < 0x6348524d) {
                if (iVar1 == 0x504c5445) {
                  if (uVar8 <= uVar10) {
                    FUN_109b69dc4(lVar4,puVar6);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (iVar1 == 0x624b4744) {
                  if (uVar8 <= uVar10) {
                    FUN_109b6b774(lVar4,puVar6);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
              else {
                if (iVar1 == 0x6348524d) {
                  if (uVar8 <= uVar10) {
                    FUN_109b6a3d8(lVar4,puVar6);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (iVar1 == 0x67414d41) {
                  if (uVar8 <= uVar10) {
                    FUN_109b6a0d4(lVar4,puVar6);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
            }
            else if (iVar1 < 0x69545874) {
              if (iVar1 == 0x68495354) {
                if (uVar8 <= uVar10) {
                  FUN_109b6bb94(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x69434350) {
                if (uVar8 <= uVar10) {
                  FUN_109b6a8c0(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (iVar1 == 0x69545874) {
                if (uVar10 < uVar8) goto LAB_109b637ac;
                FUN_109b6cd14(lVar4,puVar6);
                goto LAB_109b637e0;
              }
              if (iVar1 == 0x6f464673) {
                if (uVar8 <= uVar10) {
                  func_0x000109b6bea8(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x7043414c) {
                if (uVar8 <= uVar10) {
                  FUN_109b6c0b8(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
          }
          else if (iVar1 < 0x73524742) {
            if (iVar1 < 0x7343414c) {
              if (iVar1 == 0x70485973) {
                if (uVar8 <= uVar10) {
                  func_0x000109b6bd3c(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x73424954) {
                if (uVar8 <= uVar10) {
                  FUN_109b6a1f8(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (iVar1 == 0x7343414c) {
                if (uVar8 <= uVar10) {
                  FUN_109b6c40c(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x73504c54) {
                if (uVar8 <= uVar10) {
                  FUN_109b6b228(lVar4,puVar6);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
          }
          else if (iVar1 < 0x74494d45) {
            if (iVar1 == 0x73524742) {
              if (uVar8 <= uVar10) {
                func_0x000109b6a764(lVar4,puVar6);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x74455874) {
              if (uVar8 <= uVar10) {
                FUN_109b6c73c(lVar4,puVar6);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
          }
          else {
            if (iVar1 == 0x74494d45) {
              if (uVar8 <= uVar10) {
                FUN_109b6c650(lVar4,puVar6);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x74524e53) {
              if (uVar8 <= uVar10) {
                FUN_109b6b4f8(lVar4,puVar6);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x7a545874) {
              if (uVar8 <= uVar10) {
                FUN_109b6c898(lVar4,puVar6);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
          }
          if (uVar8 <= uVar10) {
            FUN_109b6cfc8(lVar4,puVar6,*(int *)(lVar4 + 0x340),0);
            goto LAB_109b637e0;
          }
          goto LAB_109b637ac;
        }
LAB_109b63794:
        if ((ulong)(*(int *)(lVar4 + 0x340) + 4) <= *(ulong *)(lVar4 + 0x358)) {
          FUN_109b6cfc8(lVar4,puVar6,*(int *)(lVar4 + 0x340),lVar5);
          if (iVar1 == 0x504c5445) {
            *(uint *)(lVar4 + 0x124) = *(uint *)(lVar4 + 0x124) | 2;
          }
LAB_109b637e0:
          *(uint *)(lVar4 + 0x124) = *(uint *)(lVar4 + 0x124) & 0xfffffeff;
          return;
        }
LAB_109b637ac:
        FUN_109b6333c(lVar4);
        return;
      }
      if ((uVar9 >> 3 & 1) != 0) {
        uVar9 = uVar9 | 0x2000;
        *(uint *)(lVar4 + 0x124) = uVar9;
      }
      if ((uVar9 & 1) == 0) {
        puVar7 = &UNK_10f59f71e;
      }
      else {
        if (((uVar9 >> 1 & 1) != 0) || (*(char *)(lVar4 + 0x25f) != '\x03')) {
          *(undefined4 *)(lVar4 + 0x368) = 2;
          if (((uVar9 & 0x2004) == 4) && (*(int *)(lVar4 + 0x340) == 0)) {
            return;
          }
          *(uint *)(lVar4 + 0x124) = uVar9 | 4;
          if ((uVar9 >> 3 & 1) != 0) {
            FUN_109b628a0(lVar4,&UNK_10f59f750);
          }
          uStack_78 = 0x54414449;
          uStack_74 = 0;
          FUN_109b5f86c(lVar4,&uStack_78);
          if ((int)lVar5 == 0) {
            *(undefined4 *)(lVar4 + 0x240) = *(undefined4 *)(lVar4 + 0x340);
            *(undefined4 *)(lVar4 + 0x368) = 2;
            if (*(code **)(lVar4 + 0x308) != (code *)0x0) {
              (**(code **)(lVar4 + 0x308))(lVar4,puVar6);
            }
            bVar2 = *(byte *)(lVar4 + 0x262);
            iVar1 = (int)((ulong)*(uint *)(lVar4 + 0x208) * (ulong)(uint)bVar2 + 7 >> 3);
            if (7 < bVar2) {
              iVar1 = *(uint *)(lVar4 + 0x208) * (uint)(bVar2 >> 3);
            }
            *(int *)(lVar4 + 0x158) = iVar1 + 1;
            *(undefined8 *)(lVar4 + 0x150) = *(undefined8 *)(lVar4 + 0x220);
            return;
          }
          goto LAB_109b63794;
        }
        puVar7 = &UNK_10f59f737;
      }
    }
  }
  lVar5 = lVar4;
  FUN_109b6244c(lVar4,puVar7);
  pcStack_88 = FUN_109b63b9c;
  puStack_a0 = puVar6;
  lStack_98 = lVar4;
  ppuStack_90 = &puStack_50;
  if ((*(byte *)(lVar5 + 0x125) & 1) == 0) {
    if (*(ulong *)(lVar5 + 0x358) < 8) goto LAB_109b63d3c;
    uVar8 = 4;
    FUN_109b63da8(lVar5,&bStack_a4);
    if ((int)((uint)bStack_a4 << 0x18) < 0) {
      puVar6 = &UNK_10f59fca5;
LAB_109b63da0:
      FUN_109b6244c(lVar5,puVar6);
      if (lVar5 != 0) {
        uVar10 = *(ulong *)(lVar5 + 0x348);
        if (uVar10 != 0) {
          if (uVar8 <= uVar10) {
            uVar10 = uVar8;
          }
          _memcpy(puVar6,*(undefined8 *)(lVar5 + 800),uVar10);
          uVar8 = uVar8 - uVar10;
          puVar6 = puVar6 + uVar10;
          *(ulong *)(lVar5 + 0x358) = *(long *)(lVar5 + 0x358) - uVar10;
          *(ulong *)(lVar5 + 0x348) = *(long *)(lVar5 + 0x348) - uVar10;
          *(ulong *)(lVar5 + 800) = *(long *)(lVar5 + 800) + uVar10;
        }
        if ((uVar8 != 0) && (uVar10 = *(ulong *)(lVar5 + 0x360), uVar10 != 0)) {
          if (uVar10 <= uVar8) {
            uVar8 = uVar10;
          }
          _memcpy(puVar6,*(undefined8 *)(lVar5 + 0x330),uVar8);
          *(ulong *)(lVar5 + 0x360) = *(long *)(lVar5 + 0x360) - uVar8;
          *(long *)(lVar5 + 0x358) = *(long *)(lVar5 + 0x358) - uVar8;
          *(ulong *)(lVar5 + 0x330) = *(long *)(lVar5 + 0x330) + uVar8;
        }
      }
      return;
    }
    *(uint *)(lVar5 + 0x340) =
         (uint)bStack_a1 | (uint)bStack_a3 << 0x10 | (uint)bStack_a2 << 8 | (uint)bStack_a4 << 0x18;
    uVar3 = 0;
    _crc32(0,0,0);
    *(undefined4 *)(lVar5 + 0x244) = uVar3;
    uVar8 = 4;
    FUN_109b69a24(lVar5,&uStack_a8);
    uVar9 = (uStack_a8 & 0xff00ff00) >> 8 | (uStack_a8 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    *(uint *)(lVar5 + 0x210) = uVar9;
    *(uint *)(lVar5 + 0x124) = *(uint *)(lVar5 + 0x124) | 0x100;
    if (uVar9 != 0x49444154) {
      *(undefined4 *)(lVar5 + 0x368) = 1;
      if ((*(byte *)(lVar5 + 0x128) >> 3 & 1) != 0) {
        return;
      }
      puVar6 = &UNK_10f59f7d1;
      goto LAB_109b63da0;
    }
    uVar9 = *(uint *)(lVar5 + 0x340);
    *(uint *)(lVar5 + 0x240) = uVar9;
    if (uVar9 != 0) goto LAB_109b63c64;
LAB_109b63c54:
    uVar10 = *(ulong *)(lVar5 + 0x358);
  }
  else {
    uVar9 = *(uint *)(lVar5 + 0x240);
    if (uVar9 == 0) goto LAB_109b63c54;
LAB_109b63c64:
    uVar8 = *(ulong *)(lVar5 + 0x348);
    if (uVar8 == 0) {
LAB_109b63ccc:
      uVar8 = *(ulong *)(lVar5 + 0x360);
      if (uVar8 == 0) {
        return;
      }
      if (uVar9 <= uVar8) {
        uVar8 = (ulong)uVar9;
      }
      FUN_109b5ece8(lVar5,*(undefined8 *)(lVar5 + 0x330),uVar8);
      func_0x000109b63e68(lVar5,*(undefined8 *)(lVar5 + 0x330),uVar8);
      uVar10 = *(long *)(lVar5 + 0x358) - uVar8;
      *(ulong *)(lVar5 + 0x358) = uVar10;
      *(ulong *)(lVar5 + 0x360) = *(long *)(lVar5 + 0x360) - uVar8;
      *(ulong *)(lVar5 + 0x330) = *(long *)(lVar5 + 0x330) + uVar8;
      iVar1 = *(int *)(lVar5 + 0x240) - (int)uVar8;
      *(int *)(lVar5 + 0x240) = iVar1;
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      if (uVar9 <= uVar8) {
        uVar8 = (ulong)uVar9;
      }
      FUN_109b5ece8(lVar5,*(undefined8 *)(lVar5 + 800),uVar8);
      func_0x000109b63e68(lVar5,*(undefined8 *)(lVar5 + 800),uVar8);
      uVar10 = *(long *)(lVar5 + 0x358) - uVar8;
      *(ulong *)(lVar5 + 0x358) = uVar10;
      *(ulong *)(lVar5 + 0x348) = *(long *)(lVar5 + 0x348) - uVar8;
      *(ulong *)(lVar5 + 800) = *(long *)(lVar5 + 800) + uVar8;
      uVar9 = *(int *)(lVar5 + 0x240) - (int)uVar8;
      *(uint *)(lVar5 + 0x240) = uVar9;
      if (uVar9 != 0) goto LAB_109b63ccc;
    }
  }
  if (3 < uVar10) {
    func_0x000109b69a94(lVar5,0);
    *(uint *)(lVar5 + 0x124) = *(uint *)(lVar5 + 0x124) & 0xfffffeff | 8;
    *(undefined4 *)(lVar5 + 0x130) = 0;
    return;
  }
LAB_109b63d3c:
  FUN_109b6333c(lVar5);
  return;
}



/* Entry: 109b63534; end: 109b63b9b;  */

void FUN_109b63534(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_68;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  uVar8 = *(uint *)(param_1 + 0x124);
  if ((uVar8 >> 8 & 1) == 0) {
    if (*(ulong *)(param_1 + 0x358) < 8) goto LAB_109b637ac;
    FUN_109b63da8(param_1,&uStack_38,4);
    if (-1 < (int)(uStack_38 << 0x18)) {
      *(uint *)(param_1 + 0x340) =
           uStack_38 >> 0x18 | (uStack_38 >> 8 & 0xff) << 0x10 | (uStack_38 >> 0x10 & 0xff) << 8 |
           uStack_38 << 0x18;
      uVar3 = 0;
      _crc32(0,0,0);
      *(undefined4 *)(param_1 + 0x244) = uVar3;
      FUN_109b69a24(param_1,&uStack_3c,4);
      uVar8 = (uStack_3c & 0xff00ff00) >> 8 | (uStack_3c & 0xff00ff) << 8;
      *(uint *)(param_1 + 0x210) = uVar8 >> 0x10 | uVar8 << 0x10;
      FUN_109b6991c(param_1);
      func_0x000109b6995c(param_1,*(undefined4 *)(param_1 + 0x340));
      uVar8 = *(uint *)(param_1 + 0x124) | 0x100;
      *(uint *)(param_1 + 0x124) = uVar8;
      goto LAB_109b635ec;
    }
    puVar5 = &UNK_10f59fca5;
  }
  else {
LAB_109b635ec:
    iVar1 = *(int *)(param_1 + 0x210);
    if (iVar1 == 0x49484452) {
      if (*(int *)(param_1 + 0x340) == 0xd) {
        if (0x10 < *(ulong *)(param_1 + 0x358)) {
          FUN_109b69c38(param_1,param_2,0xd);
          goto LAB_109b637e0;
        }
        goto LAB_109b637ac;
      }
      puVar5 = &UNK_10f59f765;
    }
    else {
      if (iVar1 == 0x49454e44) {
        if ((ulong)(*(int *)(param_1 + 0x340) + 4) <= *(ulong *)(param_1 + 0x358)) {
          FUN_109b6a064(param_1,param_2);
          *(undefined4 *)(param_1 + 0x368) = 6;
          if (*(code **)(param_1 + 0x318) != (code *)0x0) {
            (**(code **)(param_1 + 0x318))(param_1,param_2);
          }
          goto LAB_109b637e0;
        }
        goto LAB_109b637ac;
      }
      lVar4 = param_1;
      if (iVar1 != 0x49444154) {
        uStack_38 = CONCAT13((char)iVar1,
                             CONCAT12((char)((uint)iVar1 >> 8),
                                      CONCAT11((char)((uint)iVar1 >> 0x10),
                                               (char)((uint)iVar1 >> 0x18))));
        uStack_34 = 0;
        FUN_109b5f86c(param_1,&uStack_38);
        if ((int)lVar4 == 0) {
          uVar6 = (ulong)(*(int *)(param_1 + 0x340) + 4);
          uVar7 = *(ulong *)(param_1 + 0x358);
          if (iVar1 < 0x70485973) {
            if (iVar1 < 0x68495354) {
              if (iVar1 < 0x6348524d) {
                if (iVar1 == 0x504c5445) {
                  if (uVar6 <= uVar7) {
                    FUN_109b69dc4(param_1,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (iVar1 == 0x624b4744) {
                  if (uVar6 <= uVar7) {
                    FUN_109b6b774(param_1,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
              else {
                if (iVar1 == 0x6348524d) {
                  if (uVar6 <= uVar7) {
                    FUN_109b6a3d8(param_1,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
                if (iVar1 == 0x67414d41) {
                  if (uVar6 <= uVar7) {
                    FUN_109b6a0d4(param_1,param_2);
                    goto LAB_109b637e0;
                  }
                  goto LAB_109b637ac;
                }
              }
            }
            else if (iVar1 < 0x69545874) {
              if (iVar1 == 0x68495354) {
                if (uVar6 <= uVar7) {
                  FUN_109b6bb94(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x69434350) {
                if (uVar6 <= uVar7) {
                  FUN_109b6a8c0(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (iVar1 == 0x69545874) {
                if (uVar7 < uVar6) goto LAB_109b637ac;
                FUN_109b6cd14(param_1,param_2);
                goto LAB_109b637e0;
              }
              if (iVar1 == 0x6f464673) {
                if (uVar6 <= uVar7) {
                  func_0x000109b6bea8(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x7043414c) {
                if (uVar6 <= uVar7) {
                  FUN_109b6c0b8(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
          }
          else if (iVar1 < 0x73524742) {
            if (iVar1 < 0x7343414c) {
              if (iVar1 == 0x70485973) {
                if (uVar6 <= uVar7) {
                  func_0x000109b6bd3c(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x73424954) {
                if (uVar6 <= uVar7) {
                  FUN_109b6a1f8(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
            else {
              if (iVar1 == 0x7343414c) {
                if (uVar6 <= uVar7) {
                  FUN_109b6c40c(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
              if (iVar1 == 0x73504c54) {
                if (uVar6 <= uVar7) {
                  FUN_109b6b228(param_1,param_2);
                  goto LAB_109b637e0;
                }
                goto LAB_109b637ac;
              }
            }
          }
          else if (iVar1 < 0x74494d45) {
            if (iVar1 == 0x73524742) {
              if (uVar6 <= uVar7) {
                func_0x000109b6a764(param_1,param_2);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x74455874) {
              if (uVar6 <= uVar7) {
                FUN_109b6c73c(param_1,param_2);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
          }
          else {
            if (iVar1 == 0x74494d45) {
              if (uVar6 <= uVar7) {
                FUN_109b6c650(param_1,param_2);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x74524e53) {
              if (uVar6 <= uVar7) {
                FUN_109b6b4f8(param_1,param_2);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
            if (iVar1 == 0x7a545874) {
              if (uVar6 <= uVar7) {
                FUN_109b6c898(param_1,param_2);
                goto LAB_109b637e0;
              }
              goto LAB_109b637ac;
            }
          }
          if (uVar6 <= uVar7) {
            FUN_109b6cfc8(param_1,param_2,*(int *)(param_1 + 0x340),0);
            goto LAB_109b637e0;
          }
          goto LAB_109b637ac;
        }
LAB_109b63794:
        if ((ulong)(*(int *)(param_1 + 0x340) + 4) <= *(ulong *)(param_1 + 0x358)) {
          FUN_109b6cfc8(param_1,param_2,*(int *)(param_1 + 0x340),lVar4);
          if (iVar1 == 0x504c5445) {
            *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 2;
          }
LAB_109b637e0:
          *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffffeff;
          return;
        }
LAB_109b637ac:
        FUN_109b6333c(param_1);
        return;
      }
      if ((uVar8 >> 3 & 1) != 0) {
        uVar8 = uVar8 | 0x2000;
        *(uint *)(param_1 + 0x124) = uVar8;
      }
      if ((uVar8 & 1) == 0) {
        puVar5 = &UNK_10f59f71e;
      }
      else {
        if (((uVar8 >> 1 & 1) != 0) || (*(char *)(param_1 + 0x25f) != '\x03')) {
          *(undefined4 *)(param_1 + 0x368) = 2;
          if (((uVar8 & 0x2004) == 4) && (*(int *)(param_1 + 0x340) == 0)) {
            return;
          }
          *(uint *)(param_1 + 0x124) = uVar8 | 4;
          if ((uVar8 >> 3 & 1) != 0) {
            FUN_109b628a0(param_1,&UNK_10f59f750);
          }
          uStack_38 = 0x54414449;
          uStack_34 = 0;
          FUN_109b5f86c(param_1,&uStack_38);
          if ((int)lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x340);
            *(undefined4 *)(param_1 + 0x368) = 2;
            if (*(code **)(param_1 + 0x308) != (code *)0x0) {
              (**(code **)(param_1 + 0x308))(param_1,param_2);
            }
            bVar2 = *(byte *)(param_1 + 0x262);
            iVar1 = (int)((ulong)*(uint *)(param_1 + 0x208) * (ulong)(uint)bVar2 + 7 >> 3);
            if (7 < bVar2) {
              iVar1 = *(uint *)(param_1 + 0x208) * (uint)(bVar2 >> 3);
            }
            *(int *)(param_1 + 0x158) = iVar1 + 1;
            *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x220);
            return;
          }
          goto LAB_109b63794;
        }
        puVar5 = &UNK_10f59f737;
      }
    }
  }
  lVar4 = param_1;
  FUN_109b6244c(param_1,puVar5);
  pcStack_48 = FUN_109b63b9c;
  uStack_60 = param_2;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((*(byte *)(lVar4 + 0x125) & 1) == 0) {
    if (*(ulong *)(lVar4 + 0x358) < 8) goto LAB_109b63d3c;
    uVar6 = 4;
    FUN_109b63da8(lVar4,&bStack_64);
    if ((int)((uint)bStack_64 << 0x18) < 0) {
      puVar5 = &UNK_10f59fca5;
LAB_109b63da0:
      FUN_109b6244c(lVar4,puVar5);
      if (lVar4 != 0) {
        uVar7 = *(ulong *)(lVar4 + 0x348);
        if (uVar7 != 0) {
          if (uVar6 <= uVar7) {
            uVar7 = uVar6;
          }
          _memcpy(puVar5,*(undefined8 *)(lVar4 + 800),uVar7);
          uVar6 = uVar6 - uVar7;
          puVar5 = puVar5 + uVar7;
          *(ulong *)(lVar4 + 0x358) = *(long *)(lVar4 + 0x358) - uVar7;
          *(ulong *)(lVar4 + 0x348) = *(long *)(lVar4 + 0x348) - uVar7;
          *(ulong *)(lVar4 + 800) = *(long *)(lVar4 + 800) + uVar7;
        }
        if ((uVar6 != 0) && (uVar7 = *(ulong *)(lVar4 + 0x360), uVar7 != 0)) {
          if (uVar7 <= uVar6) {
            uVar6 = uVar7;
          }
          _memcpy(puVar5,*(undefined8 *)(lVar4 + 0x330),uVar6);
          *(ulong *)(lVar4 + 0x360) = *(long *)(lVar4 + 0x360) - uVar6;
          *(long *)(lVar4 + 0x358) = *(long *)(lVar4 + 0x358) - uVar6;
          *(ulong *)(lVar4 + 0x330) = *(long *)(lVar4 + 0x330) + uVar6;
        }
      }
      return;
    }
    *(uint *)(lVar4 + 0x340) =
         (uint)bStack_61 | (uint)bStack_63 << 0x10 | (uint)bStack_62 << 8 | (uint)bStack_64 << 0x18;
    uVar3 = 0;
    _crc32(0,0,0);
    *(undefined4 *)(lVar4 + 0x244) = uVar3;
    uVar6 = 4;
    FUN_109b69a24(lVar4,&uStack_68);
    uVar8 = (uStack_68 & 0xff00ff00) >> 8 | (uStack_68 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    *(uint *)(lVar4 + 0x210) = uVar8;
    *(uint *)(lVar4 + 0x124) = *(uint *)(lVar4 + 0x124) | 0x100;
    if (uVar8 != 0x49444154) {
      *(undefined4 *)(lVar4 + 0x368) = 1;
      if ((*(byte *)(lVar4 + 0x128) >> 3 & 1) != 0) {
        return;
      }
      puVar5 = &UNK_10f59f7d1;
      goto LAB_109b63da0;
    }
    uVar8 = *(uint *)(lVar4 + 0x340);
    *(uint *)(lVar4 + 0x240) = uVar8;
    if (uVar8 != 0) goto LAB_109b63c64;
LAB_109b63c54:
    uVar7 = *(ulong *)(lVar4 + 0x358);
  }
  else {
    uVar8 = *(uint *)(lVar4 + 0x240);
    if (uVar8 == 0) goto LAB_109b63c54;
LAB_109b63c64:
    uVar6 = *(ulong *)(lVar4 + 0x348);
    if (uVar6 == 0) {
LAB_109b63ccc:
      uVar6 = *(ulong *)(lVar4 + 0x360);
      if (uVar6 == 0) {
        return;
      }
      if (uVar8 <= uVar6) {
        uVar6 = (ulong)uVar8;
      }
      FUN_109b5ece8(lVar4,*(undefined8 *)(lVar4 + 0x330),uVar6);
      func_0x000109b63e68(lVar4,*(undefined8 *)(lVar4 + 0x330),uVar6);
      uVar7 = *(long *)(lVar4 + 0x358) - uVar6;
      *(ulong *)(lVar4 + 0x358) = uVar7;
      *(ulong *)(lVar4 + 0x360) = *(long *)(lVar4 + 0x360) - uVar6;
      *(ulong *)(lVar4 + 0x330) = *(long *)(lVar4 + 0x330) + uVar6;
      iVar1 = *(int *)(lVar4 + 0x240) - (int)uVar6;
      *(int *)(lVar4 + 0x240) = iVar1;
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      if (uVar8 <= uVar6) {
        uVar6 = (ulong)uVar8;
      }
      FUN_109b5ece8(lVar4,*(undefined8 *)(lVar4 + 800),uVar6);
      func_0x000109b63e68(lVar4,*(undefined8 *)(lVar4 + 800),uVar6);
      uVar7 = *(long *)(lVar4 + 0x358) - uVar6;
      *(ulong *)(lVar4 + 0x358) = uVar7;
      *(ulong *)(lVar4 + 0x348) = *(long *)(lVar4 + 0x348) - uVar6;
      *(ulong *)(lVar4 + 800) = *(long *)(lVar4 + 800) + uVar6;
      uVar8 = *(int *)(lVar4 + 0x240) - (int)uVar6;
      *(uint *)(lVar4 + 0x240) = uVar8;
      if (uVar8 != 0) goto LAB_109b63ccc;
    }
  }
  if (3 < uVar7) {
    func_0x000109b69a94(lVar4,0);
    *(uint *)(lVar4 + 0x124) = *(uint *)(lVar4 + 0x124) & 0xfffffeff | 8;
    *(undefined4 *)(lVar4 + 0x130) = 0;
    return;
  }
LAB_109b63d3c:
  FUN_109b6333c(lVar4);
  return;
}



/* Entry: 109b63b9c; end: 109b63da7;  */

void FUN_109b63b9c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uStack_28;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  
  if ((*(byte *)(param_1 + 0x125) & 1) == 0) {
    if (*(ulong *)(param_1 + 0x358) < 8) goto LAB_109b63d3c;
    uVar4 = 4;
    FUN_109b63da8(param_1,&bStack_24);
    if ((int)((uint)bStack_24 << 0x18) < 0) {
      puVar3 = &UNK_10f59fca5;
LAB_109b63da0:
      FUN_109b6244c(param_1,puVar3);
      if (param_1 != 0) {
        uVar5 = *(ulong *)(param_1 + 0x348);
        if (uVar5 != 0) {
          if (uVar4 <= uVar5) {
            uVar5 = uVar4;
          }
          _memcpy(puVar3,*(undefined8 *)(param_1 + 800),uVar5);
          uVar4 = uVar4 - uVar5;
          puVar3 = puVar3 + uVar5;
          *(ulong *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar5;
          *(ulong *)(param_1 + 0x348) = *(long *)(param_1 + 0x348) - uVar5;
          *(ulong *)(param_1 + 800) = *(long *)(param_1 + 800) + uVar5;
        }
        if ((uVar4 != 0) && (uVar5 = *(ulong *)(param_1 + 0x360), uVar5 != 0)) {
          if (uVar5 <= uVar4) {
            uVar4 = uVar5;
          }
          _memcpy(puVar3,*(undefined8 *)(param_1 + 0x330),uVar4);
          *(ulong *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - uVar4;
          *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar4;
          *(ulong *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + uVar4;
        }
      }
      return;
    }
    *(uint *)(param_1 + 0x340) =
         (uint)bStack_21 | (uint)bStack_23 << 0x10 | (uint)bStack_22 << 8 | (uint)bStack_24 << 0x18;
    uVar2 = 0;
    _crc32(0,0,0);
    *(undefined4 *)(param_1 + 0x244) = uVar2;
    uVar4 = 4;
    FUN_109b69a24(param_1,&uStack_28);
    uVar6 = (uStack_28 & 0xff00ff00) >> 8 | (uStack_28 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    *(uint *)(param_1 + 0x210) = uVar6;
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x100;
    if (uVar6 != 0x49444154) {
      *(undefined4 *)(param_1 + 0x368) = 1;
      if ((*(byte *)(param_1 + 0x128) >> 3 & 1) != 0) {
        return;
      }
      puVar3 = &UNK_10f59f7d1;
      goto LAB_109b63da0;
    }
    uVar6 = *(uint *)(param_1 + 0x340);
    *(uint *)(param_1 + 0x240) = uVar6;
    if (uVar6 != 0) goto LAB_109b63c64;
LAB_109b63c54:
    uVar5 = *(ulong *)(param_1 + 0x358);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x240);
    if (uVar6 == 0) goto LAB_109b63c54;
LAB_109b63c64:
    uVar4 = *(ulong *)(param_1 + 0x348);
    if (uVar4 == 0) {
LAB_109b63ccc:
      uVar4 = *(ulong *)(param_1 + 0x360);
      if (uVar4 == 0) {
        return;
      }
      if (uVar6 <= uVar4) {
        uVar4 = (ulong)uVar6;
      }
      FUN_109b5ece8(param_1,*(undefined8 *)(param_1 + 0x330),uVar4);
      func_0x000109b63e68(param_1,*(undefined8 *)(param_1 + 0x330),uVar4);
      uVar5 = *(long *)(param_1 + 0x358) - uVar4;
      *(ulong *)(param_1 + 0x358) = uVar5;
      *(ulong *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - uVar4;
      *(ulong *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + uVar4;
      iVar1 = *(int *)(param_1 + 0x240) - (int)uVar4;
      *(int *)(param_1 + 0x240) = iVar1;
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      if (uVar6 <= uVar4) {
        uVar4 = (ulong)uVar6;
      }
      FUN_109b5ece8(param_1,*(undefined8 *)(param_1 + 800),uVar4);
      func_0x000109b63e68(param_1,*(undefined8 *)(param_1 + 800),uVar4);
      uVar5 = *(long *)(param_1 + 0x358) - uVar4;
      *(ulong *)(param_1 + 0x358) = uVar5;
      *(ulong *)(param_1 + 0x348) = *(long *)(param_1 + 0x348) - uVar4;
      *(ulong *)(param_1 + 800) = *(long *)(param_1 + 800) + uVar4;
      uVar6 = *(int *)(param_1 + 0x240) - (int)uVar4;
      *(uint *)(param_1 + 0x240) = uVar6;
      if (uVar6 != 0) goto LAB_109b63ccc;
    }
  }
  if (3 < uVar5) {
    func_0x000109b69a94(param_1,0);
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfffffeff | 8;
    *(undefined4 *)(param_1 + 0x130) = 0;
    return;
  }
LAB_109b63d3c:
  FUN_109b6333c(param_1);
  return;
}



/* Entry: 109b63da8; end: 109b6457f;  */

void FUN_109b63da8(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x348);
    if (uVar1 != 0) {
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      _memcpy(param_2,*(undefined8 *)(param_1 + 800),uVar1);
      param_3 = param_3 - uVar1;
      param_2 = param_2 + uVar1;
      *(ulong *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar1;
      *(ulong *)(param_1 + 0x348) = *(long *)(param_1 + 0x348) - uVar1;
      *(ulong *)(param_1 + 800) = *(long *)(param_1 + 800) + uVar1;
    }
    if ((param_3 != 0) && (uVar1 = *(ulong *)(param_1 + 0x360), uVar1 != 0)) {
      if (uVar1 <= param_3) {
        param_3 = uVar1;
      }
      _memcpy(param_2,*(undefined8 *)(param_1 + 0x330),param_3);
      *(ulong *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) - param_3;
      *(long *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - param_3;
      *(ulong *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + param_3;
    }
  }
  return;
}



/* Entry: 109b64580; end: 109b646cf;  */

void FUN_109b64580(long param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar6 = *(int *)(param_1 + 0x20c) + 1;
  *(uint *)(param_1 + 0x20c) = uVar6;
  if ((*(uint *)(param_1 + 0x1f8) <= uVar6) && (*(char *)(param_1 + 0x25c) != '\0')) {
    *(undefined4 *)(param_1 + 0x20c) = 0;
    _bzero(*(undefined8 *)(param_1 + 0x218),*(long *)(param_1 + 0x200) + 1);
    bVar5 = *(byte *)(param_1 + 0x25d);
    do {
      if (bVar5 == 4) {
        uVar6 = *(uint *)(param_1 + 0x1f0);
        if (uVar6 < 2) {
LAB_109b64634:
          bVar5 = bVar5 + 2;
        }
        else {
          bVar5 = 5;
        }
      }
      else if (bVar5 == 2) {
        uVar6 = *(uint *)(param_1 + 0x1f0);
        if (uVar6 < 3) goto LAB_109b64634;
        bVar5 = 3;
      }
      else if (bVar5 == 0) {
        uVar6 = *(uint *)(param_1 + 0x1f0);
        if (uVar6 < 5) goto LAB_109b64634;
        bVar5 = 1;
      }
      else {
        bVar1 = bVar5 + 1;
        if (7 < bVar1) break;
        if (bVar1 == 7) {
          bVar5 = 7;
          break;
        }
        uVar6 = *(uint *)(param_1 + 0x1f0);
        bVar5 = bVar1;
      }
      bVar1 = (&UNK_10e0354b7)[bVar5];
      uVar6 = uVar6 + bVar1 + ~(uint)(byte)(&UNK_10e0354b0)[bVar5];
      uVar3 = 0;
      if (bVar1 != 0) {
        uVar3 = uVar6 / bVar1;
      }
      *(uint *)(param_1 + 0x208) = uVar3;
      if ((*(byte *)(param_1 + 300) >> 1 & 1) != 0) break;
      bVar2 = (&UNK_10e0354c5)[bVar5];
      uVar3 = *(int *)(param_1 + 500) + (uint)bVar2 + ~(uint)(byte)(&UNK_10e0354be)[bVar5];
      uVar4 = 0;
      if (bVar2 != 0) {
        uVar4 = uVar3 / bVar2;
      }
      *(uint *)(param_1 + 0x1f8) = uVar4;
    } while ((uVar6 < bVar1) || (uVar3 < bVar2));
    *(byte *)(param_1 + 0x25d) = bVar5;
  }
  return;
}



/* Entry: 109b646d0; end: 109b646e3;  */

/* WARNING: Removing unreachable block (ram,0x000109b6d380) */
/* WARNING: Removing unreachable block (ram,0x000109b6d384) */

void FUN_109b646d0(uint *param_1,byte *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  byte *pbVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  undefined8 uVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  byte *pbVar32;
  uint *puVar33;
  byte bVar34;
  undefined *puVar35;
  byte bVar36;
  ulong uVar37;
  ulong uVar38;
  undefined auStack_c0 [8];
  long lStack_b8;
  
  if ((param_1 == (uint *)0x0) || (param_3 == 0)) {
    return;
  }
  uVar12 = 1;
  bVar21 = *(byte *)((long)param_1 + 0x267);
  if (bVar21 == 0) {
    FUN_109b6244c(param_1,&UNK_10f5a00e6);
LAB_109b6d734:
    FUN_109b6244c();
LAB_109b6d740:
    FUN_109b6244c();
  }
  else {
    lVar17 = *(long *)(param_1 + 0x88);
    uVar2 = param_1[0x7c];
    uVar15 = (ulong)uVar2;
    bVar4 = *(byte *)((long)param_1 + 0x25d);
    uVar14 = (uint)bVar21;
    if (*(ulong *)(param_1 + 0x8e) != 0) {
      uVar26 = uVar15 * uVar14 + 7 >> 3;
      if (7 < bVar21) {
        uVar26 = uVar15 * (bVar21 >> 3);
      }
      if (*(ulong *)(param_1 + 0x8e) == uVar26) goto LAB_109b6d304;
      goto LAB_109b6d740;
    }
LAB_109b6d304:
    if (uVar2 == 0) goto LAB_109b6d734;
    pbVar16 = (byte *)(lVar17 + 1);
    uVar30 = (ulong)uVar2 * (ulong)uVar14;
    bVar5 = bVar21 >> 3;
    uVar26 = (ulong)bVar5;
    uVar19 = (uint)uVar30 & 7;
    uVar22 = (uint)bVar21;
    if ((uVar30 & 7) == 0) {
      bVar34 = 0;
      pbVar32 = (byte *)0x0;
      bVar36 = 0;
    }
    else {
      uVar37 = uVar26 * uVar2;
      if (uVar22 < 8) {
        uVar37 = uVar30 + 7 >> 3;
      }
      pbVar32 = param_2 + (uVar37 - 1);
      bVar34 = *pbVar32;
      bVar36 = (byte)(0xff >> (ulong)uVar19);
      if ((*(byte *)((long)param_1 + 0x12e) & 1) != 0) {
        bVar36 = (byte)(0xff << (ulong)uVar19);
      }
    }
    if (((((char)param_1[0x97] == '\0') || ((param_1[0x4b] >> 1 & 1) == 0)) || (5 < bVar4)) ||
       (uVar19 = (uint)bVar4, (bVar4 & 1) == 0)) {
      uVar12 = uVar26 * uVar2;
      if (uVar22 < 8) {
        uVar12 = uVar30 + 7 >> 3;
      }
      _memcpy(param_2,pbVar16,uVar12);
LAB_109b6d3b0:
      if (pbVar32 != (byte *)0x0) {
        *pbVar32 = *pbVar32 & (bVar36 ^ 0xff) | bVar36 & bVar34;
      }
      return;
    }
    uVar29 = 1 << (ulong)(3 - (uVar19 + 1 >> 1) & 0x1f) & 7;
    if (uVar2 <= uVar29) {
      return;
    }
    if (uVar22 < 8) {
      uVar2 = 0;
      if (uVar14 != 0) {
        uVar2 = 8 / uVar22;
      }
      lVar17 = 1;
      if (uVar22 != 2) {
        lVar17 = 2;
      }
      lVar1 = 0;
      if (uVar22 != 1) {
        lVar1 = lVar17;
      }
      lVar17 = ((ulong)bVar4 & 0xfe) * 2;
      puVar8 = (uint *)(&UNK_10e035594 + lVar1 * 0xc + lVar17);
      if ((param_1[0x4b] & 0x10000) != 0) {
        puVar8 = (uint *)(&UNK_10e035570 + lVar17 + lVar1 * 0xc);
      }
      uVar14 = *puVar8;
      while( true ) {
        if ((uVar14 & 0xff) != 0) {
          if ((uVar14 & 0xff) == 0xff) {
            bVar21 = *pbVar16;
          }
          else {
            bVar21 = (byte)uVar14 & *pbVar16 | *param_2 & ((byte)uVar14 ^ 0xff);
          }
          *param_2 = bVar21;
        }
        bVar7 = uVar15 < uVar2;
        uVar15 = uVar15 - uVar2;
        if (bVar7 || uVar15 == 0) break;
        uVar14 = uVar14 >> 8 | uVar14 << 0x18;
        param_2 = param_2 + 1;
        pbVar16 = pbVar16 + 1;
      }
      goto LAB_109b6d3b0;
    }
    if ((bVar21 & 7) == 0) {
      uVar30 = (ulong)(uVar29 * bVar5);
      uVar15 = uVar2 * uVar26 - uVar30;
      pbVar32 = param_2 + uVar30;
      pbVar9 = pbVar16 + uVar30;
      uVar26 = (ulong)((uint)bVar5 << (ulong)(6 - uVar19 >> 1 & 0x1f));
      uVar12 = uVar15;
      if (uVar26 <= uVar15) {
        uVar12 = uVar26;
      }
      uVar14 = (uint)uVar12;
      uVar26 = uVar12 & 0xffffffff;
      uVar2 = (uint)bVar5 << (ulong)(7 - uVar19 >> 1 & 0x1f);
      uVar37 = (ulong)uVar2;
      if (uVar14 == 1) {
        *pbVar32 = *pbVar9;
        for (; uVar37 < uVar15; uVar15 = uVar15 - uVar37) {
          uVar30 = uVar37 + uVar30;
          param_2[uVar30] = pbVar16[uVar30];
        }
        return;
      }
      if (uVar14 == 2) {
        do {
          *pbVar32 = *pbVar9;
          pbVar32[1] = pbVar9[1];
          bVar7 = uVar15 < uVar37;
          uVar15 = uVar15 - uVar37;
          if (bVar7 || uVar15 == 0) {
            return;
          }
          pbVar9 = pbVar9 + uVar37;
          pbVar32 = pbVar32 + uVar37;
        } while (1 < uVar15);
        *pbVar32 = *pbVar9;
        return;
      }
      if (uVar14 == 3) {
        *pbVar32 = *pbVar9;
        pbVar32[1] = pbVar9[1];
        pbVar32[2] = pbVar9[2];
        if (uVar15 <= uVar37) {
          return;
        }
        pbVar16 = (byte *)(uVar37 + uVar30 + lVar17 + 3);
        param_2 = param_2 + uVar37 + uVar30 + 2;
        do {
          uVar15 = uVar15 - uVar37;
          param_2[-2] = pbVar16[-2];
          param_2[-1] = pbVar16[-1];
          *param_2 = *pbVar16;
          pbVar16 = pbVar16 + uVar37;
          param_2 = param_2 + uVar37;
        } while (uVar37 < uVar15);
        return;
      }
      if (((uVar14 < 0x10) && (((ulong)pbVar32 & 1) == 0)) &&
         ((((ulong)pbVar9 & 1) == 0 && (((uVar12 & 1) == 0 && ((uVar2 & 1) == 0)))))) {
        if ((((uint)pbVar9 | uVar2 | (uint)pbVar32 | uVar14) >> 1 & 1) != 0) {
          uVar30 = (ulong)(uVar2 - uVar14 >> 1);
          uVar12 = uVar26;
          while( true ) {
            do {
              pbVar18 = pbVar9 + 2;
              pbVar16 = pbVar32 + 2;
              *(undefined2 *)pbVar32 = *(undefined2 *)pbVar9;
              uVar12 = uVar12 - 2;
              pbVar32 = pbVar16;
              pbVar9 = pbVar18;
            } while (uVar12 != 0);
            bVar7 = uVar15 < uVar37;
            uVar15 = uVar15 - uVar37;
            if (bVar7 || uVar15 == 0) break;
            pbVar9 = pbVar18 + uVar30 * 2;
            pbVar32 = pbVar16 + uVar30 * 2;
            uVar12 = uVar26;
            if (uVar15 < uVar26) {
              lVar17 = uVar30 << 1;
              do {
                pbVar16[lVar17] = pbVar18[lVar17];
                lVar17 = lVar17 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              return;
            }
          }
          return;
        }
        uVar30 = (ulong)(uVar2 - uVar14 >> 2);
        uVar12 = uVar26;
        while( true ) {
          do {
            pbVar18 = pbVar9 + 4;
            pbVar16 = pbVar32 + 4;
            *(undefined4 *)pbVar32 = *(undefined4 *)pbVar9;
            uVar12 = uVar12 - 4;
            pbVar32 = pbVar16;
            pbVar9 = pbVar18;
          } while (uVar12 != 0);
          bVar7 = uVar15 < uVar37;
          uVar15 = uVar15 - uVar37;
          if (bVar7 || uVar15 == 0) break;
          pbVar9 = pbVar18 + uVar30 * 4;
          pbVar32 = pbVar16 + uVar30 * 4;
          uVar12 = uVar26;
          if (uVar15 < uVar26) {
            lVar17 = uVar30 << 2;
            do {
              pbVar16[lVar17] = pbVar18[lVar17];
              lVar17 = lVar17 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            return;
          }
        }
        return;
      }
      _memcpy(pbVar32,pbVar9,uVar26);
      if (uVar15 <= uVar37) {
        return;
      }
      do {
        uVar30 = uVar37 + uVar30;
        uVar38 = uVar15 - uVar37;
        uVar12 = uVar15 - uVar37;
        if (uVar26 <= uVar15 - uVar37) {
          uVar12 = uVar26;
        }
        _memcpy(param_2 + uVar30,pbVar16 + uVar30,uVar12);
        uVar26 = uVar12;
        uVar15 = uVar38;
      } while (uVar37 < uVar38);
      return;
    }
  }
  puVar10 = &UNK_10f5a013c;
  FUN_109b6244c();
  iVar13 = (int)param_5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  if ((param_1 != (uint *)0x0) && (puVar10 != (undefined *)0x0)) {
    uVar2 = *param_1;
    iVar3 = *(int *)(&UNK_10e0355b8 + (long)(int)uVar12 * 4);
    uVar14 = iVar3 * uVar2;
    bVar21 = *(byte *)((long)param_1 + 0x13);
    if (bVar21 == 4) {
      uVar22 = (uVar2 & 1) << 2;
      bVar7 = (param_4 & 0x10000) != 0;
      uVar19 = (uVar14 & 1) << 2;
      if (bVar7) {
        uVar19 = (uVar14 * 4 ^ 0xffffffff) & 4;
        uVar22 = uVar22 ^ 4;
      }
      uVar29 = 0;
      iVar23 = 4;
      uVar25 = 4;
      if (bVar7) {
        uVar25 = 0;
        iVar23 = -4;
        uVar29 = 4;
      }
      if (uVar2 != 0) {
        uVar31 = 0;
        pbVar16 = puVar10 + (uVar2 - 1 >> 1);
        pbVar32 = puVar10 + (uVar14 - 1 >> 1);
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        puVar8 = (uint *)0xf0f;
        do {
          bVar21 = *pbVar16;
          iVar11 = iVar3;
          do {
            iVar13 = (bVar21 >> (ulong)(uVar22 & 0x1f) & 0xf) << (ulong)(uVar19 & 0x1f);
            *pbVar32 = (byte)(0xf0f >> (ulong)(4 - uVar19 & 0x1f)) & *pbVar32 | (byte)iVar13;
            bVar7 = uVar19 == uVar25;
            param_4 = (ulong)bVar7;
            uVar2 = uVar19 + iVar23;
            uVar19 = uVar29;
            if (!bVar7) {
              uVar19 = uVar2;
            }
            pbVar32 = pbVar32 + -param_4;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          puVar10 = (undefined *)(ulong)*param_1;
          bVar7 = uVar22 == uVar25;
          uVar12 = (ulong)bVar7;
          uVar2 = uVar22 + iVar23;
          uVar22 = uVar29;
          if (!bVar7) {
            uVar22 = uVar2;
          }
          pbVar16 = pbVar16 + -uVar12;
          uVar31 = uVar31 + 1;
        } while (uVar31 < *param_1);
      }
LAB_109b6dab8:
      bVar21 = *(byte *)((long)param_1 + 0x13);
    }
    else {
      if (bVar21 == 2) {
        uVar22 = uVar2 * 2 + 6 & 6;
        uVar19 = uVar14 * 2 + 6;
        uVar25 = 6;
        bVar7 = (param_4 & 0x10000) != 0;
        uVar29 = uVar19 ^ 0xffffffff;
        uVar31 = uVar22 ^ 6;
        if (bVar7) {
          uVar29 = uVar19;
          uVar31 = uVar22;
        }
        uVar29 = uVar29 & 6;
        uVar19 = 0;
        if (bVar7) {
          uVar25 = 0;
          uVar19 = 6;
        }
        iVar23 = 2;
        if (bVar7) {
          iVar23 = -2;
        }
        if (uVar2 != 0) {
          uVar22 = 0;
          pbVar16 = puVar10 + (uVar2 - 1 >> 2);
          pbVar32 = puVar10 + (uVar14 - 1 >> 2);
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          puVar8 = (uint *)0x3f3f;
          do {
            bVar21 = *pbVar16;
            iVar11 = iVar3;
            do {
              iVar13 = (bVar21 >> (ulong)(uVar31 & 0x1f) & 3) << (ulong)(uVar29 & 0x1f);
              *pbVar32 = (byte)(0x3f3f >> (ulong)(6 - uVar29 & 0x1f)) & *pbVar32 | (byte)iVar13;
              bVar7 = uVar29 == uVar25;
              param_4 = (ulong)bVar7;
              uVar2 = uVar29 + iVar23;
              uVar29 = uVar19;
              if (!bVar7) {
                uVar29 = uVar2;
              }
              pbVar32 = pbVar32 + -param_4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
            puVar10 = (undefined *)(ulong)*param_1;
            bVar7 = uVar31 == uVar25;
            uVar12 = (ulong)bVar7;
            uVar2 = uVar31 + iVar23;
            uVar31 = uVar19;
            if (!bVar7) {
              uVar31 = uVar2;
            }
            pbVar16 = pbVar16 + -uVar12;
            uVar22 = uVar22 + 1;
          } while (uVar22 < *param_1);
        }
        goto LAB_109b6dab8;
      }
      if (bVar21 == 1) {
        uVar19 = uVar2 - 1 & 7;
        uVar29 = uVar19 ^ 7;
        uVar22 = uVar14 - 1 & 7;
        uVar12 = (ulong)uVar22;
        bVar7 = (param_4 & 0x10000) != 0;
        iVar23 = 1;
        if (bVar7) {
          iVar23 = -1;
        }
        uVar25 = 7;
        if (bVar7) {
          uVar25 = 0;
        }
        uVar31 = uVar29;
        uVar28 = -uVar14 & 7;
        uVar6 = 0;
        if (bVar7) {
          uVar31 = uVar19;
          uVar28 = uVar22;
          uVar6 = 7;
        }
        puVar8 = (uint *)(ulong)uVar29;
        if (uVar2 != 0) {
          uVar19 = 0;
          pbVar16 = puVar10 + (uVar2 - 1 >> 3);
          pbVar32 = puVar10 + (uVar14 - 1 >> 3);
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          puVar8 = (uint *)0x7f7f;
          do {
            bVar21 = *pbVar16;
            iVar11 = iVar3;
            do {
              iVar13 = (bVar21 >> (ulong)(uVar31 & 0x1f) & 1) << (ulong)(uVar28 & 0x1f);
              *pbVar32 = (byte)(0x7f7f >> (ulong)(7 - uVar28 & 0x1f)) & *pbVar32 | (byte)iVar13;
              bVar7 = uVar28 == uVar25;
              param_4 = (ulong)bVar7;
              uVar2 = uVar28 + iVar23;
              uVar28 = uVar6;
              if (!bVar7) {
                uVar28 = uVar2;
              }
              pbVar32 = pbVar32 + -param_4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
            puVar10 = (undefined *)(ulong)*param_1;
            bVar7 = uVar31 == uVar25;
            uVar12 = (ulong)bVar7;
            uVar2 = uVar31 + iVar23;
            uVar31 = uVar6;
            if (!bVar7) {
              uVar31 = uVar2;
            }
            pbVar16 = pbVar16 + -uVar12;
            uVar19 = uVar19 + 1;
          } while (uVar19 < *param_1);
        }
        goto LAB_109b6dab8;
      }
      if (uVar2 != 0) {
        uVar19 = 0;
        uVar15 = (ulong)(bVar21 >> 3);
        puVar33 = (uint *)(puVar10 + uVar15 * (uVar14 - 1));
        puVar35 = puVar10 + uVar15 * (uVar2 - 1);
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        do {
          param_4 = 8;
          ___memcpy_chk(auStack_c0,puVar35,uVar15,8);
          iVar23 = iVar3;
          do {
            puVar8 = puVar33;
            puVar10 = auStack_c0;
            uVar12 = uVar15;
            _memcpy(puVar33,auStack_c0,uVar15);
            iVar13 = (int)param_5;
            puVar33 = (uint *)((long)puVar33 + -uVar15);
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
          puVar35 = puVar35 + -uVar15;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *param_1);
        goto LAB_109b6dab8;
      }
    }
    *param_1 = uVar14;
    uVar15 = (ulong)uVar14 * (ulong)bVar21 + 7 >> 3;
    if (7 < bVar21) {
      uVar15 = (ulong)uVar14 * (ulong)(bVar21 >> 3);
    }
    *(ulong *)(param_1 + 2) = uVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (3 < iVar13 - 1U) {
    return;
  }
  if (*(long *)(puVar8 + 0x11e) == 0) {
    uVar2 = *(byte *)((long)puVar8 + 0x262) + 7 >> 3;
    *(code **)(puVar8 + 0x11e) = FUN_109b6e424;
    puVar8[0x122] = 0x9b6e460;
    puVar8[0x123] = 1;
    uVar20 = 0x109b6e4c4;
    if (uVar2 != 1) {
      uVar20 = 0x109b6e540;
    }
    *(undefined8 *)(puVar8 + 0x124) = uVar20;
    *(code **)(puVar8 + 0x120) = FUN_109b5e62c;
    if (uVar2 == 3) {
      uVar20 = 0x109b5e7cc;
      uVar24 = 0x109b5e6f4;
      uVar27 = 0x109b5e658;
    }
    else {
      if (uVar2 != 4) goto LAB_109b6dbd4;
      uVar20 = 0x109b5e938;
      uVar24 = 0x109b5e77c;
      uVar27 = 0x109b5e6bc;
    }
    *(undefined8 *)(puVar8 + 0x11e) = uVar27;
    *(undefined8 *)(puVar8 + 0x122) = uVar24;
    *(undefined8 *)(puVar8 + 0x124) = uVar20;
  }
LAB_109b6dbd4:
                    /* WARNING: Could not recover jumptable at 0x000109b6dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar8 + (ulong)(iVar13 - 1U) * 2 + 0x11e))(puVar10,uVar12,param_4);
  return;
}



/* Entry: 109b646e4; end: 109b6473b;  */

void FUN_109b646e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x308) = param_3;
    *(undefined8 *)(param_1 + 0x310) = param_4;
    *(undefined8 *)(param_1 + 0x318) = param_5;
    *(code **)(param_1 + 0xf8) = FUN_109b63da8;
    *(undefined8 *)(param_1 + 0x100) = param_2;
    if (*(long *)(param_1 + 0xf0) != 0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      FUN_109b62608(param_1,&UNK_10f59faa1);
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return;
}



/* Entry: 109b6473c; end: 109b6474b;  */

long FUN_109b6473c(long param_1)

{
  FUN_109b5ef4c();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0x8000;
    *(undefined4 *)(param_1 + 0x468) = 0x2000;
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 0x300000;
    *(code **)(param_1 + 0xf8) = FUN_109b659a8;
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      FUN_109b62608(param_1,&UNK_10f59faa1);
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return param_1;
}


