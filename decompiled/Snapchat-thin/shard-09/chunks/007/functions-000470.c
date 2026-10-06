/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107041564; end: 1070415a3; -[SCCameraTimerDirectorModeCameraRingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107041564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763168,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276316c,0);
  return;
}



/* Entry: 1070415a4; end: 107041787; -[SCCameraTimerDirectorModeSpinnerView _setupYellowGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_1070415a4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
             undefined8 param_6)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_250 [128];
  double dStack_1d0;
  double dStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xa1);
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  pppuVar3 = (undefined8 ***)PTR__OBJC_CLASS___UIColor_1126aea70;
  ppuStack_98 = pppuVar2;
  func_0x00010bf415a0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
  ppuStack_90 = pppuVar2;
  func_0x00010bf415a0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar13;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  ppuStack_88 = ppuVar4;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  puVar6 = puVar5;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar7;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar14;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar7;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  pppuVar2 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar13);
  _objc_release(pppuVar3);
  _objc_release(pppuVar1);
  func_0x00010c17eb60(*(undefined8 *)(param_5 + _DAT_112763170));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_107041788;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = PTR_PTR_1126f85a8;
  pppuVar9 = &ppuStack_168;
  dVar17 = dVar16;
  ppuStack_168 = pppuVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(pppuVar9,PTR_s_initWithFrame__1125e2948);
  pppuVar2 = (undefined8 ***)0x0;
  if (pppuVar9 != (undefined8 ***)0x0) {
    puVar5 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)(long)_DAT_112763170;
    uVar12 = *(undefined8 *)((long)pppuVar9 + (long)puVar14);
    *(undefined **)((long)pppuVar9 + (long)puVar14) = puVar5;
    _objc_release(uVar12);
    dVar17 = dVar16;
    _CGRectGetWidth(dVar16,param_2,param_3,param_4);
    _CGRectGetHeight(dVar16,param_2,param_3,param_4);
    func_0x00010c19f0e0(0,0,dVar17,dVar16,*(undefined8 *)((long)pppuVar9 + (long)puVar14));
    func_0x00010c21acc0(*(undefined8 *)((long)pppuVar9 + (long)puVar14));
    ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d30;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x3fde666666666666);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_150 = puVar7;
    func_0x00010c0df720(0x3fe0f5c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_148 = puVar10;
    func_0x00010c0df720(0x3fe0f5c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_140 = puVar11;
    func_0x00010c0df720(0x3fe8f5c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d48;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_138 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00(*(undefined8 *)((long)pppuVar9 + (long)puVar14));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar7);
    param_3 = 0.5;
    func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,
                        *(undefined8 *)((long)pppuVar9 + (long)puVar14));
    func_0x00010beb19a0(pppuVar9);
    pppuVar1 = pppuVar9;
    func_0x00010c08c0e0(pppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(pppuVar1);
    pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(pppuVar9);
    _CGRectGetWidth();
    param_4 = param_3 + -16.0;
    func_0x00010bf20c00(pppuVar9);
    _CGRectGetHeight();
    param_3 = param_3 + -16.0;
    dVar16 = 0.0;
    func_0x00010c1739e0(0,0,param_4,param_3,pppuVar1);
    func_0x00010bf20c00(pppuVar9);
    _CGRectGetWidth();
    dVar17 = dVar16 * 0.5;
    func_0x00010bf20c00(pppuVar9);
    _CGRectGetHeight();
    func_0x00010c1dee80(dVar17,dVar16 * 0.5,pppuVar1);
    ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(pppuVar1);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(pppuVar1);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar16 = 0.0;
    _CGRectGetWidth(0,0,param_4,param_3);
    func_0x00010bf19a00(0,0,param_4,param_3,dVar16 * 0.5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(pppuVar1);
    _objc_release(puVar7);
    func_0x00010c1bdd00(0x4020000000000000,pppuVar1);
    func_0x00010c1bdb40(pppuVar1);
    func_0x00010c20e9a0(0x3fac28f5c28f5c29,pppuVar1);
    dVar17 = 1.0;
    func_0x00010c20e920(0x3ff0000000000000,pppuVar1);
    pppuVar3 = pppuVar9;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(pppuVar3);
    pppuVar2 = pppuVar1;
    _objc_release(pppuVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_107041ba0;
  dStack_1d0 = param_3;
  dStack_1c8 = param_4;
  puStack_1c0 = puVar8;
  puStack_1b8 = puVar14;
  puStack_1b0 = puVar6;
  puStack_1a8 = puVar5;
  ppuStack_1a0 = ppuVar13;
  ppuStack_198 = pppuVar3;
  ppuStack_190 = pppuVar1;
  ppuStack_188 = pppuVar9;
  ppuStack_180 = &puStack_b0;
  _CATransform3DMakeRotation(auStack_250,0,0,0,0x3ff0000000000000);
  pppuVar1 = pppuVar2;
  func_0x00010c08c0e0(pppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(pppuVar1);
  pppuVar1 = pppuVar2;
  func_0x00010c08c0e0(pppuVar2);
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar1;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar1);
  puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(dVar17 + dVar17);
  func_0x00010c1a1180(puVar6);
  fVar15 = INFINITY;
  func_0x00010c1eabe0(0x7f800000,puVar6);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb2c80(pppuVar3);
  func_0x00010c0df740(fVar15 + 6.2831855,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar6);
  _objc_release(puVar5);
  pppuVar1 = pppuVar2;
  func_0x00010c08c0e0(pppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(pppuVar1);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fc999999999999a);
  func_0x00010c1a1180(puVar5);
  func_0x00010c216920(puVar5);
  func_0x00010c08c0e0(pppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(pppuVar2);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(pppuVar3);
  return pppuVar3;
}



/* Entry: 107041788; end: 107041b9f; -[SCCameraTimerDirectorModeSpinnerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107041788(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1b0 [128];
  double dStack_130;
  double dStack_128;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_1126f85a8;
  puVar1 = &uStack_c8;
  dVar12 = param_1;
  uStack_c8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar7 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112763170;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    dVar12 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    func_0x00010c19f0e0(0,0,dVar12,param_1,*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c21acc0(*(undefined8 *)((long)puVar1 + lVar10));
    ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d30;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x3fde666666666666);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = puVar2;
    func_0x00010c0df720(0x3fe0f5c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar3;
    func_0x00010c0df720(0x3fe0f5c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a0 = puVar4;
    func_0x00010c0df720(0x3fe8f5c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d48;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_3 = 0.5;
    func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar10)
                       );
    func_0x00010beb19a0(puVar1);
    puVar7 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar7);
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    param_4 = param_3 + -16.0;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    param_3 = param_3 + -16.0;
    dVar12 = 0.0;
    func_0x00010c1739e0(0,0,param_4,param_3,puVar7);
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    dVar13 = dVar12 * 0.5;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    func_0x00010c1dee80(dVar13,dVar12 * 0.5,puVar7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(puVar7);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar7);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar12 = 0.0;
    _CGRectGetWidth(0,0,param_4,param_3);
    func_0x00010bf19a00(0,0,param_4,param_3,dVar12 * 0.5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar7);
    _objc_release(puVar2);
    func_0x00010c1bdd00(0x4020000000000000,puVar7);
    func_0x00010c1bdb40(puVar7);
    func_0x00010c20e9a0(0x3fac28f5c28f5c29,puVar7);
    dVar12 = 1.0;
    func_0x00010c20e920(0x3ff0000000000000,puVar7);
    puVar8 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  dStack_130 = param_3;
  dStack_128 = param_4;
  _CATransform3DMakeRotation(auStack_1b0,0,0,0,0x3ff0000000000000);
  puVar1 = puVar7;
  func_0x00010c08c0e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(puVar1);
  puVar1 = puVar7;
  func_0x00010c08c0e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(dVar12 + dVar12);
  func_0x00010c1a1180(puVar3);
  fVar11 = INFINITY;
  func_0x00010c1eabe0(0x7f800000,puVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb2c80(puVar8);
  func_0x00010c0df740(fVar11 + 6.2831855,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar7;
  func_0x00010c08c0e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fc999999999999a);
  func_0x00010c1a1180(puVar2);
  func_0x00010c216920(puVar2);
  func_0x00010c08c0e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar8);
  return puVar8;
}



/* Entry: 107041ba0; end: 107041dbf; -[SCCameraTimerDirectorModeSpinnerView startSpinnerAnimationWithSpeedMultiplier:] */

void FUN_107041ba0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 auStack_e0 [128];
  
  _CATransform3DMakeRotation(auStack_e0,0,0,0,0x3ff0000000000000);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110e44ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(param_1 + param_1);
  func_0x00010c1a1180(puVar3,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d30);
  fVar5 = INFINITY;
  func_0x00010c1eabe0(0x7f800000,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb2c80(uVar2);
  func_0x00010c0df740(fVar5 + 6.2831855,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fc999999999999a);
  func_0x00010c1a1180(puVar4,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d30);
  func_0x00010c216920(puVar4,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d48);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107041dc0; end: 107041e03; -[SCCameraTimerDirectorModeSpinnerView removeSpinnerAnimations] */

/* WARNING: Possible PIC construction at 0x000107041de0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107041de4) */

void FUN_107041dc0(void)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c12aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107041e04; end: 107041e17; -[SCCameraTimerDirectorModeSpinnerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107041e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763170,0);
  return;
}



/* Entry: 107041e18; end: 107041fef; -[SCCameraTimerRecordingRingView initWithFrame:maskContentFrame:cameraViewType:styleProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107041e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_12);
  puStack_88 = PTR_PTR_1126f85b0;
  uVar5 = param_1;
  uStack_90 = param_9;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_11 == 9) {
      puVar3 = PTR_PTR_1126d42b0;
      _objc_alloc();
      func_0x00010c013de0(param_1,param_2,param_3,param_4);
      uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763174);
      *(undefined **)((long)puVar1 + (long)_DAT_112763174) = puVar3;
      _objc_release(uVar5);
      func_0x00010befbb60(puVar1);
    }
    else {
      uVar2 = param_12;
      func_0x00010bf2b280(param_12);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d42a0;
      _objc_alloc();
      puVar4 = puVar3;
      FUN_10703d8cc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b040(uVar2);
      func_0x00010c014e40(param_5,param_6,param_7,param_8,uVar5);
      lVar6 = (long)_DAT_112763178;
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      *(undefined **)((long)puVar1 + lVar6) = puVar3;
      _objc_release(uVar5);
      _objc_release(puVar4);
      func_0x00010bf20c00(puVar1);
      _CGRectGetWidth();
      dVar7 = param_5 * 0.5;
      func_0x00010bf20c00(puVar1);
      _CGRectGetHeight();
      func_0x00010c17a6a0(dVar7,param_5 * 0.5,*(undefined8 *)((long)puVar1 + lVar6));
      func_0x00010befbb60(puVar1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_12);
  return (undefined1 *)puVar1;
}



/* Entry: 107041ff0; end: 107042043; -[SCCameraTimerRecordingRingView startSpinnerAnimationsWithMaxRecordingLength:speedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107041ff0(double param_1,double param_2,long param_3)

{
  func_0x00010c250bc0(1.0 / param_1,*(undefined8 *)(param_3 + _DAT_112763178));
  if (param_2 == 0.0) {
    param_2 = 1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c250b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,*(undefined8 *)(param_3 + _DAT_112763174),
             PTR_s_startSpinnerAnimationWithSpeedMu_112671d08);
  return;
}



/* Entry: 107042044; end: 10704207b; -[SCCameraTimerRecordingRingView removeSpinnerAnimations] */

/* WARNING: Possible PIC construction at 0x000107042064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107042068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107042044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763178),PTR_s_removeSpinnerAnimations_112629320);
  return;
}



/* Entry: 10704207c; end: 1070420bb; -[SCCameraTimerRecordingRingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704207c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763174,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763178,0);
  return;
}



/* Entry: 1070420bc; end: 1070422ef; -[SCCameraTimerSpinnerView startSpinnerAnimationsWithRotationsPerSecond:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070420bc(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12e400();
  param_1 = 1.0 / param_1;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar1);
  func_0x00010c192d40(param_1,puVar1);
  lVar2 = param_2;
  func_0x00010c22a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010bf514c0(lVar2);
  func_0x00010c16fd40(puVar1);
  _objc_release(lVar2);
  dVar7 = 1.05685337245341e-314;
  func_0x00010c1eabe0(0x7f800000,puVar1);
  lVar2 = param_2;
  func_0x00010c22a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0.7 / param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6d00(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c192d40(param_1,puVar3);
  func_0x00010c1eabe0(0x7f800000,puVar3);
  func_0x00010bf18c20(puVar1);
  func_0x00010c16fd40(param_1 + dVar7,puVar3);
  func_0x00010bef6c20(*(undefined8 *)(param_2 + _DAT_11276317c));
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11276317c,0);
  return;
}



/* Entry: 1070422f0; end: 107042303; -[SCCameraTimerSpinnerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070422f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276317c,0);
  return;
}



/* Entry: 107042304; end: 107042547; -[SCCameraTimerTooltipManager showTakeASnapTooltipView:animated:completion:] */

void FUN_107042304(ulong param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x10);
  if (param_3 == lVar2) {
    uVar3 = param_1;
    func_0x00010c080a40();
    if ((uVar3 & 1) != 0) goto LAB_107042520;
    lVar2 = *(long *)(param_1 + 0x10);
  }
  func_0x00010c12c960(lVar2);
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = param_3;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010befbb60();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(0x3fe0000000000000,0x3ff0000000000000);
    _objc_release(uVar4);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf20c00();
    _CGRectGetMidX();
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(lVar2);
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960(*(undefined8 *)(param_1 + 0x10),param_2,&uStack_70);
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x10));
      if (param_4 != 0) {
        _CGAffineTransformMakeScale(&uStack_a0,0x3f847ae147ae147b,0x3f847ae147ae147b);
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        func_0x00010c219960(*(undefined8 *)(param_1 + 0x10),param_2,&uStack_70);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_107042548;
        puStack_b0 = &UNK_110842e18;
        puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e8 = 0xc2000000;
        pcStack_e0 = FUN_107042588;
        puStack_d8 = &UNK_110842508;
        uStack_a8 = param_1;
        _objc_retain(param_5);
        uStack_d0 = param_5;
        func_0x00010bf03460(0x3fd999999999999a,0,0x3fe999999999999a,0,puVar1,param_2,4,&puStack_c8,
                            &puStack_f0);
        _objc_release(uStack_d0);
      }
    }
    else {
      func_0x00010c1677c0(0);
      _CGAffineTransformMakeScale(&uStack_120,0x3f847ae147ae147b,0x3f847ae147ae147b);
      uStack_68 = uStack_118;
      uStack_70 = uStack_120;
      uStack_58 = uStack_108;
      uStack_60 = uStack_110;
      uStack_48 = uStack_f8;
      uStack_50 = uStack_100;
      func_0x00010c219960(*(undefined8 *)(param_1 + 0x10),param_2,&uStack_70);
    }
  }
LAB_107042520:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107042548; end: 107042587;  */

void FUN_107042548(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 107042588; end: 10704259b;  */

void FUN_107042588(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107042594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10704259c; end: 107042647;  */

void FUN_10704259c(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _CGAffineTransformMakeScale(&uStack_50,0x3f847ae147ae147b,0x3f847ae147ae147b);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,&uStack_80);
  return;
}



/* Entry: 107042648; end: 10704264f; -[SCCameraTimerTooltipManager takeASnapTooltipView] */

undefined8 FUN_107042648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107042650; end: 107042657; -[SCCameraTimerTooltipManager suppressTooltips] */

undefined1 FUN_107042650(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 107042658; end: 107042683; -[SCCameraTimerTooltipManager .cxx_destruct] */

void FUN_107042658(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107042684; end: 10704268f; -[SCLegacyCameraTooltipsServices .cxx_destruct] */

void FUN_107042684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107042690; end: 10704269b; -[SCMainCameraScopedLegacyCameraTooltipsServices .cxx_destruct] */

void FUN_107042690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10704269c; end: 1070426c7; +[SCCSnapEditorSnapEditorActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10704269c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110989188;
  param_1[1] = &PTR_DAT_110989218;
  param_1[2] = &PTR_DAT_110989140;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1070426c8; end: 1070426ef;  */

undefined8 FUN_1070426c8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],*param_2,param_2[1]);
  return 0;
}



/* Entry: 1070426f0; end: 10704274f;  */

void FUN_1070426f0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000107042910(FUN_1070428a8);
  _objc_retainBlock(&puStack_48);
  func_0x00010704292c();
  func_0x000107042908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107042750; end: 10704277b;  */

undefined8 FUN_107042750(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10704277c; end: 1070427db;  */

void FUN_10704277c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000107042910(0x1070428d8);
  _objc_retainBlock(&puStack_48);
  func_0x00010704292c();
  func_0x000107042908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070427dc; end: 1070427e7; +[SCCSnapEditorSnapEditor componentPath] */

undefined ** FUN_1070427dc(void)

{
  return &PTR____CFConstantStringClassReference_110e994b8;
}



/* Entry: 1070427e8; end: 10704281b; -[SCCSnapEditorSnapEditor initWithViewModel:componentContext:runtime:] */

void FUN_1070427e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f85d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10704281c; end: 107042867; -[SCCSnapEditorSnapEditor setViewModel:] */

void FUN_10704281c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_107042908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107042868; end: 1070428a7; -[SCCSnapEditorSnapEditor viewModel] */

void FUN_107042868(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_107042908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1070428a8; end: 107042907;  */

void FUN_1070428a8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107042908; end: 107042937;  */

void FUN_107042908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107042938; end: 107042943; +[SCCSnapEditorPluginPostProcessSnapDocForSend modulePath] */

undefined ** FUN_107042938(void)

{
  return &PTR____CFConstantStringClassReference_110e994d8;
}



/* Entry: 107042944; end: 10704294b; +[SCCSnapEditorPluginPostProcessSnapDocForSend asyncStrictMode] */

undefined8 FUN_107042944(void)

{
  return 0;
}



/* Entry: 10704294c; end: 1070429cb; -[SCCSnapEditorPluginPostProcessSnapDocForSend postProcessSnapDocForSendWithContext:snapDoc:] */

void FUN_10704294c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x000107042b74();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x000107042b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1070429cc; end: 107042b4f; +[SCCSnapEditorPluginPostProcessSnapDocForSend invokeWithJSRuntimeProvider:context:snapDoc:completionHandler:] */

void FUN_1070429cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x000107042b74();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107042ac8;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x000107042b74();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  func_0x000107042b7c();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107042b50; end: 107042b83; +[SCCSnapEditorPluginPostProcessSnapDocForSend valdiMarshallableObjectDescriptor] */

void FUN_107042b50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110989228;
  param_1[1] = &PTR_DAT_110989258;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 107042b84; end: 107042ba7; +[SCCSafeBrowsingAPI valdiMarshallableObjectDescriptor] */

void FUN_107042b84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110989270;
  param_1[1] = &PTR_DAT_1109892a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107042ba8; end: 107042bd3; +[SCCSnapEditorFramePickerIFramePickerConfirmHandler valdiMarshallableObjectDescriptor] */

void FUN_107042ba8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109892e0;
  param_1[1] = &PTR_DAT_110989310;
  param_1[2] = &PTR_DAT_1109892b0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107042bd4; end: 107042bff;  */

undefined8 FUN_107042bd4(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1],param_2[3],param_2[4]);
  return 0;
}



/* Entry: 107042c00; end: 107042c7f;  */

void FUN_107042c00(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107042c80;
  puStack_30 = &UNK_110989320;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107042c80; end: 107042cb3;  */

void FUN_107042c80(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107042cb4; end: 107042cbf; +[SCCSnapEditorMediaUtilMergeSnapDocsForSnapEditor modulePath] */

undefined ** FUN_107042cb4(void)

{
  return &PTR____CFConstantStringClassReference_110e98638;
}



/* Entry: 107042cc0; end: 107042cc7; +[SCCSnapEditorMediaUtilMergeSnapDocsForSnapEditor asyncStrictMode] */

undefined8 FUN_107042cc0(void)

{
  return 0;
}



/* Entry: 107042cc8; end: 107042d37; -[SCCSnapEditorMediaUtilMergeSnapDocsForSnapEditor mergeSnapDocsForSnapEditorWithSnapDocs:] */

void FUN_107042cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107042d38; end: 107042ea7; +[SCCSnapEditorMediaUtilMergeSnapDocsForSnapEditor invokeWithJSRuntimeProvider:snapDocs:completionHandler:] */

void FUN_107042d38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107042e1c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107042ea8; end: 107042ecb; +[SCCSnapEditorMediaUtilMergeSnapDocsForSnapEditor valdiMarshallableObjectDescriptor] */

void FUN_107042ea8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110989350;
  param_1[1] = &PTR_DAT_110989380;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 107042ecc; end: 107042ee7; +[SCCSnapEditorStoryToolStoryServices valdiMarshallableObjectDescriptor] */

void FUN_107042ecc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110989390;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107042ee8; end: 107042ef3; +[SCCAudioEffectsToolView componentPath] */

undefined ** FUN_107042ee8(void)

{
  return &PTR____CFConstantStringClassReference_110e994f8;
}



/* Entry: 107042ef4; end: 107042f27; -[SCCAudioEffectsToolView initWithViewModel:componentContext:runtime:] */

void FUN_107042ef4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f85e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 107042f28; end: 107042f77; -[SCCAudioEffectsToolView setViewModel:] */

void FUN_107042f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107042f78; end: 107042fbb; -[SCCAudioEffectsToolView viewModel] */

void FUN_107042f78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107042fbc; end: 107042fd7; +[SCAudioEffectsRepository valdiMarshallableObjectDescriptor] */

void FUN_107042fbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109893d8;
  param_1[1] = &PTR_s_SCBridgeObservable_110989420;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107042fd8; end: 107042ff3; +[SCCAudioEffectsApiAudioEffectsActionHandler valdiMarshallableObjectDescriptor] */

void FUN_107042fd8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110989468;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110989438;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107042ff4; end: 10704301b;  */

undefined8 FUN_107042ff4(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1]);
  return 0;
}



/* Entry: 10704301c; end: 10704309b;  */

void FUN_10704301c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070430fc;
  puStack_30 = &UNK_1108d0ce0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10704309c; end: 1070430fb;  */

undefined8 FUN_10704309c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d42c8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1070430fc; end: 10704312b;  */

void FUN_1070430fc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10704312c; end: 107043137;  */

void FUN_10704312c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107043138; end: 10704314b; +[SCCSnapDocWallpaperRemixServiceNativeSnapDocWallpaperRemixService valdiMarshallableObjectDescriptor] */

void FUN_107043138(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110989528;
  param_1[1] = &PTR_DAT_110989558;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10704314c; end: 107043173; +[SCCSnapDocWallpaperRemixServiceWallpaperRemixParameters valdiMarshallableObjectDescriptor] */

void FUN_10704314c(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110989570;
  param_1[1] = &PTR_DAT_1109895b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 107043174; end: 10704317f; +[SCCCopyLinkSheetComponentCopyLinkSheetComponent componentPath] */

undefined ** FUN_107043174(void)

{
  return &PTR____CFConstantStringClassReference_110e99518;
}



/* Entry: 107043180; end: 1070431b3; -[SCCCopyLinkSheetComponentCopyLinkSheetComponent initWithViewModel:componentContext:runtime:] */

void FUN_107043180(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f85e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1070431b4; end: 107043203; -[SCCCopyLinkSheetComponentCopyLinkSheetComponent setViewModel:] */

void FUN_1070431b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107043204; end: 107043247; -[SCCCopyLinkSheetComponentCopyLinkSheetComponent viewModel] */

void FUN_107043204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107043248; end: 1070432e3; -[SCFriendsFeedOpenMiniProfileActionHandler initWithFriendProfileScopeExposer:presentingViewController:] */

undefined1 *
FUN_107043248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f85f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070432e4; end: 1070433fb; -[SCFriendsFeedOpenMiniProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1070432e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf738;
    _objc_opt_class(PTR_PTR_1126cf738);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      param_1 = 0;
      goto LAB_1070433dc;
    }
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf738;
    _objc_opt_class(PTR_PTR_1126cf738);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010beb9360(param_1);
  }
  _objc_release(uVar1);
LAB_1070433dc:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1070433fc; end: 1070435ef; -[SCFriendsFeedOpenMiniProfileActionHandler _showFriendProfileForActionData:] */

undefined8 FUN_1070433fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      _objc_retain();
      lVar2 = lVar1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010010fab4(lVar3,PTR_DAT_1126a4e58);
      _objc_release(lVar3);
      if (((int)lVar2 == 0) || (lVar3 == 0)) {
        _objc_retain(lVar1);
        lVar2 = lVar1;
      }
      else {
        lVar3 = lVar1;
        func_0x00010c0d66a0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c275140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
      _objc_release(lVar1);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      func_0x00010c0f1e60();
      func_0x00010befb8e0();
      puVar5 = PTR_PTR_1126b3fa0;
      _objc_alloc();
      uVar6 = param_3;
      func_0x00010c244280(param_3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c0159e0(puVar5);
      }
      _objc_release(uVar6);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(lVar2);
      uVar6 = 1;
      goto LAB_1070435c8;
    }
  }
  uVar6 = 0;
LAB_1070435c8:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1070435f0; end: 107043643; -[SCFriendsFeedOpenMiniProfileActionHandler friendProfileDidDismiss:] */

void FUN_1070435f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c072560(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107043644; end: 10704365b; -[SCFriendsFeedOpenMiniProfileActionHandler presentingViewController] */

void FUN_107043644(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10704365c; end: 107043667; -[SCFriendsFeedOpenMiniProfileActionHandler setPresentingViewController:] */

void FUN_10704365c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107043668; end: 1070437ab; -[SCFriendsFeedOpenMiniProfileActionHandler .cxx_destruct] */

void FUN_107043668(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070437ac; end: 1070437b3;  */

void FUN_1070437ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userSession_1126827f8);
  return;
}



/* Entry: 1070437b4; end: 107043827; -[SCChatAudioNotePlaybackSessionLogger initWithUserTrackedLogger:] */

undefined1 * FUN_1070437b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f85f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107043828; end: 10704386b; -[SCChatAudioNotePlaybackSessionLogger startSession:playbackSpeed:metricsInfo:] */

void FUN_107043828(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704386c; end: 107043a2f; -[SCChatAudioNotePlaybackSessionLogger endSession:] */

void FUN_10704386c(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(long *)(param_2 + 8) != 0) {
    puVar2 = PTR_PTR_1126d42d8;
    _objc_opt_new(PTR_PTR_1126d42d8);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0748c0(uVar3);
    func_0x00010c1b1940(puVar2,param_3,uVar3);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf026e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167c40(puVar2,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c07d860(uVar3);
    func_0x00010c1b4340(puVar2,param_3,uVar3);
    func_0x00010c0dbac0(*(undefined8 *)(param_2 + 8));
    func_0x00010c1cdd40(puVar2);
    dVar4 = *(double *)(param_2 + 0x18);
    dVar5 = ABS(dVar4 + -1.0);
    dVar6 = ABS(dVar4 + 1.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar6))) {
      bVar1 = dVar5 < dVar6;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      dVar5 = ABS(dVar4 + -1.5);
      dVar6 = ABS(dVar4 + 1.5) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar6))) {
        bVar1 = dVar5 < dVar6;
      }
      if (bVar1) {
        uVar3 = 1;
      }
      else {
        dVar5 = ABS(dVar4 + 2.0) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        uVar3 = 2;
        if (dVar5 <= ABS(dVar4 + -2.0)) {
          uVar3 = 0xffffffffffffffff;
        }
      }
    }
    func_0x00010c1dd840(puVar2,param_3,uVar3);
    func_0x00010c1be220((param_1 - *(double *)(param_2 + 0x10)) * 1000.0,puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107043a30; end: 107043a5f; -[SCChatAudioNotePlaybackSessionLogger .cxx_destruct] */

void FUN_107043a30(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107043a60; end: 107043b93; -[SCChatAudioNotePlayer initWithContentDelivery:userTrackedLogger:performer:] */

undefined1 *
FUN_107043a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8600;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x68) = 0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d42e0;
    _objc_alloc();
    func_0x00010c05f0c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 2;
    puVar3 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107043b94; end: 107043bfb; -[SCChatAudioNotePlayer dealloc] */

void FUN_107043b94(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1126f8600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107043bfc; end: 107043d7b; -[SCChatAudioNotePlayer playOrPauseAudioNoteWithSessionId:media:messageAnalyticsId:delegate:metricsInfo:playbackSpeed:offsetInSeconds:] */

void FUN_107043bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar1 = &puStack_c0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107043d7c;
  puStack_a8 = &UNK_1108ba8b8;
  uStack_a0 = param_2;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  uStack_68 = param_1;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_c0);
  func_0x00010be713a0(param_2,param_3,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107043d7c; end: 107043d97;  */

void FUN_107043d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x20),
             PTR_s__playOrPauseAudioNoteHelperWithS_11257abb0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 107043d98; end: 10704406b; -[SCChatAudioNotePlayer _playOrPauseAudioNoteHelperWithSessionId:media:messageAnalyticsId:delegate:metricsInfo:playbackSpeed:offsetInSeconds:] */

void FUN_107043d98(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar4 = param_5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    func_0x00010c256f20(param_2);
    goto LAB_107043ff4;
  }
  lVar4 = *(long *)(param_2 + 0x18);
  _objc_retain(lVar4);
  _objc_retain(param_4);
  if (lVar4 == param_4) {
    _objc_release(param_4);
    _objc_release(lVar4);
LAB_107043e90:
    _objc_storeWeak(param_2 + 0x10,param_7);
    func_0x00010c272b00(param_2);
  }
  else {
    if (param_4 == 0) {
      _objc_release(lVar4);
    }
    else {
      lVar1 = lVar4;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(lVar4);
      if ((int)lVar1 != 0) goto LAB_107043e90;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      func_0x00010c256f20(param_2);
    }
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(param_2 + 0x10,param_7);
    _objc_initWeak(auStack_78,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0c5180(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4b4c0();
    _objc_release(lVar4);
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_78);
      uStack_80 = param_1;
      _objc_retain(param_9);
      func_0x00010c13e520(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(param_9);
      _objc_destroyWeak(auStack_88);
    }
    _objc_destroyWeak(auStack_78);
  }
LAB_107043ff4:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10704406c; end: 1070440db;  */

void FUN_10704406c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010be2c220(uVar2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070440dc; end: 1070441c3; -[SCChatAudioNotePlayer _handleMediaLoaded:playbackSpeed:offsetInSeconds:] */

void FUN_1070440dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_5);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010bdeaf20(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1070441c4; end: 1070441fb;  */

void FUN_1070441c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be74580(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070441fc; end: 1070442b3; -[SCChatAudioNotePlayer _playAudioNoteWithData:playbackSpeed:offsetInSeconds:] */

void FUN_1070441fc(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar2 = PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8;
    _objc_alloc();
    func_0x00010c008360();
    uVar3 = *(undefined8 *)(param_3 + 8);
    *(undefined **)(param_3 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c195060(*(undefined8 *)(param_3 + 8),param_4,1);
    func_0x00010c1e7640((float)param_1,*(undefined8 *)(param_3 + 8));
    func_0x00010c187d00(param_2,*(undefined8 *)(param_3 + 8));
    func_0x00010c18b5e0(*(undefined8 *)(param_3 + 8),param_4,param_3);
    iVar1 = (int)*(undefined8 *)(param_3 + 8);
    func_0x00010c10a180();
    if (iVar1 != 0) {
      func_0x00010c0fe360(param_3);
      goto LAB_1070442a0;
    }
  }
  func_0x00010c137fe0(param_3);
LAB_1070442a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1070442b4; end: 1070443cf; -[SCChatAudioNotePlayer playOrPauseWithSessionId:data:offsetSecs:delegate:] */

void FUN_1070442b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1070443d0;
  puStack_70 = &UNK_1108475b0;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  func_0x00010be713a0(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070443d0; end: 1070443e3;  */

void FUN_1070443d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__playOrPauseWithSessionId_data_o_11257abb8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1070443e4; end: 10704452f; -[SCChatAudioNotePlayer _playOrPauseWithSessionId:data:offsetSecs:delegate:] */

void FUN_1070443e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_2 + 0x18);
  _objc_retain(lVar3);
  _objc_retain(param_4);
  if (lVar3 == param_4) {
    _objc_release(param_4);
    _objc_release(lVar3);
LAB_107044488:
    _objc_storeWeak(param_2 + 0x10,param_7);
    func_0x00010c272b00(param_2);
  }
  else {
    if (param_4 == 0) {
      _objc_release(lVar3);
    }
    else {
      lVar1 = lVar3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(lVar3);
      if ((int)lVar1 != 0) goto LAB_107044488;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      func_0x00010c256f20(param_2);
    }
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(param_2 + 0x10,param_7);
    func_0x00010bf885a0(param_6);
    func_0x00010be2c220(0x3ff0000000000000,param_1,param_2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107044530; end: 1070445a3; -[SCChatAudioNotePlayer play] */

void FUN_107044530(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070445a4;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  uStack_28 = param_1;
  _objc_retainBlock(ppuVar1);
  func_0x00010be713a0(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1070445a4; end: 1070445ab;  */

void FUN_1070445a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__playHelper_11257ab70);
  return;
}



/* Entry: 1070445ac; end: 107044667; -[SCChatAudioNotePlayer _playHelper] */

void FUN_1070445ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c1a9bc0(*(undefined8 *)(param_2 + 0x40),param_3,1);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  *(undefined8 *)(param_2 + 0x28) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
  uVar3 = param_1;
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 8));
  func_0x00010c250860(param_1,(double)(float)uVar3,uVar2,param_3,*(undefined8 *)(param_2 + 0x50));
  func_0x00010c2241a0(0x3f800000,*(undefined8 *)(param_2 + 8));
  func_0x00010c0fe360(*(undefined8 *)(param_2 + 8));
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf0f4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107044668; end: 1070446db; -[SCChatAudioNotePlayer pause] */

void FUN_107044668(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1070446dc;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  uStack_28 = param_1;
  _objc_retainBlock(ppuVar1);
  func_0x00010be713a0(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1070446dc; end: 1070446e3;  */

void FUN_1070446dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__pauseHelper_112579cd0);
  return;
}



/* Entry: 1070446e4; end: 10704478f; -[SCChatAudioNotePlayer _pauseHelper] */

void FUN_1070446e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  *(undefined8 *)(param_2 + 0x28) = 1;
  func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 0x38) = param_1;
  func_0x00010c0f5b20(*(undefined8 *)(param_2 + 8));
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf0f4c0();
  _objc_release(lVar2);
  func_0x00010c1a9bc0(*(undefined8 *)(param_2 + 0x40));
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf953f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_endSession__1125c2ea0);
  return;
}



/* Entry: 107044790; end: 10704482f; -[SCChatAudioNotePlayer stopWithCompletion:] */

void FUN_107044790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107044830;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  func_0x00010be713a0(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107044830; end: 10704483b;  */

void FUN_107044830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__stopHelperWithCompletion__11258e5b0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10704483c; end: 10704492b; -[SCChatAudioNotePlayer _stopHelperWithCompletion:] */

void FUN_10704483c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b6b08;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  *(undefined8 *)(param_1 + 0x28) = 2;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf60480(*(undefined8 *)(param_1 + 8));
  func_0x00010bf953e0(uVar3);
  func_0x00010c255780(*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar3);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf0f4c0();
  _objc_release(lVar2);
  _objc_storeWeak(param_1 + 0x10,0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar3);
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010be8b700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10704492c; end: 1070449a3; -[SCChatAudioNotePlayer setPlaybackSpeed:] */

void FUN_10704492c(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_2;
  func_0x00010c07a400();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
    func_0x00010bf953e0(uVar2);
  }
  uVar3 = (ulong)(uint)(float)param_1;
  func_0x00010c1e7640(uVar3,*(undefined8 *)(param_2 + 8));
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
  uVar4 = uVar3;
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c250870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,(double)(float)uVar4,uVar2,PTR_s_startSession_playbackSpeed_metri_112671c40,
             *(undefined8 *)(param_2 + 0x50));
  return;
}



/* Entry: 1070449a4; end: 107044a1b; -[SCChatAudioNotePlayer seekToTime:] */

void FUN_1070449a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  func_0x00010c07a400();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
    func_0x00010bf953e0(uVar2);
  }
  func_0x00010c187d00(param_1,*(undefined8 *)(param_2 + 8));
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf60480(*(undefined8 *)(param_2 + 8));
  uVar2 = param_1;
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c250870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,(double)(float)uVar2,uVar3,PTR_s_startSession_playbackSpeed_metri_112671c40,
             *(undefined8 *)(param_2 + 0x50));
  return;
}


