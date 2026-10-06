/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108edb688; end: 108edb873; -[SCPreviewActionButton setNgsUIStyleEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edb688(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if (*(byte *)(param_5 + _DAT_11277d64c) == param_7) {
    return;
  }
  *(char *)(param_5 + _DAT_11277d64c) = (char)param_7;
  if (param_7 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_5);
    _objc_release(puVar1);
    lVar2 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(lVar2);
    dVar4 = *(double *)(param_5 + _DAT_11277d648);
    func_0x00010c1c3c80(dVar4,param_5);
    func_0x00010c21d680(param_5);
    func_0x00010bf20c00(param_5);
    lVar2 = param_5;
    func_0x00010bfe6ac0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010bf20c00(param_5);
    lVar3 = param_5;
    func_0x00010bfe6ac0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1aa420((param_3 - dVar4) * 0.5,(param_4 - param_2) * 0.5,param_5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_5);
    _objc_release(puVar1);
    func_0x00010bfb68e0(param_5);
    func_0x00010bfb68e0(param_5);
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    lVar2 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_4 * 0.5);
    _objc_release(lVar2);
    func_0x00010c1c3c80(0x3ff0ccccc0000000,param_5);
    func_0x00010c21d680(param_5);
    func_0x00010c1aa420(0x4042000000000000,0x4028000000000000,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108edb874; end: 108edb8a3; +[SCPreviewActionButton buttonSizeWithNGSStyleEnabled:] */

undefined1  [16] FUN_108edb874(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x404e000000000000;
  if (param_3 == 0) {
    uVar1 = 0x404a000000000000;
  }
  uVar2 = 0x4042000000000000;
  if (param_3 == 0) {
    uVar2 = 0x404c000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 108edb8a4; end: 108edb8b3; -[SCPreviewActionButton ngsUIStyleEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108edb8a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d64c);
}



/* Entry: 108edb8b4; end: 108edbc7f; -[SCPreviewSaveButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108edb8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [48];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126ff180;
  puVar1 = &uStack_b0;
  uStack_b0 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf20c00(puVar1);
    func_0x00010b6908b0();
    uVar11 = 0x4040800000000000;
    uVar6 = param_1;
    uVar9 = param_2;
    uVar10 = uVar11;
    func_0x00010b690910();
    puVar3 = PTR_PTR_1126b0c40;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar8 = (long)_DAT_11277d654;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c19f0e0(uVar6,uVar9,uVar11,uVar10,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar7 = (long)_DAT_11277d658;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)((long)puVar1 + lVar7));
    _CGAffineTransformMakeScale(auStack_e0,0x3feb333333333333,0x3feb333333333333);
    func_0x00010c219960(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126dc6f8;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046ae0(0x4040800000000000,0x3ff0000000000000);
    lVar7 = (long)_DAT_11277d65c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar4);
    func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11277d660;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar4);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11277d664;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar4);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b08d8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a28(0x4014000000000000,0x3ff0000000000000,
                        *(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,uVar6,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 108edbc80; end: 108edbcef; -[SCPreviewSaveButton updateLabelWithText:shouldShow:] */

void FUN_108edbc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c087500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(param_3);
  }
  else {
    func_0x00010bf47180(param_1,param_2,param_3);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108edbcf0; end: 108edbf63; -[SCPreviewSaveButton startAnimationForSaving] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edbcf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf040e0(0x3fc53f7ced916873,0,PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185a10,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185a20,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf040e0(0x3fc53f7ced916873,0,PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185a10,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185a30,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fc53f7ced916873,puVar3);
  func_0x00010c16fd40(0,puVar3);
  lVar14 = (long)_DAT_11277d654;
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar5);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar14));
  _CGAffineTransformMakeScale(&uStack_a8,0x3fe999999999999a,0x3fe999999999999a);
  uStack_d8 = uStack_a0;
  uStack_e0 = uStack_a8;
  uStack_c8 = uStack_90;
  uStack_d0 = uStack_98;
  uStack_b8 = uStack_80;
  uStack_c0 = uStack_88;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar14),param_2,&uStack_e0);
  lVar14 = (long)_DAT_11277d668;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar14));
  puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fb0e5604189374c,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__savingIndicatorTimerDidFire__11253e060,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_108edbf64;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(puVar1 + _DAT_11277d654);
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(uVar5);
  lVar14 = (long)_DAT_11277d668;
  func_0x00010c069d00(*(undefined8 *)(puVar1 + lVar14));
  uVar5 = *(undefined8 *)(puVar1 + lVar14);
  *(undefined8 *)(puVar1 + lVar14) = 0;
  _objc_release(uVar5);
  func_0x00010c2558c0(*(undefined8 *)(puVar1 + _DAT_11277d658));
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_1111832d8);
  uVar12 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_170 = puVar3;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_168 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_170,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puStack_1d8 = puVar2;
  func_0x00010c192d40(0x3fe3333333333333,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183308);
  uStack_1e0 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_190 = puVar4;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_188 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_180 = puVar7;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_178 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_190,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar3,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fe3333333333333,puVar3);
  puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1a0 = puVar3;
  puStack_198 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar4);
  uVar5 = *(undefined8 *)(puVar1 + _DAT_11277d660);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183338);
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_1b0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1a8 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar2);
  puVar7 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110f011f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar7,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183368);
  uVar5 = uStack_1e0;
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uStack_1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_1c0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b8 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar7);
  puVar8 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1d0 = puVar7;
  puStack_1c8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar8,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar8);
  lVar14 = (long)_DAT_11277d664;
  uVar5 = *(undefined8 *)(puVar1 + lVar14);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar5);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(puVar1 + lVar14));
  lVar14 = (long)_DAT_11277d66c;
  func_0x00010c069d00(*(undefined8 *)(puVar1 + lVar14));
  puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fc53f7ced916873,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,puVar1,
                      PTR_s__sunburstTimerDidFire__11253e068,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar1 + lVar14);
  *(undefined **)(puVar1 + lVar14) = puVar6;
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar6 = puStack_1d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_108edc5a4;
  lVar10 = (long)_DAT_11277d654;
  uVar5 = *(undefined8 *)(puVar6 + lVar10);
  puStack_220 = puVar7;
  puStack_218 = puVar2;
  puStack_210 = puVar4;
  puStack_208 = puVar3;
  lStack_200 = lVar14;
  puStack_1f8 = puVar1;
  ppuStack_1f0 = &puStack_f0;
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar5);
  func_0x00010c2558c0(*(undefined8 *)(puVar6 + _DAT_11277d658));
  func_0x00010c2559a0(*(undefined8 *)(puVar6 + _DAT_11277d65c));
  lVar11 = (long)_DAT_11277d660;
  uVar5 = *(undefined8 *)(puVar6 + lVar11);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar5);
  lVar13 = (long)_DAT_11277d664;
  uVar5 = *(undefined8 *)(puVar6 + lVar13);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar5);
  lVar14 = (long)_DAT_11277d668;
  func_0x00010c069d00(*(undefined8 *)(puVar6 + lVar14));
  uVar5 = *(undefined8 *)(puVar6 + lVar14);
  *(undefined8 *)(puVar6 + lVar14) = 0;
  _objc_release(uVar5);
  lVar14 = (long)_DAT_11277d66c;
  func_0x00010c069d00(*(undefined8 *)(puVar6 + lVar14));
  uVar5 = *(undefined8 *)(puVar6 + lVar14);
  *(undefined8 *)(puVar6 + lVar14) = 0;
  _objc_release(uVar5);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(puVar6 + lVar10));
  uStack_248 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_250 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_238 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_240 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_228 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_230 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(puVar6 + lVar10),param_2,&uStack_250);
  func_0x00010c1677c0(0,*(undefined8 *)(puVar6 + lVar11));
  func_0x00010c1677c0(0,*(undefined8 *)(puVar6 + lVar13));
  return;
}



/* Entry: 108edbf64; end: 108edc5a3; -[SCPreviewSaveButton startAnimationForSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edbf64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d654);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(uVar1);
  lVar9 = (long)_DAT_11277d668;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar9));
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = 0;
  _objc_release(uVar1);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11277d658));
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_1111832d8);
  uVar12 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_90 = puVar3;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puStack_f8 = puVar2;
  func_0x00010c192d40(0x3fe3333333333333,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183308);
  uStack_100 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_b0 = puVar4;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_a8 = puVar5;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_a0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fe3333333333333,puVar3);
  puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar3;
  puStack_b8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fe3333333333333,puVar4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d660);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183338);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_d0 = puVar5;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fe3333333333333,puVar2);
  puVar6 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110f011f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar6,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183368);
  uVar1 = uStack_100;
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uStack_100);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_e0 = puVar7;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar6,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fe3333333333333,puVar6);
  puVar7 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar6;
  puStack_e8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar7,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fe3333333333333,puVar7);
  lVar9 = (long)_DAT_11277d664;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar9));
  lVar9 = (long)_DAT_11277d66c;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar9));
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fc53f7ced916873,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__sunburstTimerDidFire__11253e068,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar5;
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = puStack_f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_108edc5a4;
  lVar10 = (long)_DAT_11277d654;
  uVar1 = *(undefined8 *)(puVar5 + lVar10);
  puStack_140 = puVar6;
  puStack_138 = puVar2;
  puStack_130 = puVar4;
  puStack_128 = puVar3;
  lStack_120 = lVar9;
  lStack_118 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c2558c0(*(undefined8 *)(puVar5 + _DAT_11277d658));
  func_0x00010c2559a0(*(undefined8 *)(puVar5 + _DAT_11277d65c));
  lVar11 = (long)_DAT_11277d660;
  uVar1 = *(undefined8 *)(puVar5 + lVar11);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar13 = (long)_DAT_11277d664;
  uVar1 = *(undefined8 *)(puVar5 + lVar13);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar9 = (long)_DAT_11277d668;
  func_0x00010c069d00(*(undefined8 *)(puVar5 + lVar9));
  uVar1 = *(undefined8 *)(puVar5 + lVar9);
  *(undefined8 *)(puVar5 + lVar9) = 0;
  _objc_release(uVar1);
  lVar9 = (long)_DAT_11277d66c;
  func_0x00010c069d00(*(undefined8 *)(puVar5 + lVar9));
  uVar1 = *(undefined8 *)(puVar5 + lVar9);
  *(undefined8 *)(puVar5 + lVar9) = 0;
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(puVar5 + lVar10));
  uStack_168 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_170 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_160 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_150 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(puVar5 + lVar10),param_2,&uStack_170);
  func_0x00010c1677c0(0,*(undefined8 *)(puVar5 + lVar11));
  func_0x00010c1677c0(0,*(undefined8 *)(puVar5 + lVar13));
  return;
}



/* Entry: 108edc5a4; end: 108edc6db; -[SCPreviewSaveButton reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edc5a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = (long)_DAT_11277d654;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11277d658));
  func_0x00010c2559a0(*(undefined8 *)(param_1 + _DAT_11277d65c));
  lVar4 = (long)_DAT_11277d660;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11277d664;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277d668;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277d66c;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_70);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 108edc6dc; end: 108edc733; -[SCPreviewSaveButton setSaved:] */

/* WARNING: Possible PIC construction at 0x000108edc714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108edc718) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edc6dc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_11277d654),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108edc734; end: 108edc76f; -[SCPreviewSaveButton _savingIndicatorTimerDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edc734(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11277d658));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d668);
  *(undefined8 *)(param_1 + _DAT_11277d668) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108edc770; end: 108edc7bb; -[SCPreviewSaveButton _sunburstTimerDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edc770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c24dda0(*(undefined8 *)(param_1 + _DAT_11277d65c),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183380,
                      &PTR__OBJC_CLASS___NSConstantArray_111183398);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d66c);
  *(undefined8 *)(param_1 + _DAT_11277d66c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108edc7bc; end: 108edc7cb; -[SCPreviewSaveButton isSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108edc7bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d650);
}



/* Entry: 108edc7cc; end: 108edc85b; -[SCPreviewSaveButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edc7cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d66c,0);
  _objc_storeStrong(param_1 + _DAT_11277d668,0);
  _objc_storeStrong(param_1 + _DAT_11277d664,0);
  _objc_storeStrong(param_1 + _DAT_11277d660,0);
  _objc_storeStrong(param_1 + _DAT_11277d65c,0);
  _objc_storeStrong(param_1 + _DAT_11277d658,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d654,0);
  return;
}



/* Entry: 108edc85c; end: 108edcbaf; -[SCPreviewSendButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108edc85c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff188;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar9 = (long)_DAT_11277d670;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined **)((long)puVar2 + lVar9) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4014000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4014000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e4ccccd);
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010b83340c(0x88);
    func_0x00010c23ba80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar9));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar10 = (long)_DAT_11277d674;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined **)((long)puVar2 + lVar10) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010b88a460();
    puVar5 = puVar3;
    if (((int)puVar4 != 0) && (lRam00000001138466f0 < 3)) {
      plVar7 = (long *)&UNK_10e5f30e8;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0) goto LAB_108edca70;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0x88);
      plVar7 = (long *)&UNK_10e5f3128;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0) goto LAB_108edca70;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0xd5);
      func_0x00010bfe9720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)((long)puVar2 + lVar10));
      _objc_release(puVar3);
    }
LAB_108edca70:
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar10 = (long)_DAT_11277d678;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined **)((long)puVar2 + lVar10) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4033000000000000);
    iVar1 = (int)puVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar2 + lVar10));
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010b88a460();
    if ((iVar1 != 0) && (lRam00000001138466f0 < 3)) {
      plVar7 = (long *)&UNK_10e5f30e8;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0) goto LAB_108edcb34;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0x88);
      plVar7 = (long *)&UNK_10e5f3128;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0xd5) break;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0);
    }
LAB_108edcb34:
    func_0x00010c23ba80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar2 + lVar10));
    _objc_release(puVar3);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010c23d620(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar9));
    func_0x00010befbb60(puVar2);
    _objc_release(puVar5);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108edcbb0; end: 108edcc3f; -[SCPreviewSendButton setupSendButtonWithLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edcbb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277d678;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar3));
  lVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  *(bool *)(param_1 + _DAT_11277d67c) = lVar1 != 0;
  uVar2 = 0x3ff0000000000000;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108edcc40; end: 108edcd13; -[SCPreviewSendButton _setupSendToLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edcc40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277d680;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    _objc_release(puVar1);
  }
  lVar3 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar3);
  func_0x00010c262ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108edcd14; end: 108edcd6f; -[SCPreviewSendButton _sendLabelFrame] */

double FUN_108edcd14(double param_1,undefined8 param_2)

{
  func_0x00010bf345e0();
  func_0x00010bf345e0(param_2);
  return param_1 + -75.0;
}



/* Entry: 108edcd70; end: 108edcdbf; -[SCPreviewSendButton dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edcd70(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277d680));
  puStack_28 = PTR_PTR_1126ff188;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108edcdc0; end: 108edce0f; -[SCPreviewSendButton removeFromSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edcdc0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff188;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_removeFromSuperview_112628c78);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277d680));
  return;
}



/* Entry: 108edce10; end: 108edd04b; -[SCPreviewSendButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edce10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff188;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010be9f600(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277d680));
  if (*(char *)(param_1 + _DAT_11277d67c) == '\x01') {
    uVar3 = 0x4024000000000000;
    _CGRectGetMinX(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
    dVar4 = 10.0;
    _CGRectGetMinY(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
    dVar7 = dVar4;
    func_0x00010bf20c00(param_1);
    _CGRectGetWidth();
    dVar5 = 10.0;
    _CGRectGetMinX(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
    uVar6 = 0x4024000000000000;
    _CGRectGetHeight(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
    lVar1 = (long)_DAT_11277d670;
    func_0x00010c19f0e0(uVar3,dVar4,dVar7 + dVar5 * -2.0,uVar6,*(undefined8 *)(param_1 + lVar1));
    dVar4 = 10.0;
    _CGRectGetHeight(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
    dVar8 = dVar4 * 0.5;
    lVar2 = (long)_DAT_11277d678;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar2));
    _CGRectGetHeight();
    dVar4 = dVar4 * 0.5;
    dVar8 = dVar8 - dVar4;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar2));
    _CGRectGetWidth();
    dVar7 = dVar4;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar2));
    _CGRectGetHeight();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    dVar5 = 20.0;
  }
  else {
    lVar1 = (long)_DAT_11277d670;
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    dVar4 = 54.0;
    dVar5 = 10.0;
    dVar8 = 10.0;
    dVar7 = 54.0;
  }
  func_0x00010c19f0e0(dVar5,dVar8,dVar4,dVar7,uVar3);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetWidth();
  dVar5 = dVar5 + -46.0;
  dVar7 = 10.0;
  _CGRectGetHeight(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
  dVar4 = 10.0;
  _CGRectGetHeight(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
  func_0x00010c19f0e0(dVar5,0x4020000000000000,dVar7 + -14.0,dVar4 + -16.0,
                      *(undefined8 *)(param_1 + _DAT_11277d674));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetHeight();
  func_0x00010c1f5ec0(dVar5 * 0.5,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 108edd04c; end: 108edd07f; -[SCPreviewSendButton setEnabled:] */

void FUN_108edd04c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff188;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 108edd080; end: 108edd0d7; -[SCPreviewSendButton setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edd080(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff188;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHidden__1126479f8);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277d680));
  return;
}



/* Entry: 108edd0d8; end: 108edd137; -[SCPreviewSendButton setAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edd0d8(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff188;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setAlpha__112637810);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11277d680));
  return;
}



/* Entry: 108edd138; end: 108edd19f; -[SCPreviewSendButton sendButtonWidthWithSendLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108edd138(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11277d678));
  _CGRectGetWidth();
  dVar1 = 10.0;
  _CGRectGetMinX(0x4024000000000000,0x4024000000000000,0x404b000000000000,0x404b000000000000);
  return param_1 + 20.0 + 46.0 + 8.0 + dVar1 * 2.0;
}



/* Entry: 108edd1a0; end: 108edd1af; -[SCPreviewSendButton sendToLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108edd1a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d680);
}



/* Entry: 108edd1b0; end: 108edd1ef; -[SCPreviewSendButton setSendToLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edd1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d680;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108edd1f0; end: 108edd1ff; -[SCPreviewSendButton isShowingSendButtonLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108edd1f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d67c);
}



/* Entry: 108edd200; end: 108edd25f; -[SCPreviewSendButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edd200(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d680,0);
  _objc_storeStrong(param_1 + _DAT_11277d674,0);
  _objc_storeStrong(param_1 + _DAT_11277d678,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d670,0);
  return;
}



/* Entry: 108edd260; end: 108eddae7; -[SCPreviewQuickEditingBar initWithFrame:] */

/* WARNING: Possible PIC construction at 0x000108edd37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108edd500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108edd380) */
/* WARNING: Removing unreachable block (ram,0x000108edd504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108edd260(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126ff190;
  puVar1 = &uStack_128;
  uStack_128 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      return 0;
    }
    ___stack_chk_fail();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d688);
    param_3 = param_3 ^ 1;
  }
  else {
    puVar2 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11277d684;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1c3c80(0x3ff3333340000000,*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbd40(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setHidden__1126479f8,param_3);
  return uVar3;
}



/* Entry: 108eddae8; end: 108eddafb; -[SCPreviewQuickEditingBar setDeleteButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddae8(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d688),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 108eddafc; end: 108eddb53; -[SCPreviewQuickEditingBar setCancelButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddafc(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d684;
  uVar1 = (uint)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c074c20();
  if (param_3 != uVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 108eddb54; end: 108eddb9f; -[SCPreviewQuickEditingBar setFinishAndCancelButtonVisible:] */

/* WARNING: Possible PIC construction at 0x000108eddb80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108eddb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddb54(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3,*(undefined8 *)(param_1 + _DAT_11277d68c),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108eddba0; end: 108eddbeb; -[SCPreviewQuickEditingBar setInfoLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddba0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277d690;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108eddbec; end: 108eddbf7; -[SCPreviewQuickEditingBar preferredHeight] */

undefined8 FUN_108eddbec(void)

{
  return 0x404e000000000000;
}



/* Entry: 108eddbf8; end: 108eddbfb; -[SCPreviewQuickEditingBar componentView] */

void FUN_108eddbf8(void)

{
  return;
}



/* Entry: 108eddbfc; end: 108eddc2f; -[SCPreviewQuickEditingBar _deleteTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddbfc(long param_1)

{
  param_1 = param_1 + _DAT_11277d694;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108eddc30; end: 108eddc63; -[SCPreviewQuickEditingBar _cancelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddc30(long param_1)

{
  param_1 = param_1 + _DAT_11277d694;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108eddc64; end: 108eddc97; -[SCPreviewQuickEditingBar _finishTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddc64(long param_1)

{
  param_1 = param_1 + _DAT_11277d694;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108eddc98; end: 108eddcb7; -[SCPreviewQuickEditingBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddc98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d694);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eddcb8; end: 108eddccb; -[SCPreviewQuickEditingBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddcb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d694,param_3);
  return;
}



/* Entry: 108eddccc; end: 108eddd83; -[SCPreviewQuickEditingBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eddccc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277d694);
  _objc_storeStrong(param_1 + _DAT_11277d690,0);
  _objc_storeStrong(param_1 + _DAT_11277d68c,0);
  _objc_storeStrong(param_1 + _DAT_11277d688,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d684,0);
  return;
}



/* Entry: 108eddd84; end: 108eddf9b;  */

ulong FUN_108eddd84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c246f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  param_1 = ABS(param_1);
  if (1.1920928955078125e-07 <= param_1) {
    _objc_release(uVar1);
LAB_108eddecc:
    uVar1 = param_3;
    func_0x00010c246f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    uVar2 = param_4;
    dVar5 = param_1;
    func_0x00010c246f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar4 = dVar5;
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_1 <= dVar5) {
      uVar1 = param_3;
      func_0x00010c246f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      uVar2 = param_4;
      dVar5 = dVar4;
      func_0x00010c246f40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      uVar3 = (ulong)(dVar4 < dVar5);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_108eddf70;
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010c246f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar5 = ABS(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    param_1 = 1.1920928955078125e-07;
    if (1.1920928955078125e-07 <= dVar5) goto LAB_108eddecc;
    uVar1 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ab40();
    uVar2 = param_4;
    dVar5 = param_1;
    func_0x00010bf5a820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ab40();
    dVar4 = dVar5;
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_1 <= dVar5) {
      uVar1 = param_3;
      func_0x00010bf5a820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      uVar2 = param_4;
      dVar5 = dVar4;
      func_0x00010bf5a820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      param_1 = dVar5;
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (dVar4 < dVar5) {
        uVar3 = 1;
        goto LAB_108eddf70;
      }
      goto LAB_108eddecc;
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_108eddf70:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108eddf9c; end: 108ede167;  */

void FUN_108eddf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcace0();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d10c0();
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108ede168;
  uStack_70 = 0x108ede178;
  uStack_68 = 0;
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1055a0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = puStack_88[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ede168; end: 108ede17f;  */

void FUN_108ede168(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ede180; end: 108ede323;  */

void FUN_108ede180(double param_1,long param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  double dStack_68;
  
  dVar8 = *(double *)(param_2 + 0x28);
  dVar9 = *(double *)(param_2 + 0x30);
  lVar6 = *(long *)(param_2 + 0x38);
  func_0x00010c246ca0(param_3,param_3,&PTR___NSConcreteGlobalBlock_110aca118);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  _objc_release(puVar3);
  _objc_release(puVar2);
  dVar7 = param_1 + 2.0;
  bVar1 = false;
  if ((dVar8 < dVar7) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar7))) {
    bVar1 = dVar9 < dVar7;
  }
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    dVar7 = param_1;
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3);
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if ((long)(dVar7 / 60.0) <= lVar6) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc0000000;
      uStack_78 = 0x108eddd38;
      puStack_70 = &UNK_11086a968;
      puVar2 = param_3;
      dStack_68 = param_1;
      func_0x000107c31910(param_3,&puStack_88);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x000107c31908(puVar2,&PTR___NSConcreteGlobalBlock_110aca138);
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ede324; end: 108ede32b;  */

void FUN_108ede324(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 108ede32c; end: 108ede4db;  */

void FUN_108ede32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcace0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfcace0(uVar1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d10c0(uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(param_5);
  func_0x00010c1055a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 108ede4dc; end: 108ede5e7;  */

void FUN_108ede4dc(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010c246ca0(param_3,param_3,&PTR___NSConcreteGlobalBlock_110aca118);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  dVar3 = *(double *)(param_2 + 0x28);
  dVar4 = *(double *)(param_2 + 0x30);
  dVar5 = *(double *)(param_2 + 0x38) + -2.0;
                    /* WARNING: Could not recover jumptable at 0x000108ede5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
            (*(long *)(param_2 + 0x20),
             0.0 < dVar3 && (param_1 + -2.0 < dVar3 && (dVar5 < dVar3 && dVar4 + -2.0 < dVar3)),
             0.0 < dVar4 && (param_1 + -2.0 < dVar4 && (dVar5 < dVar4 && dVar3 + -2.0 < dVar4)),
             0.0 < param_1 &&
             (dVar5 < param_1 && (dVar4 + -2.0 < param_1 && dVar3 + -2.0 < param_1)));
  return;
}



/* Entry: 108ede5e8; end: 108edf3df;  */

void FUN_108ede5e8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f01278;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f01278,
                      &PTR____CFConstantStringClassReference_110db1878,0);
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



/* Entry: 108edf3e0; end: 108edf4d3;  */

void FUN_108edf3e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f27638;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f27758;
  puStack_60 = PTR_PTR_11329cf60;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e642d8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f02178;
  puStack_58 = PTR_PTR_11329cf68;
  puStack_50 = PTR_PTR_11329cf70;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0a38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_48,&ppuStack_68,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e642d8);
  return;
}



/* Entry: 108edf4d4; end: 108edf513;  */

void FUN_108edf4d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e642d8);
  return;
}



/* Entry: 108edf514; end: 108edf703;  */

void FUN_108edf514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e642d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108edf704; end: 108edf987;  */

void FUN_108edf704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f021d8,0,0);
  return;
}



/* Entry: 108edf988; end: 108edfaef;  */

void FUN_108edf988(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
  if (0 < param_2) {
    func_0x00010c1c3b60(puVar2);
    func_0x00010c1c8260(puVar2);
  }
  if (lRam000000011372edf0 != -1) {
    func_0x000107c27d9c(0x11372edf0,&PTR___NSConcreteGlobalBlock_110aca1b8);
  }
  uVar1 = uRam000000011372ede8;
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_retain(uRam000000011372ede8);
  func_0x00010bf5f320(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((int)uVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010c25d4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108edfaf0; end: 108edfb07;  */

void FUN_108edfaf0(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam000000011372ede8;
  ppuRam000000011372ede8 = &PTR__OBJC_CLASS___NSConstantArray_1111833b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108edfb08; end: 108edfc8f;  */

ulong FUN_108edfb08(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf30860();
  if ((uVar1 == 0) && (uVar1 = param_1, func_0x00010bf89ea0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d3a20();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar1 == 0) &&
        (((uVar2 = param_1, func_0x00010c253c00(), uVar2 == 0 &&
          (uVar2 = param_1, func_0x00010c27c860(), (uVar2 & 1) == 0)) &&
         (uVar2 = param_1, func_0x00010bf5c920(), (uVar2 & 1) == 0)))) &&
       (((uVar2 = param_1, func_0x00010c2a8860(), (uVar2 & 1) == 0 &&
         (uVar2 = param_1, func_0x00010c2a09e0(), (uVar2 & 1) == 0)) &&
        (uVar2 = param_1, func_0x00010bf11440(), (uVar2 & 1) == 0)))) {
      uVar2 = param_1;
      func_0x00010c2736c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      if (uVar3 == 0) {
        uVar3 = param_1;
        func_0x00010bf0f140();
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 == 0) {
          uVar3 = param_1;
          func_0x00010bfadd80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 == 0) {
            uVar4 = param_1;
            func_0x00010c091c60();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf529e0();
            if (uVar5 == 0) {
              uVar5 = param_1;
              func_0x00010bfde3a0(param_1);
            }
            else {
              uVar5 = 1;
            }
            _objc_release(uVar4);
          }
          else {
            uVar5 = 1;
          }
          _objc_release(uVar3);
        }
        else {
          uVar5 = 1;
        }
        _objc_release();
      }
      else {
        uVar5 = 1;
      }
      _objc_release(uVar2);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar1);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 108edfc90; end: 108edfd47; -[SCPreviewCroppingStateImpl initWithRotation:scale:translationX:translationY:boundsSize:] */

undefined1 *
FUN_108edfc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff198;
  uStack_60 = param_7;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ee7a0(param_1,puVar1);
    func_0x00010c1f5fe0(param_2,puVar1);
    func_0x00010c219bc0(param_3,puVar1);
    func_0x00010c219be0(param_4,puVar1);
    func_0x00010c173a00(param_5,param_6,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108edfd48; end: 108edfdd7; -[SCPreviewCroppingStateImpl copyWithZone:] */

void FUN_108edfd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c20c0;
  _objc_alloc(PTR_PTR_1126c20c0);
  func_0x00010c141a80(param_3);
  uVar2 = param_1;
  func_0x00010c14e120(param_3);
  uVar3 = uVar2;
  func_0x00010c27ade0(param_3);
  uVar4 = uVar3;
  func_0x00010c27ae20(param_3);
  uVar5 = uVar4;
  func_0x00010bf20c80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c040470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar2,uVar3,uVar4,uVar5,param_2,puVar1,
             PTR_s_initWithRotation_scale_translati_1125edb18);
  return;
}



/* Entry: 108edfdd8; end: 108edfeab; -[SCPreviewCroppingStateImpl initWithCoder:] */

undefined1 *
FUN_108edfdd8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_5);
  puStack_28 = PTR_PTR_1126ff198;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66e40(param_5);
    dVar2 = (double)param_1;
    *(double *)((long)puVar1 + 8) = dVar2;
    func_0x00010bf66e40(param_5);
    dVar2 = (double)SUB84(dVar2,0);
    *(double *)((long)puVar1 + 0x10) = dVar2;
    func_0x00010bf66e40(param_5);
    dVar2 = (double)SUB84(dVar2,0);
    *(double *)((long)puVar1 + 0x18) = dVar2;
    func_0x00010bf66e40(param_5);
    dVar2 = (double)SUB84(dVar2,0);
    *(double *)((long)puVar1 + 0x20) = dVar2;
    func_0x00010bf66d40(param_5);
    *(double *)((long)puVar1 + 0x28) = dVar2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108edfeac; end: 108edff57; -[SCPreviewCroppingStateImpl encodeWithCoder:] */

void FUN_108edfeac(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92ee0((float)dVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110de1f58)
  ;
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110db1058);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110ee40b8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110ed5318);
  func_0x00010bf92e00(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_3,
                      param_2,&PTR____CFConstantStringClassReference_110f02598);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108edff58; end: 108ee0037; -[SCPreviewCroppingStateImpl calculateNormalTransform] */

void FUN_108edff58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  
  func_0x00010c14e120();
  uVar1 = param_2;
  func_0x00010c14e120(param_3);
  _CGAffineTransformMakeScale(&uStack_60,param_2,uVar1);
  func_0x00010c141a80(param_3);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  dStack_b0 = dStack_50;
  uStack_98 = uStack_38;
  dStack_a0 = dStack_40;
  _CGAffineTransformRotate(&uStack_90,&uStack_c0);
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  dStack_50 = dStack_80;
  uStack_38 = uStack_68;
  dStack_40 = dStack_70;
  dVar3 = dStack_70;
  func_0x00010c27ade0(param_3);
  dVar2 = dVar3;
  func_0x00010bf20c80(param_3);
  dVar3 = dVar3 * dVar2;
  func_0x00010c27ae20(param_3);
  func_0x00010bf20c80(param_3);
  _CGAffineTransformMakeTranslation(&uStack_90,dVar3,dVar2 * dStack_80);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  dStack_b0 = dStack_50;
  uStack_98 = uStack_38;
  dStack_a0 = dStack_40;
  _CGAffineTransformConcat(param_1,&uStack_c0,&uStack_90);
  return;
}



/* Entry: 108ee0038; end: 108ee010f; -[SCPreviewCroppingStateImpl calculateViewportTransform:] */

void FUN_108ee0038(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_4;
  _objc_opt_class();
  func_0x00010bf20c80(param_4);
  uVar2 = param_2;
  func_0x00010c141a80(param_4);
  uVar3 = uVar2;
  func_0x00010c14e120(param_4);
  uVar4 = uVar3;
  func_0x00010c27ade0(param_4);
  uVar5 = uVar4;
  func_0x00010c27ae20(param_4);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,uVar2,uVar3,uVar4,uVar5,lVar1,
               PTR_s__calculateViewportTransform_with_112553c20,param_6);
    return;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 108ee0110; end: 108ee01f3; -[SCPreviewCroppingStateImpl calculateViewportTransform:withCroppingAspectRatio:renderBoundsSize:outputBoundsSize:] */

void FUN_108ee0110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_4;
  func_0x00010be237e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  _objc_opt_class();
  func_0x00010bf20c80(param_4);
  uVar3 = param_2;
  func_0x00010c141a80(param_4);
  uVar4 = uVar3;
  func_0x00010c14e120(lVar1);
  uVar5 = uVar4;
  func_0x00010c27ade0(lVar1);
  uVar6 = uVar5;
  func_0x00010c27ae20(lVar1);
  if (lVar2 == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    func_0x00010bdd8a00(param_1,param_2,param_3,uVar3,uVar4,uVar5,uVar6,lVar2,param_5,param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ee01f4; end: 108ee058f; -[SCPreviewCroppingStateImpl calculateCPUBufferTransformWithCroppingAspectRatio:renderBoundsSize:outputBoundsSize:pixelBufferSize:pixelBufferOrientation:] */

void FUN_108ee01f4(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_d5;
  undefined8 uVar6;
  double in_d6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar6;
  func_0x00010be237e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar5 = ABS(param_2 + -1.0);
  dVar3 = ABS(param_2 + 1.0) * 2.220446049250313e-16;
  bVar2 = true;
  if ((2.2250738585072014e-308 <= dVar5) && (bVar2 = false, !NAN(dVar5) && !NAN(dVar3))) {
    bVar2 = dVar5 < dVar3;
  }
  if (bVar2) {
    func_0x00010c141a80(param_3);
    dVar5 = ABS(dVar3);
    dVar3 = ABS(dVar3 + 0.0) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar5) && (bVar2 = false, !NAN(dVar5) && !NAN(dVar3))) {
      bVar2 = dVar5 < dVar3;
    }
    if (bVar2) {
      func_0x00010c27ade0(param_3);
      dVar5 = ABS(dVar3);
      if ((dVar5 < 2.2250738585072014e-308) ||
         (dVar3 = ABS(dVar3 + 0.0) * 2.220446049250313e-16, dVar5 < dVar3)) {
        func_0x00010c27ae20(param_3);
        dVar5 = ABS(dVar3);
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar3 = ABS(dVar3 + 0.0) * 2.220446049250313e-16, dVar5 < dVar3)) goto LAB_108ee0564;
      }
    }
  }
  func_0x00010c14e120(param_3);
  dVar5 = dVar3;
  func_0x00010c141a80(param_3);
  dVar4 = dVar5;
  func_0x00010c27ade0(param_3);
  dVar10 = in_d5 * dVar4;
  func_0x00010c27ae20(param_3);
  dVar11 = in_d6 * dVar4;
  dVar9 = in_d6;
  if (param_5 < 3) {
    if (param_5 == 0) {
      func_0x00010c141a80(param_3);
      dVar11 = dVar4;
      dVar5 = dVar4;
    }
    else {
      if (param_5 != 1) {
        if (param_5 != 2) goto LAB_108ee0474;
        func_0x00010c141a80(param_3);
        dVar5 = -dVar4;
        func_0x00010c27ae20(param_3);
        dVar10 = -(dVar4 * in_d6);
        goto LAB_108ee0434;
      }
      func_0x00010c141a80(param_3);
      dVar11 = dVar4;
      func_0x00010c27ade0(param_3);
      dVar10 = -(dVar11 * in_d5);
      dVar5 = dVar4;
    }
    dVar4 = dVar11;
    dVar5 = -dVar5;
    func_0x00010c27ae20(param_3);
LAB_108ee046c:
    dVar11 = -(dVar4 * in_d6);
  }
  else if (param_5 < 6) {
    if (param_5 == 3) {
      func_0x00010c141a80(param_3);
      dVar5 = -dVar4;
      func_0x00010c27ae20(param_3);
      dVar10 = in_d6 * dVar4;
LAB_108ee0418:
      func_0x00010c27ade0(param_3);
      dVar11 = in_d5 * dVar4;
      dVar9 = in_d5;
      in_d5 = in_d6;
    }
    else if (param_5 == 5) {
      func_0x00010c27ae20(param_3);
      dVar10 = -(dVar4 * in_d5);
      func_0x00010c27ade0(param_3);
      goto LAB_108ee046c;
    }
  }
  else {
    if (param_5 != 6) {
      if (param_5 != 7) goto LAB_108ee0474;
      func_0x00010c27ae20(param_3);
      dVar10 = -(dVar4 * in_d6);
      goto LAB_108ee0418;
    }
    func_0x00010c27ae20(param_3);
    dVar10 = in_d6 * dVar4;
LAB_108ee0434:
    func_0x00010c27ade0(param_3);
    dVar11 = -(dVar4 * in_d5);
    dVar9 = in_d5;
    in_d5 = in_d6;
  }
LAB_108ee0474:
  _CGAffineTransformMakeTranslation(param_1,in_d5 * 0.5,dVar9 * 0.5);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  _CGAffineTransformRotate(&uStack_a0,dVar5,&uStack_d0);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  _CGAffineTransformScale(&uStack_a0,dVar3,dVar3,&uStack_d0);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  _CGAffineTransformTranslate(&uStack_a0,in_d5 * -0.5,dVar9 * -0.5,&uStack_d0);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  _CGAffineTransformMakeTranslation(&uStack_d0,dVar10,dVar11);
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  _CGAffineTransformConcat(&uStack_a0,&uStack_100,&uStack_d0);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
LAB_108ee0564:
  _objc_release(param_3);
  return;
}



/* Entry: 108ee0590; end: 108ee0593; -[SCPreviewCroppingStateImpl copyState] */

void FUN_108ee0590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_copy_1125b2128);
  return;
}



/* Entry: 108ee0594; end: 108ee06d7; -[SCPreviewCroppingStateImpl isEqualToState:] */

bool FUN_108ee0594(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_4);
  func_0x00010c27ade0(param_2);
  dVar2 = param_1;
  func_0x00010c27ade0(param_4);
  dVar3 = ABS(param_1 - dVar2);
  dVar2 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    func_0x00010c27ae20(param_2);
    dVar3 = dVar2;
    func_0x00010c27ae20(param_4);
    dVar4 = ABS(dVar2 - dVar3);
    dVar2 = ABS(dVar2 + dVar3) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar2))) {
      bVar1 = dVar4 < dVar2;
    }
    if (bVar1) {
      func_0x00010c141a80(param_2);
      dVar3 = dVar2;
      func_0x00010c141a80(param_4);
      dVar4 = ABS(dVar2 - dVar3);
      dVar2 = ABS(dVar2 + dVar3) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar2))) {
        bVar1 = dVar4 < dVar2;
      }
      if (bVar1) {
        func_0x00010c14e120(param_2);
        dVar3 = dVar2;
        func_0x00010c14e120(param_4);
        dVar4 = ABS(dVar2 + dVar3) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar1 = ABS(dVar2 - dVar3) < dVar4;
        goto LAB_108ee06bc;
      }
    }
  }
  bVar1 = false;
LAB_108ee06bc:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 108ee06d8; end: 108ee0a8f; -[SCPreviewCroppingStateImpl _getTransformAwareStateWithCroppingAspectRatio:renderBoundsSize:outputBoundsSize:] */

void FUN_108ee06d8(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = INFINITY;
  if (param_1 != INFINITY) {
    func_0x00010bf20c80(param_6);
    dVar6 = 0.0;
    dVar7 = 0.0;
    if (param_1 != 0.0) {
      if (dVar5 == 0.0) {
        dVar7 = INFINITY;
      }
      else {
        dVar7 = param_1 / dVar5;
      }
    }
    if (param_2 != 0.0) {
      if (param_3 == 0.0) {
        dVar6 = INFINITY;
      }
      else {
        dVar6 = param_2 / param_3;
      }
    }
    dVar5 = ABS(dVar7 - dVar6);
    dVar6 = ABS(dVar7 + dVar6) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar6))) {
      bVar1 = dVar5 < dVar6;
    }
    if (!bVar1) {
      dVar5 = 0.0;
      dVar6 = 0.0;
      if (param_4 != 0.0) {
        if (param_5 == 0.0) {
          dVar6 = INFINITY;
        }
        else {
          dVar6 = param_4 / param_5;
        }
      }
      if (param_2 != 0.0) {
        if (param_3 == 0.0) {
          dVar5 = INFINITY;
        }
        else {
          dVar5 = param_2 / param_3;
        }
      }
      dVar7 = ABS(dVar6 - dVar5);
      dVar5 = ABS(dVar6 + dVar5) * 2.220446049250313e-16;
      dVar6 = 2.2250738585072014e-308;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (!bVar1) {
        func_0x00010c14e120(param_6);
        func_0x00010bf20c80(param_6);
        if (dVar5 == 0.0) {
LAB_108ee0844:
          dVar7 = INFINITY;
          dVar6 = param_4;
        }
        else {
          dVar7 = param_5;
          if (dVar6 == 0.0) {
LAB_108ee0864:
            dVar6 = INFINITY;
          }
          else {
            dVar5 = dVar5 / dVar6;
            if (dVar5 == 0.0) goto LAB_108ee0844;
            if (dVar5 == INFINITY) goto LAB_108ee0864;
            dVar6 = param_5 * dVar5;
            if (param_5 * dVar5 < param_4) {
              dVar7 = param_4 / dVar5;
              dVar6 = param_4;
            }
          }
        }
        func_0x00010c141a80(param_6);
        dVar3 = -dVar5;
        if (0.0 <= dVar5) {
          dVar3 = dVar5;
        }
        dVar5 = ABS(dVar3 + -1.5707963267948966);
        dVar3 = ABS(dVar3 + 1.5707963267948966) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar3))) {
          bVar1 = dVar5 < dVar3;
        }
        if (bVar1) {
          dVar8 = param_5 / dVar6;
        }
        else {
          func_0x00010c141a80(param_6);
          dVar5 = -dVar3;
          if (0.0 <= dVar3) {
            dVar5 = dVar3;
          }
          dVar3 = ABS(dVar3);
          if ((2.2250738585072014e-308 <= dVar3) &&
             (ABS(dVar5 + 0.0) * 2.220446049250313e-16 <= dVar3)) {
            func_0x00010c141a80(param_6);
            dVar5 = -dVar3;
            if (0.0 <= dVar3) {
              dVar5 = dVar3;
            }
            if ((2.2250738585072014e-308 <= ABS(dVar5 + -3.141592653589793)) &&
               (ABS(dVar5 + 3.141592653589793) * 2.220446049250313e-16 <=
                ABS(dVar5 + -3.141592653589793))) goto LAB_108ee0808;
          }
          dVar3 = param_5 / dVar7;
          dVar5 = param_4 / dVar6;
          dVar8 = dVar5;
          if (dVar5 <= dVar3) {
            dVar8 = dVar3;
          }
        }
        dVar9 = 0.0;
        if (param_4 != 0.0) {
          if (param_5 == 0.0) {
LAB_108ee0988:
            param_3 = 0.0;
            dVar9 = param_2;
          }
          else {
            dVar3 = param_4 / param_5;
            if (dVar3 != 0.0) {
              dVar5 = INFINITY;
              if (dVar3 == INFINITY) goto LAB_108ee0988;
              dVar9 = param_3 * dVar3;
              if (param_2 <= param_3 * dVar3) {
                param_3 = param_2 / dVar3;
                dVar5 = INFINITY;
                dVar9 = param_2;
              }
            }
          }
        }
        func_0x00010c27ade0(param_6);
        dVar4 = dVar3;
        func_0x00010bf20c80(param_6);
        param_4 = param_4 * ((dVar3 * dVar4) / dVar9);
        dVar6 = param_4 / dVar6;
        func_0x00010c27ae20(param_6);
        func_0x00010bf20c80(param_6);
        param_5 = param_5 * ((param_4 * dVar5) / param_3);
        dVar7 = param_5 / dVar7;
        puVar2 = PTR_PTR_1126c20c0;
        _objc_alloc(PTR_PTR_1126c20c0);
        func_0x00010c141a80(param_6);
        dVar3 = param_5;
        func_0x00010bf20c80(param_6);
        func_0x00010c040460(param_5,dVar8,dVar6,dVar7,dVar3,dVar5,puVar2);
        goto LAB_108ee0810;
      }
    }
  }
LAB_108ee0808:
  func_0x00010bf51e00(param_6);
LAB_108ee0810:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee0a90; end: 108ee0c5b; +[SCPreviewCroppingStateImpl _calculateViewportTransform:withBoundsSize:rotation:scale:translationX:translationY:] */

void FUN_108ee0a90(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,undefined8 param_8,undefined8 param_9,int param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  if (0.0 < param_5) {
    _CGAffineTransformMakeTranslation(param_1,0x3fe0000000000000,0x3fe0000000000000);
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    _CGAffineTransformScale(&uStack_80,0x3ff0000000000000,param_2 / param_3,&uStack_b0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    if (param_10 == 0) {
      param_4 = -param_4;
    }
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    if (param_10 == 0) {
      param_7 = -param_7;
    }
    _CGAffineTransformRotate(&uStack_80,param_4,&uStack_b0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    _CGAffineTransformScale(&uStack_80,0x3ff0000000000000,1.0 / (param_2 / param_3),&uStack_b0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    _CGAffineTransformScale(&uStack_80,1.0 / param_5,1.0 / param_5,&uStack_b0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    _CGAffineTransformTranslate(&uStack_80,-param_6,param_7,&uStack_b0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    _CGAffineTransformTranslate(&uStack_80,0xbfe0000000000000,0xbfe0000000000000,&uStack_b0);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
  }
  return;
}



/* Entry: 108ee0c5c; end: 108ee0c63; -[SCPreviewCroppingStateImpl rotation] */

undefined8 FUN_108ee0c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ee0c64; end: 108ee0c6b; -[SCPreviewCroppingStateImpl setRotation:] */

void FUN_108ee0c64(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 108ee0c6c; end: 108ee0c73; -[SCPreviewCroppingStateImpl scale] */

undefined8 FUN_108ee0c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ee0c74; end: 108ee0c7b; -[SCPreviewCroppingStateImpl setScale:] */

void FUN_108ee0c74(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108ee0c7c; end: 108ee0c83; -[SCPreviewCroppingStateImpl translationX] */

undefined8 FUN_108ee0c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ee0c84; end: 108ee0c8b; -[SCPreviewCroppingStateImpl setTranslationX:] */

void FUN_108ee0c84(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108ee0c8c; end: 108ee0c93; -[SCPreviewCroppingStateImpl translationY] */

undefined8 FUN_108ee0c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ee0c94; end: 108ee0c9b; -[SCPreviewCroppingStateImpl setTranslationY:] */

void FUN_108ee0c94(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108ee0c9c; end: 108ee0ca3; -[SCPreviewCroppingStateImpl boundsSize] */

undefined1  [16] FUN_108ee0c9c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 108ee0ca4; end: 108ee0cab; -[SCPreviewCroppingStateImpl setBoundsSize:] */

void FUN_108ee0ca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  return;
}



/* Entry: 108ee0cac; end: 108ee0f13;  */

void FUN_108ee0cac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  func_0x00010bf97e80(param_1);
  if (*(char *)(puStack_68 + 3) == '\x01') {
    func_0x00010befa120(puVar1);
  }
  if (*(char *)(puStack_88 + 3) == '\x01') {
    func_0x00010befa120(puVar1);
  }
  if (*(char *)(puStack_a8 + 3) == '\x01') {
    func_0x00010befa120(puVar1);
  }
  if (*(char *)(puStack_c8 + 3) == '\x01') {
    func_0x00010befa120(puVar1);
  }
  if (*(char *)(puStack_e8 + 3) == '\x01') {
    func_0x00010befa120(puVar1);
  }
  puVar2 = PTR_PTR_1126dc708;
  _objc_alloc(PTR_PTR_1126dc708);
  func_0x00010c019cc0();
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ee0f14; end: 108ee1047;  */

void FUN_108ee0f14(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c097820();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | lVar3 == 4;
  lVar3 = param_2;
  func_0x00010c097820();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | lVar3 == 6;
  lVar3 = param_2;
  func_0x00010c097820();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | lVar3 == 8;
  lVar3 = param_2;
  func_0x00010c097820();
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | lVar3 == 7;
  lVar3 = param_2;
  func_0x00010c097820();
  if (lVar3 == 2) {
    bVar1 = true;
  }
  else {
    lVar3 = param_2;
    func_0x00010c097820();
    bVar1 = lVar3 == 3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | bVar1;
  lVar3 = param_2;
  func_0x00010c097820();
  if (lVar3 == 1) {
    bVar1 = true;
  }
  else {
    lVar3 = param_2;
    func_0x00010c097820();
    bVar1 = lVar3 == 3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ee1048; end: 108ee1137;  */

undefined1 FUN_108ee1048(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 1;
  func_0x00010c0bcaa0(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ee1138; end: 108ee1197;  */

void FUN_108ee1138(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c073aa0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c129a00();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 == 0;
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee1198; end: 108ee121b; +[SCPreviewSnapUtils contextSnapSourceFromBlizzardSnapSource:] */

undefined8 FUN_108ee1198(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((long)param_3 < 0xb) {
    if (param_3 < 4) {
      return 2;
    }
    if (param_3 == 0xffffffffffffffff) {
      return 0;
    }
    if (param_3 == 8) {
      return 1;
    }
  }
  else if (param_3 < 0x2c) {
    if ((1L << (param_3 & 0x3f) & 0x1f000U) != 0) {
      return 3;
    }
    if ((1L << (param_3 & 0x3f) & 0xc6000000000U) != 0) {
      return 2;
    }
    if (param_3 == 0xb) {
      return 4;
    }
  }
  return 5;
}



/* Entry: 108ee121c; end: 108ee1247; +[SCGrapheneSnapPreviewMetric previewFinishPreparation] */

void FUN_108ee121c(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1248; end: 108ee1273; +[SCGrapheneSnapPreviewMetric directSnapSend] */

void FUN_108ee1248(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1274; end: 108ee129f; +[SCGrapheneSnapPreviewMetric dynamicCaptionAbTargeted] */

void FUN_108ee1274(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee12a0; end: 108ee12cb; +[SCGrapheneSnapPreviewMetric dynamicCaptionBbgTargeted] */

void FUN_108ee12a0(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee12cc; end: 108ee12f7; +[SCGrapheneSnapPreviewMetric locationPermissionFilterShown] */

void FUN_108ee12cc(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee12f8; end: 108ee1323; +[SCGrapheneSnapPreviewMetric pinchResize] */

void FUN_108ee12f8(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1324; end: 108ee134f; +[SCGrapheneSnapPreviewMetric drawingButtonPressed] */

void FUN_108ee1324(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1350; end: 108ee137b; +[SCGrapheneSnapPreviewMetric tapRecipients] */

void FUN_108ee1350(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee137c; end: 108ee13a7; +[SCGrapheneSnapPreviewMetric captionFontLoadTime] */

void FUN_108ee137c(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee13a8; end: 108ee13d3; +[SCGrapheneSnapPreviewMetric captionMetadataLoadTime] */

void FUN_108ee13a8(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee13d4; end: 108ee13ff; +[SCGrapheneSnapPreviewMetric fontSource] */

void FUN_108ee13d4(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1400; end: 108ee142b; +[SCGrapheneSnapPreviewMetric previewDependencyLoading] */

void FUN_108ee1400(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee142c; end: 108ee1457; +[SCGrapheneSnapPreviewMetric previewToolTti] */

void FUN_108ee142c(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1458; end: 108ee1483; +[SCGrapheneSnapPreviewMetric previewToolTfi] */

void FUN_108ee1458(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee1484; end: 108ee14af; +[SCGrapheneSnapPreviewMetric captionToolPerformance] */

void FUN_108ee1484(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee14b0; end: 108ee14db; +[SCGrapheneSnapPreviewMetric multiSnapThumbnail] */

void FUN_108ee14b0(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee14dc; end: 108ee1507; +[SCGrapheneSnapPreviewMetric multiSnapPreview] */

void FUN_108ee14dc(void)

{
  _objc_alloc(PTR_PTR_1126c3cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


