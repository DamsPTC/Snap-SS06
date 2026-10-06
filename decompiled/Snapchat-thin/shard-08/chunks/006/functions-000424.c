/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063bc258; end: 1063bc397; -[SCAdWebviewPerformanceMetricsTracker _onNextAdWebviewLifecycleEvent:] */

void FUN_1063bc258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c072320();
  if ((int)uVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2415a0(param_3);
    uVar2 = uVar1;
    func_0x00010bef3380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1063bc398; end: 1063bc3cb;  */

void FUN_1063bc398(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063bc3cc; end: 1063bc4c3; -[SCAdWebviewPerformanceMetricsTracker _onNextAdCreationLifecyleEvent:] */

void FUN_1063bc3cc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  double dStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  dStack_50 = param_1 * 1000.0;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1063bc4c4; end: 1063bc4fb;  */

void FUN_1063bc4c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdd5ae0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063bc4fc; end: 1063bc6b3; -[SCAdWebviewPerformanceMetricsTracker _buildAdCreationLifecyleTimestamps:currentTs:] */

void FUN_1063bc4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1063bc6b4;
  puStack_38 = &UNK_11087ebf0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1063bc704;
  puStack_68 = &UNK_11087ebf0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1063bc754;
  puStack_98 = &UNK_11087ebf0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1063bc7a4;
  puStack_c8 = &UNK_11087ebf0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1063bc7f4;
  puStack_f8 = &UNK_11087ebf0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1063bc844;
  puStack_128 = &UNK_11087ebf0;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1063bc894;
  puStack_158 = &UNK_11087ebf0;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1063bc910;
  puStack_188 = &UNK_11087ebf0;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_1063bc9dc;
  puStack_1b8 = &UNK_110848c48;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x1063bca2c;
  puStack_1e8 = &UNK_11087ebf0;
  puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_228 = 0xc2000000;
  uStack_220 = 0x1063bca7c;
  puStack_218 = &UNK_110848c48;
  uStack_210 = param_2;
  uStack_208 = param_1;
  uStack_1e0 = param_2;
  uStack_1d8 = param_1;
  uStack_1b0 = param_2;
  uStack_1a8 = param_1;
  uStack_180 = param_2;
  uStack_178 = param_1;
  uStack_150 = param_2;
  uStack_148 = param_1;
  uStack_120 = param_2;
  uStack_118 = param_1;
  uStack_f0 = param_2;
  uStack_e8 = param_1;
  uStack_c0 = param_2;
  uStack_b8 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0c0260(param_4,param_3,&puStack_50,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110,
                      &puStack_140,&puStack_170,&puStack_1a0,&puStack_1d0,&puStack_200,&puStack_230)
  ;
  return;
}



/* Entry: 1063bc6b4; end: 1063bc893;  */

void FUN_1063bc6b4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x48) = 1;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063bc894; end: 1063bc90f;  */

void FUN_1063bc894(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0df720(uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063bc910; end: 1063bc9db;  */

void FUN_1063bc910(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x4f) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x4f) = 1;
    lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0x58);
      func_0x00010bf885a0(lVar1);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x10) = param_1;
        _objc_retain(lVar2);
      }
      _objc_release(lVar2);
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0x58);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_2 + 0x20);
  }
  func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bc9dc; end: 1063bcacb;  */

void FUN_1063bc9dc(long param_1)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  dVar2 = *(double *)(lVar1 + 0x40);
  if (dVar2 == 0.0) {
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x20);
    dVar2 = *(double *)(lVar1 + 0x40);
  }
  lVar1 = *(long *)(lVar1 + 0x58);
  if (lVar1 != 0) {
    *(double *)(lVar1 + 0x48) = dVar2;
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063bcacc; end: 1063bcb43; -[SCAdWebviewPerformanceMetricsTracker _resetIterationState] */

void FUN_1063bcacc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ca460;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (0.0 < *(double *)(param_1 + 0x40)) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      *(double *)(lVar3 + 0x48) = *(double *)(param_1 + 0x40);
      _objc_retain(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1063bcb44; end: 1063bd05b; -[SCAdWebviewPerformanceMetricsTracker _onMetricsComplete:] */

void FUN_1063bcb44(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  _objc_retain(param_4);
  func_0x00010c274aa0(param_4);
  dVar11 = param_1;
  func_0x00010bf0d160(param_4);
  bVar1 = true;
  if ((dVar11 != 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  dVar11 = dVar11 - param_1;
  if (bVar1) {
    dVar11 = -1.0;
  }
  dVar19 = dVar11;
  func_0x00010bf0d540(param_4);
  dVar12 = dVar19;
  func_0x00010c0d6be0(param_4);
  bVar1 = true;
  if ((dVar12 != 0.0) && (bVar1 = false, !NAN(dVar19))) {
    bVar1 = dVar19 == 0.0;
  }
  dVar12 = dVar12 - dVar19;
  if (bVar1) {
    dVar12 = -1.0;
  }
  dVar19 = dVar12;
  func_0x00010c0d6be0(param_4);
  dVar13 = dVar19;
  func_0x00010bfe49a0(param_4);
  bVar1 = true;
  if ((dVar13 != 0.0) && (bVar1 = false, !NAN(dVar19))) {
    bVar1 = dVar19 == 0.0;
  }
  dVar13 = dVar13 - dVar19;
  if (bVar1) {
    dVar13 = -1.0;
  }
  dVar19 = dVar13;
  func_0x00010bfe49a0(param_4);
  dVar14 = dVar19;
  func_0x00010bf87c20(param_4);
  bVar1 = true;
  if ((dVar14 != 0.0) && (bVar1 = false, !NAN(dVar19))) {
    bVar1 = dVar19 == 0.0;
  }
  dVar14 = dVar14 - dVar19;
  if (bVar1) {
    dVar14 = -1.0;
  }
  dVar19 = dVar14;
  func_0x00010bfe49a0(param_4);
  dVar15 = dVar19;
  func_0x00010c0f2ac0(param_4);
  bVar1 = true;
  if ((dVar15 != 0.0) && (bVar1 = false, !NAN(dVar19))) {
    bVar1 = dVar19 == 0.0;
  }
  dVar15 = dVar15 - dVar19;
  if (bVar1) {
    dVar15 = -1.0;
  }
  dVar19 = dVar15;
  func_0x00010bf87c20(param_4);
  dVar16 = dVar19;
  func_0x00010bfbbec0(param_4);
  bVar1 = true;
  if ((dVar16 != 0.0) && (bVar1 = false, !NAN(dVar19))) {
    bVar1 = dVar19 == 0.0;
  }
  dVar16 = dVar16 - dVar19;
  dVar19 = dVar16;
  if (bVar1) {
    dVar19 = -1.0;
  }
  func_0x00010bf0d540(param_4);
  dVar17 = dVar16;
  func_0x00010bfb1460(param_4);
  bVar1 = true;
  if ((dVar17 != 0.0) && (bVar1 = false, !NAN(dVar16))) {
    bVar1 = dVar16 == 0.0;
  }
  dVar17 = dVar17 - dVar16;
  dVar16 = dVar17;
  if (bVar1) {
    dVar16 = -1.0;
  }
  func_0x00010bf0d540(param_4);
  dVar18 = dVar17;
  func_0x00010c0f2ac0(param_4);
  bVar1 = true;
  if ((dVar18 != 0.0) && (bVar1 = false, !NAN(dVar17))) {
    bVar1 = dVar17 == 0.0;
  }
  dVar18 = dVar18 - dVar17;
  if (bVar1) {
    dVar18 = -1.0;
  }
  func_0x00010bf0d540(param_4);
  func_0x00010bfbbec0(param_4);
  func_0x00010bf0d540(param_4);
  func_0x00010c0d67c0(param_4);
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126ca470;
  _objc_alloc(PTR_PTR_1126ca470);
  FUN_1063bd774(dVar11,dVar12,dVar13,dVar14,dVar15,dVar19,dVar16,dVar18);
  lVar5 = *(long *)(param_2 + 0x58);
  FUN_1063beb9c();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = -1.0;
  dVar16 = -1.0;
  dVar12 = -1.0;
  dVar13 = -1.0;
  dVar14 = -1.0;
  dVar15 = -1.0;
  dVar17 = -1.0;
  dVar11 = -1.0;
  if (lVar5 != 0) {
    dVar12 = *(double *)(lVar5 + 0x48);
    bVar1 = dVar12 == 0.0;
    dVar11 = *(double *)(lVar5 + 8);
    bVar2 = dVar11 == 0.0;
    dVar19 = dVar11 - dVar12;
    if (bVar1 || bVar2) {
      dVar19 = -1.0;
    }
    dVar16 = *(double *)(lVar5 + 0x50) - dVar12;
    if (bVar1 || *(double *)(lVar5 + 0x50) == 0.0) {
      dVar16 = -1.0;
    }
    dVar17 = *(double *)(lVar5 + 0x18);
    dVar15 = *(double *)(lVar5 + 0x20);
    bVar3 = dVar15 == 0.0;
    dVar12 = dVar15 - dVar12;
    if (bVar1 || bVar3) {
      dVar12 = -1.0;
    }
    dVar13 = dVar17 - dVar11;
    if (bVar2 || dVar17 == 0.0) {
      dVar13 = -1.0;
    }
    dVar14 = dVar17 - dVar15;
    if (bVar3 || dVar17 == 0.0) {
      dVar14 = -1.0;
    }
    dVar15 = dVar15 - dVar11;
    if (bVar2 || bVar3) {
      dVar15 = -1.0;
    }
    dVar17 = *(double *)(lVar5 + 0x30) - dVar11;
    if (bVar2 || *(double *)(lVar5 + 0x30) == 0.0) {
      dVar17 = -1.0;
    }
    dVar11 = *(double *)(lVar5 + 0x40) - dVar11;
    if (bVar2 || *(double *)(lVar5 + 0x40) == 0.0) {
      dVar11 = -1.0;
    }
  }
  puVar6 = PTR_PTR_1126ca478;
  _objc_alloc(PTR_PTR_1126ca478);
  FUN_1063bdd14(dVar19,dVar16,dVar12,dVar13,dVar14,dVar15,dVar17,dVar11);
  puVar7 = PTR_PTR_1126ca468;
  _objc_alloc(PTR_PTR_1126ca468);
  FUN_1063bd53c();
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  puVar8 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf981e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar10 == (undefined *)0x0) {
    func_0x00010be93040(param_2);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1063bd05c; end: 1063bd063; -[SCAdWebviewPerformanceMetricsTracker adCreationLifecyleTimestampsBuilder] */

undefined8 FUN_1063bd05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1063bd064; end: 1063bd0db; -[SCAdWebviewPerformanceMetricsTracker .cxx_destruct] */

void FUN_1063bd064(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063bd0dc; end: 1063bd107; +[SCGrapheneAdWebviewPerformanceMetric view2Pageloaded] */

void FUN_1063bd0dc(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd108; end: 1063bd133; +[SCGrapheneAdWebviewPerformanceMetric click2Navistart] */

void FUN_1063bd108(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd134; end: 1063bd15f; +[SCGrapheneAdWebviewPerformanceMetric navistart2Htmlloaded] */

void FUN_1063bd134(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd160; end: 1063bd18b; +[SCGrapheneAdWebviewPerformanceMetric htmlloaded2Domcontentloaded] */

void FUN_1063bd160(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd18c; end: 1063bd1b7; +[SCGrapheneAdWebviewPerformanceMetric htmlloaded2Paint] */

void FUN_1063bd18c(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd1b8; end: 1063bd1e3; +[SCGrapheneAdWebviewPerformanceMetric domcontentloaded2Fullyloaded] */

void FUN_1063bd1b8(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd1e4; end: 1063bd20f; +[SCGrapheneAdWebviewPerformanceMetric click2Fga] */

void FUN_1063bd1e4(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd210; end: 1063bd23b; +[SCGrapheneAdWebviewPerformanceMetric click2Paint] */

void FUN_1063bd210(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd23c; end: 1063bd267; +[SCGrapheneAdWebviewPerformanceMetric click2Fullyloaded] */

void FUN_1063bd23c(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd268; end: 1063bd293; +[SCGrapheneAdWebviewPerformanceMetric click2Navifinish] */

void FUN_1063bd268(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd294; end: 1063bd2bf; +[SCGrapheneAdWebviewPerformanceMetric start2Adpodcreated] */

void FUN_1063bd294(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd2c0; end: 1063bd2eb; +[SCGrapheneAdWebviewPerformanceMetric start2Adpodinserted] */

void FUN_1063bd2c0(void)

{
  _objc_alloc(PTR_PTR_1126ca458);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bd2ec; end: 1063bd38b; -[SCGrapheneAdWebviewPerformanceMetric description] */

void FUN_1063bd2ec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4d298;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e4d298,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f1180;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1063bd38c; end: 1063bd53b; -[SCGrapheneRegistry adWebviewPerformanceGraphene] */

void FUN_1063bd38c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1063bd414;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3868 != -1) {
    func_0x00010002a2fc(0x1136c3868,&puStack_48);
  }
  uVar1 = uRam00000001136c3860;
  _objc_retain(uRam00000001136c3860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063bd53c; end: 1063bd5eb;  */

undefined1 * FUN_1063bd53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126f1188;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1063bd5ec; end: 1063bd60f; -[SCAdWebviewPerformanceMetrics copyWithZone:] */

undefined8 FUN_1063bd5ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063bd610; end: 1063bd683; -[SCAdWebviewPerformanceMetrics hash] */

undefined8 * FUN_1063bd610(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1063bd704:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1063bd710;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1063bd710;
        }
        goto LAB_1063bd704;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1063bd710:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1063bd684; end: 1063bd72b; -[SCAdWebviewPerformanceMetrics isEqual:] */

long FUN_1063bd684(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1063bd704:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1063bd710;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1063bd710;
        }
        goto LAB_1063bd704;
      }
    }
    lVar3 = 0;
  }
LAB_1063bd710:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1063bd72c; end: 1063bd743;  */

undefined8 FUN_1063bd72c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1063bd744; end: 1063bd773; -[SCAdWebviewPerformanceMetrics .cxx_destruct] */

void FUN_1063bd744(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063bd774; end: 1063bd807;  */

void FUN_1063bd774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long *plVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long lStack_60;
  undefined *puStack_58;
  
  if (param_9 != 0) {
    plVar1 = &lStack_60;
    puStack_58 = PTR_PTR_1126f1190;
    lStack_60 = param_9;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_1;
      *(undefined8 *)((long)plVar1 + 0x10) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      *(undefined8 *)((long)plVar1 + 0x48) = in_stack_00000000;
      *(undefined8 *)((long)plVar1 + 0x50) = in_stack_00000008;
    }
  }
  return;
}



/* Entry: 1063bd808; end: 1063bd82b; -[SCAdWebviewLifecyclePerformanceMetrics copyWithZone:] */

undefined8 FUN_1063bd808(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063bd82c; end: 1063bd9bf; -[SCAdWebviewLifecyclePerformanceMetrics hash] */

ulong * FUN_1063bd82c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
            dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar8 = ABS((double)puVar3[5] - (double)param_3[5]);
                dVar7 = ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16;
                bVar2 = true;
                if ((2.2250738585072014e-308 <= dVar8) &&
                   (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
                  bVar2 = dVar8 < dVar7;
                }
                if (bVar2) {
                  dVar7 = ABS((double)puVar3[6] - (double)param_3[6]);
                  if ((dVar7 < 2.2250738585072014e-308) ||
                     (dVar7 < ABS((double)puVar3[6] + (double)param_3[6]) * 2.220446049250313e-16))
                  {
                    dVar7 = ABS((double)puVar3[7] - (double)param_3[7]);
                    if ((dVar7 < 2.2250738585072014e-308) ||
                       (dVar7 < ABS((double)puVar3[7] + (double)param_3[7]) * 2.220446049250313e-16)
                       ) {
                      dVar7 = ABS((double)puVar3[8] - (double)param_3[8]);
                      if ((dVar7 < 2.2250738585072014e-308) ||
                         (dVar7 < ABS((double)puVar3[8] + (double)param_3[8]) *
                                  2.220446049250313e-16)) {
                        dVar7 = ABS((double)puVar3[9] - (double)param_3[9]);
                        if ((dVar7 < 2.2250738585072014e-308) ||
                           (dVar7 < ABS((double)puVar3[9] + (double)param_3[9]) *
                                    2.220446049250313e-16)) {
                          dVar7 = ABS((double)puVar3[10] + (double)param_3[10]) *
                                  2.220446049250313e-16;
                          if (dVar7 <= 2.2250738585072014e-308) {
                            dVar7 = 2.2250738585072014e-308;
                          }
                          puVar6 = (ulong *)(ulong)(ABS((double)puVar3[10] - (double)param_3[10]) <
                                                   dVar7);
                          goto LAB_1063bdbf8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_1063bdbf8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1063bd9c0; end: 1063bdc4b; -[SCAdWebviewLifecyclePerformanceMetrics isEqual:] */

bool FUN_1063bd9c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
                dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                bVar1 = true;
                if ((2.2250738585072014e-308 <= dVar5) &&
                   (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
                  bVar1 = dVar5 < dVar4;
                }
                if (bVar1) {
                  dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                        if ((dVar4 < 2.2250738585072014e-308) ||
                           (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                                    2.220446049250313e-16)) {
                          dVar4 = ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                                  2.220446049250313e-16;
                          if (dVar4 <= 2.2250738585072014e-308) {
                            dVar4 = 2.2250738585072014e-308;
                          }
                          bVar1 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50)) <
                                  dVar4;
                          goto LAB_1063bdbf8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_1063bdbf8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1063bdc4c; end: 1063bdd13;  */

undefined8 FUN_1063bdc4c(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



/* Entry: 1063bdd14; end: 1063bddcf;  */

void FUN_1063bdd14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long *plVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long lStack_60;
  undefined *puStack_58;
  
  if (param_9 != 0) {
    plVar1 = &lStack_60;
    puStack_58 = PTR_PTR_1126f1198;
    lStack_60 = param_9;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_1;
      *(undefined8 *)((long)plVar1 + 0x10) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      *(undefined8 *)((long)plVar1 + 0x48) = in_stack_00000000;
      *(undefined8 *)((long)plVar1 + 0x50) = in_stack_00000008;
      *(undefined8 *)((long)plVar1 + 0x58) = in_stack_00000010;
      *(undefined8 *)((long)plVar1 + 0x60) = in_stack_00000018;
      *(undefined8 *)((long)plVar1 + 0x68) = in_stack_00000020;
      *(undefined8 *)((long)plVar1 + 0x70) = in_stack_00000028;
      *(undefined8 *)((long)plVar1 + 0x78) = in_stack_00000030;
      *(undefined8 *)((long)plVar1 + 0x80) = in_stack_00000038;
      *(undefined8 *)((long)plVar1 + 0x88) = in_stack_00000040;
      *(undefined8 *)((long)plVar1 + 0x90) = in_stack_00000048;
      *(undefined8 *)((long)plVar1 + 0x98) = in_stack_00000050;
      *(undefined8 *)((long)plVar1 + 0xa0) = in_stack_00000058;
    }
  }
  return;
}



/* Entry: 1063bddd0; end: 1063bddf3; -[SCAdCreationLifecylePerformanceMetrics copyWithZone:] */

undefined8 FUN_1063bddd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063bddf4; end: 1063be0c7; -[SCAdCreationLifecylePerformanceMetrics hash] */

ulong * FUN_1063bddf4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_b8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_b0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_98 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_90 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_88 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_80 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_78 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_b8;
  func_0x000100505190(puVar3,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
            dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar8 = ABS((double)puVar3[5] - (double)param_3[5]);
                dVar7 = ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16;
                bVar2 = true;
                if ((2.2250738585072014e-308 <= dVar8) &&
                   (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
                  bVar2 = dVar8 < dVar7;
                }
                if (bVar2) {
                  dVar7 = ABS((double)puVar3[6] - (double)param_3[6]);
                  if ((dVar7 < 2.2250738585072014e-308) ||
                     (dVar7 < ABS((double)puVar3[6] + (double)param_3[6]) * 2.220446049250313e-16))
                  {
                    dVar7 = ABS((double)puVar3[7] - (double)param_3[7]);
                    if ((dVar7 < 2.2250738585072014e-308) ||
                       (dVar7 < ABS((double)puVar3[7] + (double)param_3[7]) * 2.220446049250313e-16)
                       ) {
                      dVar7 = ABS((double)puVar3[8] - (double)param_3[8]);
                      if ((dVar7 < 2.2250738585072014e-308) ||
                         (dVar7 < ABS((double)puVar3[8] + (double)param_3[8]) *
                                  2.220446049250313e-16)) {
                        dVar7 = ABS((double)puVar3[9] - (double)param_3[9]);
                        if ((dVar7 < 2.2250738585072014e-308) ||
                           (dVar7 < ABS((double)puVar3[9] + (double)param_3[9]) *
                                    2.220446049250313e-16)) {
                          dVar7 = ABS((double)puVar3[10] - (double)param_3[10]);
                          if ((dVar7 < 2.2250738585072014e-308) ||
                             (dVar7 < ABS((double)puVar3[10] + (double)param_3[10]) *
                                      2.220446049250313e-16)) {
                            dVar7 = ABS((double)puVar3[0xb] - (double)param_3[0xb]);
                            if ((dVar7 < 2.2250738585072014e-308) ||
                               (dVar7 < ABS((double)puVar3[0xb] + (double)param_3[0xb]) *
                                        2.220446049250313e-16)) {
                              dVar7 = ABS((double)puVar3[0xc] - (double)param_3[0xc]);
                              if ((dVar7 < 2.2250738585072014e-308) ||
                                 (dVar7 < ABS((double)puVar3[0xc] + (double)param_3[0xc]) *
                                          2.220446049250313e-16)) {
                                dVar7 = ABS((double)puVar3[0xd] - (double)param_3[0xd]);
                                if ((dVar7 < 2.2250738585072014e-308) ||
                                   (dVar7 < ABS((double)puVar3[0xd] + (double)param_3[0xd]) *
                                            2.220446049250313e-16)) {
                                  dVar7 = ABS((double)puVar3[0xe] - (double)param_3[0xe]);
                                  if ((dVar7 < 2.2250738585072014e-308) ||
                                     (dVar7 < ABS((double)puVar3[0xe] + (double)param_3[0xe]) *
                                              2.220446049250313e-16)) {
                                    dVar7 = ABS((double)puVar3[0xf] - (double)param_3[0xf]);
                                    if ((dVar7 < 2.2250738585072014e-308) ||
                                       (dVar7 < ABS((double)puVar3[0xf] + (double)param_3[0xf]) *
                                                2.220446049250313e-16)) {
                                      dVar7 = ABS((double)puVar3[0x10] - (double)param_3[0x10]);
                                      if ((dVar7 < 2.2250738585072014e-308) ||
                                         (dVar7 < ABS((double)puVar3[0x10] + (double)param_3[0x10])
                                                  * 2.220446049250313e-16)) {
                                        dVar7 = ABS((double)puVar3[0x11] - (double)param_3[0x11]);
                                        if ((dVar7 < 2.2250738585072014e-308) ||
                                           (dVar7 < ABS((double)puVar3[0x11] + (double)param_3[0x11]
                                                       ) * 2.220446049250313e-16)) {
                                          dVar7 = ABS((double)puVar3[0x12] - (double)param_3[0x12]);
                                          if ((dVar7 < 2.2250738585072014e-308) ||
                                             (dVar7 < ABS((double)puVar3[0x12] +
                                                          (double)param_3[0x12]) *
                                                      2.220446049250313e-16)) {
                                            dVar7 = ABS((double)puVar3[0x13] - (double)param_3[0x13]
                                                       );
                                            if ((dVar7 < 2.2250738585072014e-308) ||
                                               (dVar7 < ABS((double)puVar3[0x13] +
                                                            (double)param_3[0x13]) *
                                                        2.220446049250313e-16)) {
                                              dVar7 = ABS((double)puVar3[0x14] +
                                                          (double)param_3[0x14]) *
                                                      2.220446049250313e-16;
                                              if (dVar7 <= 2.2250738585072014e-308) {
                                                dVar7 = 2.2250738585072014e-308;
                                              }
                                              puVar6 = (ulong *)(ulong)(ABS((double)puVar3[0x14] -
                                                                            (double)param_3[0x14]) <
                                                                       dVar7);
                                              goto LAB_1063be530;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_1063be530:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1063be0c8; end: 1063be583; -[SCAdCreationLifecylePerformanceMetrics isEqual:] */

bool FUN_1063be0c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
                dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                bVar1 = true;
                if ((2.2250738585072014e-308 <= dVar5) &&
                   (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
                  bVar1 = dVar5 < dVar4;
                }
                if (bVar1) {
                  dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                        if ((dVar4 < 2.2250738585072014e-308) ||
                           (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                                    2.220446049250313e-16)) {
                          dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
                          if ((dVar4 < 2.2250738585072014e-308) ||
                             (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50))
                                      * 2.220446049250313e-16)) {
                            dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
                            if ((dVar4 < 2.2250738585072014e-308) ||
                               (dVar4 < ABS(*(double *)(param_1 + 0x58) +
                                            *(double *)(param_3 + 0x58)) * 2.220446049250313e-16)) {
                              dVar4 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60))
                              ;
                              if ((dVar4 < 2.2250738585072014e-308) ||
                                 (dVar4 < ABS(*(double *)(param_1 + 0x60) +
                                              *(double *)(param_3 + 0x60)) * 2.220446049250313e-16))
                              {
                                dVar4 = ABS(*(double *)(param_1 + 0x68) -
                                            *(double *)(param_3 + 0x68));
                                if ((dVar4 < 2.2250738585072014e-308) ||
                                   (dVar4 < ABS(*(double *)(param_1 + 0x68) +
                                                *(double *)(param_3 + 0x68)) * 2.220446049250313e-16
                                   )) {
                                  dVar4 = ABS(*(double *)(param_1 + 0x70) -
                                              *(double *)(param_3 + 0x70));
                                  if ((dVar4 < 2.2250738585072014e-308) ||
                                     (dVar4 < ABS(*(double *)(param_1 + 0x70) +
                                                  *(double *)(param_3 + 0x70)) *
                                              2.220446049250313e-16)) {
                                    dVar4 = ABS(*(double *)(param_1 + 0x78) -
                                                *(double *)(param_3 + 0x78));
                                    if ((dVar4 < 2.2250738585072014e-308) ||
                                       (dVar4 < ABS(*(double *)(param_1 + 0x78) +
                                                    *(double *)(param_3 + 0x78)) *
                                                2.220446049250313e-16)) {
                                      dVar4 = ABS(*(double *)(param_1 + 0x80) -
                                                  *(double *)(param_3 + 0x80));
                                      if ((dVar4 < 2.2250738585072014e-308) ||
                                         (dVar4 < ABS(*(double *)(param_1 + 0x80) +
                                                      *(double *)(param_3 + 0x80)) *
                                                  2.220446049250313e-16)) {
                                        dVar4 = ABS(*(double *)(param_1 + 0x88) -
                                                    *(double *)(param_3 + 0x88));
                                        if ((dVar4 < 2.2250738585072014e-308) ||
                                           (dVar4 < ABS(*(double *)(param_1 + 0x88) +
                                                        *(double *)(param_3 + 0x88)) *
                                                    2.220446049250313e-16)) {
                                          dVar4 = ABS(*(double *)(param_1 + 0x90) -
                                                      *(double *)(param_3 + 0x90));
                                          if ((dVar4 < 2.2250738585072014e-308) ||
                                             (dVar4 < ABS(*(double *)(param_1 + 0x90) +
                                                          *(double *)(param_3 + 0x90)) *
                                                      2.220446049250313e-16)) {
                                            dVar4 = ABS(*(double *)(param_1 + 0x98) -
                                                        *(double *)(param_3 + 0x98));
                                            if ((dVar4 < 2.2250738585072014e-308) ||
                                               (dVar4 < ABS(*(double *)(param_1 + 0x98) +
                                                            *(double *)(param_3 + 0x98)) *
                                                        2.220446049250313e-16)) {
                                              dVar4 = ABS(*(double *)(param_1 + 0xa0) +
                                                          *(double *)(param_3 + 0xa0)) *
                                                      2.220446049250313e-16;
                                              if (dVar4 <= 2.2250738585072014e-308) {
                                                dVar4 = 2.2250738585072014e-308;
                                              }
                                              bVar1 = ABS(*(double *)(param_1 + 0xa0) -
                                                          *(double *)(param_3 + 0xa0)) < dVar4;
                                              goto LAB_1063be530;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_1063be530:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1063be584; end: 1063be597;  */

undefined8 FUN_1063be584(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



/* Entry: 1063be598; end: 1063be633;  */

void FUN_1063be598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long *plVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack_60;
  undefined *puStack_58;
  
  if (param_9 != 0) {
    plVar1 = &lStack_60;
    puStack_58 = PTR_PTR_1126f11a0;
    lStack_60 = param_9;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_1;
      *(undefined8 *)((long)plVar1 + 0x10) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      *(undefined8 *)((long)plVar1 + 0x48) = in_stack_00000000;
      *(undefined8 *)((long)plVar1 + 0x50) = in_stack_00000008;
      *(undefined8 *)((long)plVar1 + 0x58) = in_stack_00000010;
    }
  }
  return;
}



/* Entry: 1063be634; end: 1063be657; -[SCAdCreationLifecyleTimestamps copyWithZone:] */

undefined8 FUN_1063be634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063be658; end: 1063be80f; -[SCAdCreationLifecyleTimestamps hash] */

ulong * FUN_1063be658(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_70;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_70,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
          dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
            dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar8 = ABS(*(double *)((long)puVar3 + 0x20) - *(double *)(param_3 + 0x20));
              dVar7 = ABS(*(double *)((long)puVar3 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar8 = ABS(*(double *)((long)puVar3 + 0x28) - *(double *)(param_3 + 0x28));
                dVar7 = ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                bVar2 = true;
                if ((2.2250738585072014e-308 <= dVar8) &&
                   (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
                  bVar2 = dVar8 < dVar7;
                }
                if (bVar2) {
                  dVar7 = ABS(*(double *)((long)puVar3 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar7 < 2.2250738585072014e-308) ||
                     (dVar7 < ABS(*(double *)((long)puVar3 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar7 = ABS(*(double *)((long)puVar3 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar7 < 2.2250738585072014e-308) ||
                       (dVar7 < ABS(*(double *)((long)puVar3 + 0x38) + *(double *)(param_3 + 0x38))
                                * 2.220446049250313e-16)) {
                      dVar7 = ABS(*(double *)((long)puVar3 + 0x40) - *(double *)(param_3 + 0x40));
                      if ((dVar7 < 2.2250738585072014e-308) ||
                         (dVar7 < ABS(*(double *)((long)puVar3 + 0x40) + *(double *)(param_3 + 0x40)
                                     ) * 2.220446049250313e-16)) {
                        dVar7 = ABS(*(double *)((long)puVar3 + 0x48) - *(double *)(param_3 + 0x48));
                        if ((dVar7 < 2.2250738585072014e-308) ||
                           (dVar7 < ABS(*(double *)((long)puVar3 + 0x48) +
                                        *(double *)(param_3 + 0x48)) * 2.220446049250313e-16)) {
                          dVar7 = ABS(*(double *)((long)puVar3 + 0x50) - *(double *)(param_3 + 0x50)
                                     );
                          if ((dVar7 < 2.2250738585072014e-308) ||
                             (dVar7 < ABS(*(double *)((long)puVar3 + 0x50) +
                                          *(double *)(param_3 + 0x50)) * 2.220446049250313e-16)) {
                            dVar7 = ABS(*(double *)((long)puVar3 + 0x58) +
                                        *(double *)(param_3 + 0x58)) * 2.220446049250313e-16;
                            if (dVar7 <= 2.2250738585072014e-308) {
                              dVar7 = 2.2250738585072014e-308;
                            }
                            puVar6 = (undefined1 *)
                                     (ulong)(ABS(*(double *)((long)puVar3 + 0x58) -
                                                 *(double *)(param_3 + 0x58)) < dVar7);
                            goto LAB_1063bea80;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_1063bea80:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 1063be810; end: 1063bead3; -[SCAdCreationLifecyleTimestamps isEqual:] */

bool FUN_1063be810(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
                dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                bVar1 = true;
                if ((2.2250738585072014e-308 <= dVar5) &&
                   (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
                  bVar1 = dVar5 < dVar4;
                }
                if (bVar1) {
                  dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                        if ((dVar4 < 2.2250738585072014e-308) ||
                           (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                                    2.220446049250313e-16)) {
                          dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
                          if ((dVar4 < 2.2250738585072014e-308) ||
                             (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50))
                                      * 2.220446049250313e-16)) {
                            dVar4 = ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                                    2.220446049250313e-16;
                            if (dVar4 <= 2.2250738585072014e-308) {
                              dVar4 = 2.2250738585072014e-308;
                            }
                            bVar1 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58)) <
                                    dVar4;
                            goto LAB_1063bea80;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_1063bea80:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1063bead4; end: 1063beb9b;  */

undefined8 FUN_1063bead4(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



/* Entry: 1063beb9c; end: 1063bee03;  */

void FUN_1063beb9c(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126ca480);
    FUN_1063be598(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063bee04; end: 1063bee37; -[SCAdWebviewPerformanceLogger initWithBrowserCache:webBrowsingConfigProvider:] */

void FUN_1063bee04(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f11a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1063bee38; end: 1063bee3b; -[SCAdWebviewPerformanceLogger beginWithPerformanceMetricsTracker:] */

void FUN_1063bee38(void)

{
  return;
}



/* Entry: 1063bee3c; end: 1063bf1e3; -[SCCompositeAdDataSource initWithDependencies:groupAdDataSource:adConfigProviderV2:] */

undefined1 *
FUN_1063bee3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f11b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_1063bf108;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar2 + 0x20);
  *(undefined **)((long)puVar2 + 0x20) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar2 + 0x28);
  *(undefined **)((long)puVar2 + 0x28) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar2 + 0x40);
  *(undefined **)((long)puVar2 + 0x40) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar2 + 0x48);
  *(undefined **)((long)puVar2 + 0x48) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar2 + 0x68);
  *(undefined **)((long)puVar2 + 0x68) = puVar3;
  _objc_release(uVar7);
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)((long)puVar2 + 0x50);
  *(undefined8 *)((long)puVar2 + 0x50) = param_4;
  _objc_release(uVar7);
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)((long)puVar2 + 0x60);
  *(long *)((long)puVar2 + 0x60) = param_3;
  _objc_release(uVar7);
  _objc_retain(param_5);
  uVar7 = *(undefined8 *)((long)puVar2 + 0x88);
  *(undefined8 *)((long)puVar2 + 0x88) = param_5;
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar2 + 0x78);
  *(undefined **)((long)puVar2 + 0x78) = puVar3;
  _objc_release(uVar7);
  lVar4 = param_3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0ec0c0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if ((int)lVar6 == 0) goto LAB_1063bf108;
  func_0x00010beaf400(puVar2);
  func_0x00010beadf20(puVar2);
  lVar4 = param_3;
  func_0x00010c063ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_106441504();
  _objc_release(lVar4);
  if ((int)lVar5 != 0) {
    func_0x00010beaf360(puVar2);
    lVar4 = param_3;
    FUN_1063bf1e4();
    if ((int)lVar4 == 0) goto LAB_1063bf108;
    func_0x00010beabba0(puVar2);
LAB_1063bf028:
    func_0x00010beaf3e0(puVar2);
    goto LAB_1063bf108;
  }
  lVar4 = param_3;
  func_0x00010c29d360();
  if (((((lVar4 == 0x2d) || (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x2c)) ||
       (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x30)) ||
      ((lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x53 ||
       (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x48)))) ||
     ((lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x49 ||
      ((lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x62 ||
       (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x50)))))) {
LAB_1063bf0e4:
    func_0x00010beabba0(puVar2);
    func_0x00010beaf3e0(puVar2);
  }
  else {
    lVar4 = param_3;
    func_0x00010c29d360();
    uVar1 = lVar4 - 0x57U >> 1;
    if (((uVar1 | lVar4 - 0x57U << 0x3f) < 8) && ((1L << (uVar1 & 0x3f) & 0xb1U) != 0))
    goto LAB_1063bf0e4;
    lVar4 = param_3;
    func_0x00010c29d360();
    if ((((lVar4 == 0x2b) || (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x1e)) ||
        (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x1d)) ||
       (((lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x5b ||
         (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x60)) ||
        (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0xb)))) {
      func_0x00010beb0f40(puVar2);
      goto LAB_1063bf0e4;
    }
    lVar4 = param_3;
    func_0x00010c29d360();
    if ((lVar4 == 0x39) || (lVar4 = param_3, func_0x00010c29d360(), lVar4 == 0x17))
    goto LAB_1063bf028;
    lVar4 = param_3;
    func_0x00010c29d360();
    if (lVar4 != 0x56) goto LAB_1063bf108;
  }
  func_0x00010beadf40(puVar2);
LAB_1063bf108:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1063bf1e4; end: 1063bf237;  */

bool FUN_1063bf1e4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c29d360();
  if (lVar2 == 0x2c) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010c29d360(param_1);
    bVar1 = lVar2 == 0x53;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1063bf238; end: 1063bf2f3; -[SCCompositeAdDataSource _setupPromotedStoryAdDataSourceIfNeeded:] */

void FUN_1063bf238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca488;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c063ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b660(puVar1,param_2,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_1063bf1e4();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5ad0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063bf2f4; end: 1063bf3bb; -[SCCompositeAdDataSource _setupUserStoriesAdDataSourceIfNeeded:] */

void FUN_1063bf2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8f360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126ca490;
    _objc_alloc(PTR_PTR_1126ca490);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar4,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5ae8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar4,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5ae8);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bf3bc; end: 1063bf483; -[SCCompositeAdDataSource _setupContentInterstitialAdDataSourceIfNeeded:] */

void FUN_1063bf3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8f360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126ca498;
    _objc_alloc(PTR_PTR_1126ca498);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar4,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b00);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar4,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b00);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bf484; end: 1063bf5a3; -[SCCompositeAdDataSource _setupPublisherAdDataSourceIfNeeded:] */

void FUN_1063bf484(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf8f360();
  if ((int)puVar3 != 0) {
    puVar3 = PTR_PTR_1126b8c98;
    func_0x00010bf815c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1063bf58c;
    puVar1 = PTR_PTR_1126ca4a0;
    _objc_alloc(PTR_PTR_1126ca4a0);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b18);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b18);
    puVar2 = PTR_PTR_1126ca4a8;
    _objc_alloc(PTR_PTR_1126ca4a8);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b30);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b30);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_1063bf58c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bf5a4; end: 1063bf687; -[SCCompositeAdDataSource _setupLongformShowAdDataSourceIfNeeded:] */

void FUN_1063bf5a4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf8f360();
  if ((int)puVar3 == 0) {
    _objc_release(puVar2);
  }
  else {
    puVar3 = PTR_PTR_1126b8c98;
    func_0x00010bf815e0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1063bf670;
    puVar1 = PTR_PTR_1126ca4b0;
    _objc_alloc(PTR_PTR_1126ca4b0);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b48);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b48);
  }
  _objc_release(puVar1);
LAB_1063bf670:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bf688; end: 1063bf7a7; -[SCCompositeAdDataSource _setupPublicStoriesAdDataSourceIfNeeded:] */

void FUN_1063bf688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bf91400();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) goto LAB_1063bf790;
  }
  uVar2 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8f360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    puVar1 = PTR_PTR_1126ca4b8;
    _objc_alloc(PTR_PTR_1126ca4b8);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b60);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b60);
    _objc_release(puVar1);
  }
LAB_1063bf790:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bf7a8; end: 1063bf86f; -[SCCompositeAdDataSource _setupLongformSpotlightAdDataSourceIfNeeded:] */

void FUN_1063bf7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8f360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126ca4c0;
    _objc_alloc(PTR_PTR_1126ca4c0);
    func_0x00010c00b600();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b78);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar4,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b78);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bf870; end: 1063bfc9b; -[SCCompositeAdDataSource updateDataSourceForItemGroup:] */

void FUN_1063bf870(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_retain(param_3);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar11);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar1 & 1) != 0) {
      ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b48;
      goto LAB_1063bf978;
    }
    uVar1 = uVar2;
    FUN_106440ee4();
    if ((int)uVar1 != 0) {
      lVar6 = *(long *)(param_1 + 0x60);
      func_0x00010c29d360();
      if (lVar6 == 0x2b) {
        uVar11 = *(undefined8 *)(param_1 + 0x40);
        goto LAB_1063bfa90;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010bf1f480();
      if ((int)uVar10 == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bef2560(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c29d360(uVar9);
        uVar1 = uVar2;
        FUN_10643fa74(uVar2,uVar10,uVar9);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar11);
        _objc_release(uVar7);
        if ((int)uVar1 != 0) goto LAB_1063bfc04;
      }
      else {
        uVar1 = uVar2;
        FUN_10643fe1c();
        _objc_release(uVar11);
        _objc_release(uVar7);
        if ((uVar1 & 1) != 0) {
LAB_1063bfc04:
          ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b60;
          goto LAB_1063bfc0c;
        }
      }
      ppuVar12 = (undefined **)0x0;
LAB_1063bfc0c:
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar11;
      _objc_release(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar11;
      _objc_release(uVar10);
      if (ppuVar12 == (undefined **)0x0) goto LAB_1063bfa18;
      goto LAB_1063bf9c8;
    }
    uVar1 = uVar2;
    FUN_106440d04();
    if ((int)uVar1 == 0) {
      uVar1 = uVar2;
      FUN_1064410f0();
      uVar11 = *(undefined8 *)(param_1 + 0x60);
      if ((int)uVar1 != 0) {
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c29d360(uVar7);
        uVar1 = uVar2;
        FUN_10644127c(uVar2,uVar10,uVar7);
        _objc_release(uVar10);
        _objc_release(uVar11);
        ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b78;
        if ((int)uVar1 == 0) {
          ppuVar12 = (undefined **)0x0;
        }
        goto LAB_1063bfc0c;
      }
      FUN_1063bf1e4();
      if (((int)uVar11 == 0) || (uVar1 = uVar2, FUN_106441504(), (int)uVar1 == 0))
      goto LAB_1063bfa18;
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = *(undefined ***)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar11;
    }
    else {
      func_0x00010c29d360();
      uVar11 = *(undefined8 *)(param_1 + 0x40);
LAB_1063bfa90:
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar11;
      _objc_release(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = *(undefined ***)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar11;
    }
  }
  else {
    FUN_10643e240(uVar2);
    uVar1 = uVar2;
    func_0x00010643e29c();
    uVar4 = uVar2;
    FUN_10643eef0();
    uVar5 = uVar2;
    FUN_10643e30c();
    ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b30;
    if (((uint)uVar4 & (((uint)uVar1 | (uint)uVar5) ^ 1)) == 0) {
      ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b18;
    }
    _objc_retain(ppuVar12);
LAB_1063bf978:
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar11;
    _objc_release(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar11;
    _objc_release(uVar10);
LAB_1063bf9c8:
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    _objc_release(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    _objc_release(uVar10);
  }
  _objc_release(ppuVar12);
LAB_1063bfa18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063bfc9c; end: 1063bfcff; -[SCCompositeAdDataSource updateEntryInteractionType:] */

void FUN_1063bfc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x38);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126ca4b0;
    _objc_opt_class(PTR_PTR_1126ca4b0);
    _objc_opt_isKindOfClass(uVar2,puVar1);
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c285990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_updateEntryInteractionType__11267f088,param_3
                );
      return;
    }
  }
  return;
}



/* Entry: 1063bfd00; end: 1063bfecb; -[SCCompositeAdDataSource setPlaylistItemController:] */

void FUN_1063bfd00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar4 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 8,param_3);
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_190;
    do {
      lVar12 = 0;
      do {
        if (*plStack_190 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c1ddde0(*(undefined8 *)(lStack_198 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x50));
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_1d0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1d0 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c1ddde0(*(undefined8 *)(lStack_1d8 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar1;
      puVar4 = &uStack_1e0;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lVar11 = *(long *)(param_3 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      func_0x00010c1d53c0(*(undefined8 *)(lVar13 * 8));
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    lVar2 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  func_0x00010c1d53c0(*(undefined8 *)(param_3 + 0x50));
  lVar11 = *(long *)(param_3 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x10;
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      func_0x00010c1d53c0(*(undefined8 *)(lVar13 * 8));
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    uVar10 = 0x10;
    lVar2 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  _objc_storeWeak(param_3 + 0x10,puVar4);
  _objc_retain();
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010be89fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bef99a0(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(uVar10);
  lVar2 = lVar1;
  func_0x00010c06b7e0();
  if ((int)lVar2 == 0) goto LAB_1063c0350;
  puVar3 = (undefined1 *)((long)puVar4 + 8);
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be36bc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 != (undefined1 *)0x0) &&
     (puVar6 = (undefined1 *)puVar4, func_0x00010bf2d280(), (int)puVar6 != 0)) {
    puVar7 = PTR_PTR_1126b2330;
    func_0x00010c29e020(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)lVar2 == 0) {
      puVar7 = PTR_PTR_1126b2330;
      func_0x00010c29e3c0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)lVar2 == 0) goto LAB_1063c0340;
      func_0x00010bdf7f40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dd40();
      puVar6 = (undefined1 *)puVar4;
    }
    else {
      lVar2 = lVar1;
      func_0x00010be36bc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)puVar4;
      func_0x00010c10a500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar8 = puVar6;
      func_0x00010c1169a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)puVar4;
        func_0x00010bdf7f40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c116c20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined1 *)0x0) {
          _objc_initWeak(auStack_428,puVar4);
          _objc_copyWeak(auStack_430,auStack_428);
          func_0x00010c109e20(puVar8);
          _objc_destroyWeak(auStack_430);
          _objc_destroyWeak(auStack_428);
        }
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
  }
LAB_1063c0340:
  _objc_release(puVar3);
  _objc_release(puVar5);
LAB_1063c0350:
  _objc_release(uVar10);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1063bfecc; end: 1063c00eb; -[SCCompositeAdDataSource setOperaControlling:] */

void FUN_1063bfecc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010c1d53c0(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010c1d53c0(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    uVar6 = 0x10;
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_retain();
  lVar2 = param_3;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be89fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bef99a0(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_1);
  _objc_retain(lVar1);
  _objc_retain(uVar6);
  lVar2 = lVar1;
  func_0x00010c06b7e0();
  if ((int)lVar2 == 0) goto LAB_1063c0350;
  lVar2 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010be36bc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar7;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar3 = param_3, func_0x00010bf2d280(), (int)lVar3 != 0)) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010c29e020(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((int)lVar3 == 0) {
      puVar4 = PTR_PTR_1126b2330;
      func_0x00010c29e3c0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      if ((int)lVar3 == 0) goto LAB_1063c0340;
      func_0x00010bdf7f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dd40();
      lVar3 = param_3;
    }
    else {
      lVar8 = lVar1;
      func_0x00010be36bc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c10a500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      lVar8 = lVar3;
      func_0x00010c1169a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 == 0) {
        lVar8 = param_3;
        func_0x00010bdf7f40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010c116c20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          _objc_initWeak(auStack_248,param_3);
          _objc_copyWeak(auStack_250,auStack_248);
          func_0x00010c109e20(lVar8);
          _objc_destroyWeak(auStack_250);
          _objc_destroyWeak(auStack_248);
        }
        _objc_release(lVar5);
        _objc_release(lVar8);
      }
    }
    _objc_release(lVar3);
  }
LAB_1063c0340:
  _objc_release(lVar2);
  _objc_release(lVar7);
LAB_1063c0350:
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1063c00ec; end: 1063c03a3; -[SCCompositeAdDataSource operaViewDidSendEvent:page:params:] */

void FUN_1063c00ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c06b7e0();
  if ((int)uVar1 == 0) goto LAB_1063c0350;
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar4 = param_1, func_0x00010bf2d280(), (int)lVar4 != 0)) {
    puVar5 = PTR_PTR_1126b2330;
    func_0x00010c29e020(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    if ((int)uVar1 == 0) {
      puVar5 = PTR_PTR_1126b2330;
      func_0x00010c29e3c0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if ((int)uVar1 == 0) goto LAB_1063c0340;
      func_0x00010bdf7f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dd40();
      lVar4 = param_1;
    }
    else {
      uVar1 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c10a500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      lVar6 = lVar4;
      func_0x00010c1169a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        lVar6 = param_1;
        func_0x00010bdf7f40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c116c20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          _objc_initWeak(auStack_68,param_1);
          _objc_copyWeak(auStack_70,auStack_68);
          func_0x00010c109e20(lVar6);
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_68);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
    }
    _objc_release(lVar4);
  }
LAB_1063c0340:
  _objc_release(lVar2);
  _objc_release(lVar3);
LAB_1063c0350:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063c03a4; end: 1063c03f7;  */

void FUN_1063c03a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c101400();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c03f8; end: 1063c05b7; -[SCCompositeAdDataSource setOperaConfiguration:] */

void FUN_1063c03f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar7 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = *plStack_190;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_190 != unaff_x23) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c1d5360(*(undefined8 *)(lStack_198 + unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (lVar2 != unaff_x24);
      lVar2 = lVar1;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c1d5360(*(undefined8 *)(param_1 + 0x50));
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x22 = *plStack_1d0;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_1d0 != unaff_x22) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c1d5360(*(undefined8 *)(lStack_1d8 + unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (lVar2 != unaff_x23);
      lVar2 = lVar3;
      puVar7 = &uStack_1e0;
      func_0x00010bf52a60();
      lVar1 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_1063c05b8;
  lStack_220 = unaff_x24;
  lStack_218 = unaff_x23;
  lStack_210 = unaff_x22;
  lStack_208 = lVar1;
  lStack_200 = lVar3;
  uStack_1f8 = param_3;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_initWeak(auStack_228,uVar4);
  puVar5 = (undefined1 *)puVar7;
  _objc_opt_respondsToSelector(puVar7,PTR_s_adReportEventObservableV2_11259aac8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bef4480(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_230,auStack_228);
    puVar6 = puVar5;
    func_0x00010c25ff60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_230);
  }
  _objc_destroyWeak(auStack_228);
  _objc_release(puVar7);
  return;
}



/* Entry: 1063c05b8; end: 1063c06d3; -[SCCompositeAdDataSource beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063c05b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adReportEventObservableV2_11259aac8);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bef4480(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1063c06d4; end: 1063c071b;  */

void FUN_1063c06d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be254c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c071c; end: 1063c0723; -[SCCompositeAdDataSource didTapLoadingErrorCta:] */

void FUN_1063c071c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_userDidTapLoadingErrorCta__112682180);
  return;
}



/* Entry: 1063c0724; end: 1063c0917; -[SCCompositeAdDataSource updateViewLocation:] */

void FUN_1063c0724(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **unaff_x21;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar14;
  undefined **unaff_x26;
  undefined **ppuVar15;
  undefined **ppuStack_728;
  undefined *puStack_720;
  long lStack_718;
  undefined **ppuStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long *plStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long lStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined1 ***pppuStack_510;
  code *pcStack_508;
  undefined *puStack_500;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_438;
  undefined1 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_258;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  ppuVar13 = &puStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = *(undefined ***)(param_1 + 0x60);
  ppuVar11 = param_3;
  func_0x00010c29d360();
  if (param_3 != ppuVar2) {
    func_0x00010c222620(*(undefined8 *)(param_1 + 0x60));
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    unaff_x21 = *(undefined ***)(param_1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = unaff_x21;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_1a0;
      unaff_x25 = &PTR_PTR_1126ca000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1a0 != unaff_x24) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar12 = *(ulong *)(lStack_1a8 + (long)unaff_x26 * 8);
          puVar3 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          uVar4 = uVar12;
          _objc_opt_isKindOfClass(uVar12,puVar3);
          if ((uVar4 & 1) != 0) {
            func_0x00010c28bee0(uVar12);
          }
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar11 != unaff_x26);
        ppuVar11 = unaff_x21;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release(unaff_x21);
    func_0x00010c28bee0(*(undefined8 *)(param_1 + 0x50));
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    ppuVar2 = *(undefined ***)(param_1 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      lVar10 = *plStack_1e0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_1e0 != lVar10) {
            _objc_enumerationMutation(ppuVar2);
          }
          func_0x00010c28bee0(*(undefined8 *)(lStack_1e8 + (long)ppuVar13 * 8));
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar11 != ppuVar13);
        ppuVar11 = ppuVar2;
        ppuVar13 = &puStack_1f0;
        func_0x00010bf52a60();
        unaff_x21 = (undefined **)0x0;
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release();
    ppuVar11 = ppuVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar14 = &puStack_3e0;
  pcStack_1f8 = FUN_1063c0918;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar11;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  ppuVar13 = ppuVar11;
  func_0x00010c08fa60();
  if (ppuVar13 == (undefined **)0x0) {
LAB_1063c0b20:
    ppuVar5 = (undefined **)0x0;
    ppuVar9 = unaff_x21;
  }
  else {
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    unaff_x21 = (undefined **)ppuVar2[5];
    _objc_retain(unaff_x21);
    ppuVar13 = unaff_x21;
    func_0x00010bf52a60();
    ppuVar9 = unaff_x21;
    if (ppuVar13 != (undefined **)0x0) {
      unaff_x25 = (undefined **)*plStack_390;
      unaff_x26 = &PTR_PTR_1126ca000;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_390 != unaff_x25) {
            _objc_enumerationMutation(unaff_x21);
          }
          ppuVar5 = (undefined **)ppuVar2[5];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          ppuVar6 = ppuVar5;
          _objc_opt_isKindOfClass(ppuVar5,puVar3);
          if (((ulong)ppuVar6 & 1) != 0) {
            _objc_retain(ppuVar5);
            unaff_x24 = ppuVar5;
            ppuVar6 = ppuVar11;
            func_0x00010c075a00();
            _objc_release(ppuVar5);
            if (((ulong)unaff_x24 & 1) != 0) goto LAB_1063c0a74;
          }
          _objc_release(ppuVar5);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar13 != ppuVar15);
        ppuVar13 = unaff_x21;
        func_0x00010bf52a60();
      } while (ppuVar13 != (undefined **)0x0);
    }
    _objc_release(unaff_x21);
    iVar1 = (int)ppuVar2[10];
    ppuVar6 = ppuVar11;
    func_0x00010c075a00();
    if (iVar1 == 0) {
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      lStack_3d8 = 0;
      puStack_3e0 = (undefined *)0x0;
      uStack_3c8 = 0;
      plStack_3d0 = (long *)0x0;
      ppuVar13 = (undefined **)ppuVar2[8];
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar13;
      func_0x00010bf52a60();
      if (ppuVar9 != (undefined **)0x0) {
        lVar10 = *plStack_3d0;
LAB_1063c0abc:
        unaff_x24 = (undefined **)0x0;
LAB_1063c0ac0:
        if (*plStack_3d0 != lVar10) {
          _objc_enumerationMutation(ppuVar13);
        }
        ppuVar5 = *(undefined ***)(lStack_3d8 + (long)unaff_x24 * 8);
        ppuVar2 = ppuVar5;
        ppuVar6 = ppuVar11;
        func_0x00010c075a00();
        unaff_x21 = ppuVar13;
        if (((ulong)ppuVar2 & 1) == 0) goto code_r0x0001063c0af0;
        _objc_retain(ppuVar5);
LAB_1063c0a74:
        _objc_release(unaff_x21);
        goto LAB_1063c0b24;
      }
LAB_1063c0b18:
      _objc_release(ppuVar13);
      ppuVar6 = ppuVar14;
      goto LAB_1063c0b20;
    }
    ppuVar5 = (undefined **)ppuVar2[10];
    _objc_retain(ppuVar5);
  }
LAB_1063c0b24:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar2 = &puStack_500;
  pcStack_3e8 = FUN_1063c0b7c;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = &puStack_200;
  _objc_retain(ppuVar6);
  iVar1 = (int)ppuVar11[10];
  ppuVar13 = ppuVar6;
  func_0x00010c0759e0();
  ppuVar14 = ppuVar5;
  if (iVar1 == 0) {
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    lStack_4f8 = 0;
    puStack_500 = (undefined *)0x0;
    uStack_4e8 = 0;
    puStack_4f0 = (undefined8 *)0x0;
    ppuVar11 = (undefined **)ppuVar11[8];
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar11;
    func_0x00010bf52a60();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar14 = (undefined **)*puStack_4f0;
      ppuVar9 = ppuVar13;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_4f0 != ppuVar14) {
            _objc_enumerationMutation(ppuVar11);
          }
          ppuVar5 = *(undefined ***)(lStack_4f8 + (long)unaff_x24 * 8);
          ppuVar13 = ppuVar5;
          ppuVar2 = ppuVar6;
          func_0x00010c0759e0();
          if (((ulong)ppuVar13 & 1) != 0) {
            _objc_retain(ppuVar5);
            _objc_release(ppuVar11);
            goto LAB_1063c0c94;
          }
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar9 != unaff_x24);
        ppuVar9 = ppuVar11;
        ppuVar2 = &puStack_500;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar11);
    ppuVar5 = (undefined **)0x0;
  }
  else {
    ppuVar5 = (undefined **)ppuVar11[10];
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar13;
  }
LAB_1063c0c94:
  ppuVar13 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_508 = FUN_1063c0cd8;
  lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_550 = unaff_x26;
  ppuStack_548 = unaff_x25;
  ppuStack_540 = unaff_x24;
  ppuStack_538 = ppuVar14;
  ppuStack_530 = ppuVar5;
  ppuStack_528 = ppuVar9;
  ppuStack_520 = ppuVar11;
  ppuStack_518 = ppuVar6;
  pppuStack_510 = &ppuStack_3f0;
  _objc_retain(ppuVar2);
  iVar1 = (int)ppuVar13[10];
  func_0x00010c075a00();
  if (iVar1 == 0) {
    uStack_678 = 0;
    uStack_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    lStack_698 = 0;
    uStack_6a0 = 0;
    uStack_688 = 0;
    plStack_690 = (long *)0x0;
    ppuVar6 = (undefined **)ppuVar13[8];
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar6;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      lVar10 = *plStack_690;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if (*plStack_690 != lVar10) {
            _objc_enumerationMutation(ppuVar6);
          }
          ppuVar9 = *(undefined ***)(lStack_698 + (long)ppuVar14 * 8);
          ppuVar15 = ppuVar9;
          func_0x00010c075a00();
          if (((ulong)ppuVar15 & 1) != 0) {
            _objc_retain(ppuVar9);
            ppuVar11 = ppuVar6;
            goto LAB_1063c0f1c;
          }
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar11 != ppuVar14);
        ppuVar11 = ppuVar6;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release(ppuVar6);
    puVar3 = PTR_PTR_1126ca4c8;
    ppuVar11 = (undefined **)ppuVar13[6];
    if (ppuVar11 != (undefined **)0x0) {
      _objc_retain(ppuVar11);
      _objc_opt_class(puVar3);
      ppuVar6 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar3);
      ppuVar9 = ppuVar11;
      if (((ulong)ppuVar6 & 1) == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      _objc_retain(ppuVar9);
      _objc_release(ppuVar11);
      ppuVar6 = ppuVar9;
      func_0x00010c075a00();
      if (((ulong)ppuVar6 & 1) != 0) goto LAB_1063c0f20;
      _objc_release(ppuVar9);
    }
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    lStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6c8 = 0;
    plStack_6d0 = (long *)0x0;
    ppuVar6 = (undefined **)ppuVar13[5];
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar6;
    func_0x00010bf52a60();
    ppuVar13 = ppuVar6;
    if (ppuVar14 != (undefined **)0x0) {
      lVar10 = *plStack_6d0;
      ppuVar11 = ppuVar14;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if (*plStack_6d0 != lVar10) {
            _objc_enumerationMutation(ppuVar6);
          }
          ppuVar9 = *(undefined ***)(lStack_6d8 + (long)ppuVar14 * 8);
          puVar3 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          ppuVar15 = ppuVar9;
          _objc_opt_isKindOfClass(ppuVar9,puVar3);
          if (((ulong)ppuVar15 & 1) != 0) {
            _objc_retain(ppuVar9);
            ppuVar15 = ppuVar9;
            func_0x00010c075a00();
            if (((ulong)ppuVar15 & 1) != 0) goto LAB_1063c0f1c;
            _objc_release(ppuVar9);
          }
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar11 != ppuVar14);
        ppuVar11 = ppuVar6;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release(ppuVar6);
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar9 = (undefined **)ppuVar13[10];
    _objc_retain(ppuVar9);
    ppuVar11 = ppuVar5;
  }
LAB_1063c0f20:
  ppuVar5 = ppuVar9;
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_558) {
    ___stack_chk_fail();
    pcStack_6e8 = FUN_1063c0f64;
    lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = (undefined **)PTR_PTR_1126b2330;
    ppuStack_710 = ppuVar11;
    ppuStack_708 = ppuVar5;
    ppuStack_700 = ppuVar13;
    ppuStack_6f8 = ppuVar2;
    pppuStack_6f0 = &pppuStack_510;
    func_0x00010c29e020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2330;
    ppuStack_728 = ppuVar6;
    func_0x00010c29e3c0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = &ppuStack_728;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_720 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_718) {
      ___stack_chk_fail();
      _objc_retain(pppuVar8);
      pppuVar7 = pppuVar8;
      func_0x00010be36bc0(pppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf7f20(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar7);
      ppuVar5 = ppuVar6;
      func_0x00010bf63e20(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar8);
      _objc_release(ppuVar6);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
code_r0x0001063c0af0:
  unaff_x24 = (undefined **)((long)unaff_x24 + 1);
  if (ppuVar9 == unaff_x24) goto code_r0x0001063c0afc;
  goto LAB_1063c0ac0;
code_r0x0001063c0afc:
  ppuVar14 = &puStack_3e0;
  func_0x00010bf52a60();
  ppuVar9 = unaff_x21;
  if (unaff_x21 == (undefined **)0x0) goto LAB_1063c0b18;
  goto LAB_1063c0abc;
LAB_1063c0f1c:
  _objc_release(ppuVar6);
  goto LAB_1063c0f20;
}



/* Entry: 1063c0918; end: 1063c0b7b; -[SCCompositeAdDataSource _dataSourceForItemId:] */

void FUN_1063c0918(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined *unaff_x21;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x24;
  long lVar11;
  long unaff_x25;
  undefined **unaff_x26;
  undefined *puVar12;
  undefined *puStack_538;
  undefined *puStack_530;
  long lStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined1 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_368;
  undefined **ppuStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  puVar7 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
LAB_1063c0b20:
    puVar2 = (undefined *)0x0;
    puVar4 = unaff_x21;
  }
  else {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    unaff_x21 = *(undefined **)(param_1 + 0x28);
    _objc_retain(unaff_x21);
    puVar3 = unaff_x21;
    func_0x00010bf52a60();
    puVar4 = unaff_x21;
    if (puVar3 != (undefined *)0x0) {
      unaff_x25 = *plStack_1a0;
      unaff_x26 = &PTR_PTR_1126ca000;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != unaff_x25) {
            _objc_enumerationMutation(unaff_x21);
          }
          puVar2 = *(undefined **)(param_1 + 0x28);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          puVar9 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar10);
          if (((ulong)puVar9 & 1) != 0) {
            _objc_retain(puVar2);
            unaff_x24 = puVar2;
            puVar10 = param_3;
            func_0x00010c075a00();
            _objc_release(puVar2);
            if (((ulong)unaff_x24 & 1) != 0) goto LAB_1063c0a74;
          }
          _objc_release(puVar2);
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = unaff_x21;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(unaff_x21);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
    puVar10 = param_3;
    func_0x00010c075a00();
    if (iVar1 == 0) {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      puVar3 = *(undefined **)(param_1 + 0x40);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar11 = *plStack_1e0;
LAB_1063c0abc:
        unaff_x24 = (undefined *)0x0;
LAB_1063c0ac0:
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        puVar2 = *(undefined **)(lStack_1e8 + (long)unaff_x24 * 8);
        puVar12 = puVar2;
        puVar10 = param_3;
        func_0x00010c075a00();
        unaff_x21 = puVar3;
        if (((ulong)puVar12 & 1) == 0) goto code_r0x0001063c0af0;
        _objc_retain(puVar2);
LAB_1063c0a74:
        _objc_release(unaff_x21);
        goto LAB_1063c0b24;
      }
LAB_1063c0b18:
      _objc_release(puVar3);
      puVar10 = (undefined *)puVar7;
      goto LAB_1063c0b20;
    }
    puVar2 = *(undefined **)(param_1 + 0x50);
    _objc_retain(puVar2);
  }
LAB_1063c0b24:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar7 = &uStack_310;
  pcStack_1f8 = FUN_1063c0b7c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x50);
  puVar3 = puVar10;
  func_0x00010c0759e0();
  puVar12 = puVar2;
  if (iVar1 == 0) {
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined8 *)0x0;
    param_3 = *(undefined **)(param_3 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      puVar12 = (undefined *)*puStack_300;
      puVar4 = puVar3;
      do {
        unaff_x24 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_300 != puVar12) {
            _objc_enumerationMutation(param_3);
          }
          puVar2 = *(undefined **)(lStack_308 + (long)unaff_x24 * 8);
          puVar3 = puVar2;
          puVar7 = (undefined8 *)puVar10;
          func_0x00010c0759e0();
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar2);
            _objc_release(param_3);
            goto LAB_1063c0c94;
          }
          unaff_x24 = unaff_x24 + 1;
        } while (puVar4 != unaff_x24);
        puVar4 = param_3;
        puVar7 = &uStack_310;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_3 + 0x50);
    _objc_retain(puVar2);
    puVar7 = (undefined8 *)puVar3;
  }
LAB_1063c0c94:
  puVar3 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_318 = FUN_1063c0cd8;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_360 = unaff_x26;
  lStack_358 = unaff_x25;
  puStack_350 = unaff_x24;
  puStack_348 = puVar12;
  puStack_340 = puVar2;
  puStack_338 = puVar4;
  puStack_330 = param_3;
  puStack_328 = puVar10;
  ppuStack_320 = &puStack_200;
  _objc_retain(puVar7);
  iVar1 = (int)*(undefined8 *)(puVar3 + 0x50);
  func_0x00010c075a00();
  if (iVar1 == 0) {
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    puVar4 = *(undefined **)(puVar3 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar11 = *plStack_4a0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_4a0 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          puVar9 = *(undefined **)(lStack_4a8 + (long)puVar12 * 8);
          puVar2 = puVar9;
          func_0x00010c075a00();
          if (((ulong)puVar2 & 1) != 0) {
            _objc_retain(puVar9);
            puVar10 = puVar4;
            goto LAB_1063c0f1c;
          }
          puVar12 = puVar12 + 1;
        } while (puVar10 != puVar12);
        puVar10 = puVar4;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ca4c8;
    puVar10 = *(undefined **)(puVar3 + 0x30);
    if (puVar10 != (undefined *)0x0) {
      _objc_retain(puVar10);
      _objc_opt_class(puVar4);
      puVar12 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar4);
      puVar9 = puVar10;
      if (((ulong)puVar12 & 1) == 0) {
        puVar9 = (undefined *)0x0;
      }
      _objc_retain(puVar9);
      _objc_release(puVar10);
      puVar4 = puVar9;
      func_0x00010c075a00();
      if (((ulong)puVar4 & 1) != 0) goto LAB_1063c0f20;
      _objc_release(puVar9);
    }
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    puVar4 = *(undefined **)(puVar3 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf52a60();
    puVar3 = puVar4;
    if (puVar12 != (undefined *)0x0) {
      lVar11 = *plStack_4e0;
      puVar10 = puVar12;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_4e0 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          puVar9 = *(undefined **)(lStack_4e8 + (long)puVar12 * 8);
          puVar2 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          puVar5 = puVar9;
          _objc_opt_isKindOfClass(puVar9,puVar2);
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain(puVar9);
            puVar2 = puVar9;
            func_0x00010c075a00();
            if (((ulong)puVar2 & 1) != 0) goto LAB_1063c0f1c;
            _objc_release(puVar9);
          }
          puVar12 = puVar12 + 1;
        } while (puVar10 != puVar12);
        puVar10 = puVar4;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = *(undefined **)(puVar3 + 0x50);
    _objc_retain(puVar9);
    puVar10 = puVar2;
  }
LAB_1063c0f20:
  puVar2 = puVar9;
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
    ___stack_chk_fail();
    pcStack_4f8 = FUN_1063c0f64;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR_PTR_1126b2330;
    puStack_520 = puVar10;
    puStack_518 = puVar2;
    puStack_510 = puVar3;
    puStack_508 = (undefined *)puVar7;
    pppuStack_500 = &ppuStack_320;
    func_0x00010c29e020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2330;
    puStack_538 = puVar4;
    func_0x00010c29e3c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &puStack_538;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_530 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_528) {
      ___stack_chk_fail();
      _objc_retain(ppuVar8);
      ppuVar6 = ppuVar8;
      func_0x00010be36bc0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf7f20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar2 = puVar4;
      func_0x00010bf63e20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(puVar4);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
code_r0x0001063c0af0:
  unaff_x24 = unaff_x24 + 1;
  if (puVar4 == unaff_x24) goto code_r0x0001063c0afc;
  goto LAB_1063c0ac0;
code_r0x0001063c0afc:
  puVar7 = &uStack_1f0;
  func_0x00010bf52a60();
  puVar4 = unaff_x21;
  if (unaff_x21 == (undefined *)0x0) goto LAB_1063c0b18;
  goto LAB_1063c0abc;
LAB_1063c0f1c:
  _objc_release(puVar4);
  goto LAB_1063c0f20;
}



/* Entry: 1063c0b7c; end: 1063c0cd7; -[SCCompositeAdDataSource _dataSourceForGroupId:] */

void FUN_1063c0b7c(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  puVar10 = param_3;
  func_0x00010c0759e0();
  if (iVar1 == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar11 = *plStack_110;
      do {
        lVar12 = 0;
        do {
          if (*plStack_110 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          puVar9 = *(undefined **)(lStack_118 + lVar12 * 8);
          puVar10 = puVar9;
          puVar6 = (undefined8 *)param_3;
          func_0x00010c0759e0();
          if (((ulong)puVar10 & 1) != 0) {
            _objc_retain(puVar9);
            _objc_release(lVar2);
            goto LAB_1063c0c94;
          }
          lVar12 = lVar12 + 1;
        } while (lVar13 != lVar12);
        lVar13 = lVar2;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar2);
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = *(undefined **)(param_1 + 0x50);
    _objc_retain(puVar9);
    puVar6 = (undefined8 *)puVar10;
  }
LAB_1063c0c94:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_128 = FUN_1063c0cd8;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x50);
  func_0x00010c075a00();
  if (iVar1 == 0) {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    puVar9 = *(undefined **)(param_3 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar13 = *plStack_2b0;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_2b0 != lVar13) {
            _objc_enumerationMutation(puVar9);
          }
          puVar8 = *(undefined **)(lStack_2b8 + (long)puVar14 * 8);
          puVar3 = puVar8;
          func_0x00010c075a00();
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar8);
            puVar10 = puVar9;
            goto LAB_1063c0f1c;
          }
          puVar14 = puVar14 + 1;
        } while (puVar10 != puVar14);
        puVar10 = puVar9;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126ca4c8;
    puVar10 = *(undefined **)(param_3 + 0x30);
    if (puVar10 != (undefined *)0x0) {
      _objc_retain(puVar10);
      _objc_opt_class(puVar9);
      puVar14 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar9);
      puVar8 = puVar10;
      if (((ulong)puVar14 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar10);
      puVar9 = puVar8;
      func_0x00010c075a00();
      if (((ulong)puVar9 & 1) != 0) goto LAB_1063c0f20;
      _objc_release(puVar8);
    }
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    puVar9 = *(undefined **)(param_3 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010bf52a60();
    param_3 = puVar9;
    if (puVar14 != (undefined *)0x0) {
      lVar13 = *plStack_2f0;
      puVar10 = puVar14;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_2f0 != lVar13) {
            _objc_enumerationMutation(puVar9);
          }
          puVar8 = *(undefined **)(lStack_2f8 + (long)puVar14 * 8);
          puVar3 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          puVar4 = puVar8;
          _objc_opt_isKindOfClass(puVar8,puVar3);
          if (((ulong)puVar4 & 1) != 0) {
            _objc_retain(puVar8);
            puVar3 = puVar8;
            func_0x00010c075a00();
            if (((ulong)puVar3 & 1) != 0) goto LAB_1063c0f1c;
            _objc_release(puVar8);
          }
          puVar14 = puVar14 + 1;
        } while (puVar10 != puVar14);
        puVar10 = puVar9;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = *(undefined **)(param_3 + 0x50);
    _objc_retain(puVar8);
    puVar10 = puVar9;
  }
LAB_1063c0f20:
  puVar9 = puVar8;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    pcStack_308 = FUN_1063c0f64;
    lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar14 = PTR_PTR_1126b2330;
    puStack_330 = puVar10;
    puStack_328 = puVar9;
    puStack_320 = param_3;
    puStack_318 = (undefined *)puVar6;
    ppuStack_310 = &puStack_130;
    func_0x00010c29e020();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2330;
    puStack_348 = puVar14;
    func_0x00010c29e3c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &puStack_348;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_340 = puVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
      ___stack_chk_fail();
      _objc_retain(ppuVar7);
      ppuVar5 = ppuVar7;
      func_0x00010be36bc0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf7f20(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      puVar9 = puVar14;
      func_0x00010bf63e20(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(puVar14);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
LAB_1063c0f1c:
  _objc_release(puVar9);
  goto LAB_1063c0f20;
}



/* Entry: 1063c0cd8; end: 1063c0f63; -[SCCompositeAdDataSource _adTrackHandlerForItemId:] */

void FUN_1063c0cd8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *unaff_x22;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c075a00();
  if (iVar1 == 0) {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar7 = *plStack_190;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_190 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          puVar6 = *(undefined **)(lStack_198 + (long)puVar8 * 8);
          puVar3 = puVar6;
          func_0x00010c075a00();
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar6);
            unaff_x22 = puVar2;
            goto LAB_1063c0f1c;
          }
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar8);
        puVar9 = puVar2;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar9 = PTR_PTR_1126ca4c8;
    unaff_x22 = *(undefined **)(param_1 + 0x30);
    if (unaff_x22 != (undefined *)0x0) {
      _objc_retain(unaff_x22);
      _objc_opt_class(puVar9);
      puVar2 = unaff_x22;
      _objc_opt_isKindOfClass(unaff_x22,puVar9);
      puVar6 = unaff_x22;
      if (((ulong)puVar2 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(unaff_x22);
      puVar9 = puVar6;
      func_0x00010c075a00();
      if (((ulong)puVar9 & 1) != 0) goto LAB_1063c0f20;
      _objc_release(puVar6);
    }
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf52a60();
    param_1 = puVar2;
    if (puVar9 != (undefined *)0x0) {
      lVar7 = *plStack_1d0;
      unaff_x22 = puVar9;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_1d0 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          puVar6 = *(undefined **)(lStack_1d8 + (long)puVar9 * 8);
          puVar8 = PTR_PTR_1126ca4c8;
          _objc_opt_class(PTR_PTR_1126ca4c8);
          puVar3 = puVar6;
          _objc_opt_isKindOfClass(puVar6,puVar8);
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar6);
            puVar8 = puVar6;
            func_0x00010c075a00();
            if (((ulong)puVar8 & 1) != 0) goto LAB_1063c0f1c;
            _objc_release(puVar6);
          }
          puVar9 = puVar9 + 1;
        } while (unaff_x22 != puVar9);
        unaff_x22 = puVar2;
        func_0x00010bf52a60();
      } while (unaff_x22 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x50);
    _objc_retain(puVar6);
  }
  goto LAB_1063c0f20;
LAB_1063c0f1c:
  _objc_release(puVar2);
LAB_1063c0f20:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_1e8 = FUN_1063c0f64;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = PTR_PTR_1126b2330;
    puStack_210 = unaff_x22;
    puStack_208 = puVar6;
    puStack_200 = param_1;
    uStack_1f8 = param_3;
    puStack_1f0 = &stack0xfffffffffffffff0;
    func_0x00010c29e020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2330;
    puStack_228 = puVar9;
    func_0x00010c29e3c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &puStack_228;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_220 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_retain(ppuVar5);
      ppuVar4 = ppuVar5;
      func_0x00010be36bc0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf7f20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      puVar6 = puVar9;
      func_0x00010bf63e20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1063c0f64; end: 1063c101f; -[SCCompositeAdDataSource _registeredEventsForOperaSession] */

void FUN_1063c0f64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29e020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010c29e3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar5,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar4 = ppuVar5;
    func_0x00010be36bc0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7f20(puVar1,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar3 = puVar1;
    func_0x00010bf63e20(puVar1,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063c1020; end: 1063c10af; -[SCCompositeAdDataSource dataModelForGroup:] */

void FUN_1063c1020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f20(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf63e20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063c10b0; end: 1063c113f; -[SCCompositeAdDataSource dataModelFor:] */

void FUN_1063c10b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf63e00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063c1140; end: 1063c1277; -[SCCompositeAdDataSource canResolvePlaylistItemGroupDataModel:] */

long FUN_1063c1140(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  puVar5 = param_3;
  func_0x00010bf2d460(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar7 = 0;
    if (lVar3 != 0) {
      lVar7 = *plStack_100;
      do {
        lVar9 = 0;
        do {
          if (*plStack_100 != lVar7) {
            _objc_enumerationMutation(lVar8);
          }
          uVar1 = *(ulong *)(lStack_108 + lVar9 * 8);
          puVar6 = (undefined8 *)param_3;
          func_0x00010bf2d460(uVar1,param_2,param_3);
          if ((uVar1 & 1) != 0) {
            lVar7 = 1;
            goto LAB_1063c1230;
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar8;
        puVar6 = &uStack_110;
        func_0x00010bf52a60(lVar8,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar3 != 0);
      lVar7 = 0;
    }
LAB_1063c1230:
    _objc_release(lVar8);
  }
  else {
    lVar7 = 1;
    puVar6 = (undefined8 *)puVar5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar7;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  lVar7 = *(long *)(param_3 + 0x50);
  func_0x00010c1014e0(lVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar3 = *(long *)(param_3 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar8 = *plStack_220;
      do {
        lVar9 = 0;
        do {
          if (*plStack_220 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          lVar2 = *(long *)(lStack_228 + lVar9 * 8);
          lVar4 = lVar2;
          func_0x00010c1014e0(lVar2,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            func_0x00010c1014e0(lVar2,param_2,puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            goto LAB_1063c13cc;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_230,auStack_1e8,0x10);
      } while (lVar7 != 0);
    }
    _objc_release(lVar3);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x50);
    func_0x00010c1014e0(lVar2,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1063c13cc:
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return lVar2;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 1063c1278; end: 1063c140f; -[SCCompositeAdDataSource playlistItemGroupModelForDataModel:] */

long FUN_1063c1278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c1014e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          lVar2 = *(long *)(lStack_118 + lVar6 * 8);
          lVar4 = lVar2;
          func_0x00010c1014e0(lVar2,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            func_0x00010c1014e0(lVar2,param_2,param_3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            goto LAB_1063c13cc;
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    func_0x00010c1014e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1063c13cc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return lVar2;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 1063c1410; end: 1063c1417; -[SCCompositeAdDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1063c1410(void)

{
  return 1;
}



/* Entry: 1063c1418; end: 1063c16a7; -[SCCompositeAdDataSource resetInsertionData] */

void FUN_1063c1418(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_438;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010befa120(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar4);
      }
      puVar5 = PTR_PTR_1126ca4c8;
      uVar13 = *(ulong *)(lVar17 * 8);
      _objc_retain(uVar13);
      _objc_opt_class(puVar5);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar5);
      uVar1 = uVar13;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar13);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(uVar1);
      lVar17 = lVar17 + 1;
    } while (lVar12 != lVar17);
    lVar12 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126ca4c8;
  uVar13 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar13);
  _objc_opt_class(puVar5);
  uVar6 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar5);
  uVar1 = uVar13;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  if (uVar1 != 0) {
    func_0x00010befa120(puVar3);
  }
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010c138d80(*(undefined8 *)((long)puVar14 * 8));
      puVar14 = puVar14 + 1;
    } while (puVar5 != puVar14);
    puVar5 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(puVar3 + 0x40);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*(long *)(puVar3 + 0x50) != 0) {
    func_0x00010befa120(puVar5);
  }
  lVar4 = *(long *)(puVar3 + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar4);
      }
      puVar14 = PTR_PTR_1126ca4c8;
      uVar13 = *(ulong *)(lVar17 * 8);
      _objc_retain(uVar13);
      _objc_opt_class(puVar14);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar14);
      uVar1 = uVar13;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar13);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar5);
      }
      _objc_release(uVar1);
      lVar17 = lVar17 + 1;
    } while (lVar12 != lVar17);
    lVar12 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar14 = PTR_PTR_1126ca4c8;
  uVar13 = *(ulong *)(puVar3 + 0x38);
  _objc_retain(uVar13);
  _objc_opt_class(puVar14);
  uVar6 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar14);
  uVar1 = uVar13;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  if (uVar1 != 0) {
    func_0x00010befa120(puVar5);
  }
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar5);
      }
      func_0x00010c138da0(*(undefined8 *)((long)puVar14 * 8));
      puVar14 = puVar14 + 1;
    } while (puVar3 != puVar14);
    puVar3 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_5c0;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  lVar12 = *(long *)(puVar5 + 0x28);
  _objc_retain(lVar12);
  lVar11 = lVar12;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar15 = *plStack_570;
    do {
      lVar4 = 0;
      do {
        if (*plStack_570 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        uVar2 = *(undefined8 *)(puVar5 + 0x28);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26ac40();
        _objc_release(uVar2);
        lVar4 = lVar4 + 1;
      } while (lVar11 != lVar4);
      lVar11 = lVar12;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar12);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar2 = *(undefined8 *)(puVar5 + 0x40);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*(long *)(puVar5 + 0x50) != 0) {
    func_0x00010befa120(puVar3);
  }
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  lStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5a8 = 0;
  plStack_5b0 = (long *)0x0;
  _objc_retain(puVar3);
  puVar14 = puVar3;
  func_0x00010bf52a60();
  if (puVar14 != (undefined *)0x0) {
    lVar11 = *plStack_5b0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_5b0 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c26ac40(*(undefined8 *)(lStack_5b8 + (long)puVar16 * 8));
        puVar16 = puVar16 + 1;
      } while (puVar14 != puVar16);
      puVar14 = puVar3;
      puVar10 = &uStack_5c0;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(puVar5 + 0x60);
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79c0();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar8 = (undefined1 *)puVar10;
  func_0x00010bfce400(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c13ac00(puVar3);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1063c16a8; end: 1063c1937; -[SCCompositeAdDataSource resetInsertionState] */

void FUN_1063c16a8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_248;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010befa120(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar4);
      }
      puVar5 = PTR_PTR_1126ca4c8;
      uVar13 = *(ulong *)(lVar17 * 8);
      _objc_retain(uVar13);
      _objc_opt_class(puVar5);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar5);
      uVar1 = uVar13;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar13);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(uVar1);
      lVar17 = lVar17 + 1;
    } while (lVar12 != lVar17);
    lVar12 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126ca4c8;
  uVar13 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar13);
  _objc_opt_class(puVar5);
  uVar6 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar5);
  uVar1 = uVar13;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  if (uVar1 != 0) {
    func_0x00010befa120(puVar3);
  }
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010c138da0(*(undefined8 *)((long)puVar14 * 8));
      puVar14 = puVar14 + 1;
    } while (puVar5 != puVar14);
    puVar5 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_3d0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar12 = *(long *)(puVar3 + 0x28);
  _objc_retain(lVar12);
  lVar11 = lVar12;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar15 = *plStack_380;
    do {
      lVar4 = 0;
      do {
        if (*plStack_380 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        uVar2 = *(undefined8 *)(puVar3 + 0x28);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26ac40();
        _objc_release(uVar2);
        lVar4 = lVar4 + 1;
      } while (lVar11 != lVar4);
      lVar11 = lVar12;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar12);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar2 = *(undefined8 *)(puVar3 + 0x40);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*(long *)(puVar3 + 0x50) != 0) {
    func_0x00010befa120(puVar5);
  }
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  _objc_retain(puVar5);
  puVar14 = puVar5;
  func_0x00010bf52a60();
  if (puVar14 != (undefined *)0x0) {
    lVar11 = *plStack_3c0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_3c0 != lVar11) {
          _objc_enumerationMutation(puVar5);
        }
        func_0x00010c26ac40(*(undefined8 *)(lStack_3c8 + (long)puVar16 * 8));
        puVar16 = puVar16 + 1;
      } while (puVar14 != puVar16);
      puVar14 = puVar5;
      puVar10 = &uStack_3d0;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(puVar3 + 0x60);
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79c0();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar8 = (undefined1 *)puVar10;
  func_0x00010bfce400(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c13ac00(puVar5);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1063c1938; end: 1063c1b6b; -[SCCompositeAdDataSource teardown] */

void FUN_1063c1938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar8);
  lVar9 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_1a0,auStack_d8,0x10);
  if (lVar9 != 0) {
    lVar10 = *plStack_190;
    do {
      lVar12 = 0;
      do {
        if (*plStack_190 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0dff20(uVar1,param_2,*(undefined8 *)(lStack_198 + lVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26ac40();
        _objc_release(uVar1);
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      lVar9 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_1a0,auStack_d8,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar8);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010befa120(puVar2);
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_1e0,auStack_158,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar9 = *plStack_1d0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1d0 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c26ac40(*(undefined8 *)(lStack_1d8 + (long)puVar11 * 8));
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = puVar2;
      puVar7 = &uStack_1e0;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1e0,auStack_158,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79c0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bfce400(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f20(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c13ac00(puVar2,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1063c1b6c; end: 1063c1bff; -[SCCompositeAdDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1063c1b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f20(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13ac00(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c1c00; end: 1063c1ca7; -[SCCompositeAdDataSource postResolvePlaylistItemGroupWithResolver:] */

void FUN_1063c1c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf7f20(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c104f80(lVar3,param_2,param_3);
  func_0x00010c104f80(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1063c1ca8; end: 1063c1d23; -[SCCompositeAdDataSource loadMediaForPlaylistItemGroup:] */

void FUN_1063c1ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f20(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c09b940(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c1d24; end: 1063c1e97; -[SCCompositeAdDataSource pageDataForDataModel:completion:] */

void FUN_1063c1d24(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca218;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c280580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bdf7f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f0e80(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063c1e98; end: 1063c1f0f;  */

void FUN_1063c1e98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010bee5440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063c1f10; end: 1063c201f; -[SCCompositeAdDataSource _updatedPageDataWithData:] */

void FUN_1063c1f10(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9e18;
  _objc_alloc(PTR_PTR_1126c9e18);
  lVar2 = param_3;
  func_0x00010c0f1980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar1,param_2,lVar2);
  puVar3 = puVar1;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  lVar4 = *(long *)(param_1 + 0x80);
  func_0x00010c0f1b20(lVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x00010c288280(lVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  func_0x00010be6f0c0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063c2020; end: 1063c20ff; -[SCCompositeAdDataSource _pageDataWithSortedOperaLayers:] */

void FUN_1063c2020(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0f1980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = param_3;
    func_0x00010c0f1980();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    FUN_10642a6dc(puVar2);
    puVar1 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    puVar3 = param_3;
    func_0x00010bf0d180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033240(puVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063c2100; end: 1063c212f; -[SCCompositeAdDataSource setAdPageRegistry:] */

void FUN_1063c2100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063c2130; end: 1063c21ab; -[SCCompositeAdDataSource removeMediaForItem:] */

void FUN_1063c2130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c12d120(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c21ac; end: 1063c23af; -[SCCompositeAdDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1063c21ac(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf7f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar2 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf53fa0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b3e90;
    func_0x00010befdea0(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    puVar4 = puVar1;
    (**(code **)(param_5 + 0x10))(param_5,1,puVar1,0);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    puVar4 = param_3;
    uVar5 = param_4;
    puVar6 = param_5;
    func_0x00010c109b20(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(puVar6);
  _objc_retain(uVar5);
  _objc_retain(puVar4);
  func_0x00010c251940(uVar8);
  func_0x00010c251940(*(undefined8 *)(param_3 + 0x58));
  _objc_release(puVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1063c23b0; end: 1063c243f; -[SCCompositeAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

void FUN_1063c23b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c251940(uVar1,param_2,param_3,param_4,param_5);
  func_0x00010c251940(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c2440; end: 1063c24ab; -[SCCompositeAdDataSource startViewingPlaylistItem:page:] */

void FUN_1063c2440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c251920(uVar1,param_2,param_3,param_4);
  func_0x00010c251920(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c24ac; end: 1063c2507; -[SCCompositeAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

void FUN_1063c24ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c256ee0(uVar1,param_2,param_3,param_4);
  func_0x00010c256ee0(*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c2508; end: 1063c2557; -[SCCompositeAdDataSource stopViewingPlaylistItemGroupId:] */

void FUN_1063c2508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c256ec0(uVar1,param_2,param_3);
  func_0x00010c256ec0(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c2558; end: 1063c255f; -[SCCompositeAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063c2558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_stopViewingOptOutInterstitialFor_1126735d0);
  return;
}



/* Entry: 1063c2560; end: 1063c2567; -[SCCompositeAdDataSource startViewingPlaylistChapterId:currentItem:] */

void FUN_1063c2560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2518f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_startViewingPlaylistChapterId_cu_112672060);
  return;
}



/* Entry: 1063c2568; end: 1063c25eb; -[SCCompositeAdDataSource adSnapIndexForItem:] */

undefined8 FUN_1063c2568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef53c0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}


