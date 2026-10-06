/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d07e58; end: 108d08097; -[SCUcoInfoView _setupIconImageViewLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d07e58(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auStack_268 [8];
  undefined1 uStack_260;
  undefined1 auStack_258 [8];
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11277af94;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277af84);
  func_0x00010c09cfc0();
  uVar22 = 0x403a000000000000;
  if (iVar1 == 0) {
    uVar22 = 0x4040000000000000;
  }
  uVar4 = uVar2;
  func_0x00010bf49420(uVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11277afa8;
  uVar22 = *(undefined8 *)(param_1 + lVar21);
  *(undefined8 *)(param_1 + lVar21) = uVar4;
  _objc_release(uVar22);
  _objc_release(uVar2);
  puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11277afa4;
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  lStack_88 = lVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_1 + lVar21);
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar22;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_90);
  _objc_release(puVar9);
  _objc_release(uVar22);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar18);
  _objc_release(uVar4);
  lVar17 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108d08098;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = (long)_DAT_11277af98;
  puVar10 = *(undefined **)(lVar17 + lVar20);
  uStack_f0 = uVar22;
  uStack_e8 = uVar7;
  uStack_e0 = uVar2;
  uStack_d8 = uVar6;
  uStack_d0 = uVar5;
  puStack_c8 = puVar9;
  lStack_c0 = lVar18;
  uStack_b8 = uVar8;
  uStack_b0 = uVar4;
  lStack_a8 = lVar3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (undefined *)(long)_DAT_11277afa4;
  uVar22 = *(undefined8 *)(puVar16 + lVar17);
  func_0x00010c08e400(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493c0(0x4044800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar17 + lVar20);
  puStack_108 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar16 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_118);
  _objc_release(puVar12);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(uVar22);
  _objc_release(puVar10);
  puVar13 = *(undefined **)(lVar17 + _DAT_11277af84);
  func_0x00010bf5b940();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar13;
  func_0x00010c08fa60();
  puVar14 = puVar13;
  _objc_release();
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = *(undefined **)(lVar17 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(puVar16 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar16);
    _objc_release(lVar17);
    puVar14 = puVar10;
    _objc_release();
    puVar13 = puVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108d082e4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = (long)_DAT_11277af9c;
  lVar3 = *(long *)(puVar14 + lVar18);
  lStack_180 = lVar20;
  puStack_178 = puVar12;
  uStack_170 = uVar2;
  uStack_168 = uVar5;
  uStack_160 = uVar4;
  puStack_158 = puVar11;
  puStack_150 = puVar16;
  puStack_148 = puVar10;
  puStack_140 = puVar13;
  lStack_138 = lVar17;
  ppuStack_130 = &puStack_a0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11277af98;
  uVar4 = *(undefined8 *)(puVar14 + lVar20);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar14 + lVar18);
  lStack_1a0 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar14 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar14 + lVar18);
  uStack_198 = uVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar14 + lVar20);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_190 = uVar22;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010beef8c0(puStack_1a8);
  uVar15 = SUB81(puVar11,0);
  _objc_release(puVar9);
  _objc_release(uVar22);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar17);
  _objc_release(uVar4);
  lVar18 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_1b8 = FUN_108d084bc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_11277afbc;
  lVar21 = *(long *)(lVar18 + lVar19);
  lVar20 = lVar21;
  uStack_200 = uVar2;
  uStack_1f8 = uVar8;
  uStack_1f0 = uVar6;
  puStack_1e8 = puVar9;
  uStack_1e0 = uVar5;
  lStack_1d8 = lVar17;
  uStack_1d0 = uVar4;
  lStack_1c8 = lVar3;
  ppuStack_1c0 = &ppuStack_130;
  if (lVar21 != 0) {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar18 + _DAT_11277afa4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(lVar18 + lVar19);
    lStack_218 = lVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(lVar18 + _DAT_11277af98);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar22;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_210 = uVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010beef8c0(puVar11);
    uVar15 = SUB81(puVar12,0);
    _objc_release(puVar9);
    _objc_release(uVar2);
    _objc_release(lVar18);
    _objc_release(uVar22);
    _objc_release(lVar17);
    _objc_release(uVar4);
    lVar20 = lVar21;
    _objc_release(lVar21);
    lVar3 = lVar21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_108d08638;
  puVar9 = PTR_PTR_1126ae790;
  lStack_250 = lVar18;
  lStack_248 = lVar17;
  uStack_240 = uVar4;
  lStack_238 = lVar3;
  ppuStack_230 = &ppuStack_1c0;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_258,lVar20);
  _objc_copyWeak(auStack_268,auStack_258);
  uStack_260 = uVar15;
  _objc_retain(puVar9);
  func_0x00010c0f7fc0(puVar9);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_268);
  _objc_destroyWeak(auStack_258);
  _objc_release(puVar9);
  return;
}



/* Entry: 108d08098; end: 108d082e3; -[SCUcoInfoView _setupNameLabelLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d08098(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_1d8 [8];
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [8];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = (long)_DAT_11277af98;
  puVar1 = *(undefined **)(param_1 + lVar20);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)(long)_DAT_11277afa4;
  uVar2 = *(undefined8 *)(puVar17 + param_1);
  func_0x00010c08e400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf493c0(0x4044800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  puStack_78 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar17 + param_1);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar8 = *(undefined **)(param_1 + _DAT_11277af84);
  func_0x00010bf5b940();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c08fa60();
  puVar9 = puVar8;
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = *(undefined **)(param_1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(puVar17 + param_1);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar17);
    _objc_release(param_1);
    puVar9 = puVar10;
    _objc_release();
    puVar8 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108d082e4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = (long)_DAT_11277af9c;
  lVar11 = *(long *)(puVar9 + lVar18);
  lStack_f0 = lVar20;
  puStack_e8 = puVar7;
  uStack_e0 = uVar6;
  uStack_d8 = uVar5;
  uStack_d0 = uVar4;
  puStack_c8 = puVar3;
  puStack_c0 = puVar17;
  puStack_b8 = puVar10;
  puStack_b0 = puVar8;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11277af98;
  uVar4 = *(undefined8 *)(puVar9 + lVar21);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar9 + lVar18);
  lStack_110 = lVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar9 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar9 + lVar18);
  uStack_108 = uVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar9 + lVar21);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010beef8c0(puStack_118);
  uVar16 = SUB81(puVar3,0);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(lVar20);
  _objc_release(uVar4);
  lVar18 = lVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_128 = FUN_108d084bc;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_11277afbc;
  lVar15 = *(long *)(lVar18 + lVar19);
  lVar21 = lVar15;
  uStack_170 = uVar6;
  uStack_168 = uVar14;
  uStack_160 = uVar12;
  puStack_158 = puVar1;
  uStack_150 = uVar5;
  lStack_148 = lVar20;
  uStack_140 = uVar4;
  lStack_138 = lVar11;
  ppuStack_130 = &puStack_a0;
  if (lVar15 != 0) {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar18 + _DAT_11277afa4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar18 + lVar19);
    lStack_188 = lVar20;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(lVar18 + _DAT_11277af98);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_180 = uVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010beef8c0(puVar3);
    uVar16 = SUB81(puVar7,0);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(lVar18);
    _objc_release(uVar2);
    _objc_release(lVar20);
    _objc_release(uVar4);
    lVar21 = lVar15;
    _objc_release(lVar15);
    lVar11 = lVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_108d08638;
  puVar1 = PTR_PTR_1126ae790;
  lStack_1c0 = lVar18;
  lStack_1b8 = lVar20;
  uStack_1b0 = uVar4;
  lStack_1a8 = lVar11;
  ppuStack_1a0 = &ppuStack_130;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_1c8,lVar21);
  _objc_copyWeak(auStack_1d8,auStack_1c8);
  uStack_1d0 = uVar16;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_1d8);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(puVar1);
  return;
}



/* Entry: 108d082e4; end: 108d084bb; -[SCUcoInfoView _setupAuthorLabelLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d082e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = (long)_DAT_11277af9c;
  lVar1 = *(long *)(param_1 + lVar15);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11277af98;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  lStack_80 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010beef8c0(puStack_88);
  uVar12 = SUB81(puVar13,0);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar15 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_98 = FUN_108d084bc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11277afbc;
  lVar10 = *(long *)(lVar15 + lVar16);
  lVar17 = lVar10;
  uStack_e0 = uVar6;
  uStack_d8 = uVar8;
  uStack_d0 = uVar5;
  puStack_c8 = puVar9;
  uStack_c0 = uVar4;
  lStack_b8 = lVar3;
  uStack_b0 = uVar2;
  lStack_a8 = lVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (lVar10 != 0) {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar15 + _DAT_11277afa4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar15 + lVar16);
    lStack_f8 = lVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(lVar15 + _DAT_11277af98);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f0 = uVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010beef8c0(puVar13);
    uVar12 = SUB81(puVar14,0);
    _objc_release(puVar9);
    _objc_release(uVar6);
    _objc_release(lVar15);
    _objc_release(uVar11);
    _objc_release(lVar3);
    _objc_release(uVar2);
    lVar17 = lVar10;
    _objc_release(lVar10);
    lVar1 = lVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_108d08638;
  puVar9 = PTR_PTR_1126ae790;
  lStack_130 = lVar15;
  lStack_128 = lVar3;
  uStack_120 = uVar2;
  lStack_118 = lVar1;
  ppuStack_110 = &puStack_a0;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_138,lVar17);
  _objc_copyWeak(auStack_148,auStack_138);
  uStack_140 = uVar12;
  _objc_retain(puVar9);
  func_0x00010c0f7fc0(puVar9);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar9);
  return;
}



/* Entry: 108d084bc; end: 108d08637; -[SCUcoInfoView _setupArrowIconImageViewLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d084bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11277afbc;
  lVar1 = *(long *)(param_1 + lVar8);
  lVar5 = lVar1;
  lStack_88 = unaff_x19;
  if (lVar1 != 0) {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(undefined8 *)(param_1 + _DAT_11277afa4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    lStack_68 = unaff_x21;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + _DAT_11277af98);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010beef8c0(puVar6);
    param_3 = SUB81(puVar7,0);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    lVar5 = lVar1;
    _objc_release(lVar1);
    lStack_88 = lVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108d08638;
  puVar6 = PTR_PTR_1126ae790;
  lStack_a0 = param_1;
  lStack_98 = unaff_x21;
  uStack_90 = unaff_x20;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_a8,lVar5);
  _objc_copyWeak(auStack_b8,auStack_a8);
  uStack_b0 = param_3;
  _objc_retain(puVar6);
  func_0x00010c0f7fc0(puVar6);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar6);
  return;
}



/* Entry: 108d08638; end: 108d08727; -[SCUcoInfoView _updateUcoIconWithTint:] */

void FUN_108d08638(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x21,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 108d08728; end: 108d0882b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d08728(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_11277af84;
    uVar2 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010c0fd980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94680(lVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010bfe56e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,param_1 + 0x28);
    uStack_38 = *(undefined1 *)(param_1 + 0x30);
    func_0x00010c297260(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108d0882c; end: 108d0888f;  */

void FUN_108d0882c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010be94680(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d08890; end: 108d08a4f; -[SCUcoInfoView _resizeAndSetIconImage:shouldTint:] */

void FUN_108d08890(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    lVar2 = param_4;
    func_0x00010c14e2c0(0x4040000000000000,0x4040000000000000,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar1);
    lVar4 = lVar2;
    if (param_5 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf414e0(0x3fd999999999999a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    puVar5 = auStack_48;
    _objc_initWeak(puVar5,param_2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar4);
    func_0x00010c0f7fc0(puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 108d08a50; end: 108d08a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d08a50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11277af94),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d08a94; end: 108d08d0f; -[SCUcoInfoView _setupLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d08a94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_11277af84);
  func_0x00010c09cfc0();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb80();
    lVar15 = (long)_DAT_11277afac;
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    lVar1 = (long)_DAT_11277afa4;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c274200(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4041000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4041000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar15);
    func_0x00010c24dbc0();
    *(undefined1 *)(param_1 + _DAT_11277afa0) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + _DAT_11277af88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d08d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + _DAT_11277af88) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108d08d10; end: 108d08d2b; -[SCUcoInfoView _slugViewTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d08d10(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277af88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d08d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_11277af88) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108d08d2c; end: 108d08d3b; -[SCUcoInfoView isAttributionHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d08d2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277afb0);
}



/* Entry: 108d08d3c; end: 108d08d4b; -[SCUcoInfoView isOverlayHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d08d3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af90);
}



/* Entry: 108d08d4c; end: 108d08d5b; -[SCUcoInfoView isLoadingIndicatorHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d08d4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277afa0);
}



/* Entry: 108d08d5c; end: 108d08e3b; -[SCUcoInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d08d5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277af88,0);
  _objc_storeStrong(param_1 + _DAT_11277afa8,0);
  _objc_storeStrong(param_1 + _DAT_11277afac,0);
  _objc_storeStrong(param_1 + _DAT_11277af84,0);
  _objc_storeStrong(param_1 + _DAT_11277afb4,0);
  _objc_storeStrong(param_1 + _DAT_11277afb8,0);
  _objc_storeStrong(param_1 + _DAT_11277afbc,0);
  _objc_storeStrong(param_1 + _DAT_11277af9c,0);
  _objc_storeStrong(param_1 + _DAT_11277af98,0);
  _objc_storeStrong(param_1 + _DAT_11277af94,0);
  _objc_storeStrong(param_1 + _DAT_11277afa4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277af8c,0);
  return;
}



/* Entry: 108d08e3c; end: 108d08f37; -[SCOverlayFilterView videoTrackedImages] */

undefined **
FUN_108d08e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_5;
  func_0x00010bfd7d40();
  ppuVar3 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if ((int)uVar1 != 0) {
    func_0x00010bf20c00(param_5);
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
    func_0x00010bf20c00(param_5);
    func_0x00010bf89b80(param_5);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    puVar2 = PTR_PTR_1126c4200;
    _objc_alloc();
    func_0x00010c0169c0();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    return &PTR____CFConstantStringClassReference_110daafd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return ppuVar3;
}



/* Entry: 108d08f38; end: 108d08f43; -[SCOverlayFilterView displayName] */

undefined ** FUN_108d08f38(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108d08f44; end: 108d08f97; -[SCOverlayFilterView initWithFrame:config:userSession:] */

undefined1 * FUN_108d08f44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_config__1125e29f0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d08f98; end: 108d08fd3; -[SCOverlayFilterView drawScreenshotImageInCurrentContextWithRect:] */

void FUN_108d08f98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d08fd4; end: 108d08fdb; -[SCOverlayFilterView hasImage] */

undefined8 FUN_108d08fd4(void)

{
  return 1;
}



/* Entry: 108d08fdc; end: 108d08fdf; -[SCOverlayFilterView tap:] */

void FUN_108d08fdc(void)

{
  return;
}



/* Entry: 108d08fe0; end: 108d08fe7; -[SCOverlayFilterView shouldRespondToTap:] */

undefined8 FUN_108d08fe0(void)

{
  return 0;
}



/* Entry: 108d08fe8; end: 108d08fef; -[SCOverlayFilterView shouldRespondToTouchControl:] */

undefined8 FUN_108d08fe8(void)

{
  return 0;
}



/* Entry: 108d08ff0; end: 108d08ff3; -[SCOverlayFilterView pan:] */

void FUN_108d08ff0(void)

{
  return;
}



/* Entry: 108d08ff4; end: 108d08ff7; -[SCOverlayFilterView rotation:] */

void FUN_108d08ff4(void)

{
  return;
}



/* Entry: 108d08ff8; end: 108d08ffb; -[SCOverlayFilterView pinch:] */

void FUN_108d08ff8(void)

{
  return;
}



/* Entry: 108d08ffc; end: 108d0900b; -[SCOverlayFilterView isAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d08ffc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277afc0);
}



/* Entry: 108d0900c; end: 108d0901b; -[SCOverlayFilterView setIsAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0900c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277afc0) = param_3;
  return;
}



/* Entry: 108d0901c; end: 108d0906b; -[SCPlaceholderOverlayFilterView initWithFrame:config:] */

undefined1 * FUN_108d0901c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_config__1125e29f0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bead6a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d0906c; end: 108d0906f; -[SCPlaceholderOverlayFilterView drawScreenshotImageInCurrentContextWithRect:] */

void FUN_108d0906c(void)

{
  return;
}



/* Entry: 108d09070; end: 108d09077; -[SCPlaceholderOverlayFilterView hasImage] */

undefined8 FUN_108d09070(void)

{
  return 0;
}



/* Entry: 108d09078; end: 108d09087; -[SCPlaceholderOverlayFilterView startViewing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d09078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277afc4),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108d09088; end: 108d09097; -[SCPlaceholderOverlayFilterView stopViewing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d09088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277afc4),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108d09098; end: 108d0928b; -[SCPlaceholderOverlayFilterView _setupLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d09098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar9 = (long)_DAT_11277afc4;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + _DAT_11277afc4,0);
  return;
}



/* Entry: 108d0928c; end: 108d0929f; -[SCPlaceholderOverlayFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0928c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277afc4,0);
  return;
}



/* Entry: 108d092a0; end: 108d0935b; +[SCFilterUtils numberOfFiltersAppliedFromFiltersState:] */

long FUN_108d092a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2a0460();
  uVar2 = param_3;
  func_0x00010c249d80();
  uVar3 = 1;
  if (uVar1 != 0x7fffffffffffffff) {
    uVar3 = 2;
  }
  uVar1 = (ulong)(uVar1 != 0x7fffffffffffffff);
  if (uVar2 != 0x7fffffffffffffff) {
    uVar1 = uVar3;
  }
  uVar3 = param_3;
  func_0x00010c140100();
  if ((int)uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c140140(param_3);
    uVar1 = uVar1 + (uVar3 & 0xffffffff);
  }
  uVar3 = param_3;
  func_0x00010bfc1460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c082fa0(param_3);
  uVar4 = param_3;
  func_0x00010c25bfa0(param_3);
  _objc_release(param_3);
  return uVar2 + uVar1 + (uVar3 & 0xffffffff) + (uVar4 & 0xffffffff);
}



/* Entry: 108d0935c; end: 108d09363; -[SCFilterView initWithFrame:] */

void FUN_108d0935c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_config__1125e29f0,0);
  return;
}



/* Entry: 108d09364; end: 108d09417; -[SCFilterView initWithFrame:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d09364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe530;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277afcc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108d09418; end: 108d0941f; -[SCFilterView hasBackgroundFilter] */

undefined8 FUN_108d09418(void)

{
  return 0;
}



/* Entry: 108d09420; end: 108d0947b; -[SCFilterView ctaLayoutGuideObservable] */

void FUN_108d09420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d0947c; end: 108d094b3; -[SCFilterView updateConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0947c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277afcc);
  *(undefined8 *)(param_1 + _DAT_11277afcc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d094b4; end: 108d094bb; -[SCFilterView shouldAddToAlternativeSuperview] */

undefined8 FUN_108d094b4(void)

{
  return 0;
}



/* Entry: 108d094bc; end: 108d094bf; -[SCFilterView startViewing] */

void FUN_108d094bc(void)

{
  return;
}



/* Entry: 108d094c0; end: 108d094c3; -[SCFilterView stopViewing] */

void FUN_108d094c0(void)

{
  return;
}



/* Entry: 108d094c4; end: 108d094c7; -[SCFilterView updateImageProcessCommands:] */

void FUN_108d094c4(void)

{
  return;
}



/* Entry: 108d094c8; end: 108d094cb; -[SCFilterView willStartDragging] */

void FUN_108d094c8(void)

{
  return;
}



/* Entry: 108d094cc; end: 108d094cf; -[SCFilterView willEndDragging] */

void FUN_108d094cc(void)

{
  return;
}



/* Entry: 108d094d0; end: 108d094df; -[SCFilterView isDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d094d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277afc8);
}



/* Entry: 108d094e0; end: 108d094ef; -[SCFilterView setDisplayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d094e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277afc8) = param_3;
  return;
}



/* Entry: 108d094f0; end: 108d094ff; -[SCFilterView config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d094f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277afcc);
}



/* Entry: 108d09500; end: 108d0953f; -[SCFilterView setConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d09500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277afcc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d09540; end: 108d0954f; -[SCFilterView imageProcessCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d09540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277afd0);
}



/* Entry: 108d09550; end: 108d0958f; -[SCFilterView setImageProcessCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d09550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277afd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d09590; end: 108d095cf; -[SCFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d09590(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277afd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277afcc,0);
  return;
}



/* Entry: 108d095d0; end: 108d0963b; -[SCFiltersState init] */

undefined1 * FUN_108d095d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c223ea0(puVar1);
    func_0x00010c203440(puVar1);
    func_0x00010c207ce0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d0963c; end: 108d0969b; -[SCFiltersState currentLensCommand] */

void FUN_108d0963c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c091860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf69ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d0969c; end: 108d09797; -[SCFiltersState anyFilterApplied] */

bool FUN_108d0969c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if ((((uVar3 == 0) && (uVar3 = param_1, func_0x00010c2a0460(), uVar3 == 0x7fffffffffffffff)) &&
      (uVar3 = param_1, func_0x00010c23ebe0(), uVar3 == 0x7fffffffffffffff)) &&
     (uVar3 = param_1, func_0x00010c249d80(), uVar3 == 0x7fffffffffffffff)) {
    uVar3 = param_1;
    func_0x00010bf4e780();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar3 == 0) && (uVar4 = param_1, func_0x00010c082fa0(), (uVar4 & 1) == 0)) &&
       ((uVar4 = param_1, func_0x00010c140140(), (uVar4 & 1) == 0 &&
        (uVar4 = param_1, func_0x00010c25bfa0(), (uVar4 & 1) == 0)))) {
      func_0x00010c273660(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf529e0();
      bVar1 = uVar4 != 0;
      _objc_release(param_1);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 108d09798; end: 108d09817; -[SCFiltersState ucoFilterIDs] */

void FUN_108d09798(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c31908();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf09f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d09818; end: 108d0986f;  */

void FUN_108d09818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c081f00();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfadea0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d09870; end: 108d098af; -[SCFiltersState isUncroppableGeoFilterSelected] */

bool FUN_108d09870(long param_1)

{
  long lVar1;
  
  func_0x00010c0db0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108d098b0; end: 108d0994b; -[SCFiltersState nonUcoFilterIDs] */

void FUN_108d098b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c31908();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d0994c; end: 108d09b27; -[SCFiltersState isEqual:] */

bool FUN_108d0994c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c3ca0;
  _objc_opt_class(PTR_PTR_1126c3ca0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    if (param_1 == uVar1) {
      bVar2 = true;
      goto LAB_108d09b04;
    }
    lVar5 = *(long *)(param_3 + 0x10);
    if ((((lVar5 == 0 && *(long *)(param_1 + 0x10) == 0) || (func_0x00010c0720c0(), (int)lVar5 != 0)
         ) && ((lVar5 = *(long *)(param_3 + 0x18), lVar5 == 0 && *(long *)(param_1 + 0x18) == 0 ||
               (func_0x00010c071b60(), (int)lVar5 != 0)))) &&
       (((*(long *)(param_3 + 0x20) == *(long *)(param_1 + 0x20) &&
         ((lVar5 = *(long *)(param_3 + 0x48), lVar5 == 0 && *(long *)(param_1 + 0x48) == 0 ||
          (func_0x00010c071b60(), (int)lVar5 != 0)))) &&
        (((lVar5 = *(long *)(param_3 + 0x50), lVar5 == 0 && *(long *)(param_1 + 0x50) == 0 ||
          (func_0x00010c071b60(), (int)lVar5 != 0)) &&
         ((lVar5 = *(long *)(param_3 + 0x58), lVar5 == 0 && *(long *)(param_1 + 0x58) == 0 ||
          (func_0x00010c071b60(), (int)lVar5 != 0)))))))) {
      lVar5 = *(long *)(param_3 + 0x70);
      if (lVar5 == 0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_108d09a4c;
      }
      else {
        func_0x00010c071ae0();
        if ((int)lVar5 != 0) {
LAB_108d09a4c:
          if ((((*(char *)(param_3 + 8) == *(char *)(param_1 + 8)) &&
               ((((lVar5 = *(long *)(param_3 + 0x38), lVar5 == 0 && *(long *)(param_1 + 0x38) == 0
                  || (func_0x00010c071b60(), (int)lVar5 != 0)) &&
                 (*(long *)(param_3 + 0x40) == *(long *)(param_1 + 0x40))) &&
                ((lVar5 = *(long *)(param_3 + 0x60), lVar5 == 0 && *(long *)(param_1 + 0x60) == 0 ||
                 (func_0x00010c071b60(), (int)lVar5 != 0)))))) &&
              (*(long *)(param_3 + 0x68) == *(long *)(param_1 + 0x68))) &&
             (((*(char *)(param_3 + 9) == *(char *)(param_1 + 9) &&
               (*(char *)(param_3 + 10) == *(char *)(param_1 + 10))) &&
              ((*(long *)(param_3 + 0x78) == *(long *)(param_1 + 0x78) &&
               (*(char *)(param_3 + 0xb) == *(char *)(param_1 + 0xb))))))) {
            bVar2 = *(long *)(param_3 + 0x80) == *(long *)(param_1 + 0x80);
            goto LAB_108d09b04;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_108d09b04:
  _objc_release(uVar1);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108d09b28; end: 108d09c47; -[SCFiltersState hash] */

undefined * FUN_108d09b28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong auStack_b0 [18];
  
  auStack_b0[0x11] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  auStack_b0[2] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  auStack_b0[1] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  auStack_b0[3] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  auStack_b0[4] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  auStack_b0[5] = uVar3;
  func_0x00010bfde980();
  auStack_b0[7] = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  auStack_b0[6] = uVar2;
  func_0x00010bfde980();
  auStack_b0[9] = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  auStack_b0[8] = uVar3;
  func_0x00010bfde980();
  auStack_b0[0xb] = *(undefined8 *)(param_1 + 0x68);
  auStack_b0[0xc] = (ulong)*(byte *)(param_1 + 9);
  auStack_b0[0xd] = (ulong)*(byte *)(param_1 + 10);
  auStack_b0[0xf] = (ulong)*(byte *)(param_1 + 0xb);
  auStack_b0[0xe] = *(undefined8 *)(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x80);
  auStack_b0[10] = uVar2;
  func_0x00010bfde980();
  auStack_b0[0x10] = lVar4;
  lVar5 = 8;
  do {
    uVar6 = *(ulong *)((long)auStack_b0 + lVar5) | (long)puVar1 << 0x20;
    uVar6 = ~uVar6 + uVar6 * 0x40000;
    uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
    uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
    puVar1 = (undefined *)(uVar6 ^ uVar6 >> 0x16);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_b0[0x11]) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c3ca0;
  _objc_alloc_init(PTR_PTR_1126c3ca0);
  func_0x00010c182fe0();
  func_0x00010c223ee0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x18));
  func_0x00010c223ea0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x20));
  func_0x00010c1a2c80(puVar1,param_2,*(undefined8 *)(lVar4 + 0x48));
  func_0x00010c1a2ca0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x50));
  func_0x00010c216e40(puVar1,param_2,*(undefined8 *)(lVar4 + 0x58));
  func_0x00010c220880(puVar1,param_2,*(undefined8 *)(lVar4 + 0x70));
  func_0x00010c1b5920(puVar1,param_2,*(undefined1 *)(lVar4 + 8));
  func_0x00010c203460(puVar1,param_2,*(undefined8 *)(lVar4 + 0x38));
  func_0x00010c203440(puVar1,param_2,*(undefined8 *)(lVar4 + 0x40));
  func_0x00010c207d20(puVar1,param_2,*(undefined8 *)(lVar4 + 0x60));
  func_0x00010c207ce0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x68));
  func_0x00010c1edd80(puVar1,param_2,*(undefined1 *)(lVar4 + 9));
  func_0x00010c1eddc0(puVar1,param_2,*(undefined1 *)(lVar4 + 10));
  func_0x00010c20e2c0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x78));
  func_0x00010c20e340(puVar1,param_2,*(undefined1 *)(lVar4 + 0xb));
  func_0x00010c182f00(puVar1,param_2,*(undefined8 *)(lVar4 + 0x80));
  func_0x00010c1bb2a0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x28));
  func_0x00010c18b0e0(puVar1,param_2,*(undefined8 *)(lVar4 + 0x30));
  return puVar1;
}



/* Entry: 108d09c48; end: 108d09d57; -[SCFiltersState copyWithZone:] */

undefined * FUN_108d09c48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3ca0;
  _objc_alloc_init(PTR_PTR_1126c3ca0);
  func_0x00010c182fe0();
  func_0x00010c223ee0(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c223ea0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a2c80(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1a2ca0(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c216e40(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c220880(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1b5920(puVar1,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010c203460(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c203440(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c207d20(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010c207ce0(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c1edd80(puVar1,param_2,*(undefined1 *)(param_1 + 9));
  func_0x00010c1eddc0(puVar1,param_2,*(undefined1 *)(param_1 + 10));
  func_0x00010c20e2c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c20e340(puVar1,param_2,*(undefined1 *)(param_1 + 0xb));
  func_0x00010c182f00(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010c1bb2a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c18b0e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  return puVar1;
}



/* Entry: 108d09d58; end: 108d09d5f; -[SCFiltersState contextFilterSelectedId] */

undefined8 FUN_108d09d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d09d60; end: 108d09d67; -[SCFiltersState setContextFilterSelectedId:] */

void FUN_108d09d60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09d68; end: 108d09d6f; -[SCFiltersState visualFilters] */

undefined8 FUN_108d09d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d09d70; end: 108d09d77; -[SCFiltersState setVisualFilters:] */

void FUN_108d09d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09d78; end: 108d09d7f; -[SCFiltersState visualFilterSelected] */

undefined8 FUN_108d09d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108d09d80; end: 108d09d87; -[SCFiltersState setVisualFilterSelected:] */

void FUN_108d09d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108d09d88; end: 108d09d8f; -[SCFiltersState lensCommand] */

undefined8 FUN_108d09d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108d09d90; end: 108d09dbf; -[SCFiltersState setLensCommand:] */

void FUN_108d09d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d09dc0; end: 108d09dc7; -[SCFiltersState defaultLensCommand] */

undefined8 FUN_108d09dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108d09dc8; end: 108d09df7; -[SCFiltersState setDefaultLensCommand:] */

void FUN_108d09dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d09df8; end: 108d09dff; -[SCFiltersState smartFilters] */

undefined8 FUN_108d09df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108d09e00; end: 108d09e07; -[SCFiltersState setSmartFilters:] */

void FUN_108d09e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09e08; end: 108d09e0f; -[SCFiltersState smartFilterSelected] */

undefined8 FUN_108d09e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108d09e10; end: 108d09e17; -[SCFiltersState setSmartFilterSelected:] */

void FUN_108d09e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108d09e18; end: 108d09e1f; -[SCFiltersState geoFilters] */

undefined8 FUN_108d09e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108d09e20; end: 108d09e27; -[SCFiltersState setGeoFilters:] */

void FUN_108d09e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09e28; end: 108d09e2f; -[SCFiltersState geoFiltersSelected] */

undefined8 FUN_108d09e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108d09e30; end: 108d09e37; -[SCFiltersState setGeoFiltersSelected:] */

void FUN_108d09e30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09e38; end: 108d09e3f; -[SCFiltersState toolFilterIds] */

undefined8 FUN_108d09e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108d09e40; end: 108d09e47; -[SCFiltersState setToolFilterIds:] */

void FUN_108d09e40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09e48; end: 108d09e4f; -[SCFiltersState speedMotionFilters] */

undefined8 FUN_108d09e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108d09e50; end: 108d09e57; -[SCFiltersState setSpeedMotionFilters:] */

void FUN_108d09e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09e58; end: 108d09e5f; -[SCFiltersState speedMotionFilterSelected] */

undefined8 FUN_108d09e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108d09e60; end: 108d09e67; -[SCFiltersState setSpeedMotionFilterSelected:] */

void FUN_108d09e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 108d09e68; end: 108d09e6f; -[SCFiltersState venueFilterSelector] */

undefined8 FUN_108d09e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108d09e70; end: 108d09e77; -[SCFiltersState setVenueFilterSelector:] */

void FUN_108d09e70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d09e78; end: 108d09e7f; -[SCFiltersState isVenueFilterSelected] */

undefined1 FUN_108d09e78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108d09e80; end: 108d09e87; -[SCFiltersState setIsVenueFilterSelected:] */

void FUN_108d09e80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108d09e88; end: 108d09e8f; -[SCFiltersState reverseMotionFilterEnabled] */

undefined1 FUN_108d09e88(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108d09e90; end: 108d09e97; -[SCFiltersState setReverseMotionFilterEnabled:] */

void FUN_108d09e90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108d09e98; end: 108d09e9f; -[SCFiltersState reverseMotionFilterSelected] */

undefined1 FUN_108d09e98(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108d09ea0; end: 108d09ea7; -[SCFiltersState setReverseMotionFilterSelected:] */

void FUN_108d09ea0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108d09ea8; end: 108d09eaf; -[SCFiltersState streakCount] */

undefined8 FUN_108d09ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108d09eb0; end: 108d09eb7; -[SCFiltersState setStreakCount:] */

void FUN_108d09eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 108d09eb8; end: 108d09ebf; -[SCFiltersState streakFilterSelected] */

undefined1 FUN_108d09eb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108d09ec0; end: 108d09ec7; -[SCFiltersState setStreakFilterSelected:] */

void FUN_108d09ec0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}


