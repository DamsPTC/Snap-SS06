/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107238c2c; end: 107238e53;  */

void FUN_107238c2c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = param_2;
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar16;
  func_0x00010c08fa60();
  _objc_release(lVar16);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    puVar2 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    if (puVar17 == (undefined *)0x0) goto LAB_107238e18;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f0d6b8;
    puVar2 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar17 = param_2;
    puStack_78 = puVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar17;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined **)(lVar16 + 0x28) = puVar4;
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f0d6b8;
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f0dcf8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = puVar17;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_50 = uVar14;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar15 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined **)(lVar16 + 0x28) = puVar4;
    _objc_release(uVar15);
    _objc_release(uVar14);
  }
  _objc_release(uVar3);
  _objc_release(puVar17);
  _objc_release(puVar2);
LAB_107238e18:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107238e54;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar18);
  puVar2 = puVar18;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010c08fa60();
  puVar4 = puVar18;
  if (puVar17 == (undefined *)0x0) {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25b6c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f0dcf8;
  puVar2 = puVar18;
  puStack_100 = puVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar17 = puVar18;
  puStack_f8 = puVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar17;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  _objc_release(puVar17);
  _objc_release(puVar2);
  puVar17 = *(undefined **)(param_2 + 0x20);
  puVar2 = PTR_PTR_1126c11f8;
  func_0x00010c14bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar2);
  if ((int)puVar17 != 0) {
    puVar2 = puVar18;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010c0e1a60();
    _objc_release(puVar2);
    if (puVar17 == (undefined *)0x0) {
      puVar2 = puVar18;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238c20();
      _objc_release(puVar2);
    }
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar17);
  }
  puVar5 = puVar6;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28) = puVar5;
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar5 = puVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1072390b0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(puVar5 + 0x20);
  lVar1 = *(long *)(puVar5 + 0x28);
  puStack_140 = param_2;
  puStack_138 = puVar18;
  ppuStack_130 = &puStack_a0;
  func_0x000107d249d0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110f0dcf8;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_160 = lVar7;
  lStack_158 = lVar7;
  lStack_150 = lVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(puVar5 + 0x30) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar5 + 0x30) + 8) + 0x28) = puVar18;
  _objc_release(uVar3);
  lVar16 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10723918c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar1;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar17;
  puStack_1b0 = puVar6;
  puStack_1a8 = puVar4;
  lStack_1a0 = lVar7;
  puStack_198 = puVar5;
  ppuStack_190 = &ppuStack_130;
  _objc_retain(lVar1);
  lVar7 = lVar1;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (lVar10 == 0) {
    uVar3 = *(undefined8 *)(lVar16 + 0x20);
    lVar11 = *(long *)(lVar16 + 0x28);
    plVar12 = *(long **)(lVar16 + 0x30);
    pppuVar13 = *(undefined ****)(lVar16 + 0x38);
    uVar14 = *(undefined8 *)(lVar16 + 0x40);
    FUN_107239320(uVar3,lVar11,plVar12,pppuVar13,uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(*(long *)(lVar16 + 0x48) + 8);
    lVar7 = *(long *)(lVar16 + 0x28);
    *(undefined8 *)(lVar16 + 0x28) = uVar3;
  }
  else {
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110f0d978;
    lVar7 = lVar1;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    plVar12 = &lStack_1d0;
    pppuVar13 = &ppuStack_1d8;
    uVar14 = 1;
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_1d0 = lVar9;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(*(long *)(lVar16 + 0x48) + 8);
    uVar3 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined **)(lVar16 + 0x28) = puVar18;
    _objc_release(uVar3);
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(plVar12);
  lVar16 = lVar1;
  func_0x000107d267d0(lVar1,lVar11,pppuVar13,uVar14);
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar18 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar18);
    lVar11 = lVar1;
    func_0x00010bf0e700(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar11);
    puVar18 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar16);
  _objc_release(plVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  FUN_107239320(uVar3,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
                *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(lVar1 + 0x48) + 8);
  uVar14 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 107238e54; end: 1072390af;  */

void FUN_107238e54(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar17 = param_2;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010c08fa60();
  puVar1 = param_2;
  if (puVar16 == (undefined *)0x0) {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25b6c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar17);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f0dcf8;
  puVar17 = param_2;
  puStack_70 = puVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar16 = param_2;
  puStack_68 = puVar17;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar16;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar16);
  _objc_release(puVar17);
  puVar16 = *(undefined **)(param_1 + 0x20);
  puVar17 = PTR_PTR_1126c11f8;
  func_0x00010c14bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar17);
  if ((int)puVar16 != 0) {
    puVar17 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c0e1a60();
    _objc_release(puVar17);
    if (puVar16 == (undefined *)0x0) {
      puVar17 = param_2;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238c20();
      _objc_release(puVar17);
    }
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar16);
  }
  puVar2 = puVar3;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar2;
  _objc_release(uVar14);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_1072390b0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(puVar2 + 0x20);
  lVar10 = *(long *)(puVar2 + 0x28);
  lStack_b0 = param_1;
  puStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107d249d0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0dcf8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_d0 = lVar4;
  lStack_c8 = lVar4;
  lStack_c0 = lVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x30) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar2 + 0x30) + 8) + 0x28) = puVar5;
  _objc_release(uVar14);
  lVar15 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_10723918c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar10;
  puStack_130 = puVar17;
  puStack_128 = puVar16;
  puStack_120 = puVar3;
  puStack_118 = puVar1;
  lStack_110 = lVar4;
  puStack_108 = puVar2;
  ppuStack_100 = &puStack_a0;
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  if (lVar8 == 0) {
    uVar14 = *(undefined8 *)(lVar15 + 0x20);
    lVar9 = *(long *)(lVar15 + 0x28);
    plVar11 = *(long **)(lVar15 + 0x30);
    pppuVar12 = *(undefined ****)(lVar15 + 0x38);
    uVar13 = *(undefined8 *)(lVar15 + 0x40);
    FUN_107239320(uVar14,lVar9,plVar11,pppuVar12,uVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x48) + 8);
    lVar4 = *(long *)(lVar15 + 0x28);
    *(undefined8 *)(lVar15 + 0x28) = uVar14;
  }
  else {
    ppuStack_148 = &PTR____CFConstantStringClassReference_110f0d978;
    lVar4 = lVar10;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    plVar11 = &lStack_140;
    pppuVar12 = &ppuStack_148;
    uVar13 = 1;
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_140 = lVar7;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(*(long *)(lVar15 + 0x48) + 8);
    uVar14 = *(undefined8 *)(lVar15 + 0x28);
    *(undefined **)(lVar15 + 0x28) = puVar17;
    _objc_release(uVar14);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(plVar11);
  lVar15 = lVar10;
  func_0x000107d267d0(lVar10,lVar9,pppuVar12,uVar13);
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar17 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar16);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar17);
    lVar9 = lVar10;
    func_0x00010bf0e700(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar9);
    puVar17 = puVar16;
    func_0x00010bf51e00(puVar16);
    _objc_release(puVar16);
  }
  _objc_release(lVar15);
  _objc_release(plVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  ___stack_chk_fail();
  uVar14 = *(undefined8 *)(lVar10 + 0x20);
  FUN_107239320(uVar14,*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x30),
                *(undefined8 *)(lVar10 + 0x38),*(undefined8 *)(lVar10 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(lVar10 + 0x48) + 8);
  uVar13 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 1072390b0; end: 10723918b;  */

void FUN_1072390b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x000107d249d0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar15;
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = lVar8;
  _objc_retain(lVar8);
  lVar14 = lVar8;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar14);
  if (lVar4 == 0) {
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    lVar12 = *(long *)(lVar1 + 0x28);
    plVar9 = *(long **)(lVar1 + 0x30);
    pppuVar10 = *(undefined ****)(lVar1 + 0x38);
    uVar11 = *(undefined8 *)(lVar1 + 0x40);
    FUN_107239320(uVar13,lVar12,plVar9,pppuVar10,uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(*(long *)(lVar1 + 0x48) + 8);
    lVar14 = *(long *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar13;
  }
  else {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0d978;
    lVar14 = lVar8;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    plVar9 = &lStack_b0;
    pppuVar10 = &ppuStack_b8;
    uVar11 = 1;
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_b0 = lVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(*(long *)(lVar1 + 0x48) + 8);
    uVar13 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined **)(lVar1 + 0x28) = puVar15;
    _objc_release(uVar13);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(plVar9);
  lVar1 = lVar8;
  func_0x000107d267d0(lVar8,lVar12,pppuVar10,uVar11);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar15 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar15);
    lVar12 = lVar8;
    func_0x00010bf0e700(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar12);
    puVar15 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  _objc_release(plVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(lVar8 + 0x20);
  FUN_107239320(uVar13,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30),
                *(undefined8 *)(lVar8 + 0x38),*(undefined8 *)(lVar8 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(lVar8 + 0x48) + 8);
  uVar11 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 10723918c; end: 10723931f;  */

void FUN_10723918c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain(param_2);
  lVar9 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  if (lVar11 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    lVar12 = *(long *)(param_1 + 0x28);
    plVar5 = *(long **)(param_1 + 0x30);
    pppuVar6 = *(undefined ****)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    FUN_107239320(uVar8,lVar12,plVar5,pppuVar6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    lVar9 = *(long *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = uVar8;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0d978;
    lVar9 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar10;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = &lStack_50;
    pppuVar6 = &ppuStack_58;
    uVar7 = 1;
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = lVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar8 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar13;
    _objc_release(uVar8);
    _objc_release(lVar1);
    _objc_release(lVar10);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(plVar5);
  lVar9 = param_2;
  func_0x000107d267d0(param_2,lVar12,pppuVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar13 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar13);
    lVar12 = param_2;
    func_0x00010bf0e700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar12);
    puVar13 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar9);
  _objc_release(plVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  FUN_107239320(uVar8,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(param_2 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107239320; end: 10723954b;  */

void FUN_107239320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  lVar8 = param_1;
  func_0x000107d267d0(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar9 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    lVar4 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar4);
    puVar9 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_107239320(uVar5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10723954c; end: 1072396b3;  */

void FUN_10723954c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_107239320(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1072396b4; end: 107239847;  */

void FUN_1072396b4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar8);
  if (lVar6 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    FUN_107239320(uVar4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    lVar8 = *(long *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar4;
  }
  else {
    lVar8 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar2;
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(lVar7);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  FUN_107239320(uVar4,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_2 + 0x48) + 8);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107239848; end: 10723988f;  */

void FUN_107239848(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_107239320(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107239890; end: 1072398ab;  */

void FUN_107239890(void)

{
  return;
}



/* Entry: 1072398ac; end: 107239947; -[SCStoriesAutoProgressingConfiguration initWithCanEnableInfiniteImageAutoProgressing:minimumPhotoLength:canEnableTimedImageAutoProgressing:shouldOverrideTimedImageDuration:canEnableInfiniteVideoAutoProgressing:minimumVideoLength:overrideMaxLoop:canEnableBounceVideoAutoProgressing:bounceVideoCount:] */

void FUN_1072398ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f8ca8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_10;
    *(undefined8 *)((long)puVar1 + 0x28) = param_12;
  }
  return;
}



/* Entry: 107239948; end: 10723996b; -[SCStoriesAutoProgressingConfiguration copyWithZone:] */

undefined8 FUN_107239948(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10723996c; end: 107239973; -[SCStoriesAutoProgressingConfiguration canEnableInfiniteImageAutoProgressing] */

undefined1 FUN_10723996c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107239974; end: 10723997b; -[SCStoriesAutoProgressingConfiguration minimumPhotoLength] */

undefined4 FUN_107239974(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10723997c; end: 107239983; -[SCStoriesAutoProgressingConfiguration canEnableTimedImageAutoProgressing] */

undefined1 FUN_10723997c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107239984; end: 10723998b; -[SCStoriesAutoProgressingConfiguration shouldOverrideTimedImageDuration] */

undefined1 FUN_107239984(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10723998c; end: 107239993; -[SCStoriesAutoProgressingConfiguration canEnableInfiniteVideoAutoProgressing] */

undefined1 FUN_10723998c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107239994; end: 10723999b; -[SCStoriesAutoProgressingConfiguration minimumVideoLength] */

undefined8 FUN_107239994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10723999c; end: 1072399a3; -[SCStoriesAutoProgressingConfiguration overrideMaxLoop] */

undefined8 FUN_10723999c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1072399a4; end: 1072399ab; -[SCStoriesAutoProgressingConfiguration canEnableBounceVideoAutoProgressing] */

undefined1 FUN_1072399a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1072399ac; end: 1072399b3; -[SCStoriesAutoProgressingConfiguration bounceVideoCount] */

undefined8 FUN_1072399ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1072399b4; end: 107239a57; -[SCDSAExplainerPlugin initWithDSAExplainerScopeExposer:dsaExplainerScopeServices:] */

undefined1 *
FUN_1072399b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8cb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107239a58; end: 107239a5b; -[SCDSAExplainerPlugin setPlaylistItemController:] */

void FUN_107239a58(void)

{
  return;
}



/* Entry: 107239a5c; end: 107239abb; -[SCDSAExplainerPlugin setOperaControlling:] */

void FUN_107239a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107239abc; end: 107239b3f; -[SCDSAExplainerPlugin operaViewDidSendEvent:page:params:] */

void FUN_107239abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2d30;
  _objc_retain(param_3);
  func_0x00010bf8ac60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb8990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDSAExplainer_11258bc08);
    return;
  }
  return;
}



/* Entry: 107239b40; end: 107239bd3; -[SCDSAExplainerPlugin registeredEventsForOperaSession] */

void FUN_107239b40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf8ac60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(puVar1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(puVar1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107239bd4; end: 107239c1b; -[SCDSAExplainerPlugin didCompleteDSAExplainerScope:] */

void FUN_107239bd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107239c1c; end: 107239cd7; -[SCDSAExplainerPlugin _showDSAExplainer] */

void FUN_107239c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar2,param_2,lVar1,1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf23ce0(uVar3,param_2,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107239cd8; end: 107239d0f; -[SCDSAExplainerPlugin .cxx_destruct] */

void FUN_107239cd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107239d10; end: 107239d53;  */

void FUN_107239d10(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107239d54; end: 10723a017;  */

uint FUN_107239d54(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c3320;
  func_0x00010c0729e0();
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071060();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar6 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      lVar8 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfebfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
    }
    else {
      _objc_retain(lVar7);
      lVar9 = lVar7;
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = lVar9;
    func_0x000100bf119c(lVar9);
    _objc_retain(param_1);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    uVar3 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(uVar3);
    bVar1 = *(byte *)(puStack_78 + 3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(param_1);
    uVar3 = uVar5;
    func_0x00010c0720c0(uVar5);
    uVar10 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000107d294ec();
    _objc_release(uVar10);
    uVar12 = (uint)uVar4 & (uint)lVar6 & ((uint)uVar3 ^ 1) & ((uint)uVar11 ^ 1) & (uint)bVar1;
    _objc_release(lVar9);
    _objc_release(uVar5);
  }
  else {
    uVar12 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar12;
}



/* Entry: 10723a018; end: 10723a1bb; -[SCStoriesOperaSaveFriendStoryPlugin initWithSavedStorySender:conversationDestinationParser:notificationPool:performerProvider:] */

undefined8 *
FUN_10723a018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f8cb8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10723a1bc; end: 10723a203;  */

void FUN_10723a1bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10723a204; end: 10723a207; -[SCStoriesOperaSaveFriendStoryPlugin setPlaylistItemController:] */

void FUN_10723a204(void)

{
  return;
}



/* Entry: 10723a208; end: 10723a29b; -[SCStoriesOperaSaveFriendStoryPlugin registeredEventsForOperaSession] */

void FUN_10723a208(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [8];
  ulong uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar15 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c14a6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar15);
  _objc_retain(uVar17);
  _objc_retain(param_5);
  ppuVar3 = (undefined **)PTR_PTR_1126b2d30;
  func_0x00010c14a6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)ppuVar15;
  ppuVar16 = ppuVar3;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  if ((int)puVar4 != 0) {
    uVar5 = uVar17;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = &PTR____CFConstantStringClassReference_110dcadf8;
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    param_2 = PTR_PTR_1126b5bc0;
    _objc_opt_class();
    uVar7 = uVar6;
    _objc_opt_isKindOfClass();
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    if (uVar5 != 0) {
      uVar7 = uVar6;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar8;
      func_0x00010c08fa60();
      if (uVar7 != 0) {
        uVar7 = uVar17;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c067fc0();
        _objc_release(uVar9);
        _objc_release(uVar7);
        puVar2 = PTR_PTR_1126b01c0;
        func_0x00010c294260();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_a8,puVar1);
        uVar11 = *(undefined8 *)(puVar1 + 0x10);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_a0 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar11;
        func_0x00010c246920(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_10723a5d4;
        puStack_c8 = &UNK_110859da8;
        param_2 = auStack_a8;
        _objc_copyWeak(auStack_b8);
        _objc_retain(uVar6);
        uVar14 = *(undefined8 *)(puVar1 + 0x20);
        uStack_c0 = uVar5;
        uStack_b0 = uVar10;
        func_0x00010c269d40(uVar14);
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = &puStack_e0;
        func_0x00010c297260(uVar13);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(puVar12);
        _objc_release(uVar11);
        _objc_release(uStack_c0);
        _objc_destroyWeak(auStack_b8);
        _objc_destroyWeak(auStack_a8);
        _objc_release(puVar2);
      }
      _objc_release(uVar8);
    }
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  if ((param_2 != (undefined *)0x0) && (ppuVar16 == (undefined **)0x0)) {
    _objc_retain(param_2);
    puVar4 = (undefined1 *)((long)ppuVar15 + 0x28);
    _objc_loadWeakRetained(puVar4);
    func_0x00010be991e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10723a29c; end: 10723a5d3; -[SCStoriesOperaSaveFriendStoryPlugin operaViewDidSendEvent:page:params:] */

void FUN_10723a29c(long param_1,undefined *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = (undefined **)PTR_PTR_1126b2d30;
  func_0x00010c14a6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  ppuVar14 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110dcadf8;
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    param_2 = PTR_PTR_1126b5bc0;
    _objc_opt_class();
    uVar5 = uVar4;
    _objc_opt_isKindOfClass();
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      uVar5 = uVar4;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c08fa60();
      if (uVar5 != 0) {
        uVar5 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c067fc0();
        _objc_release(uVar7);
        _objc_release(uVar5);
        puVar9 = PTR_PTR_1126b01c0;
        func_0x00010c294260();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_78,param_1);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010c246920(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_10723a5d4;
        puStack_98 = &UNK_110859da8;
        param_2 = auStack_78;
        _objc_copyWeak(auStack_88);
        _objc_retain(uVar4);
        uVar13 = *(undefined8 *)(param_1 + 0x20);
        uStack_90 = uVar3;
        uStack_80 = uVar8;
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = &puStack_b0;
        func_0x00010c297260(uVar12);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(puVar11);
        _objc_release(uVar10);
        _objc_release(uStack_90);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_78);
        _objc_release(puVar9);
      }
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  if ((param_2 != (undefined *)0x0) && (ppuVar14 == (undefined **)0x0)) {
    _objc_retain(param_2);
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    func_0x00010be991e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10723a5d4; end: 10723a637;  */

void FUN_10723a5d4(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be991e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10723a638; end: 10723a91b; -[SCStoriesOperaSaveFriendStoryPlugin _saveFriendStory:viewLocation:sortedConversations:] */

void FUN_10723a638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x000108534ac8(param_4);
  func_0x00010be23100(param_1);
  puVar1 = PTR_PTR_1126b6080;
  _objc_alloc(PTR_PTR_1126b6080);
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04db40(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2aa660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar2 = param_5;
  func_0x00010bf026a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c2ba520(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c14a6c0(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10723a91c; end: 10723a9b7;  */

void FUN_10723a91c(long param_1,long param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10723a9b8;
  puStack_38 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  uStack_28 = param_2 == 0;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 10723a9b8; end: 10723a9eb;  */

void FUN_10723a9b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7efa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10723a9ec; end: 10723aaa3; -[SCStoriesOperaSaveFriendStoryPlugin _presentToastWithSuccess:] */

void FUN_10723a9ec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if (param_3 == 0) {
    func_0x00010723b0dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10723b0c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar2,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10723aaa4; end: 10723aaff; -[SCStoriesOperaSaveFriendStoryPlugin _createPerformerWithPerformerProvider:] */

void FUN_10723aaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10723ab00; end: 10723ac0b; -[SCStoriesOperaSaveFriendStoryPlugin _getStoryTypeSpecificFromStory:] */

undefined8 FUN_10723ab00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  uVar1 = param_3;
  func_0x00010bf0e700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10723ac0c; end: 10723ac4f;  */

void FUN_10723ac0c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(undefined8 *)(&UNK_10de20c40 + param_2 * 8);
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 10723ac50; end: 10723ac97; -[SCStoriesOperaSaveFriendStoryPlugin .cxx_destruct] */

void FUN_10723ac50(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10723ac98; end: 10723ad93; -[SCStoriesOperaSaveFriendStoryPluginProvider initWithSavedStorySender:conversationDestinationParser:notificationPool:performerProvider:] */

undefined1 *
FUN_10723ac98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8cc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10723ad94; end: 10723adc7; -[SCStoriesOperaSaveFriendStoryPluginProvider createSaveFriendStoryOperaPlugin] */

void FUN_10723ad94(void)

{
  _objc_alloc(PTR_PTR_1126d53f0);
  func_0x00010c041660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10723adc8; end: 10723ae0f; -[SCStoriesOperaSaveFriendStoryPluginProvider .cxx_destruct] */

void FUN_10723adc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10723ae10; end: 10723aef3; -[SCStoriesOperaSaveFriendStoryPluginServiceProvider provide] */

void FUN_10723ae10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d53f8;
  _objc_alloc(PTR_PTR_1126d53f8);
  func_0x00010c041540();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10723aef4; end: 10723af33;  */

void FUN_10723aef4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10723af34; end: 10723b067; -[SCStoriesOperaSaveFriendStoryPluginServiceProvider _createPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10723af34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126d5400;
  _objc_alloc(PTR_PTR_1126d5400);
  lVar2 = param_1 + _DAT_112765e1c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c14bca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112765e20;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112765e24;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112765e28;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041660(puVar1,param_2,lVar3,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10723b068; end: 10723b0c3; -[SCStoriesOperaSaveFriendStoryPluginServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10723b068(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112765e24);
  _objc_destroyWeak(param_1 + _DAT_112765e28);
  _objc_destroyWeak(param_1 + _DAT_112765e20);
  _objc_destroyWeak(param_1 + _DAT_112765e1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112765e2c);
  return;
}



/* Entry: 10723b0c4; end: 10723b0f3;  */

void FUN_10723b0c4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3218;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea3218,
                      &PTR____CFConstantStringClassReference_110ea3238,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10723b0f4; end: 10723b167; -[SCSavedStorySendingServices initWithSavedStorySender:] */

undefined1 * FUN_10723b0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8cc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10723b168; end: 10723b16f; -[SCSavedStorySendingServices savedStorySender] */

undefined8 FUN_10723b168(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10723b170; end: 10723b17b; -[SCSavedStorySendingServices .cxx_destruct] */

void FUN_10723b170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10723b17c; end: 10723c743;  */

undefined *
FUN_10723b17c(undefined *param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,int param_7,int param_8,byte param_9)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  long lVar49;
  undefined *puVar50;
  long lVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined8 uVar59;
  undefined *puVar60;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_170;
  
  lVar49 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar58 = PTR_PTR_1126b2378;
  puVar3 = param_1;
  func_0x00010bf4e860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_2;
  func_0x000108536f70();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = param_2;
  func_0x00010853723c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puStack_170;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_170);
    puStack_170 = puVar4;
  }
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c067fc0();
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x000107d249d0(param_1,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf24fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c08fa60();
  if (puVar6 != (undefined *)0x0) {
    _objc_retain(puVar7);
    _objc_release(puVar4);
    puVar4 = puVar7;
  }
  puVar6 = puVar4;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    puVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar9 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar6);
    puVar6 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar8);
    puVar8 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    if (puVar8 != (undefined *)0x0) {
      puVar6 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar6;
    }
  }
  _objc_retain(param_1);
  _objc_retain(param_2);
  if ((((puVar5 + -0x49 < (undefined *)0x1a) &&
       ((1L << ((ulong)(puVar5 + -0x49) & 0x3f) & 0x2020001U) != 0)) ||
      ((uVar1 = (ulong)(puVar5 + -0x57) >> 1, (uVar1 | (long)(puVar5 + -0x57) << 0x3f) < 8 &&
       ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)))) ||
     (((puVar5 + -0x42 < (undefined *)0x2a &&
       ((1L << ((ulong)(puVar5 + -0x42) & 0x3f) & 0x3c000100701U) != 0)) || ((param_9 & 1) != 0))))
  {
    lVar52 = 0x19;
    goto LAB_10723b424;
  }
  if ((long)puVar5 < 0x48) {
    if ((long)puVar5 < 0x15) {
      if (puVar5 == (undefined *)0x7) {
LAB_10723c66c:
        puVar6 = param_1;
        func_0x000108539d58();
        if (((ulong)puVar6 & 1) != 0) {
          lVar52 = 0x1b;
          goto LAB_10723b424;
        }
        if ((long)puVar5 < 0x39) {
          if (puVar5 == (undefined *)0x7) goto LAB_10723c634;
          if (puVar5 == (undefined *)0x15) goto LAB_10723c6f0;
        }
        else {
          if (puVar5 == (undefined *)0x39) goto LAB_10723c6bc;
          if (puVar5 == (undefined *)0x46) goto LAB_10723b900;
          if (puVar5 == (undefined *)0x48) goto LAB_10723c6a4;
        }
      }
      else if (puVar5 == (undefined *)0x14) {
        lVar52 = 0x1a;
        goto LAB_10723b424;
      }
    }
    else {
      if (puVar5 == (undefined *)0x15) {
LAB_10723c6f0:
        lVar52 = 0x12;
        goto LAB_10723b424;
      }
      if (puVar5 == (undefined *)0x39) {
LAB_10723c6bc:
        lVar52 = 10;
        goto LAB_10723b424;
      }
      if (puVar5 == (undefined *)0x46) {
LAB_10723b900:
        lVar52 = 0x1d;
        goto LAB_10723b424;
      }
    }
  }
  else {
    if (0x54 < (long)puVar5) {
      if (puVar5 == (undefined *)0x55) {
        lVar52 = 0x1e;
        goto LAB_10723b424;
      }
      if (puVar5 == (undefined *)0x59) {
        lVar52 = 0x21;
        goto LAB_10723b424;
      }
      if (puVar5 != (undefined *)0x67) goto LAB_10723c6fc;
LAB_10723c634:
      lVar52 = 9;
      goto LAB_10723b424;
    }
    if (puVar5 == (undefined *)0x48) {
LAB_10723c6a4:
      puVar6 = param_1;
      func_0x00010853a5d4();
      if (((ulong)puVar6 & 1) != 0) {
        lVar52 = 0x1f;
        goto LAB_10723b424;
      }
    }
    else if (puVar5 == (undefined *)0x54) goto LAB_10723c66c;
  }
LAB_10723c6fc:
  puVar6 = param_1;
  func_0x00010853a5d4();
  if ((int)puVar6 == 0) {
    puVar6 = param_2;
    func_0x000108536b9c();
    iVar2 = (int)puVar6;
    lVar51 = 0xc;
    lVar52 = 10;
  }
  else {
    puVar6 = puVar5;
    func_0x000108f4b9b8();
    iVar2 = (int)puVar6;
    lVar51 = 0x19;
    lVar52 = 0x23;
  }
  if (iVar2 == 0) {
    lVar52 = lVar51;
  }
LAB_10723b424:
  _objc_release(param_2);
  _objc_release(param_1);
  puVar6 = param_1;
  func_0x00010853c32c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c131c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x000107d2bff8();
  puVar10 = param_1;
  func_0x000107d2b30c(param_1,param_2,param_3,param_6,param_5,puVar5);
  uVar53 = (uint)puVar10;
  if (puVar9 == (undefined *)0x0) {
    puVar10 = puVar6;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08fa60();
    uVar55 = (uint)(puVar11 != (undefined *)0x0) | (uint)puVar8 & uVar53;
    _objc_release(puVar10);
  }
  else {
    uVar55 = 1;
  }
  if (param_7 != 0) {
    puVar8 = param_2;
    func_0x000108536dd4();
    switch(lVar52) {
    case 9:
    case 0xb:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      uVar53 = 0;
      break;
    case 10:
    case 0xd:
      uVar53 = uVar53 | (uint)puVar8;
      break;
    case 0xf:
    case 0x10:
    case 0x14:
    case 0x18:
      uVar53 = 1;
      break;
    case 0x12:
      uVar53 = (uint)puVar8;
    }
  }
  uVar54 = uVar53;
  if ((param_8 != 0) && (uVar12 = param_5, func_0x00010bf1f440(), uVar54 = uVar55, (int)uVar12 == 0)
     ) {
    uVar54 = uVar53;
  }
  puVar8 = param_1;
  func_0x000109017f30(param_1,param_2,param_3,(lVar52 != 0x19 | uVar55) & uVar54 & 1,param_5,puVar5,
                      param_6);
  if (puVar8 != (undefined *)0x0) {
    func_0x00010853a5d4();
  }
  if ((puVar5 == (undefined *)0x59) || (puVar5 == (undefined *)0x54)) {
    uVar12 = param_5;
    func_0x000108f4887c();
    iVar2 = (int)uVar12;
  }
  else {
    iVar2 = 0;
  }
  if ((puVar5 != (undefined *)0x62) && (puVar5 != (undefined *)0x65)) {
    func_0x000107d2c240(param_1,param_2);
  }
  _objc_retain(param_1);
  uVar12 = param_5;
  func_0x00010bf1f440();
  if ((int)uVar12 != 0) {
    func_0x00010c07dce0();
  }
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126b2370;
  _objc_alloc();
  puVar8 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar10 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar11 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c07f520();
  func_0x00010c07d2c0();
  func_0x00010c01f560();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x000108532b98();
  _objc_release(puVar8);
  if (puVar3 == (undefined *)0x0) {
    if (iVar2 == 0) {
      puStack_1a0 = (undefined *)0x0;
    }
    else {
      puStack_1a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_198 = (undefined *)0x0;
  }
  else {
    puVar8 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126d5408;
    if (puVar11 == (undefined *)0x0) {
      puStack_198 = (undefined *)0x0;
    }
    else {
      puVar11 = param_1;
      func_0x00010bf5b080(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar56 = puVar11;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292680(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar56);
      _objc_release(puVar11);
      puStack_198 = PTR_PTR_1126d5410;
      _objc_alloc();
      puVar11 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c04ef80();
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
    puStack_1a0 = param_2;
    func_0x00010853723c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = param_2;
  func_0x000108538cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar58;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d4e0(PTR_PTR_1126ce808);
  if (puVar6 == (undefined *)0x0) {
    puStack_1c0 = (undefined *)0x0;
    puStack_1b8 = (undefined *)0x0;
    puStack_1c8 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar56 = PTR_PTR_1126b23a0;
    if (puVar13 == (undefined *)0x0) {
      puVar56 = (undefined *)0x0;
    }
    else {
      puVar14 = puVar6;
      func_0x00010c2923e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292680(puVar56);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar56);
      _objc_release(puVar14);
    }
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126b2398;
    _objc_alloc(PTR_PTR_1126b2398);
    puVar14 = puVar6;
    func_0x00010c294420(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar6;
    func_0x00010bf85d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bcc0(puVar13);
    _objc_release(puVar15);
    _objc_release(puVar14);
    puStack_1b8 = PTR_PTR_1126b5ba0;
    _objc_alloc();
    puVar14 = puVar6;
    func_0x00010bf50280(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0748c0(puVar6);
    func_0x00010c05a6a0();
    _objc_release(puVar14);
    puStack_1c0 = puVar6;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar6;
    func_0x00010c11eb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar56);
  }
  if (puVar9 == (undefined *)0x0) {
    puStack_1d0 = (undefined *)0x0;
  }
  else {
    puStack_1d0 = PTR_PTR_1126b2388;
    _objc_alloc();
    func_0x00010c03e520();
  }
  puVar56 = PTR_PTR_1126b23a8;
  puVar13 = param_1;
  func_0x000107d2a190(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010c24b0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001085381ac(param_2);
  func_0x00010c0df880(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1;
  func_0x00010bfeb4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbafa0();
  puVar16 = param_1;
  func_0x00010c25b0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = param_1;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar60);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar9 = param_1;
  func_0x00010c0c5340(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar58;
  func_0x00010bf43580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_retain(puVar58);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar14 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar16 = puVar58;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar16;
  func_0x00010c0ca760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar60;
  func_0x00010bf529e0();
  _objc_release(puVar60);
  _objc_release(puVar16);
  if (puVar17 != (undefined *)0x0) {
    puVar16 = puVar58;
    func_0x00010bf4e420(puVar58);
    _objc_retainAutoreleasedReturnValue();
    puVar60 = puVar16;
    func_0x00010c0ca760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar13);
    _objc_release(puVar60);
    _objc_release(puVar16);
  }
  puVar16 = puVar58;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar16;
  func_0x00010c0ca760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar60;
  func_0x00010bf529e0();
  _objc_release(puVar60);
  _objc_release(puVar16);
  if (puVar17 != (undefined *)0x0) {
    puVar16 = puVar58;
    func_0x00010c27f9c0(puVar58);
    _objc_retainAutoreleasedReturnValue();
    puVar60 = puVar16;
    func_0x00010c0ca760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar13);
    _objc_release(puVar60);
    _objc_release(puVar16);
  }
  _objc_retain(puVar13);
  puVar16 = puVar13;
  func_0x00010bf52a60();
  lVar52 = lRam0000000000000000;
  while (puVar16 != (undefined *)0x0) {
    puVar60 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar52) {
        _objc_enumerationMutation(puVar13);
      }
      uVar59 = *(undefined8 *)((long)puVar60 * 8);
      uVar12 = uVar59;
      func_0x00010bfe2ee0(uVar59);
      func_0x00010c0b5940(uVar59);
      func_0x000100c4a928(uVar12,uVar59);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      func_0x00010bf4b900();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x00010befa120(puVar14);
        func_0x00010befa120(puVar9);
      }
      _objc_release(uVar12);
      puVar60 = puVar60 + 1;
    } while (puVar16 != puVar60);
    puVar16 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar58);
  puVar13 = puVar9;
  func_0x00010bf529e0();
  if (puVar13 != (undefined *)0x0) {
    func_0x00010c1c6a60(puVar15);
  }
  puVar13 = param_1;
  func_0x000107d29ec4();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2390;
  _objc_alloc();
  puVar16 = puVar14;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = PTR_PTR_1126b2380;
  _objc_alloc();
  puVar17 = param_1;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_1;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_1;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = param_1;
  func_0x00010befd0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010bfc11c0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = param_1;
  func_0x00010c2815a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c08fa60();
  if (puVar26 == (undefined *)0x0) {
    puVar50 = (undefined *)0x0;
  }
  else {
    puVar50 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    puStack_338 = param_1;
    func_0x00010c2815a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_340 = puStack_338;
    func_0x00010bf15d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
  }
  func_0x00010c0607a0();
  puVar27 = PTR_PTR_1126b2398;
  _objc_alloc();
  puVar28 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010c08fa60();
  puVar57 = PTR_PTR_1126b23a0;
  if (puVar30 == (undefined *)0x0) {
    puVar57 = (undefined *)0x0;
  }
  else {
    puStack_348 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puStack_350 = puStack_348;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292680();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar31 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar31;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x00010bf5b1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0();
  puVar35 = PTR_PTR_1126ca6f0;
  _objc_alloc();
  puVar36 = param_1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = param_1;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar37;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = param_1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = param_1;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar40;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = param_1;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  puVar43 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085330a8();
  puVar44 = param_1;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071060();
  func_0x000107d72efc();
  func_0x00010bfdacc0();
  puVar45 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar45;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = param_1;
  func_0x00010c29e300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083540();
  func_0x000107b28474(param_4,puVar10);
  func_0x000108539018();
  func_0x00010c047c00();
  puVar10 = param_1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = param_1;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c045140();
  _objc_release(puVar48);
  _objc_release(puVar10);
  _objc_release(puVar35);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar27);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  if (puVar30 != (undefined *)0x0) {
    _objc_release(puVar57);
    _objc_release(puStack_350);
    _objc_release(puStack_348);
  }
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar60);
  if (puVar26 != (undefined *)0x0) {
    _objc_release(puVar50);
    _objc_release(puStack_340);
    _objc_release(puStack_338);
  }
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_retain(puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar15);
  _objc_release(puVar56);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puStack_170);
  _objc_release(puVar3);
  _objc_release(puVar58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar49) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar58 = param_1;
  func_0x000108437ce4();
  if ((int)puVar58 == 0) {
    puVar58 = (undefined *)0x0;
  }
  else {
    puVar58 = param_1;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar58;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar58);
    if (puVar3 == (undefined *)0x0) {
      puVar58 = (undefined *)0x1;
    }
    else {
      puVar58 = puVar3;
      func_0x00010853a5d4(puVar3);
      puVar58 = (undefined *)(ulong)((uint)puVar58 ^ 1);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  return puVar58;
}



/* Entry: 10723c744; end: 10723c7d7;  */

uint FUN_10723c744(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x000108437ce4();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar3 = 1;
    }
    else {
      lVar1 = lVar2;
      func_0x00010853a5d4(lVar2);
      uVar3 = (uint)lVar1 ^ 1;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10723c7d8; end: 10723cd17;  */

void FUN_10723c7d8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3298;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea3298,
                      &PTR____CFConstantStringClassReference_110ea32b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10723cd18; end: 10723cd8b; -[SCPlaybackStreamingContentModel initWithContentResult:] */

undefined1 * FUN_10723cd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10723cd8c; end: 10723ceaf; -[SCPlaybackStreamingContentModel initWithMediaDescriptor:mediaContextType:contentBundle:] */

undefined1 *
FUN_10723cd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f8cd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126bfed8;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010bf92c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf92c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0291c0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10723ceb0; end: 10723cebf; -[SCPlaybackStreamingContentModel invalidate] */

void FUN_10723ceb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10723cec0; end: 10723cec7; -[SCPlaybackStreamingContentModel contentResult] */

undefined8 FUN_10723cec0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10723cec8; end: 10723cecf; -[SCPlaybackStreamingContentModel contentBundle] */

undefined8 FUN_10723cec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10723ced0; end: 10723ced7; -[SCPlaybackStreamingContentModel contentBundleMetadata] */

undefined8 FUN_10723ced0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10723ced8; end: 10723cedf; -[SCPlaybackStreamingContentModel overlayData] */

undefined8 FUN_10723ced8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10723cee0; end: 10723d1ff; -[SCPlaybackStreamingContentModel .cxx_destruct] */

void FUN_10723cee0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10723d200; end: 10723d2bf;  */

undefined * FUN_10723d200(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    lVar2 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      puVar4 = PTR_PTR_1126d5418;
                    /* WARNING: Could not recover jumptable at 0x00010c072a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126d5418,PTR_s_isFatalErrorWithError__1125fa4a0,param_1);
      return puVar4;
    }
    func_0x00010bf3ec40(param_1);
    bVar1 = param_1 == 3;
  }
  else {
    func_0x00010bf3ec40(param_1);
    bVar1 = param_1 == 5;
  }
  return (undefined *)(ulong)bVar1;
}



/* Entry: 10723d2c0; end: 10723d38b; -[SCOperaMediaAsset video] */

void FUN_10723d2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10723d38c;
  uStack_30 = 0x10723d39c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10723d3a8;
  puStack_60 = &UNK_1109948e0;
  puStack_48 = puStack_58;
  func_0x00010c0be4e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_1109948c0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10723d38c; end: 10723d3a7;  */

void FUN_10723d38c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10723d3a8; end: 10723d3df;  */

void FUN_10723d3a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10723d3e0; end: 10723d4ab; -[SCOperaMediaAsset image] */

void FUN_10723d3e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10723d38c;
  uStack_30 = 0x10723d39c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10723d4ac;
  puStack_60 = &UNK_11084d758;
  puStack_48 = puStack_58;
  func_0x00010c0be4e0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110994910);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10723d4ac; end: 10723d4e3;  */

void FUN_10723d4ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10723d4e4; end: 10723d4e7;  */

void FUN_10723d4e4(void)

{
  return;
}



/* Entry: 10723d4e8; end: 10723d5ab; -[SCOperaMediaAsset asyncLoadMediaSizeWithCompletion:] */

void FUN_10723d4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10723d5ac;
  puStack_50 = &UNK_11085b810;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10723d5d8;
  puStack_78 = &UNK_110994930;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0be4e0(param_1,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10723d5ac; end: 10723d683;  */

void FUN_10723d5ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c23d0a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010723d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 10723d684; end: 10723d78b;  */

void FUN_10723d684(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010c2533c0(lVar1,param_4,&PTR____CFConstantStringClassReference_110e3c5d8,0);
  if (lVar1 == 2) {
    lVar2 = *(long *)(param_3 + 0x20);
    func_0x00010c279200(lVar2,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c0d5d20(lVar1);
    if (lVar1 == 0) {
      dStack_68 = 0.0;
      dStack_78 = 0.0;
      dStack_70 = 0.0;
      dStack_80 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_80,lVar1);
    }
    dVar4 = param_2 * dStack_70 + param_1 * dStack_80;
    dVar3 = param_2 * dStack_68 + param_1 * dStack_78;
    _objc_release(lVar1);
  }
  else {
    dVar4 = *(double *)PTR__CGSizeZero_110347620;
    dVar3 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(dVar4,dVar3);
  return;
}



/* Entry: 10723d78c; end: 10723d8bf;  */

void FUN_10723d78c(undefined *param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_2 < 2) {
    if (param_2 == 0) {
      param_3 = &PTR____CFConstantStringClassReference_110ea3038;
    }
    else if (param_2 == 1) {
      puVar3 = param_1;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010c0c4280(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10723d888;
      }
      func_0x000107cd1d80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_3 = (undefined **)0x0;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
    if (param_2 != 4) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110de71b8;
    if (param_2 != 3) {
      ppuVar2 = ppuVar1;
    }
    param_3 = &PTR____CFConstantStringClassReference_110dad858;
    if (param_2 != 2) {
      param_3 = ppuVar2;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = param_1;
  func_0x00010c0c4280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
LAB_10723d888:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10723d8c0; end: 10723d917; -[SCOperaMediaBundle cacheKeyForBaseMedia] */

void FUN_10723d8c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c6c20();
  FUN_10723d78c(param_1,1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10723d918; end: 10723d96f; -[SCOperaMediaBundle cacheKeyForLoadingFrame] */

void FUN_10723d918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c6c20();
  FUN_10723d78c(param_1,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10723d970; end: 10723d9eb; -[SCOperaMediaBundle cacheKeyForOverlay] */

void FUN_10723d970(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0ef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c6c20();
    FUN_10723d78c(param_1,3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10723d9ec; end: 10723da67; -[SCOperaMediaBundle cacheKeyForSubtitle] */

void FUN_10723d9ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c260dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c6c20();
    FUN_10723d78c(param_1,2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10723da68; end: 10723daef; -[SCOperaMediaBundle cacheKeyForLayer:] */

void FUN_10723da68(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010bf26880(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 1) {
      func_0x00010bf26800(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 2) {
    func_0x00010bf268c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 3) {
    func_0x00010bf268a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10723daf0; end: 10723db3f; -[SCOperaMediaBundle isVideo] */

uint FUN_10723daf0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c6c20();
  _objc_release(param_1);
  return (uint)(10 < uVar1) | 8U >> (ulong)((uint)uVar1 & 0x1f) & 1;
}



/* Entry: 10723db40; end: 10723dc83;  */

undefined8 FUN_10723db40(undefined8 param_1,ulong param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = param_2 - 0x42;
  if (uVar2 < 0x24) {
    if ((1L << (uVar2 & 0x3f) & 0x900100701U) != 0) {
      uVar3 = 1;
      goto LAB_10723db88;
    }
    if (uVar2 == 7) {
      uVar3 = param_1;
      func_0x00010bf1f440(param_1);
      goto LAB_10723db88;
    }
  }
  if ((param_2 & 0xfffffffffffffffe) == 0x2c) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea3ab8;
  }
  else {
    uVar3 = 1;
    if (param_2 < 0x3a) {
      if ((1L << (param_2 & 0x3f) & 0x80060800080U) != 0) goto LAB_10723db88;
      if (param_2 == 8) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ea3af8;
        param_2 = 8;
      }
      else {
        if (param_2 != 0x39) goto LAB_10723dc3c;
        ppuVar1 = &PTR____CFConstantStringClassReference_110ea3ad8;
        param_2 = 0x39;
      }
    }
    else {
LAB_10723dc3c:
      if (param_2 - 0x69 < 2) goto LAB_10723db88;
      if (param_2 == 0x59) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ea3b18;
        param_2 = 0x59;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ea3b58;
      }
    }
  }
  uVar3 = param_1;
  FUN_10723dc84(param_1,param_2,ppuVar1);
LAB_10723db88:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10723dc84; end: 10723dd43;  */

undefined8 FUN_10723dc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c99b8;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x000108534aa8(param_2);
  func_0x00010c182be0(puVar1);
  puVar2 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  uVar3 = param_1;
  func_0x00010bf1f440(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10723dd44; end: 10723dd4f;  */

undefined8 FUN_10723dd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c99b8;
  _objc_retain(&PTR____CFConstantStringClassReference_110ea3b38);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x000108534aa8(param_2);
  func_0x00010c182be0(puVar1);
  puVar2 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  uVar3 = param_1;
  func_0x00010bf1f440(param_1);
  _objc_release(&PTR____CFConstantStringClassReference_110ea3b38);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10723dd50; end: 10723de4f;  */

undefined8 FUN_10723dd50(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  if ((2 < param_1 - 0x2bU) || (uVar1 = param_2, func_0x0001085394d0(), (uVar1 & 1) == 0)) {
    param_3 = 0;
  }
  _objc_release(param_2);
  return param_3;
}



/* Entry: 10723de50; end: 10723de5b;  */

undefined8 FUN_10723de50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c99b8;
  _objc_retain(&PTR____CFConstantStringClassReference_110ea3b98);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x000108534aa8(param_2);
  func_0x00010c182be0(puVar1);
  puVar2 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  uVar3 = param_1;
  func_0x00010bf1f440(param_1);
  _objc_release(&PTR____CFConstantStringClassReference_110ea3b98);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10723de5c; end: 10723e11f;  */

undefined8 FUN_10723de5c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = 1;
  if (((param_2 != 0x11) && (param_2 != 0x4b)) && (param_2 != 0x66)) {
    puVar1 = PTR_PTR_1126c99b8;
    _objc_alloc_init(PTR_PTR_1126c99b8);
    func_0x00010c182be0();
    puVar2 = PTR_PTR_1126ae780;
    _objc_alloc_init(PTR_PTR_1126ae780);
    func_0x00010c1d5760();
    uVar3 = param_1;
    func_0x00010bf1f440(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10723e120; end: 10723e193;  */

bool FUN_10723e120(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if ((param_2 == 0x62) || (param_2 == 0x56)) {
    uVar2 = param_1;
    func_0x00010c067f00(param_1);
    bVar1 = (int)uVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10723e194; end: 10723e1ab;  */

void FUN_10723e194(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10723e1ac; end: 10723e1e7;  */

void FUN_10723e1ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x0001000882bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10723e1e8; end: 10723e2c3; +[User createUser:] */

void FUN_10723e1e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5420;
  _objc_opt_class(PTR_PTR_1126d5420);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5420;
  func_0x00010c0f5800(PTR_PTR_1126d5420);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c09bd60(puVar1,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((param_3 != 0) && (puVar4 == (undefined *)0x0)) {
    puVar4 = PTR_PTR_1126d5420;
    _objc_alloc_init(PTR_PTR_1126d5420);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10723e2c4; end: 10723e3b3; -[User encodeWithCoder:] */

void FUN_10723e2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cac60,
                      &PTR____CFConstantStringClassReference_110ea3bd8);
  lVar1 = param_1;
  func_0x00010c294560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110daccd8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c2926a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110de3558);
  _objc_release(lVar1);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ea3bf8);
  func_0x00010bf3cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110ea3c18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10723e3b4; end: 10723e403; -[User init] */

undefined1 * FUN_10723e3b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8cd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bfee800(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10723e404; end: 10723e43f; -[User initFields] */

void FUN_10723e404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5158;
  _objc_alloc_init(PTR_PTR_1126d5158);
  func_0x00010c17cba0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10723e440; end: 10723e443; -[User clearUserFields:] */

void FUN_10723e440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initFields_1125d93c8);
  return;
}



/* Entry: 10723e444; end: 10723e537; -[User loginSuccessWithUserSession:] */

void FUN_10723e444(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 8) = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2926a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 != 0) && (uVar3 = uVar2, func_0x00010c0720c0(uVar2,param_2,uVar1), (uVar3 & 1) == 0)) {
    func_0x00010beeaf40(param_1,param_2,uVar1);
  }
  func_0x00010c21e680(param_1,param_2,uVar1);
  uVar4 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f7a0(param_1,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c087b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar5);
  func_0x00010c14b0c0(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10723e538; end: 10723e53f; -[User logoutUser] */

void FUN_10723e538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logoutUserWithForced__112574518,0);
  return;
}



/* Entry: 10723e540; end: 10723e547; -[User forceLogoutUser] */

void FUN_10723e540(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logoutUserWithForced__112574518,1);
  return;
}


