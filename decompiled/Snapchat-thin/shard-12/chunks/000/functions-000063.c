/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cd5bbc; end: 108cd5c3b; -[SCLongPressLoadingArcConfiguration configureInnerArc] */

void FUN_108cd5bbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined8 *)(param_1 + 8) = 0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  auVar3 = NEON_fmov(0x402c000000000000,8);
  *(long *)(param_1 + 0x60) = auVar3._8_8_;
  *(long *)(param_1 + 0x58) = auVar3._0_8_;
  *(undefined8 *)(param_1 + 0x20) = 0x4008000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0x3fe3333333333333;
  *(undefined8 *)(param_1 + 0x50) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 108cd5c3c; end: 108cd5c43; -[SCLongPressLoadingArcConfiguration direction] */

undefined8 FUN_108cd5c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cd5c44; end: 108cd5c4b; -[SCLongPressLoadingArcConfiguration setDirection:] */

void FUN_108cd5c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cd5c4c; end: 108cd5c53; -[SCLongPressLoadingArcConfiguration color] */

undefined8 FUN_108cd5c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cd5c54; end: 108cd5c83; -[SCLongPressLoadingArcConfiguration setColor:] */

void FUN_108cd5c54(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cd5c84; end: 108cd5c8b; -[SCLongPressLoadingArcConfiguration edgeOffsets] */

undefined1  [16] FUN_108cd5c84(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



/* Entry: 108cd5c8c; end: 108cd5c93; -[SCLongPressLoadingArcConfiguration setEdgeOffsets:] */

void FUN_108cd5c8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x58) = param_1;
  *(undefined8 *)(param_3 + 0x60) = param_2;
  return;
}



/* Entry: 108cd5c94; end: 108cd5c9b; -[SCLongPressLoadingArcConfiguration animationStartLineWidth] */

undefined8 FUN_108cd5c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cd5c9c; end: 108cd5ca3; -[SCLongPressLoadingArcConfiguration setAnimationStartLineWidth:] */

void FUN_108cd5c9c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108cd5ca4; end: 108cd5cab; -[SCLongPressLoadingArcConfiguration animationEndLineWidth] */

undefined8 FUN_108cd5ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cd5cac; end: 108cd5cb3; -[SCLongPressLoadingArcConfiguration setAnimationEndLineWidth:] */

void FUN_108cd5cac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108cd5cb4; end: 108cd5cbb; -[SCLongPressLoadingArcConfiguration strokeSecondsPerCycle] */

undefined8 FUN_108cd5cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cd5cbc; end: 108cd5cc3; -[SCLongPressLoadingArcConfiguration setStrokeSecondsPerCycle:] */

void FUN_108cd5cbc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108cd5cc4; end: 108cd5ccb; -[SCLongPressLoadingArcConfiguration strokeStartPercent] */

undefined8 FUN_108cd5cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cd5ccc; end: 108cd5cd3; -[SCLongPressLoadingArcConfiguration setStrokeStartPercent:] */

void FUN_108cd5ccc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108cd5cd4; end: 108cd5cdb; -[SCLongPressLoadingArcConfiguration strokeEndPercent] */

undefined8 FUN_108cd5cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cd5cdc; end: 108cd5ce3; -[SCLongPressLoadingArcConfiguration setStrokeEndPercent:] */

void FUN_108cd5cdc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 108cd5ce4; end: 108cd5ceb; -[SCLongPressLoadingArcConfiguration secondsPerCycle] */

undefined8 FUN_108cd5ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cd5cec; end: 108cd5cf3; -[SCLongPressLoadingArcConfiguration setSecondsPerCycle:] */

void FUN_108cd5cec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 108cd5cf4; end: 108cd5cfb; -[SCLongPressLoadingArcConfiguration rotationStartAngle] */

undefined8 FUN_108cd5cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cd5cfc; end: 108cd5d03; -[SCLongPressLoadingArcConfiguration setRotationStartAngle:] */

void FUN_108cd5cfc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 108cd5d04; end: 108cd5d0b; -[SCLongPressLoadingArcConfiguration rotationEndAngle] */

undefined8 FUN_108cd5d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cd5d0c; end: 108cd5d13; -[SCLongPressLoadingArcConfiguration setRotationEndAngle:] */

void FUN_108cd5d0c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 108cd5d14; end: 108cd5d1f; -[SCLongPressLoadingArcConfiguration .cxx_destruct] */

void FUN_108cd5d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cd5d20; end: 108cd5d4b; +[SCLongPressAnimationView longPressAnimationView] */

void FUN_108cd5d20(void)

{
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4062c00000000000,0x4062c00000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd5d4c; end: 108cd6047; -[SCLongPressAnimationView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108cd5d4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fe3b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR_PTR_1126dbae0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffa80();
    lVar6 = (long)_DAT_11277a910;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c20e920(0,*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6))
    ;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar2 = PTR_PTR_1126dbae8;
    _objc_alloc();
    func_0x00010c032880();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a914);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a914) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126dbae0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffa80();
    lVar6 = (long)_DAT_11277a918;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c20e920(0,*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6))
    ;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar2 = PTR_PTR_1126dbae8;
    _objc_alloc();
    func_0x00010c01dfc0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a91c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a91c) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277a920;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1d4bc0(0x3ecccccd,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bf20c00(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar6));
    _CGRectGetMidX();
    func_0x00010c1842e0(*(undefined8 *)((long)puVar1 + lVar6));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cd6048; end: 108cd6097; -[SCLongPressAnimationView startContinuousAnimation] */

/* WARNING: Possible PIC construction at 0x000108cd6078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cd607c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6048(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bebf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__startAnimatingArcLayer_withConf_11258d718,
             *(undefined8 *)(param_1 + _DAT_11277a910),*(undefined8 *)(param_1 + _DAT_11277a914));
  return;
}



/* Entry: 108cd6098; end: 108cd610f; -[SCLongPressAnimationView finishWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6098(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be17500(param_1,param_2,0);
  func_0x00010bec2d20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277a918),
                      *(undefined8 *)(param_1 + _DAT_11277a91c),0);
  func_0x00010bec2d20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277a910),
                      *(undefined8 *)(param_1 + _DAT_11277a914),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cd6110; end: 108cd618b; -[SCLongPressAnimationView cancelWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a918);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277a91c);
  _objc_retain(param_3);
  func_0x00010bec2d20(param_1,param_2,uVar1,uVar2,0);
  func_0x00010bec2d20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277a910),
                      *(undefined8 *)(param_1 + _DAT_11277a914),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cd618c; end: 108cd618f; -[SCLongPressAnimationView throbCircles] */

void FUN_108cd618c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__throbCircles_112590830);
  return;
}



/* Entry: 108cd6190; end: 108cd6293; -[SCLongPressAnimationView _startAnimatingArcLayer:withConfiguration:] */

void FUN_108cd6190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf03f00(param_5);
  uVar2 = param_1;
  func_0x00010bf03be0(param_5);
  uVar3 = uVar2;
  func_0x00010c25dcc0(param_5);
  uVar4 = uVar3;
  func_0x00010c25dd60(param_5);
  uVar5 = uVar4;
  func_0x00010c25dca0(param_5);
  uVar6 = uVar5;
  func_0x00010c155360(param_5);
  uVar7 = uVar6;
  func_0x00010c141ce0(param_5);
  uVar8 = uVar7;
  func_0x00010c141ba0(param_5);
  uVar1 = param_5;
  func_0x00010bf7f0e0(param_5);
  _objc_release(param_5);
  func_0x00010bebf5e0(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,param_2,param_3,param_4,
                      uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cd6294; end: 108cd636b; -[SCLongPressAnimationView _stopAnimatingArcLayer:withConfiguration:withCompletion:] */

void FUN_108cd6294(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf03be0(param_5);
  dVar1 = param_1;
  func_0x00010bf03f00(param_5);
  dVar2 = dVar1;
  func_0x00010c25dcc0(param_5);
  dVar4 = dVar2 * 0.5;
  func_0x00010c25dd60(param_5);
  dVar3 = dVar2;
  func_0x00010c25dca0(param_5);
  _objc_release(param_5);
  func_0x00010bec2d40(param_1,dVar1,dVar4,dVar2,dVar3,param_2,param_3,param_4,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cd636c; end: 108cd647f; -[SCLongPressAnimationView _finishWithExplosion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd636c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar2);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108cd6480;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c17fb40(puVar1,param_2,&puStack_60);
  func_0x00010bddeb80(0x3fd999999999999a,param_1);
  uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_e0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  func_0x00010bddeba0(param_1,param_2,&uStack_e0);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108cd6480; end: 108cd649b;  */

void FUN_108cd6480(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108cd6494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108cd649c; end: 108cd65eb; -[SCLongPressAnimationView _startAnimatingCircleArcLayer:startArcWidth:endArcWidth:strokeSecondsPerCycle:strokeStartPercent:strokeEndPercent:secondsPerCycle:rotationStartAngle:rotationEndAngle:direction:] */

void FUN_108cd649c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_10);
  uVar1 = param_8;
  func_0x00010be4c460(param_1,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010bec5980(param_4,param_5,param_3,param_8,param_9,
                      &PTR____CFConstantStringClassReference_110e1f3f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97700(param_7,param_6,param_8,param_9,param_11,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e920(param_5,param_10);
  func_0x00010c1bdd00(param_2,param_10);
  func_0x00010bef6c20(param_10,param_9,uVar1,&PTR____CFConstantStringClassReference_110ef20b8);
  func_0x00010bef6c20(param_10,param_9,uVar2,&PTR____CFConstantStringClassReference_110ef2078);
  func_0x00010bef6c20(param_10,param_9,param_8,&PTR____CFConstantStringClassReference_110de1f58);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd65ec; end: 108cd6783; -[SCLongPressAnimationView _stopAnimatingCircleArcLayer:startArcWidth:endArcWidth:strokeSecondsPerCycle:strokeStartPercent:strokeEndPercent:withCompletion:] */

void FUN_108cd65ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  uVar2 = param_6;
  func_0x00010be4c460(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bec5980(param_4,param_5,param_3,param_6,param_7,
                      &PTR____CFConstantStringClassReference_110ed5878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e9a0(param_5,param_8);
  func_0x00010c1bdd00(param_2,param_8);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108cd6784;
  puStack_98 = &UNK_11084aaa8;
  uStack_90 = param_6;
  uStack_88 = param_9;
  _objc_retain(param_9);
  func_0x00010c17fb40(puVar1,param_7,&puStack_b0);
  func_0x00010c12b200(param_8,param_7,&PTR____CFConstantStringClassReference_110ef2118);
  func_0x00010bef6c20(param_8,param_7,uVar2,&PTR____CFConstantStringClassReference_110ef20b8);
  func_0x00010bef6c20(param_8,param_7,uVar3,&PTR____CFConstantStringClassReference_110ef2098);
  _objc_release(param_8);
  _objc_release(uStack_88);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(param_9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cd6784; end: 108cd679f;  */

void FUN_108cd6784(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108cd6798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108cd67a0; end: 108cd6867; -[SCLongPressAnimationView _lineThicknessAnimationWithStartArcWidth:endArcWidth:] */

void FUN_108cd67a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110ef2138);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fe0000000000000,puVar1);
  func_0x00010c1ea580(puVar1,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cd6868; end: 108cd6937; -[SCLongPressAnimationView _strokeAnimationWithStrokeStartPercent:strokeEndPercent:secondsPerCycle:keyPath:] */

void FUN_108cd6868(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c1ea580(puVar1,param_5,1);
  func_0x00010c192d40(param_3 * ABS(param_1 - param_2),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cd6938; end: 108cd6a1f; -[SCLongPressAnimationView _rotateIndefinitelyAnimationWithRotationStartAngle:secondsPerCycle:direction:onLayer:] */

void FUN_108cd6938(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 8;
  if (param_5 != 0) {
    lVar1 = 0;
  }
  uVar4 = *(undefined8 *)(&UNK_10df9f9b0 + lVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110e44ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  func_0x00010c192d40(param_2 * 0.5,puVar2);
  func_0x00010c1eabe0(0x7f800000,puVar2);
  func_0x00010c186980(puVar2,param_4,1);
  func_0x00010c1ea580(puVar2,param_4,0);
  func_0x00010c19bc40(puVar2,param_4,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd6a20; end: 108cd6c4b; -[SCLongPressAnimationView _circleOpacityFinishAnimationWithInitialValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6a20(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&DAT_10f68f0f6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04040(puVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c192d40(0x3fe0083126e978d5,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar1;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185460;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c1b6d00(puVar2,param_3,&PTR__OBJC_CLASS___NSConstantArray_111182eb8);
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_80 = puVar1;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_80,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c19bc40(puVar2,param_3,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar2,param_3,0);
  puVar7 = puVar2;
  func_0x00010bef6c20(*(undefined8 *)(param_2 + _DAT_11277a920),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110ef20f8);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  pcStack_88 = FUN_108cd6c4c;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_b0 = puVar3;
  puStack_a8 = puVar1;
  puStack_a0 = puVar2;
  lStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,"transform");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04040(puVar4,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe0083126e978d5,puVar4);
  uStack_e8 = puVar7[9];
  uStack_f0 = puVar7[8];
  uStack_d8 = puVar7[0xb];
  uStack_e0 = puVar7[10];
  uStack_c8 = puVar7[0xd];
  uStack_d0 = puVar7[0xc];
  uStack_b8 = puVar7[0xf];
  uStack_c0 = puVar7[0xe];
  uStack_128 = puVar7[1];
  uStack_130 = *puVar7;
  uStack_118 = puVar7[3];
  uStack_120 = puVar7[2];
  uStack_108 = puVar7[5];
  uStack_110 = puVar7[4];
  uStack_f8 = puVar7[7];
  uStack_100 = puVar7[6];
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_3,&uStack_130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _CATransform3DMakeScale(&uStack_130,0x402c000000000000,0x402c000000000000,0x3ff0000000000000);
  func_0x00010c297140(puVar1,param_3,&uStack_130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar4,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar4,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c19bc40(puVar4,param_3,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar4,param_3,0);
  func_0x00010bef6c20(*(undefined8 *)((long)puVar5 + (long)_DAT_11277a920),param_3,puVar4,
                      &PTR____CFConstantStringClassReference_110ef20d8);
  _objc_release(puVar4);
  return;
}



/* Entry: 108cd6c4c; end: 108cd6de3; -[SCLongPressAnimationView _circleScaleFinishAnimationWithInitialValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6c4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04040(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c192d40(0x3fe0083126e978d5,puVar2);
  uStack_68 = param_3[9];
  uStack_70 = param_3[8];
  uStack_58 = param_3[0xb];
  uStack_60 = param_3[10];
  uStack_48 = param_3[0xd];
  uStack_50 = param_3[0xc];
  uStack_38 = param_3[0xf];
  uStack_40 = param_3[0xe];
  uStack_a8 = param_3[1];
  uStack_b0 = *param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  uStack_88 = param_3[5];
  uStack_90 = param_3[4];
  uStack_78 = param_3[7];
  uStack_80 = param_3[6];
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _CATransform3DMakeScale(&uStack_b0,0x402c000000000000,0x402c000000000000,0x3ff0000000000000);
  func_0x00010c297140(puVar1,param_2,&uStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c19bc40(puVar2,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar2,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_11277a920),param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110ef20d8);
  _objc_release(puVar2);
  return;
}



/* Entry: 108cd6de4; end: 108cd6f8f; -[SCLongPressAnimationView _throbCircles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_6,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x3ff8000000000000;
  func_0x00010c192d40(0x3ff8000000000000);
  func_0x00010c220360(puVar1);
  func_0x00010c1b6d00(puVar1);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c19bc40(puVar1);
  func_0x00010c1ea580(puVar1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bef6c20(*(undefined8 *)(param_5 + _DAT_11277a910));
  func_0x00010bef6c20(*(undefined8 *)(param_5 + _DAT_11277a918));
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = PTR_PTR_1126fe3b8;
  puStack_d0 = puVar1;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_layoutSublayersOfLayer__1125377f8);
  lVar5 = (long)_DAT_11277a914;
  func_0x00010bf03be0(*(undefined8 *)(puVar1 + lVar5));
  func_0x00010bf20c00(puVar1);
  _CGRectInset();
  uVar7 = uVar6;
  uVar8 = param_2;
  func_0x00010bf8c0e0(*(undefined8 *)(puVar1 + lVar5));
  func_0x00010bf8c0e0(*(undefined8 *)(puVar1 + lVar5));
  _CGRectInset(uVar6,param_2,param_3,param_4,uVar7,uVar8);
  func_0x00010c19f0e0(*(undefined8 *)(puVar1 + _DAT_11277a910));
  lVar5 = (long)_DAT_11277a91c;
  func_0x00010bf03be0(*(undefined8 *)(puVar1 + lVar5));
  func_0x00010bf20c00(puVar1);
  _CGRectInset();
  uVar7 = uVar6;
  uVar8 = param_2;
  func_0x00010bf8c0e0(*(undefined8 *)(puVar1 + lVar5));
  func_0x00010bf8c0e0(*(undefined8 *)(puVar1 + lVar5));
  _CGRectInset(uVar6,param_2,param_3,param_4,uVar7,uVar8);
  func_0x00010c19f0e0(*(undefined8 *)(puVar1 + _DAT_11277a918));
  return;
}



/* Entry: 108cd6f90; end: 108cd70db; -[SCLongPressAnimationView layoutSublayersOfLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd6f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fe3b8;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSublayersOfLayer__1125377f8);
  lVar1 = (long)_DAT_11277a914;
  func_0x00010bf03be0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectInset();
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010bf8c0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf8c0e0(*(undefined8 *)(param_5 + lVar1));
  _CGRectInset(param_1,param_2,param_3,param_4,uVar2,uVar3);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277a910));
  lVar1 = (long)_DAT_11277a91c;
  func_0x00010bf03be0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectInset();
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010bf8c0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf8c0e0(*(undefined8 *)(param_5 + lVar1));
  _CGRectInset(param_1,param_2,param_3,param_4,uVar2,uVar3);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277a918));
  return;
}



/* Entry: 108cd70dc; end: 108cd70eb; -[SCLongPressAnimationView sizeThatFits:] */

void FUN_108cd70dc(void)

{
  return;
}



/* Entry: 108cd70ec; end: 108cd715b; -[SCLongPressAnimationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd70ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a91c,0);
  _objc_storeStrong(param_1 + _DAT_11277a914,0);
  _objc_storeStrong(param_1 + _DAT_11277a920,0);
  _objc_storeStrong(param_1 + _DAT_11277a918,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a910,0);
  return;
}



/* Entry: 108cd715c; end: 108cd71d7; +[SCLongPressParticleAnimationView longPressParticleAnimationViewWithConfiguration:] */

void FUN_108cd715c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014100(param_1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cd71d8; end: 108cd724f; +[SCLongPressParticleAnimationView longPressParticleAnimationViewWithFrame:configuration:] */

void FUN_108cd71d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_alloc(param_5);
  func_0x00010c014100(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108cd7250; end: 108cd73cb; -[SCLongPressParticleAnimationView initWithFrame:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108cd7250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126fe3c0;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    lVar5 = (long)_DAT_11277a944;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    func_0x00010bea9280(puVar1);
    func_0x00010bea9260(puVar1);
    uStack_70 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a948);
    uStack_68 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a94c);
    uStack_60 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a950);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1943c0(*(undefined8 *)((long)puVar1 + (long)_DAT_11277a954));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
  }
  lVar5 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_108cd73cc;
  puStack_a8 = PTR_PTR_1126fe3c0;
  lStack_b0 = lVar5;
  puStack_a0 = (undefined1 *)puVar1;
  lStack_98 = param_7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar5);
  puVar4 = *(undefined1 **)(lVar5 + _DAT_11277a954);
  func_0x00010c19f0e0(puVar4);
  return puVar4;
}



/* Entry: 108cd73cc; end: 108cd7423; -[SCLongPressParticleAnimationView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd73cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe3c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277a954));
  return;
}



/* Entry: 108cd7424; end: 108cd7433; -[SCLongPressParticleAnimationView updateEmitterPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd7424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1943f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a954),PTR_s_setEmitterPosition__112642b18);
  return;
}



/* Entry: 108cd7434; end: 108cd7513; -[SCLongPressParticleAnimationView _setUpEmitterLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd7434(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___CAEmitterLayer_1126dbaf0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11277a954;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1f9a20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c1ea840(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c194420(0x4059000000000000,0x4059000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c194400(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c191b60(*(undefined8 *)(param_1 + lVar3));
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c16fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setBeginTime__112639970);
  return;
}



/* Entry: 108cd7514; end: 108cd777f; -[SCLongPressParticleAnimationView _setUpEmitterCell] */

/* WARNING: Possible PIC construction at 0x000108cd7748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cd774c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd7514(float param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___CAEmitterCell_1126dbaf8;
  func_0x00010bf8e280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11277a948;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  func_0x00010c182c80(*(undefined8 *)(param_2 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___CAEmitterCell_1126dbaf8;
  func_0x00010bf8e280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277a950;
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  func_0x00010c182c80(*(undefined8 *)(param_2 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___CAEmitterCell_1126dbaf8;
  func_0x00010bf8e280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277a94c;
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  func_0x00010c182c80(*(undefined8 *)(param_2 + lVar5));
  _objc_release(puVar1);
  func_0x00010bde4fc0(param_2);
  func_0x00010bde4fc0(param_2);
  func_0x00010bde4fc0(param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c098f00(uVar2);
  param_1 = param_1 * 1.1;
  func_0x00010c1bd9a0(param_1,uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c098f00(uVar2);
  param_1 = param_1 * 1.2;
  func_0x00010c1bd9a0(param_1,uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c098f00(uVar2);
  param_1 = param_1 * 1.3;
  func_0x00010c1bd9a0(param_1,uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010bf1a580(uVar2);
  param_1 = param_1 * 1.1;
  func_0x00010c170340(param_1,uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bf1a580(uVar2);
  param_1 = param_1 * 1.2;
  func_0x00010c170340(param_1,uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010bf1a580(uVar2);
  dVar6 = (double)(ulong)(uint)(param_1 * 1.3);
  func_0x00010c170340(dVar6,uVar2);
  func_0x00010c0f4bc0(*(undefined8 *)(param_2 + _DAT_11277a944));
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar6 / 100.0,*(undefined8 *)(param_2 + lVar3),PTR_s_setScale__11265b220);
  return;
}



/* Entry: 108cd7780; end: 108cd78b7; -[SCLongPressParticleAnimationView _configureEmitterCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd7780(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_11277a944;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  _objc_retain(param_4);
  func_0x00010c2979e0(uVar2);
  func_0x00010c220640(param_4);
  func_0x00010c2979e0(*(undefined8 *)(param_2 + lVar3));
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010c297a20(lVar1);
  dVar5 = (param_1 * (double)lVar1) / 100.0;
  func_0x00010c220680(dVar5,param_4);
  func_0x00010c249e60(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bdf98e0(param_2);
  func_0x00010c207dc0(param_4);
  func_0x00010c249e80(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bdf98e0(param_2);
  func_0x00010c207de0(param_4);
  func_0x00010bf8dd40(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bdf98e0(param_2);
  func_0x00010c194300(param_4);
  func_0x00010c098b80(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c1bd9a0((float)dVar5,param_4);
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010c0f4b80(lVar1);
  func_0x00010c170340((float)lVar1,param_4);
  fVar4 = 0.0;
  func_0x00010c1f6080(0,param_4);
  func_0x00010c098f00(param_4);
  dVar5 = -1.0 / (double)fVar4;
  func_0x00010c1f60e0(dVar5,param_4);
  fVar4 = SUB84(dVar5,0);
  func_0x00010c098f00(param_4);
  func_0x00010c167820(-1.0 / fVar4,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cd78b8; end: 108cd78d3; -[SCLongPressParticleAnimationView _degreesToRadians:] */

double FUN_108cd78b8(double param_1)

{
  return (param_1 * 3.141592653589793) / 180.0;
}



/* Entry: 108cd78d4; end: 108cd7943; -[SCLongPressParticleAnimationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd78d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a94c,0);
  _objc_storeStrong(param_1 + _DAT_11277a950,0);
  _objc_storeStrong(param_1 + _DAT_11277a948,0);
  _objc_storeStrong(param_1 + _DAT_11277a954,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a944,0);
  return;
}



/* Entry: 108cd7944; end: 108cd794b; -[SCLongPressParticleAnimationConfiguration particleBirthRate] */

undefined8 FUN_108cd7944(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cd794c; end: 108cd7953; -[SCLongPressParticleAnimationConfiguration setParticleBirthRate:] */

void FUN_108cd794c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cd7954; end: 108cd795b; -[SCLongPressParticleAnimationConfiguration particleSize] */

undefined8 FUN_108cd7954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cd795c; end: 108cd7963; -[SCLongPressParticleAnimationConfiguration setParticleSize:] */

void FUN_108cd795c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108cd7964; end: 108cd796b; -[SCLongPressParticleAnimationConfiguration lifeSpan] */

undefined8 FUN_108cd7964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cd796c; end: 108cd7973; -[SCLongPressParticleAnimationConfiguration setLifeSpan:] */

void FUN_108cd796c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108cd7974; end: 108cd797b; -[SCLongPressParticleAnimationConfiguration spin] */

undefined8 FUN_108cd7974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cd797c; end: 108cd7983; -[SCLongPressParticleAnimationConfiguration setSpin:] */

void FUN_108cd797c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108cd7984; end: 108cd798b; -[SCLongPressParticleAnimationConfiguration spinRange] */

undefined8 FUN_108cd7984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cd798c; end: 108cd7993; -[SCLongPressParticleAnimationConfiguration setSpinRange:] */

void FUN_108cd798c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108cd7994; end: 108cd799b; -[SCLongPressParticleAnimationConfiguration emissionRange] */

undefined8 FUN_108cd7994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cd799c; end: 108cd79a3; -[SCLongPressParticleAnimationConfiguration setEmissionRange:] */

void FUN_108cd799c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108cd79a4; end: 108cd79ab; -[SCLongPressParticleAnimationConfiguration velocity] */

undefined8 FUN_108cd79a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cd79ac; end: 108cd79b3; -[SCLongPressParticleAnimationConfiguration setVelocity:] */

void FUN_108cd79ac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 108cd79b4; end: 108cd79bb; -[SCLongPressParticleAnimationConfiguration velocityPercentRange] */

undefined8 FUN_108cd79b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cd79bc; end: 108cd79c3; -[SCLongPressParticleAnimationConfiguration setVelocityPercentRange:] */

void FUN_108cd79bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108cd79c4; end: 108cd7a1b;  */

void FUN_108cd79c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd7a1c; end: 108cd7aeb;  */

void FUN_108cd7a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xa1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  uVar3 = 0;
  if (param_5 == 0) {
    uVar3 = 0x4008000000000000;
  }
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cd7aec; end: 108cd7b4b; -[SCTimelineModeExpandableProgressBarView initWithDefaultMaxIntervalsWithMinFinalSegmentDuration:] */

undefined8 FUN_108cd7aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4270;
  func_0x00010bf69be0(PTR_PTR_1126d4270);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b3e0(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 108cd7b4c; end: 108cd7d3b; -[SCTimelineModeExpandableProgressBarView initWithProgressBarMaxIntervals:minFinalSegmentDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108cd7b4c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fe3c8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 0.4;
    puVar4 = puVar3;
    func_0x00010bf414e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a958);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a958) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a95c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a95c) = puVar3;
    _objc_release(uVar6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a960) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a964) = 0;
    lVar7 = (long)_DAT_11277a968;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c089820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = dVar8 - param_1;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c089820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(double *)((long)puVar1 + (long)_DAT_11277a96c) = param_1 / dVar8;
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108cd7d3c; end: 108cd7f37; -[SCTimelineModeExpandableProgressBarView startAnimationWithSpeedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd7d3c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [8];
  double dStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  dVar7 = param_1;
  func_0x00010be67460();
  lVar5 = (long)_DAT_11277a960;
  uVar8 = *(undefined8 *)(param_5 + lVar5);
  uVar9 = 0x3ff0000000000000;
  uVar4 = param_3;
  uVar11 = param_4;
  func_0x00010be19140(param_5);
  uVar1 = (ulong)*(byte *)(param_5 + _DAT_11277a970);
  FUN_108cd7a1c(*(undefined8 *)PTR__CGRectZero_110347608,
                *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277a974;
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  *(ulong *)(param_5 + lVar6) = uVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_5);
  func_0x00010c19f0e0(dVar7,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar6));
  func_0x00010bdf6ce0(param_5);
  dVar10 = *(double *)(param_5 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108cd7f38;
  puStack_b0 = &UNK_110870f70;
  lStack_a8 = param_5;
  uStack_a0 = uVar8;
  uStack_98 = uVar9;
  uStack_90 = uVar4;
  uStack_88 = uVar11;
  func_0x00010c00ea00(param_1 * dVar7 * (1.0 - dVar10));
  lVar5 = (long)_DAT_11277a978;
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c24dc40(*(undefined8 *)(param_5 + lVar5));
  _objc_initWeak(auStack_d0,param_5);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  _objc_copyWeak(auStack_e0,auStack_d0);
  dStack_d8 = param_1;
  func_0x00010bef78c0(uVar4);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d0);
  return;
}



/* Entry: 108cd7f38; end: 108cd7f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd7f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a974),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108cd7f58; end: 108cd7f93;  */

void FUN_108cd7f58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdcb540(*(undefined8 *)(param_1 + 0x28),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cd7f94; end: 108cd8017; -[SCTimelineModeExpandableProgressBarView _oldFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cd7f94(double param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_4 + _DAT_11277a960);
  if (*(char *)(param_4 + _DAT_11277a970) == '\x01') {
    func_0x00010bf20c00();
    dVar1 = dVar1 * param_3;
    func_0x00010bf20c00(param_4);
  }
  else {
    func_0x00010be5db80();
    dVar1 = param_1 * dVar1 + 2.0;
    func_0x00010bf20c00(param_4);
  }
  return dVar1;
}



/* Entry: 108cd8018; end: 108cd8153; -[SCTimelineModeExpandableProgressBarView _animationDidCompleteWithSpeedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd8018(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_11277a964;
  lVar1 = (long)_DAT_11277a968;
  lVar5 = *(long *)(param_2 + lVar6);
  uVar2 = *(ulong *)(param_2 + lVar1);
  dVar7 = param_1;
  func_0x00010bf529e0();
  if (lVar5 + 1U < uVar2) {
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar4 = *(undefined8 *)(param_2 + lVar1);
    dVar8 = dVar7;
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    *(long *)(param_2 + lVar6) = *(long *)(param_2 + lVar6) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010becf010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (dVar7 / dVar8,param_1,param_2,PTR_s__transitionForRecordingToScaleFa_1125915a8);
    return;
  }
  lVar6 = (long)_DAT_11277a960;
  func_0x00010be19140(*(undefined8 *)(param_2 + lVar6),0x3ff0000000000000,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11277a974));
  func_0x00010befa120(*(undefined8 *)(param_2 + _DAT_11277a95c));
  func_0x00010befa120(*(undefined8 *)(param_2 + _DAT_11277a958));
  *(undefined8 *)(param_2 + lVar6) = 0x3ff0000000000000;
  uVar3 = *(undefined8 *)(param_2 + _DAT_11277a978);
  *(undefined8 *)(param_2 + _DAT_11277a978) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be82f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__progressDidChange_11257e560);
  return;
}



/* Entry: 108cd8154; end: 108cd82bf; -[SCTimelineModeExpandableProgressBarView setIsDirectorModeUI:] */

/* WARNING: Possible PIC construction at 0x000108cd838c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cd8390) */
/* WARNING: Removing unreachable block (ram,0x00010be82f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd8154(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  iVar3 = (int)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(char *)(param_1 + _DAT_11277a970) = (char)param_3;
  uVar10 = 0;
  if (param_3 == 0) {
    uVar10 = 0x4014000000000000;
  }
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar10);
  _objc_release(lVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar4 = *(long *)(param_1 + _DAT_11277a95c);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    uVar10 = 0;
    if (param_3 == 0) {
      uVar10 = 0x4008000000000000;
    }
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(uVar10);
        _objc_release(uVar1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      iVar3 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar5 = (long)_DAT_11277a978;
    lVar2 = *(long *)(lVar4 + lVar5);
    func_0x00010c252440();
    if (lVar2 != 1) {
      return;
    }
    if (iVar3 == 0) {
      func_0x00010bec2f80(lVar4);
      func_0x00010be67460(lVar4);
      uVar10 = *(undefined8 *)(lVar4 + _DAT_11277a974);
    }
    else {
      lVar2 = (long)_DAT_11277a960;
      dVar7 = *(double *)(lVar4 + lVar2);
      if (dVar7 == 1.0) {
        return;
      }
      func_0x00010bfb6780(*(undefined8 *)(lVar4 + lVar5));
      dVar8 = *(double *)(lVar4 + lVar2);
      lVar5 = (long)_DAT_11277a97c;
      dVar9 = *(double *)(lVar4 + lVar5);
      dVar7 = dVar8 + dVar9 + ((1.0 - dVar8) - dVar9) * dVar7;
      func_0x00010be19140(dVar8,dVar7,lVar4);
      *(double *)(lVar4 + lVar2) = dVar7;
      func_0x00010bec2f80(lVar4);
      *(undefined8 *)(lVar4 + lVar5) = 0;
      uVar10 = *(undefined8 *)(lVar4 + _DAT_11277a974);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 108cd82c0; end: 108cd844b; -[SCTimelineModeExpandableProgressBarView stopAnimationAndSaveState:] */

/* WARNING: Possible PIC construction at 0x000108cd838c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cd8390) */
/* WARNING: Removing unreachable block (ram,0x00010be82f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd82c0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = (long)_DAT_11277a978;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c252440();
  if (lVar1 != 1) {
    return;
  }
  if (param_3 == 0) {
    func_0x00010bec2f80(param_1);
    func_0x00010be67460(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277a974);
  }
  else {
    lVar1 = (long)_DAT_11277a960;
    dVar4 = *(double *)(param_1 + lVar1);
    if (dVar4 == 1.0) {
      return;
    }
    func_0x00010bfb6780(*(undefined8 *)(param_1 + lVar3));
    dVar5 = *(double *)(param_1 + lVar1);
    lVar3 = (long)_DAT_11277a97c;
    dVar6 = *(double *)(param_1 + lVar3);
    dVar4 = dVar5 + dVar6 + ((1.0 - dVar5) - dVar6) * dVar4;
    func_0x00010be19140(dVar5,dVar4,param_1);
    *(double *)(param_1 + lVar1) = dVar4;
    func_0x00010bec2f80(param_1);
    *(undefined8 *)(param_1 + lVar3) = 0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277a974);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108cd844c; end: 108cd845b; -[SCTimelineModeExpandableProgressBarView progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd844c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a960);
}



/* Entry: 108cd845c; end: 108cd871b; -[SCTimelineModeExpandableProgressBarView setProgressSegmentEndTimesArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd845c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar8 = param_5;
  func_0x00010bf20c00();
  iVar2 = (int)lVar8;
  _CGRectIsEmpty();
  if (iVar2 != 0) {
    func_0x00010c1cbe20(param_5);
    func_0x00010c08cdc0(param_5);
  }
  lVar8 = param_7;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar12 = param_1;
  _objc_release(lVar8);
  lVar8 = (long)_DAT_11277a964;
  *(undefined8 *)(param_5 + lVar8) = 0;
  lVar9 = (long)_DAT_11277a968;
  uVar3 = *(ulong *)(param_5 + lVar9);
  func_0x00010bf529e0();
  if (1 < uVar3) {
    uVar3 = 1;
    dVar17 = dVar12;
    do {
      uVar4 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar12 = dVar17;
      _objc_release(uVar4);
      if (dVar17 < param_1) {
        *(ulong *)(param_5 + lVar8) = uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar5 = *(ulong *)(param_5 + lVar9);
      func_0x00010bf529e0();
      dVar17 = dVar12;
    } while (uVar3 < uVar5);
  }
  func_0x00010bdf6ce0(param_5);
  lVar10 = (long)_DAT_11277a960;
  *(undefined8 *)(param_5 + lVar10) = 0;
  dVar17 = 0.0;
  _objc_retain(param_7);
  lVar8 = param_7;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    dVar15 = dVar17;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_7);
      }
      uVar4 = *(undefined8 *)(lVar11 * 8);
      dVar17 = *(double *)(param_5 + lVar10);
      func_0x00010bf885a0(uVar4);
      dVar15 = dVar15 / dVar12;
      func_0x00010be19140(param_5);
      dVar13 = dVar17;
      func_0x00010bf885a0(uVar4);
      *(double *)(param_5 + lVar10) = dVar13 / dVar12;
      uVar4 = *(undefined8 *)(param_5 + _DAT_11277a958);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar6);
      uVar3 = (ulong)*(byte *)(param_5 + _DAT_11277a970);
      FUN_108cd7a1c(dVar17,dVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + _DAT_11277a974);
      *(ulong *)(param_5 + _DAT_11277a974) = uVar3;
      _objc_release(uVar4);
      func_0x00010befbb60(param_5);
      func_0x00010befa120(*(undefined8 *)(param_5 + _DAT_11277a95c));
      lVar11 = lVar11 + 1;
      dVar15 = dVar17;
    } while (lVar8 != lVar11);
    lVar8 = param_7;
    func_0x00010bf52a60();
  }
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  dVar12 = dVar17;
  func_0x00010bdf6ce0();
  lVar8 = (long)_DAT_11277a960;
  dVar15 = dVar12 * *(double *)(param_7 + lVar8);
  dVar17 = dVar17 + dVar15;
  if (dVar12 < dVar17) {
    lVar7 = (long)_DAT_11277a964;
    lVar9 = (long)_DAT_11277a968;
    uVar3 = *(ulong *)(param_7 + lVar7);
    do {
      uVar3 = uVar3 + 1;
      uVar5 = *(ulong *)(param_7 + lVar9);
      func_0x00010bf529e0();
      uVar4 = *(undefined8 *)(param_7 + lVar9);
      if (uVar5 <= uVar3) {
        func_0x00010c089820(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar13 = dVar15;
        _objc_release(uVar4);
        dVar14 = dVar13;
        if (dVar15 <= dVar17) {
          lVar10 = *(long *)(param_7 + lVar9);
          func_0x00010bf529e0();
          uVar3 = lVar10 - 1;
          uVar4 = *(undefined8 *)(param_7 + lVar9);
          func_0x00010c089820(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar14 = dVar13;
          _objc_release(uVar4);
          dVar17 = dVar13;
        }
        break;
      }
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar14 = dVar15;
      _objc_release(uVar4);
      bVar1 = dVar15 <= dVar17;
      dVar15 = dVar14;
    } while (bVar1);
    uVar4 = *(undefined8 *)(param_7 + lVar9);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar15 = dVar14 / dVar12;
    _objc_release(uVar4);
    *(ulong *)(param_7 + lVar7) = uVar3;
    func_0x00010becf240(param_7);
  }
  func_0x00010bdf6ce0(param_7);
  uVar16 = *(undefined8 *)(param_7 + lVar8);
  dVar17 = dVar17 / dVar15;
  dVar12 = dVar17;
  func_0x00010be19140(uVar16,dVar17,param_7);
  *(double *)(param_7 + lVar8) = dVar17;
  uVar4 = *(undefined8 *)(param_7 + _DAT_11277a958);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar17,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(puVar6);
  uVar3 = (ulong)*(byte *)(param_7 + _DAT_11277a970);
  FUN_108cd7a1c(uVar16,dVar12,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_7 + _DAT_11277a974);
  *(ulong *)(param_7 + _DAT_11277a974) = uVar3;
  _objc_release(uVar4);
  func_0x00010befbb60(param_7);
  func_0x00010befa120(*(undefined8 *)(param_7 + _DAT_11277a95c));
                    /* WARNING: Could not recover jumptable at 0x00010be82f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_7,PTR_s__progressDidChange_11257e560);
  return;
}



/* Entry: 108cd871c; end: 108cd8947; -[SCTimelineModeExpandableProgressBarView addSegmentWithDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd871c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  
  dVar10 = param_1;
  func_0x00010bdf6ce0();
  lVar9 = (long)_DAT_11277a960;
  dVar11 = dVar10 * *(double *)(param_5 + lVar9);
  param_1 = param_1 + dVar11;
  if (dVar10 < param_1) {
    lVar1 = (long)_DAT_11277a964;
    lVar2 = (long)_DAT_11277a968;
    uVar8 = *(ulong *)(param_5 + lVar1);
    do {
      uVar8 = uVar8 + 1;
      uVar4 = *(ulong *)(param_5 + lVar2);
      func_0x00010bf529e0();
      uVar5 = *(undefined8 *)(param_5 + lVar2);
      if (uVar4 <= uVar8) {
        func_0x00010c089820(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar12 = dVar11;
        _objc_release(uVar5);
        dVar13 = dVar12;
        if (dVar11 <= param_1) {
          lVar6 = *(long *)(param_5 + lVar2);
          func_0x00010bf529e0();
          uVar8 = lVar6 - 1;
          uVar5 = *(undefined8 *)(param_5 + lVar2);
          func_0x00010c089820(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar13 = dVar12;
          _objc_release(uVar5);
          param_1 = dVar12;
        }
        break;
      }
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar13 = dVar11;
      _objc_release(uVar5);
      bVar3 = dVar11 <= param_1;
      dVar11 = dVar13;
    } while (bVar3);
    uVar5 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010c0dfd40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar11 = dVar13 / dVar10;
    _objc_release(uVar5);
    *(ulong *)(param_5 + lVar1) = uVar8;
    func_0x00010becf240(param_5);
  }
  func_0x00010bdf6ce0(param_5);
  uVar14 = *(undefined8 *)(param_5 + lVar9);
  param_1 = param_1 / dVar11;
  dVar10 = param_1;
  func_0x00010be19140(uVar14,param_1,param_5);
  *(double *)(param_5 + lVar9) = param_1;
  uVar5 = *(undefined8 *)(param_5 + _DAT_11277a958);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5);
  _objc_release(puVar7);
  uVar8 = (ulong)*(byte *)(param_5 + _DAT_11277a970);
  FUN_108cd7a1c(uVar14,dVar10,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + _DAT_11277a974);
  *(ulong *)(param_5 + _DAT_11277a974) = uVar8;
  _objc_release(uVar5);
  func_0x00010befbb60(param_5);
  func_0x00010befa120(*(undefined8 *)(param_5 + _DAT_11277a95c));
                    /* WARNING: Could not recover jumptable at 0x00010be82f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__progressDidChange_11257e560);
  return;
}



/* Entry: 108cd8948; end: 108cd89d7; -[SCTimelineModeExpandableProgressBarView _progressDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd8948(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277a968);
  func_0x00010bf529e0();
  if ((lVar1 + -1 == *(long *)(param_1 + _DAT_11277a964)) &&
     (*(double *)(param_1 + _DAT_11277a96c) < *(double *)(param_1 + _DAT_11277a960))) {
    param_1 = param_1 + _DAT_11277a980;
    _objc_loadWeakRetained(param_1);
    func_0x00010c117820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108cd89d8; end: 108cd8b3f; -[SCTimelineModeExpandableProgressBarView updateLastSegmentDurationWithinOriginalLimits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd89d8(double param_1,long param_2,undefined8 param_3,double *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  if ((*(byte *)((long)param_4 + 0xc) & 1) != 0) {
    lVar4 = (long)_DAT_11277a958;
    lVar1 = *(long *)(param_2 + lVar4);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      dVar6 = 0.0;
      if (1 < lVar1) {
        uVar2 = *(undefined8 *)(param_2 + lVar4);
        func_0x00010c0dfd40(uVar2,param_3,lVar1 + -2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar2);
        dVar6 = param_1;
      }
      dStack_68 = param_4[1];
      dVar7 = *param_4;
      dStack_60 = param_4[2];
      dStack_70 = dVar7;
      _CMTimeGetSeconds(&dStack_70);
      dVar5 = dVar7;
      func_0x00010bdf6ce0(param_2);
      dVar7 = dVar6 + dVar7 / dVar5;
      dVar5 = 1.0;
      if (1.0 < dVar7) {
        func_0x00010bdf6ce0(param_2);
        _CMTimeMakeWithSeconds(&dStack_70,(1.0 - dVar6) * dVar5,*(undefined4 *)(param_4 + 1));
        param_4[1] = dStack_68;
        *param_4 = dStack_70;
        param_4[2] = dStack_60;
        dVar7 = 1.0;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + lVar4),param_3,puVar3,lVar1 + -1);
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)(param_2 + _DAT_11277a95c);
      func_0x00010c089820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be19140(dVar6,dVar7,param_2);
      func_0x00010c19f0e0(uVar2);
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 108cd8b40; end: 108cd8eef; -[SCTimelineModeExpandableProgressBarView deleteSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd8b40(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  if (-1 < (long)param_7) {
    lVar9 = (long)_DAT_11277a95c;
    uVar2 = *(ulong *)(param_5 + lVar9);
    func_0x00010bf529e0();
    if (param_7 < uVar2) {
      uVar3 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c0dfd40(uVar3,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(param_5 + lVar9),param_6,param_7);
      lVar9 = (long)_DAT_11277a958;
      if (param_7 == 0) {
        dVar12 = 0.0;
        dVar10 = param_1;
      }
      else {
        uVar4 = *(undefined8 *)(param_5 + lVar9);
        func_0x00010c0dfd40(uVar4,param_6,param_7 - 1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar10 = param_1;
        _objc_release(uVar4);
        dVar12 = param_1;
      }
      uVar4 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c0dfd40(uVar4,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar11 = dVar10;
      _objc_release(uVar4);
      func_0x00010c12d3c0(*(undefined8 *)(param_5 + lVar9),param_6,param_7);
      uVar2 = *(ulong *)(param_5 + lVar9);
      func_0x00010bf529e0();
      if (param_7 < uVar2) {
        do {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar4 = *(undefined8 *)(param_5 + lVar9);
          func_0x00010c0dfd40(uVar4,param_6,param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar11 = dVar11 - (dVar10 - dVar12);
          func_0x00010c0df720(dVar11,puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(*(undefined8 *)(param_5 + lVar9),param_6,puVar5,param_7);
          _objc_release(puVar5);
          _objc_release(uVar4);
          param_7 = param_7 + 1;
          uVar2 = *(ulong *)(param_5 + lVar9);
          func_0x00010bf529e0();
        } while (param_7 < uVar2);
      }
      uVar4 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c089820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar10 = dVar11;
      _objc_release(uVar4);
      func_0x00010bdf6ce0(param_5);
      dVar11 = dVar11 * dVar10;
      lVar6 = param_5;
      func_0x00010be38b40(dVar11);
      func_0x00010bdf6ce0(param_5);
      uVar4 = *(undefined8 *)(param_5 + _DAT_11277a968);
      dVar10 = dVar11;
      func_0x00010c0dfd40(uVar4,param_6,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar12 = dVar10;
      _objc_release(uVar4);
      lVar7 = *(long *)(param_5 + lVar9);
      func_0x00010bf529e0();
      if (lVar7 != 0) {
        uVar2 = 0;
        do {
          uVar4 = *(undefined8 *)(param_5 + lVar9);
          func_0x00010c0dfd40(uVar4,param_6,uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar12 = (dVar11 / dVar10) * dVar12;
          _objc_release(uVar4);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(dVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(*(undefined8 *)(param_5 + lVar9),param_6,puVar5,uVar2);
          _objc_release(puVar5);
          uVar2 = uVar2 + 1;
          uVar8 = *(ulong *)(param_5 + lVar9);
          func_0x00010bf529e0();
        } while (uVar2 < uVar8);
      }
      *(long *)(param_5 + _DAT_11277a964) = lVar6;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108cd8ef0;
      puStack_90 = &UNK_110842e18;
      uVar13 = 0x3fc999999999999a;
      uVar4 = uVar13;
      lStack_88 = param_5;
      func_0x00010bf03420(PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_a8,0);
      func_0x00010bfb68e0(uVar3);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_f0 = puVar5;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_108cd8fd0;
      puStack_d8 = &UNK_110870f70;
      _objc_retain(uVar3);
      uStack_b8 = 0;
      puStack_118 = puVar5;
      uStack_110 = 0xc2000000;
      uStack_108 = 0x108cd8fe0;
      puStack_100 = &UNK_110841f20;
      uStack_f8 = uVar3;
      uStack_d0 = uVar3;
      uStack_c8 = uVar4;
      uStack_c0 = param_2;
      uStack_b0 = param_4;
      _objc_retain(uVar3);
      func_0x00010bf03420(puVar1,param_6,&puStack_f0,&puStack_118);
      uVar4 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c089820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      *(undefined8 *)(param_5 + _DAT_11277a960) = uVar13;
      _objc_release(uVar4);
      _objc_release(uStack_f8);
      _objc_release(uStack_d0);
      _objc_release(uVar3);
    }
  }
  return;
}



/* Entry: 108cd8ef0; end: 108cd8fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd8ef0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = (long)_DAT_11277a958;
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    uVar7 = 0;
    do {
      uVar6 = param_1;
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar5);
      func_0x00010c0dfd40(uVar2,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277a95c);
      func_0x00010c0dfd40(uVar2,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be19140(uVar7,uVar6,*(undefined8 *)(param_2 + 0x20));
      func_0x00010c19f0e0(uVar2);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(*(long *)(param_2 + 0x20) + lVar5);
      func_0x00010bf529e0();
      param_1 = uVar7;
      uVar7 = uVar6;
    } while (uVar4 < uVar3);
  }
  return;
}



/* Entry: 108cd8fd0; end: 108cd8fe7;  */

void FUN_108cd8fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108cd8fe8; end: 108cd9043; -[SCTimelineModeExpandableProgressBarView _currentMaxIntervalValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd8fe8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277a968);
  func_0x00010c0dfd40(uVar1,param_3,*(undefined8 *)(param_2 + _DAT_11277a964));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cd9044; end: 108cd9177; -[SCTimelineModeExpandableProgressBarView reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cd9044(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
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
  *(undefined8 *)(param_4 + _DAT_11277a960) = 0;
  dVar6 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = (long)_DAT_11277a95c;
  lVar2 = *(long *)(param_4 + lVar3);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_5,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_118 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_5,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_4 + lVar3));
  func_0x00010c12adc0(*(undefined8 *)(param_4 + _DAT_11277a958));
  *(undefined8 *)(param_4 + _DAT_11277a964) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar6;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  return param_3 + -4.0;
}



/* Entry: 108cd9178; end: 108cd9193; -[SCTimelineModeExpandableProgressBarView _maxAvailableWidth] */

double FUN_108cd9178(undefined8 param_1,undefined8 param_2,double param_3)

{
  func_0x00010bf20c00();
  return param_3 + -4.0;
}



/* Entry: 108cd9194; end: 108cd91af; -[SCTimelineModeExpandableProgressBarView _maxAvailableHeight] */

double FUN_108cd9194(void)

{
  double in_d3;
  
  func_0x00010bf20c00();
  return in_d3 + -4.0;
}



/* Entry: 108cd91b0; end: 108cd925b; -[SCTimelineModeExpandableProgressBarView _indexForSmallestMaxIntervalForEndTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108cd91b0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  if (param_1 <= 0.0) {
    uVar4 = 0;
  }
  else {
    lVar5 = (long)_DAT_11277a968;
    lVar1 = *(long *)(param_2 + lVar5);
    dVar6 = param_1;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar4 = 0;
      do {
        uVar2 = *(undefined8 *)(param_2 + lVar5);
        func_0x00010c0dfd40(uVar2,param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar7 = dVar6;
        _objc_release(uVar2);
        if (param_1 < dVar6) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        uVar3 = *(ulong *)(param_2 + lVar5);
        func_0x00010bf529e0();
        dVar6 = dVar7;
      } while (uVar4 < uVar3);
    }
    lVar1 = *(long *)(param_2 + lVar5);
    func_0x00010bf529e0(lVar1);
    uVar4 = lVar1 - 1;
  }
  return uVar4;
}



/* Entry: 108cd925c; end: 108cd9267; +[SCTimelineModeExpandableProgressBarView defaultMaxIntervals] */

undefined ** FUN_108cd925c(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111182f00;
}



/* Entry: 108cd9268; end: 108cd94bf; -[SCTimelineModeExpandableProgressBarView _transitionForRecordingToScaleFactor:speedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9268(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_110 [8];
  double dStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  double dStack_88;
  
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277a958);
  dVar7 = param_1;
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar7 = dVar7 / param_1;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277a978;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  *(undefined8 *)(param_5 + lVar4) = 0;
  _objc_release(uVar2);
  *(double *)(param_5 + _DAT_11277a960) = *(double *)(param_5 + _DAT_11277a960) / param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108cd94c0;
  puStack_98 = &UNK_110848c48;
  lStack_90 = param_5;
  dStack_88 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  param_1 = 1.0 / param_1;
  func_0x00010be19140(dVar7,param_1,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277a974));
  uVar6 = 0x3ff0000000000000;
  dVar5 = dVar7;
  func_0x00010be19140(param_5);
  dVar7 = param_1 - dVar7;
  *(double *)(param_5 + _DAT_11277a97c) = dVar7;
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277a968);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108cd95dc;
  puStack_e0 = &UNK_110870f70;
  lStack_d8 = param_5;
  dStack_d0 = dVar5;
  uStack_c8 = uVar6;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  func_0x00010c00ea00(param_2 * (1.0 - param_1) * dVar7);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  *(undefined **)(param_5 + lVar4) = puVar3;
  _objc_release(uVar2);
  func_0x00010c24dc40(*(undefined8 *)(param_5 + lVar4));
  _objc_initWeak(auStack_100,param_5);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  _objc_copyWeak(auStack_110,auStack_100);
  dStack_108 = param_2;
  func_0x00010bef78c0(uVar2);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_100);
  return;
}



/* Entry: 108cd94c0; end: 108cd95db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd94c0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_11277a958;
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + lVar6);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = 0;
    dVar7 = 0.0;
    do {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6);
      func_0x00010c0dfd40(uVar2,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = param_1 / *(double *)(param_2 + 0x28);
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6),param_3,puVar3,uVar5);
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277a95c);
      func_0x00010c0dfd40(uVar2,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be19140(dVar7,dVar8,*(undefined8 *)(param_2 + 0x20));
      func_0x00010c19f0e0(uVar2);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar4 = *(ulong *)(*(long *)(param_2 + 0x20) + lVar6);
      func_0x00010bf529e0();
      param_1 = dVar7;
      dVar7 = dVar8;
    } while (uVar5 < uVar4);
  }
  return;
}



/* Entry: 108cd95dc; end: 108cd95fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd95dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a974),
             PTR_s_setFrame__112645658);
  return;
}


