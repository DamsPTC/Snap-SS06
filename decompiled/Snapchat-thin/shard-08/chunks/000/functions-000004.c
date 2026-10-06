/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bb9880; end: 105bb9a03; -[SCFriendsFeedCallingButtonView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9880(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ec1b0;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar6 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar3 = (long)_DAT_112731508;
  func_0x00010c17a6a0(dVar6,(param_1 + 24.0 + 10.0) * 0.5,*(undefined8 *)(param_2 + lVar3));
  puVar1 = (undefined8 *)(param_2 + _DAT_11273150c);
  dVar4 = 0.0;
  _CGRectIntegral(0,0,*puVar1,puVar1[1]);
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar5 = (double)puVar1[1];
  _CGRectIntegral(0,0,0x4040800000000000,0x4040800000000000);
  lVar3 = (long)_DAT_112731510;
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c17a6a0(dVar6,(dVar4 - dVar5) * 0.5,*(undefined8 *)(param_2 + lVar3));
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 16.5;
  func_0x00010c1842e0(0x4030800000000000);
  _objc_release(uVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetWidth();
  dVar5 = dVar4 * 0.5;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetHeight();
  lVar3 = (long)_DAT_112731514;
  func_0x00010c17a6a0(dVar5,dVar4 * 0.5,*(undefined8 *)(param_2 + lVar3));
  _CGRectIntegral(0,0,0x4038000000000000,0x4038000000000000);
  func_0x00010c1739e0(*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 105bb9a04; end: 105bb9a8f; -[SCFriendsFeedCallingButtonView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ec1b0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731508));
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731510));
  _objc_release(param_3);
  return;
}



/* Entry: 105bb9a90; end: 105bb9ae7; -[SCFriendsFeedCallingButtonView startAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105bb9a90(undefined8 param_1,double param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined1 **ppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  double dStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar10 = *(long *)(param_3 + _DAT_112731510);
  uVar11 = *(undefined8 *)(param_3 + _DAT_112731508);
  func_0x00010bf345e0();
  dVar12 = *(double *)(param_3 + _DAT_11273150c + 8);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = dVar12;
  _objc_retain();
  _objc_retain(uVar11);
  uVar2 = uVar11;
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar2);
  func_0x00010bf345e0(lVar10);
  uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_188 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_190 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_180 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_170 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_160 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  _CATransform3DTranslate(&uStack_108,0,param_2 - dVar13,0,&uStack_190);
  lVar3 = lVar10;
  func_0x00010c08c0e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uStack_c0;
  uStack_150 = uStack_c8;
  uStack_138 = uStack_b0;
  uStack_140 = uStack_b8;
  uStack_128 = uStack_a0;
  uStack_130 = uStack_a8;
  uStack_118 = uStack_90;
  uStack_120 = uStack_98;
  uStack_188 = uStack_100;
  uStack_190 = uStack_108;
  uStack_178 = uStack_f0;
  uStack_180 = uStack_f8;
  uStack_168 = uStack_e0;
  uStack_170 = uStack_e8;
  uStack_158 = uStack_d0;
  uStack_160 = uStack_d8;
  func_0x00010c219960();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar4);
  func_0x00010c192d40(0x3fb99999a0000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  func_0x00010c192d40(0x3fd3333340000000,puVar5);
  lVar3 = lVar10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_210,lVar3);
  }
  _CATransform3DScale(&uStack_190,0x3ff3333340000000,0x3ff3333340000000,0x3ff3333340000000,
                      &uStack_210);
  _objc_release(lVar3);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  puStack_80 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fe19999a0000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar7 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  puStack_238 = &UNK_105b4e7bc;
  puStack_230 = &UNK_110844b80;
  lStack_228 = lVar10;
  uStack_220 = uVar11;
  dStack_218 = dVar12;
  _objc_retain(uVar11);
  _objc_retain(lVar10);
  func_0x00010c17fb40(puVar7);
  lVar3 = lVar10;
  func_0x00010c08c0e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(lVar3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  uStack_198 = uStack_118;
  uStack_1a0 = uStack_120;
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1f8 = uStack_178;
  uStack_200 = uStack_180;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_1c8 = uStack_148;
  uStack_1d0 = uStack_150;
  lVar3 = lVar10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar3);
  _objc_release(uStack_220);
  _objc_release(lStack_228);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar4;
  }
  ___stack_chk_fail();
  puStack_258 = &UNK_105b4e7bc;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(puVar4 + 0x20);
  uVar11 = *(undefined8 *)(puVar4 + 0x28);
  dVar13 = *(double *)(puVar4 + 0x30);
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(uVar11);
  _objc_retain(uVar2);
  uVar8 = uVar11;
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar8);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(-((dVar13 + 5.0) * 0.5),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4);
  _objc_release(puVar5);
  func_0x00010c216920(puVar4);
  func_0x00010c192d40(0x3fd0000000000000,puVar4);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5);
  puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((dVar13 + 5.0) * 0.5,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar7);
  _objc_release(puVar6);
  func_0x00010c216920(puVar7);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2d8 = puVar5;
  puStack_2d0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6);
  _objc_release(puVar9);
  func_0x00010c192d40(0x3fd0000000000000,puVar6);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uVar8 = uVar11;
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010bef6c20(uVar8);
  _objc_release(uVar8);
  uVar11 = uVar2;
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar11);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  uStack_308 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_310 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_2f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_300 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_2e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_2f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar5;
  }
  ___stack_chk_fail();
  puStack_318 = &UNK_105b4ea98;
  puStack_348 = &uStack_350;
  uStack_350 = 0;
  uStack_340 = 0x2020000000;
  uStack_338 = 0;
  puStack_330 = puVar4;
  uStack_328 = uVar2;
  ppuStack_320 = &puStack_260;
  func_0x00010c0bf920();
  bVar1 = *(byte *)(puStack_348 + 3);
  __Block_object_dispose(&uStack_350,8);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 105bb9ae8; end: 105bb9c1b; -[SCFriendsFeedCallingButtonView setPresenceContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bcd20(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20858;
  if (*(char *)(puStack_48 + 3) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e20878;
  }
  _objc_retain(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731514);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105bb9c1c; end: 105bb9c53;  */

void FUN_105bb9c1c(long param_1,long param_2)

{
  func_0x00010bf28160();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 1;
  return;
}



/* Entry: 105bb9c54; end: 105bb9ca3; -[SCFriendsFeedCallingButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9c54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731508,0);
  _objc_storeStrong(param_1 + _DAT_112731514,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731510,0);
  return;
}



/* Entry: 105bb9ca4; end: 105bb9d73; -[SCFriendsFeedCameraDefaultReplyButtonView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bb9ca4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec1b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c161080(puVar1);
    func_0x00010b0aef6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731518);
    *(undefined **)((long)puVar1 + (long)_DAT_112731518) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bb9d74; end: 105bb9d9f;  */

void FUN_105bb9d74(void)

{
  _objc_alloc(PTR_PTR_1126c2e40);
  func_0x00010c01afe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bb9da0; end: 105bb9fd7; -[SCFriendsFeedCameraDefaultReplyButtonView setButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105bb9da0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11273151c) != param_3) {
    *(long *)(param_1 + _DAT_11273151c) = param_3;
    lVar11 = (long)_DAT_112731518;
    lVar2 = *(long *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar11));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf34860(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf493a0(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      uStack_78 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf348e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493a0(uVar7,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    param_1 = *(long *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174920();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_11273151c);
}



/* Entry: 105bb9fd8; end: 105bb9fe7; -[SCFriendsFeedCameraDefaultReplyButtonView buttonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bb9fd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273151c);
}



/* Entry: 105bb9fe8; end: 105bb9ffb; -[SCFriendsFeedCameraDefaultReplyButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bb9fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731518,0);
  return;
}



/* Entry: 105bb9ffc; end: 105bba12f; -[SCFriendsFeedCameraReplyButtonView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bb9ffc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec1c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c161080(puVar1);
    func_0x00010b0aef6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731520);
    *(undefined **)((long)puVar1 + (long)_DAT_112731520) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bba130; end: 105bba367; -[SCFriendsFeedCameraReplyButtonView setButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105bba130(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_112731524) != param_3) {
    *(long *)(param_1 + _DAT_112731524) = param_3;
    lVar11 = (long)_DAT_112731520;
    lVar2 = *(long *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar11));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf34860(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf493a0(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      uStack_78 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf348e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493a0(uVar7,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    param_1 = *(long *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174920();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_112731524);
}



/* Entry: 105bba368; end: 105bba377; -[SCFriendsFeedCameraReplyButtonView buttonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bba368(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731524);
}



/* Entry: 105bba378; end: 105bba38b; -[SCFriendsFeedCameraReplyButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731520,0);
  return;
}



/* Entry: 105bba38c; end: 105bba463; -[SCFriendsFeedCampaignButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bba38c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec1c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112731528) = 0;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11273152c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010bed9760(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bba464; end: 105bba483; -[SCFriendsFeedCampaignButton setCtaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba464(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112731528) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112731528) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImageForCTAType__112593f80);
  return;
}



/* Entry: 105bba484; end: 105bba4e7; -[SCFriendsFeedCampaignButton _updateImageForCTAType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba484(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0x11e;
  if (param_3 != 1) {
    uVar1 = 0x1e;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11273152c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105bba4e8; end: 105bba583; -[SCFriendsFeedCampaignButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba4e8(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  dVar2 = 0.0;
  _CGRectIntegral(0,0,0x4038000000000000,0x4038000000000000);
  lVar1 = (long)_DAT_11273152c;
  func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar3 = dVar2 * 0.5;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 105bba584; end: 105bba593; -[SCFriendsFeedCampaignButton ctaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bba584(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731528);
}



/* Entry: 105bba594; end: 105bba5a7; -[SCFriendsFeedCampaignButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273152c,0);
  return;
}



/* Entry: 105bba5a8; end: 105bba707; -[SCFriendsFeedChatButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bba5a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec1d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010c1af000(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c161080(puVar1);
    func_0x00010b0aeef4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_112731530;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bba708; end: 105bba7a3; -[SCFriendsFeedChatButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba708(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  dVar2 = 0.0;
  _CGRectIntegral(0,0,0x4034000000000000,0x4037000000000000);
  lVar1 = (long)_DAT_112731530;
  func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar3 = dVar2 * 0.5;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 105bba7a4; end: 105bba81b; -[SCFriendsFeedChatButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ec1d0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731530));
  _objc_release(param_3);
  return;
}



/* Entry: 105bba81c; end: 105bba82f; -[SCFriendsFeedChatButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731530,0);
  return;
}



/* Entry: 105bba830; end: 105bba92f; -[SCFriendsFeedClearButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bba830(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec1d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  puVar3 = PTR_PTR_1126b0c40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x403e000000000000,0x403e000000000000,0x4020000000000000,0x4020000000000000,
                        0x4020000000000000,0x4020000000000000,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_112731534;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bba930; end: 105bba9cb; -[SCFriendsFeedClearButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba930(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  dVar2 = 0.0;
  _CGRectIntegral(0,0,0x403e000000000000,0x403e000000000000);
  lVar1 = (long)_DAT_112731534;
  func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar3 = dVar2 * 0.5;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 105bba9cc; end: 105bbaa43; -[SCFriendsFeedClearButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bba9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ec1d8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731534));
  _objc_release(param_3);
  return;
}



/* Entry: 105bbaa44; end: 105bbaa57; -[SCFriendsFeedClearButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbaa44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731534,0);
  return;
}



/* Entry: 105bbaa58; end: 105bbaedf; -[SCFriendsFeedComponentView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bbaa58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec1e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731538);
    *(undefined **)((long)puVar1 + (long)_DAT_112731538) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273153c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273153c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731540);
    *(undefined **)((long)puVar1 + (long)_DAT_112731540) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731544);
    *(undefined **)((long)puVar1 + (long)_DAT_112731544) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731548);
    *(undefined **)((long)puVar1 + (long)_DAT_112731548) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273154c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273154c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731550);
    *(undefined **)((long)puVar1 + (long)_DAT_112731550) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731554);
    *(undefined **)((long)puVar1 + (long)_DAT_112731554) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731558);
    *(undefined **)((long)puVar1 + (long)_DAT_112731558) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273155c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273155c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731560);
    *(undefined **)((long)puVar1 + (long)_DAT_112731560) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731564);
    *(undefined **)((long)puVar1 + (long)_DAT_112731564) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731568);
    *(undefined **)((long)puVar1 + (long)_DAT_112731568) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273156c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273156c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731570);
    *(undefined **)((long)puVar1 + (long)_DAT_112731570) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731574);
    *(undefined **)((long)puVar1 + (long)_DAT_112731574) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731578);
    *(undefined **)((long)puVar1 + (long)_DAT_112731578) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273157c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273157c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731580);
    *(undefined **)((long)puVar1 + (long)_DAT_112731580) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731584);
    *(undefined **)((long)puVar1 + (long)_DAT_112731584) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731588);
    *(undefined **)((long)puVar1 + (long)_DAT_112731588) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273158c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273158c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731590);
    *(undefined **)((long)puVar1 + (long)_DAT_112731590) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731594);
    *(undefined **)((long)puVar1 + (long)_DAT_112731594) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bbaee0; end: 105bbaf6b;  */

void FUN_105bbaee0(void)

{
  _objc_opt_new(PTR_PTR_1126c2968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bbaf6c; end: 105bbafd7;  */

void FUN_105bbaf6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110e20938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bbafd8; end: 105bbb1cf;  */

void FUN_105bbafd8(void)

{
  _objc_opt_new(PTR_PTR_1126c2970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bbb1d0; end: 105bbb207; -[SCFriendsFeedComponentView setSimpleSnapchatExperimentConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbb1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731598);
  *(undefined8 *)(param_1 + _DAT_112731598) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbb208; end: 105bbb26b; -[SCFriendsFeedComponentView setDoubleTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbb208(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273159c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010bee12e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bbb26c; end: 105bbb32b; -[SCFriendsFeedComponentView _isAnimatingPeekAPeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105bbb26c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127315a0);
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2dd8;
  _objc_opt_class(PTR_PTR_1126c2dd8);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar3 = uVar4;
  func_0x00010c0f6f20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c0720c0(uVar4);
  _objc_release(uVar4);
  return uVar3;
}



/* Entry: 105bbb32c; end: 105bbb353; -[SCFriendsFeedComponentView _widthAdjustmentForPeekAPeekAnimation] */

undefined8 FUN_105bbb32c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be3e0c0();
  uVar1 = 0x4044000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105bbb354; end: 105bbb477; -[SCFriendsFeedComponentView _maxWidthOfLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105bbb354(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127315a4);
  func_0x00010c1409a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5dde0(param_2,param_3,uVar2);
  dVar5 = param_1;
  _objc_release(uVar2);
  lVar3 = param_2;
  func_0x00010be43540();
  if ((int)lVar3 == 0) {
    dVar5 = -2.0;
    param_1 = param_1 + -2.0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11273155c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    _objc_release(uVar2);
    dVar5 = (param_1 - dVar5) + -12.0;
    param_1 = dVar5 + -5.0;
  }
  lVar3 = param_2;
  func_0x00010be44560();
  puVar1 = PTR_PTR_1126c2e50;
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_11273157c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3220(puVar1,param_3,uVar2);
    param_1 = param_1 - dVar5;
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  func_0x00010beeae00(param_2);
  return param_1 - dVar5;
}



/* Entry: 105bbb478; end: 105bbb6cf; -[SCFriendsFeedComponentView _maxWidthOfLabelWithRightButtonViewModel:] */

undefined8 FUN_105bbb478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uVar1 = 0x2020000000;
  uStack_50 = 0x2020000000;
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  uStack_48 = uVar1;
  func_0x00010c0bf920(param_3);
  uVar1 = puStack_58[3];
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105bbb6d0; end: 105bbb72f;  */

void FUN_105bbb6d0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  dVar1 = 63.0;
  if (param_4 != 1) {
    dVar1 = 0.0;
  }
  dVar2 = 94.0;
  if (param_4 != 2) {
    dVar2 = dVar1;
  }
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1 - dVar2;
  return;
}



/* Entry: 105bbb730; end: 105bbb7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbb730(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar2 = param_1 + 15.0;
  _objc_release(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1 - dVar2;
  return;
}



/* Entry: 105bbb7a4; end: 105bbb9fb;  */

void FUN_105bbb7a4(double param_1,long param_2)

{
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1 + -33.0 + -30.0;
  return;
}



/* Entry: 105bbb9fc; end: 105bbba6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbb9fc(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112731578);
  dVar2 = param_1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = (param_1 - dVar2) + -23.0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbba70; end: 105bbbab7;  */

void FUN_105bbba70(double param_1,long param_2)

{
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1 + -33.0 + -30.0;
  return;
}



/* Entry: 105bbbab8; end: 105bbbbf3; -[SCFriendsFeedComponentView setMessagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbbab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127315a8;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105bbbbf4;
  puStack_70 = &UNK_1108429c8;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127315ac);
  *(undefined **)(param_1 + _DAT_1127315ac) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae720;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105bbbc50;
  puStack_98 = &UNK_1108429c8;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127315b0);
  *(undefined **)(param_1 + _DAT_1127315b0) = puVar3;
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105bbbbf4; end: 105bbbcab;  */

void FUN_105bbbbf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb9ea0();
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bbbcac; end: 105bbbceb; -[SCFriendsFeedComponentView _avatarSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105bbbcac(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bf33e20(*(undefined8 *)(param_2 + _DAT_1127315a4));
  param_1 = param_1 + -15.0;
  dVar1 = 45.0;
  if (param_1 <= 45.0) {
    dVar1 = param_1;
  }
  if (param_1 <= 0.0) {
    dVar1 = 45.0;
  }
  return dVar1;
}



/* Entry: 105bbbcec; end: 105bbbd3b; -[SCFriendsFeedComponentView _avatarPreferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbbcec(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127315a4);
  func_0x00010c07f600();
  if ((uVar1 & 1) == 0) {
    func_0x00010bdd1e60(param_1);
  }
  return;
}



/* Entry: 105bbbd3c; end: 105bbd687; -[SCFriendsFeedComponentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbbd3c(double param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dStack_2e8;
  double dStack_2b8;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  
  puStack_b0 = PTR_PTR_1126ec1e0;
  uStack_b8 = param_2;
  _objc_msgSendSuper2(&uStack_b8,PTR_s_layoutSubviews_112600e60);
  lVar15 = (long)_DAT_1127315a8;
  uVar1 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf90a20();
  _objc_release(uVar1);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar16 = 0.0;
  uVar20 = 0;
  dVar25 = 0.5;
  _CGRectIntegral(0,0);
  lVar10 = (long)_DAT_112731594;
  uVar1 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar16,uVar20);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar26 = dVar16 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar16 = dVar16 + -0.25;
  func_0x00010b8165a4(dVar26,dVar16);
  uVar1 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar26,dVar16);
  _objc_release(uVar1);
  func_0x00010be5ddc0(param_2);
  lVar10 = (long)_DAT_1127315a4;
  uVar2 = *(ulong *)(param_2 + lVar10);
  func_0x00010bf0e4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112731548;
  uVar4 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0720c0();
  if ((uVar6 & 1) == 0) {
    uVar6 = param_2;
    func_0x00010be445a0();
    _objc_release(uVar20);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) goto LAB_105bbbfa0;
    uVar2 = *(ulong *)(param_2 + lVar10);
    func_0x00010bf0e4c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
  }
  else {
    _objc_release(uVar20);
    _objc_release(uVar1);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105bbbfa0:
  uVar1 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_2);
  func_0x00010c23d5a0(uVar1);
  _objc_release(uVar1);
  dVar17 = dVar25 + 6.0 + 12.0 + -10.5 + 8.0;
  dVar21 = 0.0;
  dVar16 = dVar17;
  if ((int)uVar5 == 0) {
    dVar16 = 0.0;
  }
  func_0x00010bdd1e60(param_2);
  dVar18 = dVar17;
  func_0x00010bdd1e20(param_2);
  dVar23 = dVar17 / 45.0;
  dVar27 = dVar21 + 15.0;
  dVar30 = dVar18 + 21.0;
  dVar18 = (dVar17 - dVar18) * 0.5;
  dVar28 = dVar16 + dVar18;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar24 = (double)((float)(int)((dVar18 - dVar27) * 0.5) + -1.0);
  dVar19 = dVar30 * 0.5 + dVar28;
  dVar22 = dVar27 * 0.5 + dVar24;
  func_0x00010b8165a4(dVar19,dVar22);
  uVar1 = 0;
  uVar20 = 0;
  dVar29 = dVar30;
  _CGRectIntegral(0,0,dVar30,dVar27);
  lVar11 = (long)_DAT_112731540;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar1,uVar20,dVar29,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar19,dVar22);
  _objc_release(uVar5);
  lVar13 = (long)_DAT_11273153c;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar1,uVar20,dVar29,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar19,dVar22);
  _objc_release(uVar5);
  lVar13 = (long)_DAT_1127315b4;
  func_0x00010c1739e0(uVar1,uVar20,dVar29,dVar27,*(undefined8 *)(param_2 + lVar13));
  func_0x00010c17a6a0(dVar19,dVar22,*(undefined8 *)(param_2 + lVar13));
  dVar27 = 0.0;
  uVar5 = 0;
  uVar1 = 0x4038000000000000;
  uVar20 = 0x4038000000000000;
  _CGRectIntegral(0,0,0x4038000000000000,0x4038000000000000);
  uVar6 = *(ulong *)(param_2 + lVar15);
  dVar18 = dVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf90a20();
  if ((uVar3 & 1) == 0) {
    dVar18 = dVar19 + dVar29 * -0.5 + -12.0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar18 = (dVar18 + 10.5) * 0.5 + -40.0;
    _objc_release(uVar4);
  }
  _objc_release(uVar6);
  func_0x00010b8165a4(dVar18,dVar22);
  lVar15 = (long)_DAT_112731538;
  uVar4 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar27,uVar5,uVar1,uVar20);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar18,dVar22);
  _objc_release(uVar5);
  dVar18 = dVar23 * 20.0;
  dVar29 = dVar17 + dVar24 + 7.5;
  lVar13 = *(long *)(param_2 + lVar10);
  func_0x00010bfb9d20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010c141300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (lVar15 != 0) {
    dVar27 = dVar21;
    func_0x00010c067620(PTR_PTR_1126c2eb0);
    dVar29 = dVar29 + (dVar21 - dVar17) + dVar27;
  }
  uVar1 = 0;
  uVar20 = 0;
  dVar27 = dVar18;
  dVar22 = dVar18;
  _CGRectIntegral(0,0,dVar18,dVar18);
  lVar13 = (long)_DAT_112731560;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar1,uVar20,dVar27,dVar22);
  _objc_release(uVar5);
  dVar27 = dVar18 * 0.5 + ((dVar16 + 10.5) - dVar23 * 3.0);
  dVar18 = dVar18 * 0.5 + dVar23 * 3.0 + (dVar29 - dVar18);
  func_0x00010b8165a4(dVar27,dVar18);
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar27,dVar18);
  _objc_release(uVar5);
  dVar29 = dVar23 * 16.0;
  dVar21 = dVar21 + dVar24 + 7.5;
  uVar1 = 0;
  uVar20 = 0;
  dVar18 = dVar29;
  _CGRectIntegral(0,0,dVar29,dVar29);
  lVar13 = (long)_DAT_112731564;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar1,uVar20,dVar29,dVar18);
  _objc_release(uVar5);
  func_0x00010b8165a4(dVar19,dVar21);
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar19,dVar21);
  _objc_release(uVar5);
  dVar29 = dVar23 * 26.0;
  dVar19 = dVar23 * 24.0;
  uVar1 = 0;
  uVar20 = 0;
  dVar21 = dVar29;
  dVar18 = dVar19;
  _CGRectIntegral(0,0,dVar29,dVar19);
  lVar13 = (long)_DAT_112731584;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar1,uVar20,dVar21,dVar18);
  _objc_release(uVar5);
  dVar27 = 0.5;
  dVar21 = dVar29 * 0.5 + ((dVar30 + dVar28) - dVar29) + -6.0;
  dVar18 = dVar19 * 0.5 + dVar24 + 3.0;
  func_0x00010b8165a4(dVar21,dVar18);
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar21,dVar18);
  _objc_release(uVar5);
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  dVar29 = dVar17 + dVar16 + 21.0;
  uStack_c8 = 0x2020000000;
  dStack_c0 = dVar29;
  func_0x00010bf20c00(param_2);
  dVar19 = dVar23 * 33.0 + 30.0;
  dVar18 = 0.0;
  uVar20 = 0;
  dVar17 = dVar19;
  _CGRectIntegral(0,0);
  dVar16 = dVar18;
  dVar21 = dVar27;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010bf20c00(param_2);
  dVar16 = dVar16 - dVar19 * 0.5;
  dVar21 = dVar21 * 0.5;
  func_0x00010b8165a4();
  lVar13 = (long)_DAT_112731570;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25800();
  func_0x00010be48e80(dVar18,uVar20,dVar17,dVar27,dVar16,dVar21,param_2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar13 = (long)_DAT_112731574;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25800();
  func_0x00010be48e80(dVar18,uVar20,dVar17,dVar27,dVar16,dVar21,param_2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar13 = (long)_DAT_112731578;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48e60(param_2);
  _objc_release(uVar5);
  lVar11 = (long)_DAT_11273156c;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar21);
  _objc_release(uVar5);
  lVar11 = (long)_DAT_112731580;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar21);
  _objc_release(uVar5);
  lVar11 = (long)_DAT_1127315b8;
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27,*(undefined8 *)(param_2 + lVar11));
  func_0x00010c17a6a0(dVar16,dVar21,*(undefined8 *)(param_2 + lVar11));
  lVar11 = (long)_DAT_1127315bc;
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27,*(undefined8 *)(param_2 + lVar11));
  func_0x00010c17a6a0(dVar16,dVar21,*(undefined8 *)(param_2 + lVar11));
  lVar11 = (long)_DAT_1127315c0;
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27,*(undefined8 *)(param_2 + lVar11));
  func_0x00010c17a6a0(dVar16,dVar21,*(undefined8 *)(param_2 + lVar11));
  lVar11 = (long)_DAT_112731588;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar21);
  _objc_release(uVar5);
  lVar11 = (long)_DAT_11273158c;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar21);
  _objc_release(uVar5);
  lVar11 = (long)_DAT_112731590;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfe6360(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar18,uVar20,dVar17,dVar27);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010bfe6360(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0();
  _objc_release(uVar5);
  uVar3 = param_2;
  func_0x00010be44560();
  if ((int)uVar3 != 0) {
    lVar11 = (long)_DAT_11273157c;
    uVar5 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    _objc_release(uVar5);
    dVar27 = 0.0;
    uVar1 = 0;
    dVar18 = dVar16;
    _CGRectIntegral(0,0,dVar16);
    uVar5 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(dVar27,uVar1,dVar18);
    _objc_release(uVar5);
    uVar3 = param_2;
    func_0x00010be44f00();
    if ((int)uVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + lVar13);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0();
      dVar17 = dVar27 + 23.0;
      _objc_release(uVar5);
    }
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    func_0x00010bf20c00(param_2);
    dVar16 = (dVar27 - dVar17) - dVar16 * 0.5;
    dVar21 = dVar21 * 0.5;
    func_0x00010b8165a4();
    uVar5 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0();
    _objc_release(uVar5);
  }
  lVar13 = (long)_DAT_112731568;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar17 = dVar16;
  _objc_release(uVar5);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar19 = 0.0;
  uVar1 = 0;
  dVar18 = dVar16;
  dVar27 = dVar21;
  _CGRectIntegral(0,0,dVar16,dVar21);
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar19,uVar1,dVar18,dVar27);
  _objc_release(uVar5);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar18 = dVar16 * 0.5 + (dVar19 - (dVar16 + 15.0));
  dVar27 = dVar21 * 0.5 + (double)(float)(int)((dVar17 - dVar21) * 0.5);
  func_0x00010b8165a4();
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0();
  _objc_release(uVar5);
  lVar11 = (long)_DAT_11273155c;
  uVar5 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar16 = dVar18;
  dVar21 = dVar27;
  _objc_release(uVar5);
  lVar13 = (long)_DAT_112731554;
  uVar5 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar17 = dVar16;
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c294960();
  dVar22 = *(double *)PTR__CGSizeZero_110347620;
  dVar19 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dStack_2e8 = dVar19;
  dStack_2b8 = dVar22;
  if ((int)uVar5 == 0) {
    _objc_release(uVar1);
    lVar7 = 0;
    dVar23 = dVar17;
  }
  else {
    lVar7 = *(long *)(param_2 + lVar10);
    func_0x00010c25c180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    dVar23 = dVar17;
    if (lVar7 != 0) {
      func_0x00010c0c3220(PTR_PTR_1126c2e50);
      dVar23 = dVar17;
      func_0x00010bfe08a0(PTR_PTR_1126c2e50);
      dStack_2e8 = dVar23;
      dStack_2b8 = dVar17;
    }
  }
  func_0x00010beeae00(param_2);
  puVar9 = PTR_PTR_1126c2e00;
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  dVar17 = dVar23;
  func_0x00010bf86020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0992a0(puVar9);
  dVar24 = dVar17;
  _objc_release(uVar5);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  uVar20 = *(undefined8 *)(param_2 + (long)_DAT_112731544);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  dVar28 = (double)(float)(int)(dVar26 - dVar29);
  _CGRectIntegral(0,0,dVar28,dVar17);
  func_0x00010c1739e0(uVar20);
  dVar29 = dVar29 + dVar28 * 0.5;
  func_0x00010c17a6a0(dVar29,dVar17 * 0.5 +
                             (double)(float)(int)(((dVar24 - (dVar25 + dVar17)) + -2.0) * 0.5),
                      uVar20);
  func_0x00010bfb68e0(uVar20);
  _CGRectGetMaxY();
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010bfa3ca0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar20);
  _objc_retain(uVar20);
  _objc_retain(uVar20);
  func_0x00010c0be3e0(uVar5);
  _objc_release(uVar5);
  lVar12 = (long)_DAT_11273154c;
  uVar4 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 1.79769313486232e+308;
  dVar24 = 1.79769313486232e+308;
  func_0x00010c14dd00(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar3 = param_2;
  func_0x00010be445c0();
  if ((int)uVar3 == 0) {
    if ((dStack_2b8 != dVar22) || (dVar30 = dVar26, dStack_2e8 != dVar19)) {
      dVar30 = (dVar26 - dStack_2b8) + -6.0;
    }
  }
  else {
    dVar30 = (((dVar26 - dVar17) + -6.0) - dVar16) + -6.0;
    if ((dStack_2b8 != dVar22) || (dStack_2e8 != dVar19)) {
      dVar30 = (dVar30 - dStack_2b8) + -6.0;
    }
  }
  dVar22 = (dVar30 - (double)puStack_d0[3]) + -2.0;
  dVar19 = param_1;
  if (dVar22 <= param_1) {
    dVar19 = dVar22;
  }
  uVar1 = 0;
  uVar4 = 0;
  dVar22 = dVar19;
  dVar30 = dVar25;
  _CGRectIntegral(0,0,dVar19,dVar25);
  uVar5 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar1,uVar4,dVar22,dVar30);
  _objc_release(uVar5);
  dVar19 = dVar19 * 0.5 + (double)puStack_d0[3];
  dVar29 = dVar25 * 0.5 + (double)(float)(int)(dVar29 + 2.0);
  func_0x00010b8165a4(dVar19,dVar29);
  uVar5 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar19,dVar29);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c27cb60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd9a0();
  uVar1 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar4 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  _objc_release(uVar1);
  uVar4 = 0;
  uVar8 = 0;
  dVar29 = dVar17;
  dVar19 = dVar24;
  _CGRectIntegral(0,0,dVar17,dVar24);
  uVar1 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar4,uVar8,dVar29,dVar19);
  dVar19 = param_1 + dVar28 * 0.5 + 6.0;
  _objc_release(uVar1);
  dVar29 = dVar17 * 0.5 + dVar19;
  dVar25 = dVar24 * 0.5 + (dVar25 - dVar24 * 0.5);
  func_0x00010b8165a4(dVar29,dVar25);
  uVar1 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar29,dVar25);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  uVar4 = 0;
  uVar8 = 0;
  dVar25 = dVar18;
  dVar17 = dVar27;
  _CGRectIntegral(0,0,dVar18,dVar27);
  uVar1 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar4,uVar8,dVar25,dVar17);
  _objc_release(uVar1);
  dVar18 = dVar18 * 0.5 + dVar26 + 5.0 + dVar23;
  dVar29 = dVar27 * 0.5 + (double)(float)(int)((dVar29 - dVar27) * 0.5);
  func_0x00010b8165a4();
  uVar1 = *(undefined8 *)(param_2 + lVar11);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar18,dVar29);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar4 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  _objc_release(uVar1);
  uVar4 = 0;
  uVar8 = 0;
  dVar26 = dVar16;
  dVar17 = dVar21;
  _CGRectIntegral(0,0,dVar16,dVar21);
  uVar1 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar4,uVar8,dVar26,dVar17);
  dVar17 = dVar18 + dVar25 * 0.5 + 6.0;
  _objc_release(uVar1);
  dVar26 = dVar16 * 0.5 + dVar17;
  dVar25 = dVar21 * 0.5 + (dVar29 - dVar21 * 0.5);
  func_0x00010b8165a4();
  uVar1 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar26,dVar25);
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010be445e0();
  if ((int)uVar3 != 0) {
    uVar3 = param_2;
    func_0x00010be445c0();
    dVar16 = dVar16 + dVar17 + 6.0;
    if ((int)uVar3 == 0) {
      dVar16 = dVar19;
    }
    uVar4 = 0;
    uVar8 = 0;
    dVar26 = dStack_2b8;
    _CGRectIntegral(0,0,dStack_2b8,dStack_2e8);
    lVar10 = (long)_DAT_112731558;
    uVar1 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(uVar4,uVar8,dVar26,dStack_2e8);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + lVar14);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    dVar16 = dStack_2b8 * 0.5 + dVar16;
    func_0x00010b8165a4(dVar16);
    uVar4 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar16,uVar8);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  puVar9 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00();
  if (puVar9 == (undefined *)0x1) {
    func_0x00010be97c40(param_2);
  }
  _objc_release(uVar5);
  _objc_release(uVar20);
  _objc_release(uVar20);
  _objc_release(uVar20);
  _objc_release(uVar20);
  _objc_release(lVar7);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(lVar15);
  return;
}



/* Entry: 105bbd688; end: 105bbd80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbd688(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)(param_1 + 0x40) + 6.0;
  uVar3 = 0;
  uVar5 = 0;
  dVar7 = dVar6;
  dVar8 = dVar6;
  _CGRectIntegral(0,0,dVar6,dVar6);
  lVar2 = (long)_DAT_112731550;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar3,uVar5,dVar7,dVar8);
  _objc_release(uVar1);
  dVar6 = dVar6 * 0.5;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    dVar4 = 12.0;
    dVar7 = dVar6 + 12.0;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
    dVar8 = dVar8 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    dVar7 = dVar6 + *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) + -5.0;
    dVar8 = dVar6 + *(double *)(param_1 + 0x48) + -3.0;
    if (param_2 == 0) goto LAB_105bbd7c8;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c074f60();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) goto LAB_105bbd7c8;
    dVar4 = dVar6 + dVar7 + 2.0;
  }
  *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = dVar4;
LAB_105bbd7c8:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar7,dVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbd810; end: 105bbd9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbd810(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = uVar8;
  _CGRectIntegral(0,0,uVar8,uVar8);
  lVar3 = (long)_DAT_112731550;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar4,uVar6,uVar8,uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127315a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90a20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
    return;
  }
  dVar9 = *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x40) * 0.5;
  dVar5 = *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) + -1.0 + dVar7;
  dVar7 = dVar9 + dVar7;
  func_0x00010b8165a4(dVar5,dVar7);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar5,dVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = dVar5 + dVar9 * 0.5 + 5.0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bbd9c8; end: 105bbdb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbd9c8(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = *(double *)(param_1 + 0x40) + 6.0;
  dVar6 = dVar8;
  if (param_4 == 0) {
    dVar6 = *(double *)(param_1 + 0x40);
  }
  uVar3 = 0;
  uVar5 = 0;
  dVar7 = dVar6;
  _CGRectIntegral(0,0,dVar6,dVar6);
  lVar2 = (long)_DAT_112731550;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar3,uVar5,dVar6,dVar7);
  _objc_release(uVar1);
  dVar8 = dVar8 * 0.5;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    dVar4 = 12.0;
    dVar6 = dVar8 + 12.0;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
    dVar7 = dVar7 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    dVar6 = dVar8 + *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) + -5.0;
    dVar7 = *(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x40) * 0.5;
    if (param_2 == 0) goto LAB_105bbdb08;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c074f60();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) goto LAB_105bbdb08;
    dVar4 = dVar8 + dVar6 + 2.0;
  }
  *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = dVar4;
LAB_105bbdb08:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar6,dVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbdb50; end: 105bbdc93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbdb50(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar5 = (long)_DAT_112731548;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf4bb00();
    if ((int)uVar2 != 0) {
      dVar6 = *(double *)(param_1 + 0x30);
      dVar7 = *(double *)(param_1 + 0x40);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if (dVar6 <= dVar7) goto LAB_105bbdc78;
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010bf0e2c0(*(undefined8 *)(param_1 + 0x40),uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
LAB_105bbdc78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bbdc94; end: 105bbddbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbdc94(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar5 = param_2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112731548;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      dVar7 = *(double *)(param_1 + 0x30);
      dVar8 = *(double *)(param_1 + 0x40);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar5);
      if (dVar7 <= dVar8) goto LAB_105bbdd9c;
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar6);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    _objc_release(uVar5);
  }
LAB_105bbdd9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bbddbc; end: 105bbde67; -[SCFriendsFeedComponentView _layoutButton:] */

void FUN_105bbddbc(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  double dVar2;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010c0699c0(param_4);
    dVar2 = param_1 + 23.0;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    dVar1 = 0.0;
    _CGRectIntegral(0,0,dVar2,param_1);
    func_0x00010c1739e0(param_4);
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar2 = dVar1 - dVar2 * 0.5;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    func_0x00010b8165a4(dVar2,dVar1 * 0.5);
    func_0x00010c17a6a0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 105bbde68; end: 105bbdf67; -[SCFriendsFeedComponentView _layoutButton:buttonMode:bounds:center:] */

void FUN_105bbde68(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  ulong param_10)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_9);
  if (param_9 != 0) {
    if (param_10 < 2) {
      func_0x00010c1739e0(param_1,param_2,param_3,param_4,param_9);
    }
    else {
      if (param_10 != 2) goto LAB_105bbdf48;
      func_0x00010bf20c00(param_7);
      _CGRectGetHeight();
      param_5 = 0.0;
      _CGRectIntegral(0,0,0x4057800000000000,dVar1);
      func_0x00010c1739e0(param_9);
      func_0x00010bf20c00(param_7);
      _CGRectGetWidth();
      param_5 = param_5 + -47.0;
      param_6 = dVar1 * 0.5;
      func_0x00010b8165a4(param_5,param_6);
    }
    func_0x00010c17a6a0(param_5,param_6,param_9);
  }
LAB_105bbdf48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 105bbdf68; end: 105bbe84b; -[SCFriendsFeedComponentView _rtlSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbdf68(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112731538;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11273153c;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127315b4;
  func_0x00010b81694c(*(undefined8 *)(param_3 + lVar4),param_3);
  func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar4));
  lVar4 = (long)_DAT_112731540;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731544;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731548;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11273154c;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731594;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11273155c;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731554;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731558;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731550;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731568;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11273156c;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731570;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731574;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731584;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731580;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127315b8;
  func_0x00010b81694c(*(undefined8 *)(param_3 + lVar4),param_3);
  func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar4));
  lVar4 = (long)_DAT_1127315bc;
  func_0x00010b81694c(*(undefined8 *)(param_3 + lVar4),param_3);
  func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar4));
  lVar4 = (long)_DAT_1127315c0;
  func_0x00010b81694c(*(undefined8 *)(param_3 + lVar4),param_3);
  func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar4));
  lVar4 = (long)_DAT_112731560;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731588;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731564;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11273158c;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112731590;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar4);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b81694c();
    uVar3 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(param_1,param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar4 = (long)_DAT_112731578;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11273157c;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b81694c();
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bbe84c; end: 105bbeb73; -[SCFriendsFeedComponentView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbe84c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1a8880(param_1,param_2,0,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315a4);
  *(undefined8 *)(param_1 + _DAT_1127315a4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315c4);
  *(undefined8 *)(param_1 + _DAT_1127315c4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315a0);
  *(undefined8 *)(param_1 + _DAT_1127315a0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731540);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731584);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731550);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273154c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273157c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731538);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112731564;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbeb74; end: 105bbeb83; -[SCFriendsFeedComponentView feedIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbeb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731550),PTR_s_target_112678178);
  return;
}



/* Entry: 105bbeb84; end: 105bbec0f; -[SCFriendsFeedComponentView operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbeb84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273153c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127315b4);
    if (lVar1 != 0) {
      _objc_retain(lVar1);
      goto LAB_105bbebec;
    }
    lVar1 = *(long *)(param_1 + _DAT_112731540);
  }
  else {
    lVar1 = *(long *)(param_1 + lVar2);
  }
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_105bbebec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105bbec10; end: 105bbec47; -[SCFriendsFeedComponentView setUberAvatarScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbec10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315c8);
  *(undefined8 *)(param_1 + _DAT_1127315c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbec48; end: 105bbec7f; -[SCFriendsFeedComponentView setUberAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbec48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315cc);
  *(undefined8 *)(param_1 + _DAT_1127315cc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbec80; end: 105bbed1f; -[SCFriendsFeedComponentView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbec80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127315d0);
  *(undefined8 *)(param_1 + _DAT_1127315d0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731540);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1aa200(uVar1,param_2,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bbed20; end: 105bbed9f; -[SCFriendsFeedComponentView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbed20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315d4);
  *(undefined8 *)(param_1 + _DAT_1127315d4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731564);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbeda0; end: 105bbee47; -[SCFriendsFeedComponentView setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbeda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127315d8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731540);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2284c0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bbee48; end: 105bbf01f; -[SCFriendsFeedComponentView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbee48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127315a4;
  uVar4 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105bbf008;
    }
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010bf33f20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731584);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aac0();
      _objc_release(uVar3);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    lVar6 = (long)_DAT_1127315c4;
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
    _objc_release(uVar3);
    func_0x00010bed4380(param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c1409a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedeac0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010bee11a0(param_1);
    func_0x00010bed8960(param_1);
    func_0x00010bed38e0(param_1);
    func_0x00010bdcb2c0(param_1);
    func_0x00010bed3840(param_1);
    func_0x00010bed3860(param_1);
    func_0x00010bee12c0(param_1);
    func_0x00010bedb120(param_1);
    func_0x00010bedc5e0(param_1);
    func_0x00010be25a40(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_105bbf008:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bbf020; end: 105bbf18b; -[SCFriendsFeedComponentView setBackgroundAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbf020(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xa8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c16e440(param_2,param_3,puVar3);
  bVar1 = false;
  if ((0.0 < param_1) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 < 1.0;
  }
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar2 = puVar3;
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_112731540);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11273153c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar4);
  func_0x00010c16e440(*(undefined8 *)(param_2 + _DAT_1127315b4),param_3,puVar2);
  uVar4 = *(undefined8 *)(param_2 + _DAT_1127315dc);
  puVar5 = PTR_PTR_1126c2eb8;
  _objc_alloc(PTR_PTR_1126c2eb8);
  func_0x00010bff6400(0x401e000000000000,0x4025000000000000,0x401c000000000000,0x4025000000000000);
  func_0x00010c0d9840(uVar4,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105bbf18c; end: 105bbf193; -[SCFriendsFeedComponentView setHighlighted:animated:] */

void FUN_105bbf18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a88b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setHighlighted_animated_delayed__112647c48,param_3,param_4,1);
  return;
}



/* Entry: 105bbf194; end: 105bbf543; -[SCFriendsFeedComponentView setHighlighted:animated:delayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbf194(ulong param_1,undefined8 param_2,uint param_3,int param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar7;
  _objc_retainAutorelease(puVar7);
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(uVar2,puVar3);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105bbf544;
    puStack_78 = &UNK_110841f80;
    uStack_70 = param_1;
    _objc_retain(puVar7);
    puStack_68 = puVar7;
    _objc_retainBlock();
    if (param_4 == 0) {
      uVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b200();
      _objc_release(uVar1);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112731540);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b200();
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11273153c);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b200();
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127315b4);
      func_0x00010c08c0e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b200();
      _objc_release(uVar8);
      (**(code **)((long)ppuVar4 + 0x10))(ppuVar4);
    }
    else {
      uVar8 = 0x3fb999999999999a;
      if ((param_5 & (param_3 ^ 1)) == 0) {
        uVar8 = 0;
      }
      (**(code **)((long)ppuVar4 + 0x10))(ppuVar4);
      puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c279540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c13afc0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c216920(puVar3);
      _objc_release(puVar5);
      _objc_release(uVar1);
      func_0x00010c16fd40(uVar8,puVar3);
      func_0x00010c192d40(0x3fd0000000000000,puVar3);
      uVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar1);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112731540);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11273153c);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127315b4);
      func_0x00010c08c0e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar8);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar4);
    _objc_release(puStack_68);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 105bbf544; end: 105bbf623;  */

/* WARNING: Possible PIC construction at 0x000105bbf580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105bbf5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105bbf5c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105bbf5b0) */
/* WARNING: Removing unreachable block (ram,0x000105bbf584) */
/* WARNING: Removing unreachable block (ram,0x000105bbf5c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbf544(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731540));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105bbf624; end: 105bbf6af; -[SCFriendsFeedComponentView _updateBottomBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbf624(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112731594;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bbf6b0; end: 105bbfd73; -[SCFriendsFeedComponentView _updateAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbf6b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdd1e20();
  lVar12 = (long)_DAT_1127315a4;
  lVar3 = *(long *)(param_3 + lVar12);
  func_0x00010bfb9d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_3 + lVar12);
  func_0x00010bfb9d00();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_3 + lVar12);
  func_0x00010c07f600();
  lVar15 = (long)_DAT_1127315c4;
  lVar12 = *(long *)(param_3 + lVar15);
  func_0x00010bfb9d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  _objc_retain(lVar12);
  if (lVar4 == lVar12) {
    _objc_release(lVar12);
    _objc_release(lVar4);
LAB_105bbf7a8:
    lVar13 = *(long *)(param_3 + lVar15);
    func_0x00010bfb9d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(lVar13);
    if (lVar3 != lVar13) {
      if (lVar13 == 0) {
        _objc_release();
      }
      else {
        lVar5 = lVar3;
        param_5 = lVar13;
        func_0x00010c071ae0();
        _objc_release(lVar13);
        _objc_release(lVar3);
        if ((int)lVar5 != 0) goto LAB_105bbf810;
      }
LAB_105bbf888:
      _objc_release(lVar13);
      goto LAB_105bbf890;
    }
    _objc_release(lVar13);
    _objc_release(lVar3);
LAB_105bbf810:
    iVar2 = (int)*(undefined8 *)(param_3 + lVar15);
    func_0x00010c07f600();
    _objc_release(lVar13);
    _objc_release(lVar12);
    if (iVar1 == iVar2) goto LAB_105bbfaf4;
  }
  else {
    lVar13 = lVar4;
    if (lVar12 == 0) goto LAB_105bbf888;
    param_5 = lVar12;
    func_0x00010c071ae0();
    _objc_release(lVar12);
    _objc_release(lVar4);
    if ((int)lVar13 != 0) goto LAB_105bbf7a8;
LAB_105bbf890:
    _objc_release(lVar12);
  }
  if (lVar4 == 0) {
    lVar15 = (long)_DAT_112731540;
    lVar12 = *(long *)(param_3 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      param_5 = 1;
      func_0x00010c1a7f60();
    }
    else {
      _objc_release();
      if (lVar12 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_3 + lVar15));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_3 + _DAT_1127315d8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2284c0(uVar6,param_4,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_3 + _DAT_1127315d0);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa200();
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d5da0();
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_3 + lVar15);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + _DAT_112731594);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fe0(param_3,param_4,uVar6,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
      uVar6 = 0x4020000000000000;
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      uVar7 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar6);
      _objc_release(uVar7);
      uVar6 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0040(param_1,param_2);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181e40(0x401e000000000000,0x4025000000000000,0x401c000000000000,
                          0x4025000000000000);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      lVar12 = lVar3;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_5 = lVar12;
      func_0x00010c2226c0();
      _objc_release(uVar6);
    }
    _objc_release(lVar12);
    goto LAB_105bbfaf4;
  }
  lVar15 = (long)_DAT_11273153c;
  lVar12 = *(long *)(param_3 + lVar15);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
    if (*(long *)(param_3 + _DAT_1127315b4) == 0) {
      puVar8 = PTR_PTR_1126c2ec0;
      _objc_alloc();
      puVar9 = PTR_PTR_1126b19f8;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_90,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004820(puVar8,param_4,puVar10,8,1);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c2ec8;
      _objc_alloc();
      func_0x00010c0383e0(param_1,param_2);
      puVar10 = PTR_PTR_1126ae820;
      _objc_opt_new();
      lVar12 = (long)_DAT_1127315e0;
      uVar6 = *(undefined8 *)(param_3 + lVar12);
      *(undefined **)(param_3 + lVar12) = puVar10;
      _objc_release(uVar6);
      puVar10 = PTR_PTR_1126ae820;
      _objc_opt_new();
      lVar13 = (long)_DAT_1127315dc;
      uVar6 = *(undefined8 *)(param_3 + lVar13);
      *(undefined **)(param_3 + lVar13) = puVar10;
      _objc_release(uVar6);
      func_0x00010bf57500(*(undefined8 *)(param_3 + lVar15));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + _DAT_112731594);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(param_3,param_4,uVar6,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + lVar13);
      puVar10 = PTR_PTR_1126c2eb8;
      _objc_alloc(PTR_PTR_1126c2eb8);
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6400(0x401e000000000000,0x4025000000000000,0x401c000000000000,
                          0x4025000000000000,puVar10,param_4,puVar11);
      func_0x00010c0d9840(uVar6,param_4,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar11);
      uVar7 = *(undefined8 *)(param_3 + _DAT_1127315c8);
      uVar14 = *(undefined8 *)(param_3 + lVar12);
      uVar16 = *(undefined8 *)(param_3 + lVar13);
      uVar6 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22ca0(uVar7,param_4,uVar14,uVar16,puVar8,puVar9,uVar6,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)_DAT_1127315e4;
      uVar14 = *(undefined8 *)(param_3 + lVar12);
      *(undefined8 *)(param_3 + lVar12) = uVar7;
      _objc_release(uVar14);
      _objc_release(uVar6);
      func_0x00010bf9d620(*(undefined8 *)(param_3 + _DAT_1127315cc),param_4,
                          *(undefined8 *)(param_3 + lVar12));
      _objc_release(puVar9);
      goto LAB_105bbf854;
    }
  }
  else {
LAB_105bbf854:
    _objc_release();
  }
  param_5 = lVar4;
  func_0x00010c0d9840(*(undefined8 *)(param_3 + _DAT_1127315e0));
LAB_105bbfaf4:
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(lVar3 + _DAT_1127315b4);
  *(long *)(lVar3 + _DAT_1127315b4) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(lVar3 + _DAT_112731594);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar3,param_4,param_5,uVar6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105bbfd74; end: 105bbfdfb; -[SCFriendsFeedComponentView _addAvatarContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbfd74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315b4);
  *(undefined8 *)(param_1 + _DAT_1127315b4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731594);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bbfdfc; end: 105bbfe5b; -[SCFriendsFeedComponentView _detachAvatarContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbfdfc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127315b4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bbfe5c; end: 105bc0043; -[SCFriendsFeedComponentView _animateTypingBubbleViewIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bbfe5c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127315a4);
  func_0x00010bf03de0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2dd8;
  _objc_opt_class(PTR_PTR_1126c2dd8);
  uVar3 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar3 = *(ulong *)(param_1 + _DAT_1127315c4);
  func_0x00010bf03de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c2dd8;
  _objc_opt_class(PTR_PTR_1126c2dd8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  if (uVar3 == uVar1) {
    _objc_release(uVar1);
    uVar8 = uVar3;
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
    }
    else {
      uVar4 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_105bc0024;
    }
    uVar8 = uVar1;
    func_0x00010c27e1e0();
    lVar9 = (long)_DAT_112731584;
    if (uVar8 != 0) {
      lVar6 = *(long *)(param_1 + lVar9);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar7);
      }
    }
    uVar8 = *(ulong *)(param_1 + lVar9);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf03480();
  }
  _objc_release(uVar8);
LAB_105bc0024:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc0044; end: 105bc035f; -[SCFriendsFeedComponentView _updateMainLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc0044(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = (long)_DAT_1127315c4;
  lVar3 = *(long *)(param_1 + lVar14);
  func_0x00010bf86020();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127315a4;
  lVar4 = *(long *)(param_1 + lVar15);
  func_0x00010bf86020();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  _objc_retain(lVar4);
  if (lVar3 == lVar4) {
    _objc_release(lVar4);
    _objc_release(lVar3);
LAB_105bc00ec:
    lVar5 = *(long *)(param_1 + lVar14);
    func_0x00010c0e1a60();
    lVar6 = *(long *)(param_1 + lVar15);
    func_0x00010c0e1a60();
    if (lVar5 == lVar6) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar14);
      func_0x00010c078420();
      iVar2 = (int)*(undefined8 *)(param_1 + lVar15);
      func_0x00010c078420();
      if (iVar1 == iVar2) {
        uVar7 = *(ulong *)(param_1 + lVar14);
        func_0x00010bf0e6c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + lVar15);
        func_0x00010bf0e6c0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c071b80(uVar7,param_2,uVar9);
        _objc_release(uVar9);
        _objc_release(uVar7);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if ((uVar8 & 1) != 0) {
          return;
        }
        goto LAB_105bc0198;
      }
    }
  }
  else if (lVar4 == 0) {
    _objc_release();
  }
  else {
    lVar5 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar5 != 0) goto LAB_105bc00ec;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_105bc0198:
  lVar4 = (long)_DAT_112731544;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a08a0();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194a40();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar9);
    _objc_release(uVar9);
  }
  uVar9 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf86020(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c0e1a60(uVar11);
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c078420(uVar12);
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf0e6c0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226e0(uVar9,param_2,uVar10,uVar11,uVar12,uVar13);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar9);
  lVar3 = *(long *)(param_1 + lVar15);
  func_0x00010c0b6a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c0b6a00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 105bc0360; end: 105bc059f; -[SCFriendsFeedComponentView _updateSubLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc0360(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010bed89e0();
  func_0x00010bee1320(param_1);
  lVar5 = (long)_DAT_112731550;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127315a4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfa3ca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c760(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15e480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11273154c;
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e00();
  _objc_release(uVar2);
  lVar6 = (long)_DAT_112731548;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf0e4c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bee12f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubLabelTapGesture_112595e60);
  return;
}



/* Entry: 105bc05a0; end: 105bc05df; -[SCFriendsFeedComponentView _updateSubLabelTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc05a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731548);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc05e0; end: 105bc0623; -[SCFriendsFeedComponentView _updateOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc05e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127315a4);
  func_0x00010c078da0();
  uVar2 = 0x3fc999999999999a;
  if (iVar1 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105bc0624; end: 105bc0a2b; -[SCFriendsFeedComponentView _updateRightButtonWithRightButtonViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc0624(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_1127315c4);
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  if (param_3 == uVar1) {
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_105bc0a10;
    }
    if (param_3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731568);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273156c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731570);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731574);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731580);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731588);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273158c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731590);
      func_0x00010bfe6360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731578);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
    }
    else {
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105bc0a2c;
      puStack_50 = &UNK_1108db300;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x105bc0a34;
      puStack_78 = &UNK_110842e18;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x105bc0a3c;
      puStack_a0 = &UNK_1108db330;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x105bc0a48;
      puStack_c8 = &UNK_110842e18;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x105bc0a50;
      puStack_f0 = &UNK_1108db360;
      uStack_128 = 0xc2000000;
      uStack_120 = 0x105bc0a58;
      puStack_118 = &UNK_1108db390;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x105bc0a64;
      puStack_140 = &UNK_1108db3c0;
      uStack_178 = 0xc2000000;
      uStack_170 = 0x105bc0a70;
      puStack_168 = &UNK_110842e18;
      uStack_1a0 = 0xc2000000;
      uStack_198 = 0x105bc0a78;
      puStack_190 = &UNK_1108db390;
      uStack_1c8 = 0xc2000000;
      uStack_1c0 = 0x105bc0a80;
      puStack_1b8 = &UNK_1108db3f0;
      uStack_1f0 = 0xc2000000;
      pcStack_1e8 = FUN_105bc0a8c;
      puStack_1e0 = &UNK_1108db420;
      uStack_218 = 0xc2000000;
      uStack_210 = 0x105bc0c64;
      puStack_208 = &UNK_1108db450;
      puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_200 = param_1;
      puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_1d8 = param_1;
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_1b0 = param_1;
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_188 = param_1;
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_160 = param_1;
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_138 = param_1;
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_110 = param_1;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_e8 = param_1;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_c0 = param_1;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_98 = param_1;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_70 = param_1;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_48 = param_1;
      func_0x00010c0bf920(param_3,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,
                          &puStack_108,&puStack_130,&puStack_158,&puStack_180,&puStack_1a8,
                          &puStack_1d0,&puStack_1f8,&puStack_220);
    }
  }
LAB_105bc0a10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc0a2c; end: 105bc0a8b;  */

void FUN_105bc0a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebaa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showReplyButtonWithButtonMode__11258c428);
  return;
}



/* Entry: 105bc0a8c; end: 105bc0c27;  */

void FUN_105bc0a8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf25ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bf960(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bc0c28; end: 105bc0c6f;  */

void FUN_105bc0c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showUnifiedActionButtonWithView_11258c830,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105bc0c70; end: 105bc104b; -[SCFriendsFeedComponentView _showUnifiedActionButtonWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc0c70(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010be44f00();
  if ((int)lVar5 == 0) {
LAB_105bc0d4c:
    uVar4 = *(undefined8 *)(param_1 + _DAT_112731570);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112731568);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273156c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112731580);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112731574);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112731588);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273158c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112731590);
    func_0x00010bfe6360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    lVar8 = (long)_DAT_112731578;
    lVar5 = *(long *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar8));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      puVar7 = PTR_PTR_1126c2bb8;
      _objc_alloc(PTR_PTR_1126c2bb8);
      func_0x00010c050900();
      func_0x00010c1374a0();
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8d40(param_1,param_2,uVar4,PTR_s__handleUnifiedActionButtonTouchD_11252ca20);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar4);
    uVar1 = *(ulong *)(param_1 + lVar8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    uVar1 = *(ulong *)(param_1 + _DAT_112731578);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_3);
    if (uVar2 != param_3) {
      if (param_3 == 0) {
        _objc_release();
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar3 = uVar2;
        func_0x00010c071ae0(uVar2,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar2);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) != 0) goto LAB_105bc1034;
      }
      goto LAB_105bc0d4c;
    }
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_105bc1034:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc104c; end: 105bc13af; -[SCFriendsFeedComponentView _showReplyButtonWithButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc104c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar3 = param_1;
  func_0x00010be3ea00();
  if ((int)lVar3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112731570);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf25800();
    _objc_release(lVar1);
    if (lVar3 == param_3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar1 = (long)_DAT_112731570;
  lVar3 = *(long *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar1));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar5 = PTR_PTR_1126c2bb8;
    _objc_alloc(PTR_PTR_1126c2bb8);
    func_0x00010c050900();
    func_0x00010c1374a0();
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8d40(param_1,param_2,uVar2,PTR_s__handleReplyButtonTouchDown__11252ca28);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bc13b0; end: 105bc16bf; -[SCFriendsFeedComponentView _showDefaultReplyButtonWithButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc13b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = param_1;
  func_0x00010be3e960();
  if ((int)lVar3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112731574);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf25800();
    _objc_release(lVar1);
    if (lVar3 == param_3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar1 = (long)_DAT_112731574;
  lVar3 = *(long *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar1));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8d40(param_1,param_2,uVar2,PTR_s__handleReplyButtonTouchDown__11252ca28);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bc16c0; end: 105bc19eb; -[SCFriendsFeedComponentView _showContextButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc16c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010be3f260();
  if ((int)lVar7 != 0) {
    if (*(long *)(param_1 + _DAT_1127315e8) != 0) {
      func_0x00010c0d9840(*(long *)(param_1 + _DAT_1127315e8),param_2,param_3);
      goto LAB_105bc19d0;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar7 = (long)_DAT_1127315e8;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar2 = PTR_PTR_1126b40c0;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127315b8;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_retain();
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_release(uVar1);
    lVar6 = param_1;
    func_0x00010bf4ee20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    lVar4 = param_1;
    func_0x00010bf16340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf246c0(lVar6,param_2,puVar2,uVar1,lVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127315ec);
    *(long *)(param_1 + _DAT_1127315ec) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010bf4ede0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(lVar6);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c0d9840(*(long *)(param_1 + lVar7),param_2,param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,0);
  }
LAB_105bc19d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc19ec; end: 105bc1d2f; -[SCFriendsFeedComponentView _showLensSuggestionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc19ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010be3f300();
  if ((int)lVar7 != 0) {
    if (*(long *)(param_1 + _DAT_1127315f0) != 0) {
      func_0x00010c0d9840(*(long *)(param_1 + _DAT_1127315f0),param_2,param_3);
      goto LAB_105bc1d14;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar7 = (long)_DAT_1127315f0;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar2 = PTR_PTR_1126b40c0;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127315bc;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_retain();
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
    func_0x00010bdc8d40(param_1,param_2,*(undefined8 *)(param_1 + lVar6),
                        PTR_s__handleReplyButtonTouchDown__11252ca28);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_release(uVar1);
    lVar6 = param_1;
    func_0x00010c094020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    lVar4 = param_1;
    func_0x00010bf16340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf246e0(lVar6,param_2,puVar2,uVar1,0,lVar4,param_1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127315f4);
    *(long *)(param_1 + _DAT_1127315f4) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010c094000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(lVar6);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c0d9840(*(long *)(param_1 + lVar7),param_2,param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,0);
  }
LAB_105bc1d14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc1d30; end: 105bc2053; -[SCFriendsFeedComponentView _showLiveGamingButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc1d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010be40c20();
  if ((int)lVar7 != 0) {
    if (*(long *)(param_1 + _DAT_1127315f8) != 0) {
      func_0x00010c0d9840(*(long *)(param_1 + _DAT_1127315f8),param_2,param_3);
      goto LAB_105bc2038;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar7 = (long)_DAT_1127315f8;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar2 = PTR_PTR_1126b40c0;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127315c0;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_retain();
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_release(uVar1);
    lVar6 = param_1;
    func_0x00010bfb9f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    lVar4 = param_1;
    func_0x00010bf16340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf246a0(lVar6,param_2,puVar2,uVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127315fc);
    *(long *)(param_1 + _DAT_1127315fc) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010bfb9f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(lVar6);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c0d9840(*(long *)(param_1 + lVar7),param_2,param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,0);
  }
LAB_105bc2038:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc2054; end: 105bc2343; -[SCFriendsFeedComponentView _showCallingButtonWithPresenceContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc2054(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3e900();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731568);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731570);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731574);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731580);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_1127315b8),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_1127315bc),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_1127315c0),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731588);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11273158c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731590);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112731578);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273156c;
    lVar3 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      lVar3 = param_1 + (long)_DAT_112731600;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c050900(puVar4,param_2,lVar3,PTR_s_handlePressOnCallingButton__11252ca30);
      _objc_release(lVar3);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0ca0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dc40();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc2344; end: 105bc25c7; -[SCFriendsFeedComponentView _showRetryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc2344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112731568;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    lVar2 = param_1 + _DAT_112731600;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c050900(puVar3,param_2,lVar2,PTR_s_handlePressOnRetryButton__11252c8a0);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc25c8; end: 105bc284b; -[SCFriendsFeedComponentView _showChatButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc25c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112731580;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    lVar2 = param_1 + _DAT_112731600;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c050900(puVar3,param_2,lVar2,PTR_s_handlePressOnChatButton__11252ca38);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc284c; end: 105bc2acf; -[SCFriendsFeedComponentView _showClearButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc284c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112731588;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    lVar2 = param_1 + _DAT_112731600;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c050900(puVar3,param_2,lVar2,PTR_s_handlePressOnClearButton__11252ca40);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc2ad0; end: 105bc2d2f; -[SCFriendsFeedComponentView _showAIBotButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc2ad0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731590);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11273158c;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc2d30; end: 105bc2fef; -[SCFriendsFeedComponentView _showAdCampaignButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc2d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731568);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731570);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731574);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273156c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731580);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315b8),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315bc),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127315c0),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273158c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_112731590;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    lVar4 = param_1 + _DAT_112731600;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c050900(puVar3,param_2,lVar4,PTR_s_handlePressOnCampaignButton__11252ca48);
    _objc_release(lVar4);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  func_0x00010bf5d5a0(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1867c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc2ff0; end: 105bc3277; -[SCFriendsFeedComponentView _updateStreakRestoreButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc2ff0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127315a4;
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + _DAT_1127315c4);
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    goto LAB_105bc3260;
  }
  if (uVar2 == 0) {
    _objc_release();
    _objc_release(uVar1);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c071ae0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  lVar4 = *(long *)(param_1 + lVar9);
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_105bc3114:
    uVar1 = *(ulong *)(param_1 + _DAT_11273157c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(ulong *)(param_1 + lVar9);
    func_0x00010c25c180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c294960();
    _objc_release(uVar1);
    _objc_release(lVar4);
    if ((uVar2 & 1) != 0) goto LAB_105bc3114;
    lVar8 = (long)_DAT_11273157c;
    lVar4 = *(long *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar8));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      lVar4 = param_1 + _DAT_112731600;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c050900(puVar5,param_2,lVar4,PTR_s_handlePressOnStreakRestore_11252ca50);
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c25c180(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar1 = *(ulong *)(param_1 + lVar8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60();
LAB_105bc3260:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc3278; end: 105bc346f; -[SCFriendsFeedComponentView _updateFriendsFeedSublabelFriendmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc3278(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_1127315a4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c25ec00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb9a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273154c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731554);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    lVar1 = (long)_DAT_112731554;
    lVar2 = *(long *)(param_1 + lVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar1));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_11273154c;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c25ec00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105bc3470; end: 105bc3633; -[SCFriendsFeedComponentView _updateSublabelStreakRestoreButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc3470(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_1127315a4;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c25c180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c294960();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_112731558;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar4 == 0) {
    _objc_release();
    if (lVar2 == 0) {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      lVar2 = param_1 + _DAT_112731600;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c050900(puVar3,param_2,lVar2,PTR_s_handlePressOnStreakRestore_11252ca50);
      _objc_release(lVar2);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c25c180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105bc3634; end: 105bc38e7; -[SCFriendsFeedComponentView _updateAvatarIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc3634(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar9 = (long)_DAT_1127315a4;
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + _DAT_1127315c4);
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    lVar4 = *(long *)(param_1 + lVar9);
    func_0x00010bf12e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar8 = (long)_DAT_112731564;
    uVar1 = *(ulong *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      _objc_release();
      if (uVar1 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar8));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa2c0();
        _objc_release(uVar5);
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar5);
      }
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bf12e80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010bfe5400();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c28c500(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      return;
    }
    func_0x00010c1a7f60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc38e8; end: 105bc3947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc38e8(long param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731564);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


