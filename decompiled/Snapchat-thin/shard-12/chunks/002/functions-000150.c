/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ea7728; end: 108ea7cdf;  */

void FUN_108ea7728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  dVar11 = *(double *)(param_1 + 0x48);
  dVar13 = *(double *)(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(*(undefined8 *)(param_1 + 0x40),dVar11,*(undefined8 *)(param_1 + 0x50),dVar13,
                      0x4024000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 0.05;
  puVar3 = puVar2;
  func_0x00010bf414e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c25dba0(puVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar8 = param_2;
    func_0x00010bdc1000(param_2);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    dVar10 = *(double *)(param_1 + 0x60);
    dVar11 = *(double *)(param_1 + 0x68);
    dVar14 = *(double *)(param_1 + 0x70);
    dVar13 = *(double *)(param_1 + 0x78);
    _objc_retain(uVar9);
    func_0x00010bf199a0(dVar10,dVar11,dVar14,dVar13,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c400(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar3);
    func_0x00010bfad4a0(puVar2);
    _CGContextSaveGState(uVar8);
    func_0x00010bef7740(puVar2);
    dVar12 = dVar14 / 15.0;
    dVar10 = dVar10 + dVar12;
    dVar12 = dVar12 + dVar12;
    dVar11 = dVar11 + dVar12;
    dVar13 = dVar13 - (dVar12 + 0.0);
    func_0x00010bf89920(dVar10,dVar11,dVar14 - dVar12,uVar9);
    _objc_release(uVar9);
    _CGContextRestoreGState(uVar8);
    _objc_release(puVar2);
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    dVar12 = *(double *)(param_1 + 0x80);
    dVar15 = *(double *)(param_1 + 0x88);
    dVar11 = *(double *)(param_1 + 0x90);
    dVar16 = *(double *)(param_1 + 0x98);
    _objc_retain(uVar9);
    _objc_retain(uVar8);
    FUN_108ea7d78(uVar9);
    dVar13 = dVar10;
    func_0x000108ea7ed0(uVar9);
    if (dVar11 <= dVar13) {
      dVar13 = dVar11;
    }
    dVar14 = 70.0;
    dVar15 = dVar15 + (dVar16 - (dVar10 + 6.0 + 70.0)) * 0.5;
    dVar16 = dVar12;
    _CGRectGetMaxY(dVar12,dVar15,dVar13,dVar10);
    dVar16 = dVar16 + 6.0;
    FUN_108ea8028(dVar12,dVar15,dVar13,dVar10,uVar9);
    _objc_release(uVar9);
    dVar13 = dVar14;
    FUN_108ea7ce0(uVar8);
  }
  else {
    func_0x00010bdc1000(param_2);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    dVar12 = *(double *)(param_1 + 0x80);
    dVar15 = *(double *)(param_1 + 0x88);
    dVar14 = *(double *)(param_1 + 0x90);
    dVar16 = *(double *)(param_1 + 0x98);
    _objc_retain(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_retain(uVar9);
    _objc_opt_new();
    func_0x00010c1bdb00();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    dVar10 = 13.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c23d660(uVar9);
    func_0x000108ea7ed0(uVar9);
    if (dVar14 <= dVar10) {
      dVar10 = dVar14;
    }
    func_0x00010bf20ba0(dVar14,dVar16 - dVar11,uVar8);
    dVar15 = dVar15 + (dVar16 - (dVar11 + dVar13)) * 0.5;
    dVar16 = dVar12;
    _CGRectGetMaxY(dVar12,dVar15,dVar10,dVar11);
    FUN_108ea8028(dVar12,dVar15,dVar10,dVar11,uVar9);
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_retain(uVar8);
    func_0x00010bf6d680(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf89d20(uVar8);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(uVar8);
  if ((*(long *)(param_1 + 0x30) != 0) && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) {
    dVar12 = *(double *)(param_1 + 0xa0);
    dVar16 = *(double *)(param_1 + 0xa8);
    dVar14 = *(double *)(param_1 + 0xb0);
    dVar13 = *(double *)(param_1 + 0xb8);
    FUN_108ea7ce0();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  dVar10 = dVar12;
  dVar11 = dVar16;
  _objc_retain();
  func_0x00010c23d0a0(param_2);
  if ((0.0 < dVar10) && (0.0 < dVar11)) {
    dVar15 = dVar14 / dVar10;
    if (dVar13 / dVar11 <= dVar14 / dVar10) {
      dVar15 = dVar13 / dVar11;
    }
    func_0x00010bf89920(dVar12 + (dVar14 - dVar10 * dVar15) * 0.5,
                        dVar16 + (dVar13 - dVar11 * dVar15) * 0.5,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ea7ce0; end: 108ea7d77;  */

void FUN_108ea7ce0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  dVar2 = param_2;
  _objc_retain();
  func_0x00010c23d0a0(param_5);
  if ((0.0 < dVar1) && (0.0 < dVar2)) {
    dVar3 = param_3 / dVar1;
    if (param_4 / dVar2 <= param_3 / dVar1) {
      dVar3 = param_4 / dVar2;
    }
    func_0x00010bf89920(param_1 + (param_3 - dVar1 * dVar3) * 0.5,
                        param_2 + (param_4 - dVar2 * dVar3) * 0.5,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ea7d78; end: 108ea8027;  */

undefined *
FUN_108ea7d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1bdb00();
  uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_70 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar3;
  puStack_60 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c23d660(param_5);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  uStack_98 = 0x108ea7ed0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1bdb00();
  uStack_118 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar10 = 0x402c000000000000;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_100 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar3;
  puStack_f0 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c23d660(puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  pcStack_128 = FUN_108ea8028;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &puStack_a0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1bdb00();
  uStack_1b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1a0 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar8 = &uStack_1b8;
  uVar9 = 3;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_198 = puVar3;
  puStack_190 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar7 = puVar4;
  func_0x00010bf89960(uVar10,param_2,param_3,param_4,puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_200;
  pcStack_1c8 = FUN_108ea81a0;
  puStack_1f0 = puVar3;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar5;
  ppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  puStack_1f8 = PTR_PTR_1126fefd0;
  puStack_200 = puVar4;
  _objc_msgSendSuper2(&puStack_200,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(puVar7);
    uVar10 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar7;
    _objc_release(uVar10);
    _objc_retain(puVar8);
    uVar10 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined8 **)((long)ppuVar6 + 0x10) = puVar8;
    _objc_release(uVar10);
    _objc_storeWeak((undefined1 *)((long)ppuVar6 + 0x18),uVar9);
  }
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return (undefined *)ppuVar6;
}



/* Entry: 108ea8028; end: 108ea819f;  */

undefined *
FUN_108ea8028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1bdb00();
  uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar8 = &uStack_98;
  uVar9 = 3;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar3;
  puStack_70 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar7 = puVar4;
  func_0x00010bf89960(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_e0;
  pcStack_a8 = FUN_108ea81a0;
  puStack_d0 = puVar3;
  puStack_c8 = puVar2;
  puStack_c0 = puVar1;
  uStack_b8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  puStack_d8 = PTR_PTR_1126fefd0;
  puStack_e0 = puVar4;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar7;
    _objc_release(uVar6);
    _objc_retain(puVar8);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 **)((long)ppuVar5 + 0x10) = puVar8;
    _objc_release(uVar6);
    _objc_storeWeak((undefined1 *)((long)ppuVar5 + 0x18),uVar9);
  }
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return (undefined *)ppuVar5;
}



/* Entry: 108ea81a0; end: 108ea8263; -[SCSnapcodeScope initWithUIContainer:configurationObservable:delegate:] */

undefined1 *
FUN_108ea81a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fefd0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea8264; end: 108ea826b; -[SCSnapcodeScope uiContainer] */

undefined8 FUN_108ea8264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ea826c; end: 108ea8273; -[SCSnapcodeScope configurationObservable] */

undefined8 FUN_108ea826c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ea8274; end: 108ea828b; -[SCSnapcodeScope delegate] */

void FUN_108ea8274(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea828c; end: 108ea82c3; -[SCSnapcodeScope .cxx_destruct] */

void FUN_108ea828c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ea82c4; end: 108ea832f; +[SCSnapcodeConfiguration userWithUserId:showBitmojiSilhouette:] */

void FUN_108ea82c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b19a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ea8330; end: 108ea8353; -[SCSnapcodeConfiguration copyWithZone:] */

undefined8 FUN_108ea8330(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ea8354; end: 108ea83c3; -[SCSnapcodeConfiguration hash] */

void FUN_108ea8354(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126fefd8;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea83c4; end: 108ea8407; -[SCSnapcodeConfiguration internalInit] */

void FUN_108ea83c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fefd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea8408; end: 108ea84b7; -[SCSnapcodeConfiguration isEqual:] */

long FUN_108ea8408(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ea849c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_108ea849c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108ea849c;
    }
  }
  lVar3 = 1;
LAB_108ea849c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ea84b8; end: 108ea84df; -[SCSnapcodeConfiguration matchUser:] */

void FUN_108ea84b8(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108ea84d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 108ea84e0; end: 108ea84eb; -[SCSnapcodeConfiguration .cxx_destruct] */

void FUN_108ea84e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ea84ec; end: 108ea8577; -[SCPollOptionView initWithPollOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ea84ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fefe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277d0d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea8578; end: 108ea872b; -[SCPollOptionView setPollOptionResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277d0d4);
  *(undefined8 *)(param_1 + _DAT_11277d0d4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c29f060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf1f3c0();
  func_0x00010c1fade0(param_1,param_2,uVar1,0);
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1d02e0(puVar2,param_2,3);
  func_0x00010c1eea40(puVar2,param_2,6);
  lVar7 = (long)_DAT_11277d0d8;
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c11ff00(param_3);
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c25d4c0(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c212f20(uVar6,param_2,puVar3);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ea872c; end: 108ea8857; -[SCPollOptionView setSelected:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea872c(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_11277d0dc;
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(byte *)(param_1 + _DAT_11277d0e0) != param_3) {
    *(char *)(param_1 + _DAT_11277d0e0) = (char)param_3;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (param_4 == 0) {
      lVar1 = param_1;
      func_0x00010c159240();
      uVar3 = 0x34;
      if ((int)lVar1 == 0) {
        uVar3 = 0xd5;
      }
      func_0x00010c23ba80(puVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108ea8858;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  }
  return;
}



/* Entry: 108ea8858; end: 108ea88db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8858(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c159240();
  uVar3 = 0x34;
  if (iVar1 == 0) {
    uVar3 = 0xd5;
  }
  func_0x00010c23ba80(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277d0dc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ea88dc; end: 108ea8b47; -[SCPollOptionView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea88dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar4 = (long)_DAT_11277d0e4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277d0d0);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4046000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ea8b48;
  puStack_68 = &UNK_110866490;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277d0d8);
  *(undefined **)(param_1 + _DAT_11277d0d8) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277d0dc);
  *(undefined **)(param_1 + _DAT_11277d0dc) = puVar1;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  return;
}



/* Entry: 108ea8b48; end: 108ea8ca7;  */

void FUN_108ea8b48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4038000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c165e20(puVar1,param_2,1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ea8ca8; end: 108ea8e0b; -[SCPollOptionView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  func_0x00010bf20c00();
  dVar4 = param_4 * 0.5;
  lVar3 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4);
  _objc_release(lVar3);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277d0e4));
  func_0x00010bf20c00(param_5);
  lVar3 = (long)_DAT_11277d0dc;
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar4,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  dVar4 = param_4 * 0.5;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277d0d8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar4,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ea8e0c; end: 108ea8e43; -[SCPollOptionView didReceiveTap] */

void FUN_108ea8e0c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1033c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ea8e44; end: 108ea8e63; -[SCPollOptionView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8e44(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d0e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea8e64; end: 108ea8e77; -[SCPollOptionView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8e64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d0e8,param_3);
  return;
}



/* Entry: 108ea8e78; end: 108ea8e87; -[SCPollOptionView pollOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ea8e78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d0d0);
}



/* Entry: 108ea8e88; end: 108ea8e97; -[SCPollOptionView pollOptionResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ea8e88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d0d4);
}



/* Entry: 108ea8e98; end: 108ea8ea7; -[SCPollOptionView selected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ea8e98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d0e0);
}



/* Entry: 108ea8ea8; end: 108ea8f23; -[SCPollOptionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8ea8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d0d4,0);
  _objc_storeStrong(param_1 + _DAT_11277d0d0,0);
  _objc_destroyWeak(param_1 + _DAT_11277d0e8);
  _objc_storeStrong(param_1 + _DAT_11277d0dc,0);
  _objc_storeStrong(param_1 + _DAT_11277d0d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d0e4,0);
  return;
}



/* Entry: 108ea8f24; end: 108ea8fe7; -[SCPollOptionsView initWithFirstOption:secondOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ea8f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fefe8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277d0ec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277d0f0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea8fe8; end: 108ea9187; -[SCPollOptionsView setPollOptionResults:] */

/* WARNING: Possible PIC construction at 0x000108ea9140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ea9144) */
/* WARNING: Removing unreachable block (ram,0x000108ea9184) */
/* WARNING: Removing unreachable block (ram,0x000108ea91e0) */
/* WARNING: Removing unreachable block (ram,0x000108ea91e4) */
/* WARNING: Removing unreachable block (ram,0x000108ea9224) */
/* WARNING: Removing unreachable block (ram,0x000108ea9228) */
/* WARNING: Removing unreachable block (ram,0x000108ea9164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea8fe8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      iVar7 = (int)*(undefined8 *)(lVar8 * 8);
      puVar6 = (undefined8 *)(param_1 + _DAT_11277d0f4);
      uVar4 = *puVar6;
      func_0x00010c103380();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0ec440();
      iVar2 = iVar7;
      func_0x00010c0ec440();
      _objc_release(uVar4);
      if ((int)uVar5 == iVar2) {
LAB_108ea9108:
        func_0x00010c1deb40(*puVar6);
      }
      else {
        puVar6 = (undefined8 *)(param_1 + _DAT_11277d0f8);
        uVar4 = *puVar6;
        func_0x00010c103380();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0ec440();
        func_0x00010c0ec440();
        _objc_release(uVar4);
        if ((int)uVar5 == iVar7) goto LAB_108ea9108;
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108ea9188; end: 108ea925f; -[SCPollOptionsView selectWinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea9188(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d0f4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c1033a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ff00();
  _objc_release(uVar1);
  func_0x00010c1fade0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = (long)_DAT_11277d0f8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c1033a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ff00();
  _objc_release(uVar1);
  func_0x00010c1fade0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108ea9260; end: 108ea9333; -[SCPollOptionsView selectPollOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea9260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ec440();
  puVar4 = (undefined8 *)(param_1 + _DAT_11277d0f4);
  uVar2 = *puVar4;
  func_0x00010c103380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ec440();
  _objc_release(uVar2);
  if ((int)uVar1 != (int)uVar3) {
    uVar1 = param_3;
    func_0x00010c0ec440();
    puVar4 = (undefined8 *)(param_1 + _DAT_11277d0f8);
    uVar2 = *puVar4;
    func_0x00010c103380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ec440();
    _objc_release(uVar2);
    if ((int)uVar1 != (int)uVar3) goto LAB_108ea931c;
  }
  func_0x00010c1fade0(*puVar4,param_2,1,1);
LAB_108ea931c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ea9334; end: 108ea93df; -[SCPollOptionsView _setupViews] */

/* WARNING: Possible PIC construction at 0x000108ea93c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ea93c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea9334(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dc538;
  _objc_alloc();
  func_0x00010c037ac0();
  lVar4 = (long)_DAT_11277d0f4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126dc538;
  _objc_alloc();
  func_0x00010c037ac0();
  lVar3 = (long)_DAT_11277d0f8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 108ea93e0; end: 108ea950f; -[SCPollOptionsView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x000108ea9424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ea9428) */
/* WARNING: Removing unreachable block (ram,0x000108ea9484) */
/* WARNING: Removing unreachable block (ram,0x000108ea9488) */
/* WARNING: Removing unreachable block (ram,0x000108ea948c) */
/* WARNING: Removing unreachable block (ram,0x000108ea94c4) */
/* WARNING: Removing unreachable block (ram,0x000108ea94c8) */
/* WARNING: Removing unreachable block (ram,0x000108ea94fc) */
/* WARNING: Removing unreachable block (ram,0x000108ea94d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea93e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0x4051800000000000,0x4051800000000000,*(undefined8 *)(param_1 + _DAT_11277d0f4),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108ea9510; end: 108ea9523; -[SCPollOptionsView sizeThatFits:] */

undefined1  [16] FUN_108ea9510(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4051800000000000;
  auVar1._0_8_ = 0x4063600000000000;
  return auVar1;
}



/* Entry: 108ea9524; end: 108ea95ab; -[SCPollOptionsView pollOptionViewDidReceiveTap:] */

void FUN_108ea9524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c082800();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c103380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1033e0(uVar1,param_2,param_1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ea95ac; end: 108ea95cb; -[SCPollOptionsView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea95ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d0fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea95cc; end: 108ea95df; -[SCPollOptionsView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea95cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d0fc,param_3);
  return;
}



/* Entry: 108ea95e0; end: 108ea964b; -[SCPollOptionsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea95e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277d0fc);
  _objc_storeStrong(param_1 + _DAT_11277d0f8,0);
  _objc_storeStrong(param_1 + _DAT_11277d0f4,0);
  _objc_storeStrong(param_1 + _DAT_11277d0f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d0ec,0);
  return;
}



/* Entry: 108ea964c; end: 108ea96d3; -[SCPollOption initWithOptionId:text:] */

undefined1 *
FUN_108ea964c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126feff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea96d4; end: 108ea96f7; -[SCPollOption copyWithZone:] */

undefined8 FUN_108ea96d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ea96f8; end: 108ea975b; -[SCPollOption hash] */

ulong * FUN_108ea96f8(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(uint *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108ea97e0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((int)puVar2[1] != (int)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_108ea97e0;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108ea97e0;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_108ea97e0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108ea975c; end: 108ea97fb; -[SCPollOption isEqual:] */

long FUN_108ea975c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ea97e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108ea97e0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108ea97e0;
    }
  }
  lVar3 = 1;
LAB_108ea97e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ea97fc; end: 108ea9803; -[SCPollOption optionId] */

undefined4 FUN_108ea97fc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108ea9804; end: 108ea980b; -[SCPollOption text] */

undefined8 FUN_108ea9804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ea980c; end: 108ea9817; -[SCPollOption .cxx_destruct] */

void FUN_108ea980c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ea9818; end: 108ea98b7; -[SCPollOptionResult initWithOptionId:count:ratio:viewerVoted:] */

undefined1 *
FUN_108ea9818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126feff8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea98b8; end: 108ea98db; -[SCPollOptionResult copyWithZone:] */

undefined8 FUN_108ea98b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ea98dc; end: 108ea9967; -[SCPollOptionResult hash] */

ulong * FUN_108ea98dc(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(uint *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_20 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108ea9a24:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108ea9a30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((int)puVar3[1] == (int)param_3[1] && (puVar3[2] == param_3[2])))) {
      dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
      dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[4];
        if (puVar6 != (ulong *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_108ea9a30;
        }
        goto LAB_108ea9a24;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_108ea9a30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108ea9968; end: 108ea9a4b; -[SCPollOptionResult isEqual:] */

long FUN_108ea9968(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ea9a24:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ea9a30;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_108ea9a30;
        }
        goto LAB_108ea9a24;
      }
    }
    lVar4 = 0;
  }
LAB_108ea9a30:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108ea9a4c; end: 108ea9a53; -[SCPollOptionResult optionId] */

undefined4 FUN_108ea9a4c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108ea9a54; end: 108ea9a5b; -[SCPollOptionResult count] */

undefined8 FUN_108ea9a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ea9a5c; end: 108ea9a63; -[SCPollOptionResult ratio] */

undefined8 FUN_108ea9a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ea9a64; end: 108ea9a6b; -[SCPollOptionResult viewerVoted] */

undefined8 FUN_108ea9a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ea9a6c; end: 108ea9a77; -[SCPollOptionResult .cxx_destruct] */

void FUN_108ea9a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108ea9a78; end: 108ea9bef; -[SCReplyQuotingCameraScope initWithPresentingViewController:replyConfiguration:cameraScopeDismissalDelegate:captureWorkflowResultDelegate:quickStickerImage:conversationId:pageType:pageTypeSpecific:] */

undefined1 *
FUN_108ea9a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ff000;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_9);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea9bf0; end: 108ea9cdb; -[SCReplyQuotingCameraScope initWithReplyConfiguration:uiContainer:quickStickerImage:conversationId:] */

undefined1 *
FUN_108ea9bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ff000;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea9cdc; end: 108ea9ce3; -[SCReplyQuotingCameraScope replyConfiguration] */

undefined8 FUN_108ea9cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ea9ce4; end: 108ea9cfb; -[SCReplyQuotingCameraScope uiContainer] */

void FUN_108ea9ce4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9cfc; end: 108ea9d13; -[SCReplyQuotingCameraScope pageType] */

void FUN_108ea9cfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9d14; end: 108ea9d2b; -[SCReplyQuotingCameraScope pageTypeSpecific] */

void FUN_108ea9d14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9d2c; end: 108ea9d43; -[SCReplyQuotingCameraScope conversationId] */

void FUN_108ea9d2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9d44; end: 108ea9d4b; -[SCReplyQuotingCameraScope quickStickerImage] */

undefined8 FUN_108ea9d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ea9d4c; end: 108ea9d63; -[SCReplyQuotingCameraScope cameraScopeDismissalDelegate] */

void FUN_108ea9d4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9d64; end: 108ea9d7b; -[SCReplyQuotingCameraScope captureWorkflowResultDelegate] */

void FUN_108ea9d64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9d7c; end: 108ea9d93; -[SCReplyQuotingCameraScope presentingViewController] */

void FUN_108ea9d7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea9d94; end: 108ea9dfb; -[SCReplyQuotingCameraScope .cxx_destruct] */

void FUN_108ea9d94(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ea9dfc; end: 108ea9e03; -[SCCameraImmediateLaunchServices addToStoryCameraScopeLauncher] */

undefined8 FUN_108ea9dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ea9e04; end: 108ea9e33; -[SCCameraImmediateLaunchServices setAddToStoryCameraScopeLauncher:] */

void FUN_108ea9e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ea9e34; end: 108ea9e3b; -[SCCameraImmediateLaunchServices chatCameraScopeLauncher] */

undefined8 FUN_108ea9e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ea9e3c; end: 108ea9e6b; -[SCCameraImmediateLaunchServices setChatCameraScopeLauncher:] */

void FUN_108ea9e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ea9e6c; end: 108ea9e73; -[SCCameraImmediateLaunchServices liveLensPreviewScopeLauncher] */

undefined8 FUN_108ea9e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ea9e74; end: 108ea9ea3; -[SCCameraImmediateLaunchServices setLiveLensPreviewScopeLauncher:] */

void FUN_108ea9e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ea9ea4; end: 108ea9eab; -[SCCameraImmediateLaunchServices replyQuotingCameraScopeLauncher] */

undefined8 FUN_108ea9ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ea9eac; end: 108ea9edb; -[SCCameraImmediateLaunchServices setReplyQuotingCameraScopeLauncher:] */

void FUN_108ea9eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ea9edc; end: 108ea9ee3; -[SCCameraImmediateLaunchServices caasCameraScopeLauncher] */

undefined8 FUN_108ea9edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ea9ee4; end: 108ea9f13; -[SCCameraImmediateLaunchServices setCaasCameraScopeLauncher:] */

void FUN_108ea9ee4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ea9f14; end: 108ea9f1b; -[SCCameraImmediateLaunchServices chatCameraScopeBuilder] */

undefined8 FUN_108ea9f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ea9f1c; end: 108ea9f4b; -[SCCameraImmediateLaunchServices setChatCameraScopeBuilder:] */

void FUN_108ea9f1c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ea9f4c; end: 108ea9fab; -[SCCameraImmediateLaunchServices .cxx_destruct] */

void FUN_108ea9f4c(long param_1)

{
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



/* Entry: 108ea9fac; end: 108eaa0df; -[SCCaaSCameraScope initWithReplyConfiguration:uiContainer:cameraUsageTier:featureCategoryCollection:scopedCameraType:optionalConfiguration:delegate:] */

undefined1 *
FUN_108ea9fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ff010;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eaa0e0; end: 108eaa0e7; -[SCCaaSCameraScope cameraType] */

undefined8 FUN_108eaa0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eaa0e8; end: 108eaa0ef; -[SCCaaSCameraScope cameraUsageTier] */

undefined8 FUN_108eaa0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108eaa0f0; end: 108eaa107; -[SCCaaSCameraScope delegate] */

void FUN_108eaa0f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eaa108; end: 108eaa10f; -[SCCaaSCameraScope featureCategoryCollection] */

undefined8 FUN_108eaa108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108eaa110; end: 108eaa117; -[SCCaaSCameraScope optionalConfiguration] */

undefined8 FUN_108eaa110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108eaa118; end: 108eaa11f; -[SCCaaSCameraScope replyConfiguration] */

undefined8 FUN_108eaa118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108eaa120; end: 108eaa127; -[SCCaaSCameraScope uiContainer] */

undefined8 FUN_108eaa120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108eaa128; end: 108eaa177; -[SCCaaSCameraScope .cxx_destruct] */

void FUN_108eaa128(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 108eaa178; end: 108eaa32f; -[SCCaaSCameraOptionalConfig initWithLegacyCameraViewType:shouldDisableSnapRecovery:shouldDisableDismissalGesture:shouldHideCloseButton:cameraViewShouldUseAutoLayout:lensInjectionConfiguration:cameraCreativeToolsConfig:shouldDisableMusicTool:shouldHideLensActionBar:shouldHideLensMiniCarousel:shouldHideTopLeftLensIcon:overrideCameraLaunchPosition:disablePreviewAfterCapture:dismissAfterPreviewCancel:bottomAccessoryViewProvider:] */

undefined8 *
FUN_108eaa178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126ff018;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_10._3_1_;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0x11) = param_13._1_1_;
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108eaa330; end: 108eaa353; -[SCCaaSCameraOptionalConfig copyWithZone:] */

undefined8 FUN_108eaa330(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108eaa354; end: 108eaa44f; -[SCCaaSCameraOptionalConfig hash] */

undefined8 * FUN_108eaa354(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_98 = (ulong)uVar1 & 0xff;
  uStack_90 = uVar10 >> 0x10 & 0xff;
  uStack_88 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_80 = (ulong)uVar8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_68 = (ulong)uVar1 & 0xff;
  uStack_60 = uVar10 >> 0x10 & 0xff;
  uStack_58 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_38 = (ulong)*(byte *)(param_1 + 0x11);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108eaa5b8:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108eaa5c4;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)((long)puVar4 + 8) == param_3[8] &&
            (*(char *)((long)puVar4 + 9) == param_3[9])) &&
           (*(char *)((long)puVar4 + 10) == param_3[10])) &&
          ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           (*(char *)((long)puVar4 + 0xc) == param_3[0xc])))))) &&
        (*(char *)((long)puVar4 + 0xd) == param_3[0xd])) &&
       (((*(char *)((long)puVar4 + 0xe) == param_3[0xe] &&
         (*(char *)((long)puVar4 + 0xf) == param_3[0xf])) &&
        ((*(char *)((long)puVar4 + 0x10) == param_3[0x10] &&
         (*(char *)((long)puVar4 + 0x11) == param_3[0x11])))))) {
      lVar6 = *(long *)((long)puVar4 + 0x18);
      if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x20);
        if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x28);
          if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x30);
            if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar7 = *(undefined1 **)((long)puVar4 + 0x38);
              if (puVar7 != *(undefined1 **)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_108eaa5c4;
              }
              goto LAB_108eaa5b8;
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108eaa5c4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 108eaa450; end: 108eaa5df; -[SCCaaSCameraOptionalConfig isEqual:] */

long FUN_108eaa450(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108eaa5b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108eaa5c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
        (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
       (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
         (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
        ((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_108eaa5c4;
              }
              goto LAB_108eaa5b8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108eaa5c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108eaa5e0; end: 108eaa5e7; -[SCCaaSCameraOptionalConfig legacyCameraViewType] */

undefined8 FUN_108eaa5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108eaa5e8; end: 108eaa5ef; -[SCCaaSCameraOptionalConfig shouldDisableSnapRecovery] */

undefined1 FUN_108eaa5e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108eaa5f0; end: 108eaa5f7; -[SCCaaSCameraOptionalConfig shouldDisableDismissalGesture] */

undefined1 FUN_108eaa5f0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108eaa5f8; end: 108eaa5ff; -[SCCaaSCameraOptionalConfig shouldHideCloseButton] */

undefined1 FUN_108eaa5f8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108eaa600; end: 108eaa607; -[SCCaaSCameraOptionalConfig cameraViewShouldUseAutoLayout] */

undefined1 FUN_108eaa600(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}


