/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a94dc7c; end: 10a94dc83;  */

void FUN_10a94dc7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_10a94cc6c(*(long *)(param_1 + 0x30),param_2);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a94dc84; end: 10a94dd33;  */

void FUN_10a94dc84(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x118);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x110) != 0) {
        FUN_10a94cd5c(*(long *)(param_1 + 0x110),param_2);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a94dd34; end: 10a94dd43;  */

void FUN_10a94dd34(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_10a94cd5c(*(long *)(param_1 + 0x30),param_2);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a94dd44; end: 10a94dfd7;  */

void FUN_10a94dd44(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  float *pfVar11;
  float *pfVar12;
  code **ppcVar13;
  long *extraout_x8;
  long lVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  float fStack_180;
  undefined8 uStack_178;
  float fStack_170;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 uStack_158;
  float fStack_150;
  undefined8 uStack_148;
  float fStack_140;
  code *pcStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  ppcVar13 = &pcStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = (undefined **)0x0;
  pcStack_80 = (code *)0x0;
  pcStack_90 = (code *)&UNK_10f684ee3;
  uStack_70 = 0xffffffffffffffff;
  uStack_78 = 0x100000064;
  puStack_68 = &UNK_10f683c80;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0xffffffff;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010a004eb4(param_1,&pcStack_90);
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    pcStack_90 = FUN_10a9615ac;
    ppuStack_88 = &PTR_FUN_110c31420;
    pcStack_80 = FUN_10a94dfd8;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a94dfcc;
    FUN_10a0544d8(param_1,&UNK_10f684ef0,&pcStack_90,2,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    pcStack_90 = FUN_10a9616f0;
    ppuStack_88 = &PTR_FUN_110c31438;
    pcStack_80 = FUN_10a94dfe4;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a94dfcc;
    FUN_10a0544d8(param_1,&UNK_10f65bd0f,&pcStack_90,2,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    pcStack_90 = FUN_10a961858;
    ppuStack_88 = &PTR_FUN_110c31450;
    pcStack_80 = FUN_10a94e05c;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a94dfcc;
    FUN_10a0544d8(param_1,&UNK_10f684f02,&pcStack_90,2,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
  }
  pfVar11 = (float *)0x64;
  pfVar12 = (float *)0x1;
  uVar9 = param_1;
  FUN_10a0051e8();
  if ((uVar9 & 1) == 0) {
    pcStack_90 = FUN_10a961b2c;
    ppuStack_88 = &PTR_FUN_110c31468;
    pcStack_80 = FUN_10a94e068;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
LAB_10a94dfcc:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a94dfd0);
      (*pcVar8)();
    }
    pfVar11 = (float *)&UNK_10f684f10;
    FUN_10a0544d8(param_1,&UNK_10f684f10,&pcStack_90,2,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_88)(&ppuStack_88);
    pfVar12 = (float *)ppcVar13;
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar14 = *(long *)(param_1 + 0x8c0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10a96c208(extraout_x8,*(long *)(lVar14 + 0xf8) - *(long *)(lVar14 + 0xf0) >> 4);
  plVar3 = *(long **)(lVar14 + 0xf8);
  for (plVar1 = *(long **)(lVar14 + 0xf0); plVar1 != plVar3; plVar1 = plVar1 + 2) {
    lVar14 = *plVar1;
    func_0x0001094f5708(&uStack_178,lVar14 + 0x34);
    fVar16 = *pfVar11;
    fVar19 = pfVar11[1];
    fVar21 = pfVar11[2];
    fStack_180 = fVar16 * fStack_170 + fVar19 * fStack_160 + fVar21 * fStack_150 + fStack_140;
    fVar22 = (float)((ulong)uStack_178 >> 0x20);
    fVar18 = (float)((ulong)uStack_168 >> 0x20);
    fVar20 = (float)((ulong)uStack_158 >> 0x20);
    fVar23 = (float)((ulong)uStack_148 >> 0x20);
    fVar17 = (float)uStack_178 * fVar16 + (float)uStack_168 * fVar19 +
             (float)uStack_158 * fVar21 + (float)uStack_148;
    fVar16 = fVar22 * fVar16 + fVar18 * fVar19 + fVar20 * fVar21 + fVar23;
    uStack_188 = CONCAT44(fVar16,fVar17);
    fVar19 = *pfVar12;
    fVar21 = pfVar12[1];
    fVar38 = pfVar12[2];
    plStack_1c0 = (long *)CONCAT44((fVar22 * fVar19 + fVar18 * fVar21 + fVar23 + fVar20 * fVar38) -
                                   fVar16,((float)uStack_178 * fVar19 + (float)uStack_168 * fVar21 +
                                          (float)uStack_148 + (float)uStack_158 * fVar38) - fVar17);
    plStack_1b8 = (long *)CONCAT44(plStack_1b8._4_4_,
                                   (fStack_170 * fVar19 + fStack_160 * fVar21 +
                                   fStack_140 + fStack_150 * fVar38) - fStack_180);
    FUN_10acb0120(&uStack_1b0,*plVar1,&uStack_188,&plStack_1c0,1);
    uVar7 = uStack_18c;
    fVar21 = fStack_198;
    fVar20 = fStack_19c;
    fVar19 = fStack_1a0;
    fVar17 = fStack_1a4;
    fVar16 = fStack_1a8;
    if ((char)uStack_1b0 == '\x01') {
      fVar22 = uStack_1b0._4_4_;
      fVar23 = *(float *)(lVar14 + 0x3c);
      fVar38 = *(float *)(lVar14 + 0x4c);
      fVar37 = *(float *)(lVar14 + 0x5c);
      uVar35 = *(undefined8 *)(lVar14 + 0x34);
      uVar29 = *(undefined8 *)(lVar14 + 0x44);
      uVar26 = *(undefined8 *)(lVar14 + 0x54);
      uVar32 = *(undefined8 *)(lVar14 + 100);
      fVar24 = *(float *)(lVar14 + 0x6c);
      plVar10 = (long *)0x60;
      __Znwm();
      fVar18 = fVar23 * fVar19 + fVar38 * fVar20 + fVar24 * 0.0 + fVar37 * fVar21;
      fVar34 = (float)uVar35;
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      fVar28 = (float)uVar29;
      fVar30 = (float)((ulong)uVar29 >> 0x20);
      fVar25 = (float)uVar26;
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      plVar15 = plVar10 + 1;
      *plVar15 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_DAT_110c34520;
      plVar10[3] = (long)&PTR_FUN_110c6aab0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[0xb] = 0;
      plVar10[10] = 0;
      *(undefined8 *)((long)plVar10 + 0x3c) = 0;
      *(undefined8 *)((long)plVar10 + 0x41) = 0;
      fVar31 = (float)uVar32;
      fVar33 = (float)((ulong)uVar32 >> 0x20);
      plVar10[6] = CONCAT44(fVar36 * fVar22 + fVar30 * fVar16 + fVar27 * fVar17 + fVar33,
                            fVar34 * fVar22 + fVar28 * fVar16 + fVar25 * fVar17 + fVar31);
      *(float *)(plVar10 + 7) = fVar22 * fVar23 + fVar16 * fVar38 + fVar17 * fVar37 + fVar24;
      func_0x00010a58e2e0(plVar10 + 10,plVar1);
      fVar16 = fVar34 * fVar19 + fVar28 * fVar20 + fVar31 * 0.0 + fVar25 * fVar21;
      fVar17 = fVar36 * fVar19 + fVar30 * fVar20 + fVar33 * 0.0 + fVar27 * fVar21;
      fVar19 = 1.0 / SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17);
      *(ulong *)((long)plVar10 + 0x3c) = CONCAT44(fVar17 * fVar19,fVar16 * fVar19);
      *(float *)((long)plVar10 + 0x44) = fVar18 * fVar19;
      *(undefined1 *)(plVar10 + 9) = uVar7;
      plStack_1c0 = plVar10 + 3;
      plStack_1b8 = plVar10;
      func_0x00010a96c2a4(extraout_x8,&plStack_1c0);
      do {
        lVar14 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  lVar2 = *extraout_x8;
  lVar4 = extraout_x8[1];
  lVar14 = 0;
  if (lVar4 != lVar2) {
    lVar14 = LZCOUNT(lVar4 - lVar2 >> 4) * -2 + 0x7e;
  }
  uStack_1b0 = pfVar11;
  FUN_10a998ca4(lVar2,lVar4,&uStack_1b0,lVar14,1);
  return;
}



/* Entry: 10a94dfd8; end: 10a94dfe3;  */

void FUN_10a94dfd8(long *param_1,long param_2,float *param_3,float *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
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
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  
  lVar9 = *(long *)(param_2 + 0x8c0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a96c208(param_1,*(long *)(lVar9 + 0xf8) - *(long *)(lVar9 + 0xf0) >> 4);
  plVar3 = *(long **)(lVar9 + 0xf8);
  for (plVar1 = *(long **)(lVar9 + 0xf0); plVar1 != plVar3; plVar1 = plVar1 + 2) {
    lVar9 = *plVar1;
    func_0x0001094f5708(&uStack_e8,lVar9 + 0x34);
    fVar11 = *param_3;
    fVar14 = param_3[1];
    fVar16 = param_3[2];
    fStack_f0 = fVar11 * fStack_e0 + fVar14 * fStack_d0 + fVar16 * fStack_c0 + fStack_b0;
    fVar17 = (float)((ulong)uStack_e8 >> 0x20);
    fVar13 = (float)((ulong)uStack_d8 >> 0x20);
    fVar15 = (float)((ulong)uStack_c8 >> 0x20);
    fVar18 = (float)((ulong)uStack_b8 >> 0x20);
    fVar12 = (float)uStack_e8 * fVar11 + (float)uStack_d8 * fVar14 +
             (float)uStack_c8 * fVar16 + (float)uStack_b8;
    fVar11 = fVar17 * fVar11 + fVar13 * fVar14 + fVar15 * fVar16 + fVar18;
    uStack_f8 = CONCAT44(fVar11,fVar12);
    fVar14 = *param_4;
    fVar16 = param_4[1];
    fVar33 = param_4[2];
    plStack_130 = (long *)CONCAT44((fVar17 * fVar14 + fVar13 * fVar16 + fVar18 + fVar15 * fVar33) -
                                   fVar11,((float)uStack_e8 * fVar14 + (float)uStack_d8 * fVar16 +
                                          (float)uStack_b8 + (float)uStack_c8 * fVar33) - fVar12);
    plStack_128 = (long *)CONCAT44(plStack_128._4_4_,
                                   (fStack_e0 * fVar14 + fStack_d0 * fVar16 +
                                   fStack_b0 + fStack_c0 * fVar33) - fStack_f0);
    FUN_10acb0120(&uStack_120,*plVar1,&uStack_f8,&plStack_130,1);
    uVar7 = uStack_fc;
    fVar16 = fStack_108;
    fVar15 = fStack_10c;
    fVar14 = fStack_110;
    fVar12 = fStack_114;
    fVar11 = fStack_118;
    if ((char)uStack_120 == '\x01') {
      fVar17 = uStack_120._4_4_;
      fVar18 = *(float *)(lVar9 + 0x3c);
      fVar33 = *(float *)(lVar9 + 0x4c);
      fVar32 = *(float *)(lVar9 + 0x5c);
      uVar30 = *(undefined8 *)(lVar9 + 0x34);
      uVar24 = *(undefined8 *)(lVar9 + 0x44);
      uVar21 = *(undefined8 *)(lVar9 + 0x54);
      uVar27 = *(undefined8 *)(lVar9 + 100);
      fVar19 = *(float *)(lVar9 + 0x6c);
      plVar8 = (long *)0x60;
      __Znwm();
      fVar13 = fVar18 * fVar14 + fVar33 * fVar15 + fVar19 * 0.0 + fVar32 * fVar16;
      fVar29 = (float)uVar30;
      fVar31 = (float)((ulong)uVar30 >> 0x20);
      fVar23 = (float)uVar24;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      fVar20 = (float)uVar21;
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      plVar10 = plVar8 + 1;
      *plVar10 = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_DAT_110c34520;
      plVar8[3] = (long)&PTR_FUN_110c6aab0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      *(undefined8 *)((long)plVar8 + 0x3c) = 0;
      *(undefined8 *)((long)plVar8 + 0x41) = 0;
      fVar26 = (float)uVar27;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      plVar8[6] = CONCAT44(fVar31 * fVar17 + fVar25 * fVar11 + fVar22 * fVar12 + fVar28,
                           fVar29 * fVar17 + fVar23 * fVar11 + fVar20 * fVar12 + fVar26);
      *(float *)(plVar8 + 7) = fVar17 * fVar18 + fVar11 * fVar33 + fVar12 * fVar32 + fVar19;
      func_0x00010a58e2e0(plVar8 + 10,plVar1);
      fVar11 = fVar29 * fVar14 + fVar23 * fVar15 + fVar26 * 0.0 + fVar20 * fVar16;
      fVar12 = fVar31 * fVar14 + fVar25 * fVar15 + fVar28 * 0.0 + fVar22 * fVar16;
      fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12);
      *(ulong *)((long)plVar8 + 0x3c) = CONCAT44(fVar12 * fVar14,fVar11 * fVar14);
      *(float *)((long)plVar8 + 0x44) = fVar13 * fVar14;
      *(undefined1 *)(plVar8 + 9) = uVar7;
      plStack_130 = plVar8 + 3;
      plStack_128 = plVar8;
      func_0x00010a96c2a4(param_1,&plStack_130);
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  lVar2 = *param_1;
  lVar4 = param_1[1];
  lVar9 = 0;
  if (lVar4 != lVar2) {
    lVar9 = LZCOUNT(lVar4 - lVar2 >> 4) * -2 + 0x7e;
  }
  uStack_120 = param_3;
  FUN_10a998ca4(lVar2,lVar4,&uStack_120,lVar9,1);
  return;
}



/* Entry: 10a94dfe4; end: 10a94e05b;  */

void FUN_10a94dfe4(undefined8 param_1,long param_2,float *param_3,float *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  float *pfVar14;
  long *extraout_x8;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  char acStack_188 [4];
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_170;
  float fStack_168;
  float *pfStack_160;
  float *pfStack_158;
  float *pfStack_150;
  long lStack_148;
  long *plStack_140;
  float fStack_138;
  undefined8 uStack_130;
  float fStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_48 [8];
  float fStack_40;
  undefined8 uStack_3c;
  float fStack_34;
  undefined8 uStack_30;
  float fStack_28;
  
  if (param_4 != (float *)0x0) {
    lVar17 = *(long *)(param_2 + 0x8c0);
    FUN_10a96bdd8(auStack_48,param_4);
    fStack_28 = fStack_40 + fStack_34;
    uStack_30 = CONCAT44(auStack_48._4_4_ + (float)((ulong)uStack_3c >> 0x20),
                         auStack_48._0_4_ + (float)uStack_3c);
    FUN_10a96be74(param_1,lVar17 + 0xf0,auStack_48,&uStack_30);
    return;
  }
  puVar10 = &UNK_10f684f1e;
  FUN_10a00946c();
  lVar17 = *(long *)(puVar10 + 0x8c0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  plVar2 = *(long **)(lVar17 + 0x88);
  plVar21 = *(long **)(lVar17 + 0x90);
  if ((long)plVar21 - (long)plVar2 != 0) {
    uVar11 = (long)plVar21 - (long)plVar2 >> 4;
    if (uVar11 >> 0x3c != 0) {
      FUN_10a989c98();
LAB_10a96c7ac:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a96c7b0);
      (*pcVar9)();
    }
    pfVar14 = param_3;
    plStack_140 = extraout_x8;
    FUN_10a989cac();
    lVar19 = uVar11 - (extraout_x8[1] - *extraout_x8);
    _memcpy(lVar19);
    pfStack_160 = (float *)*extraout_x8;
    *extraout_x8 = lVar19;
    extraout_x8[1] = uVar11;
    lStack_148 = extraout_x8[2];
    extraout_x8[2] = uVar11 + (long)pfVar14 * 0x10;
    pfStack_158 = pfStack_160;
    pfStack_150 = pfStack_160;
    func_0x00010a989ce0(&pfStack_160);
    plVar2 = *(long **)(lVar17 + 0x88);
    plVar21 = *(long **)(lVar17 + 0x90);
  }
  do {
    if (plVar2 == plVar21) {
      lVar19 = *extraout_x8;
      lVar3 = extraout_x8[1];
      lVar17 = 0;
      if (lVar3 != lVar19) {
        lVar17 = LZCOUNT(lVar3 - lVar19 >> 4) * -2 + 0x7e;
      }
      pfStack_160 = param_3;
      FUN_10a99a628(lVar19,lVar3,&pfStack_160,lVar17,1);
      return;
    }
    lVar17 = *plVar2;
    func_0x0001094f5708(&pfStack_160,lVar17 + 0x1c);
    fVar37 = fStack_128;
    fVar8 = fStack_138;
    fVar23 = *param_3;
    fVar24 = param_3[1];
    fVar25 = param_3[2];
    fVar6 = pfStack_158._0_4_;
    fVar7 = (float)lStack_148;
    fStack_168 = fVar23 * pfStack_158._0_4_ + fVar24 * (float)lStack_148 +
                 fVar25 * fStack_138 + fStack_128;
    fVar36 = SUB84(pfStack_160,0);
    fVar38 = (float)((ulong)pfStack_160 >> 0x20);
    fVar32 = SUB84(pfStack_150,0);
    fVar34 = (float)((ulong)pfStack_150 >> 0x20);
    fVar29 = SUB84(plStack_140,0);
    fVar31 = (float)((ulong)plStack_140 >> 0x20);
    fVar26 = (float)uStack_130;
    fVar28 = (float)((ulong)uStack_130 >> 0x20);
    uStack_170 = CONCAT44(fVar38 * fVar23 + fVar34 * fVar24 + fVar31 * fVar25 + fVar28,
                          fVar36 * fVar23 + fVar32 * fVar24 + fVar29 * fVar25 + fVar26);
    fVar23 = *param_4;
    fVar24 = param_4[1];
    fVar25 = param_4[2];
    plVar12 = *(long **)(*(long *)(*plVar2 + 0x78) + 0xe0);
    (**(code **)(*plVar12 + 0x90))();
    lStack_120 = CONCAT44((fVar38 * fVar23 + fVar34 * fVar24 + fVar28 + fVar31 * fVar25) -
                          (float)((ulong)uStack_170 >> 0x20),
                          (fVar36 * fVar23 + fVar32 * fVar24 + fVar26 + fVar29 * fVar25) -
                          (float)uStack_170);
    lStack_118 = CONCAT44(lStack_118._4_4_,
                          (fVar6 * fVar23 + fVar7 * fVar24 + fVar37 + fVar8 * fVar25) - fStack_168);
    FUN_10ab4e33c(acStack_188,*plVar12,&uStack_170,&lStack_120,1);
    fVar8 = fStack_17c;
    fVar7 = fStack_180;
    fVar6 = fStack_184;
    if (acStack_188[0] == '\x01') {
      fVar23 = *(float *)(lVar17 + 0x24);
      fVar24 = *(float *)(lVar17 + 0x34);
      fVar37 = *(float *)(lVar17 + 0x44);
      uVar35 = *(undefined8 *)(lVar17 + 0x1c);
      uVar33 = *(undefined8 *)(lVar17 + 0x2c);
      uVar30 = *(undefined8 *)(lVar17 + 0x3c);
      uVar27 = *(undefined8 *)(lVar17 + 0x4c);
      fVar25 = *(float *)(lVar17 + 0x54);
      plVar13 = (long *)0x50;
      __Znwm();
      plVar18 = plVar13 + 1;
      *plVar18 = 0;
      plVar13[2] = 0;
      plVar20 = plVar13 + 3;
      *plVar20 = (long)&PTR_FUN_110c6ac70;
      *plVar13 = (long)&PTR_FUN_110c34570;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[6] = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar6 +
                            (float)((ulong)uVar33 >> 0x20) * fVar7 +
                            (float)((ulong)uVar30 >> 0x20) * fVar8 + (float)((ulong)uVar27 >> 0x20),
                            (float)uVar35 * fVar6 + (float)uVar33 * fVar7 +
                            (float)uVar30 * fVar8 + (float)uVar27);
      *(float *)(plVar13 + 7) = fVar6 * fVar23 + fVar7 * fVar24 + fVar8 * fVar37 + fVar25;
      plVar12 = plVar2;
      func_0x00010a4afa48();
      puVar22 = (undefined8 *)extraout_x8[1];
      if (puVar22 < (undefined8 *)extraout_x8[2]) {
        *puVar22 = plVar20;
        puVar22[1] = plVar13;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar22 = puVar22 + 2;
      }
      else {
        lVar17 = (long)puVar22 - *extraout_x8;
        uVar11 = (lVar17 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) {
          FUN_10a989c98();
          goto LAB_10a96c7ac;
        }
        uVar15 = extraout_x8[2] - *extraout_x8;
        uVar16 = (long)uVar15 >> 3;
        if (uVar16 <= uVar11) {
          uVar16 = uVar11;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar16 = 0xfffffffffffffff;
        }
        FUN_10a989cac();
        puVar1 = (undefined8 *)(uVar16 + lVar17);
        *puVar1 = plVar20;
        puVar1[1] = plVar13;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar22 = puVar1 + 2;
        lVar17 = (long)puVar1 - (extraout_x8[1] - *extraout_x8);
        _memcpy(lVar17);
        lStack_120 = *extraout_x8;
        *extraout_x8 = lVar17;
        extraout_x8[1] = (long)puVar22;
        lStack_108 = extraout_x8[2];
        extraout_x8[2] = uVar16 + (long)plVar12 * 0x10;
        lStack_118 = lStack_120;
        lStack_110 = lStack_120;
        func_0x00010a989ce0(&lStack_120);
      }
      extraout_x8[1] = (long)puVar22;
      do {
        lVar17 = *plVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



/* Entry: 10a94e05c; end: 10a94e067;  */

void FUN_10a94e05c(long *param_1,long param_2,float *param_3,float *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  char acStack_138 [4];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_120;
  float fStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  long lStack_f8;
  long *plStack_f0;
  float fStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  
  lVar14 = *(long *)(param_2 + 0x8c0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = *(long **)(lVar14 + 0x88);
  plVar20 = *(long **)(lVar14 + 0x90);
  if ((long)plVar20 - (long)plVar2 != 0) {
    uVar10 = (long)plVar20 - (long)plVar2 >> 4;
    if (uVar10 >> 0x3c != 0) {
      FUN_10a989c98();
LAB_10a96c7ac:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a96c7b0);
      (*pcVar9)();
    }
    pfVar13 = param_3;
    plStack_f0 = param_1;
    FUN_10a989cac();
    lVar18 = uVar10 - (param_1[1] - *param_1);
    _memcpy(lVar18);
    pfStack_110 = (float *)*param_1;
    *param_1 = lVar18;
    param_1[1] = uVar10;
    lStack_f8 = param_1[2];
    param_1[2] = uVar10 + (long)pfVar13 * 0x10;
    pfStack_108 = pfStack_110;
    pfStack_100 = pfStack_110;
    func_0x00010a989ce0(&pfStack_110);
    plVar2 = *(long **)(lVar14 + 0x88);
    plVar20 = *(long **)(lVar14 + 0x90);
  }
  do {
    if (plVar2 == plVar20) {
      lVar18 = *param_1;
      lVar3 = param_1[1];
      lVar14 = 0;
      if (lVar3 != lVar18) {
        lVar14 = LZCOUNT(lVar3 - lVar18 >> 4) * -2 + 0x7e;
      }
      pfStack_110 = param_3;
      FUN_10a99a628(lVar18,lVar3,&pfStack_110,lVar14,1);
      return;
    }
    lVar14 = *plVar2;
    func_0x0001094f5708(&pfStack_110,lVar14 + 0x1c);
    fVar36 = fStack_d8;
    fVar8 = fStack_e8;
    fVar22 = *param_3;
    fVar23 = param_3[1];
    fVar24 = param_3[2];
    fVar6 = pfStack_108._0_4_;
    fVar7 = (float)lStack_f8;
    fStack_118 = fVar22 * pfStack_108._0_4_ + fVar23 * (float)lStack_f8 +
                 fVar24 * fStack_e8 + fStack_d8;
    fVar35 = SUB84(pfStack_110,0);
    fVar37 = (float)((ulong)pfStack_110 >> 0x20);
    fVar31 = SUB84(pfStack_100,0);
    fVar33 = (float)((ulong)pfStack_100 >> 0x20);
    fVar28 = SUB84(plStack_f0,0);
    fVar30 = (float)((ulong)plStack_f0 >> 0x20);
    fVar25 = (float)uStack_e0;
    fVar27 = (float)((ulong)uStack_e0 >> 0x20);
    uStack_120 = CONCAT44(fVar37 * fVar22 + fVar33 * fVar23 + fVar30 * fVar24 + fVar27,
                          fVar35 * fVar22 + fVar31 * fVar23 + fVar28 * fVar24 + fVar25);
    fVar22 = *param_4;
    fVar23 = param_4[1];
    fVar24 = param_4[2];
    plVar11 = *(long **)(*(long *)(*plVar2 + 0x78) + 0xe0);
    (**(code **)(*plVar11 + 0x90))();
    lStack_d0 = CONCAT44((fVar37 * fVar22 + fVar33 * fVar23 + fVar27 + fVar30 * fVar24) -
                         (float)((ulong)uStack_120 >> 0x20),
                         (fVar35 * fVar22 + fVar31 * fVar23 + fVar25 + fVar28 * fVar24) -
                         (float)uStack_120);
    lStack_c8 = CONCAT44(lStack_c8._4_4_,
                         (fVar6 * fVar22 + fVar7 * fVar23 + fVar36 + fVar8 * fVar24) - fStack_118);
    FUN_10ab4e33c(acStack_138,*plVar11,&uStack_120,&lStack_d0,1);
    fVar8 = fStack_12c;
    fVar7 = fStack_130;
    fVar6 = fStack_134;
    if (acStack_138[0] == '\x01') {
      fVar22 = *(float *)(lVar14 + 0x24);
      fVar23 = *(float *)(lVar14 + 0x34);
      fVar36 = *(float *)(lVar14 + 0x44);
      uVar34 = *(undefined8 *)(lVar14 + 0x1c);
      uVar32 = *(undefined8 *)(lVar14 + 0x2c);
      uVar29 = *(undefined8 *)(lVar14 + 0x3c);
      uVar26 = *(undefined8 *)(lVar14 + 0x4c);
      fVar24 = *(float *)(lVar14 + 0x54);
      plVar12 = (long *)0x50;
      __Znwm();
      plVar17 = plVar12 + 1;
      *plVar17 = 0;
      plVar12[2] = 0;
      plVar19 = plVar12 + 3;
      *plVar19 = (long)&PTR_FUN_110c6ac70;
      *plVar12 = (long)&PTR_FUN_110c34570;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[8] = 0;
      plVar12[9] = 0;
      plVar12[6] = CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar6 +
                            (float)((ulong)uVar32 >> 0x20) * fVar7 +
                            (float)((ulong)uVar29 >> 0x20) * fVar8 + (float)((ulong)uVar26 >> 0x20),
                            (float)uVar34 * fVar6 + (float)uVar32 * fVar7 +
                            (float)uVar29 * fVar8 + (float)uVar26);
      *(float *)(plVar12 + 7) = fVar6 * fVar22 + fVar7 * fVar23 + fVar8 * fVar36 + fVar24;
      plVar11 = plVar2;
      func_0x00010a4afa48();
      puVar21 = (undefined8 *)param_1[1];
      if (puVar21 < (undefined8 *)param_1[2]) {
        *puVar21 = plVar19;
        puVar21[1] = plVar12;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar21 = puVar21 + 2;
      }
      else {
        lVar14 = (long)puVar21 - *param_1;
        uVar10 = (lVar14 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) {
          FUN_10a989c98();
          goto LAB_10a96c7ac;
        }
        uVar15 = param_1[2] - *param_1;
        uVar16 = (long)uVar15 >> 3;
        if (uVar16 <= uVar10) {
          uVar16 = uVar10;
        }
        if (0x7fffffffffffffef < uVar15) {
          uVar16 = 0xfffffffffffffff;
        }
        plStack_b0 = param_1;
        FUN_10a989cac();
        puVar1 = (undefined8 *)(uVar16 + lVar14);
        *puVar1 = plVar19;
        puVar1[1] = plVar12;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar21 = puVar1 + 2;
        lVar14 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar14);
        lStack_d0 = *param_1;
        *param_1 = lVar14;
        param_1[1] = (long)puVar21;
        lStack_b8 = param_1[2];
        param_1[2] = uVar16 + (long)plVar11 * 0x10;
        lStack_c8 = lStack_d0;
        lStack_c0 = lStack_d0;
        func_0x00010a989ce0(&lStack_d0);
      }
      param_1[1] = (long)puVar21;
      do {
        lVar14 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



/* Entry: 10a94e068; end: 10a94e0df;  */

long FUN_10a94e068(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_48 [8];
  float fStack_40;
  undefined8 uStack_3c;
  float fStack_34;
  undefined8 uStack_30;
  float fStack_28;
  
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 0x8c0);
    FUN_10a96bdd8(auStack_48,param_4);
    fStack_28 = fStack_40 + fStack_34;
    uStack_30 = CONCAT44(auStack_48._4_4_ + (float)((ulong)uStack_3c >> 0x20),
                         auStack_48._0_4_ + (float)uStack_3c);
    lVar1 = lVar1 + 0x88;
    FUN_10a96c3b8(param_1,lVar1,auStack_48,&uStack_30);
    return lVar1;
  }
  FUN_10a00946c(&UNK_10f684f48);
  return 0x10000;
}



/* Entry: 10a94e0e0; end: 10a94e183;  */

undefined8 FUN_10a94e0e0(void)

{
  return 0x10000;
}



/* Entry: 10a94e184; end: 10a94e1e7;  */

void FUN_10a94e184(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f683c80;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xf5;
  uStack_18 = 0xffffffff;
  FUN_10a94e1e8(param_1,&uStack_58);
  FUN_10a961d6c();
  return;
}



/* Entry: 10a94e1e8; end: 10a94e2bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a94e280) */

undefined1  [16] FUN_10a94e1e8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f685474,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a961c70(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a94e2c0; end: 10a94e2cf;  */

void FUN_10a94e2c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a94e2d0; end: 10a94e357;  */

undefined8 * FUN_10a94e2d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f948;
  func_0x00010a190e10(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a94e358; end: 10a94e35b;  */

undefined8 * FUN_10a94e358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f9a0;
  param_1[3] = &PTR_FUN_110c2fa18;
  (**(code **)param_1[0xb])();
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a94e35c; end: 10a94e36f;  */

void FUN_10a94e35c(void)

{
  FUN_10a950050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94e370; end: 10a94e377;  */

undefined8 * FUN_10a94e370(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110c2f9a0;
  *param_1 = &PTR_FUN_110c2fa18;
  (**(code **)param_1[8])();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
  return puVar1;
}



/* Entry: 10a94e378; end: 10a94e38f;  */

void FUN_10a94e378(long param_1)

{
  FUN_10a950050(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94e390; end: 10a94e653;  */

undefined8 * FUN_10a94e390(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c2fa58;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  if (param_1[0x1e] != 0) {
    param_1[0x1f] = param_1[0x1e];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1b;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 0xc;
  FUN_10a0426d8(&puStack_28);
  puStack_28 = param_1 + 9;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 7);
  FUN_10a0617bc(param_1 + 5);
  FUN_10a3b772c(param_1 + 3);
  return param_1;
}



/* Entry: 10a94e654; end: 10a94e65b;  */

long FUN_10a94e654(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a94e65c; end: 10a94e6e3;  */

undefined8 * FUN_10a94e65c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ffe8;
  func_0x00010a94fafc(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a94e6e4; end: 10a94e6e7;  */

undefined8 * FUN_10a94e6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a94e6e8; end: 10a94e6fb;  */

void FUN_10a94e6e8(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94e6fc; end: 10a94e703;  */

undefined8 * FUN_10a94e6fc(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a94e704; end: 10a94e71b;  */

void FUN_10a94e704(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94e71c; end: 10a94e723;  */

undefined8 * FUN_10a94e71c(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a94e724; end: 10a94e73b;  */

void FUN_10a94e724(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94e73c; end: 10a94e787;  */

void FUN_10a94e73c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10a8fef6c(0x40000000,0x3f800000,lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 10a94e788; end: 10a94e8df;  */

long * FUN_10a94e788(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 4) * -0x5555555555555555 + 1;
  if (uVar5 < 0x555555555555556) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    plStack_48 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a90ff0c();
    }
    lVar8 = (long)plVar2 + lVar8;
    plStack_50 = plVar2 + uVar6 * 6;
    plStack_68 = plVar2;
    plStack_60 = (long *)lVar8;
    plStack_58 = (long *)lVar8;
    FUN_10a8fef6c(0x40000000,0x3f800000,lVar8,param_2,param_3,param_4,0xffffd8f0,param_5,4);
    plStack_58 = (long *)(lVar8 + 0x30);
    lVar8 = lVar8 + (*param_1 - param_1[1]);
    func_0x00010a90ff50(param_1,*param_1,param_1[1],lVar8);
    plVar2 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar8;
    lVar8 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar8;
    func_0x00010a90ffc0(&plStack_68);
    return plVar2;
  }
  func_0x00010a90fef8();
  func_0x00010a90ffc0(&plStack_68);
  __Unwind_Resume(param_1);
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar7 = (long *)*plVar2;
  if (plVar7 != (long *)0x0) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar7;
    if (plVar1 != plVar7) {
      do {
        plVar1 = plVar1 + -2;
        func_0x00010a95188c();
      } while (plVar1 != plVar7);
      plVar3 = (long *)*plVar2;
    }
    plVar2[1] = (long)plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return plVar3;
  }
  return plVar2;
}



/* Entry: 10a94e8e0; end: 10a94e8f3;  */

void FUN_10a94e8e0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a95188c();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a94e8f4; end: 10a94e94f;  */

void FUN_10a94e8f4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a95188c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a94e950; end: 10a94ea7f;  */

void FUN_10a94e950(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        FUN_10a9412d0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a94ea80; end: 10a94ef57;  */

/* WARNING: Removing unreachable block (ram,0x00010a94ec58) */
/* WARNING: Removing unreachable block (ram,0x00010a94eb3c) */

void FUN_10a94ea80(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_49;
  long lStack_40;
  long *plStack_38;
  
  puVar6 = (undefined8 *)0x90;
  __Znwm();
  *puVar6 = FUN_10a962a60;
  puVar6[1] = FUN_10a962e64;
  puVar6[0x10] = param_2;
  FUN_10a94ef58(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  lVar8 = *(long *)(param_2 + 0x20);
  puVar6[0xd] = lVar8;
  plVar7 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xd] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x11) = 0;
    lVar8 = puVar6[0xd];
    plVar7 = (long *)(lVar8 + 0x10);
    uVar9 = puVar6[3];
    do {
      lVar12 = *plVar7;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_10a94ee48;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[0xd];
  if (((uint)*(undefined8 *)(puVar6[0xd] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar7 + 0x12);
    goto LAB_10a94ee88;
  }
  if ((*(byte *)(plVar7 + 0x17) & 1) == 0) goto LAB_10a94ee88;
  *(char *)(puVar6 + 9) = (char)plVar7[0x13];
  if (*(char *)((long)plVar7 + 0xb7) < '\0') {
    func_0x000107c3192c(puVar6 + 10,plVar7[0x14],plVar7[0x15]);
    plVar7 = (long *)puVar6[0xd];
    if (plVar7 != (long *)0x0) goto LAB_10a94eba8;
  }
  else {
    lVar12 = plVar7[0x15];
    lVar8 = plVar7[0x14];
    puVar6[0xc] = plVar7[0x16];
    puVar6[0xb] = lVar12;
    puVar6[10] = lVar8;
LAB_10a94eba8:
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar11 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if ((*(byte *)(puVar6 + 9) & 1) == 0) {
    FUN_10a00946c(&UNK_10f685104);
LAB_10a94ee88:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a94ee8c);
    (*pcVar5)();
  }
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  if (*(char *)(puVar6[0x10] + 0x18) == '\x01') {
    lVar8 = *(long *)(puVar6[0x10] + 0x10);
    puVar6[0xf] = lVar8;
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0xf] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x11) = 1;
      lVar8 = puVar6[0xf];
      plVar7 = (long *)(lVar8 + 0x10);
      uVar9 = puVar6[3];
      do {
        lVar12 = *plVar7;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
LAB_10a94ee48:
            uStack_68 = uVar9;
            uStack_78 = 0;
            plStack_70 = puVar6;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_78);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    uVar9 = *(undefined8 *)(puVar6[0xf] + 0x10);
    plVar7 = (long *)puVar6[0xf];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)uVar9 >> 5 & 1) == 0) {
      func_0x0001092af8bc(puVar6[0x10] + 0x10);
      if ((*(byte *)(*(long *)(puVar6[0x10] + 0x10) + 0xa8) & 1) == 0) goto LAB_10a94ee88;
      func_0x00010a94f0ac(puVar6 + 0xd,*(long *)(*(long *)(puVar6[0x10] + 0x10) + 0x98) + 0x268);
    }
  }
  FUN_10a0ff18c(&uStack_78,puVar6 + 10,2);
  FUN_10a94f128(&lStack_40,*(undefined8 *)puVar6[0x10],&uStack_78,puVar6 + 0xd);
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  if (uStack_68._7_1_ < '\0') {
    __ZdlPv(uStack_78);
  }
  puVar10 = (undefined8 *)puVar6[0x10];
  *(undefined1 *)(lStack_40 + 0x288) = 1;
  FUN_10a37bb00(&uStack_78,*puVar10,&lStack_40);
  func_0x00010a94e9c0(puVar6 + 2,&uStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar7 = plStack_70 + 1;
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar7 = plStack_38 + 1;
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  plVar7 = (long *)puVar6[0xe];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(char *)((long)puVar6 + 0x67) < '\0') {
    __ZdlPv(puVar6[10]);
  }
  func_0x000109d1a1d0(puVar6 + 2);
  __ZdlPv(puVar6);
  return;
}



/* Entry: 10a94ef58; end: 10a94eff7;  */

undefined8 * FUN_10a94ef58(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c30af0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a94eff8; end: 10a94f127;  */

undefined8 * FUN_10a94eff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c30af0;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a05248c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a94f128; end: 10a94f1bf;  */

void FUN_10a94f128(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)0x410;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110bc8920;
  puVar2 = puVar6 + 3;
  FUN_10ac8b384(puVar2,param_2,param_3,param_4,1);
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  if ((puVar6 + 0xb != (long *)0x0) &&
     ((lVar5 = puVar6[0xc], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = puVar6[0xc];
    }
    puVar6[0xb] = puVar2;
    puVar6[0xc] = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a94f1c0; end: 10a94f1ef;  */

void FUN_10a94f1c0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a94f1f0();
                    /* WARNING: Could not recover jumptable at 0x00010a94f1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a94f1f0; end: 10a94f3f7;  */

long **** FUN_10a94f1f0(long ****param_1)

{
  code *pcVar1;
  long ****pppplVar2;
  undefined8 *puVar3;
  long ****pppplVar4;
  int iVar5;
  long ****pppplVar6;
  long **pplStack_148;
  long ***ppplStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_129;
  long ***ppplStack_128;
  long ***ppplStack_120;
  undefined8 uStack_118;
  char cStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[3] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a94f36c);
    (*pcVar1)();
  }
  pppplVar6 = (long ****)param_1[4];
  param_1[4] = (long ***)0x0;
  pppplVar2 = param_1;
  ppplStack_128 = (long ***)pppplVar6;
  func_0x00010ad0321c();
  func_0x000107c2b054(auStack_108,&DAT_10f685174);
  FUN_10ad016b8(&ppplStack_120,pppplVar2,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  FUN_10a12add4(auStack_108,*param_1 + 2);
  puVar3 = auStack_108;
  FUN_10a1a56b4(puVar3,&ppplStack_120,1);
  if (((ulong)puVar3 & 1) == 0) {
    pplStack_148._0_1_ = 0;
    func_0x000107c2b054(&ppplStack_140,&UNK_10f683c80);
  }
  else {
    pplStack_148._0_1_ = 1;
    if (cStack_109 < '\0') {
      func_0x000107c3192c(&ppplStack_140,ppplStack_120,uStack_118);
    }
    else {
      uStack_138 = uStack_118;
      ppplStack_140 = ppplStack_120;
      cStack_129 = cStack_109;
    }
  }
  if (cStack_109 < '\0') {
    __ZdlPv(ppplStack_120);
  }
  pppplVar2 = (long ****)&pplStack_148;
  pppplVar4 = pppplVar6;
  FUN_10a94f704();
  if (cStack_129 < '\0') {
    pppplVar4 = (long ****)ppplStack_140;
    __ZdlPv();
  }
  while( true ) {
    if (*(char *)(param_1 + 3) == '\x01') {
      pppplVar4 = param_1;
      func_0x00010a136de4();
      *(undefined1 *)(param_1 + 3) = 0;
    }
    ppplStack_128 = (long ***)0x0;
    if (pppplVar6 != (long ****)0x0) {
      pppplVar4 = &ppplStack_128;
      func_0x0001092b4274(pppplVar4,pppplVar6);
      pppplVar2 = (long ****)ppplStack_128;
      if ((long ****)ppplStack_128 != (long ****)0x0) {
        pppplVar4 = &ppplStack_128;
        func_0x0001092b4274();
      }
    }
    iVar5 = (int)pppplVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume(pppplVar4);
      func_0x000104bd46a0();
      *pppplVar4 = (long ***)&PTR_FUN_110c30b28;
      if (pppplVar4[0x1c] != (long ***)0x0) {
        func_0x0001092b4274();
      }
      if (*(char *)(pppplVar4 + 0x1b) == '\x01') {
        func_0x00010a136de4(pppplVar4 + 0x18);
      }
      *pppplVar4 = (long ***)&PTR_DAT_110c31800;
      if ((*(char *)(pppplVar4 + 0x17) == '\x01') && (*(char *)((long)pppplVar4 + 0xb7) < '\0')) {
        __ZdlPv(pppplVar4[0x14]);
      }
      *pppplVar4 = (long ***)&PTR_DAT_110ae8be8;
      __ZNSt13exception_ptrD1Ev(pppplVar4 + 0x12);
      *pppplVar4 = (long ***)&PTR_DAT_110ae8c08;
      return pppplVar4;
    }
    if (cStack_109 < '\0') {
      __ZdlPv(ppplStack_120);
    }
    ___cxa_begin_catch(pppplVar4);
    __ZSt17current_exceptionv(&pplStack_148);
    pppplVar2 = (long ****)&pplStack_148;
    func_0x000109d1b350(pppplVar6);
    pppplVar4 = (long ****)&pplStack_148;
    __ZNSt13exception_ptrD1Ev();
    ___cxa_end_catch();
  }
  return pppplVar4;
}



/* Entry: 10a94f3f8; end: 10a94f703;  */

undefined8 * FUN_10a94f3f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c30b28;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    func_0x00010a136de4(param_1 + 0x18);
  }
  *param_1 = &PTR_DAT_110c31800;
  if ((*(char *)(param_1 + 0x17) == '\x01') && (*(char *)((long)param_1 + 0xb7) < '\0')) {
    __ZdlPv(param_1[0x14]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a94f704; end: 10a94f77b;  */

undefined1 FUN_10a94f704(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a94f77c(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a94f77c; end: 10a94f843;  */

undefined1 * FUN_10a94f77c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1[0x20] == '\x01') {
    if ((char)param_1[0x1f] < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
    param_1[0x20] = 0;
  }
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[0x20] = 1;
  return param_1;
}



/* Entry: 10a94f844; end: 10a94f98b;  */

/* WARNING: Removing unreachable block (ram,0x00010a94f9cc) */

long * FUN_10a94f844(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar11 = param_1[1] - *param_1;
  uVar1 = (lVar11 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar10 = (long)uVar7 >> 4;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar10 = 0x7ffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar10 >> 0x3b == 0) {
      lVar5 = uVar10 << 5;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar11);
      uVar12 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar12;
      *param_2 = 0;
      param_2[1] = 0;
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      param_2[2] = 0;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puStack_78 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)((long)puVar2 + ((long)puStack_78 - (long)puVar4));
      puVar8 = puStack_78;
      puVar9 = puVar3;
      if ((long)puStack_78 - (long)puVar4 != 0) {
        do {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar9[2] = puVar8[2];
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar9[3] = puVar8[3];
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar8 != puVar4);
        do {
          if (*(char *)((long)puStack_78 + 0x17) < '\0') {
            __ZdlPv(*puStack_78);
          }
          puStack_78 = puStack_78 + 4;
        } while (puStack_78 != puVar4);
        puStack_78 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar3;
      param_1[1] = (long)(puVar2 + 4);
      lStack_60 = param_1[2];
      param_1[2] = lVar5 + uVar10 * 0x20;
      puStack_70 = puStack_78;
      puStack_68 = puStack_78;
      FUN_10a94f9a0(&puStack_78);
      return puVar2 + 4;
    }
  }
  else {
    FUN_10a94f98c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar11 = plVar6[2];
  while (lVar11 != plVar6[1]) {
    lVar11 = lVar11 + -0x20;
    plVar6[2] = lVar11;
  }
  if (*plVar6 != 0) {
    __ZdlPv();
  }
  return plVar6;
}



/* Entry: 10a94f98c; end: 10a94f99f;  */

/* WARNING: Removing unreachable block (ram,0x00010a94f9cc) */

long * FUN_10a94f98c(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x20;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a94f9a0; end: 10a94fa2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a94f9cc) */

long * FUN_10a94f9a0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a94fa30; end: 10a94fa43;  */

undefined1  [16] FUN_10a94fa30(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  if ((char)puVar2[0x87] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x70));
  }
  if (*(long *)(puVar2 + 0x58) != 0) {
    *(long *)(puVar2 + 0x60) = *(long *)(puVar2 + 0x58);
    __ZdlPv();
  }
  plVar4 = *(long **)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  func_0x000104c4f944(puVar2 + 0x28);
  if ((ulong)(byte)puVar2[0x20] < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[(byte)puVar2[0x20]])(puVar2 + 0x1c);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = puVar2;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a94fafc);
  (*pcVar1)();
}



/* Entry: 10a94fa44; end: 10a94fb53;  */

undefined1  [16] FUN_10a94fa44(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  plVar3 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  func_0x000104c4f944(param_1 + 0x28);
  if ((ulong)*(byte *)(param_1 + 0x20) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_1 + 0x20)])(param_1 + 0x1c);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a94fafc);
  (*pcVar1)();
}



/* Entry: 10a94fb54; end: 10a94fbcf;  */

undefined8 * FUN_10a94fb54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a94fbd0; end: 10a94fc4b;  */

undefined8 * FUN_10a94fbd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a94fc4c; end: 10a94fe07;  */

void FUN_10a94fc4c(long param_1)

{
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x00010a94fa00(param_1 + 0x28);
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a94fe08; end: 10a94fe67;  */

undefined8 * FUN_10a94fe08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar3 = param_1[1];
    uVar2 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = param_3[1];
    param_3[1] = uVar3;
    *param_3 = uVar2;
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 10a94fe68; end: 10a94fe7b;  */

undefined1  [16] FUN_10a94fe68(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a96100c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a94fe7c; end: 10a94ff57;  */

undefined1  [16] FUN_10a94fe7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a96100c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a94ff58; end: 10a95004f;  */

void FUN_10a94ff58(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  plVar6 = (long *)*puVar7;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar7 = *param_2;
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  *plVar5 = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a950050; end: 10a9500bf;  */

undefined8 * FUN_10a950050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2f9a0;
  param_1[3] = &PTR_FUN_110c2fa18;
  (**(code **)param_1[0xb])();
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9500c0; end: 10a950193;  */

long * FUN_10a9500c0(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a950194; end: 10a950277;  */

void FUN_10a950194(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar7 = plVar4[3];
  uVar6 = *(ulong *)(lVar7 + 0x1a8);
  lVar5 = *(long *)(lVar7 + 0x1a0);
  if (-1 < (char)*(byte *)(lVar7 + 0x1b7)) {
    uVar6 = (ulong)*(byte *)(lVar7 + 0x1b7);
    lVar5 = lVar7 + 0x1a0;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,lVar5,uVar6);
  *param_1 = 6;
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
  lVar7 = plVar3[0x4c];
  lVar9 = lVar7 - lVar5;
  uVar12 = lVar9 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar7 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar11 - lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar7 = lVar2 + lVar9;
          _bzero(lVar7,uVar13 * 0x10);
          lVar10 = lVar7 + uVar12 * -0x10;
          _memcpy(lVar10,lVar5,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar7 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
    _bzero(lVar7,uVar13 * 0x10);
    plVar3[0x4c] = lVar7 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar7 != lVar5) {
      lVar7 = lVar7 + -0x10;
      func_0x00010988c204(lVar7);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a950278; end: 10a950373;  */

void FUN_10a950278(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a9402c4(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
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



/* Entry: 10a950374; end: 10a950443;  */

void FUN_10a950374(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a950374(plVar6,param_2);
  FUN_10a052e3c(param_4);
  uVar1 = *(undefined1 *)(plVar6[3] + 0x218);
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_c8 = lVar8;
          lStack_c0 = lVar8;
          lStack_b8 = lVar8;
          lStack_b0 = lVar14;
          func_0x00010988c1b8(&lStack_c8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a950444; end: 10a9504ff;  */

void FUN_10a950444(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)(param_2[3] + 0x218);
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



/* Entry: 10a950500; end: 10a9505cb;  */

void FUN_10a950500(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  func_0x00010a3326b8(plVar4[3] + 0x218,param_2);
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



/* Entry: 10a9505cc; end: 10a950687;  */

void FUN_10a9505cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)(param_2[3] + 0x219);
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



/* Entry: 10a950688; end: 10a950753;  */

void FUN_10a950688(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  func_0x00010a332748(plVar4[3] + 0x219,param_2);
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



/* Entry: 10a950754; end: 10a95080f;  */

void FUN_10a950754(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)(param_2[3] + 0x21a);
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



/* Entry: 10a950810; end: 10a9508db;  */

void FUN_10a950810(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  func_0x00010a332700(plVar4[3] + 0x21a,param_2);
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



/* Entry: 10a9508dc; end: 10a9509af;  */

void FUN_10a9508dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_44;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_44 = *(undefined4 *)(plVar2[3] + 0x21e);
  FUN_10a361178(param_1,param_2,&uStack_44);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a9509b0; end: 10a950a7b;  */

void FUN_10a9509b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a950a7c(param_5);
  func_0x00010a361364(param_2,param_4);
  *(int *)(plVar4[3] + 0x21e) = (int)*param_2;
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



/* Entry: 10a950a7c; end: 10a950a9f;  */

void FUN_10a950a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  float fVar15;
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
  FUN_10a950374(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)(plVar3[3] + 0x224);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
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



/* Entry: 10a950aa0; end: 10a950b5f;  */

void FUN_10a950aa0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2[3] + 0x224);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a950b60; end: 10a950c53;  */

void FUN_10a950b60(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a950c40);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  func_0x00010a332614(fVar2,param_2[3]);
  *param_1 = 0;
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



/* Entry: 10a950c54; end: 10a950d13;  */

void FUN_10a950c54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = param_2[3];
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(lVar6 + 0x244));
  *(undefined8 *)(param_1 + 2) = uVar14;
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
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
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
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a950d14; end: 10a950ddb;  */

void FUN_10a950d14(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a361bd0(param_5);
  func_0x00010a068bd8(param_2,param_4);
  FUN_10a33256c(plVar4[3],param_2);
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



/* Entry: 10a950ddc; end: 10a950eab;  */

void FUN_10a950ddc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)(plVar2[3] + 0x248);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a950eac; end: 10a950f73;  */

void FUN_10a950eac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a1fa9e8(param_5);
  FUN_10a05a42c(param_2,param_4);
  *(long *)(plVar4[3] + 0x248) = *param_2;
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



/* Entry: 10a950f74; end: 10a951037;  */

void FUN_10a950f74(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = *(long *)(param_2[3] + 600);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(lVar6 + 0x28));
  *(undefined8 *)(param_1 + 2) = uVar14;
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
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
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
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a951038; end: 10a95114f;  */

void FUN_10a951038(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  undefined8 uVar14;
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a3622a0(param_5);
  func_0x00010a068bd8(param_2,param_4);
  lVar6 = *(long *)(plVar4[3] + 600);
  if (0x10 < (uint)param_2) {
    FUN_10a0edfc4(&stack0xffffffffffffffb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a95113c);
    (*pcVar1)();
  }
  lVar10 = ((ulong)param_2 & 0xffffffff) * 0x30;
  uVar14 = *(undefined8 *)(&UNK_10e4f4698 + lVar10);
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(&UNK_10e4f46a0 + lVar10);
  *(undefined8 *)(lVar6 + 0x28) = uVar14;
  uVar14 = *(undefined8 *)(&UNK_10e4f46a8 + lVar10);
  *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(&UNK_10e4f46b0 + lVar10);
  *(undefined8 *)(lVar6 + 0x38) = uVar14;
  uVar14 = *(undefined8 *)(&UNK_10e4f46b8 + lVar10);
  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(&UNK_10e4f46c0 + lVar10);
  *(undefined8 *)(lVar6 + 0x48) = uVar14;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar5 = lVar6 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a951150; end: 10a95120f;  */

void FUN_10a951150(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar14 = NEON_ucvtf((ulong)*(uint *)(param_2[3] + 0x250));
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a951210; end: 10a9512d7;  */

void FUN_10a951210(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a9503dc(param_2,param_3);
  FUN_10a142e2c(param_5);
  func_0x00010a137904(param_2,param_4);
  func_0x00010a332658(plVar4[3],param_2);
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



/* Entry: 10a9512d8; end: 10a9513db;  */

void FUN_10a9512d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a950374(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a332818(&stack0xffffffffffffffb0,plVar6[3]);
  FUN_10a3623c8(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
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



/* Entry: 10a9513dc; end: 10a9514d7;  */

undefined1  [16] FUN_10a9513dc(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c317a0;
  puVar1 = &UNK_10f683c80;
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
    ppuStack_40 = &PTR_DAT_110c317a0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a9514d8; end: 10a95152b;  */

ulong FUN_10a9514d8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a95152c,0);
  }
  return param_1;
}



/* Entry: 10a95152c; end: 10a95172f;  */

void FUN_10a95152c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
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
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    plVar12 = param_2;
    FUN_10a052c2c(param_2,plVar4);
    if ((plVar12 != (long *)0x0) && (___dynamic_cast(), plVar12 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a940ed0(&plStack_70,plVar12);
      plVar4 = plStack_68;
      lVar9 = (long)plStack_68 - (long)plStack_70 >> 4;
      (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar9);
      if (plVar4 != plStack_70) {
        lVar11 = 0;
        plVar4 = plStack_70 + 1;
        do {
          FUN_10a951730(&stack0xffffffffffffffa8,param_2,plVar4[-1],*plVar4);
          (**(code **)(*param_2 + 0x290))
                    (param_2,&stack0xffffffffffffffb8,lVar11,&stack0xffffffffffffffa8);
          if ((3 < (int)in_stack_ffffffffffffffa8) &&
             (in_stack_ffffffffffffffb0 != (undefined8 *)0x0)) {
            (**(code **)*in_stack_ffffffffffffffb0)();
          }
          plVar4 = plVar4 + 2;
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
      }
      *param_1 = 7;
      *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
      FUN_10a94e8f4(&plStack_70);
      plVar4 = plVar3 + 0x4b;
      lVar9 = plVar3[0x59];
      uVar6 = lVar9 - 1;
      plVar3[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar4[lVar9 + 2];
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
      lVar9 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar8 = lVar11 - lVar9;
      uVar13 = lVar8 >> 4;
      if (uVar13 < uVar6) {
        uVar14 = uVar6 - uVar13;
        plVar12 = (long *)plVar3[0x4d];
        if ((ulong)((long)plVar12 - lVar11 >> 4) < uVar14) {
          if (uVar6 >> 0x3c == 0) {
            uVar7 = (long)plVar12 - lVar9 >> 3;
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)((long)plVar12 - lVar9)) {
              uVar7 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar7 >> 0x3c == 0) {
              lVar2 = uVar7 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar8;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar9,lVar8);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar7 * 0x10;
              lStack_88 = lVar9;
              lStack_80 = lVar9;
              lStack_78 = lVar9;
              plStack_70 = plVar12;
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
      else if (uVar6 < uVar13) {
        lVar9 = lVar9 + uVar6 * 0x10;
        while (lVar11 != lVar9) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar6;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9516d0);
  (*pcVar1)();
}



/* Entry: 10a951730; end: 10a9518e3;  */

void FUN_10a951730(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c304a0;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a9518e4; end: 10a9518f3;  */

void FUN_10a9518e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c30b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9518f4; end: 10a951913;  */

void FUN_10a9518f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c30b98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a951914; end: 10a9519b3;  */

void FUN_10a951914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a95191c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9519b4; end: 10a951a3b;  */

void FUN_10a9519b4(undefined8 *param_1,long param_2)

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
  FUN_10a0c7c84(*(long *)(param_2 + 0x10) + 0x48,&uStack_30);
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



/* Entry: 10a951a3c; end: 10a951a57;  */

void FUN_10a951a3c(void)

{
  return;
}



/* Entry: 10a951a58; end: 10a951adf;  */

void FUN_10a951a58(undefined8 *param_1,long param_2)

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
  FUN_10a0c7c84(*(long *)(param_2 + 0x10) + 0x48,&uStack_30);
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



/* Entry: 10a951ae0; end: 10a951afb;  */

void FUN_10a951ae0(void)

{
  return;
}



/* Entry: 10a951afc; end: 10a951cef;  */

void FUN_10a951afc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  if ((*(byte *)(plVar4 + 0x3c) & 1) != 0) {
    FUN_10a065cdc(&lStack_50,param_2,param_4);
    plVar7 = (long *)plVar4[9];
    if (plVar7 == (long *)0x0) {
      FUN_10a140784(plVar4 + 5);
      plVar7 = (long *)plVar4[9];
    }
    plVar4[9] = *plVar7;
    plVar7[2] = 0;
    plVar7[1] = 0;
    plVar7[4] = 0;
    plVar7[3] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    *plVar7 = (long)&PTR_FUN_110c30c60;
    *(undefined1 *)(plVar7 + 1) = 1;
    *(undefined4 *)((long)plVar7 + 0xc) = 0x3f800000;
    plVar7[2] = lStack_50;
    plVar7[3] = (long)plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lStack_50 != 0) {
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
        do {
          lVar6 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x58))(param_2);
      (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar7,plVar5,&UNK_10989ba24,param_3);
      *param_1 = 7;
      func_0x00010988c170(plVar4 + 0x4b);
      return;
    }
    FUN_10a00946c(&UNK_10f6854c7);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a951cc4);
  (*pcVar3)();
}



/* Entry: 10a951cf0; end: 10a951d07;  */

undefined8 FUN_10a951cf0(void)

{
  return 0;
}



/* Entry: 10a951d08; end: 10a951d3f;  */

void FUN_10a951d08(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010a05248c(param_2 + 2);
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = param_2;
  }
  return;
}



/* Entry: 10a951d40; end: 10a951df7;  */

void FUN_10a951d40(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a951eb8(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *param_2;
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



/* Entry: 10a951df8; end: 10a951eb7;  */

void FUN_10a951df8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a951efc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)plVar4 = (char)param_2;
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



/* Entry: 10a951eb8; end: 10a951f3f;  */

long * FUN_10a951eb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c30c60) {
    return param_1 + 1;
  }
  puVar5 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  func_0x000109898688();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar5 == &PTR_FUN_110c30c60) {
    return puVar5 + 1;
  }
  plVar6 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a951eb8(plVar6,param_2);
  FUN_10a052e3c(param_4);
  fVar17 = *(float *)((long)plVar6 + 4);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar17;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return plVar6;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return plVar6;
    }
  }
  lVar8 = *plVar6;
  plVar13 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar1 + uVar16 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          plVar6 = &lStack_a8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(plVar6);
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
    plVar6 = plVar13;
    _bzero(plVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    plVar2 = (long *)(lVar8 + uVar9 * 0x10);
    while (plVar13 != plVar2) {
      plVar13 = plVar13 + -2;
      plVar6 = plVar13;
      func_0x00010988c204(plVar13);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return plVar6;
}



/* Entry: 10a951f40; end: 10a951ffb;  */

void FUN_10a951f40(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a951eb8(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a951ffc; end: 10a9520eb;  */

void FUN_10a951ffc(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
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
  func_0x00010a951efc(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9520d8);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 4) = fVar2;
  *param_1 = 0;
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



/* Entry: 10a9520ec; end: 10a9521a3;  */

void FUN_10a9520ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a951eb8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a05b924(param_1,param_2,plVar4 + 1);
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



/* Entry: 10a9521a4; end: 10a95241f;  */

/* WARNING: Removing unreachable block (ram,0x00010a95235c) */

void FUN_10a9521a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a952420(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (param_2[10] == 0) {
    plVar6 = *(long **)(*(long *)(param_2[4] + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x88))();
    plVar7 = (long *)plVar6[1];
    if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)
       ) {
      plVar6 = (long *)*plVar6;
      plVar8 = plVar7 + 1;
      do {
        lVar12 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      if (plVar6 != (long *)0x0) {
        plVar7 = *(long **)(param_2[8] + 0x268);
        if (plVar7 == (long *)0x0) {
          fVar19 = *(float *)((long)param_2 + 0x3c);
          fVar20 = 0.0;
          fVar21 = fVar19 * 0.0;
        }
        else {
          (**(code **)(*plVar7 + 0xb0))();
          plVar8 = *(long **)(param_2[8] + 0x268);
          fVar19 = *(float *)((long)param_2 + 0x3c);
          fVar21 = fVar19 * (float)((ulong)plVar7 & 0xffffffff);
          if (plVar8 == (long *)0x0) {
            fVar20 = 0.0;
          }
          else {
            (**(code **)(*plVar8 + 0xb8))();
            fVar20 = (float)((ulong)plVar8 & 0xffffffff);
            fVar19 = *(float *)((long)param_2 + 0x3c);
          }
        }
        if ((int)fVar21 < 1 || (int)(fVar19 * fVar20) < 1) {
          puVar9 = &UNK_10f683e12;
          goto LAB_10a9523ec;
        }
        func_0x000107c2b054(&lStack_78,&UNK_10f683c80);
        (**(code **)(*plVar6 + 0x10))
                  (&stack0xffffffffffffffa0,plVar6,&stack0xffffffffffffffa8,&lStack_78);
        plVar6 = (long *)param_2[10];
        param_2[10] = in_stack_ffffffffffffffa0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        if ((long)plStack_68 < 0) {
          __ZdlPv(lStack_78);
        }
        FUN_10a5ae998(param_2[5],&PTR_DAT_110bf8080,param_2[4],param_2 + 3);
        *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(*(long *)(param_2[4] + 0x850) + 0x30);
        *param_1 = 0;
        plVar6 = plVar5 + 0x4b;
        lVar12 = plVar5[0x59];
        uVar10 = lVar12 - 1;
        plVar5[0x59] = uVar10;
        if (uVar10 < 8) {
          uVar10 = plVar6[lVar12 + 2];
          if (plVar5[0x5a] == uVar10) {
            return;
          }
        }
        else {
          uVar10 = *(ulong *)(plVar5[0x57] + -8);
          plVar5[0x57] = plVar5[0x57] + -8;
          if (plVar5[0x5a] == uVar10) {
            return;
          }
        }
        lVar12 = *plVar6;
        lVar15 = plVar5[0x4c];
        lVar13 = lVar15 - lVar12;
        uVar17 = lVar13 >> 4;
        if (uVar17 < uVar10) {
          uVar18 = uVar10 - uVar17;
          lVar16 = plVar5[0x4d];
          if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
            if (uVar10 >> 0x3c == 0) {
              uVar11 = lVar16 - lVar12 >> 3;
              if (uVar11 <= uVar10) {
                uVar11 = uVar10;
              }
              if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
                uVar11 = 0xfffffffffffffff;
              }
              plStack_68 = plVar6;
              if (uVar11 >> 0x3c == 0) {
                lVar4 = uVar11 << 4;
                __Znwm();
                lVar15 = lVar4 + lVar13;
                _bzero(lVar15,uVar18 * 0x10);
                lVar14 = lVar15 + uVar17 * -0x10;
                _memcpy(lVar14,lVar12,lVar13);
                *plVar6 = lVar14;
                plVar5[0x4c] = lVar15 + uVar18 * 0x10;
                plVar5[0x4d] = lVar4 + uVar11 * 0x10;
                lStack_88 = lVar12;
                lStack_80 = lVar12;
                lStack_78 = lVar12;
                lStack_70 = lVar16;
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
          _bzero(lVar15,uVar18 * 0x10);
          plVar5[0x4c] = lVar15 + uVar18 * 0x10;
        }
        else if (uVar10 < uVar17) {
          lVar12 = lVar12 + uVar10 * 0x10;
          while (lVar15 != lVar12) {
            lVar15 = lVar15 + -0x10;
            func_0x00010988c204(lVar15);
          }
          plVar5[0x4c] = lVar12;
        }
code_r0x00010988c138:
        plVar5[0x5a] = uVar10;
        return;
      }
    }
    puVar9 = &UNK_10f683ddd;
  }
  else {
    puVar9 = &UNK_10f683dba;
  }
LAB_10a9523ec:
  FUN_10a00946c(puVar9);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9523f4);
  (*pcVar3)();
}



/* Entry: 10a952420; end: 10a952487;  */

void FUN_10a952420(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar7 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a952420(plVar7,param_2);
  FUN_10a052e3c(param_4);
  plVar9 = (long *)plVar7[10];
  plVar7[10] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if ((char)plVar7[0xc] == '\x01') {
    plVar9 = (long *)plVar7[0xb];
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    *(undefined1 *)(plVar7 + 0xc) = 0;
  }
  FUN_10a5ae930(plVar7[5]);
  *extraout_x8 = 0;
  plVar7 = plVar8 + 0x4b;
  lVar10 = plVar8[0x59];
  uVar12 = lVar10 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar7[lVar10 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar10 >> 3;
        if (uVar11 <= uVar12) {
          uVar11 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar12 < uVar17) {
    lVar10 = lVar10 + uVar12 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10a952488; end: 10a9525ab;  */

void FUN_10a952488(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a952420(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)param_2[10];
  param_2[10] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if ((char)param_2[0xc] == '\x01') {
    plVar7 = (long *)param_2[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  FUN_10a5ae930(param_2[5]);
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
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
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}


