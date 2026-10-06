/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dc4958; end: 100dc4a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc4958(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a4f78;
  lVar2 = *param_2;
  func_0x000107c61428(lVar2 + _DAT_1130a4f78,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  *param_1 = lVar2;
  return;
}



/* Entry: 100dc4a08; end: 100dc4a57;  */

void FUN_100dc4a08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4a58; end: 100dc4ac3;  */

void FUN_100dc4a58(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x19 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4ac4; end: 100dc4acf;  */

void FUN_100dc4ac4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4ad0; end: 100dcfd5f;  */

void FUN_100dc4ad0(undefined8 param_1,ulong param_2,ulong param_3,float *param_4,undefined8 param_5,
                  float *param_6,undefined8 *param_7,undefined8 param_8,long param_9,
                  undefined4 *param_10)

{
  undefined4 uVar1;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar2;
  
  uVar1 = *param_10;
  uVar2 = param_10[1];
  do {
    pfVar10 = param_6 + 8;
    fVar14 = *param_6;
    fVar18 = param_6[1];
    fVar19 = param_6[2];
    fVar20 = param_6[3];
    fVar21 = param_6[4];
    fVar24 = param_6[5];
    fVar25 = param_6[6];
    fVar26 = param_6[7];
    uVar7 = param_3 - 0x10;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    if (param_3 < 0x10) {
      if (((uint)uVar7 >> 3 & 1) != 0) goto LAB_100dc4b88;
LAB_100dc4ba8:
      pfVar8 = param_4 + 1;
      fVar35 = *param_4;
      param_6 = pfVar10 + 8;
      fVar14 = fVar14 + (float)*(undefined8 *)pfVar10 * fVar35;
      fVar18 = fVar18 + (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar35;
      fVar19 = fVar19 + (float)*(undefined8 *)(pfVar10 + 2) * fVar35;
      fVar20 = fVar20 + (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) * fVar35;
      fVar21 = fVar21 + (float)*(undefined8 *)(pfVar10 + 4) * fVar35;
      fVar24 = fVar24 + (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20) * fVar35;
      fVar25 = fVar25 + (float)*(undefined8 *)(pfVar10 + 6) * fVar35;
      fVar26 = fVar26 + (float)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x20) * fVar35;
    }
    else {
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      fVar41 = 0.0;
      fVar42 = 0.0;
      fVar43 = 0.0;
      fVar44 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      pfVar8 = param_4;
      pfVar9 = pfVar10;
      do {
        param_4 = pfVar8 + 4;
        fVar13 = (float)*(undefined8 *)pfVar8;
        fVar14 = fVar14 + (float)*(undefined8 *)pfVar9 * fVar13;
        fVar18 = fVar18 + (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar13;
        fVar19 = fVar19 + (float)*(undefined8 *)(pfVar9 + 2) * fVar13;
        fVar20 = fVar20 + (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) * fVar13;
        fVar21 = fVar21 + (float)*(undefined8 *)(pfVar9 + 4) * fVar13;
        fVar24 = fVar24 + (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20) * fVar13;
        fVar25 = fVar25 + (float)*(undefined8 *)(pfVar9 + 6) * fVar13;
        fVar26 = fVar26 + (float)((ulong)*(undefined8 *)(pfVar9 + 6) >> 0x20) * fVar13;
        fVar13 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
        fVar27 = fVar27 + (float)*(undefined8 *)(pfVar9 + 8) * fVar13;
        fVar28 = fVar28 + (float)((ulong)*(undefined8 *)(pfVar9 + 8) >> 0x20) * fVar13;
        fVar29 = fVar29 + (float)*(undefined8 *)(pfVar9 + 10) * fVar13;
        fVar30 = fVar30 + (float)((ulong)*(undefined8 *)(pfVar9 + 10) >> 0x20) * fVar13;
        fVar31 = fVar31 + (float)*(undefined8 *)(pfVar9 + 0xc) * fVar13;
        fVar32 = fVar32 + (float)((ulong)*(undefined8 *)(pfVar9 + 0xc) >> 0x20) * fVar13;
        fVar33 = fVar33 + (float)*(undefined8 *)(pfVar9 + 0xe) * fVar13;
        fVar34 = fVar34 + (float)((ulong)*(undefined8 *)(pfVar9 + 0xe) >> 0x20) * fVar13;
        pfVar10 = pfVar9 + 0x20;
        bVar5 = 0xf < uVar7;
        uVar7 = uVar7 - 0x10;
        fVar13 = (float)*(undefined8 *)(pfVar8 + 2);
        fVar35 = fVar35 + (float)*(undefined8 *)(pfVar9 + 0x10) * fVar13;
        fVar36 = fVar36 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x10) >> 0x20) * fVar13;
        fVar37 = fVar37 + (float)*(undefined8 *)(pfVar9 + 0x12) * fVar13;
        fVar38 = fVar38 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x12) >> 0x20) * fVar13;
        fVar39 = fVar39 + (float)*(undefined8 *)(pfVar9 + 0x14) * fVar13;
        fVar40 = fVar40 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x14) >> 0x20) * fVar13;
        fVar41 = fVar41 + (float)*(undefined8 *)(pfVar9 + 0x16) * fVar13;
        fVar42 = fVar42 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x16) >> 0x20) * fVar13;
        fVar13 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
        fVar43 = fVar43 + (float)*(undefined8 *)(pfVar9 + 0x18) * fVar13;
        fVar44 = fVar44 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x18) >> 0x20) * fVar13;
        fVar45 = fVar45 + (float)*(undefined8 *)(pfVar9 + 0x1a) * fVar13;
        fVar46 = fVar46 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x1a) >> 0x20) * fVar13;
        fVar47 = fVar47 + (float)*(undefined8 *)(pfVar9 + 0x1c) * fVar13;
        fVar48 = fVar48 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x1c) >> 0x20) * fVar13;
        fVar49 = fVar49 + (float)*(undefined8 *)(pfVar9 + 0x1e) * fVar13;
        fVar50 = fVar50 + (float)((ulong)*(undefined8 *)(pfVar9 + 0x1e) >> 0x20) * fVar13;
        pfVar8 = param_4;
        pfVar9 = pfVar10;
      } while (bVar5);
      fVar14 = fVar14 + fVar35;
      fVar18 = fVar18 + fVar36;
      fVar19 = fVar19 + fVar37;
      fVar20 = fVar20 + fVar38;
      fVar27 = fVar27 + fVar43;
      fVar28 = fVar28 + fVar44;
      fVar29 = fVar29 + fVar45;
      fVar30 = fVar30 + fVar46;
      fVar21 = fVar21 + fVar39;
      fVar24 = fVar24 + fVar40;
      fVar25 = fVar25 + fVar41;
      fVar26 = fVar26 + fVar42;
      fVar31 = fVar31 + fVar47;
      fVar32 = fVar32 + fVar48;
      fVar33 = fVar33 + fVar49;
      fVar34 = fVar34 + fVar50;
      uVar6 = (uint)uVar7;
      if ((uVar6 >> 3 & 1) != 0) {
LAB_100dc4b88:
        fVar35 = (float)*(undefined8 *)param_4;
        fVar14 = fVar14 + (float)*(undefined8 *)pfVar10 * fVar35;
        fVar18 = fVar18 + (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) * fVar35;
        fVar19 = fVar19 + (float)*(undefined8 *)(pfVar10 + 2) * fVar35;
        fVar20 = fVar20 + (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) * fVar35;
        fVar21 = fVar21 + (float)*(undefined8 *)(pfVar10 + 4) * fVar35;
        fVar24 = fVar24 + (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20) * fVar35;
        fVar25 = fVar25 + (float)*(undefined8 *)(pfVar10 + 6) * fVar35;
        fVar26 = fVar26 + (float)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x20) * fVar35;
        fVar35 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
        fVar27 = fVar27 + (float)*(undefined8 *)(pfVar10 + 8) * fVar35;
        fVar28 = fVar28 + (float)((ulong)*(undefined8 *)(pfVar10 + 8) >> 0x20) * fVar35;
        fVar29 = fVar29 + (float)*(undefined8 *)(pfVar10 + 10) * fVar35;
        fVar30 = fVar30 + (float)((ulong)*(undefined8 *)(pfVar10 + 10) >> 0x20) * fVar35;
        fVar31 = fVar31 + (float)*(undefined8 *)(pfVar10 + 0xc) * fVar35;
        fVar32 = fVar32 + (float)((ulong)*(undefined8 *)(pfVar10 + 0xc) >> 0x20) * fVar35;
        fVar33 = fVar33 + (float)*(undefined8 *)(pfVar10 + 0xe) * fVar35;
        fVar34 = fVar34 + (float)((ulong)*(undefined8 *)(pfVar10 + 0xe) >> 0x20) * fVar35;
        uVar6 = (uint)uVar7;
        param_4 = param_4 + 2;
        pfVar10 = pfVar10 + 0x10;
      }
      pfVar8 = param_4;
      param_6 = pfVar10;
      if ((uVar6 >> 2 & 1) != 0) goto LAB_100dc4ba8;
    }
    auVar15._0_4_ = fVar14 + fVar27;
    auVar15._4_4_ = fVar18 + fVar28;
    auVar15._8_4_ = fVar19 + fVar29;
    auVar15._12_4_ = fVar20 + fVar30;
    auVar22._0_4_ = fVar21 + fVar31;
    auVar22._4_4_ = fVar24 + fVar32;
    auVar22._8_4_ = fVar25 + fVar33;
    auVar22._12_4_ = fVar26 + fVar34;
    bVar5 = param_2 < 8;
    param_2 = param_2 - 8;
    auVar16._4_4_ = uVar1;
    auVar16._0_4_ = uVar1;
    auVar16._8_4_ = uVar1;
    auVar16._12_4_ = uVar1;
    auVar16 = NEON_fmax(auVar15,auVar16,4);
    auVar23._4_4_ = uVar1;
    auVar23._0_4_ = uVar1;
    auVar23._8_4_ = uVar1;
    auVar23._12_4_ = uVar1;
    auVar23 = NEON_fmax(auVar22,auVar23,4);
    auVar3._4_4_ = uVar2;
    auVar3._0_4_ = uVar2;
    auVar3._8_4_ = uVar2;
    auVar3._12_4_ = uVar2;
    auVar17 = NEON_fmin(auVar16,auVar3,4);
    auVar4._4_4_ = uVar2;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = uVar2;
    auVar4._12_4_ = uVar2;
    auVar16 = NEON_fmin(auVar23,auVar4,4);
    if (bVar5) {
      puVar11 = param_7;
      if (((uint)param_2 >> 2 & 1) != 0) {
        puVar11 = param_7 + 2;
        param_7[1] = auVar17._8_8_;
        *param_7 = auVar17._0_8_;
        auVar17 = auVar16;
      }
      puVar12 = puVar11;
      if (((uint)param_2 >> 1 & 1) != 0) {
        puVar12 = puVar11 + 1;
        *puVar11 = auVar17._0_8_;
        uVar7 = auVar17._8_8_;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar7;
      }
      if ((param_2 & 1) != 0) {
        *(int *)puVar12 = auVar17._0_4_;
      }
      return;
    }
    param_7[1] = auVar17._8_8_;
    *param_7 = auVar17._0_8_;
    param_7[3] = auVar16._8_8_;
    param_7[2] = auVar16._0_8_;
    param_7 = (undefined8 *)((long)param_7 + param_9);
    param_4 = (float *)((long)pfVar8 - param_3);
    if (param_2 == 0) {
      return;
    }
  } while( true );
}



/* Entry: 100dcfd60; end: 100dcfd83;  */

void FUN_100dcfd60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dcfd84; end: 100dcfe5b;  */

void FUN_100dcfd84(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dcfe5c; end: 100dcfe9b;  */

void FUN_100dcfe5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dcfe9c; end: 100dcfec7;  */

long FUN_100dcfe9c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100dcfec8; end: 100dcfeeb;  */

void FUN_100dcfec8(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dcfeec; end: 100dcff0f;  */

undefined8 FUN_100dcfeec(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100dcff10; end: 100dcff83;  */

void FUN_100dcff10(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  }
  else {
    func_0x000100183ab8(unaff_x20 + 0x20);
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dcff84; end: 100dcff8f;  */

void FUN_100dcff84(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dcff90; end: 100dd0013;  */

void FUN_100dcff90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  if ((*(byte *)(unaff_x20 + 0x40) & 1) == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
  else {
    func_0x000100183ab8(unaff_x20 + 0x18);
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dd0014; end: 100dd001f;  */

void FUN_100dd0014(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dd0020; end: 100dd0053;  */

void FUN_100dd0020(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dd0054; end: 100dd006f;  */

void FUN_100dd0054(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dd0070; end: 100dd009b;  */

undefined8 * FUN_100dd0070(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100dd009c; end: 100dd009f;  */

undefined8 * FUN_100dd009c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000104a4c704(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100dd00a0; end: 100dd03a3;  */

void FUN_100dd00a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100dd00a0);
  (*pcVar1)();
}



/* Entry: 100dd03a4; end: 100dd03ab; -[_TtC31AgeVerificationFHPActionHandler31AgeVerificationFHPActionHandler actionHandlerType] */

undefined8 FUN_100dd03a4(void)

{
  return 0x23;
}



/* Entry: 100dd03ac; end: 100dd0627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd03ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c4db74();
    func_0x000107c61180();
    if (lVar4 == 0) {
      uVar6 = 0;
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &UNK_110352388;
      func_0x000107c613fc(&UNK_110352388,0x18,7);
      *(long *)(puVar5 + 0x10) = lVar4;
      uVar6 = 0x100dd0914;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d35980);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = uVar6;
    puVar1[1] = puVar5;
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000100083b20(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    uVar6 = 1;
    func_0x000103ff5678(1);
    puVar5 = &UNK_110352338;
    func_0x000107c613fc(&UNK_110352338,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar7 = &UNK_110352360;
    func_0x000107c613fc(&UNK_110352360,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(long *)(puVar7 + 0x18) = param_1;
    pcVar8 = *(code **)(lStack_58 + 8);
    func_0x000107c6157c(puVar5);
    func_0x000107c61174(param_1);
    (*pcVar8)(uVar6,1,FUN_100dd090c,puVar7,uStack_60,lStack_58);
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(uVar6);
    func_0x000107c61574(puVar7);
    func_0x0001000834e4(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100dd0514);
  (*pcVar8)();
}



/* Entry: 100dd0628; end: 100dd075b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0628(long param_1,undefined8 param_2,undefined8 param_3,char param_4,long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd075c);
      (*pcVar2)();
    }
    if (param_4 == '\0') {
      lVar3 = param_5;
      func_0x000107c5d17c(param_5);
      func_0x000107c61180();
      func_0x000107c61174(param_2);
      func_0x000107c5c47c();
      uVar1 = 2;
      if (param_5 != 1) {
        uVar1 = 0;
      }
      uVar4 = 0;
      func_0x000104064644(0);
      func_0x000107c610f8();
      uVar5 = 0;
      func_0x0001040643bc(0,0,1,uVar1,uVar4);
      func_0x0001040640a4(0);
      func_0x000107c610f8();
      lVar6 = param_1;
      func_0x000107c61174();
      func_0x000104063d68(lVar3,param_1,param_2,0,0xf000000000000000,uVar5);
      func_0x000107c42c1c(*(undefined8 *)(lVar6 + _DAT_112d35970));
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100dd075c; end: 100dd07af; -[_TtC31AgeVerificationFHPActionHandler31AgeVerificationFHPActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x000100dd0798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd079c) */

void FUN_100dd075c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100dd03ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100dd07b0; end: 100dd080f; -[_TtC31AgeVerificationFHPActionHandler31AgeVerificationFHPActionHandler init] */

void FUN_100dd07b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFHPActionHandler.AgeVerificationFHPActionHandler",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd07dc);
  (*pcVar1)();
}



/* Entry: 100dd0810; end: 100dd085b; -[_TtC31AgeVerificationFHPActionHandler31AgeVerificationFHPActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100dd083c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd0840) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0810(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d35970));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d35978));
  return;
}



/* Entry: 100dd085c; end: 100dd08eb; -[_TtC31AgeVerificationFHPActionHandler31AgeVerificationFHPActionHandler ageVerificationScopeDidCompleteWithResult:] */

/* WARNING: Possible PIC construction at 0x000100dd08bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd08c0) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd085c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d35970);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  pcVar2 = *(code **)(param_1 + _DAT_112d35980);
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(((undefined8 *)(param_1 + _DAT_112d35980))[1]);
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dd08ec; end: 100dd090b;  */

void FUN_100dd08ec(void)

{
  func_0x000107c61168(&PTR_PTR_112796e60);
  return;
}



/* Entry: 100dd090c; end: 100dd099f;  */

void FUN_100dd090c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_80;
  pcVar3 = "handleOnTapAction(with:)";
  func_0x0001000c10c0("handleOnTapAction(with:)");
  func_0x000107c61180();
  puVar4 = &UNK_1103523b0;
  func_0x000107c613fc(&UNK_1103523b0,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  puVar4[0x28] = (char)param_3;
  *(undefined8 *)(puVar4 + 0x30) = uVar2;
  uStack_60 = 0x100dd0948;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1103523c8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000100dd0978(param_1,param_2,param_3);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 100dd09a0; end: 100dd0a0f;  */

undefined8 FUN_100dd09a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_100dd0a2c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100dd0a10; end: 100dd0a2b;  */

void FUN_100dd0a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dd0a2c; end: 100dd0b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar6 = *(undefined8 *)(param_3 + _DAT_113045ee0);
  lVar3 = 0;
  FUN_100dd08ec();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d35980);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d35970) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112d35978) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_50,puVar2);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd0b14; end: 100dd0b33;  */

void FUN_100dd0b14(void)

{
  func_0x000107c61168(&PTR_PTR_112d359f0);
  return;
}



/* Entry: 100dd0b34; end: 100dd0b3f; -[SCAgeVerificationFHPActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0b34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d35a48;
  func_0x000107c61428(param_1 + _DAT_112d35a48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd0b40; end: 100dd0b4b; -[SCAgeVerificationFHPActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d35a48;
  func_0x000107c61428(param_1 + _DAT_112d35a48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd0b4c; end: 100dd0b57; -[SCAgeVerificationFHPActionHandlerEntryPoint challengeProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0b4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d35a50;
  func_0x000107c61428(param_1 + _DAT_112d35a50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd0b58; end: 100dd0b9b;  */

void FUN_100dd0b58(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd0b9c; end: 100dd0ba7; -[SCAgeVerificationFHPActionHandlerEntryPoint setChallengeProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d35a50;
  func_0x000107c61428(param_1 + _DAT_112d35a50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd0ba8; end: 100dd0bfb;  */

void FUN_100dd0ba8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd0bfc; end: 100dd0c43; -[SCAgeVerificationFHPActionHandlerEntryPoint ageVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0bfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d35a58;
  func_0x000107c61428(param_1 + _DAT_112d35a58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100dd0c44; end: 100dd0ca7; -[SCAgeVerificationFHPActionHandlerEntryPoint setAgeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd0c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d35a58;
  func_0x000107c61428(param_1 + _DAT_112d35a58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100dd0ca8; end: 100dd0dab;  */

/* WARNING: Possible PIC construction at 0x000100dd0d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dd0d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd0d3c) */
/* WARNING: Removing unreachable block (ram,0x000100dd0d4c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100dd0ca8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3da38();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3f788();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_100dd0b14(0);
        func_0x000107c613fc();
        FUN_100dd0a2c(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100dd0dac; end: 100dd0dd3; -[SCAgeVerificationFHPActionHandlerEntryPoint begin] */

void FUN_100dd0dac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dd0ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dd0dd4; end: 100dd0e17; -[SCAgeVerificationFHPActionHandlerEntryPoint end] */

void FUN_100dd0dd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd0e18; end: 100dd101b;  */

void FUN_100dd0e18(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10f0480)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef0fb80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001b;
        if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10f0460)) &&
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef0fba0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AgeVerificationFHPActionHandler/SCAgeVerificationFHPActionHandlerEntryPoint.swift"
                              ,0x51,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd101c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52594();
        goto LAB_100dd0ea4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c532ec();
  }
LAB_100dd0ea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dd101c; end: 100dd10c7; -[SCAgeVerificationFHPActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_100dd101c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100dd0e18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dd10c8; end: 100dd1147; -[SCAgeVerificationFHPActionHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd10c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d35a48,0);
  func_0x000107c61614(param_1 + _DAT_112d35a50,0);
  *(undefined8 *)(param_1 + _DAT_112d35a58) = 0;
  *(undefined8 *)(param_1 + _DAT_112d35a60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dd1148; end: 100dd117b;  */

void FUN_100dd1148(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dd117c; end: 100dd11d3; -[SCAgeVerificationFHPActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd117c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d35a48);
  func_0x000107c61610(param_1 + _DAT_112d35a50);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d35a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d35a60));
  return;
}



/* Entry: 100dd11d4; end: 100dd11f3;  */

void FUN_100dd11d4(void)

{
  func_0x000107c61168(&PTR_PTR_112796f30);
  return;
}



/* Entry: 100dd11f4; end: 100dd11fb; -[_TtC32AgeVerificationFHPSignalProvider32AgeVerificationFHPSignalProvider preCheckSource] */

undefined8 FUN_100dd11f4(void)

{
  return 0x28;
}



/* Entry: 100dd11fc; end: 100dd122f; -[_TtC32AgeVerificationFHPSignalProvider32AgeVerificationFHPSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100dd11fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100dd12f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100dd1230; end: 100dd128f; -[_TtC32AgeVerificationFHPSignalProvider32AgeVerificationFHPSignalProvider init] */

void FUN_100dd1230(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFHPSignalProvider.AgeVerificationFHPSignalProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd125c);
  (*pcVar1)();
}



/* Entry: 100dd1290; end: 100dd12d7; -[_TtC32AgeVerificationFHPSignalProvider32AgeVerificationFHPSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100dd12bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd12c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1290(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d35a90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d35a98));
  return;
}



/* Entry: 100dd12d8; end: 100dd12f7;  */

void FUN_100dd12d8(void)

{
  func_0x000107c61168(&PTR_PTR_112797000);
  return;
}



/* Entry: 100dd12f8; end: 100dd15ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dd12f8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x20;
  code *pcVar11;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d35a98);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar7 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    return puVar7;
  }
  uVar9 = 0x800000010ef0fc90;
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027);
  lVar4 = lVar2;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100dd15f0);
      (*pcVar11)();
    }
    lVar5 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      uVar1 = (uint)(uVar9 >> 0x20);
      uVar10 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar10 == 0) {
          if ((uVar9 & 0xff000000000000) != 0) {
LAB_100dd1468:
            puVar8 = PTR_PTR_1126ae560;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000100083b20(auStack_88);
            func_0x0001000a8868(auStack_88,uStack_70);
            uVar3 = 1;
            func_0x000103ff5678(1);
            puVar7 = &UNK_1103524a0;
            func_0x000107c613fc(&UNK_1103524a0,0x18,7);
            *(undefined **)(puVar7 + 0x10) = puVar8;
            pcVar11 = *(code **)(lStack_68 + 8);
            func_0x000107c61174(puVar8);
            (*pcVar11)(uVar3,1,FUN_100dd15f0,puVar7,uStack_70,lStack_68);
            func_0x000107c6142c(uVar3);
            func_0x000107c61574(puVar7);
            func_0x0001000834e4(auStack_88);
            puVar7 = puVar8;
            func_0x000107c43bf4(puVar8);
            func_0x000107c61180();
            func_0x000107c61170(puVar8);
            func_0x00010006c090(lVar6,uVar9);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar4);
            return puVar7;
          }
        }
        else if ((long)(int)lVar6 != lVar6 >> 0x20) goto LAB_100dd1468;
      }
      else if ((uVar10 == 2) && (*(long *)(lVar6 + 0x10) != *(long *)(lVar6 + 0x18)))
      goto LAB_100dd1468;
      func_0x00010006c090(lVar6,uVar9);
    }
  }
  puVar7 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar7);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 100dd15f0; end: 100dd163b;  */

void FUN_100dd15f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100dd163c; end: 100dd16ab;  */

undefined8 FUN_100dd163c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_100dd16c8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100dd16ac; end: 100dd16c7;  */

void FUN_100dd16ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dd16c8; end: 100dd17c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd16c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  uVar6 = *(undefined8 *)(param_2 + _DAT_113045ee0);
  lVar2 = 0;
  FUN_100dd12d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112d35aa0;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112d35a90) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112d35a98) = param_3;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100dd17c4; end: 100dd17e3;  */

void FUN_100dd17c4(void)

{
  func_0x000107c61168(&PTR_PTR_112d35b10);
  return;
}



/* Entry: 100dd17e4; end: 100dd17ef; -[SCAgeVerificationFHPSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd17e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d35b68;
  func_0x000107c61428(param_1 + _DAT_112d35b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd17f0; end: 100dd17fb; -[SCAgeVerificationFHPSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd17f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d35b68;
  func_0x000107c61428(param_1 + _DAT_112d35b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd17fc; end: 100dd1807; -[SCAgeVerificationFHPSignalProviderEntryPoint challengeProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd17fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d35b70;
  func_0x000107c61428(param_1 + _DAT_112d35b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd1808; end: 100dd1813; -[SCAgeVerificationFHPSignalProviderEntryPoint setChallengeProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d35b70;
  func_0x000107c61428(param_1 + _DAT_112d35b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd1814; end: 100dd181f; -[SCAgeVerificationFHPSignalProviderEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1814(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d35b78;
  func_0x000107c61428(param_1 + _DAT_112d35b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd1820; end: 100dd1863;  */

void FUN_100dd1820(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd1864; end: 100dd186f; -[SCAgeVerificationFHPSignalProviderEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d35b78;
  func_0x000107c61428(param_1 + _DAT_112d35b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd1870; end: 100dd18c3;  */

void FUN_100dd1870(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dd18c4; end: 100dd19c7;  */

/* WARNING: Possible PIC construction at 0x000100dd1954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dd1964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dd1958) */
/* WARNING: Removing unreachable block (ram,0x000100dd1968) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100dd18c4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f788();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3df78();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_100dd17c4(0);
        func_0x000107c613fc();
        FUN_100dd16c8(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100dd19c8; end: 100dd19ef; -[SCAgeVerificationFHPSignalProviderEntryPoint begin] */

void FUN_100dd19c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dd18c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dd19f0; end: 100dd1a33; -[SCAgeVerificationFHPSignalProviderEntryPoint end] */

void FUN_100dd19f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dd1a34; end: 100dd1c37;  */

void FUN_100dd1a34(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10f0480)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef0fb80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef10f0340)) &&
           (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AgeVerificationFHPSignalProvider/SCAgeVerificationFHPSignalProviderEntryPoint.swift"
                              ,0x53,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100dd1c38);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52844();
        goto LAB_100dd1ac0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c532ec();
  }
LAB_100dd1ac0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dd1c38; end: 100dd1ce3; -[SCAgeVerificationFHPSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100dd1c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100dd1a34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dd1ce4; end: 100dd1d6b; -[SCAgeVerificationFHPSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1ce4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d35b68,0);
  func_0x000107c61614(param_1 + _DAT_112d35b70,0);
  func_0x000107c61614(param_1 + _DAT_112d35b78,0);
  *(undefined8 *)(param_1 + _DAT_112d35b80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dd1d6c; end: 100dd1d9f;  */

void FUN_100dd1d6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dd1da0; end: 100dd1df7; -[SCAgeVerificationFHPSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1da0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d35b68);
  func_0x000107c61610(param_1 + _DAT_112d35b70);
  func_0x000107c61610(param_1 + _DAT_112d35b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d35b80));
  return;
}



/* Entry: 100dd1df8; end: 100dd1e17;  */

void FUN_100dd1df8(void)

{
  func_0x000107c61168(&PTR_PTR_1127970d0);
  return;
}



/* Entry: 100dd1e18; end: 100dd1e73;  */

void FUN_100dd1e18(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100dd1e74; end: 100dd1eb7;  */

void FUN_100dd1e74(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100dd1eb8; end: 100dd1ecf;  */

void FUN_100dd1eb8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 100dd1ed0; end: 100dd1f3f;  */

void FUN_100dd1ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 100dd1f40; end: 100dd2597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd1f40(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  long alStack_130 [4];
  undefined1 auStack_110 [8];
  undefined **ppuStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  long alStack_d8 [3];
  long alStack_c0 [3];
  long lStack_a8;
  undefined **ppuStack_a0;
  long alStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  lVar2 = 0;
  func_0x000100de45a4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar11;
  puVar4 = PTR_PTR_1126a5d30;
  func_0x000107c610f8();
  func_0x000107c61174(uVar11);
  func_0x000107c453e4();
  lVar13 = _DAT_113052548;
  puVar15 = *(ulong **)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)((long)puVar15 + _DAT_113052548);
  ppuStack_78 = &PTR_DAT_110352c68;
  lVar5 = 0;
  alStack_98[0] = lVar3;
  lStack_80 = lVar2;
  func_0x000100de4ff4();
  lVar3 = lVar5;
  func_0x000107c613fc();
  FUN_100dd2598(alStack_98,lVar3 + 0x18);
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined8 *)(lVar3 + 0x40) = uVar11;
  lVar2 = *(long *)((long)puVar15 + _DAT_113052538);
  if (lVar2 == 0) {
    func_0x000107c61174(uVar11);
    lVar13 = 2;
    FUN_100de4618();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x78))();
    if (lVar13 != 0) {
      func_0x000107c3da34();
      func_0x000107c615e8(lVar13);
    }
  }
  else {
    uVar9 = *(ulong *)(lVar2 + _DAT_1130524b8);
    if (uVar9 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar6 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) {
      func_0x000107c61174(uVar11);
      func_0x000107c61174(lVar2);
      lVar13 = 0;
      FUN_100de4618();
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x78))();
      if (lVar13 != 0) {
        func_0x000107c3da34();
        func_0x000107c615e8(lVar13);
      }
      func_0x000107c61170(lVar2);
    }
    else {
      puStack_e8 = (undefined8 *)(lVar2 + _DAT_1130524c0);
      ppuStack_f0 = (undefined **)lVar13;
      lVar10 = puStack_e8[1];
      lStack_e0 = lVar5;
      if (lVar10 == 0) {
        uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c61174(uVar11);
        func_0x000107c61174(lVar2);
        func_0x000107c3e938();
        func_0x000107c61180();
        uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_113046c80);
        lVar5 = 0;
        FUN_100de5f04();
        lVar13 = lVar5;
        func_0x000107c613fc();
        *(undefined8 *)(lVar13 + 0x10) = uVar16;
        *(undefined8 *)(lVar13 + 0x18) = uVar11;
        ppuVar14 = &PTR_DAT_110352db8;
        ppuVar18 = &PTR_DAT_110352da8;
      }
      else {
        uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113045f50);
        uVar16 = *(undefined8 *)(*(long *)((long)puVar15 + lVar13) + _DAT_1130525a8);
        func_0x000107c61174(uVar11);
        func_0x000107c61174(lVar2);
        func_0x000107c6157c(uVar17);
        func_0x000103ff5678();
        uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_113046c80);
        lVar5 = 0;
        func_0x000100de6554();
        lVar13 = lVar5;
        func_0x000107c613fc();
        *(undefined8 *)(lVar13 + 0x10) = uVar17;
        *(undefined8 *)(lVar13 + 0x18) = uVar16;
        *(undefined8 *)(lVar13 + 0x20) = uVar11;
        ppuVar14 = &PTR_DAT_1103531d0;
        ppuVar18 = &PTR_DAT_1103531f0;
      }
      ppuStack_108 = ppuVar18;
      func_0x000107c61174(uVar11);
      alStack_98[0] = lVar13;
      lStack_80 = lVar5;
      ppuStack_78 = ppuVar18;
      ppuStack_70 = ppuVar14;
      FUN_100de47dc(lVar10 == 0);
      uVar7 = 0;
      FUN_100dec988();
      uStack_f8 = uVar7;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0x78))();
      plVar8 = alStack_98;
      FUN_100dd26f4(plVar8,lVar5);
      ppuVar14 = ppuStack_70;
      lVar13 = lStack_80;
      FUN_100dd26f4(alStack_98,lStack_80);
      lStack_a8 = lVar13;
      ppuStack_a0 = ppuVar14;
      func_0x0001000c5db4(alStack_c0);
      (**(code **)(*(long *)(lVar13 + -8) + 0x10))();
      uVar11 = *puStack_e8;
      uVar16 = puStack_e8[1];
      puStack_100 = auStack_110;
      alStack_d8[0] = lVar3;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(extraout_x12 + 0x10))(auStack_110 + lVar13,plVar8,lVar5);
      func_0x000107c61434(uVar16);
      func_0x000107c6157c(lVar3);
      *(undefined ***)((long)alStack_130 + lVar13 + 0x10) = ppuStack_108;
      *(long *)((long)alStack_130 + lVar13) = lVar5;
      *(undefined ***)((long)alStack_130 + lVar13 + 8) = &PTR_DAT_110352d18;
      uVar17 = uVar7;
      FUN_100df0488(uVar7,alStack_d8,auStack_110 + lVar13,alStack_c0,uVar11,uVar16,uStack_f8,
                    lStack_e0);
      func_0x000107c615e8(uVar7);
      puVar1 = puStack_100;
      uVar11 = 0;
      FUN_100de9a08();
      lVar13 = lStack_80;
      uVar16 = *(undefined8 *)((long)puVar15 + (long)ppuStack_f0);
      uVar12 = *(undefined8 *)((long)puVar15 + _DAT_113052530);
      ppuStack_f0 = ppuStack_78;
      uStack_f8 = uVar11;
      FUN_100dd26f4(alStack_98,lStack_80);
      puStack_e8 = (undefined8 *)puVar1;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      lVar5 = (long)puVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(extraout_x12_00 + 0x10))(lVar5);
      alStack_c0[0] = lVar3;
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(lVar3);
      func_0x000107c6157c(uVar17);
      func_0x000107c61174(uVar16);
      func_0x000107c615f0(uVar12);
      func_0x000107c61174(uVar7);
      *(undefined ***)(lVar5 + -8) = ppuStack_f0;
      *(long *)(lVar5 + -0x18) = lVar13;
      *(undefined ***)(lVar5 + -0x10) = &PTR_DAT_110352d18;
      *(long *)(lVar5 + -0x20) = lStack_e0;
      uVar11 = uVar17;
      func_0x000100deaafc(uVar17,uVar16,uVar12,lVar5,lVar2,alStack_c0,uVar7,uStack_f8);
      func_0x000107c61574(uVar17);
      func_0x000107c61170(uVar16);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar7);
      func_0x000107c61428(unaff_x20 + 0x40,alStack_c0,1,0);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar11;
      func_0x000107c61170(uVar16);
      func_0x000107c61428(unaff_x20 + 0x40,alStack_d8,0x20,0);
      lVar13 = *(long *)(unaff_x20 + 0x40);
      if (lVar13 != 0) {
        func_0x000107c614a8(alStack_d8);
        func_0x000107c61174(lVar13);
        FUN_100de7e18();
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar2);
        func_0x000107c61574(uVar17);
        func_0x000107c61574(lVar3);
        func_0x000100dd2718(alStack_98);
        return;
      }
      func_0x000100dd2718(alStack_98);
      func_0x000107c614a8(alStack_d8);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar17);
    }
  }
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 100dd2598; end: 100dd25af;  */

undefined8 * FUN_100dd2598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100dd25b0; end: 100dd2643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100dd25b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_48,0,0);
  lVar1 = _DAT_112d36e10;
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if ((lVar3 != 0) && (*(long *)(lVar3 + _DAT_112d36e10) != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112d36dc0);
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c41864(uVar4);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    *(undefined8 *)(lVar3 + lVar1) = 0;
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
  }
  return 0;
}



/* Entry: 100dd2644; end: 100dd26af;  */

void FUN_100dd2644(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 100dd26b0; end: 100dd26f3;  */

void FUN_100dd26b0(void)

{
  FUN_100dd1f40();
  return;
}



/* Entry: 100dd26f4; end: 100dd2737;  */

long * FUN_100dd26f4(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100dd2738; end: 100dd2757;  */

void FUN_100dd2738(void)

{
  func_0x000107c61168(&PTR_PTR_112d35c40);
  return;
}



/* Entry: 100dd2758; end: 100dd275f;  */

uint FUN_100dd2758(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  uStack_70 = param_1;
  lStack_68 = param_2;
  func_0x000107c5eea4();
  lStack_80 = *(long *)(lVar4 + -8);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar13 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_01;
  lVar5 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar8 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar8 - extraout_x12_02;
  lVar4 = 0x112d36018;
  func_0x0001000285a8(0x112d36018,&UNK_10d900730);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar14 - extraout_x8_01;
  lVar4 = (long)*(int *)(lVar4 + 0x30);
  FUN_100dd4984(uStack_70,lVar10,FUN_100dd3210);
  FUN_100dd4984(lStack_68,lVar10 + lVar4,FUN_100dd3210);
  lVar6 = lVar10;
  func_0x000107c614c4(lVar10,lVar5);
  lVar2 = lStack_78;
  lVar1 = lStack_80;
  iVar3 = (int)lVar6;
  if (iVar3 < 2) {
    lStack_68 = lVar12;
    if (iVar3 == 0) {
      FUN_100dd4984(lVar10,lVar14,FUN_100dd3210);
      lVar6 = lVar10 + lVar4;
      func_0x000107c614c4(lVar6,lVar5);
      if ((int)lVar6 == 0) {
        pcVar9 = *(code **)(lVar1 + 0x20);
        (*pcVar9)(lVar11,lVar14,lVar2);
        lVar6 = lStack_68;
        (*pcVar9)(lStack_68,lVar10 + lVar4,lVar2);
        lVar4 = lVar11;
        func_0x000107c5ee90(lVar11,lVar6);
        uVar7 = (uint)lVar4;
        pcVar9 = *(code **)(lVar1 + 8);
        (*pcVar9)(lVar6,lVar2);
        lVar15 = lVar11;
LAB_100dd4948:
        (*pcVar9)(lVar15,lVar2);
        FUN_100dd45fc(lVar10,FUN_100dd3210);
        goto LAB_100dd4960;
      }
    }
    else {
      FUN_100dd4984(lVar10,lVar8,FUN_100dd3210);
      lVar6 = lVar10 + lVar4;
      func_0x000107c614c4(lVar6,lVar5);
      lVar14 = lVar8;
      if ((int)lVar6 == 1) {
        pcVar9 = *(code **)(lVar1 + 0x20);
        (*pcVar9)(lVar15,lVar8,lVar2);
        (*pcVar9)(lVar13,lVar10 + lVar4,lVar2);
        lVar4 = lVar15;
        func_0x000107c5ee90(lVar15,lVar13);
        uVar7 = (uint)lVar4;
        pcVar9 = *(code **)(lVar1 + 8);
        (*pcVar9)(lVar13,lVar2);
        goto LAB_100dd4948;
      }
    }
    (**(code **)(lVar1 + 8))(lVar14,lVar2);
  }
  else if (iVar3 == 2) {
    lVar4 = lVar10 + lVar4;
    func_0x000107c614c4(lVar4,lVar5);
    if ((int)lVar4 == 2) goto LAB_100dd4844;
  }
  else if (iVar3 == 3) {
    lVar4 = lVar10 + lVar4;
    func_0x000107c614c4(lVar4,lVar5);
    if ((int)lVar4 == 3) {
LAB_100dd4844:
      FUN_100dd45fc(lVar10,FUN_100dd3210);
      uVar7 = 1;
      goto LAB_100dd4960;
    }
  }
  else {
    lVar4 = lVar10 + lVar4;
    func_0x000107c614c4(lVar4,lVar5);
    if ((int)lVar4 == 4) goto LAB_100dd4844;
  }
  func_0x000100dd49c8(lVar10,0x112d36018,&UNK_10d900730);
  uVar7 = 0;
LAB_100dd4960:
  return uVar7 & 1;
}



/* Entry: 100dd2760; end: 100dd27b3;  */

byte FUN_100dd2760(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  FUN_100dd437c();
  if ((uVar1 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + (long)*(int *)(param_3 + 0x14)) ^
            *(byte *)(param_2 + *(int *)(param_3 + 0x14)) ^ 1;
  }
  return bVar2 & 1;
}



/* Entry: 100dd27b4; end: 100dd2957;  */

void FUN_100dd27b4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar2 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100dd4984(param_2,puVar6);
  puVar3 = puVar6;
  func_0x000107c614c4(puVar6,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      FUN_100dd4984(param_3,param_1,0x100dd38e8);
      FUN_100dd45fc(puVar6,FUN_100dd3210);
      return;
    }
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar7 = *(long *)(lVar2 + -8);
    (**(code **)(lVar7 + 0x20))(param_1,puVar6,lVar2);
    pcVar5 = *(code **)(lVar7 + 0x38);
    uVar4 = 0;
  }
  else if (iVar1 == 2) {
    lVar2 = 0;
    func_0x000107c5eea4();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 3;
  }
  else {
    if (iVar1 == 3) {
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,3,lVar2);
      lVar2 = 0;
      func_0x000100dd38e8();
      *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x14)) = 1;
      return;
    }
    lVar2 = 0;
    func_0x000107c5eea4();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 2;
  }
  (*pcVar5)(param_1,uVar4,3,lVar2);
  lVar2 = 0;
  func_0x000100dd38e8();
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x14)) =
       *(undefined1 *)(param_3 + *(int *)(lVar2 + 0x14));
  return;
}



/* Entry: 100dd2958; end: 100dd2a6f;  */

undefined1 * FUN_100dd2958(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100dd4984(param_1,lVar6);
  lVar3 = lVar6;
  func_0x000107c614c4(lVar6,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar1);
    puVar4 = puVar5;
    FUN_100dd2b60(puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
  }
  else {
    FUN_100dd45fc(lVar6,FUN_100dd3210);
    puVar4 = (undefined1 *)0x0;
  }
  return puVar4;
}



/* Entry: 100dd2a70; end: 100dd2b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd2a70(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100dd4984(param_1,puVar3);
  puVar2 = puVar3;
  func_0x000107c614c4(puVar3,lVar1);
  if ((int)puVar2 == 2) {
    func_0x0001000a8868(unaff_x20 + _DAT_112d35cd8,
                        *(undefined8 *)(unaff_x20 + _DAT_112d35cd8 + 0x18));
    FUN_100de4c18(0xd5,0);
  }
  else if ((int)puVar2 == 4) {
    func_0x0001000a8868(unaff_x20 + _DAT_112d35cd8,
                        *(undefined8 *)(unaff_x20 + _DAT_112d35cd8 + 0x18));
    FUN_100de4a2c(0xd2,1);
  }
  else {
    FUN_100dd45fc(puVar3,FUN_100dd3210);
  }
  return;
}



/* Entry: 100dd2b60; end: 100dd2c77;  */

long FUN_100dd2b60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  lVar1 = 0;
  FUN_100dd3210();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d36028,&UNK_10d900740);
  func_0x000107c613fc();
  lVar2 = 1;
  func_0x00010008747c();
  lVar4 = lVar2;
  FUN_100dd6b3c();
  lVar3 = lVar4;
  FUN_100dd2c78();
  if (lVar4 < lVar3) {
    uVar5 = 2;
  }
  else {
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar6,param_1,lVar4);
    uVar5 = 1;
  }
  func_0x000107c6159c(puVar6,lVar1,uVar5);
  func_0x000100087c34(puVar6);
  FUN_100dd45fc(puVar6,FUN_100dd3210);
  return lVar2;
}



/* Entry: 100dd2c78; end: 100dd2e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dd2c78(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  uVar10 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112d35cd0) + _DAT_1130524b8);
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(uVar10);
    func_0x000100dd4260(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100dd2e30);
      (*pcVar2)();
    }
    uVar12 = 0;
    do {
      puVar8 = puStack_68;
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar12;
        FUN_100de9c4c(uVar12,uVar10);
      }
      lVar9 = _DAT_1130524a8;
      func_0x000107c61428(uVar3 + _DAT_1130524a8,auStack_80,0,0);
      uVar13 = *(undefined8 *)(uVar3 + lVar9);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar8 + 0x10);
      puStack_68 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
        func_0x000100dd4260(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
      }
      puVar8 = puStack_68;
      uVar12 = uVar12 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puStack_68 + uVar3 * 8 + 0x20) = uVar13;
    } while (uVar11 != uVar12);
    func_0x000107c6142c(uVar10);
  }
  if (*(long *)(puVar8 + 0x10) == 0) {
    lVar9 = 0x7fffffffffffffff;
  }
  else {
    lVar9 = *(long *)(puVar8 + 0x20);
    lVar4 = *(long *)(puVar8 + 0x10) + -1;
    if (lVar4 != 0) {
      plVar5 = (long *)(puVar8 + 0x28);
      lVar6 = lVar9;
      do {
        lVar7 = *plVar5;
        lVar1 = lVar7;
        if (lVar6 <= lVar7) {
          lVar7 = lVar6;
          lVar1 = lVar9;
        }
        lVar9 = lVar1;
        lVar4 = lVar4 + -1;
        plVar5 = plVar5 + 1;
        lVar6 = lVar7;
      } while (lVar4 != 0);
    }
  }
  func_0x000107c6142c(puVar8);
  return lVar9;
}



/* Entry: 100dd2e30; end: 100dd2e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd2e30(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112d35cd0));
  lVar1 = *(long *)(((undefined8 *)(unaff_x20 + _DAT_112d35cd8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112d35cd8));
  return;
}



/* Entry: 100dd2e5c; end: 100dd2ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd2e5c(long *param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)((long)param_1 + _DAT_112d35cd0);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x0001000834e4((long)param_1 + _DAT_112d35cd8);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 100dd2ebc; end: 100dd2ecf;  */

void FUN_100dd2ebc(undefined8 param_1)

{
  if (lRam0000000112d35d10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60e2fc);
  return;
}



/* Entry: 100dd2ed0; end: 100dd2f2b;  */

void FUN_100dd2ed0(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBOWV_11034d658 + 0x40;
  puStack_20 = &UNK_10d9005e8;
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  func_0x000107c61524(param_1,0x100,3,&puStack_28,param_1 + 0xd8);
  return;
}


