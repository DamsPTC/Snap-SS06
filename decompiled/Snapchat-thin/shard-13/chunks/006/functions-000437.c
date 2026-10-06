/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa224ac; end: 10aa225af;  */

undefined8
FUN_10aa224ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x138);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    return 0;
  }
  if ((*(long *)(param_1 + 0x130) == 0) ||
     (puVar5 = (uint *)(*(long *)(param_1 + 0x130) + 0x50), *puVar5 <= (uint)param_3)) {
    param_5 = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x178);
    if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar6);
    }
    FUN_10aa1cd6c(param_5,puVar5,param_3,param_4,lVar6 + 0xc0);
  }
  plVar1 = plVar4 + 1;
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
    return param_5;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  return param_5;
}



/* Entry: 10aa225b0; end: 10aa226fb;  */

void FUN_10aa225b0(long *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined2 *puVar15;
  int *piVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar20;
  long lVar19;
  float fVar21;
  float fVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  long lVar29;
  float fVar31;
  float fVar32;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_240 [8];
  float fStack_238;
  undefined8 uStack_230;
  float fStack_228;
  undefined8 uStack_220;
  float fStack_218;
  undefined8 uStack_210;
  float fStack_208;
  long lStack_200;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  int *piStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long alStack_1c8 [3];
  undefined2 *puStack_1b0;
  undefined2 *puStack_1a8;
  long lStack_1a0;
  long lStack_100;
  long *plStack_f8;
  long alStack_f0 [18];
  long lStack_60;
  long lStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x23] != param_1[0x24]) {
    lStack_100 = 0;
    plStack_f8 = (long *)0x0;
    plVar6 = (long *)param_1[0x27];
    if (((plVar6 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_f8 = plVar6, plVar6 == (long *)0x0)) ||
       (lStack_100 = param_1[0x26], lStack_100 == 0)) {
      plVar6 = plStack_f8;
      FUN_10aa226fc(alStack_f0,param_1[0x23],param_1[0x24] - param_1[0x23] >> 4,param_1 + 0x28);
      lVar7 = *param_2;
      param_4 = (undefined4 *)(ulong)*(byte *)(param_2 + 10);
      param_3 = param_2 + 2;
      FUN_10aa1aa50(alStack_f0);
      param_2 = (long *)lVar7;
      if (lStack_60 != 0) {
        lStack_58 = lStack_60;
        __ZdlPv();
        param_2 = (long *)lVar7;
      }
      param_1 = alStack_f0;
      FUN_10aa1accc();
      if (plVar6 == (long *)0x0) goto LAB_10aa226a4;
    }
    else {
      lVar7 = *param_2;
      param_4 = (undefined4 *)(ulong)*(byte *)(param_2 + 10);
      param_1 = (long *)(lStack_100 + 0x10);
      param_3 = param_2 + 2;
      FUN_10aa1aa50();
      param_2 = (long *)lVar7;
    }
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar6;
    }
  }
LAB_10aa226a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010aa63334(&lStack_100);
  __Unwind_Resume();
  lVar24 = *(long *)(param_4 + 8);
  lVar7 = *(long *)(param_4 + 0xb);
  fVar26 = (float)param_4[10];
  fVar22 = (float)param_4[0xd];
  fVar27 = (float)lVar7 - (float)lVar24;
  fVar21 = (float)((ulong)lVar24 >> 0x20);
  fVar30 = (float)((ulong)lVar7 >> 0x20) - fVar21;
  fVar31 = fVar22 - fVar26;
  fVar4 = 0.0;
  if (0.0 < fVar31) {
    fVar4 = 65533.0 / fVar31;
  }
  fVar5 = 0.0;
  if (0.0 < fVar31) {
    fVar5 = fVar31 * 1.5259488e-05;
  }
  FUN_10a40944c(&puStack_1b0,(ulong)(uint)param_4[1] * 3);
  FUN_10aa413a8(alStack_1c8,*param_4);
  fVar31 = fVar27 * 1.5259488e-05;
  fVar20 = fVar30 * 1.5259488e-05;
  iVar23 = -(uint)(fVar27 <= 0.0);
  iVar25 = -(uint)(fVar30 <= 0.0);
  fVar18 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar23)));
  lVar29 = CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                    CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                             CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                      CONCAT14(SUB41(fVar20,0) & ~(byte)iVar25,fVar18))));
  fVar31 = 65533.0 / fVar27;
  fVar20 = 65533.0 / fVar30;
  iVar23 = -(uint)(fVar27 <= 0.0);
  iVar25 = -(uint)(fVar30 <= 0.0);
  fVar27 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar23)));
  lVar19 = CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                    CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                             CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                      CONCAT14(SUB41(fVar20,0) & ~(byte)iVar25,fVar27))));
  fVar18 = (float)lVar24 - fVar18;
  fVar21 = fVar21 - (float)((ulong)lVar29 >> 0x20);
  uStack_1f8 = uStack_1f8 & 0xffffffffffffff00;
  lStack_200 = 0;
  piStack_1e8 = (int *)0x0;
  puStack_1f0 = (undefined8 *)0x0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  lStack_1e0 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  FUN_10aa1ac44(&lStack_200,*param_4,param_4[1],4);
  lStack_1e0 = *(long *)(param_4 + 8);
  uStack_1d8 = param_4[10];
  lVar8 = *(long *)(param_4 + 0xb);
  uStack_1d4 = (undefined4)lVar8;
  uStack_1d0 = (undefined4)((ulong)lVar8 >> 0x20);
  uStack_1cc = param_4[0xd];
  if (param_3 != (long *)0x0) {
    iVar23 = 0;
    plVar6 = (long *)0x0;
    puVar15 = puStack_1b0;
    piVar16 = piStack_1e8;
    puVar17 = puStack_1f0;
    do {
      lVar14 = *(long *)((long)param_2 + (long)plVar6 * 0x10);
      lVar8 = *(long *)(lVar14 + 0x28);
      lVar12 = *(long *)(lVar14 + 0x30);
      uStack_24c = *(undefined4 *)(lVar14 + 0x20);
      uStack_248 = uStack_24c;
      uStack_244 = uStack_24c;
      FUN_10a45f7b0(auStack_240,lVar14 + 4,lVar14 + 0x10,&uStack_24c);
      lVar9 = (lVar12 - lVar8 >> 2) * -0x5555555555555555;
      if (lVar12 != lVar8) {
        pfVar10 = (float *)(*(long *)(lVar14 + 0x28) + 8);
        lVar8 = lVar9;
        do {
          fVar30 = pfVar10[-2];
          fVar20 = pfVar10[-1];
          fVar28 = *pfVar10;
          fVar32 = fVar30 * fStack_238 + fVar20 * fStack_228 + fVar28 * fStack_218 + fStack_208;
          fVar31 = auStack_240._0_4_ * fVar30 + (float)uStack_230 * fVar20 +
                   (float)uStack_220 * fVar28 + (float)uStack_210;
          fVar30 = auStack_240._4_4_ * fVar30 + (float)((ulong)uStack_230 >> 0x20) * fVar20 +
                   (float)((ulong)uStack_220 >> 0x20) * fVar28 + (float)((ulong)uStack_210 >> 0x20);
          *puVar17 = CONCAT44(fVar30,fVar31);
          *(float *)(puVar17 + 1) = fVar32;
          puVar17 = (undefined8 *)((long)puVar17 + 0xc);
          *puVar15 = (short)(int)(fVar27 * (fVar31 - fVar18));
          puVar15[1] = (short)(int)((float)((ulong)lVar19 >> 0x20) * (fVar30 - fVar21));
          puVar15[2] = (short)(int)(fVar4 * (fVar32 - (fVar26 - fVar5)));
          puVar15 = puVar15 + 3;
          lVar8 = lVar8 + -1;
          pfVar10 = pfVar10 + 3;
        } while (lVar8 != 0);
      }
      lVar8 = *(long *)(lVar14 + 0x48) - (long)*(int **)(lVar14 + 0x40);
      if (lVar8 != 0) {
        lVar12 = lVar8 >> 2;
        piVar11 = *(int **)(lVar14 + 0x40);
        piVar13 = piVar16;
        do {
          *piVar13 = *piVar11 + iVar23;
          lVar12 = lVar12 + -1;
          piVar11 = piVar11 + 1;
          piVar13 = piVar13 + 1;
        } while (lVar12 != 0);
      }
      iVar23 = iVar23 + (int)lVar9;
      piVar16 = (int *)((long)piVar16 + lVar8);
      plVar6 = (long *)((long)plVar6 + 1);
    } while (plVar6 != param_3);
  }
  param_1[1] = uStack_1f8;
  *param_1 = lStack_200;
  param_1[3] = (long)piStack_1e8;
  param_1[2] = (long)puStack_1f0;
  param_1[5] = CONCAT44(uStack_1d4,uStack_1d8);
  param_1[4] = lStack_1e0;
  param_1[6] = CONCAT44(uStack_1cc,uStack_1d0);
  uStack_1f8 = 0;
  lStack_200 = 0;
  piStack_1e8 = (int *)0x0;
  puStack_1f0 = (undefined8 *)0x0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  lStack_1e0 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  param_1[9] = (ulong)(uint)fVar26;
  param_1[8] = lVar24;
  param_1[0xb] = (ulong)(uint)fVar22;
  param_1[10] = lVar7;
  param_1[0xd] = (ulong)(uint)fVar4;
  param_1[0xc] = lVar19;
  param_1[0xf] = (ulong)(uint)(fVar26 - fVar5);
  param_1[0xe] = CONCAT44(fVar21,fVar18);
  param_1[0x11] = (ulong)(uint)fVar5;
  param_1[0x10] = lVar29;
  param_1[0x13] = (long)puStack_1a8;
  param_1[0x12] = (long)puStack_1b0;
  param_1[0x14] = lStack_1a0;
  puStack_1b0 = (undefined2 *)0x0;
  puStack_1a8 = (undefined2 *)0x0;
  lStack_1a0 = 0;
  FUN_10aa1accc(&lStack_200);
  if (alStack_1c8[0] != 0) {
    __ZdlPv();
  }
  if (puStack_1b0 != (undefined2 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa226fc; end: 10aa22aa7;  */

void FUN_10aa226fc(undefined8 *param_1,long param_2,long param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  float fVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar30;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [8];
  float fStack_138;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  int *piStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long alStack_c8 [3];
  undefined2 *puStack_b0;
  undefined2 *puStack_a8;
  undefined8 uStack_a0;
  
  uVar22 = *(undefined8 *)(param_4 + 8);
  uVar16 = *(undefined8 *)(param_4 + 0xb);
  fVar24 = (float)param_4[10];
  fVar20 = (float)param_4[0xd];
  fVar25 = (float)uVar16 - (float)uVar22;
  fVar19 = (float)((ulong)uVar22 >> 0x20);
  fVar28 = (float)((ulong)uVar16 >> 0x20) - fVar19;
  fVar29 = fVar20 - fVar24;
  fVar1 = 0.0;
  if (0.0 < fVar29) {
    fVar1 = 65533.0 / fVar29;
  }
  fVar2 = 0.0;
  if (0.0 < fVar29) {
    fVar2 = fVar29 * 1.5259488e-05;
  }
  FUN_10a40944c(&puStack_b0,(ulong)(uint)param_4[1] * 3);
  FUN_10aa413a8(alStack_c8,*param_4);
  fVar29 = fVar25 * 1.5259488e-05;
  fVar18 = fVar28 * 1.5259488e-05;
  iVar21 = -(uint)(fVar25 <= 0.0);
  iVar23 = -(uint)(fVar28 <= 0.0);
  fVar15 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                    CONCAT11((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                             SUB41(fVar29,0) & ~(byte)iVar21)));
  uVar27 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                    CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                             CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                      CONCAT14(SUB41(fVar18,0) & ~(byte)iVar23,fVar15))));
  fVar29 = 65533.0 / fVar25;
  fVar18 = 65533.0 / fVar28;
  iVar21 = -(uint)(fVar25 <= 0.0);
  iVar23 = -(uint)(fVar28 <= 0.0);
  fVar25 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                    CONCAT11((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                             SUB41(fVar29,0) & ~(byte)iVar21)));
  uVar17 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                    CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                             CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                      CONCAT14(SUB41(fVar18,0) & ~(byte)iVar23,fVar25))));
  fVar15 = (float)uVar22 - fVar15;
  fVar19 = fVar19 - (float)((ulong)uVar27 >> 0x20);
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  uStack_100 = 0;
  piStack_e8 = (int *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  FUN_10aa1ac44(&uStack_100,*param_4,param_4[1],4);
  uStack_e0 = *(undefined8 *)(param_4 + 8);
  uStack_d8 = param_4[10];
  uVar3 = *(undefined8 *)(param_4 + 0xb);
  uStack_d4 = (undefined4)uVar3;
  uStack_d0 = (undefined4)((ulong)uVar3 >> 0x20);
  uStack_cc = param_4[0xd];
  if (param_3 != 0) {
    iVar21 = 0;
    lVar11 = 0;
    puVar12 = puStack_b0;
    piVar13 = piStack_e8;
    puVar14 = puStack_f0;
    do {
      lVar10 = *(long *)(param_2 + lVar11 * 0x10);
      lVar6 = *(long *)(lVar10 + 0x28);
      lVar8 = *(long *)(lVar10 + 0x30);
      uStack_14c = *(undefined4 *)(lVar10 + 0x20);
      uStack_148 = uStack_14c;
      uStack_144 = uStack_14c;
      FUN_10a45f7b0(auStack_140,lVar10 + 4,lVar10 + 0x10,&uStack_14c);
      lVar4 = (lVar8 - lVar6 >> 2) * -0x5555555555555555;
      if (lVar8 != lVar6) {
        pfVar5 = (float *)(*(long *)(lVar10 + 0x28) + 8);
        lVar6 = lVar4;
        do {
          fVar28 = pfVar5[-2];
          fVar18 = pfVar5[-1];
          fVar26 = *pfVar5;
          fVar30 = fVar28 * fStack_138 + fVar18 * fStack_128 + fVar26 * fStack_118 + fStack_108;
          fVar29 = auStack_140._0_4_ * fVar28 + (float)uStack_130 * fVar18 +
                   (float)uStack_120 * fVar26 + (float)uStack_110;
          fVar28 = auStack_140._4_4_ * fVar28 + (float)((ulong)uStack_130 >> 0x20) * fVar18 +
                   (float)((ulong)uStack_120 >> 0x20) * fVar26 + (float)((ulong)uStack_110 >> 0x20);
          *puVar14 = CONCAT44(fVar28,fVar29);
          *(float *)(puVar14 + 1) = fVar30;
          puVar14 = (undefined8 *)((long)puVar14 + 0xc);
          *puVar12 = (short)(int)(fVar25 * (fVar29 - fVar15));
          puVar12[1] = (short)(int)((float)((ulong)uVar17 >> 0x20) * (fVar28 - fVar19));
          puVar12[2] = (short)(int)(fVar1 * (fVar30 - (fVar24 - fVar2)));
          puVar12 = puVar12 + 3;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 3;
        } while (lVar6 != 0);
      }
      lVar6 = *(long *)(lVar10 + 0x48) - (long)*(int **)(lVar10 + 0x40);
      if (lVar6 != 0) {
        lVar8 = lVar6 >> 2;
        piVar7 = *(int **)(lVar10 + 0x40);
        piVar9 = piVar13;
        do {
          *piVar9 = *piVar7 + iVar21;
          lVar8 = lVar8 + -1;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        } while (lVar8 != 0);
      }
      iVar21 = iVar21 + (int)lVar4;
      piVar13 = (int *)((long)piVar13 + lVar6);
      lVar11 = lVar11 + 1;
    } while (lVar11 != param_3);
  }
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = piStack_e8;
  param_1[2] = puStack_f0;
  param_1[5] = CONCAT44(uStack_d4,uStack_d8);
  param_1[4] = uStack_e0;
  param_1[6] = CONCAT44(uStack_cc,uStack_d0);
  uStack_f8 = 0;
  uStack_100 = 0;
  piStack_e8 = (int *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  param_1[9] = (ulong)(uint)fVar24;
  param_1[8] = uVar22;
  param_1[0xb] = (ulong)(uint)fVar20;
  param_1[10] = uVar16;
  param_1[0xd] = (ulong)(uint)fVar1;
  param_1[0xc] = uVar17;
  param_1[0xf] = (ulong)(uint)(fVar24 - fVar2);
  param_1[0xe] = CONCAT44(fVar19,fVar15);
  param_1[0x11] = (ulong)(uint)fVar2;
  param_1[0x10] = uVar27;
  param_1[0x13] = puStack_a8;
  param_1[0x12] = puStack_b0;
  param_1[0x14] = uStack_a0;
  puStack_b0 = (undefined2 *)0x0;
  puStack_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  FUN_10aa1accc(&uStack_100);
  if (alStack_c8[0] != 0) {
    __ZdlPv();
  }
  if (puStack_b0 != (undefined2 *)0x0) {
    puStack_a8 = puStack_b0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aa22aa8; end: 10aa22adf;  */

long FUN_10aa22aa8(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  FUN_10aa1accc(param_1);
  return param_1;
}



/* Entry: 10aa22ae0; end: 10aa22af7;  */

void FUN_10aa22ae0(long param_1)

{
  if (*(long *)(param_1 + 0x188) != 0) {
    *(undefined8 *)(param_1 + 0x180) =
         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x188) + 0x850) + 0x2c);
  }
  return;
}



/* Entry: 10aa22af8; end: 10aa22c7b;  */

void FUN_10aa22af8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 0x108);
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  uStack_48 = 0;
  plVar5 = (long *)0x50;
  __Znwm();
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c3d550;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_DAT_110c69958;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0x3f4000003cf5c28f;
  *(undefined8 *)((long)plVar5 + 0x34) = 0x409000003e800000;
  *(undefined4 *)(plVar5 + 9) = 0x40e00000;
  plVar7 = plVar5;
  plStack_38 = plVar5;
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xe0), lVar6 != 0)) &&
     (___dynamic_cast(lVar6,&PTR_DAT_110bb37d0,&PTR_DAT_110c69e38,0), lVar6 != 0)) {
    uStack_50 = *(ulong *)(lVar6 + 0x110);
    uStack_48 = *(undefined1 *)(lVar6 + 0x118);
    plVar7 = *(long **)(lVar6 + 0x128);
    plStack_38 = *(long **)(lVar6 + 0x128);
    plStack_40 = *(long **)(lVar6 + 0x120);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar4 = (uint)uStack_50;
  uStack_50 = CONCAT44(1,uVar4 & 0xfffffffb);
  FUN_10ac8f90c(&uStack_50,param_2);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10aa22c7c; end: 10aa22c83;  */

void FUN_10aa22c7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 0x28);
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  uStack_48 = 0;
  plVar5 = (long *)0x50;
  __Znwm();
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c3d550;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_DAT_110c69958;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0x3f4000003cf5c28f;
  *(undefined8 *)((long)plVar5 + 0x34) = 0x409000003e800000;
  *(undefined4 *)(plVar5 + 9) = 0x40e00000;
  plVar7 = plVar5;
  plStack_38 = plVar5;
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xe0), lVar6 != 0)) &&
     (___dynamic_cast(lVar6,&PTR_DAT_110bb37d0,&PTR_DAT_110c69e38,0), lVar6 != 0)) {
    uStack_50 = *(ulong *)(lVar6 + 0x110);
    uStack_48 = *(undefined1 *)(lVar6 + 0x118);
    plVar7 = *(long **)(lVar6 + 0x128);
    plStack_38 = *(long **)(lVar6 + 0x128);
    plStack_40 = *(long **)(lVar6 + 0x120);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar4 = (uint)uStack_50;
  uStack_50 = CONCAT44(1,uVar4 & 0xfffffffb);
  FUN_10ac8f90c(&uStack_50,param_2);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10aa22c84; end: 10aa2302b;  */

void FUN_10aa22c84(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  long lVar7;
  long *plVar8;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong unaff_d8;
  ulong uVar18;
  ulong unaff_d9;
  ulong uVar19;
  ulong unaff_d10;
  ulong uVar20;
  ulong unaff_d11;
  ulong uVar21;
  ulong unaff_d12;
  ulong uVar22;
  ulong unaff_d13;
  ulong uVar23;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = param_2[0x29];
    unaff_x19 = param_1;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      unaff_x21 = (long *)*plVar6;
      unaff_x20 = *(long **)(lVar5 + 0x10);
      if (unaff_x20 == unaff_x21) {
        unaff_x25 = 0;
        unaff_x22 = 0;
        unaff_d9 = 0x7f7fffff;
        unaff_d8 = 0xff7fffff;
        plVar8 = param_1;
        unaff_d10 = unaff_d9;
        unaff_d11 = unaff_d8;
        unaff_d12 = unaff_d8;
        unaff_d13 = unaff_d9;
      }
      else {
        *(long *)((long)register0x00000008 + -0x150) = lVar5;
        *(long **)((long)register0x00000008 + -0x148) = plVar6;
        *(long **)((long)register0x00000008 + -0x140) = param_1;
        unaff_x22 = 0;
        uVar9 = 0;
        uVar18 = 0xff7fffff;
        uVar19 = 0x7f7fffff;
        unaff_x26 = 0xaaaaaaaaaaaaaaab;
        unaff_d14 = 0x3f0000003f000000;
        unaff_d15 = 0x3f000000;
        uVar20 = uVar19;
        uVar21 = uVar18;
        uVar22 = uVar18;
        uVar23 = uVar19;
        do {
          plVar6 = unaff_x21 + 2;
          lVar7 = *unaff_x21;
          unaff_x23 = *(long *)(lVar7 + 0x28);
          unaff_x27 = *(long *)(lVar7 + 0x30);
          lVar5 = *(long *)(lVar7 + 0x40);
          unaff_x28 = *(long *)(lVar7 + 0x48);
          uVar10 = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)((long)register0x00000008 + -0x120) = uVar10;
          *(undefined4 *)((long)register0x00000008 + -0x11c) = uVar10;
          *(undefined4 *)((long)register0x00000008 + -0x118) = uVar10;
          FUN_10a45f7b0((undefined1 *)((long)register0x00000008 + -0x108),lVar7 + 4,lVar7 + 0x10,
                        (undefined1 *)((long)register0x00000008 + -0x120));
          fVar13 = *(float *)(lVar7 + 0xb4);
          fVar16 = (float)*(undefined8 *)(lVar7 + 0xac);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar7 + 0xac) >> 0x20);
          fVar14 = ((float)*(undefined8 *)(lVar7 + 0xa0) + fVar16) * 0.5;
          fVar15 = ((float)((ulong)*(undefined8 *)(lVar7 + 0xa0) >> 0x20) + fVar17) * 0.5;
          fVar11 = (*(float *)(lVar7 + 0xa8) + fVar13) * 0.5;
          *(float *)((long)register0x00000008 + -0x120) = fVar14;
          *(ulong *)((long)register0x00000008 + -0x114) = CONCAT44(fVar17 - fVar15,fVar16 - fVar14);
          *(ulong *)((long)register0x00000008 + -0x11c) = CONCAT44(fVar11,fVar15);
          *(float *)((long)register0x00000008 + -0x10c) = fVar13 - fVar11;
          param_1 = (long *)((long)register0x00000008 + -0x120);
          param_2 = (long *)((long)register0x00000008 + -0x108);
          FUN_10a005448((undefined1 *)((long)register0x00000008 + -0x138));
          unaff_x22 = unaff_x22 + (unaff_x27 - unaff_x23 >> 2) * -0x5555555555555555;
          uVar9 = uVar9 + (unaff_x28 - lVar5 >> 2);
          fVar11 = *(float *)((long)register0x00000008 + -0x138) -
                   *(float *)((long)register0x00000008 + -300);
          fVar13 = *(float *)((long)register0x00000008 + -0x134) -
                   *(float *)((long)register0x00000008 + -0x128);
          fVar14 = *(float *)((long)register0x00000008 + -0x130) -
                   *(float *)((long)register0x00000008 + -0x124);
          unaff_d10 = (ulong)(uint)fVar11;
          if ((float)uVar20 <= fVar11) {
            unaff_d10 = uVar20;
          }
          unaff_d13 = (ulong)(uint)fVar13;
          if ((float)uVar23 <= fVar13) {
            unaff_d13 = uVar23;
          }
          unaff_d9 = (ulong)(uint)fVar14;
          if ((float)uVar19 <= fVar14) {
            unaff_d9 = uVar19;
          }
          fVar11 = *(float *)((long)register0x00000008 + -0x138) +
                   *(float *)((long)register0x00000008 + -300);
          fVar13 = *(float *)((long)register0x00000008 + -0x134) +
                   *(float *)((long)register0x00000008 + -0x128);
          fVar14 = *(float *)((long)register0x00000008 + -0x130) +
                   *(float *)((long)register0x00000008 + -0x124);
          unaff_d11 = (ulong)(uint)fVar11;
          if (fVar11 <= (float)uVar21) {
            unaff_d11 = uVar21;
          }
          unaff_d12 = (ulong)(uint)fVar13;
          if (fVar13 <= (float)uVar22) {
            unaff_d12 = uVar22;
          }
          unaff_d8 = (ulong)(uint)fVar14;
          if (fVar14 <= (float)uVar18) {
            unaff_d8 = uVar18;
          }
          unaff_x21 = plVar6;
          uVar18 = unaff_d8;
          uVar19 = unaff_d9;
          uVar20 = unaff_d10;
          uVar21 = unaff_d11;
          uVar22 = unaff_d12;
          uVar23 = unaff_d13;
        } while (plVar6 != unaff_x20);
        unaff_x25 = uVar9 / 3;
        plVar6 = *(long **)((long)register0x00000008 + -0x148);
        unaff_x21 = *(long **)(*(long *)((long)register0x00000008 + -0x150) + 8);
        unaff_x20 = *(long **)(*(long *)((long)register0x00000008 + -0x150) + 0x10);
        plVar8 = *(long **)((long)register0x00000008 + -0x140);
      }
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -199);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      plVar3 = (long *)plVar8[0x23];
      plVar4 = unaff_x21;
      if (plVar8[0x24] - plVar8[0x23] == (long)unaff_x20 - (long)unaff_x21) {
        do {
          if (plVar3 == (long *)plVar8[0x24]) {
            if (((((((int)plVar8[0x28] == (int)unaff_x25) &&
                   (*(int *)((long)plVar8 + 0x144) == (int)unaff_x22)) &&
                  ((char)plVar8[0x29] == '\x04')) &&
                 ((*(float *)(plVar8 + 0x2c) == (float)unaff_d10 &&
                  (*(float *)((long)plVar8 + 0x164) == (float)unaff_d13)))) &&
                ((*(float *)(plVar8 + 0x2d) == (float)unaff_d9 &&
                 ((*(float *)((long)plVar8 + 0x16c) == (float)unaff_d11 &&
                  (*(float *)(plVar8 + 0x2e) == (float)unaff_d12)))))) &&
               (unaff_x19 = param_1, *(float *)((long)plVar8 + 0x174) == (float)unaff_d8))
            goto LAB_10aa22fc4;
            break;
          }
          lVar5 = *plVar3;
          lVar7 = *plVar4;
          plVar3 = plVar3 + 2;
          plVar4 = plVar4 + 2;
        } while (lVar5 == lVar7);
      }
      if (plVar8 + 0x23 != plVar6) {
        param_2 = unaff_x21;
        FUN_10aa3dd9c(plVar8 + 0x23,unaff_x21,unaff_x20,(long)unaff_x20 - (long)unaff_x21 >> 4);
      }
      *(int *)(plVar8 + 0x28) = (int)unaff_x25;
      *(int *)((long)plVar8 + 0x144) = (int)unaff_x22;
      *(undefined1 *)(plVar8 + 0x29) = 4;
      plVar8[0x2b] = *(long *)((long)register0x00000008 + -0xb8);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -199);
      *(undefined8 *)((long)plVar8 + 0x151) = *(undefined8 *)((long)register0x00000008 + -0xbf);
      *(undefined8 *)((long)plVar8 + 0x149) = uVar12;
      *(float *)(plVar8 + 0x2c) = (float)unaff_d10;
      *(float *)((long)plVar8 + 0x164) = (float)unaff_d13;
      *(float *)(plVar8 + 0x2d) = (float)unaff_d9;
      *(float *)((long)plVar8 + 0x16c) = (float)unaff_d11;
      *(float *)(plVar8 + 0x2e) = (float)unaff_d12;
      *(float *)((long)plVar8 + 0x174) = (float)unaff_d8;
      plVar6 = (long *)plVar8[0x27];
      unaff_x19 = plVar6;
      if (plVar6 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        *(long **)((long)register0x00000008 + -0x100) = plVar6;
        unaff_x19 = plVar6;
        if (plVar6 != (long *)0x0) {
          unaff_x19 = (long *)plVar8[0x26];
          *(long **)((long)register0x00000008 + -0x108) = unaff_x19;
          if (unaff_x19 != (long *)0x0) {
            param_2 = (long *)plVar8[0x23];
            FUN_10aa22328(unaff_x19,param_2,plVar8[0x24] - (long)param_2 >> 4,plVar8 + 0x28);
          }
          plVar8 = plVar6 + 1;
          do {
            lVar5 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          unaff_x20 = plVar6;
          if (lVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            unaff_x19 = plVar6;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
LAB_10aa22fc4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010aa63334((undefined1 *)((long)register0x00000008 + -0x108));
    unaff_x30 = FUN_10aa2302c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1c;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
  } while( true );
}



/* Entry: 10aa2302c; end: 10aa23033;  */

void FUN_10aa2302c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  ulong uVar9;
  ulong unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  ulong unaff_d8;
  ulong uVar19;
  ulong unaff_d9;
  ulong uVar20;
  ulong unaff_d10;
  ulong uVar21;
  ulong unaff_d11;
  ulong uVar22;
  ulong unaff_d12;
  ulong uVar23;
  ulong unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  do {
    param_1 = param_1 + -0x1c;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = param_2[0x29];
    unaff_x19 = param_1;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      unaff_x21 = (long *)*plVar6;
      unaff_x20 = *(long **)(lVar5 + 0x10);
      if (unaff_x20 == unaff_x21) {
        unaff_x25 = 0;
        unaff_x22 = 0;
        unaff_d9 = 0x7f7fffff;
        unaff_d8 = 0xff7fffff;
        plVar8 = param_1;
        unaff_d10 = unaff_d9;
        unaff_d11 = unaff_d8;
        unaff_d12 = unaff_d8;
        unaff_d13 = unaff_d9;
      }
      else {
        *(long *)((long)register0x00000008 + -0x150) = lVar5;
        *(long **)((long)register0x00000008 + -0x148) = plVar6;
        *(long **)((long)register0x00000008 + -0x140) = param_1;
        unaff_x22 = 0;
        uVar9 = 0;
        uVar18 = 0xff7fffff;
        uVar19 = 0x7f7fffff;
        unaff_x26 = 0xaaaaaaaaaaaaaaab;
        unaff_d14 = 0x3f0000003f000000;
        unaff_d15 = 0x3f000000;
        uVar20 = uVar19;
        uVar21 = uVar18;
        uVar22 = uVar18;
        uVar23 = uVar19;
        do {
          plVar6 = unaff_x21 + 2;
          lVar7 = *unaff_x21;
          unaff_x23 = *(long *)(lVar7 + 0x28);
          unaff_x27 = *(long *)(lVar7 + 0x30);
          lVar5 = *(long *)(lVar7 + 0x40);
          unaff_x28 = *(long *)(lVar7 + 0x48);
          uVar10 = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)((long)register0x00000008 + -0x120) = uVar10;
          *(undefined4 *)((long)register0x00000008 + -0x11c) = uVar10;
          *(undefined4 *)((long)register0x00000008 + -0x118) = uVar10;
          FUN_10a45f7b0((undefined1 *)((long)register0x00000008 + -0x108),lVar7 + 4,lVar7 + 0x10,
                        (undefined1 *)((long)register0x00000008 + -0x120));
          fVar13 = *(float *)(lVar7 + 0xb4);
          fVar16 = (float)*(undefined8 *)(lVar7 + 0xac);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar7 + 0xac) >> 0x20);
          fVar14 = ((float)*(undefined8 *)(lVar7 + 0xa0) + fVar16) * 0.5;
          fVar15 = ((float)((ulong)*(undefined8 *)(lVar7 + 0xa0) >> 0x20) + fVar17) * 0.5;
          fVar11 = (*(float *)(lVar7 + 0xa8) + fVar13) * 0.5;
          *(float *)((long)register0x00000008 + -0x120) = fVar14;
          *(ulong *)((long)register0x00000008 + -0x114) = CONCAT44(fVar17 - fVar15,fVar16 - fVar14);
          *(ulong *)((long)register0x00000008 + -0x11c) = CONCAT44(fVar11,fVar15);
          *(float *)((long)register0x00000008 + -0x10c) = fVar13 - fVar11;
          param_1 = (long *)((long)register0x00000008 + -0x120);
          param_2 = (long *)((long)register0x00000008 + -0x108);
          FUN_10a005448((undefined1 *)((long)register0x00000008 + -0x138));
          unaff_x22 = unaff_x22 + (unaff_x27 - unaff_x23 >> 2) * -0x5555555555555555;
          uVar9 = uVar9 + (unaff_x28 - lVar5 >> 2);
          fVar11 = *(float *)((long)register0x00000008 + -0x138) -
                   *(float *)((long)register0x00000008 + -300);
          fVar13 = *(float *)((long)register0x00000008 + -0x134) -
                   *(float *)((long)register0x00000008 + -0x128);
          fVar14 = *(float *)((long)register0x00000008 + -0x130) -
                   *(float *)((long)register0x00000008 + -0x124);
          unaff_d10 = (ulong)(uint)fVar11;
          if ((float)uVar20 <= fVar11) {
            unaff_d10 = uVar20;
          }
          unaff_d13 = (ulong)(uint)fVar13;
          if ((float)uVar23 <= fVar13) {
            unaff_d13 = uVar23;
          }
          unaff_d9 = (ulong)(uint)fVar14;
          if ((float)uVar19 <= fVar14) {
            unaff_d9 = uVar19;
          }
          fVar11 = *(float *)((long)register0x00000008 + -0x138) +
                   *(float *)((long)register0x00000008 + -300);
          fVar13 = *(float *)((long)register0x00000008 + -0x134) +
                   *(float *)((long)register0x00000008 + -0x128);
          fVar14 = *(float *)((long)register0x00000008 + -0x130) +
                   *(float *)((long)register0x00000008 + -0x124);
          unaff_d11 = (ulong)(uint)fVar11;
          if (fVar11 <= (float)uVar21) {
            unaff_d11 = uVar21;
          }
          unaff_d12 = (ulong)(uint)fVar13;
          if (fVar13 <= (float)uVar22) {
            unaff_d12 = uVar22;
          }
          unaff_d8 = (ulong)(uint)fVar14;
          if (fVar14 <= (float)uVar18) {
            unaff_d8 = uVar18;
          }
          unaff_x21 = plVar6;
          uVar18 = unaff_d8;
          uVar19 = unaff_d9;
          uVar20 = unaff_d10;
          uVar21 = unaff_d11;
          uVar22 = unaff_d12;
          uVar23 = unaff_d13;
        } while (plVar6 != unaff_x20);
        unaff_x25 = uVar9 / 3;
        plVar6 = *(long **)((long)register0x00000008 + -0x148);
        unaff_x21 = *(long **)(*(long *)((long)register0x00000008 + -0x150) + 8);
        unaff_x20 = *(long **)(*(long *)((long)register0x00000008 + -0x150) + 0x10);
        plVar8 = *(long **)((long)register0x00000008 + -0x140);
      }
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -199);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      plVar3 = (long *)plVar8[0x23];
      plVar4 = unaff_x21;
      if (plVar8[0x24] - plVar8[0x23] == (long)unaff_x20 - (long)unaff_x21) {
        do {
          if (plVar3 == (long *)plVar8[0x24]) {
            if (((((((int)plVar8[0x28] == (int)unaff_x25) &&
                   (*(int *)((long)plVar8 + 0x144) == (int)unaff_x22)) &&
                  ((char)plVar8[0x29] == '\x04')) &&
                 ((*(float *)(plVar8 + 0x2c) == (float)unaff_d10 &&
                  (*(float *)((long)plVar8 + 0x164) == (float)unaff_d13)))) &&
                ((*(float *)(plVar8 + 0x2d) == (float)unaff_d9 &&
                 ((*(float *)((long)plVar8 + 0x16c) == (float)unaff_d11 &&
                  (*(float *)(plVar8 + 0x2e) == (float)unaff_d12)))))) &&
               (unaff_x19 = param_1, *(float *)((long)plVar8 + 0x174) == (float)unaff_d8))
            goto LAB_10aa22fc4;
            break;
          }
          lVar5 = *plVar3;
          lVar7 = *plVar4;
          plVar3 = plVar3 + 2;
          plVar4 = plVar4 + 2;
        } while (lVar5 == lVar7);
      }
      if (plVar8 + 0x23 != plVar6) {
        param_2 = unaff_x21;
        FUN_10aa3dd9c(plVar8 + 0x23,unaff_x21,unaff_x20,(long)unaff_x20 - (long)unaff_x21 >> 4);
      }
      *(int *)(plVar8 + 0x28) = (int)unaff_x25;
      *(int *)((long)plVar8 + 0x144) = (int)unaff_x22;
      *(undefined1 *)(plVar8 + 0x29) = 4;
      plVar8[0x2b] = *(long *)((long)register0x00000008 + -0xb8);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -199);
      *(undefined8 *)((long)plVar8 + 0x151) = *(undefined8 *)((long)register0x00000008 + -0xbf);
      *(undefined8 *)((long)plVar8 + 0x149) = uVar12;
      *(float *)(plVar8 + 0x2c) = (float)unaff_d10;
      *(float *)((long)plVar8 + 0x164) = (float)unaff_d13;
      *(float *)(plVar8 + 0x2d) = (float)unaff_d9;
      *(float *)((long)plVar8 + 0x16c) = (float)unaff_d11;
      *(float *)(plVar8 + 0x2e) = (float)unaff_d12;
      *(float *)((long)plVar8 + 0x174) = (float)unaff_d8;
      plVar6 = (long *)plVar8[0x27];
      unaff_x19 = plVar6;
      if (plVar6 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        *(long **)((long)register0x00000008 + -0x100) = plVar6;
        unaff_x19 = plVar6;
        if (plVar6 != (long *)0x0) {
          unaff_x19 = (long *)plVar8[0x26];
          *(long **)((long)register0x00000008 + -0x108) = unaff_x19;
          if (unaff_x19 != (long *)0x0) {
            param_2 = (long *)plVar8[0x23];
            FUN_10aa22328(unaff_x19,param_2,plVar8[0x24] - (long)param_2 >> 4,plVar8 + 0x28);
          }
          plVar8 = plVar6 + 1;
          do {
            lVar5 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          unaff_x20 = plVar6;
          if (lVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            unaff_x19 = plVar6;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
LAB_10aa22fc4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010aa63334((undefined1 *)((long)register0x00000008 + -0x108));
    unaff_x30 = FUN_10aa2302c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
  } while( true );
}



/* Entry: 10aa23034; end: 10aa230f7;  */

undefined *** FUN_10aa23034(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa63448;
  puStack_78 = &UNK_10f68bae9;
  uStack_70 = 0x1a;
  ppuVar3 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar3,&pcStack_68,100,param_2);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  if (ppuVar3 == (undefined **)0xc) {
    bVar1 = false;
    if (*pppuVar2 == (undefined **)0x624f747069726353) {
      bVar1 = *(int *)(pppuVar2 + 1) == 0x7463656a;
    }
  }
  else {
    if (ppuVar3 != (undefined **)0x12) {
      return (undefined ***)0x0;
    }
    bVar1 = (*pppuVar2 == (undefined **)0x2e73636973796850 &&
            pppuVar2[1] == (undefined **)0x69617274736e6f43) && *(short *)(pppuVar2 + 2) == 0x746e;
  }
  return (undefined ***)(ulong)bVar1;
}



/* Entry: 10aa230f8; end: 10aa23173;  */

bool FUN_10aa230f8(long *param_1,long param_2)

{
  bool bVar1;
  
  if (param_2 == 0xc) {
    bVar1 = false;
    if (*param_1 == 0x624f747069726353) {
      bVar1 = (int)param_1[1] == 0x7463656a;
    }
  }
  else {
    if (param_2 != 0x12) {
      return false;
    }
    bVar1 = (*param_1 == 0x2e73636973796850 && param_1[1] == 0x69617274736e6f43) &&
            (short)param_1[2] == 0x746e;
  }
  return bVar1;
}



/* Entry: 10aa23174; end: 10aa232db;  */

void FUN_10aa23174(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  puStack_b8 = (undefined *)0x0;
  ppuStack_b0 = (undefined **)0xffffffff00000001;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,0xffffffff);
  puStack_a0 = &UNK_10f68a4a1;
  uStack_98 = 0;
  puStack_90 = &UNK_10f68a4a1;
  uStack_88 = 0;
  uStack_80 = 0xa4;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10aa232dc(param_1,&puStack_b8);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  puStack_b8 = &UNK_10f68b08f;
  uStack_98 = 0xffffffffffffffff;
  puStack_a0 = (undefined *)0x100000064;
  puStack_90 = &UNK_10f68a4a1;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0xa4;
  uStack_68 = 0xffffffff;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10aa635a4();
  FUN_10aa63700(uVar1);
  func_0x00010a004064(param_1);
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  FUN_10a003e74(param_1,&UNK_10f68b09e,10);
  ppuStack_b0 = &puStack_c0;
  puStack_c0 = &DAT_10f68b0b0;
  puStack_b8 = &UNK_10f68b0a9;
  uStack_a8 = 1;
  uStack_98 = 0xffffffffffffffff;
  puStack_a0 = (undefined *)0x100000064;
  puStack_90 = &UNK_10f68a4a1;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0xa4;
  uStack_68 = 0xffffffff;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10aa233b4(param_1,&puStack_b8);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aa232dc; end: 10aa233b3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa23374) */

undefined1  [16] FUN_10aa232dc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68bb04,0x12);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa634a8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa233b4; end: 10aa2341b;  */

ulong FUN_10aa233b4(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa2341c);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10aa637bc,1,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10aa2341c; end: 10aa23503;  */

undefined1  [16] FUN_10aa2341c(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  char *pcVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_88;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 0x38))();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    FUN_10aa2353c();
    FUN_10aa23600(param_2,0);
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_c8 = FUN_10a061484;
    ppuStack_c0 = &PTR_DAT_110b9ec98;
    uStack_b8 = 0x10aa63af0;
    puStack_d8 = &UNK_10f68bc14;
    uStack_d0 = 0x17;
    ppuVar6 = &puStack_d8;
    FUN_10a57077c(param_2,ppuVar6,&pcStack_c8,100,0);
    pppuVar4 = &ppuStack_c0;
    (*(code *)*ppuStack_c0)(pppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      auVar8._8_8_ = ppuVar6;
      auVar8._0_8_ = pppuVar4;
      return auVar8;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_c0)(&ppuStack_c0);
    __Unwind_Resume(pppuVar4);
    auVar9._8_8_ = 0x1b;
    auVar9._0_8_ = &UNK_10f68bb17;
    return auVar9;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppppuVar2 = &ppppuStack_58;
    if (param_3 == 0) goto LAB_10aa234a8;
  }
  else {
    pppppuVar1 = (undefined8 *****)0x19;
    if ((param_3 | 7) != 0x17) {
      pppppuVar1 = (undefined8 *****)((param_3 | 7) + 1);
    }
    pppppuVar2 = pppppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppppuVar1 | 0x8000000000000000;
    ppppuStack_58 = pppppuVar2;
    uStack_50 = param_3;
  }
  _memmove(pppppuVar2,param_2,param_3);
LAB_10aa234a8:
  *(char *)((long)pppppuVar2 + param_3) = '\0';
  pcVar3 = "%s";
  uVar5 = 2;
  FUN_10a0ee900(param_1,"%s",2);
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppppuStack_58);
    pcVar3 = (char *)ppppuStack_58;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = pcVar3;
  return auVar7;
}



/* Entry: 10aa23504; end: 10aa2353b;  */

undefined1  [16] FUN_10aa23504(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  FUN_10aa2353c(param_1,0);
  FUN_10aa23600(param_1,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10aa63af0;
  puStack_78 = &UNK_10f68bc14;
  uStack_70 = 0x17;
  ppuVar2 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar2,&pcStack_68,100,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar3._8_8_ = ppuVar2;
    auVar3._0_8_ = pppuVar1;
    return auVar3;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  auVar4._8_8_ = 0x1b;
  auVar4._0_8_ = &UNK_10f68bb17;
  return auVar4;
}



/* Entry: 10aa2353c; end: 10aa235ff;  */

undefined1  [16] FUN_10aa2353c(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  long lStack_128;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10aa63a6c;
  puStack_78 = &UNK_10f68bb72;
  uStack_70 = 0x17;
  ppuVar2 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar2,&pcStack_68,100,param_2);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar3._8_8_ = ppuVar2;
    auVar3._0_8_ = pppuVar1;
    return auVar3;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a061484;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10aa63aa0;
  puStack_f8 = &UNK_10f68bb8a;
  uStack_f0 = 0x17;
  ppuVar2 = &puStack_f8;
  FUN_10a57077c();
  pppuVar1 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar4._8_8_ = ppuVar2;
    auVar4._0_8_ = pppuVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar1);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_168 = FUN_10a061484;
  ppuStack_160 = &PTR_DAT_110b9ec98;
  uStack_158 = 0x10aa63af0;
  puStack_178 = &UNK_10f68bc14;
  uStack_170 = 0x17;
  ppuVar2 = &puStack_178;
  FUN_10a57077c();
  pppuVar1 = &ppuStack_160;
  (*(code *)*ppuStack_160)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    auVar5._8_8_ = ppuVar2;
    auVar5._0_8_ = pppuVar1;
    return auVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  __Unwind_Resume(pppuVar1);
  auVar6._8_8_ = 0x1b;
  auVar6._0_8_ = &UNK_10f68bb17;
  return auVar6;
}



/* Entry: 10aa23600; end: 10aa236c3;  */

undefined1  [16] FUN_10aa23600(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10aa63aa0;
  puStack_78 = &UNK_10f68bb8a;
  uStack_70 = 0x17;
  ppuVar2 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar2,&pcStack_68,100,param_2);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar3._8_8_ = ppuVar2;
    auVar3._0_8_ = pppuVar1;
    return auVar3;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a061484;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  uStack_d8 = 0x10aa63af0;
  puStack_f8 = &UNK_10f68bc14;
  uStack_f0 = 0x17;
  ppuVar2 = &puStack_f8;
  FUN_10a57077c();
  pppuVar1 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar4._8_8_ = ppuVar2;
    auVar4._0_8_ = pppuVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar1);
  auVar5._8_8_ = 0x1b;
  auVar5._0_8_ = &UNK_10f68bb17;
  return auVar5;
}



/* Entry: 10aa236c4; end: 10aa23787;  */

undefined1  [16] FUN_10aa236c4(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10aa63af0;
  puStack_78 = &UNK_10f68bc14;
  uStack_70 = 0x17;
  ppuVar2 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar2,&pcStack_68,100,param_2);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar3._8_8_ = ppuVar2;
    auVar3._0_8_ = pppuVar1;
    return auVar3;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  auVar4._8_8_ = 0x1b;
  auVar4._0_8_ = &UNK_10f68bb17;
  return auVar4;
}



/* Entry: 10aa23788; end: 10aa2386b;  */

undefined1  [16] FUN_10aa23788(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f68bb17;
  return auVar1;
}



/* Entry: 10aa2386c; end: 10aa23c77;  */

void FUN_10aa2386c(ulong param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_d8;
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(&uStack_d8,&UNK_10f68bb17,0x1b);
  ppuVar1 = (undefined **)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
  if (-1 < cStack_c1) {
    ppuVar1 = (undefined **)&uStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b150;
  ppuVar2 = (undefined **)&UNK_10f68a4a1;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0xa4;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = ppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c3b150;
    uStack_b8 = 0;
    ppuStack_b0 = &PTR_DAT_110bd31d8;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,ppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa23c58;
    FUN_10a054dac(param_1,&UNK_10f68b0c1,FUN_10aa63b28,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f638ab2,FUN_10aa63d0c,FUN_10aa63dc4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"constraint",FUN_10aa63f44,FUN_10aa64078);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a64d,FUN_10aa642e8,FUN_10aa643a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b0d0,FUN_10aa64470,FUN_10aa64530);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f68bb17,0x1b);
      FUN_10a05431c(param_1);
    }
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x200000064;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined **)&UNK_10f68b14a;
    puStack_88 = &UNK_10f68a4a1;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0x11a;
    uStack_60._0_4_ = 0x171;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_10aa249a4(param_1,&ppuStack_b0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined **)&UNK_10f68b159;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    uStack_80 = 0;
    puStack_88 = (undefined *)0x0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0x11a;
    uStack_60._0_4_ = 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_d8._0_4_ = 0;
    FUN_10aa249fc(param_1,&ppuStack_b0,&uStack_d8);
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined **)&UNK_10f68b165;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    uStack_80 = 0;
    puStack_88 = (undefined *)0x0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_68 = 0x11a;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_d8._0_4_ = 1;
    FUN_10aa249fc(param_1,&ppuStack_b0,&uStack_d8);
    FUN_10a003ff4(param_1);
    return;
  }
LAB_10aa23c58:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa23c5c);
  (*pcVar6)();
}



/* Entry: 10aa23c78; end: 10aa23cbb;  */

void FUN_10aa23c78(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x4b);
  func_0x00010aa4dd04(param_1 + 0x40);
  if (param_1[0x3f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3afe8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x52] = &PTR_DAT_110c3b118;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10aa23cbc; end: 10aa23cf7;  */

void FUN_10aa23cbc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x4b);
  func_0x00010aa4dd04(param_1 + 0x40);
  if (param_1[0x3f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110c3afe8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x52] = &PTR_DAT_110c3b118;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10aa23cf8; end: 10aa23d83;  */

void FUN_10aa23cf8(void)

{
  FUN_10aa23c78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa23d84; end: 10aa23db3;  */

void FUN_10aa23d84(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10aa23c78((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10aa23db4; end: 10aa2409f;  */

long * FUN_10aa23db4(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  code *pcStack_90;
  undefined **ppuStack_88;
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_49;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  lStack_68 = param_1 + 0x1f0;
  pcStack_78 = FUN_10aa6462c;
  ppuStack_70 = &PTR_FUN_110c3ce00;
  uStack_60 = 0x746567726174;
  uStack_49 = 6;
  func_0x000107c2b054(&pcStack_90,&UNK_10f68a4a1);
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c39800,&pcStack_78,0,&pcStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(pcStack_90);
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (((ulong)plVar7 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_constraint_110c39820);
  (**(code **)(*param_2 + 600))(&pcStack_78,param_2,0);
  ppcVar10 = &pcStack_90;
  if ((pcStack_78 != (code *)0x0) &&
     (pcVar6 = pcStack_78, ___dynamic_cast(pcStack_78,&PTR_DAT_110b9fe10,&PTR_DAT_110c3af98,0x18),
     ppcVar10 = &pcStack_90, pcVar6 != (code *)0x0)) {
    ppuStack_88 = ppuStack_70;
    ppcVar10 = &pcStack_78;
    pcStack_90 = pcVar6;
  }
  *ppcVar10 = (code *)0x0;
  ppcVar10[1] = (code *)0x0;
  ppuVar9 = ppuStack_70;
  if (ppuStack_70 != (undefined **)0x0) {
    ppuVar1 = ppuStack_70 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  while( true ) {
    FUN_10aa240a0(param_1 + 0x200,&pcStack_90);
    ppuVar9 = ppuStack_88;
    if (ppuStack_88 != (undefined **)0x0) {
      ppuVar1 = ppuStack_88 + 1;
      do {
        puVar11 = *ppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = puVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3b680,0);
    *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) & 0xfe | (byte)plVar7;
    ppuVar9 = &PTR_DAT_110c3b6a0;
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3b6a0,1);
    bVar3 = 0;
    if ((int)plVar7 == 0) {
      bVar3 = 2;
    }
    *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) & 0xfd | bVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return plVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 1) {
      __Unwind_Resume();
      puVar13 = ppuVar9[1];
      puVar11 = *ppuVar9;
      *ppuVar9 = (undefined *)0x0;
      ppuVar9[1] = (undefined *)0x0;
      plVar12 = (long *)plVar7[1];
      plVar7[1] = (long)puVar13;
      *plVar7 = (long)puVar11;
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          lVar8 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      return plVar7;
    }
    ___cxa_begin_catch(plVar7);
    plVar12 = param_2;
    FUN_10a0ffa94(param_2,plVar7);
    if ((int)plVar12 != 0) break;
    ___cxa_end_catch();
    pcStack_90 = (code *)0x0;
    ppuStack_88 = (undefined **)0x0;
  }
  ___cxa_rethrow();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa24048);
  (*pcVar6)();
}



/* Entry: 10aa240a0; end: 10aa241af;  */

undefined8 * FUN_10aa240a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aa241b0; end: 10aa243df;  */

/* WARNING: Removing unreachable block (ram,0x00010aa24364) */

void FUN_10aa241b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0x69617274736e6f43;
  *puVar4 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x746e656e6f706d6f;
  *(undefined8 *)((long)puVar4 + 0xb) = 0x43746e6961727473;
  *(undefined1 *)((long)puVar4 + 0x1b) = 0;
  lVar6 = *(long *)(param_2 + 0x168);
  do {
    if (lVar6 == 0) {
LAB_10aa242e4:
      plVar5 = *(long **)(param_2 + 0x1f8);
      if ((plVar5 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
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
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      FUN_10a0ee900(param_1,&UNK_10f68b0fe,0x2c);
      __ZdlPv(puVar4);
      return;
    }
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,0x1663061754011abf);
        if (plVar5 != (long *)0x0) {
          if ((*(ushort *)(plVar5 + 0x30) & 0x17) == 0) goto LAB_10aa242e4;
          break;
        }
      }
    }
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,0xeb76020423cc3559);
        if (plVar5 != (long *)0x0) break;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x188);
  } while( true );
}



/* Entry: 10aa243e0; end: 10aa243e7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa24364) */

void FUN_10aa243e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0x69617274736e6f43;
  *puVar4 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x746e656e6f706d6f;
  *(undefined8 *)((long)puVar4 + 0xb) = 0x43746e6961727473;
  *(undefined1 *)((long)puVar4 + 0x1b) = 0;
  lVar6 = *(long *)(param_2 + 0x158);
  do {
    if (lVar6 == 0) {
LAB_10aa242e4:
      plVar5 = *(long **)(param_2 + 0x1e8);
      if ((plVar5 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
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
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      FUN_10a0ee900(param_1,&UNK_10f68b0fe,0x2c);
      __ZdlPv(puVar4);
      return;
    }
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,0x1663061754011abf);
        if (plVar5 != (long *)0x0) {
          if ((*(ushort *)(plVar5 + 0x30) & 0x17) == 0) goto LAB_10aa242e4;
          break;
        }
      }
    }
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,0xeb76020423cc3559);
        if (plVar5 != (long *)0x0) break;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x188);
  } while( true );
}



/* Entry: 10aa243e8; end: 10aa245d3;  */

void FUN_10aa243e8(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar5 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar2 = &lStack_50;
    if (param_4 != 0) {
      puVar5 = (undefined8 *)(param_4 + 0x28);
      plVar2 = (long *)(param_4 + 0x20);
    }
    uVar10 = *puVar5;
    lVar9 = *plVar2;
  }
  FUN_10aa4fc94(&lStack_60,*(undefined8 *)(param_2 + 0x170),lVar9,uVar10);
  lVar9 = lStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_60 + 0x150,param_2 + 0x150);
  uVar3 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(lVar9 + 0x180) & 0xfffc;
  *(ushort *)(lVar9 + 0x180) = uVar4 | *(ushort *)(lVar9 + 0x180) & 1 | uVar3;
  *(ushort *)(lVar9 + 0x180) = uVar4 | uVar3 | *(ushort *)(param_2 + 0x180) & 1;
  lStack_50 = lVar9;
  plStack_48 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar9 = lStack_60;
  *(undefined1 *)(lStack_60 + 0x210) = *(undefined1 *)(param_2 + 0x210);
  uVar11 = *(undefined8 *)(param_2 + 0x1f8);
  uVar10 = *(undefined8 *)(param_2 + 0x1f0);
  if (*(long *)(param_2 + 0x1f8) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 0x1f8) + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar8 = *(long *)(lStack_60 + 0x1f8);
  *(undefined8 *)(lStack_60 + 0x1f8) = uVar11;
  *(undefined8 *)(lStack_60 + 0x1f0) = uVar10;
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  (**(code **)(**(long **)(param_2 + 0x200) + 0x58))(&lStack_50);
  FUN_10aa240a0(lVar9 + 0x200,&lStack_50);
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  param_1[1] = (long)plStack_58;
  *param_1 = lStack_60;
  return;
}



/* Entry: 10aa245d4; end: 10aa246b7;  */

void FUN_10aa245d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = *(long **)(param_1 + 0x1f8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x1f0);
      goto LAB_10aa2461c;
    }
  }
  uVar5 = 0;
LAB_10aa2461c:
  lVar6 = *(long *)(param_1 + 0x178);
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  FUN_10aa246b8(&uStack_70,uVar5,lVar6 + 0xc0);
  *(undefined8 *)(param_1 + 0x21c) = uStack_68;
  *(undefined8 *)(param_1 + 0x214) = uStack_70;
  *(undefined8 *)(param_1 + 0x22c) = uStack_58;
  *(undefined8 *)(param_1 + 0x224) = uStack_60;
  *(undefined8 *)(param_1 + 0x23c) = uStack_48;
  *(undefined8 *)(param_1 + 0x234) = uStack_50;
  *(undefined8 *)(param_1 + 0x24c) = uStack_38;
  *(undefined8 *)(param_1 + 0x244) = uStack_40;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa246b8; end: 10aa2474b;  */

void FUN_10aa246b8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  if (param_2 == 0) {
    uVar2 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    param_1[1] = param_3[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar2 = param_3[4];
    uVar4 = param_3[7];
    uVar3 = param_3[6];
    param_1[5] = param_3[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x178);
    if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar1);
    }
    func_0x00010a008c90(auStack_70,lVar1 + 0xc0);
    FUN_10a3e939c(auStack_b0,auStack_70,&UNK_10e482b48);
    func_0x000109519fd0(param_1,auStack_b0,param_3);
  }
  return;
}



/* Entry: 10aa2474c; end: 10aa2477b;  */

void FUN_10aa2474c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = *(long **)(param_1 + 400);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x188);
      goto LAB_10aa2461c;
    }
  }
  uVar5 = 0;
LAB_10aa2461c:
  lVar6 = *(long *)(param_1 + 0x110);
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  FUN_10aa246b8(&uStack_70,uVar5,lVar6 + 0xc0);
  *(undefined8 *)(param_1 + 0x1b4) = uStack_68;
  *(undefined8 *)(param_1 + 0x1ac) = uStack_70;
  *(undefined8 *)(param_1 + 0x1c4) = uStack_58;
  *(undefined8 *)(param_1 + 0x1bc) = uStack_60;
  *(undefined8 *)(param_1 + 0x1d4) = uStack_48;
  *(undefined8 *)(param_1 + 0x1cc) = uStack_50;
  *(undefined8 *)(param_1 + 0x1e4) = uStack_38;
  *(undefined8 *)(param_1 + 0x1dc) = uStack_40;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa2477c; end: 10aa2483f;  */

void FUN_10aa2477c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10aa64774;
  puStack_78 = &UNK_10f68bb17;
  uStack_70 = 0x1b;
  ppuVar7 = &puStack_78;
  FUN_10a57077c(param_1,ppuVar7,&pcStack_68,100,param_2);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  plVar5 = (long *)ppuVar7[1];
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    ppuVar10 = (undefined **)*ppuVar7;
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  ppuVar6 = pppuVar4[0x3f];
  if ((ppuVar6 == (undefined **)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar6 == (undefined **)0x0)) {
    if (ppuVar10 == (undefined **)0x0) {
      return;
    }
  }
  else {
    ppuVar11 = pppuVar4[0x3e];
    ppuVar12 = ppuVar6 + 1;
    do {
      puVar9 = *ppuVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar3) {
        *ppuVar12 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
    if (ppuVar11 == ppuVar10) {
      return;
    }
  }
  ppuVar12 = (undefined **)ppuVar7[1];
  ppuVar6 = (undefined **)*ppuVar7;
  if (ppuVar7[1] != (undefined *)0x0) {
    plVar5 = (long *)(ppuVar7[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuVar7 = pppuVar4[0x3f];
  pppuVar4[0x3f] = ppuVar12;
  pppuVar4[0x3e] = ppuVar6;
  if (ppuVar7 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar7 = pppuVar4[0x2f];
  if ((*(byte *)((long)ppuVar7 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(ppuVar7);
  }
  FUN_10aa246b8(&uStack_100,ppuVar10,ppuVar7 + 0x18);
  *(undefined8 *)((long)pppuVar4 + 0x21c) = uStack_f8;
  *(undefined8 *)((long)pppuVar4 + 0x214) = uStack_100;
  *(undefined8 *)((long)pppuVar4 + 0x22c) = uStack_e8;
  *(undefined8 *)((long)pppuVar4 + 0x224) = uStack_f0;
  *(undefined8 *)((long)pppuVar4 + 0x23c) = uStack_d8;
  *(undefined8 *)((long)pppuVar4 + 0x234) = uStack_e0;
  *(undefined8 *)((long)pppuVar4 + 0x24c) = uStack_c8;
  *(undefined8 *)((long)pppuVar4 + 0x244) = uStack_d0;
  pppuVar4[0x4d] = (undefined **)0xffffffffffffffff;
  pppuVar4[0x4f] = (undefined **)0x0;
  pppuVar4[0x51] = (undefined **)0x0;
  pppuVar4[0x50] = (undefined **)0x0;
  return;
}



/* Entry: 10aa24840; end: 10aa249a3;  */

void FUN_10aa24840(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = (long *)param_2[1];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    lVar8 = 0;
  }
  else {
    lVar8 = *param_2;
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = *(long **)(param_1 + 0x1f8);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x1f0);
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar6 == lVar8) {
      return;
    }
  }
  lVar7 = param_2[1];
  lVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(param_1 + 0x1f8);
  *(long *)(param_1 + 0x1f8) = lVar7;
  *(long *)(param_1 + 0x1f0) = lVar6;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar6 = *(long *)(param_1 + 0x178);
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  FUN_10aa246b8(&uStack_80,lVar8,lVar6 + 0xc0);
  *(undefined8 *)(param_1 + 0x21c) = uStack_78;
  *(undefined8 *)(param_1 + 0x214) = uStack_80;
  *(undefined8 *)(param_1 + 0x22c) = uStack_68;
  *(undefined8 *)(param_1 + 0x224) = uStack_70;
  *(undefined8 *)(param_1 + 0x23c) = uStack_58;
  *(undefined8 *)(param_1 + 0x234) = uStack_60;
  *(undefined8 *)(param_1 + 0x24c) = uStack_48;
  *(undefined8 *)(param_1 + 0x244) = uStack_50;
  *(undefined8 *)(param_1 + 0x268) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  return;
}



/* Entry: 10aa249a4; end: 10aa249fb;  */

ulong FUN_10aa249a4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10aa249fc; end: 10aa24ff3;  */

ulong FUN_10aa249fc(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10aa64780(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aa24ff4; end: 10aa2510f;  */

void FUN_10aa24ff4(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
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
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68b14a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  puStack_70 = &UNK_10f68a4a1;
  uStack_68 = 0;
  uStack_60 = 0x11a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aa249a4(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68b159;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x11a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 0;
  FUN_10aa249fc(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68b165;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x11a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10aa249fc(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aa25110; end: 10aa25183;  */

undefined1  [16] FUN_10aa25110(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f68bb72;
  return auVar1;
}



/* Entry: 10aa25184; end: 10aa25207;  */

void FUN_10aa25184(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  uStack_68 = 0;
  uStack_60 = 0xffffffff00000001;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f68a4a1;
  uStack_48 = 0;
  puStack_40 = &UNK_10f68a4a1;
  uStack_38 = 0;
  uStack_30 = 0xa4;
  uStack_28 = 0xffffffff;
  FUN_10aa25208(param_1,&uStack_68);
  FUN_10aa658f0();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aa25208; end: 10aa252df;  */

/* WARNING: Removing unreachable block (ram,0x00010aa252a0) */

undefined1  [16] FUN_10aa25208(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68bb72,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa657f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa252e0; end: 10aa2530f;  */

undefined8 * FUN_10aa252e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa25310; end: 10aa25323;  */

long FUN_10aa25310(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10aa25324; end: 10aa25387;  */

void FUN_10aa25324(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa25388; end: 10aa2538f;  */

void FUN_10aa25388(void)

{
  return;
}



/* Entry: 10aa25390; end: 10aa25487;  */

void FUN_10aa25390(long *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c3b660,&plStack_30);
  return;
}



/* Entry: 10aa25488; end: 10aa25697;  */

void FUN_10aa25488(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  if (*param_4 == 0) {
    func_0x000109833b2c();
  }
  uVar1 = 0x640;
  func_0x0001098256f4(0x640,0x10);
  func_0x00010982b6c4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10aa25698; end: 10aa257cb;  */

void FUN_10aa25698(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  ulong *param_5,ulong *param_6)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  fVar8 = 10.0;
  if (param_5 != (ulong *)0x0 || param_6 != (ulong *)0x0) {
    puVar1 = param_5;
    if (param_5 == (ulong *)0x0) {
      puVar1 = param_6;
    }
    if (param_6 == (ulong *)0x0) {
      param_6 = param_5;
    }
    uVar5 = *puVar1;
    uVar6 = *param_6;
    uVar5 = uVar5 ^ (uVar5 ^ uVar6) &
                    CONCAT44(-(uint)((float)(uVar5 >> 0x20) < (float)(uVar6 >> 0x20)),
                             -(uint)((float)uVar5 < (float)uVar6));
    fVar8 = *(float *)(param_6 + 1);
    if (*(float *)(param_6 + 1) <= *(float *)(puVar1 + 1)) {
      fVar8 = *(float *)(puVar1 + 1);
    }
    fVar7 = (float)(uVar5 >> 0x20);
    fVar4 = (float)uVar5;
    if (fVar7 <= fVar4) {
      fVar7 = fVar4;
    }
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
  }
  uStack_70 = 0;
  uStack_68 = 0;
  puVar2 = &UNK_10e4eb968;
  if (param_3 == 0) {
    puVar2 = &UNK_10e4eb958;
  }
  lVar3 = 3;
  fVar7 = fVar8 * 0.2;
  do {
    FUN_10aafaae4(fVar7,param_2,param_4,&uStack_70,puVar2,6,4,2);
    fVar7 = fVar7 + fVar8 * -0.030000001;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((param_3 & 1) != 0) {
    FUN_10aafa34c(fVar8 * 0.2,param_2,param_4,&uStack_70,&UNK_10e4eb978,5,4,2);
  }
  return;
}



/* Entry: 10aa257cc; end: 10aa2583f;  */

undefined1  [16] FUN_10aa257cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f68bb8a;
  return auVar1;
}



/* Entry: 10aa25840; end: 10aa2594f;  */

void FUN_10aa25840(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68a4a1;
  uStack_78 = 0;
  puStack_70 = &UNK_10f68a4a1;
  uStack_68 = 0;
  uStack_60 = 0xa4;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10aa25950(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68b196;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa65aa8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68b1a4;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68a4a1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa65e60(uVar1,&puStack_98);
  FUN_10aa66168(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aa25950; end: 10aa25a27;  */

/* WARNING: Removing unreachable block (ram,0x00010aa259e8) */

undefined1  [16] FUN_10aa25950(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68bb8a,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa659ac(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa25a28; end: 10aa25a57;  */

undefined8 * FUN_10aa25a28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa25a58; end: 10aa25a6b;  */

long FUN_10aa25a58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10aa25a6c; end: 10aa25c13;  */

void FUN_10aa25a6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa25c14; end: 10aa25c1b;  */

void FUN_10aa25c14(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3b6c0,0);
  *(char *)(param_1 + 0xc) = (char)plVar1;
  uVar2 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3b6e0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c3b700,0);
  *(int *)(param_1 + 0x14) = (int)plVar1;
  uVar2 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3b720);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c3b740,0);
  *(char *)(param_1 + 0x1c) = (char)plVar1;
  uVar2 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3b760);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3b780);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = 0x3e99999a;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3b7a0);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c3b7c0);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return;
}



/* Entry: 10aa25c1c; end: 10aa25d6b;  */

void FUN_10aa25c1c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c3b660,&plStack_30);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3b6c0,*(undefined1 *)((long)param_1 + 0x24));
  (**(code **)(*param_2 + 0x60))((int)param_1[5],param_2,&PTR_DAT_110c3b6e0);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c3b700,*(undefined4 *)((long)param_1 + 0x2c));
  (**(code **)(*param_2 + 0x60))((int)param_1[6],param_2,&PTR_DAT_110c3b720);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3b740,*(undefined1 *)((long)param_1 + 0x34));
  (**(code **)(*param_2 + 0x60))((int)param_1[7],param_2,&PTR_DAT_110c3b760);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0x3c),param_2,&PTR_DAT_110c3b780);
  (**(code **)(*param_2 + 0x60))((int)param_1[8],param_2,&PTR_DAT_110c3b7a0);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0x44),param_2,&PTR_DAT_110c3b7c0);
  return;
}



/* Entry: 10aa25d6c; end: 10aa25d73;  */

void FUN_10aa25d6c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = (long *)(param_1 + -0x18);
  plVar2 = param_2;
  (**(code **)(*plVar1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c3b660,&plStack_30);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3b6c0,*(undefined1 *)(param_1 + 0xc));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x10),param_2,&PTR_DAT_110c3b6e0);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c3b700,*(undefined4 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x18),param_2,&PTR_DAT_110c3b720);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c3b740,*(undefined1 *)(param_1 + 0x1c));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x20),param_2,&PTR_DAT_110c3b760);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x24),param_2,&PTR_DAT_110c3b780);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x28),param_2,&PTR_DAT_110c3b7a0);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x2c),param_2,&PTR_DAT_110c3b7c0);
  return;
}



/* Entry: 10aa25d74; end: 10aa25deb;  */

void FUN_10aa25d74(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c3cdc0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 7) = 0x100;
  puVar1[6] = &PTR_FUN_110c399a8;
  uVar2 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x44) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)((long)puVar1 + 0x54) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar2;
  *(undefined4 *)((long)puVar1 + 0x5c) = *(undefined4 *)(param_2 + 0x44);
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110c39920;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10aa25dec; end: 10aa26043;  */

void FUN_10aa25dec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  
  if (*param_5 == 0) {
    func_0x000109833b2c();
  }
  uVar1 = 0x370;
  func_0x0001098256f4(0x370,0x10);
  func_0x00010982df04();
  FUN_10aa26044(param_2,param_3,uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10aa26044; end: 10aa26223;  */

void FUN_10aa26044(float param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  if ((param_3 != 0) &&
     (___dynamic_cast(param_3,&PTR_DAT_110b14598,&PTR_DAT_110b14438,0), param_3 != 0)) {
    if (*(char *)(param_2 + 0x34) == '\x01') {
      dVar6 = (double)(float)*(undefined8 *)(param_2 + 0x38);
      dVar8 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
      _fmod();
      _fmod();
      fVar4 = (float)dVar6;
      fVar7 = (float)dVar8;
      fVar5 = fVar7 + 6.2831855;
      uVar2 = CONCAT44(fVar7,fVar4) ^
              (CONCAT44(fVar7,fVar4) ^
              CONCAT17((char)((uint)fVar5 >> 0x18),
                       CONCAT16((char)((uint)fVar5 >> 0x10),
                                CONCAT15((char)((uint)fVar5 >> 8),
                                         CONCAT14(SUB41(fVar5,0),fVar4 + 6.2831855))))) &
              CONCAT44(-(uint)(fVar7 < 0.0),-(uint)(fVar4 < 0.0));
      fVar5 = (float)(uVar2 >> 0x20);
      lVar10 = -(ulong)(3.1415927 <= (float)uVar2);
      lVar12 = -(ulong)(3.1415927 <= fVar5);
      fVar5 = fVar5 + -6.2831855;
      uVar2 = uVar2 ^ (uVar2 ^ CONCAT17((char)((uint)fVar5 >> 0x18),
                                        CONCAT16((char)((uint)fVar5 >> 0x10),
                                                 CONCAT15((char)((uint)fVar5 >> 8),
                                                          CONCAT14(SUB41(fVar5,0),
                                                                   (float)uVar2 + -6.2831855))))) &
                      ~CONCAT44(CONCAT13(~(byte)((ulong)lVar12 >> 0x18),
                                         CONCAT12(~(byte)((ulong)lVar12 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar12 >> 8),~(byte)lVar12
                                                          ))),
                                CONCAT13(~(byte)((ulong)lVar10 >> 0x18),
                                         CONCAT12(~(byte)((ulong)lVar10 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)lVar10 >> 8),~(byte)lVar10
                                                          ))));
      fVar4 = (float)uVar2;
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      iVar9 = -(uint)((float)uVar3 < 0.0);
      iVar11 = -(uint)((float)((ulong)uVar3 >> 0x20) < 0.0);
      fVar5 = ((float)(uVar2 >> 0x20) - fVar4) * 0.5;
      *(float *)(param_3 + 0x31c) = fVar5;
      fVar4 = fVar4 + fVar5;
      _fmodf();
      if (-3.1415927 <= fVar4) {
        if (3.1415927 < fVar4) {
          fVar4 = fVar4 + -6.2831855;
        }
      }
      else {
        fVar4 = fVar4 + 6.2831855;
      }
      *(float *)(param_3 + 0x318) = fVar4;
      *(undefined4 *)(param_3 + 800) = 0x3f666666;
      *(ulong *)(param_3 + 0x324) =
           CONCAT17((byte)((ulong)uVar3 >> 0x38) & ~(byte)((uint)iVar11 >> 0x18),
                    CONCAT16((byte)((ulong)uVar3 >> 0x30) & ~(byte)((uint)iVar11 >> 0x10),
                             CONCAT15((byte)((ulong)uVar3 >> 0x28) & ~(byte)((uint)iVar11 >> 8),
                                      CONCAT14((byte)((ulong)uVar3 >> 0x20) & ~(byte)iVar11,
                                               CONCAT13((byte)((ulong)uVar3 >> 0x18) &
                                                        ~(byte)((uint)iVar9 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar3 >> 0x10) &
                                                                 ~(byte)((uint)iVar9 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar3 >> 8)
                                                                          & ~(byte)((uint)iVar9 >> 8
                                                                                   ),
                                                                          (byte)uVar3 & ~(byte)iVar9
                                                                         )))))));
    }
    cVar1 = *(char *)(param_2 + 0x24);
    *(char *)(param_3 + 0x349) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_3 + 0x314) = *(undefined4 *)(param_2 + 0x28);
      fVar5 = *(float *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x2c) == 0) {
        fVar4 = fVar5;
        func_0x000109833efc(param_3 + 0x318,&stack0xffffffffffffffcc);
        func_0x00010982f5a8(param_3,*(long *)(param_3 + 0x28) + 0x10,
                            *(long *)(param_3 + 0x30) + 0x10);
        *(float *)(param_3 + 0x310) = (fVar5 - fVar4) / param_1;
        return;
      }
      *(float *)(param_3 + 0x310) = fVar5;
    }
  }
  return;
}



/* Entry: 10aa26224; end: 10aa262e3;  */

void FUN_10aa26224(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5
                  ,long param_6)

{
  long lVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (param_5 == 0 && param_6 == 0) {
    fVar5 = 10.0;
    fVar3 = 1.0;
  }
  else {
    lVar1 = param_5;
    if (param_5 == 0) {
      lVar1 = param_6;
    }
    fVar3 = *(float *)(lVar1 + 8);
    if (param_6 == 0) {
      param_6 = param_5;
    }
    fVar4 = *(float *)(param_6 + 8);
    fVar6 = fVar4;
    if (fVar4 <= fVar3) {
      fVar6 = fVar3;
    }
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    fVar5 = 1.0;
    if (1.0 <= fVar6) {
      fVar5 = fVar6;
    }
    fVar3 = 1.0;
    if (1.0 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar3 = fVar3 * 0.1;
  }
  puVar2 = &UNK_10e4eb968;
  if (param_3 == 0) {
    puVar2 = &UNK_10e4eb958;
  }
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10aafb3d8(fVar3,fVar5,fVar3 * 3.0,param_2,1,param_4,&uStack_20,puVar2,6,8,2);
  return;
}



/* Entry: 10aa262e4; end: 10aa26357;  */

undefined1  [16] FUN_10aa262e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f68bc14;
  return auVar1;
}



/* Entry: 10aa26358; end: 10aa263db;  */

void FUN_10aa26358(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  uStack_68 = 0;
  uStack_60 = 0xffffffff00000001;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f68a4a1;
  uStack_48 = 0;
  puStack_40 = &UNK_10f68a4a1;
  uStack_38 = 0;
  uStack_30 = 0xa4;
  uStack_28 = 0xffffffff;
  FUN_10aa263dc(param_1,&uStack_68);
  FUN_10aa66320();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aa263dc; end: 10aa264b3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa26474) */

undefined1  [16] FUN_10aa263dc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68bc14,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa66224(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa264b4; end: 10aa264e3;  */

undefined8 * FUN_10aa264b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa264e4; end: 10aa264f7;  */

long FUN_10aa264e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10aa264f8; end: 10aa2655b;  */

void FUN_10aa264f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aa2655c; end: 10aa26563;  */

void FUN_10aa2655c(void)

{
  return;
}



/* Entry: 10aa26564; end: 10aa2665f;  */

void FUN_10aa26564(long *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c3b660,&plStack_30);
  return;
}



/* Entry: 10aa26660; end: 10aa2676b;  */

void FUN_10aa26660(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = *param_4;
  if (*param_4 == 0) {
    func_0x000109833b2c();
    lVar2 = param_2;
  }
  uVar6 = param_3[3];
  fVar4 = *(float *)(param_3 + 4);
  lVar7 = param_4[3];
  fVar5 = *(float *)(param_4 + 4);
  uVar3 = *param_3;
  puVar1 = (undefined8 *)0x1b0;
  func_0x0001098256f4(0x1b0,0x10);
  puVar1[1] = 0xffffffff00000003;
  puVar1[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 3) = 0x7f7fffff;
  *(undefined2 *)((long)puVar1 + 0x1c) = 1;
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  puVar1[5] = uVar3;
  puVar1[6] = lVar2;
  puVar1[7] = 0x3d4ccccd00000000;
  puVar1[8] = 0;
  *puVar1 = &PTR_DAT_110b14460;
  puVar1[0x2f] = (ulong)(uint)(fVar4 * 0.01);
  puVar1[0x2e] = CONCAT44((float)((ulong)uVar6 >> 0x20) * 0.01,(float)uVar6 * 0.01);
  puVar1[0x31] = (ulong)(uint)(fVar5 * 0.01);
  puVar1[0x30] = CONCAT44((float)((ulong)lVar7 >> 0x20) * 0.01,(float)lVar7 * 0.01);
  *(undefined4 *)(puVar1 + 0x32) = 0;
  *(undefined1 *)((long)puVar1 + 0x19c) = 0;
  puVar1[0x34] = 0x3f8000003e99999a;
  *(undefined4 *)(puVar1 + 0x35) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa2676c; end: 10aa2688f;  */

void FUN_10aa2676c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  ulong *param_5,ulong *param_6)

{
  ulong *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar3 = 10.0;
  if (param_5 != (ulong *)0x0 || param_6 != (ulong *)0x0) {
    puVar1 = param_5;
    if (param_5 == (ulong *)0x0) {
      puVar1 = param_6;
    }
    if (param_6 == (ulong *)0x0) {
      param_6 = param_5;
    }
    uVar6 = *puVar1;
    uVar7 = *param_6;
    uVar6 = uVar6 ^ (uVar6 ^ uVar7) &
                    CONCAT44(-(uint)((float)(uVar6 >> 0x20) < (float)(uVar7 >> 0x20)),
                             -(uint)((float)uVar6 < (float)uVar7));
    fVar3 = *(float *)(param_6 + 1);
    if (*(float *)(param_6 + 1) <= *(float *)(puVar1 + 1)) {
      fVar3 = *(float *)(puVar1 + 1);
    }
    fVar4 = (float)(uVar6 >> 0x20);
    fVar5 = (float)uVar6;
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
  }
  fVar4 = fVar3 * 0.3;
  uStack_80 = CONCAT44((float)((ulong)*param_4 >> 0x20) * fVar4,(float)*param_4 * fVar4);
  uStack_78 = CONCAT44((float)((ulong)param_4[1] >> 0x20) * fVar4,(float)param_4[1] * fVar4);
  uStack_70 = CONCAT44((float)((ulong)param_4[2] >> 0x20) * fVar4,(float)param_4[2] * fVar4);
  uStack_68 = CONCAT44((float)((ulong)param_4[3] >> 0x20) * fVar4,(float)param_4[3] * fVar4);
  uStack_48 = param_4[7];
  uStack_50 = param_4[6];
  uStack_58 = CONCAT44((float)((ulong)param_4[5] >> 0x20) * fVar4,(float)param_4[5] * fVar4);
  uStack_60 = CONCAT44((float)((ulong)param_4[4] >> 0x20) * fVar4,(float)param_4[4] * fVar4);
  puVar2 = &UNK_10e4eb968;
  if (param_3 == 0) {
    puVar2 = &UNK_10e4eb958;
  }
  FUN_10aaf9e50(param_2,&uStack_80,&UNK_10e4eb988,0xe,puVar2,6);
  if (param_3 != 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10aafa34c(fVar3 * 0.075,param_2,param_4,&uStack_90,&UNK_10e4eb978,5,8,5);
  }
  return;
}



/* Entry: 10aa26890; end: 10aa26913;  */

undefined1  [16] FUN_10aa26890(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f68bc2c;
  return auVar1;
}



/* Entry: 10aa26914; end: 10aa26bd3;  */

void FUN_10aa26914(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68bc2c,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3ab70;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3ab70;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3e1a8f,FUN_10aa663dc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68b1b2,FUN_10aa66500,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f20c,FUN_10aa665bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"normal",FUN_10aa66690,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68bc2c,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa26bb8);
  (*pcVar6)();
}



/* Entry: 10aa26bd4; end: 10aa26c3b;  */

void FUN_10aa26bd4(void)

{
  FUN_10a0ee900(&UNK_10f68b1ba,0x43);
  return;
}



/* Entry: 10aa26c3c; end: 10aa26cab;  */

undefined1  [16] FUN_10aa26c3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f68b930;
  return auVar1;
}



/* Entry: 10aa26cac; end: 10aa27183;  */

/* WARNING: Removing unreachable block (ram,0x00010aa27d68) */

void FUN_10aa26cac(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plStack_130;
  long *plStack_128;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  func_0x000109887da8(appuStack_c8,&UNK_10f68b930,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b1b0;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b1b0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b1fe,FUN_10aa66764,FUN_10aa66824);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b20c,FUN_10aa669c4,FUN_10aa66a84);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b21b,FUN_10aa66b5c,FUN_10aa66c18);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b22d,FUN_10aa66cf0,FUN_10aa66dac);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68b23e,FUN_10aa66e80,FUN_10aa66f38);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68b249,FUN_10aa66ffc,FUN_10aa670b4);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68b254,FUN_10aa67178,FUN_10aa67238);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68b262,FUN_10aa673d0,FUN_10aa67490);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar13 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar13) {
LAB_10aa27158:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10aa2715c);
    (*pcVar7)();
  }
  ppuStack_98 = *(undefined ***)(lVar13 + -0x60);
  ppuStack_a0 = *(undefined8 ***)(lVar13 + -0x68);
  puStack_78 = *(undefined **)(lVar13 + -0x40);
  uVar14 = *(ulong *)(lVar13 + -0x48);
  uVar15 = *(ulong *)(lVar13 + -0x50);
  pcStack_90 = *(code **)(lVar13 + -0x58);
  puStack_68 = *(undefined **)(lVar13 + -0x30);
  uStack_70 = *(undefined8 *)(lVar13 + -0x38);
  uStack_58 = *(undefined8 *)(lVar13 + -0x20);
  uStack_60 = *(undefined8 *)(lVar13 + -0x28);
  uStack_40 = *(undefined8 *)(lVar13 + -8);
  uStack_48 = *(undefined8 *)(lVar13 + -0x10);
  uStack_50 = *(ulong *)(lVar13 + -0x18);
  *(long *)(param_1 + 0x170) = lVar13 + -0x68;
  uStack_88._4_4_ = (undefined4)(uVar15 >> 0x20);
  uVar5 = uStack_88._4_4_;
  uStack_80._4_4_ = (undefined4)(uVar14 >> 0x20);
  uVar6 = uStack_80._4_4_;
  uVar8 = param_1;
  uStack_88 = uVar15;
  uStack_80 = uVar14;
  FUN_10a0051e8(param_1,uVar15 & 0xffffffff,uVar5,uStack_50 & 0xffffffff,uVar14 & 0xffffffff,uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68b930,0xe);
    FUN_10a05431c(param_1);
  }
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  ppuStack_a0 = (undefined8 **)0x10f296ec4;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f68a4a1;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_10f68a4a1;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_a0 = (undefined8 **)FUN_10aa67548;
    ppuStack_98 = &PTR_FUN_110c3ce88;
    pcStack_90 = FUN_10aa27184;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa27158;
    FUN_10a0544d8(param_1,&UNK_10f68b0a9,&ppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  func_0x00010a004064(param_1);
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  __Unwind_Resume();
  if (param_1 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return;
  }
  if (param_1 == 0) {
    plVar9 = (long *)0x150;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110c3bb98;
    plVar12 = plVar9 + 3;
    plVar10 = plVar9;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar12,0,plVar10,param_1);
    plVar9[3] = (long)&PTR_FUN_110c39ac0;
    plVar9[5] = (long)&PTR_DAT_110c39b60;
    plVar9[10] = (long)&PTR_DAT_110c39bb8;
    *(undefined1 *)(plVar9 + 0x1f) = 0;
    plVar9[0x21] = 0;
    plVar9[0x20] = 0;
    plVar9[0x23] = 0;
    plVar9[0x22] = 0;
    plVar9[0x25] = 0;
    plVar9[0x24] = 0;
    plVar9[0x27] = 0;
    plVar9[0x26] = 0;
    plVar9[0x29] = 0;
    plVar9[0x28] = 0;
    plStack_130 = plVar12;
    plStack_128 = plVar9;
    FUN_10aa4dc00(&plStack_130,plVar9 + 8,plVar12);
    FUN_10aa4da60(extraout_x8,&plStack_130);
    plVar12 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar10 = plStack_128 + 1;
      do {
        lVar13 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0x858);
    plVar12 = *(long **)(param_1 + 0x860);
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = (long *)0x138;
    uVar8 = param_1;
    __Znwm();
    plVar10 = plVar9;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar9,param_1,plVar10,uVar8);
    *plVar9 = (long)&PTR_FUN_110c39ac0;
    plVar9[2] = (long)&PTR_DAT_110c39b60;
    plVar9[7] = (long)&PTR_DAT_110c39bb8;
    *(undefined1 *)(plVar9 + 0x1c) = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x20] = 0;
    plVar9[0x1f] = 0;
    plVar9[0x22] = 0;
    plVar9[0x21] = 0;
    plVar9[0x24] = 0;
    plVar9[0x23] = 0;
    plVar9[0x26] = 0;
    plVar9[0x25] = 0;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plVar12 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
    plVar10 = (long *)0x30;
    plStack_130 = plVar9;
    __Znwm();
    *plVar10 = (long)&PTR_FUN_110c3ceb0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar9;
    plVar10[4] = lVar13;
    plVar10[5] = (long)plVar12;
    plStack_128 = plVar10;
    FUN_10aa4dc00(&plStack_130,plVar9 + 5,plVar9);
    FUN_10aa4da60(extraout_x8,&plStack_130);
    plVar10 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar9 = plStack_128 + 1;
      do {
        lVar11 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if ((lVar13 != 0) && (plVar10 = (long *)*extraout_x8, plVar10 != (long *)0x0)) {
      plStack_128 = (long *)extraout_x8[1];
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_130 = plVar10;
      FUN_10aa88c30(lVar13,&plStack_130);
      plVar10 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          lVar13 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        lVar13 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa27184; end: 10aa2719b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa27d68) */

void FUN_10aa27184(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_2 == 0) {
    plVar3 = (long *)0x150;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110c3bb98;
    plVar6 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar6,0,plVar4,param_2);
    plVar3[3] = (long)&PTR_FUN_110c39ac0;
    plVar3[5] = (long)&PTR_DAT_110c39b60;
    plVar3[10] = (long)&PTR_DAT_110c39bb8;
    *(undefined1 *)(plVar3 + 0x1f) = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x27] = 0;
    plVar3[0x26] = 0;
    plVar3[0x29] = 0;
    plVar3[0x28] = 0;
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10aa4dc00(&plStack_50,plVar3 + 8,plVar6);
    FUN_10aa4da60(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x138;
    lVar5 = param_2;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,param_2,plVar4,lVar5);
    *plVar3 = (long)&PTR_FUN_110c39ac0;
    plVar3[2] = (long)&PTR_DAT_110c39b60;
    plVar3[7] = (long)&PTR_DAT_110c39bb8;
    *(undefined1 *)(plVar3 + 0x1c) = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    plVar3[0x24] = 0;
    plVar3[0x23] = 0;
    plVar3[0x26] = 0;
    plVar3[0x25] = 0;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_FUN_110c3ceb0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10aa4dc00(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aa4da60(param_1,&plStack_50);
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar4;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar4 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar7 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa2719c; end: 10aa2722f;  */

void FUN_10aa2719c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x120;
  func_0x00010a4aec24(&lStack_28);
  lStack_28 = param_1 + 0x108;
  func_0x00010a4aec24(&lStack_28);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10aa27230; end: 10aa27243;  */

void FUN_10aa27230(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x120;
  func_0x00010a4aec24(&lStack_28);
  lStack_28 = param_1 + 0x108;
  func_0x00010a4aec24(&lStack_28);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10aa27244; end: 10aa27287;  */

void FUN_10aa27244(void)

{
  FUN_10aa2719c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa27288; end: 10aa272cf;  */

long * FUN_10aa27288(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  plVar11 = (long *)(param_1 + 0x108);
  if (plVar11 == param_2) {
    return plVar11;
  }
  plVar4 = (long *)*param_2;
  lVar13 = param_2[1];
  uVar8 = lVar13 - (long)plVar4 >> 4;
  plVar7 = (long *)*plVar11;
  if ((ulong)(*(long *)(param_1 + 0x118) - (long)plVar7 >> 4) < uVar8) {
    plVar3 = plVar11;
    plVar6 = plVar4;
    func_0x00010a4aebec();
    if (uVar8 >> 0x3c != 0) {
      func_0x00010a4aecd0();
      *(ulong *)(param_1 + 0x110) = uVar8;
      __Unwind_Resume();
      for (; plVar3 != plVar6; plVar3 = plVar3 + 2) {
        lVar12 = plVar3[1];
        lVar13 = *plVar3;
        if (plVar3[1] != 0) {
          plVar11 = (long *)(plVar3[1] + 0x10);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = *plVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar5 = plVar7[1];
        plVar7[1] = lVar12;
        *plVar7 = lVar13;
        if (lVar5 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar7 = plVar7 + 2;
      }
      return plVar7;
    }
    uVar9 = *(long *)(param_1 + 0x118) - *plVar11;
    uVar10 = (long)uVar9 >> 3;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar10 = 0xfffffffffffffff;
    }
    FUN_10a60f1e8(plVar11,uVar10);
    func_0x00010a60f220(plVar11,plVar4,lVar13,*(undefined8 *)(param_1 + 0x110));
  }
  else {
    lVar12 = *(long *)(param_1 + 0x110) - (long)plVar7;
    if (uVar8 <= (ulong)(lVar12 >> 4)) {
      FUN_10aa3e13c(plVar4,lVar13);
      plVar7 = plVar4;
      for (plVar11 = *(long **)(param_1 + 0x110); plVar11 != plVar4; plVar11 = plVar11 + -2) {
        plVar7 = (long *)plVar11[-1];
        if (plVar7 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(long **)(param_1 + 0x110) = plVar4;
      return plVar7;
    }
    FUN_10aa3e13c(plVar4,(long)plVar4 + lVar12);
    func_0x00010a60f220(plVar11,(long)plVar4 + lVar12,lVar13,*(undefined8 *)(param_1 + 0x110));
  }
  *(long **)(param_1 + 0x110) = plVar11;
  return plVar11;
}



/* Entry: 10aa272d0; end: 10aa2753f;  */

void FUN_10aa272d0(long param_1,long *param_2)

{
  code **ppcVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  code **ppcVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  code *pcVar11;
  ulong uVar12;
  code **ppcVar13;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  code **ppcStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  code **ppcStack_88;
  ulong uStack_80;
  long lStack_58;
  
  func_0x00010aa70acc();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c39bc8,(bRam00000001137ec120 & 1) == 0);
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfe | (byte)plVar3 ^ 1;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c39be8,(bRam00000001137ec120 & 2) == 0);
  bVar7 = 0;
  if ((int)plVar3 == 0) {
    bVar7 = 2;
  }
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfd | bVar7;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c39c08,bRam00000001137ec120 >> 2 & 1);
  bVar7 = 4;
  if ((int)plVar3 == 0) {
    bVar7 = 0;
  }
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfb | bVar7;
  ppuVar4 = &PTR_DAT_110c39c28;
  plVar3 = param_2;
  FUN_10aa27fe4();
  *(long **)(param_1 + 0xe8) = plVar3;
  *(undefined ***)(param_1 + 0xf0) = ppuVar4;
  ppuVar4 = &PTR_DAT_110c39c48;
  plVar3 = param_2;
  FUN_10aa27fe4();
  *(long **)(param_1 + 0xf8) = plVar3;
  *(undefined ***)(param_1 + 0x100) = ppuVar4;
  FUN_10aa28038(param_2,&PTR_DAT_110c39c68,param_1 + 0x108);
  ppcVar1 = (code **)(param_1 + 0x120);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = ppcVar1;
  FUN_10a498de4(ppcVar1);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c39c88);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x208))();
  uVar12 = (ulong)plVar3 & 0xffffffff;
  pcVar10 = *ppcVar1;
  pcVar11 = *(code **)(param_1 + 0x128);
  ppcVar13 = (code **)(pcVar11 + -(long)pcVar10);
  uVar8 = (long)ppcVar13 >> 4;
  if (uVar8 < uVar12) {
    uVar8 = uVar12 - uVar8;
    if ((ulong)(*(long *)(param_1 + 0x130) - (long)pcVar11 >> 4) < uVar8) {
      uVar6 = *(long *)(param_1 + 0x130) - (long)pcVar10;
      uVar9 = (long)uVar6 >> 3;
      if (uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      if (0x7fffffffffffffef < uVar6) {
        uVar9 = 0xfffffffffffffff;
      }
      ppcVar5 = ppcVar1;
      ppcStack_a0 = ppcVar1;
      FUN_10a4aece4();
      lVar2 = (long)ppcVar5 + (long)ppcVar13;
      ppcVar13 = ppcVar5 + uVar9 * 2;
      _bzero(lVar2,uVar8 * 0x10);
      ppcVar5 = (code **)(*(long *)(param_1 + 0x128) - (long)*ppcVar1);
      pcVar10 = (code *)(lVar2 - (long)ppcVar5);
      _memcpy(pcVar10);
      pcStack_c0 = *ppcVar1;
      *ppcVar1 = pcVar10;
      *(ulong *)(param_1 + 0x128) = lVar2 + uVar8 * 0x10;
      uStack_a8 = *(undefined8 *)(param_1 + 0x130);
      *(code ***)(param_1 + 0x130) = ppcVar13;
      pcStack_b8 = pcStack_c0;
      pcStack_b0 = pcStack_c0;
      func_0x00010a4aed18(&pcStack_c0);
    }
    else {
      _bzero(pcVar11,uVar8 * 0x10);
      *(code **)(param_1 + 0x128) = pcVar11 + uVar8 * 0x10;
    }
  }
  else if (uVar12 < uVar8) {
    for (; pcVar11 != pcVar10 + uVar12 * 0x10; pcVar11 = pcVar11 + -0x10) {
      if (*(long *)(pcVar11 + -8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(code **)(param_1 + 0x128) = pcVar10 + uVar12 * 0x10;
  }
  if ((int)plVar3 != 0) {
    uVar8 = 0;
    ppcVar13 = &pcStack_98;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,uVar8);
      pcStack_98 = FUN_10aa3e1b4;
      ppuStack_90 = &PTR_DAT_110c3b800;
      ppcVar5 = &pcStack_98;
      ppcStack_88 = ppcVar1;
      uStack_80 = uVar8;
      FUN_10a498e2c(param_2,&PTR_DAT_110c3b7e0,ppcVar5,0);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar8 = uVar8 + 1;
    } while (uVar12 != uVar8);
  }
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(ppcVar13 + 1);
  __Unwind_Resume();
  (**(code **)(*param_2 + 0x18))();
  pcVar11 = ppcVar5[1];
  for (pcVar10 = *ppcVar5; pcVar10 != pcVar11; pcVar10 = pcVar10 + 0x10) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a4994cc(param_2,&PTR_DAT_110c3b7e0,pcVar10,&UNK_10f65c897,0x19);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa28320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa27540; end: 10aa279a7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa278c0) */
/* WARNING: Removing unreachable block (ram,0x00010aa278d0) */

void FUN_10aa27540(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *****pppppuVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_49;
  undefined8 ****ppppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppppuStack_48 = (undefined8 *****)0x0;
  lStack_40 = 0;
  uStack_38 = 0;
  bVar2 = *(byte *)(param_2 + 0xe0);
  if ((bVar2 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_48,&UNK_10f68b270,7);
    bVar2 = *(byte *)(param_2 + 0xe0);
  }
  if ((bVar2 >> 1 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_48,&UNK_10f68b278,8);
    bVar2 = *(byte *)(param_2 + 0xe0);
  }
  if ((bVar2 >> 2 & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_48,&UNK_10f68a6ec,0xb);
  }
  if ((long)uStack_38._7_1_ < 0) {
    if (lStack_40 != 0) {
      lVar3 = lStack_40 + -1;
      pppppuVar4 = (undefined8 *****)ppppuStack_48;
      lStack_40 = lVar3;
      goto LAB_10aa275e8;
    }
    lStack_40 = 6;
    pppppuVar4 = (undefined8 *****)ppppuStack_48;
LAB_10aa2760c:
    *(undefined2 *)((long)pppppuVar4 + 4) = 0x2965;
    puVar5 = (undefined1 *)((long)pppppuVar4 + 6);
    *(undefined4 *)pppppuVar4 = 0x6e6f6e28;
  }
  else {
    if (uStack_38._7_1_ == '\0') {
      uStack_38 = CONCAT17(6,(undefined7)uStack_38);
      pppppuVar4 = &ppppuStack_48;
      goto LAB_10aa2760c;
    }
    lVar3 = (long)uStack_38._7_1_ + -1;
    uStack_38 = CONCAT17((char)lVar3,(undefined7)uStack_38);
    pppppuVar4 = &ppppuStack_48;
LAB_10aa275e8:
    puVar5 = (undefined1 *)((long)pppppuVar4 + lVar3);
  }
  *puVar5 = 0;
  uStack_49 = 0xe;
  uStack_60 = 0x636973796850;
  uStack_5a = 0x2e73;
  uStack_58 = 0x7265746c6946;
  uStack_52 = 0;
  FUN_10a0ee900(param_1,&UNK_10f68b281,0xe);
  if ((*(long *)(param_2 + 0xe8) != 0) || (*(short *)(param_2 + 0xf0) != 0)) {
    FUN_10a3c9114(&ppppuStack_90,(long *)(param_2 + 0xe8),0);
    FUN_10a0ee900(&ppppuStack_78,&UNK_10f68b290,0x12);
    uVar1 = uStack_70;
    pppppuVar4 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar1 = (ulong)bStack_61;
      pppppuVar4 = &ppppuStack_78;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uVar1);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppppuStack_78);
    }
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppppuStack_90);
    }
  }
  if ((*(long *)(param_2 + 0xf8) != 0) || (*(short *)(param_2 + 0x100) != 0)) {
    FUN_10a3c9114(&ppppuStack_90,(long *)(param_2 + 0xf8),0);
    FUN_10a0ee900(&ppppuStack_78,&UNK_10f68b2a3,0x12);
    uVar1 = uStack_70;
    pppppuVar4 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar1 = (ulong)bStack_61;
      pppppuVar4 = &ppppuStack_78;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uVar1);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppppuStack_78);
    }
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppppuStack_90);
    }
  }
  FUN_10aa279a8(&ppppuStack_78,*(long *)(param_2 + 0x108),
                *(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108) >> 4);
  if ((char)bStack_61 < '\0') {
    if (uStack_70 != 0) goto LAB_10aa277cc;
  }
  else if (bStack_61 != 0) {
LAB_10aa277cc:
    FUN_10a0ee900(&ppppuStack_90,&UNK_10f68b2b6,0x15);
    uVar1 = uStack_88;
    pppppuVar4 = (undefined8 *****)ppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppuVar4 = &ppppuStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uVar1);
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppppuStack_90);
    }
  }
  FUN_10aa279a8(&ppppuStack_90,*(long *)(param_2 + 0x120),
                *(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 4);
  if ((char)bStack_79 < '\0') {
    if (uStack_88 != 0) goto LAB_10aa2784c;
  }
  else {
    if (bStack_79 == 0) goto LAB_10aa278a8;
LAB_10aa2784c:
    FUN_10a0ee900(&ppppuStack_a8,&UNK_10f68b2cc,0x15);
    pppppuVar4 = (undefined8 *****)ppppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      pppppuVar4 = &ppppuStack_a8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uStack_a0);
    if ((char)bStack_91 < '\0') {
      __ZdlPv(ppppuStack_a8);
    }
    if (-1 < (char)bStack_79) goto LAB_10aa278a8;
  }
  __ZdlPv(ppppuStack_90);
LAB_10aa278a8:
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppppuStack_78);
  }
  return;
}



/* Entry: 10aa279a8; end: 10aa27b4f;  */

void FUN_10aa279a8(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    plVar2 = param_2 + param_3 * 2;
    do {
      plVar7 = (long *)param_2[1];
      if ((plVar7 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
LAB_10aa27a64:
        func_0x000107c2b054(&puStack_70,"(null)");
      }
      else {
        lVar9 = *param_2;
        plVar1 = plVar7 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
        if (lVar9 == 0) goto LAB_10aa27a64;
        lVar9 = *(long *)(lVar9 + 0x168);
        if (*(char *)(lVar9 + 0x17f) < '\0') {
          func_0x000107c3192c(&puStack_70,*(undefined8 *)(lVar9 + 0x168),
                              *(undefined8 *)(lVar9 + 0x170));
        }
        else {
          uStack_68 = *(ulong *)(lVar9 + 0x170);
          puStack_70 = *(undefined1 **)(lVar9 + 0x168);
          uStack_60 = *(ulong *)(lVar9 + 0x178);
        }
      }
      uVar3 = uStack_68;
      ppuVar6 = (undefined1 **)puStack_70;
      if (-1 < (long)uStack_60) {
        uVar3 = uStack_60 >> 0x38;
        ppuVar6 = &puStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,ppuVar6,uVar3);
      if ((long)uStack_60 < 0) {
        __ZdlPv(puStack_70);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&DAT_10f68f19e,2);
      param_2 = param_2 + 2;
    } while (param_2 != plVar2);
    lVar9 = (long)*(char *)((long)param_1 + 0x17);
    if (lVar9 < 0) {
      lVar9 = param_1[1];
      if (lVar9 == 0) {
        return;
      }
    }
    else if (*(char *)((long)param_1 + 0x17) == '\0') {
      return;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,lVar9 + -2,0)
    ;
  }
  return;
}



/* Entry: 10aa27b50; end: 10aa27b57;  */

/* WARNING: Removing unreachable block (ram,0x00010aa278c0) */
/* WARNING: Removing unreachable block (ram,0x00010aa278d0) */

void FUN_10aa27b50(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *****pppppuVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_49;
  undefined8 ****ppppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppppuStack_48 = (undefined8 *****)0x0;
  lStack_40 = 0;
  uStack_38 = 0;
  bVar2 = *(byte *)(param_2 + 0xd0);
  if ((bVar2 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_48,&UNK_10f68b270,7);
    bVar2 = *(byte *)(param_2 + 0xd0);
  }
  if ((bVar2 >> 1 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_48,&UNK_10f68b278,8);
    bVar2 = *(byte *)(param_2 + 0xd0);
  }
  if ((bVar2 >> 2 & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_48,&UNK_10f68a6ec,0xb);
  }
  if ((long)uStack_38._7_1_ < 0) {
    if (lStack_40 != 0) {
      lVar3 = lStack_40 + -1;
      pppppuVar4 = (undefined8 *****)ppppuStack_48;
      lStack_40 = lVar3;
      goto LAB_10aa275e8;
    }
    lStack_40 = 6;
    pppppuVar4 = (undefined8 *****)ppppuStack_48;
LAB_10aa2760c:
    *(undefined2 *)((long)pppppuVar4 + 4) = 0x2965;
    puVar5 = (undefined1 *)((long)pppppuVar4 + 6);
    *(undefined4 *)pppppuVar4 = 0x6e6f6e28;
  }
  else {
    if (uStack_38._7_1_ == '\0') {
      uStack_38 = CONCAT17(6,(undefined7)uStack_38);
      pppppuVar4 = &ppppuStack_48;
      goto LAB_10aa2760c;
    }
    lVar3 = (long)uStack_38._7_1_ + -1;
    uStack_38 = CONCAT17((char)lVar3,(undefined7)uStack_38);
    pppppuVar4 = &ppppuStack_48;
LAB_10aa275e8:
    puVar5 = (undefined1 *)((long)pppppuVar4 + lVar3);
  }
  *puVar5 = 0;
  uStack_49 = 0xe;
  uStack_60 = 0x636973796850;
  uStack_5a = 0x2e73;
  uStack_58 = 0x7265746c6946;
  uStack_52 = 0;
  FUN_10a0ee900(param_1,&UNK_10f68b281,0xe);
  if ((*(long *)(param_2 + 0xd8) != 0) || (*(short *)(param_2 + 0xe0) != 0)) {
    FUN_10a3c9114(&ppppuStack_90,(long *)(param_2 + 0xd8),0);
    FUN_10a0ee900(&ppppuStack_78,&UNK_10f68b290,0x12);
    uVar1 = uStack_70;
    pppppuVar4 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar1 = (ulong)bStack_61;
      pppppuVar4 = &ppppuStack_78;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uVar1);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppppuStack_78);
    }
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppppuStack_90);
    }
  }
  if ((*(long *)(param_2 + 0xe8) != 0) || (*(short *)(param_2 + 0xf0) != 0)) {
    FUN_10a3c9114(&ppppuStack_90,(long *)(param_2 + 0xe8),0);
    FUN_10a0ee900(&ppppuStack_78,&UNK_10f68b2a3,0x12);
    uVar1 = uStack_70;
    pppppuVar4 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar1 = (ulong)bStack_61;
      pppppuVar4 = &ppppuStack_78;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uVar1);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppppuStack_78);
    }
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppppuStack_90);
    }
  }
  FUN_10aa279a8(&ppppuStack_78,*(long *)(param_2 + 0xf8),
                *(long *)(param_2 + 0x100) - *(long *)(param_2 + 0xf8) >> 4);
  if ((char)bStack_61 < '\0') {
    if (uStack_70 != 0) goto LAB_10aa277cc;
  }
  else if (bStack_61 != 0) {
LAB_10aa277cc:
    FUN_10a0ee900(&ppppuStack_90,&UNK_10f68b2b6,0x15);
    uVar1 = uStack_88;
    pppppuVar4 = (undefined8 *****)ppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppuVar4 = &ppppuStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uVar1);
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppppuStack_90);
    }
  }
  FUN_10aa279a8(&ppppuStack_90,*(long *)(param_2 + 0x110),
                *(long *)(param_2 + 0x118) - *(long *)(param_2 + 0x110) >> 4);
  if ((char)bStack_79 < '\0') {
    if (uStack_88 != 0) goto LAB_10aa2784c;
  }
  else {
    if (bStack_79 == 0) goto LAB_10aa278a8;
LAB_10aa2784c:
    FUN_10a0ee900(&ppppuStack_a8,&UNK_10f68b2cc,0x15);
    pppppuVar4 = (undefined8 *****)ppppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      pppppuVar4 = &ppppuStack_a8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppuVar4,uStack_a0);
    if ((char)bStack_91 < '\0') {
      __ZdlPv(ppppuStack_a8);
    }
    if (-1 < (char)bStack_79) goto LAB_10aa278a8;
  }
  __ZdlPv(ppppuStack_90);
LAB_10aa278a8:
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppppuStack_78);
  }
  return;
}



/* Entry: 10aa27b58; end: 10aa27bf3;  */

void FUN_10aa27b58(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  FUN_10aa27bf4(&lStack_40,*(undefined8 *)(param_2 + 0x50));
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(lStack_40 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(lStack_40 + 0xe0) = uVar4;
  *(undefined8 *)(lStack_40 + 0xf8) = uVar3;
  *(undefined8 *)(lStack_40 + 0xf0) = uVar2;
  *(undefined8 *)(lStack_40 + 0x100) = uVar1;
  if (lStack_40 != param_2) {
    FUN_10aa3e010(lStack_40 + 0x108,*(long *)(param_2 + 0x108),*(long *)(param_2 + 0x110),
                  *(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108) >> 4);
    FUN_10aa3e010(lStack_40 + 0x120,*(long *)(param_2 + 0x120),*(long *)(param_2 + 0x128),
                  *(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 4);
  }
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10aa27bf4; end: 10aa27fe3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa27d68) */

void FUN_10aa27bf4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x150;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110c3bb98;
    plVar6 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar6,0,plVar4,param_2);
    plVar3[3] = (long)&PTR_FUN_110c39ac0;
    plVar3[5] = (long)&PTR_DAT_110c39b60;
    plVar3[10] = (long)&PTR_DAT_110c39bb8;
    *(undefined1 *)(plVar3 + 0x1f) = 0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plVar3[0x27] = 0;
    plVar3[0x26] = 0;
    plVar3[0x29] = 0;
    plVar3[0x28] = 0;
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10aa4dc00(&plStack_50,plVar3 + 8,plVar6);
    FUN_10aa4da60(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x138;
    lVar5 = param_2;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,param_2,plVar4,lVar5);
    *plVar3 = (long)&PTR_FUN_110c39ac0;
    plVar3[2] = (long)&PTR_DAT_110c39b60;
    plVar3[7] = (long)&PTR_DAT_110c39bb8;
    *(undefined1 *)(plVar3 + 0x1c) = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    plVar3[0x24] = 0;
    plVar3[0x23] = 0;
    plVar3[0x26] = 0;
    plVar3[0x25] = 0;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_FUN_110c3ceb0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10aa4dc00(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aa4da60(param_1,&plStack_50);
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar4;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar4 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar7 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa27fe4; end: 10aa28037;  */

undefined1  [16] FUN_10aa27fe4(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x210))();
  FUN_10a3c92c8(&uStack_30,param_1);
  (**(code **)(*param_1 + 0x220))(param_1);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 10aa28038; end: 10aa2827b;  */

void FUN_10aa28038(long *param_1,undefined8 param_2,code **param_3)

{
  long lVar1;
  long *plVar2;
  code **ppcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  code *pcVar8;
  ulong uVar9;
  code **ppcVar10;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  code **ppcStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  code **ppcStack_88;
  ulong uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = param_3;
  FUN_10a498de4(param_3);
  (**(code **)(*param_1 + 0x210))(param_1,param_2);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x208))();
  uVar9 = (ulong)plVar2 & 0xffffffff;
  pcVar7 = *param_3;
  pcVar8 = param_3[1];
  ppcVar10 = (code **)(pcVar8 + -(long)pcVar7);
  uVar5 = (long)ppcVar10 >> 4;
  if (uVar5 < uVar9) {
    uVar5 = uVar9 - uVar5;
    if ((ulong)((long)param_3[2] - (long)pcVar8 >> 4) < uVar5) {
      uVar4 = (long)param_3[2] - (long)pcVar7;
      uVar6 = (long)uVar4 >> 3;
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar6 = 0xfffffffffffffff;
      }
      ppcVar3 = param_3;
      ppcStack_a0 = param_3;
      FUN_10a4aece4();
      lVar1 = (long)ppcVar3 + (long)ppcVar10;
      ppcVar10 = ppcVar3 + uVar6 * 2;
      _bzero(lVar1,uVar5 * 0x10);
      ppcVar3 = (code **)(param_3[1] + -(long)*param_3);
      pcVar7 = (code *)(lVar1 - (long)ppcVar3);
      _memcpy(pcVar7);
      pcStack_c0 = *param_3;
      *param_3 = pcVar7;
      param_3[1] = (code *)(lVar1 + uVar5 * 0x10);
      pcStack_a8 = param_3[2];
      param_3[2] = (code *)ppcVar10;
      pcStack_b8 = pcStack_c0;
      pcStack_b0 = pcStack_c0;
      func_0x00010a4aed18(&pcStack_c0);
    }
    else {
      _bzero(pcVar8,uVar5 * 0x10);
      param_3[1] = pcVar8 + uVar5 * 0x10;
    }
  }
  else if (uVar9 < uVar5) {
    for (; pcVar8 != pcVar7 + uVar9 * 0x10; pcVar8 = pcVar8 + -0x10) {
      if (*(long *)(pcVar8 + -8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    param_3[1] = pcVar7 + uVar9 * 0x10;
  }
  if ((int)plVar2 != 0) {
    uVar5 = 0;
    ppcVar10 = &pcStack_98;
    do {
      (**(code **)(*param_1 + 0x218))(param_1,uVar5);
      pcStack_98 = FUN_10aa3e1b4;
      ppuStack_90 = &PTR_DAT_110c3b800;
      ppcVar3 = &pcStack_98;
      ppcStack_88 = param_3;
      uStack_80 = uVar5;
      FUN_10a498e2c(param_1,&PTR_DAT_110c3b7e0,ppcVar3,0);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      (**(code **)(*param_1 + 0x220))(param_1);
      uVar5 = uVar5 + 1;
    } while (uVar9 != uVar5);
  }
  (**(code **)(*param_1 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(ppcVar10 + 1);
  __Unwind_Resume();
  (**(code **)(*param_1 + 0x18))();
  pcVar8 = ppcVar3[1];
  for (pcVar7 = *ppcVar3; pcVar7 != pcVar8; pcVar7 = pcVar7 + 0x10) {
    (**(code **)(*param_1 + 0x10))(param_1);
    FUN_10a4994cc(param_1,&PTR_DAT_110c3b7e0,pcVar7,&UNK_10f65c897,0x19);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa28320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10aa2827c; end: 10aa28323;  */

void FUN_10aa2827c(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x18))();
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    (**(code **)(*param_1 + 0x10))(param_1);
    FUN_10a4994cc(param_1,&PTR_DAT_110c3b7e0,lVar1,&UNK_10f65c897,0x19);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa28320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10aa28324; end: 10aa2851b;  */

void FUN_10aa28324(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  
  fVar15 = *(float *)(param_3 + 3);
  fVar6 = *(float *)((long)param_3 + 0x24);
  uVar14 = *(undefined8 *)((long)param_3 + 0xc);
  uVar8 = param_3[2];
  fVar16 = *(float *)(param_2 + 0xc);
  uVar18 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 4);
  fVar21 = (float)uVar11;
  fVar22 = (float)((ulong)uVar11 >> 0x20);
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  uVar26 = NEON_ext(uVar18,uVar11,4,1);
  fVar24 = (float)((ulong)uVar26 >> 0x20);
  fVar7 = (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  uVar11 = NEON_ext(uVar8,uVar14,4,1);
  fVar10 = (float)uVar11;
  fVar12 = (float)((ulong)uVar11 >> 0x20);
  fVar13 = (float)uVar14;
  fVar20 = (float)((ulong)uVar14 >> 0x20);
  fVar29 = fVar7 * -fVar21 + (float)uVar18 * fVar13;
  fVar23 = fVar10 * -(float)uVar18 + (float)uVar26 * fVar7;
  fVar25 = fVar12 * -fVar19 + fVar24 * fVar9;
  fVar17 = fVar15 * fVar23 + fVar10 * -(fVar13 * -(float)uVar26 + fVar21 * fVar10) + fVar29 * fVar7;
  fVar20 = fVar15 * fVar25 +
           fVar12 * -(fVar20 * -fVar24 + fVar22 * fVar12) +
           (fVar9 * -fVar22 + fVar19 * fVar20) * fVar9;
  fVar24 = fVar15 * fVar29 + -fVar23 * fVar7 + fVar13 * fVar25;
  uVar11 = *(undefined8 *)((long)param_3 + 0x1c);
  pauVar1 = (undefined1 (*) [12])(param_2 + 0x10);
  fVar23 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  uVar8 = *(undefined8 *)*pauVar1;
  auVar5 = *pauVar1;
  auVar4 = *pauVar1;
  auVar3 = *pauVar1;
  auVar2 = *pauVar1;
  fVar19 = (float)((ulong)uVar8 >> 0x20);
  auVar27._4_4_ = fVar25;
  auVar27._0_4_ = fVar25;
  auVar27._8_4_ = fVar25;
  auVar27._12_4_ = fVar25;
  auVar28._12_4_ = fVar25;
  auVar28._0_12_ = *pauVar1;
  auVar28 = NEON_ext(auVar27,auVar28,4,1);
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *(float *)((long)param_1 + 0x14) =
       (auVar28._8_4_ * fVar9 + fVar23 * fVar15 + auVar3._4_4_ * fVar13) - auVar4._0_4_ * fVar7;
  *(float *)(param_1 + 3) =
       (auVar28._12_4_ * -fVar12 + fVar25 * fVar15 + auVar2._4_4_ * -fVar7) - auVar4._8_4_ * fVar9;
  *(float *)((long)param_1 + 0xc) =
       (auVar28._0_4_ * fVar13 + (float)uVar8 * fVar15 + fVar23 * fVar7) - fVar19 * fVar10;
  *(float *)(param_1 + 2) =
       (auVar28._4_4_ * fVar7 + fVar19 * fVar15 + auVar2._0_4_ * fVar9) - auVar5._8_4_ * fVar12;
  *(ulong *)((long)param_1 + 0x1c) =
       CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar22 + fVar20 + fVar20,
                (float)uVar11 + fVar21 + fVar17 + fVar17);
  *(float *)((long)param_1 + 0x24) = fVar6 + fVar16 + fVar24 + fVar24;
  return;
}



/* Entry: 10aa2851c; end: 10aa2863f;  */

void FUN_10aa2851c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  fVar2 = *(float *)(param_2 + 1);
  fStack_38 = fVar2 * 0.01;
  fStack_40 = (float)*param_2;
  fStack_3c = (float)((ulong)*param_2 >> 0x20);
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(float *)(puVar1 + 2) = fStack_40 * 8.0 * fStack_3c * fVar2;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_FUN_110c3cf10;
  puVar1[1] = puVar1 + 8;
  fStack_40 = fStack_40 * 0.01;
  fStack_3c = fStack_3c * 0.01;
  uStack_34 = 0;
  func_0x0001098150b8(puVar1 + 8,&fStack_40);
  *(undefined4 *)(puVar1 + 0xb) = 0;
  (**(code **)(*(long *)puVar1[1] + 0x40))(0x3f800000,(long *)puVar1[1],&fStack_40);
  puVar1[6] = CONCAT44(fStack_3c * 10000.0,fStack_40 * 10000.0);
  *(float *)(puVar1 + 7) = fStack_38 * 10000.0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa28640; end: 10aa28757;  */

void FUN_10aa28640(undefined8 *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0;
  puVar2 = puVar1 + 8;
  *puVar2 = &PTR_DAT_110b13f68;
  *(float *)(puVar1 + 2) = param_2 * param_2 * param_2 * 4.1887903;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_DAT_110c3cf68;
  puVar1[1] = puVar2;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 9) = 8;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined4 *)((long)puVar1 + 0x7c) = 0;
  *(float *)(puVar1 + 0xe) = param_2 * 0.01;
  *(float *)(puVar1 + 0x10) = param_2 * 0.01;
  *(undefined4 *)((long)puVar1 + 0x84) = 0;
  puVar1[0xb] = 0xffffffff00000000;
  puVar1[0xc] = uVar3;
  func_0x00010981d08c(0x3f800000,puVar2,auStack_40);
  puVar1[6] = CONCAT44(auStack_40._4_4_ * 10000.0,auStack_40._0_4_ * 10000.0);
  *(float *)(puVar1 + 7) = fStack_38 * 10000.0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa28758; end: 10aa288bb;  */

void FUN_10aa28758(undefined8 *param_1,float param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  fVar3 = *param_3;
  fVar5 = param_3[1];
  fVar4 = param_3[2];
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(float *)(puVar1 + 2) = param_2 * param_2 * param_2 * 4.1887903 * fVar3 * fVar5 * fVar4;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_FUN_110c3cfc0;
  puVar1[1] = puVar1 + 8;
  fStack_50 = param_2 * 0.01;
  func_0x00010981af28(puVar1 + 8,0x113835590,&fStack_50,1);
  *(undefined4 *)(puVar1 + 0xb) = 0;
  uVar2 = *(undefined8 *)param_3;
  puVar1[0xd] = (ulong)(uint)ABS(param_3[2]);
  puVar1[0xc] = CONCAT44(ABS((float)((ulong)uVar2 >> 0x20)),ABS((float)uVar2));
  func_0x0001098184d8();
  (**(code **)(*(long *)puVar1[1] + 0x40))(0x3f800000,(long *)puVar1[1],&fStack_50);
  puVar1[6] = CONCAT44(fStack_4c * 10000.0,fStack_50 * 10000.0);
  *(float *)(puVar1 + 7) = fStack_48 * 10000.0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa288bc; end: 10aa28a73;  */

void FUN_10aa288bc(undefined8 *param_1,float param_2,float param_3,int param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [8];
  float fStack_48;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(float *)(puVar1 + 2) = param_2 * param_2 * (param_3 * 3.1415927 + param_2 * 4.1887903);
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_FUN_110c3d018;
  puVar1[1] = puVar1 + 8;
  param_2 = param_2 * 0.01;
  puVar1[10] = 0;
  puVar1[0xb] = 0xffffffffffffffff;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xc] = 0x3f8000003f800000;
  fVar5 = param_3 * 0.01 * 0.5;
  fVar6 = param_2;
  if (param_4 == 2) {
    *(undefined4 *)(puVar1 + 9) = 10;
    ppuVar2 = &PTR_DAT_110b13310;
    puVar1[8] = &PTR_DAT_110b13310;
    *(float *)(puVar1 + 0x10) = param_2;
    uVar3 = 2;
    fVar4 = fVar5;
  }
  else {
    fVar4 = param_2;
    if (param_4 == 1) {
      ppuVar2 = &PTR_DAT_110b13180;
      puVar1[8] = &PTR_DAT_110b13180;
      *(float *)(puVar1 + 0x10) = param_2;
      *(undefined4 *)(puVar1 + 9) = 10;
      uVar3 = 1;
      param_2 = fVar5;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(puVar1 + 9) = 10;
      ppuVar2 = &PTR_DAT_110b13248;
      puVar1[8] = &PTR_DAT_110b13248;
      *(float *)(puVar1 + 0x10) = param_2;
      fVar6 = fVar5;
    }
  }
  *(undefined4 *)(puVar1 + 0x11) = uVar3;
  *(float *)(puVar1 + 0xe) = fVar6;
  *(float *)((long)puVar1 + 0x74) = param_2;
  *(float *)(puVar1 + 0xf) = fVar4;
  *(undefined4 *)((long)puVar1 + 0x7c) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  (*(code *)ppuVar2[8])(0x3f800000,puVar1 + 8,auStack_50);
  puVar1[6] = CONCAT44(auStack_50._4_4_ * 10000.0,auStack_50._0_4_ * 10000.0);
  *(float *)(puVar1 + 7) = fStack_48 * 10000.0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa28a74; end: 10aa28c2b;  */

void FUN_10aa28a74(undefined8 *param_1,float param_2,float param_3,undefined8 param_4,float *param_5
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_78;
  float fStack_74;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  puVar2 = (undefined8 *)0x100;
  __Znwm();
  fVar5 = *param_5;
  fVar7 = param_5[1];
  fVar6 = param_5[2];
  fVar4 = 0.0;
  puVar1 = puVar2 + 8;
  puVar2[5] = 0x3f80000000000000;
  puVar2[4] = 0;
  *(float *)(puVar2 + 2) =
       param_2 * param_2 * (param_3 * 3.1415927 + param_2 * 4.1887903) * fVar5 * fVar7 * fVar6;
  fVar5 = 0.0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_FUN_110c3d070;
  puVar2[1] = puVar1;
  FUN_10a90e0fc(param_4);
  param_3 = param_3 * 0.005;
  fVar4 = fVar4 * param_3;
  uStack_60 = CONCAT44(fVar4,fVar5 * param_3);
  uStack_58 = (ulong)(uint)(fVar7 * param_3);
  uStack_70 = CONCAT17((char)((uint)fVar4 >> 0x18),
                       CONCAT16((char)((uint)fVar4 >> 0x10),
                                CONCAT15((char)((uint)fVar4 >> 8),
                                         CONCAT14(SUB41(fVar4,0),fVar5 * param_3)))) ^
              0x8000000080000000;
  uStack_68 = CONCAT17(0x80,(uint7)(uint)-(fVar7 * param_3));
  fStack_78 = param_2 * 0.01;
  fStack_74 = fStack_78;
  func_0x00010981af28(puVar1,&uStack_70,&fStack_78,2);
  *(undefined4 *)(puVar2 + 0xb) = 0;
  uVar3 = *(undefined8 *)param_5;
  puVar2[0xd] = (ulong)(uint)ABS(param_5[2]);
  puVar2[0xc] = CONCAT44(ABS((float)((ulong)uVar3 >> 0x20)),ABS((float)uVar3));
  func_0x0001098184d8(puVar1);
  (**(code **)(*(long *)puVar2[1] + 0x40))(0x3f800000,(long *)puVar2[1],&uStack_70);
  puVar2[6] = CONCAT44((float)(uStack_70 >> 0x20) * 10000.0,(float)uStack_70 * 10000.0);
  *(float *)(puVar2 + 7) = (float)uStack_68 * 10000.0;
  *param_1 = puVar2;
  return;
}



/* Entry: 10aa28c2c; end: 10aa28dd3;  */

void FUN_10aa28c2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  float fStack_48;
  float fStack_44;
  
  puVar5 = (undefined8 *)0x120;
  __Znwm();
  puVar7 = puVar5 + 8;
  *puVar5 = &PTR_FUN_110c3d0c8;
  fVar9 = (float)param_2 * (float)param_2;
  fVar12 = (float)param_3;
  fVar10 = fVar12 * -0.25;
  fStack_48 = (fVar12 * fVar12 + fVar9 * 4.0) * 0.0375;
  uStack_90 = CONCAT44(uStack_90._4_4_,fStack_48);
  iVar8 = (int)param_4;
  pfVar1 = (float *)&uStack_90;
  fVar11 = fVar10;
  fVar3 = 0.0;
  if (iVar8 == 2) {
    fVar11 = 0.0;
    pfVar1 = &fStack_48;
    fVar3 = fVar10;
  }
  pfVar2 = &fStack_44;
  fVar4 = 0.0;
  if (iVar8 != 1) {
    pfVar2 = pfVar1;
    fVar4 = fVar11;
  }
  fStack_44 = fStack_48;
  *pfVar2 = fVar9 * 0.3;
  puVar5[5] = 0x3f80000000000000;
  puVar5[4] = 0;
  *(float *)(puVar5 + 2) = fVar12 * fVar9 * 1.0471976;
  *(float *)((long)puVar5 + 0x14) = fVar4;
  fVar11 = 0.0;
  if (iVar8 != 1) {
    fVar10 = 0.0;
    fVar11 = fVar3;
  }
  *(float *)(puVar5 + 3) = fVar10;
  *(float *)((long)puVar5 + 0x1c) = fVar11;
  *(float *)(puVar5 + 6) = (float)uStack_90;
  *(float *)((long)puVar5 + 0x34) = fStack_44;
  *(float *)(puVar5 + 7) = fStack_48;
  *puVar5 = &PTR_FUN_110c3d0c8;
  puVar5[1] = puVar7;
  func_0x00010981611c(puVar7,0,1);
  puVar6 = puVar5 + 0x18;
  FUN_10aa68764(param_2,param_3,puVar6,param_4);
  FUN_10aa48018();
  uStack_60 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar5 + 0x14) >> 0x20) * -0.01,
                       (float)*(undefined8 *)((long)puVar5 + 0x14) * -0.01);
  uStack_58 = (ulong)(uint)(*(float *)((long)puVar5 + 0x1c) * -0.01);
  uStack_88 = puVar6[1];
  uStack_90 = *puVar6;
  uStack_78 = puVar6[3];
  uStack_80 = puVar6[2];
  uStack_68 = puVar6[5];
  uStack_70 = puVar6[4];
  func_0x000109816320(puVar7,&uStack_90,puVar5 + 0x18);
  *(undefined4 *)(puVar5 + 0xb) = 0;
  *param_1 = puVar5;
  return;
}



/* Entry: 10aa28dd4; end: 10aa28e77;  */

void FUN_10aa28dd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar1[5] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(float *)(puVar1 + 2) = (float)param_3 * (float)param_2 * (float)param_2 * 1.0471976;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_FUN_110c3d120;
  puVar1[1] = puVar1 + 8;
  FUN_10aa68764(param_2,param_3,puVar1 + 8,param_4);
  *param_1 = puVar1;
  return;
}



/* Entry: 10aa28e78; end: 10aa2913b;  */

void FUN_10aa28e78(undefined8 *param_1,float param_2,float param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  puVar2 = (undefined8 *)0x90;
  __Znwm();
  puVar1 = puVar2 + 8;
  puVar2[5] = 0x3f80000000000000;
  puVar2[4] = 0;
  *(float *)(puVar2 + 2) = param_3 * param_2 * param_2 * 3.1415927;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_FUN_110c3d178;
  puVar2[1] = puVar1;
  param_2 = param_2 * 0.01;
  param_3 = param_3 * 0.005;
  if (param_4 == 2) {
    uStack_44 = 0;
    puVar2[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 9) = 0x23;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0x3d23d70a;
    puVar2[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar2 + 0x11) = 1;
    puVar2[0xd] = 0x3f800000;
    puVar2[0xc] = 0x3f8000003f800000;
    puVar2[0xf] = (ulong)(uint)(param_3 * 1.0 + -0.04);
    puVar2[0xe] = CONCAT44(param_2 * 1.0 + -0.04,param_2 * 1.0 + -0.04);
    fStack_50 = param_2;
    fStack_4c = param_2;
    fStack_48 = param_3;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar2 + 9) = 0xd;
    puVar2[8] = &PTR_DAT_110b13b70;
    *(undefined4 *)(puVar2 + 0x11) = 2;
  }
  else if (param_4 == 1) {
    uStack_44 = 0;
    puVar2[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 9) = 0x23;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0x3d23d70a;
    puVar2[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar2 + 0x11) = 1;
    puVar2[0xd] = 0x3f800000;
    puVar2[0xc] = 0x3f8000003f800000;
    puVar2[0xf] = (ulong)(uint)(param_2 * 1.0 + -0.04);
    puVar2[0xe] = CONCAT44(param_3 * 1.0 + -0.04,param_2 * 1.0 + -0.04);
    fStack_50 = param_2;
    fStack_4c = param_3;
    fStack_48 = param_2;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar2 + 9) = 0xd;
  }
  else if (param_4 == 0) {
    uStack_44 = 0;
    puVar2[0xb] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 9) = 0x23;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0x3d23d70a;
    puVar2[8] = &PTR_DAT_110b139d0;
    *(undefined4 *)(puVar2 + 0x11) = 1;
    puVar2[0xd] = 0x3f800000;
    puVar2[0xc] = 0x3f8000003f800000;
    puVar2[0xf] = (ulong)(uint)(param_2 * 1.0 + -0.04);
    puVar2[0xe] = CONCAT44(param_2 * 1.0 + -0.04,param_3 * 1.0 + -0.04);
    fStack_50 = param_3;
    fStack_4c = param_2;
    fStack_48 = param_2;
    func_0x000109815150(0x3dcccccd,puVar1,&fStack_50);
    *(undefined4 *)(puVar2 + 9) = 0xd;
    puVar2[8] = &PTR_DAT_110b13aa0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
  }
  *(undefined4 *)(puVar2 + 0xb) = 0;
  (**(code **)(*(long *)puVar2[1] + 0x40))(0x3f800000,(long *)puVar2[1],&fStack_50);
  puVar2[6] = CONCAT44(fStack_4c * 10000.0,fStack_50 * 10000.0);
  *(float *)(puVar2 + 7) = fStack_48 * 10000.0;
  *param_1 = puVar2;
  return;
}



/* Entry: 10aa2913c; end: 10aa29187;  */

long FUN_10aa2913c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x38);
  if (*plVar1 != 0) {
    FUN_10aa297fc(plVar1);
    __ZdlPv(*plVar1);
  }
  FUN_10aa3c924(param_1 + 0x20);
  FUN_10aa3c924(param_1 + 8);
  return param_1;
}


