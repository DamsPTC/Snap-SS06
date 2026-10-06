/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2f0f14; end: 10a2f0f8b;  */

void FUN_10a2f0f14(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a2f0f8c; end: 10a2f18db;  */

void FUN_10a2f0f8c(float param_1,float param_2,float param_3,float param_4,float *param_5,
                  long param_6,long param_7,float *param_8)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined8 uVar34;
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
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  lVar1 = *(long *)(param_6 + 0x18);
  fVar35 = param_4;
  fVar18 = param_1;
  fVar7 = param_2;
  fVar45 = param_3;
  FUN_10a601e00();
  puVar4 = *(undefined8 **)(param_6 + 0x20);
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  FUN_10a2d1e28(puVar4);
  fVar35 = fVar35 + *(float *)(param_7 + 0x54);
  fStack_b0 = fVar18;
  fStack_ac = fVar7;
  fStack_a8 = fVar45;
  fStack_a4 = fVar35;
  if (*(char *)(lVar1 + 0x2f0) == '\x01') {
    FUN_10a42b498(lVar1);
    *(undefined1 *)(lVar1 + 0x2f0) = 0;
  }
  lVar5 = 200;
  if (*(ulong *)(lVar1 + 0x4d0) < 2) {
    lVar5 = 0x1e0;
  }
  FUN_10a2d1d3c(*param_8,param_8[1],&fStack_f0,lVar1 + lVar5 + 0x3c8);
  pfVar2 = &fStack_b0;
  FUN_10a2d1eb8(pfVar2,&fStack_f0,&fStack_a0);
  if ((((ulong)pfVar2 & 1) == 0) ||
     (fVar16 = (fStack_98 - fStack_e8) * fStack_dc, fVar6 = fStack_98, fVar14 = fStack_a0,
     fVar17 = fStack_9c,
     (fStack_a0 - fStack_f0) * fStack_e4 + (fStack_9c - fStack_ec) * fStack_e0 + fVar16 <= 0.0)) {
    func_0x0001094f5708(&fStack_f0,lVar1 + lVar5 + 0x388);
    fVar6 = *param_8 * 2.0 + -1.0;
    fVar14 = param_8[1] * -2.0 + 1.0;
    fVar16 = fVar6 * fStack_e4 + fVar14 * fStack_d4 + fStack_c4 + fStack_b4;
    fVar31 = fStack_f0 * fVar6 + fStack_e0 * fVar14 + fStack_d0 + fStack_c0;
    fVar21 = fStack_ec * fVar6 + fStack_dc * fVar14 + fStack_cc + fStack_bc;
    fVar23 = fVar31 / fVar16;
    fVar8 = (fStack_ec * fVar6 + fStack_dc * fVar14 + fStack_cc + fStack_bc) / fVar16;
    fVar27 = fVar21 / fVar16;
    fVar42 = (fStack_e8 * fVar6 + fStack_d8 * fVar14 + fStack_c8 + fStack_b8) / fVar16;
    FUN_10a2cd058(*(undefined8 *)(lVar1 + 0x178));
    fVar23 = fVar23 - fVar21;
    fVar27 = fVar27 - fVar31;
    fVar42 = fVar42 - fVar16;
    fVar6 = fVar27;
    fVar14 = fVar31;
    fVar17 = fVar16;
    FUN_10a2ce5c8(puVar4);
    fVar46 = SQRT(fVar17 * fVar17 + fVar6 * fVar6 + fVar14 * fVar14);
    dVar33 = 0.0;
    if ((1.1920929e-07 <= fVar46) &&
       (fVar9 = SQRT(fVar42 * fVar42 + fVar23 * fVar23 + fVar27 * fVar27), 1.1920929e-07 <= fVar9))
    {
      fVar9 = (fVar17 * fVar42 + fVar6 * fVar23 + fVar14 * fVar27) / (fVar46 * fVar9);
      fVar46 = -1.0;
      if (-1.0 <= fVar9) {
        fVar46 = fVar9;
      }
      fVar9 = 1.0;
      if (fVar46 <= 1.0) {
        fVar9 = fVar46;
      }
      _acosf();
      dVar33 = (double)fVar9;
    }
    fVar10 = -(fVar8 - fVar31);
    fVar9 = -(fVar42 * fVar6) + fVar23 * fVar17;
    fVar8 = fVar14 * -fVar23 + fVar27 * fVar6;
    fVar46 = fVar17 * fVar10 + fVar42 * fVar14;
    fVar17 = 1.0 / SQRT(fVar8 * fVar8 + fVar46 * fVar46 + fVar9 * fVar9);
    fVar14 = 0.5;
    fVar6 = (float)(1.5707963267948966 - dVar33) * 0.5;
    ___sincosf_stret();
    fVar46 = fVar17 * fVar46 * fVar6;
    fVar9 = fVar9 * fVar17 * fVar6;
    fVar6 = fVar17 * fVar8 * fVar6;
    fVar8 = fVar6 * fVar10 + fVar9 * fVar42;
    fVar10 = -(fVar42 * fVar46) + fVar23 * fVar6;
    fVar11 = fVar9 * -fVar23 + fVar27 * fVar46;
    fVar17 = fVar14 * fVar8 + -(fVar10 * fVar6) + fVar11 * fVar9;
    fVar6 = fVar14 * fVar10 + -(fVar11 * fVar46) + fVar8 * fVar6;
    fVar14 = fVar14 * fVar11 + -(fVar8 * fVar9) + fVar10 * fVar46;
    fVar21 = fVar21 + fVar23 + fVar17 + fVar17;
    fVar31 = fVar31 + fVar27 + fVar6 + fVar6;
    fVar16 = fVar16 + fVar42 + fVar14 + fVar14;
    fVar35 = fVar45 * (fVar16 - fVar45 * fVar35) +
             fVar18 * (fVar21 - fVar18 * fVar35) + fVar7 * (fVar31 - fVar7 * fVar35);
    fVar16 = fVar16 - fVar45 * fVar35;
    fStack_e0 = fVar18 * 0.0 + (fVar21 - fVar18 * fVar35);
    fVar6 = fVar45 * 0.0 + fVar16;
    fVar14 = fStack_e0;
    fVar17 = fVar7 * 0.0 + (fVar31 - fVar7 * fVar35);
  }
  lVar5 = *(long *)(*(long *)(param_6 + 0x10) + 0x140);
  fVar18 = fVar6;
  FUN_10a2ce5c8(puVar4);
  FUN_10a2f0738(lVar1);
  puVar3 = puVar4;
  FUN_10a2ce354();
  fVar21 = (float)*puVar3 * fVar18 + (float)puVar3[2] * fVar16 +
           (float)puVar3[4] * fStack_e0 + (float)puVar3[6] * 0.0;
  fVar23 = (float)*(undefined8 *)((long)puVar3 + 4) * fVar18 +
           (float)*(undefined8 *)((long)puVar3 + 0x14) * fVar16 +
           (float)*(undefined8 *)((long)puVar3 + 0x24) * fStack_e0 +
           (float)*(undefined8 *)((long)puVar3 + 0x34) * 0.0;
  fVar27 = (float)((ulong)*(undefined8 *)((long)puVar3 + 4) >> 0x20) * fVar18 +
           (float)((ulong)*(undefined8 *)((long)puVar3 + 0x14) >> 0x20) * fVar16 +
           (float)((ulong)*(undefined8 *)((long)puVar3 + 0x24) >> 0x20) * fStack_e0 +
           (float)((ulong)*(undefined8 *)((long)puVar3 + 0x34) >> 0x20) * 0.0;
  uVar20 = *(ulong *)(param_7 + 0x38);
  fVar46 = (float)((ulong)*(undefined8 *)(param_7 + 0x3c) >> 0x20);
  fVar7 = (float)uVar20;
  uVar34 = NEON_ext(uVar20,CONCAT44(fVar27,fVar23),4,1);
  fVar35 = (float)((ulong)uVar34 >> 0x20);
  fVar31 = SQRT((fVar7 * fVar7 + (float)uVar34 * (float)uVar34 + fVar46 * fVar46) *
                (fVar21 * fVar21 + fVar35 * fVar35 + fVar27 * fVar27));
  fVar45 = (float)(uVar20 >> 0x20);
  fVar35 = fVar7 * fVar21 + fVar23 * fVar45 + fVar46 * fVar27 + fVar31;
  if (fVar31 * 1e-06 <= fVar35) {
    fStack_1a8 = fVar27 * fVar45;
    fVar45 = (float)*(undefined8 *)(param_7 + 0x3c) * -fVar21 + fVar23 * fVar7;
    fStack_1a8 = fVar46 * -((float)((ulong)*puVar3 >> 0x20) * fVar18 +
                            (float)((ulong)puVar3[2] >> 0x20) * fVar16 +
                           (float)((ulong)puVar3[4] >> 0x20) * fStack_e0 +
                           (float)((ulong)puVar3[6] >> 0x20) * 0.0) + fStack_1a8;
    uVar20 = CONCAT44(fVar35,-(fVar27 * fVar7) + fVar21 * fVar46);
  }
  else {
    fVar35 = 0.0;
    if (ABS(fVar7) <= ABS(fVar46)) {
      fStack_1a8 = 0.0;
      uVar20 = (ulong)(uint)-fVar46;
    }
    else {
      fStack_1a8 = -fVar45;
      fVar45 = 0.0;
      uVar20 = uVar20 & 0xffffffff;
    }
  }
  fStack_1ac = (float)uVar20;
  fVar18 = (float)(uVar20 >> 0x20);
  fVar18 = fVar45 * fVar45 + fStack_1ac * fStack_1ac + fStack_1a8 * fStack_1a8 + fVar18 * fVar18;
  if (fVar18 == 0.0) {
    fStack_1ac = 0.0;
    fStack_1a8 = 0.0;
    fStack_1b0 = 0.0;
    fVar7 = 1.0;
    fStack_1b4 = 1.0;
  }
  else {
    fVar18 = 1.0 / SQRT(fVar18);
    fStack_1b4 = fVar35 * fVar18;
    fStack_1a8 = fVar18 * fStack_1a8;
    fStack_1ac = fVar18 * fStack_1ac;
    fVar7 = fVar18 * fVar45;
    fStack_1b0 = fVar7;
    fVar35 = fStack_1a8;
  }
  fVar37 = *(float *)(param_7 + 0x44);
  fVar39 = *(float *)(param_7 + 0x48);
  fVar36 = *(float *)(param_7 + 0x4c);
  fVar38 = *(float *)(param_7 + 0x50);
  FUN_10a2ce414(puVar4);
  fVar16 = fVar7;
  fVar21 = fVar45;
  fVar46 = fVar35;
  fVar31 = fVar18;
  FUN_10a2f1b50(*(undefined8 *)(*(long *)(param_6 + 0x10) + 0x188));
  fVar23 = fVar46;
  fVar27 = fVar31;
  func_0x00010a0d8ae0(lVar5);
  fVar24 = *(float *)(lVar5 + 0x54);
  fVar8 = *(float *)(lVar5 + 0x58);
  fVar25 = *(float *)(lVar5 + 0x5c);
  fVar9 = *(float *)(lVar5 + 0x60);
  fVar10 = *(float *)(param_7 + 0x18);
  fVar28 = *(float *)(param_7 + 0x1c);
  fVar11 = *(float *)(param_7 + 0x14);
  fVar42 = fVar11;
  FUN_10a2cd058(lVar5);
  lVar1 = *(long *)(*(long *)(param_6 + 0x10) + 0x188);
  if (lVar1 == 0) {
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar19 = 0.0;
    fVar22 = 0.0;
    fVar26 = 1.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar32 = 0.0;
    fVar40 = 1.0;
    fVar47 = 0.0;
    fVar48 = 1.0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x140);
    if ((*(byte *)(lVar1 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar1);
    }
    fVar40 = *(float *)(lVar1 + 0x100);
    fVar32 = *(float *)(lVar1 + 0x104);
    fVar30 = *(float *)(lVar1 + 0x108);
    fVar29 = *(float *)(lVar1 + 0x110);
    fVar26 = *(float *)(lVar1 + 0x114);
    fVar22 = *(float *)(lVar1 + 0x118);
    fVar19 = *(float *)(lVar1 + 0x120);
    fVar15 = *(float *)(lVar1 + 0x124);
    fVar12 = (float)*(undefined8 *)(lVar1 + 0x130) * 0.0;
    fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x130) >> 0x20) * 0.0;
    fVar47 = *(float *)(lVar1 + 0x138) * 0.0;
    fVar48 = *(float *)(lVar1 + 0x128);
  }
  fVar43 = (fStack_1b0 * fVar38 + fVar36 * fStack_1b4 + fVar39 * fStack_1a8) - fVar37 * fStack_1ac;
  fVar44 = (fStack_1ac * fVar38 + fVar39 * fStack_1b4 + fVar37 * fStack_1b0) - fVar36 * fStack_1a8;
  fVar41 = ((-(fStack_1a8 * fVar37) + fVar38 * fStack_1b4) - fVar39 * fStack_1ac) -
           fVar36 * fStack_1b0;
  fVar39 = (fStack_1a8 * fVar38 + fVar37 * fStack_1b4 + fVar36 * fStack_1ac) - fVar39 * fStack_1b0;
  fVar36 = ((-(fVar7 * fVar39) + fVar41 * fVar45) - fVar44 * fVar35) - fVar43 * fVar18;
  fVar37 = (fVar7 * fVar41 + fVar39 * fVar45 + fVar43 * fVar35) - fVar44 * fVar18;
  fVar38 = (fVar35 * fVar41 + fVar44 * fVar45 + fVar39 * fVar18) - fVar43 * fVar7;
  fVar18 = (fVar18 * fVar41 + fVar43 * fVar45 + fVar44 * fVar7) - fVar39 * fVar35;
  fVar35 = (param_4 * fVar31 + param_3 * fVar21 + param_2 * fVar16) - param_1 * fVar46;
  fVar7 = (param_4 * fVar46 + param_2 * fVar21 + param_1 * fVar31) - param_3 * fVar16;
  fVar45 = ((-(fVar16 * param_1) + param_4 * fVar21) - param_2 * fVar46) - param_3 * fVar31;
  fVar21 = (param_4 * fVar16 + param_1 * fVar21 + param_3 * fVar46) - param_2 * fVar31;
  fVar31 = (fVar36 * fVar35 + fVar18 * fVar45 + fVar38 * fVar21) - fVar37 * fVar7;
  fVar16 = (fVar36 * fVar21 + fVar37 * fVar45 + fVar18 * fVar7) - fVar38 * fVar35;
  fVar46 = ((-(fVar21 * fVar37) + fVar36 * fVar45) - fVar38 * fVar7) - fVar18 * fVar35;
  fVar7 = (fVar36 * fVar7 + fVar38 * fVar45 + fVar37 * fVar35) - fVar18 * fVar21;
  fVar45 = -(fVar11 * fVar38) + fVar10 * fVar37;
  fVar21 = -(fVar28 * fVar37) + fVar11 * fVar18;
  fVar39 = -(fVar10 * fVar18) + fVar28 * fVar38;
  fVar35 = fVar36 * fVar45 + -(fVar39 * fVar38) + fVar21 * fVar37;
  fVar27 = (fVar6 - (fVar28 + fVar35 + fVar35)) - fVar27;
  fVar35 = fVar36 * fVar39 + -(fVar21 * fVar18) + fVar45 * fVar38;
  fVar42 = (fVar14 - (fVar11 + fVar35 + fVar35)) - fVar42;
  fVar35 = fVar36 * fVar21 + -(fVar45 * fVar37) + fVar39 * fVar18;
  fVar23 = (fVar17 - (fVar10 + fVar35 + fVar35)) - fVar23;
  *param_5 = fVar12 + fVar27 * fVar19 + fVar23 * fVar29 + fVar42 * fVar40;
  param_5[1] = fVar13 + fVar27 * fVar15 + fVar23 * fVar26 + fVar42 * fVar32;
  param_5[2] = fVar47 + fVar27 * fVar48 + fVar23 * fVar22 + fVar42 * fVar30;
  param_5[3] = ((fVar9 * fVar16 - fVar24 * fVar46) - fVar25 * fVar7) + fVar8 * fVar31;
  param_5[4] = ((fVar9 * fVar7 - fVar8 * fVar46) - fVar24 * fVar31) + fVar25 * fVar16;
  param_5[5] = ((fVar9 * fVar31 - fVar25 * fVar46) - fVar8 * fVar16) + fVar24 * fVar7;
  param_5[6] = fVar24 * fVar16 + fVar9 * fVar46 + fVar8 * fVar7 + fVar25 * fVar31;
  uVar34 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_5 + 7) = uVar34;
  param_5[9] = 1.0;
  return;
}



/* Entry: 10a2f18dc; end: 10a2f18eb;  */

void FUN_10a2f18dc(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined1 uStack_54;
  undefined7 uStack_53;
  undefined1 uStack_4c;
  undefined8 uStack_4b;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  lVar2 = *(long *)(param_2 + 0x10);
  puVar3 = *(undefined8 **)(param_2 + 0x18);
  puVar5 = puVar3;
  FUN_10a2f19cc();
  uStack_40 = (uint)param_1;
  uStack_3c = (undefined4)((ulong)param_1 >> 0x20);
  uStack_38 = SUB84(puVar5,0);
  uVar1 = uStack_40 & 0xff;
  if (uVar1 == 3) {
    *(ulong *)((long)puVar3 + 0x5c) = CONCAT44(uStack_38,uStack_3c);
  }
  else if (uVar1 == 2) {
    *(undefined1 *)(puVar3 + 0xf) = 0;
  }
  else if (uVar1 == 1) {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    FUN_10a601f04(uVar4,(ulong)&uStack_40 | 4);
    if ((int)uVar4 != 0) {
      FUN_10a2f0374(&uStack_bc,lVar2,(ulong)&uStack_40 | 4);
      puVar3[9] = uStack_74;
      puVar3[8] = uStack_7c;
      puVar3[0xb] = uStack_64;
      puVar3[10] = uStack_6c;
      puVar3[0xd] = CONCAT71(uStack_53,uStack_54);
      puVar3[0xc] = uStack_5c;
      *(undefined8 *)((long)puVar3 + 0x71) = uStack_4b;
      *(ulong *)((long)puVar3 + 0x69) = CONCAT17(uStack_4c,uStack_53);
      puVar3[1] = uStack_b4;
      *puVar3 = uStack_bc;
      puVar3[3] = uStack_a4;
      puVar3[2] = uStack_ac;
      puVar3[5] = uStack_94;
      puVar3[4] = uStack_9c;
      puVar3[7] = uStack_84;
      puVar3[6] = uStack_8c;
    }
  }
  return;
}



/* Entry: 10a2f18ec; end: 10a2f19cb;  */

void FUN_10a2f18ec(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined1 uStack_54;
  undefined7 uStack_53;
  undefined1 uStack_4c;
  undefined8 uStack_4b;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  puVar3 = param_2;
  FUN_10a2f19cc();
  uStack_40 = (uint)param_3;
  uStack_3c = (undefined4)((ulong)param_3 >> 0x20);
  uStack_38 = SUB84(puVar3,0);
  uVar1 = uStack_40 & 0xff;
  if (uVar1 == 3) {
    *param_4 = CONCAT44(uStack_38,uStack_3c);
  }
  else if (uVar1 == 2) {
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  else if (uVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    FUN_10a601f04(uVar2,(ulong)&uStack_40 | 4);
    if ((int)uVar2 != 0) {
      FUN_10a2f0374(&uStack_bc,param_1,(ulong)&uStack_40 | 4);
      param_2[9] = uStack_74;
      param_2[8] = uStack_7c;
      param_2[0xb] = uStack_64;
      param_2[10] = uStack_6c;
      param_2[0xd] = CONCAT71(uStack_53,uStack_54);
      param_2[0xc] = uStack_5c;
      *(undefined8 *)((long)param_2 + 0x71) = uStack_4b;
      *(ulong *)((long)param_2 + 0x69) = CONCAT17(uStack_4c,uStack_53);
      param_2[1] = uStack_b4;
      *param_2 = uStack_bc;
      param_2[3] = uStack_a4;
      param_2[2] = uStack_ac;
      param_2[5] = uStack_94;
      param_2[4] = uStack_9c;
      param_2[7] = uStack_84;
      param_2[6] = uStack_8c;
    }
  }
  return;
}



/* Entry: 10a2f19cc; end: 10a2f1b1b;  */

undefined1  [16] FUN_10a2f19cc(long *param_1)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  int iStack_10;
  undefined4 uStack_c;
  
  lVar7 = param_1[2];
  if (lVar7 == 0) {
LAB_10a2f1ad8:
    iStack_10 = (uint)iStack_10._1_3_ << 8;
  }
  else {
    plVar8 = (long *)*param_1;
    if (plVar8 != param_1 + 1) {
      uVar4 = 0;
      uVar3 = 0;
      uVar5 = 0;
      uVar6 = 0;
      do {
        if ((int)plVar8[4] == 1) {
          if (uVar6 == 0) {
            uVar3 = *(ulong *)((long)plVar8 + 0x24);
          }
          uVar6 = uVar6 + 1;
        }
        else if ((int)plVar8[4] == 0) {
          if (uVar5 == 0) {
            uVar4 = *(ulong *)((long)plVar8 + 0x24);
          }
          uVar5 = uVar5 + 1;
        }
        plVar9 = plVar8;
        plVar1 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar9[2];
            bVar2 = (long *)*plVar8 != plVar9;
            plVar9 = plVar8;
          } while (bVar2);
        }
        else {
          do {
            plVar8 = plVar1;
            plVar1 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != param_1 + 1);
      if (lVar7 != 1) goto LAB_10a2f1aa0;
      if (uVar5 == 1) {
        iStack_10 = CONCAT31(iStack_10._1_3_,1);
        uStack_c = (undefined4)uVar4;
        uVar4 = uVar4 >> 0x20;
        goto LAB_10a2f1b14;
      }
      if (uVar6 != 1) goto LAB_10a2f1b04;
      iStack_10 = CONCAT31(iStack_10._1_3_,3);
      uVar4 = uVar3;
LAB_10a2f1af8:
      uStack_c = (undefined4)uVar4;
      uVar4 = uVar4 >> 0x20;
      goto LAB_10a2f1b14;
    }
    if (lVar7 != 1) {
      uVar3 = 0;
      uVar4 = 0;
      uVar6 = 0;
      uVar5 = 0;
LAB_10a2f1aa0:
      if ((uint)uVar5 + (uint)uVar6 == 1) {
        iStack_10 = CONCAT31(iStack_10._1_3_,1);
        if (uVar5 != 1) {
          uVar4 = uVar3;
        }
        goto LAB_10a2f1af8;
      }
      if ((uVar6 != 1) || (uVar5 == 0)) goto LAB_10a2f1ad8;
    }
LAB_10a2f1b04:
    iStack_10 = CONCAT31(iStack_10._1_3_,2);
  }
  uVar4 = 0;
  uStack_c = 0;
LAB_10a2f1b14:
  auVar10._4_4_ = uStack_c;
  auVar10._0_4_ = iStack_10;
  auVar10._8_8_ = uVar4;
  return auVar10;
}



/* Entry: 10a2f1b1c; end: 10a2f1b4f;  */

void FUN_10a2f1b1c(void)

{
  return;
}



/* Entry: 10a2f1b50; end: 10a2f1bb7;  */

float FUN_10a2f1b50(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  if (param_5 != 0) {
    func_0x00010a2cd08c(*(undefined8 *)(param_5 + 0x140));
    return -param_1 /
           (param_4 * param_4 + param_1 * param_1 + param_2 * param_2 + param_3 * param_3);
  }
  return 0.0;
}



/* Entry: 10a2f1bb8; end: 10a2f1beb;  */

undefined4 FUN_10a2f1bb8(long param_1)

{
  if ((*(byte *)(param_1 + 0x2a) >> 3 & 1) != 0) {
    func_0x00010a3e9130(param_1);
  }
  return *(undefined4 *)(param_1 + 0xa4);
}



/* Entry: 10a2f1bec; end: 10a2f1fcb;  */

void FUN_10a2f1bec(float param_1,float param_2,float param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uStack_98 = 0;
  lVar7 = *(long *)(param_5 + 0x10);
  lVar3 = lVar7;
  FUN_10a2f18ec(lVar7,*(undefined8 *)(param_5 + 0x18),param_4,&uStack_98);
  if ((int)lVar3 != 0) {
    lVar3 = *(long *)(lVar7 + 0x18);
    FUN_10a601e00();
    lVar10 = *(long *)(*(long *)(lVar7 + 0x10) + 0x140);
    uVar9 = *(undefined8 *)(lVar3 + 0x178);
    lVar8 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar10 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar10);
    }
    FUN_10a2cd058(uVar9);
    uVar9 = *(undefined8 *)(lVar10 + 0xc0);
    lVar6 = *(long *)(param_5 + 0x18);
    fVar14 = *(float *)(lVar6 + 8);
    fVar18 = *(float *)(lVar6 + 0xc);
    fVar21 = *(float *)(lVar6 + 0x10);
    fVar22 = *(float *)(lVar10 + 200);
    fVar24 = *(float *)(lVar10 + 0xd8);
    fVar25 = *(float *)(lVar10 + 0xe8);
    fVar26 = *(float *)(lVar10 + 0xf8);
    uVar16 = *(undefined8 *)(lVar10 + 0xd0);
    fVar13 = (float)uVar9 * fVar14 + (float)uVar16 * fVar18;
    uVar17 = *(undefined8 *)(lVar10 + 0xe0);
    uVar20 = *(undefined8 *)(lVar10 + 0xf0);
    fVar19 = (float)uVar20 * 0.0;
    fVar15 = (float)uVar17 * fVar21 + fVar19;
    fVar27 = fVar13 + fVar15;
    FUN_10a2cd058(lVar10);
    fVar19 = fVar19 + fVar14 * fVar22 + fVar18 * fVar24 + fVar21 * fVar25 + fVar26 * 0.0;
    fVar22 = uStack_98._4_4_;
    fVar25 = *(float *)(*(long *)(param_5 + 0x18) + 0x60);
    fVar24 = (fVar27 + fVar13) - param_1;
    fVar15 = ((float)((ulong)uVar9 >> 0x20) * fVar14 + (float)((ulong)uVar16 >> 0x20) * fVar18 +
              (float)((ulong)uVar17 >> 0x20) * fVar21 + (float)((ulong)uVar20 >> 0x20) * 0.0 +
             fVar15) - param_2;
    fVar26 = fVar19 - param_3;
    fVar13 = param_1;
    fVar14 = fVar24;
    FUN_10a2ce5c8(lVar8);
    fVar21 = SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar15 * fVar15);
    fVar18 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar19 * fVar19);
    dVar23 = 0.0;
    bVar2 = true;
    if ((1.1920929e-07 <= fVar21) && (bVar2 = false, !NAN(fVar18))) {
      bVar2 = fVar18 < 1.1920929e-07;
    }
    if (!bVar2) {
      fVar14 = ((-(fVar15 * fVar19) - fVar14 * fVar24) - fVar26 * fVar13) / (fVar21 * fVar18);
      fVar13 = -1.0;
      if (-1.0 <= fVar14) {
        fVar13 = fVar14;
      }
      fVar14 = 1.0;
      if (fVar13 <= 1.0) {
        fVar14 = fVar13;
      }
      _acosf();
      dVar23 = (double)fVar14;
    }
    dVar23 = 3.141592653589793 - dVar23;
    _cos();
    fVar13 = 0.001;
    if ((float)dVar23 != 0.0) {
      fVar13 = -(float)dVar23;
    }
    uVar9 = 0;
    uStack_a8 = 0xff7fffff00000000;
    uStack_b0 = 0;
    uStack_a0 = 0xff7fffffff7fffff;
    plVar12 = *(long **)(*(long *)(lVar7 + 0x18) + 0x390);
    for (plVar11 = *(long **)(*(long *)(lVar7 + 0x18) + 0x388); fVar14 = (float)uVar9,
        plVar11 != plVar12; plVar11 = plVar11 + 2) {
      plVar4 = (long *)plVar11[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar4, plVar4 != (long *)0x0)) {
        lStack_c0 = *plVar11;
        if (lStack_c0 != 0) {
          plVar5 = *(long **)(lStack_c0 + 0x260);
          FUN_10a347d04();
          if (plVar5 == (long *)0x0) {
            uStack_d8 = 0xff7fffff00000000;
            uStack_e0 = 0;
            uStack_d0 = 0xff7fffffff7fffff;
          }
          else {
            (**(code **)(*plVar5 + 0x38))(&uStack_e0);
          }
          FUN_10a01e958(&uStack_f8,&uStack_b0,&uStack_e0);
          uStack_a8 = uStack_f0;
          uStack_b0 = uStack_f8;
          uStack_a0 = uStack_e8;
          uVar9 = uStack_f8;
        }
        plVar5 = plVar4 + 1;
        do {
          lVar7 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    FUN_10a005558(&uStack_f8,&uStack_b0,(undefined8 *)(lVar10 + 0xc0));
    lVar7 = lVar8;
    FUN_10a2ce354(lVar8);
    FUN_10a005448(&uStack_e0,&uStack_f8,lVar7);
    FUN_10a2ce354();
    if (fVar13 < 0.0) {
      fVar14 = param_1 * *(float *)(lVar8 + 4) + param_2 * *(float *)(lVar8 + 0x14) +
               param_3 * *(float *)(lVar8 + 0x24) + *(float *)(lVar8 + 0x34);
      if (uStack_e0._4_4_ - (float)uStack_d0 < fVar14) {
        fVar13 = -fVar13;
      }
    }
    FUN_10a42b7bc(lVar3);
    fVar14 = fVar14 * 0.5;
    _tanf();
    fVar14 = (fVar21 + fVar21) * fVar14;
    fVar13 = fVar14 / fVar13;
    fVar24 = fVar14 * 3.0;
    if (fVar13 <= fVar14 * 3.0) {
      fVar24 = fVar13;
    }
    fVar15 = fVar14 * -3.0;
    if (fVar14 * -3.0 <= fVar13) {
      fVar15 = fVar24;
    }
    lVar7 = *(long *)(param_5 + 0x18);
    *(float *)(lVar7 + 0x74) = *(float *)(lVar7 + 0x74) - (fVar22 - fVar25) * fVar15;
    *(undefined8 *)(lVar7 + 0x5c) = uStack_98;
  }
  return;
}



/* Entry: 10a2f1fcc; end: 10a2f1fff;  */

void FUN_10a2f1fcc(void)

{
  return;
}



/* Entry: 10a2f2000; end: 10a2f2077;  */

void FUN_10a2f2000(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_1 + 0x30) * 0x18);
  lVar1 = plVar2[1];
  for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    (*(code *)*param_2)(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a2f2078; end: 10a2f2257;  */

void FUN_10a2f2078(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (4 < *(ulong *)(lVar4 + 0x38)) {
    lVar6 = *(long *)(lVar4 + 0x30);
    FUN_10a2f02dc(lVar4,lVar6 + 0x1f0,*(undefined4 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x14),*(int *)(param_1 + 0x40) == 2);
    if (*(char *)(lVar6 + 0x268) == '\x01') {
      lVar2 = *(long *)(lVar4 + 0x18);
      FUN_10a601e00();
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x140);
      uVar5 = *(undefined8 *)(lVar2 + 0x178);
      if ((*(byte *)(lVar4 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar4);
      }
      fVar7 = *(float *)(param_1 + 0x3c);
      fVar10 = *(float *)(lVar6 + 600);
      fVar8 = *(float *)(lVar6 + 0x1f8);
      fVar11 = *(float *)(lVar6 + 0x1fc);
      fVar13 = *(float *)(lVar6 + 0x200);
      fVar15 = *(float *)(lVar4 + 0xc4);
      fVar17 = *(float *)(lVar4 + 0xd4);
      fVar9 = fVar8 * *(float *)(lVar4 + 200) + fVar11 * *(float *)(lVar4 + 0xd8);
      fVar16 = *(float *)(lVar4 + 0xe4);
      fVar18 = *(float *)(lVar4 + 0xf4);
      fVar12 = fVar13 * *(float *)(lVar4 + 0xe0) + *(float *)(lVar4 + 0xf0) * 0.0;
      fVar14 = fVar13 * *(float *)(lVar4 + 0xe8) + *(float *)(lVar4 + 0xf8) * 0.0;
      fVar19 = fVar8 * *(float *)(lVar4 + 0xc0) + fVar11 * *(float *)(lVar4 + 0xd0) + fVar12;
      fVar20 = fVar9 + fVar14;
      FUN_10a2cd058(lVar4);
      fVar19 = fVar19 + fVar9;
      fVar8 = fVar8 * fVar15 + fVar11 * fVar17 + fVar13 * fVar16 + fVar18 * 0.0 + fVar12;
      fVar20 = fVar14 + fVar20;
      FUN_10a2cd058(uVar5);
      fVar19 = fVar19 - fVar9;
      fVar8 = fVar8 - fVar12;
      fVar20 = fVar20 - fVar14;
      fVar8 = fVar20 * fVar20 + fVar19 * fVar19 + fVar8 * fVar8;
      fVar9 = SQRT(fVar8);
      FUN_10a42b7bc(lVar2);
      fVar8 = fVar8 * 0.5;
      _tanf();
      *(undefined8 *)(lVar6 + 0x254) = *(undefined8 *)(param_1 + 0x38);
      pfVar3 = *(float **)(param_2 + 0x18);
      *pfVar3 = *pfVar3 + 0.0;
      pfVar3[1] = pfVar3[1] - (fVar7 - fVar10) * fVar8 * (fVar9 + fVar9);
      pfVar3[2] = pfVar3[2] + 0.0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f2258);
  (*pcVar1)();
}



/* Entry: 10a2f2258; end: 10a2f228b;  */

void FUN_10a2f2258(void)

{
  return;
}



/* Entry: 10a2f228c; end: 10a2f243f;  */

void FUN_10a2f228c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (5 < *(ulong *)(lVar4 + 0x38)) {
    lVar6 = *(long *)(lVar4 + 0x30);
    FUN_10a2f02dc(lVar4,lVar6 + 0x26c,*(undefined4 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x14),*(int *)(param_1 + 0x40) == 2);
    if (*(char *)(lVar6 + 0x2e4) == '\x01') {
      lVar2 = *(long *)(lVar4 + 0x18);
      FUN_10a601e00();
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x140);
      uVar5 = *(undefined8 *)(lVar2 + 0x178);
      if ((*(byte *)(lVar4 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar4);
      }
      fVar7 = *(float *)(lVar6 + 0x274);
      fVar9 = *(float *)(lVar6 + 0x278);
      fVar12 = *(float *)(lVar6 + 0x27c);
      fVar15 = *(float *)(lVar4 + 200);
      fVar19 = *(float *)(lVar4 + 0xd8);
      fVar20 = *(float *)(lVar4 + 0xe8);
      fVar22 = *(float *)(lVar4 + 0xf8);
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      uVar21 = *(undefined8 *)(lVar6 + 0x2d0);
      uVar17 = *(undefined8 *)(lVar4 + 0xc0);
      uVar18 = *(undefined8 *)(lVar4 + 0xd0);
      fVar8 = (float)uVar17 * fVar7 + (float)uVar18 * fVar9;
      uVar11 = *(undefined8 *)(lVar4 + 0xe0);
      uVar14 = *(undefined8 *)(lVar4 + 0xf0);
      fVar13 = (float)uVar14 * 0.0;
      fVar10 = (float)uVar11 * fVar12 + fVar13;
      fVar23 = fVar8 + fVar10;
      FUN_10a2cd058(lVar4);
      fVar23 = fVar23 + fVar8;
      fVar24 = (float)((ulong)uVar17 >> 0x20) * fVar7 + (float)((ulong)uVar18 >> 0x20) * fVar9 +
               (float)((ulong)uVar11 >> 0x20) * fVar12 + (float)((ulong)uVar14 >> 0x20) * 0.0 +
               fVar10;
      fVar7 = fVar13 + fVar7 * fVar15 + fVar9 * fVar19 + fVar12 * fVar20 + fVar22 * 0.0;
      FUN_10a2cd058(uVar5);
      fVar23 = fVar23 - fVar8;
      fVar24 = fVar24 - fVar10;
      fVar7 = fVar7 - fVar13;
      fVar7 = fVar7 * fVar7 + fVar23 * fVar23 + fVar24 * fVar24;
      fVar8 = SQRT(fVar7);
      FUN_10a42b7bc(lVar2);
      fVar7 = fVar7 * 0.5;
      _tanf();
      fVar7 = fVar7 * (fVar8 + fVar8);
      puVar3 = *(undefined8 **)(param_2 + 0x18);
      *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) -
                         ((float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar21 >> 0x20)) * fVar7,
                         (float)*puVar3 + ((float)uVar16 - (float)uVar21) * fVar7);
      *(float *)(puVar3 + 1) = *(float *)(puVar3 + 1) + 0.0;
      *(undefined8 *)(lVar6 + 0x2d0) = *(undefined8 *)(param_1 + 0x38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f2440);
  (*pcVar1)();
}



/* Entry: 10a2f2440; end: 10a2f2473;  */

void FUN_10a2f2440(void)

{
  return;
}



/* Entry: 10a2f2474; end: 10a2f2523;  */

void FUN_10a2f2474(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  
  fVar5 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  uVar3 = (uint)param_1;
  bVar2 = *(byte *)(param_2 + 0x10);
  lVar1 = 0x18;
  if (bVar2 == 0) {
    lVar1 = 0x20;
  }
  pfVar6 = *(float **)(param_2 + lVar1);
  FUN_10a2f19cc();
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 3) {
    if ((bVar2 & 1) == 0) {
      pfVar6[0x1b] = pfVar6[0x1b] + (fVar4 - *(float *)(*(long *)(param_2 + 0x20) + 0x5c)) * 5.0;
    }
    pfVar6[0x17] = fVar4;
    pfVar6[0x18] = fVar5;
  }
  else if (uVar3 == 2) {
    *(undefined1 *)(pfVar6 + 0x1e) = 0;
  }
  else if (uVar3 == 1) {
    if (bVar2 != 0) {
      *pfVar6 = fVar4;
      pfVar6[1] = fVar5;
      pfVar6[0x1c] = 1.0;
    }
    pfVar6[0x17] = fVar4;
    pfVar6[0x18] = fVar5;
    *(undefined1 *)(pfVar6 + 0x1e) = 1;
  }
  return;
}



/* Entry: 10a2f2524; end: 10a2f2567;  */

void FUN_10a2f2524(void)

{
  return;
}



/* Entry: 10a2f2568; end: 10a2f25bf;  */

long FUN_10a2f2568(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 10a2f25c0; end: 10a2f2677;  */

void FUN_10a2f25c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x43];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f2678; end: 10a2f26df;  */

void FUN_10a2f2678(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a2f2678(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(undefined *)((long)plVar5 + 0x219);
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a2f26e0; end: 10a2f2797;  */

void FUN_10a2f26e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x219);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a2f2798; end: 10a2f2853;  */

void FUN_10a2f2798(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x44];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f2854; end: 10a2f2913;  */

void FUN_10a2f2854(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f2914(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 0x44) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f2914; end: 10a2f297b;  */

void FUN_10a2f2914(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a2f2678(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a2f2f74(extraout_x8,plVar4,plVar6 + 0x45);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a2f297c; end: 10a2f2a33;  */

void FUN_10a2f297c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2f2f74(param_1,param_2,plVar4 + 0x45);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f2a34; end: 10a2f2f73;  */

/* WARNING: Removing unreachable block (ram,0x00010a2f2d74) */
/* WARNING: Removing unreachable block (ram,0x00010a2f2d78) */
/* WARNING: Removing unreachable block (ram,0x00010a2f2d80) */
/* WARNING: Removing unreachable block (ram,0x00010a2f2d88) */
/* WARNING: Removing unreachable block (ram,0x00010a2f2d8c) */

void FUN_10a2f2a34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long **pplVar11;
  undefined *extraout_x8;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  int iVar20;
  long *in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  long *plVar21;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a2f2914(param_2,param_3);
  FUN_10a2f2ff8(param_5);
  func_0x000109898610(&plStack_80,param_2,param_4);
  if (plStack_80 == (long *)0x0) {
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
  }
  else {
    ___dynamic_cast(plStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c4a6a8,0x10);
    if (plStack_80 == (long *)0x0) {
      pplVar11 = &plStack_90;
    }
    else {
      plStack_88 = plStack_78;
      pplVar11 = &plStack_80;
      plStack_90 = plStack_80;
    }
    *pplVar11 = (long *)0x0;
    plVar21 = plStack_90;
    pplVar11[1] = (long *)0x0;
    if (plStack_90 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2f2ed4);
      (*pcVar4)();
    }
    FUN_10a0533bc(&stack0xffffffffffffffa0,plStack_90);
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x0001098849a4(&stack0xffffffffffffffb0,param_2,param_4);
      plVar17 = (long *)0x30;
      __Znwm();
      plVar16 = plStack_88;
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&PTR_DAT_110b174d8;
      plStack_70 = plVar17 + 3;
      iVar20 = (int)in_stack_ffffffffffffffb0;
      if (iVar20 == 3) {
        plVar17[3] = (long)param_2;
        *(undefined4 *)(plVar17 + 4) = 3;
        plVar17[5] = (long)in_stack_ffffffffffffffb8;
      }
      else if (iVar20 == 2) {
        plVar17[3] = (long)param_2;
        *(undefined4 *)(plVar17 + 4) = 2;
        *(char *)(plVar17 + 5) = (char)in_stack_ffffffffffffffb8;
      }
      else if (iVar20 < 4) {
        plVar17[3] = (long)param_2;
        *(int *)(plVar17 + 4) = iVar20;
      }
      else {
        plVar17[3] = (long)param_2;
        *(int *)(plVar17 + 4) = iVar20;
        plVar17[5] = (long)in_stack_ffffffffffffffb8;
      }
      if (plStack_88 != (long *)0x0) {
        plVar8 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar8 = (long *)0x90;
      plStack_68 = plVar17;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110b9fe30;
      plVar8[3] = (long)plVar21;
      plVar8[4] = (long)plVar16;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0x32aaaba7;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[0x11] = 0;
      plVar8[0x10] = 0;
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar21 = in_stack_ffffffffffffffa8 + 1;
        do {
          lVar13 = *plVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
      func_0x00010a04a7fc(plVar8 + 5,&plStack_70);
      plStack_a0 = plStack_90;
      if (plVar8 == (long *)0x0) {
        plVar21 = (long *)0x0;
      }
      else {
        plVar16 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar21 = plVar8;
        } while (cVar2 != '\0');
      }
      plStack_98 = plVar8;
      func_0x00010a053e8c(plVar8 + 3,&stack0xffffffffffffffb0);
      if (plVar21 != (long *)0x0) {
        plVar16 = plVar21 + 1;
        do {
          lVar13 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      func_0x00010a053ee8(plStack_90,&stack0xffffffffffffffa0);
      ppuVar9 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(plStack_90[10]);
      puVar14 = *ppuVar9;
      if (extraout_x8 != (undefined *)0x0) {
        puVar14 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar14 + 0x870),&stack0xffffffffffffffa0);
      plVar21 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar16 = plStack_68 + 1;
        do {
          lVar13 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
    }
    else {
      FUN_10a053e40(&stack0xffffffffffffffb0);
      plStack_a0 = in_stack_ffffffffffffffb0;
      plStack_98 = in_stack_ffffffffffffffb8;
      plVar8 = in_stack_ffffffffffffffa8;
    }
    if (plVar8 != (long *)0x0) {
      plVar21 = plVar8 + 1;
      do {
        lVar13 = *plVar21;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar3) {
          *plVar21 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar21 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar16 = plStack_88 + 1;
      do {
        lVar13 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar21 = plStack_78 + 1;
    do {
      lVar13 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  FUN_10a2e195c(plVar7 + 0x45,&plStack_a0);
  plVar7 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar21 = plStack_98 + 1;
    do {
      lVar13 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar13 = plVar6[0x59];
  uVar10 = lVar13 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar13 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  plVar21 = (long *)*plVar7;
  plVar16 = (long *)plVar6[0x4c];
  lVar13 = (long)plVar16 - (long)plVar21;
  uVar18 = lVar13 >> 4;
  if (uVar18 < uVar10) {
    uVar19 = uVar10 - uVar18;
    plVar17 = (long *)plVar6[0x4d];
    if ((ulong)((long)plVar17 - (long)plVar16 >> 4) < uVar19) {
      if (uVar10 >> 0x3c == 0) {
        uVar12 = (long)plVar17 - (long)plVar21 >> 3;
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar17 - (long)plVar21)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar13;
          _bzero(lVar1,uVar19 * 0x10);
          lVar15 = lVar1 + uVar18 * -0x10;
          _memcpy(lVar15,plVar21,lVar13);
          *plVar7 = lVar15;
          plVar6[0x4c] = lVar1 + uVar19 * 0x10;
          plVar6[0x4d] = lVar5 + uVar12 * 0x10;
          plStack_88 = plVar21;
          plStack_80 = plVar21;
          plStack_78 = plVar21;
          plStack_70 = plVar17;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(plVar16,uVar19 * 0x10);
    plVar6[0x4c] = (long)(plVar16 + uVar19 * 2);
  }
  else if (uVar10 < uVar18) {
    while (plVar16 != plVar21 + uVar10 * 2) {
      plVar16 = plVar16 + -2;
      func_0x00010988c204(plVar16);
    }
    plVar6[0x4c] = (long)(plVar21 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a2f2f74; end: 10a2f2ff7;  */

void FUN_10a2f2f74(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a052f68(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2f2ff8; end: 10a2f301b;  */

void FUN_10a2f2ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f2678(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  lVar6 = plVar3[0x47];
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)lVar6;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a2f301c; end: 10a2f30d3;  */

void FUN_10a2f301c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x47];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f30d4; end: 10a2f3193;  */

void FUN_10a2f30d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f2914(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x47) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f3194; end: 10a2f319b;  */

undefined8 * FUN_10a2f3194(long param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = uVar7;
  *(undefined8 *)(param_1 + 0x240) = uVar6;
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
  return (undefined8 *)(param_1 + 0x240);
}



/* Entry: 10a2f319c; end: 10a2f3277;  */

void FUN_10a2f319c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x48];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a2f3278; end: 10a2f332f;  */

void FUN_10a2f3278(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f3330(param_1,param_2,FUN_10a2f3194,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f3330; end: 10a2f340f;  */

void FUN_10a2f3330(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a2f2914(param_2,param_5);
  FUN_10a2f3410(param_7);
  FUN_10a05dcbc(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a2f3410; end: 10a2f3433;  */

undefined8 * FUN_10a2f3410(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  lVar4 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  uVar9 = puVar5[1];
  uVar8 = *puVar5;
  if (puVar5[1] != 0) {
    plVar7 = (long *)(puVar5[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = *(long **)(lVar4 + 600);
  *(undefined8 *)(lVar4 + 600) = uVar9;
  *(undefined8 *)(lVar4 + 0x250) = uVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return (undefined8 *)(lVar4 + 0x250);
}



/* Entry: 10a2f3434; end: 10a2f343b;  */

undefined8 * FUN_10a2f3434(long param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = uVar7;
  *(undefined8 *)(param_1 + 0x250) = uVar6;
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
  return (undefined8 *)(param_1 + 0x250);
}



/* Entry: 10a2f343c; end: 10a2f3517;  */

void FUN_10a2f343c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a2f2678(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = (long *)plVar6[0x4a];
  if ((plVar6 == (long *)0x0) || ((char)plVar6[8] != '\x02')) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,*plVar6 + 8);
  }
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar4;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar4,lVar8);
          *plVar6 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar10 != lVar4) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a2f3518; end: 10a2f35cf;  */

void FUN_10a2f3518(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f3330(param_1,param_2,FUN_10a2f3434,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f35d0; end: 10a2f3627;  */

long FUN_10a2f35d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 10a2f3628; end: 10a2f37ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a2f3758) */
/* WARNING: Removing unreachable block (ram,0x00010a2f375c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f3764) */
/* WARNING: Removing unreachable block (ram,0x00010a2f376c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f3770) */

void FUN_10a2f3628(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_40;
  long *plStack_38;
  
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  lVar7 = *param_1;
  plVar9 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = (long)*(char *)((long)puVar8 + 0x57);
  if (lVar10 < 0) {
    puVar4 = (undefined8 *)puVar8[8];
    lVar10 = puVar8[9];
  }
  else {
    puVar4 = puVar8 + 8;
  }
  if (lVar7 == 0) {
    plStack_38 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c4a6a8,0);
    if (lVar7 == 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        puVar3 = (undefined8 *)&UNK_10f64b3ce;
        if (lVar10 != 0) {
          puVar3 = puVar4;
        }
        func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f64cb67,0x34,&UNK_10f63498b,in_x6,in_x7,lVar10
                            ,puVar3);
      }
      lVar7 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  lStack_40 = lVar7;
  (*(code *)*puVar8)(&lStack_40,puVar8);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar10 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a2f3800; end: 10a2f384f;  */

void FUN_10a2f3800(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2f3850; end: 10a2f3867;  */

void FUN_10a2f3850(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2f3868; end: 10a2f38db;  */

void FUN_10a2f3868(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a2e195c(*(long *)(param_2 + 0x10) + 0x228,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2f38dc; end: 10a2f38f7;  */

void FUN_10a2f38dc(void)

{
  return;
}



/* Entry: 10a2f38f8; end: 10a2f394f;  */

undefined8 FUN_10a2f38f8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x280;
  __Znwm(0x280);
  FUN_10a2d2e14();
  return uVar1;
}



/* Entry: 10a2f3950; end: 10a2f3953;  */

void FUN_10a2f3950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2f3954; end: 10a2f3967;  */

void FUN_10a2f3954(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2f3968; end: 10a2f3983;  */

void FUN_10a2f3968(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a2f3984; end: 10a2f39bf;  */

long FUN_10a2f3984(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2f39c0; end: 10a2f39c3;  */

void FUN_10a2f39c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2f39c4; end: 10a2f3a1b;  */

long FUN_10a2f39c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 10a2f3a1c; end: 10a2f3aa7;  */

void FUN_10a2f3a1c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2f3aa8; end: 10a2f3c53;  */

void FUN_10a2f3aa8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a2f3c54; end: 10a2f3c87;  */

void FUN_10a2f3c54(void)

{
  return;
}



/* Entry: 10a2f3c88; end: 10a2f3d83;  */

undefined1  [16] FUN_10a2f3c88(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc3308;
  puVar1 = &UNK_10f64b3ce;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bc3308;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bd9df0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a2f3d84; end: 10a2f3ddb;  */

ulong FUN_10a2f3d84(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a2f3ddc,FUN_10a2f3ee4);
  }
  return param_1;
}



/* Entry: 10a2f3ddc; end: 10a2f3ee3;  */

void FUN_10a2f3ddc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      fVar15 = *(float *)(param_2 + 0xa1);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)fVar15;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f3ed0);
  (*pcVar1)();
}



/* Entry: 10a2f3ee4; end: 10a2f401b;  */

void FUN_10a2f3ee4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    FUN_10a053854(param_2,plVar5);
    if ((param_2 == (long *)0x0) || (___dynamic_cast(), param_2 == (long *)0x0)) {
      puVar6 = &UNK_10f685496;
    }
    else {
      FUN_10a05ed04(param_5);
      if (*param_4 == 3) {
        fVar1 = (float)*(double *)(param_4 + 2);
        if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
          fVar1 = 0.0;
        }
        *(float *)(param_2 + 0xa1) = fVar1;
        *param_1 = 0;
        plVar5 = plVar4 + 0x4b;
        lVar7 = plVar4[0x59];
        uVar8 = lVar7 - 1;
        plVar4[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar5[lVar7 + 2];
          if (plVar4[0x5a] == uVar8) {
            return;
          }
        }
        else {
          uVar8 = *(ulong *)(plVar4[0x57] + -8);
          plVar4[0x57] = plVar4[0x57] + -8;
          if (plVar4[0x5a] == uVar8) {
            return;
          }
        }
        lVar7 = *plVar5;
        lVar12 = plVar4[0x4c];
        lVar10 = lVar12 - lVar7;
        uVar14 = lVar10 >> 4;
        if (uVar14 < uVar8) {
          uVar15 = uVar8 - uVar14;
          lVar13 = plVar4[0x4d];
          if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar13 - lVar7 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar5;
              if (uVar9 >> 0x3c == 0) {
                lVar3 = uVar9 << 4;
                __Znwm();
                lVar12 = lVar3 + lVar10;
                _bzero(lVar12,uVar15 * 0x10);
                lVar11 = lVar12 + uVar14 * -0x10;
                _memcpy(lVar11,lVar7,lVar10);
                *plVar5 = lVar11;
                plVar4[0x4c] = lVar12 + uVar15 * 0x10;
                plVar4[0x4d] = lVar3 + uVar9 * 0x10;
                lStack_88 = lVar7;
                lStack_80 = lVar7;
                lStack_78 = lVar7;
                lStack_70 = lVar13;
                func_0x00010988c1b8(&lStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar2)();
          }
          _bzero(lVar12,uVar15 * 0x10);
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
        }
        else if (uVar8 < uVar14) {
          lVar7 = lVar7 + uVar8 * 0x10;
          while (lVar12 != lVar7) {
            lVar12 = lVar12 + -0x10;
            func_0x00010988c204(lVar12);
          }
          plVar4[0x4c] = lVar7;
        }
code_r0x00010988c138:
        plVar4[0x5a] = uVar8;
        return;
      }
      puVar6 = &UNK_10f68f550;
    }
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2f4008);
  (*pcVar2)();
}



/* Entry: 10a2f401c; end: 10a2f40d7;  */

void FUN_10a2f401c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f64c78f,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2f40d8);
  (*pcVar4)();
}



/* Entry: 10a2f40d8; end: 10a2f412f;  */

undefined8 FUN_10a2f40d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x590;
  __Znwm(0x590);
  FUN_10a2d3e60();
  return uVar1;
}



/* Entry: 10a2f4130; end: 10a2f4133;  */

void FUN_10a2f4130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2f4134; end: 10a2f4147;  */

void FUN_10a2f4134(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2f4148; end: 10a2f4163;  */

void FUN_10a2f4148(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a2f4164; end: 10a2f419f;  */

long FUN_10a2f4164(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2f41a0; end: 10a2f41a3;  */

void FUN_10a2f41a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2f41a4; end: 10a2f41fb;  */

long FUN_10a2f41a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 10a2f41fc; end: 10a2f42c3;  */

void FUN_10a2f41fc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = param_2[0x55];
  lVar8 = param_2[0x54];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(ulong)(lVar6 - lVar8 >> 4);
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar8 = plVar4[0x4c];
  lVar9 = lVar8 - lVar6;
  uVar12 = lVar9 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar8 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar8 = lVar3 + lVar9;
          _bzero(lVar8,uVar13 * 0x10);
          lVar10 = lVar8 + uVar12 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar8 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar8,uVar13 * 0x10);
    plVar4[0x4c] = lVar8 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar8 != lVar6) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a2f42c4; end: 10a2f432b;  */

void FUN_10a2f42c4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bc3458;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a2f42c4(plVar4,param_2);
  FUN_10a136258(param_4);
  plVar7 = plVar4;
  func_0x00010a13627c(plVar4,param_3);
  if ((long *)(plVar6[0x55] - plVar6[0x54] >> 4) <= plVar7) {
    FUN_10a00946c(&UNK_10f657808);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f4404);
    (*pcVar1)();
  }
  FUN_10a066960(extraout_x8,plVar4,plVar6[0x54] + (long)plVar7 * 0x10);
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a2f432c; end: 10a2f4417;  */

void FUN_10a2f432c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a136258(param_5);
  plVar5 = param_2;
  func_0x00010a13627c(param_2,param_4);
  if ((long *)(plVar4[0x55] - plVar4[0x54] >> 4) <= plVar5) {
    FUN_10a00946c(&UNK_10f657808);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f4404);
    (*pcVar1)();
  }
  FUN_10a066960(param_1,param_2,plVar4[0x54] + (long)plVar5 * 0x10);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a2f4418; end: 10a2f457f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2f44f8) */
/* WARNING: Removing unreachable block (ram,0x00010a2f44fc) */
/* WARNING: Removing unreachable block (ram,0x00010a2f4504) */
/* WARNING: Removing unreachable block (ram,0x00010a2f450c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f4510) */

void FUN_10a2f4418(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a2f4580(param_2,param_3);
  FUN_10a066b10(param_5);
  FUN_10a066b34(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a0d4b14(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a2f4580; end: 10a2f45e7;  */

void FUN_10a2f4580(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a2f4580(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a4265c0(plVar4 + 0x54);
  (**(code **)(*plVar4 + 0x208))(plVar4);
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a2f45e8; end: 10a2f46ab;  */

void FUN_10a2f45e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2f4580(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a4265c0(param_2 + 0x54);
  (**(code **)(*param_2 + 0x208))(param_2);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f46ac; end: 10a2f483f;  */

void FUN_10a2f46ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar7 = plVar4[0x54];
  lVar11 = plVar4[0x55];
  lVar9 = lVar11 - lVar7 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar9);
  if (lVar11 != lVar7) {
    lVar11 = 0;
    do {
      FUN_10a066960(&stack0xffffffffffffffa8,param_2,lVar7);
      (**(code **)(*param_2 + 0x290))
                (param_2,&stack0xffffffffffffffb8,lVar11,&stack0xffffffffffffffa8);
      if ((3 < (int)in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffffb0)();
      }
      lVar11 = lVar11 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar9 != lVar11);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  plVar4 = plVar3 + 0x4b;
  lVar7 = plVar3[0x59];
  uVar5 = lVar7 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar7 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar9 = plVar3[0x4c];
  lVar11 = lVar9 - lVar7;
  uVar12 = lVar11 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar10 = plVar3[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar7 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar7)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar11;
          _bzero(lVar9,uVar13 * 0x10);
          lVar8 = lVar9 + uVar12 * -0x10;
          _memcpy(lVar8,lVar7,lVar11);
          *plVar4 = lVar8;
          plVar3[0x4c] = lVar9 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar9,uVar13 * 0x10);
    plVar3[0x4c] = lVar9 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar7 = lVar7 + uVar5 * 0x10;
    while (lVar9 != lVar7) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar3[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a2f4840; end: 10a2f4b23;  */

void FUN_10a2f4840(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long **pplVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  undefined8 *in_stack_ffffffffffffffa0;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar11 = param_2;
  FUN_10a2f4580(param_2,param_3);
  FUN_10a2f4b24(param_5);
  if (*param_4 == 7) {
    plVar10 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar13 = param_2;
    plStack_80 = plVar10;
    (**(code **)(*param_2 + 0x208))(param_2,&plStack_80);
    plVar10 = plStack_80;
    if (((ulong)plVar13 & 1) != 0) {
      plVar13 = param_2;
      (**(code **)(*param_2 + 0x268))(param_2,&stack0xffffffffffffffa8);
      plStack_a0 = (long *)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_10a2f4b48(&plStack_a0,plVar13);
      if (plVar13 != (long *)0x0) {
        plVar16 = (long *)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(&pplStack_68,param_2,&stack0xffffffffffffffa8,plVar16);
          FUN_10a066b34(&plStack_80,param_2,&pplStack_68);
          func_0x00010a2f4be0(&plStack_a0,&plStack_80);
          plVar6 = plStack_78;
          if (plStack_78 != (long *)0x0) {
            plVar1 = plStack_78 + 1;
            do {
              lVar14 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
          if ((3 < (int)pplStack_68) && (in_stack_ffffffffffffffa0 != (undefined8 *)0x0)) {
            (**(code **)*in_stack_ffffffffffffffa0)();
          }
          plVar16 = (long *)((long)plVar16 + 1);
        } while (plVar16 != plVar13);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)*plVar10)();
      }
      plStack_78 = (long *)uStack_98;
      plStack_80 = plStack_a0;
      lStack_70 = uStack_90;
      plStack_a0 = (long *)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_10a4212b8(plVar11,&plStack_80);
      pplStack_68 = &plStack_80;
      FUN_10a0d4a18(&pplStack_68);
      plStack_80 = (long *)&plStack_a0;
      FUN_10a0d4a18(&plStack_80);
      *param_1 = 0;
      pplVar2 = (long **)(plVar9 + 0x4b);
      lVar14 = plVar9[0x59];
      uVar12 = lVar14 - 1;
      plVar9[0x59] = uVar12;
      if (uVar12 < 8) {
        plVar11 = pplVar2[lVar14 + 2];
        if ((long *)plVar9[0x5a] == plVar11) {
          return;
        }
      }
      else {
        plVar11 = *(long **)(plVar9[0x57] + -8);
        plVar9[0x57] = (long)(plVar9[0x57] + -8);
        if ((long *)plVar9[0x5a] == plVar11) {
          return;
        }
      }
      plVar10 = *pplVar2;
      plVar13 = (long *)plVar9[0x4c];
      lVar14 = (long)plVar13 - (long)plVar10;
      plVar16 = (long *)(lVar14 >> 4);
      if (plVar16 < plVar11) {
        uVar12 = (long)plVar11 - (long)plVar16;
        lVar15 = plVar9[0x4d];
        if ((ulong)(lVar15 - (long)plVar13 >> 4) < uVar12) {
          if ((ulong)plVar11 >> 0x3c == 0) {
            plVar13 = (long *)(lVar15 - (long)plVar10 >> 3);
            if (plVar13 <= plVar11) {
              plVar13 = plVar11;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar10)) {
              plVar13 = (long *)0xfffffffffffffff;
            }
            pplStack_68 = pplVar2;
            if ((ulong)plVar13 >> 0x3c == 0) {
              lVar8 = (long)plVar13 << 4;
              __Znwm();
              lVar3 = lVar8 + lVar14;
              _bzero(lVar3,uVar12 * 0x10);
              plVar16 = (long *)(lVar3 + (long)plVar16 * -0x10);
              _memcpy(plVar16,plVar10,lVar14);
              *pplVar2 = plVar16;
              plVar9[0x4c] = lVar3 + uVar12 * 0x10;
              plVar9[0x4d] = lVar8 + (long)plVar13 * 0x10;
              plStack_88 = plVar10;
              plStack_80 = plVar10;
              plStack_78 = plVar10;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&plStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar7)();
        }
        _bzero(plVar13,uVar12 * 0x10);
        plVar9[0x4c] = (long)(plVar13 + uVar12 * 2);
      }
      else if (plVar11 < plVar16) {
        while (plVar13 != plVar10 + (long)plVar11 * 2) {
          plVar13 = plVar13 + -2;
          func_0x00010988c204(plVar13);
        }
        plVar9[0x4c] = (long)(plVar10 + (long)plVar11 * 2);
      }
code_r0x00010988c138:
      plVar9[0x5a] = (long)plVar11;
      return;
    }
    if (plStack_80 != (long *)0x0) {
      (**(code **)*plStack_80)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a2f4a7c);
  (*pcVar7)();
}



/* Entry: 10a2f4b24; end: 10a2f4b47;  */

void FUN_10a2f4b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  puVar7 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  lVar9 = *plVar4;
  if ((undefined8 *)(plVar4[2] - lVar9 >> 4) < puVar7) {
    if ((ulong)puVar7 >> 0x3c != 0) {
      FUN_10a0d93d0();
      puVar1 = (undefined8 *)plVar4[1];
      if (puVar1 < (undefined8 *)plVar4[2]) {
        uVar18 = *puVar7;
        puVar14 = puVar1 + 2;
        puVar1[1] = puVar7[1];
        *puVar1 = uVar18;
        *puVar7 = 0;
        puVar7[1] = 0;
      }
      else {
        lVar9 = (long)puVar1 - *plVar4;
        uVar8 = (lVar9 >> 4) + 1;
        if (uVar8 >> 0x3c != 0) {
          FUN_10a0d93d0();
          plVar5 = plVar4;
          (**(code **)(*plVar4 + 0x58))();
          if ((ulong)plVar5[0x59] < 8) {
            plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
            plVar5[0x59] = plVar5[0x59] + 1;
          }
          else {
            func_0x00010988bfcc(plVar5 + 0x4b);
          }
          plVar6 = plVar4;
          FUN_10a2f42c4(plVar4,puVar7);
          FUN_10a052e3c(param_4);
          lVar9 = 0x1138353c0;
          if (plVar6[0x54] != plVar6[0x55]) {
            lVar9 = plVar6[0x54];
          }
          FUN_10a066960(extraout_x8,plVar4,lVar9);
          plVar4 = plVar5 + 0x4b;
          lVar9 = plVar5[0x59];
          uVar8 = lVar9 - 1;
          plVar5[0x59] = uVar8;
          if (uVar8 < 8) {
            uVar8 = plVar4[lVar9 + 2];
            if (plVar5[0x5a] == uVar8) {
              return;
            }
          }
          else {
            uVar8 = *(ulong *)(plVar5[0x57] + -8);
            plVar5[0x57] = plVar5[0x57] + -8;
            if (plVar5[0x5a] == uVar8) {
              return;
            }
          }
          lVar9 = *plVar4;
          lVar12 = plVar5[0x4c];
          lVar15 = lVar12 - lVar9;
          uVar13 = lVar15 >> 4;
          if (uVar13 < uVar8) {
            uVar10 = uVar8 - uVar13;
            lVar17 = plVar5[0x4d];
            if ((ulong)(lVar17 - lVar12 >> 4) < uVar10) {
              if (uVar8 >> 0x3c == 0) {
                uVar11 = lVar17 - lVar9 >> 3;
                if (uVar11 <= uVar8) {
                  uVar11 = uVar8;
                }
                if (0x7fffffffffffffef < (ulong)(lVar17 - lVar9)) {
                  uVar11 = 0xfffffffffffffff;
                }
                plStack_138 = plVar4;
                if (uVar11 >> 0x3c == 0) {
                  lVar3 = uVar11 << 4;
                  __Znwm();
                  lVar12 = lVar3 + lVar15;
                  _bzero(lVar12,uVar10 * 0x10);
                  lVar16 = lVar12 + uVar13 * -0x10;
                  _memcpy(lVar16,lVar9,lVar15);
                  *plVar4 = lVar16;
                  plVar5[0x4c] = lVar12 + uVar10 * 0x10;
                  plVar5[0x4d] = lVar3 + uVar11 * 0x10;
                  lStack_158 = lVar9;
                  lStack_150 = lVar9;
                  lStack_148 = lVar9;
                  lStack_140 = lVar17;
                  func_0x00010988c1b8(&lStack_158);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar2)();
            }
            _bzero(lVar12,uVar10 * 0x10);
            plVar5[0x4c] = lVar12 + uVar10 * 0x10;
          }
          else if (uVar8 < uVar13) {
            lVar9 = lVar9 + uVar8 * 0x10;
            while (lVar12 != lVar9) {
              lVar12 = lVar12 + -0x10;
              func_0x00010988c204(lVar12);
            }
            plVar5[0x4c] = lVar9;
          }
code_r0x00010988c138:
          plVar5[0x5a] = uVar8;
          return;
        }
        uVar10 = plVar4[2] - *plVar4;
        uVar13 = (long)uVar10 >> 3;
        if (uVar13 <= uVar8) {
          uVar13 = uVar8;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar13 = 0xfffffffffffffff;
        }
        plVar5 = plVar4;
        plStack_a8 = plVar4;
        FUN_10a0d93e4();
        puVar1 = (undefined8 *)((long)plVar5 + lVar9);
        uVar18 = *puVar7;
        puVar14 = puVar1 + 2;
        puVar1[1] = puVar7[1];
        *puVar1 = uVar18;
        *puVar7 = 0;
        puVar7[1] = 0;
        lVar9 = (long)puVar1 - (plVar4[1] - *plVar4);
        _memcpy(lVar9);
        lStack_c8 = *plVar4;
        *plVar4 = lVar9;
        plVar4[1] = (long)puVar14;
        lStack_b0 = plVar4[2];
        plVar4[2] = (long)(plVar5 + uVar13 * 2);
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x00010a0d9418(&lStack_c8);
      }
      plVar4[1] = (long)puVar14;
      return;
    }
    lVar12 = plVar4[1];
    plVar5 = plVar4;
    plStack_48 = plVar4;
    FUN_10a0d93e4();
    lVar9 = (long)plVar5 + (lVar12 - lVar9);
    lVar12 = lVar9 - (plVar4[1] - *plVar4);
    _memcpy(lVar12);
    lStack_68 = *plVar4;
    *plVar4 = lVar12;
    plVar4[1] = lVar9;
    lStack_50 = plVar4[2];
    plVar4[2] = (long)(plVar5 + (long)puVar7 * 2);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a0d9418(&lStack_68);
  }
  return;
}



/* Entry: 10a2f4b48; end: 10a2f4cc3;  */

void FUN_10a2f4b48(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar7 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar7 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a0d93d0();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        uVar16 = *param_2;
        puVar12 = puVar1 + 2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar16;
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        lVar7 = (long)puVar1 - *param_1;
        uVar6 = (lVar7 >> 4) + 1;
        if (uVar6 >> 0x3c != 0) {
          FUN_10a0d93d0();
          plVar4 = param_1;
          (**(code **)(*param_1 + 0x58))();
          if ((ulong)plVar4[0x59] < 8) {
            plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
            plVar4[0x59] = plVar4[0x59] + 1;
          }
          else {
            func_0x00010988bfcc(plVar4 + 0x4b);
          }
          plVar5 = param_1;
          FUN_10a2f42c4(param_1,param_2);
          FUN_10a052e3c(param_4);
          lVar7 = 0x1138353c0;
          if (plVar5[0x54] != plVar5[0x55]) {
            lVar7 = plVar5[0x54];
          }
          FUN_10a066960(extraout_x8,param_1,lVar7);
          plVar5 = plVar4 + 0x4b;
          lVar7 = plVar4[0x59];
          uVar6 = lVar7 - 1;
          plVar4[0x59] = uVar6;
          if (uVar6 < 8) {
            uVar6 = plVar5[lVar7 + 2];
            if (plVar4[0x5a] == uVar6) {
              return;
            }
          }
          else {
            uVar6 = *(ulong *)(plVar4[0x57] + -8);
            plVar4[0x57] = plVar4[0x57] + -8;
            if (plVar4[0x5a] == uVar6) {
              return;
            }
          }
          lVar7 = *plVar5;
          lVar10 = plVar4[0x4c];
          lVar13 = lVar10 - lVar7;
          uVar11 = lVar13 >> 4;
          if (uVar11 < uVar6) {
            uVar8 = uVar6 - uVar11;
            lVar15 = plVar4[0x4d];
            if ((ulong)(lVar15 - lVar10 >> 4) < uVar8) {
              if (uVar6 >> 0x3c == 0) {
                uVar9 = lVar15 - lVar7 >> 3;
                if (uVar9 <= uVar6) {
                  uVar9 = uVar6;
                }
                if (0x7fffffffffffffef < (ulong)(lVar15 - lVar7)) {
                  uVar9 = 0xfffffffffffffff;
                }
                plStack_128 = plVar5;
                if (uVar9 >> 0x3c == 0) {
                  lVar3 = uVar9 << 4;
                  __Znwm();
                  lVar10 = lVar3 + lVar13;
                  _bzero(lVar10,uVar8 * 0x10);
                  lVar14 = lVar10 + uVar11 * -0x10;
                  _memcpy(lVar14,lVar7,lVar13);
                  *plVar5 = lVar14;
                  plVar4[0x4c] = lVar10 + uVar8 * 0x10;
                  plVar4[0x4d] = lVar3 + uVar9 * 0x10;
                  lStack_148 = lVar7;
                  lStack_140 = lVar7;
                  lStack_138 = lVar7;
                  lStack_130 = lVar15;
                  func_0x00010988c1b8(&lStack_148);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar2)();
            }
            _bzero(lVar10,uVar8 * 0x10);
            plVar4[0x4c] = lVar10 + uVar8 * 0x10;
          }
          else if (uVar6 < uVar11) {
            lVar7 = lVar7 + uVar6 * 0x10;
            while (lVar10 != lVar7) {
              lVar10 = lVar10 + -0x10;
              func_0x00010988c204(lVar10);
            }
            plVar4[0x4c] = lVar7;
          }
code_r0x00010988c138:
          plVar4[0x5a] = uVar6;
          return;
        }
        uVar8 = param_1[2] - *param_1;
        uVar11 = (long)uVar8 >> 3;
        if (uVar11 <= uVar6) {
          uVar11 = uVar6;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar11 = 0xfffffffffffffff;
        }
        plVar4 = param_1;
        plStack_98 = param_1;
        FUN_10a0d93e4();
        puVar1 = (undefined8 *)((long)plVar4 + lVar7);
        uVar16 = *param_2;
        puVar12 = puVar1 + 2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar16;
        *param_2 = 0;
        param_2[1] = 0;
        lVar7 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar7);
        lStack_b8 = *param_1;
        *param_1 = lVar7;
        param_1[1] = (long)puVar12;
        lStack_a0 = param_1[2];
        param_1[2] = (long)(plVar4 + uVar11 * 2);
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a0d9418(&lStack_b8);
      }
      param_1[1] = (long)puVar12;
      return;
    }
    lVar10 = param_1[1];
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a0d93e4();
    lVar7 = (long)plVar4 + (lVar10 - lVar7);
    lVar10 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + (long)param_2 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a0d9418(&lStack_58);
  }
  return;
}



/* Entry: 10a2f4cc4; end: 10a2f4d8f;  */

void FUN_10a2f4cc4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = 0x1138353c0;
  if (plVar4[0x54] != plVar4[0x55]) {
    lVar5 = plVar4[0x54];
  }
  FUN_10a066960(param_1,param_2,lVar5);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f4d90; end: 10a2f4ef7;  */

/* WARNING: Removing unreachable block (ram,0x00010a2f4e70) */
/* WARNING: Removing unreachable block (ram,0x00010a2f4e74) */
/* WARNING: Removing unreachable block (ram,0x00010a2f4e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f4e84) */
/* WARNING: Removing unreachable block (ram,0x00010a2f4e88) */

void FUN_10a2f4d90(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a2f4580(param_2,param_3);
  FUN_10a066b10(param_5);
  FUN_10a066b34(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a4239ac(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a2f4ef8; end: 10a2f4fd7;  */

void FUN_10a2f4ef8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (((long *)plVar4[0x54] == (long *)plVar4[0x55]) || (lVar5 = *(long *)plVar4[0x54], lVar5 == 0))
  {
    lVar5 = 0x1138353d0;
  }
  else {
    FUN_10ab46af4();
  }
  FUN_10a2f50c8(param_1,param_2,lVar5);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f4fd8; end: 10a2f50c7;  */

void FUN_10a2f4fd8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  FUN_10a2f4580(param_1,param_2);
  FUN_10a2f516c(param_4);
  FUN_10a2f5190(auStack_50,param_1,param_3);
  FUN_10a00946c(&UNK_10f657836);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f5068);
  (*pcVar1)();
}



/* Entry: 10a2f50c8; end: 10a2f516b;  */

void FUN_10a2f50c8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  plStack_28 = (long *)param_2[1];
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_30 = 0;
  if (lVar5 != 0) {
    lStack_30 = lVar5 + 0x18;
  }
  ppuStack_38 = &PTR_DAT_110bc7ac8;
  func_0x000109899de4(param_1,&lStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2f516c; end: 10a2f518f;  */

void FUN_10a2f516c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a2f5208(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f51f4);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a2f5190; end: 10a2f5207;  */

void FUN_10a2f5190(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a2f5208(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f51f4);
  (*pcVar1)();
}



/* Entry: 10a2f5208; end: 10a2f529f;  */

void FUN_10a2f5208(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110bc7ac8,0x18), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a2f52a0; end: 10a2f535f;  */

void FUN_10a2f52a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a42678c(plVar4);
  FUN_10a2f5360(param_1,param_2,plVar4);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2f5360; end: 10a2f53fb;  */

void FUN_10a2f5360(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c6b228;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2f53fc; end: 10a2f550f;  */

/* WARNING: Possible PIC construction at 0x00010a2f5504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a2f5620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2f5508) */
/* WARNING: Removing unreachable block (ram,0x00010a2f55f8) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5568) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5580) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5604) */
/* WARNING: Removing unreachable block (ram,0x00010a2f561c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f55dc) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5624) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5670) */
/* WARNING: Removing unreachable block (ram,0x00010a2f568c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56a8) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56ac) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56b4) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56bc) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56e8) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56ec) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56f4) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56fc) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5700) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5718) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5644) */

void FUN_10a2f53fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  long lVar11;
  undefined1 *unaff_x22;
  long lVar12;
  long lVar13;
  long *unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  ulong uVar15;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [56];
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a2f42c4(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2d6014(auStack_88,plVar6);
  puVar2 = auStack_88;
  FUN_10a2f562c(param_1,param_2,auStack_88);
  puVar7 = auStack_80;
  FUN_10a2f5910();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a2f5910(auStack_80);
    unaff_x30 = 0x10a2f5508;
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    unaff_x19 = plVar5;
    unaff_x20 = puVar7;
    unaff_x21 = param_1;
    unaff_x22 = puVar2;
    unaff_x23 = plVar6;
    unaff_x29 = puVar1;
  }
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar8;
          *(long *)((long)register0x00000008 + -0x70) = lVar14;
          *(long *)((long)register0x00000008 + -0x88) = lVar8;
          *(long *)((long)register0x00000008 + -0x80) = lVar8;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a2f5510; end: 10a2f562b;  */

/* WARNING: Possible PIC construction at 0x00010a2f5620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2f5624) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5670) */
/* WARNING: Removing unreachable block (ram,0x00010a2f568c) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56a8) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56ac) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56b4) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56bc) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56e8) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56ec) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56f4) */
/* WARNING: Removing unreachable block (ram,0x00010a2f56fc) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5700) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5718) */
/* WARNING: Removing unreachable block (ram,0x00010a2f5644) */

void FUN_10a2f5510(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  undefined8 unaff_x23;
  long lVar14;
  long *unaff_x24;
  ulong uVar15;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [56];
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a2f4580(param_2,param_3);
  FUN_10a2f5a4c(param_5);
  FUN_10a2f5a70(auStack_88,param_2,param_4);
  puVar2 = auStack_88;
  FUN_10a2d6074(plVar6,auStack_88);
  puVar7 = auStack_80;
  FUN_10a2f5910();
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a2f5910(auStack_80);
    unaff_x30 = 0x10a2f5624;
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    unaff_x19 = plVar5;
    unaff_x20 = puVar7;
    unaff_x21 = puVar2;
    unaff_x22 = param_2;
    unaff_x23 = param_5;
    unaff_x24 = plVar6;
    unaff_x29 = puVar1;
  }
  plVar6 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar8;
          *(long *)((long)register0x00000008 + -0x70) = lVar14;
          *(long *)((long)register0x00000008 + -0x88) = lVar8;
          *(long *)((long)register0x00000008 + -0x80) = lVar8;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a2f562c; end: 10a2f567b;  */

void FUN_10a2f562c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_20;
  if (*(uint *)(param_2 + 7) != 0xffffffff) {
    uStack_20 = param_1;
    (*(code *)(&PTR_FUN_110bc2f48)[*(uint *)(param_2 + 7)])(&puStack_18,param_2 + 1);
    return;
  }
  puVar5 = (undefined8 *)&UNK_10f634b57;
  func_0x00010988bd28();
  uVar6 = *(undefined8 *)*puVar5;
  plStack_48 = (long *)param_2[1];
  uStack_50 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_58 = &PTR_DAT_110c6afa8;
  func_0x000109899de4(uVar6,&uStack_50,&ppuStack_58,0,0);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2f567c; end: 10a2f568b;  */

void FUN_10a2f567c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c6afa8;
  func_0x000109899de4(uVar5,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2f568c; end: 10a2f577f;  */

void FUN_10a2f568c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c6afa8;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2f5780; end: 10a2f57b3;  */

void FUN_10a2f5780(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 1) == 0) {
    *param_1 = 1;
  }
  else {
    FUN_10a2f57b4(*(undefined8 *)*param_2);
  }
  return;
}



/* Entry: 10a2f57b4; end: 10a2f590f;  */

void FUN_10a2f57b4(undefined4 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_2 + 0x148))(&iStack_50);
  uStack_38 = CONCAT44(uStack_4c,iStack_50);
  for (plVar3 = *(long **)(param_3 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    uVar1 = plVar3[3];
    plVar2 = (long *)plVar3[2];
    if (-1 < (char)*(byte *)((long)plVar3 + 0x27)) {
      uVar1 = (ulong)*(byte *)((long)plVar3 + 0x27);
      plVar2 = plVar3 + 2;
    }
    (**(code **)(*param_2 + 0xb8))(&puStack_40,param_2,plVar2,uVar1);
    func_0x0001098849a4(&iStack_50,param_2,plVar3 + 6);
    (**(code **)(*param_2 + 0x1d0))(param_2,&uStack_38,&puStack_40,&iStack_50);
    if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
      (**(code **)*puStack_48)();
    }
    if (puStack_40 != (undefined8 *)0x0) {
      (**(code **)*puStack_40)();
    }
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_38;
  return;
}



/* Entry: 10a2f5910; end: 10a2f5963;  */

void FUN_10a2f5910(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110bc2f58)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10a2f5964; end: 10a2f5983;  */

long FUN_10a2f5964(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a2f5984; end: 10a2f5a4b;  */

long * FUN_10a2f5984(long *param_1)

{
  long lVar1;
  
  func_0x00010a2f59bc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a2f5a4c; end: 10a2f5a6f;  */

void FUN_10a2f5a4c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  long extraout_x8;
  long *extraout_x8_00;
  long lVar6;
  long *plVar7;
  char unaff_w21;
  long lStack_90;
  long *plStack_88;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  puVar5 = (uint *)0x0;
  FUN_10a052ee0(1,0,param_1);
  pcStack_18 = FUN_10a2f5a70;
  uVar4 = uVar3;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a2f5ae8();
  if ((int)uVar4 == 0) {
    if (1 < *puVar5 && *puVar5 != 7) {
      func_0x00010988bd28(&UNK_10f634795);
      uStack_68 = 0x10a2f5c6c;
      ppuStack_70 = &puStack_20;
      func_0x00010989879c(&lStack_90);
      plVar7 = extraout_x8_00;
      if ((lStack_90 != 0) &&
         (___dynamic_cast(lStack_90,&PTR_DAT_110b178e0,&PTR_DAT_110c6afa8,0),
         plVar7 = extraout_x8_00, lStack_90 != 0)) {
        *extraout_x8_00 = lStack_90;
        extraout_x8_00[1] = (long)plStack_88;
        plVar7 = &lStack_90;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_88 != (long *)0x0) {
        plVar7 = plStack_88 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      return;
    }
    func_0x00010a2f5d04(auStack_60,uVar3);
    *(undefined1 *)(extraout_x8 + 8) = 0;
    *(undefined1 *)(extraout_x8 + 0x30) = 0;
    if (unaff_w21 == '\x01') {
      FUN_10a2f64b8((undefined1 *)(extraout_x8 + 8),auStack_60);
      *(undefined1 *)(extraout_x8 + 0x30) = 1;
      *(undefined4 *)(extraout_x8 + 0x38) = 1;
      FUN_10a2f5984(auStack_60);
    }
    else {
      *(undefined4 *)(extraout_x8 + 0x38) = 1;
    }
    return;
  }
  FUN_10a2f5b64(&uStack_50,uVar3,puVar5);
  *(undefined8 *)(extraout_x8 + 0x10) = uStack_48;
  *(undefined8 *)(extraout_x8 + 8) = uStack_50;
  *(undefined4 *)(extraout_x8 + 0x38) = 0;
  return;
}



/* Entry: 10a2f5a70; end: 10a2f5ae7;  */

void FUN_10a2f5a70(long param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *extraout_x8;
  long lVar4;
  long *plVar5;
  char unaff_w21;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_2;
  FUN_10a2f5ae8();
  if ((int)uVar3 != 0) {
    FUN_10a2f5b64(&uStack_40,param_2,param_3);
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    *(undefined8 *)(param_1 + 8) = uStack_40;
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  if (1 < *param_3 && *param_3 != 7) {
    func_0x00010988bd28(&UNK_10f634795);
    uStack_58 = 0x10a2f5c6c;
    lStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010989879c(&lStack_80);
    plVar5 = extraout_x8;
    if ((lStack_80 != 0) &&
       (___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c6afa8,0), plVar5 = extraout_x8,
       lStack_80 != 0)) {
      *extraout_x8 = lStack_80;
      extraout_x8[1] = (long)plStack_78;
      plVar5 = &lStack_80;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    return;
  }
  func_0x00010a2f5d04(auStack_50,param_2);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (unaff_w21 == '\x01') {
    FUN_10a2f64b8((undefined1 *)(param_1 + 8),auStack_50);
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x38) = 1;
    FUN_10a2f5984(auStack_50);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 10a2f5ae8; end: 10a2f5b63;  */

bool FUN_10a2f5ae8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  func_0x000109898688();
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    func_0x00010a2f5c6c(&lStack_30);
    bVar4 = lStack_30 != 0;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a2f5b64; end: 10a2f5bdb;  */

void FUN_10a2f5b64(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010a2f5c6c(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2f5bc8);
  (*pcVar1)();
}


