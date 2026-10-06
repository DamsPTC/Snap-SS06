/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a2e28c; end: 107a2e293; -[SCOperaStoriesViewStatsLayer shareCount] */

undefined8 FUN_107a2e28c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a2e294; end: 107a2e29b; -[SCOperaStoriesViewStatsLayer isSpotlightSnap] */

undefined1 FUN_107a2e294(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a2e29c; end: 107a2e2a3; -[SCOperaStoriesViewStatsLayer showSpotlightViewCount] */

undefined1 FUN_107a2e29c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107a2e2a4; end: 107a2e3d7; -[SCOperaStoriesViewStatsLayerView initWithFrame:shouldShowActionBar:shouldShowSpotlightViewCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a2e2a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_1126f96f8;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    dVar3 = param_1;
    _objc_release(puVar2);
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar4 = dVar3;
    func_0x000100594f4c();
    dVar5 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    *(bool *)((long)puVar1 + (long)_DAT_1127683e0) = 0.5625 <= dVar5 / ((param_1 - dVar4) - dVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127683e4) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127683e8) = param_8;
    func_0x00010c229700(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a2e3d8; end: 107a2ef1b; -[SCOperaStoriesViewStatsLayerView setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2e3d8(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined8 uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  ulong *puVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_360;
  long lStack_350;
  undefined *puStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  undefined8 uStack_218;
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
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined8 auStack_b0 [2];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126b1198;
  _objc_alloc();
  uVar59 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar60 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar61 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar62 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar59,uVar60,uVar61,uVar62);
  lVar56 = (long)_DAT_1127683ec;
  uVar51 = *(undefined8 *)(param_1 + lVar56);
  *(undefined **)(param_1 + lVar56) = puVar5;
  _objc_release(uVar51);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar56));
  uVar51 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bfcd9c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0,0x3fe0000000000000);
  _objc_release(uVar51);
  uVar51 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bfcd9c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000);
  _objc_release(uVar51);
  func_0x00010c258e80(param_1);
  _CGAffineTransformMakeRotation(&uStack_100);
  uStack_128 = uStack_f8;
  uStack_130 = uStack_100;
  uStack_118 = uStack_e8;
  uStack_120 = uStack_f0;
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar56));
  lVar57 = param_1;
  func_0x00010be43140();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = 0x3f847ae147ae147b;
  puVar3 = auStack_b0;
  uVar51 = 0x3fe0000000000000;
  if ((int)lVar57 == 0) {
    uVar63 = 0x3fe0000000000000;
    puVar3 = auStack_c0;
    uVar51 = 0x3f847ae147ae147b;
  }
  puVar50 = puVar5;
  func_0x00010bf414e0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar50;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  *puVar3 = puVar6;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar6;
  func_0x00010bf414e0(uVar63);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar49;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3[1] = puVar7;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bfcd9c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar51);
  _objc_release(puVar7);
  _objc_release(puVar49);
  _objc_release(puVar6);
  _objc_release(puVar50);
  _objc_release(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar56));
  puVar5 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(uVar59,uVar60,uVar61,uVar62);
  lVar57 = (long)_DAT_1127683f0;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar57));
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bfcd9c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar51);
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bfcd9c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3fe0000000000000,0);
  _objc_release(uVar51);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar5;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar50;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar49 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_d0 = puVar6;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar49;
  func_0x00010bf414e0(0x3f847ae147ae147b);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010bfcd9c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar51);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar49);
  _objc_release(puVar50);
  _objc_release(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  if (*(char *)(param_1 + _DAT_1127683e4) == '\x01') {
    puVar5 = PTR_PTR_1126d5fc0;
    _objc_alloc();
    func_0x00010c013de0(uVar59,uVar60,uVar61,uVar62);
    lVar57 = (long)_DAT_1127683f4;
    uVar51 = *(undefined8 *)(param_1 + lVar57);
    *(undefined **)(param_1 + lVar57) = puVar5;
    _objc_release(uVar51);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
    func_0x00010befbb60(param_1);
  }
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar57 = (long)_DAT_1127683f8;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010c08c0e0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4035000000000000);
  _objc_release(uVar51);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  lVar57 = param_1;
  func_0x00010befbb60();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar57;
  func_0x00010c0d0ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar56;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar56);
  _objc_release(lVar57);
  puVar5 = PTR_PTR_1126c3298;
  _objc_alloc_init();
  lVar57 = (long)_DAT_1127683fc;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  lStack_138 = lVar9;
  func_0x00010c16e720(*(undefined8 *)(param_1 + lVar57));
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar51);
  _objc_release(puVar5);
  func_0x00010c1a8c20(0xc024000000000000,0xc024000000000000,0xc024000000000000,0xc024000000000000,
                      *(undefined8 *)(param_1 + lVar57));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar57));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar57));
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar57 = (long)_DAT_112768400;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  func_0x00010c08c0e0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4035000000000000);
  _objc_release(uVar51);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  func_0x00010befbb60(param_1);
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar57 = (long)_DAT_112768404;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar5;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar57 = (long)_DAT_112768408;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  puStack_140 = puVar50;
  func_0x00010c16e720(*(undefined8 *)(param_1 + lVar57));
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar51);
  _objc_release(puVar5);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar57));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar57 = (long)_DAT_11276840c;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar5;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar56 = (long)_DAT_112768410;
  uVar51 = *(undefined8 *)(param_1 + lVar56);
  *(undefined **)(param_1 + lVar56) = puVar5;
  _objc_release(uVar51);
  func_0x00010c16e720(*(undefined8 *)(param_1 + lVar56));
  uVar51 = *(undefined8 *)(param_1 + lVar56);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar51);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar56));
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar57 = (long)_DAT_112768414;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar57));
  _objc_release(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init();
  lVar57 = (long)_DAT_112768418;
  uVar51 = *(undefined8 *)(param_1 + lVar57);
  *(undefined **)(param_1 + lVar57) = puVar5;
  _objc_release(uVar51);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar57));
  if (*(char *)(param_1 + _DAT_1127683e8) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c16e720(*(undefined8 *)(param_1 + lVar57));
    uVar51 = *(undefined8 *)(param_1 + lVar57);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar51);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c16e720(*(undefined8 *)(param_1 + lVar57));
    uVar51 = *(undefined8 *)(param_1 + lVar57);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar51);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar49);
  _objc_release(puVar50);
  _objc_release(puStack_140);
  lVar9 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_198 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_190 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puStack_168 = &DAT_1127683e8;
  pcStack_148 = FUN_107a2ef1c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = (long)_DAT_11276841c;
  uStack_1b0 = uVar60;
  uStack_1a8 = uVar59;
  lStack_1a0 = lVar56;
  puStack_188 = puVar6;
  uStack_180 = uVar51;
  puStack_178 = puVar49;
  puStack_170 = puVar50;
  lStack_160 = lVar57;
  puStack_158 = puVar5;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar53 = (long)_DAT_1127683ec;
  uVar10 = *(undefined8 *)(lVar9 + lVar53);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar10;
  func_0x00010bf493c0(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + lVar53);
  uStack_200 = uVar51;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = uVar11;
  func_0x00010bf493c0(0xc056800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar9 + lVar53);
  uStack_1f8 = uVar63;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar12;
  func_0x00010bf49420(0x407b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar9 + lVar53);
  uStack_1f0 = uVar59;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar13;
  func_0x00010bf49420(0x4066800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar54 = (long)_DAT_1127683f0;
  uVar14 = *(undefined8 *)(lVar9 + lVar54);
  uStack_1e8 = uVar60;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar9 + lVar54);
  uStack_1e0 = uVar61;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar9;
  func_0x00010c2793a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar62 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar9 + lVar54);
  uStack_1d8 = uVar62;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar16;
  func_0x00010bf49420(0x405a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar9 + lVar54);
  uStack_1d0 = uVar47;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar9;
  func_0x00010c08de00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c8 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(puVar50);
  _objc_release(uVar18);
  _objc_release(lVar54);
  _objc_release(uVar17);
  _objc_release(uVar47);
  _objc_release(uVar16);
  _objc_release(uVar62);
  _objc_release(lVar55);
  _objc_release(uVar15);
  _objc_release(uVar61);
  _objc_release(lVar53);
  _objc_release(uVar14);
  _objc_release(uVar60);
  _objc_release(uVar13);
  _objc_release(uVar59);
  _objc_release(uVar12);
  _objc_release(uVar63);
  _objc_release(lVar56);
  _objc_release(uVar11);
  _objc_release(uVar51);
  _objc_release(lVar57);
  _objc_release(uVar10);
  lVar56 = (long)_DAT_1127683f4;
  lVar57 = *(long *)(lVar9 + lVar56);
  if (lVar57 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = lVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar55 = lVar57;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar60 = *(undefined8 *)(lVar9 + lVar56);
    lStack_220 = lVar55;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = lVar9;
    func_0x00010c2793a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar60;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar61 = *(undefined8 *)(lVar9 + lVar56);
    uStack_218 = uVar51;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar9;
    func_0x00010bf1ff80(lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar63 = uVar61;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar62 = *(undefined8 *)(lVar9 + lVar56);
    uStack_210 = uVar63;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uVar62;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_208 = uVar59;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(puVar50);
    _objc_release(uVar59);
    _objc_release(uVar62);
    _objc_release(uVar63);
    _objc_release(lVar19);
    _objc_release(uVar61);
    _objc_release(uVar51);
    _objc_release(lVar54);
    _objc_release(uVar60);
    _objc_release(lVar55);
    _objc_release(lVar53);
    _objc_release(lVar57);
  }
  uVar51 = 0xc02a000000000000;
  if ((*(char *)(lVar9 + _DAT_112768420) == '\x01') &&
     (((*(byte *)(lVar9 + _DAT_1127683e0) & 1) != 0 || (*(char *)(lVar9 + _DAT_1127683e4) == '\x01')
      ))) {
    uVar51 = 0xc04e800000000000;
  }
  lVar55 = (long)_DAT_1127683fc;
  uVar12 = *(undefined8 *)(lVar9 + lVar55);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = uVar12;
  func_0x00010bf493c0(0xc032000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar9 + lVar55);
  uStack_2b0 = uVar63;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar13;
  func_0x00010bf493c0(uVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar9 + lVar55);
  uStack_2a8 = uVar59;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar14;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar9 + lVar55);
  uStack_2a0 = uVar51;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar15;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_1127683f8;
  uVar16 = *(undefined8 *)(lVar9 + lVar53);
  uStack_298 = uVar60;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = uVar16;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar9 + lVar53);
  uStack_290 = uVar61;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar62 = uVar17;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar9 + lVar53);
  uStack_288 = uVar62;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar9 + lVar55);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar9 + lVar53);
  uStack_280 = uVar47;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar9 + lVar55);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_112768404;
  uVar24 = *(undefined8 *)(lVar9 + lVar53);
  uStack_278 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar9 + lVar55);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar24;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar9 + lVar53);
  uStack_270 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(lVar9 + lVar55);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (ulong *)(lVar9 + _DAT_112768408);
  uVar28 = *puVar1;
  uStack_268 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(lVar9 + lVar55);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *puVar1;
  uStack_260 = uVar43;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(lVar9 + lVar53);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493c0(0xc02a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *puVar1;
  uStack_258 = uVar32;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *puVar1;
  uStack_250 = uVar34;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (ulong *)(lVar9 + _DAT_112768400);
  uVar37 = *puVar2;
  uStack_248 = uVar36;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar37;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *puVar2;
  uStack_240 = uVar44;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar38;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *puVar2;
  uStack_238 = uVar45;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *puVar1;
  func_0x00010bf34860(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar39;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *puVar2;
  uStack_230 = uVar48;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar41;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_228 = uVar46;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(puVar50);
  _objc_release(uVar46);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar48);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar45);
  _objc_release(uVar38);
  _objc_release(uVar44);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar43);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar11);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar10);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar47);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar62);
  _objc_release(uVar17);
  _objc_release(uVar61);
  _objc_release(uVar16);
  _objc_release(uVar60);
  _objc_release(uVar15);
  _objc_release(uVar51);
  _objc_release(uVar14);
  _objc_release(uVar59);
  _objc_release(lVar56);
  _objc_release(uVar13);
  _objc_release(uVar63);
  _objc_release(lVar57);
  _objc_release(uVar12);
  puVar58 = (ulong *)(lVar9 + _DAT_112768410);
  uVar43 = *puVar58;
  func_0x00010c074c20();
  if ((uVar43 & 1) == 0) {
    lVar57 = (long)_DAT_11276840c;
    uVar59 = *(undefined8 *)(lVar9 + lVar57);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar59;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar60 = *(undefined8 *)(lVar9 + lVar57);
    uStack_2e0 = uVar51;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar61 = *(undefined8 *)(lVar9 + lVar55);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar63 = uVar60;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = *puVar58;
    uStack_2d8 = uVar63;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar62 = *(undefined8 *)(lVar9 + lVar55);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = uVar45;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = *puVar58;
    uStack_2d0 = uVar43;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar47 = *(undefined8 *)(lVar9 + lVar57);
    func_0x00010c274200(uVar47);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar46;
    func_0x00010bf493c0(0xc02a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar48 = *puVar58;
    uStack_2c8 = uVar32;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar48;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *puVar58;
    uStack_2c0 = uVar34;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar28;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_2b8 = uVar36;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(puVar50);
    _objc_release(uVar36);
    _objc_release(uVar28);
    _objc_release(uVar34);
    _objc_release(uVar48);
    _objc_release(uVar32);
    _objc_release(uVar47);
    _objc_release(uVar46);
    _objc_release(uVar43);
    _objc_release(uVar62);
    _objc_release(uVar45);
    _objc_release(uVar63);
    _objc_release(uVar61);
    _objc_release(uVar60);
    _objc_release(uVar51);
    _objc_release(uVar44);
    _objc_release(uVar59);
  }
  else {
    iVar4 = (int)*puVar2;
    func_0x00010c074c20();
    puVar58 = puVar1;
    if (iVar4 == 0) {
      puVar58 = puVar2;
    }
  }
  uVar43 = *puVar58;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(lVar9 + _DAT_1127683e8) == '\x01') {
    lVar56 = (long)_DAT_112768418;
    lStack_378 = *(long *)(lVar9 + lVar56);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_380 = *(long *)(lVar9 + lVar55);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_388 = lStack_378;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_390 = *(undefined8 *)(lVar9 + lVar56);
    lStack_310 = lStack_388;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_398 = lVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar59 = uStack_390;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_360 = *(undefined8 *)(lVar9 + lVar56);
    uStack_308 = uVar59;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a0 = uStack_360;
    func_0x00010bf49420(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_3a8 = *(undefined8 *)(lVar9 + lVar56);
    uStack_300 = uStack_3a0;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar60 = uStack_3a8;
    func_0x00010bf49420(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar57 = (long)_DAT_112768414;
    uVar51 = *(undefined8 *)(lVar9 + lVar57);
    uStack_2f8 = uVar60;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar61 = *(undefined8 *)(lVar9 + lVar56);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar63 = uVar51;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = *(undefined **)(lVar9 + lVar57);
    uStack_2f0 = uVar63;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = *(undefined **)(lVar9 + lVar56);
    func_0x00010c2793a0(puVar50);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar49;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2e8 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(puVar7);
  }
  else {
    lVar57 = (long)_DAT_112768414;
    lStack_378 = *(long *)(lVar9 + lVar57);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lStack_380 = lStack_378;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_388 = *(long *)(lVar9 + lVar57);
    lStack_340 = lStack_380;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_390 = *(undefined8 *)(lVar9 + lVar55);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_398 = lStack_388;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = (long)_DAT_112768418;
    uVar59 = *(undefined8 *)(lVar9 + lVar56);
    lStack_338 = lStack_398;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_360 = *(undefined8 *)(lVar9 + lVar55);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a0 = uVar59;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a8 = *(undefined8 *)(lVar9 + lVar56);
    uStack_330 = uStack_3a0;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar60 = *(undefined8 *)(lVar9 + lVar57);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uStack_3a8;
    func_0x00010bf493c0(0xc02a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar61 = *(undefined8 *)(lVar9 + lVar56);
    uStack_328 = uVar51;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar63 = uVar61;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = *(undefined **)(lVar9 + lVar56);
    uStack_320 = uVar63;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar49;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_318 = puVar50;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
  }
  _objc_release(puVar6);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(uVar63);
  _objc_release(uVar61);
  _objc_release(uVar51);
  _objc_release(uVar60);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_360);
  _objc_release(uVar59);
  _objc_release(lStack_398);
  _objc_release(uStack_390);
  _objc_release(lStack_388);
  _objc_release(lStack_380);
  _objc_release(lStack_378);
  puVar6 = puVar5;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar50 = puVar5;
  func_0x00010bf51e00();
  uVar51 = *(undefined8 *)(lVar9 + lVar52);
  *(undefined **)(lVar9 + lVar52) = puVar50;
  _objc_release(uVar51);
  puStack_348 = PTR_PTR_1126f96f8;
  lStack_350 = lVar9;
  _objc_msgSendSuper2(&lStack_350,PTR_s_updateConstraints_11267ec30);
  _objc_release(uVar43);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c22a980(puVar6);
  func_0x00010c0df840(puVar50);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar50;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(puVar5 + _DAT_112768404));
  _objc_release(puVar49);
  _objc_release(puVar50);
  puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c29ebc0(puVar6);
  func_0x00010c29ebe0(puVar6);
  func_0x00010c0df840(puVar50);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar50;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(puVar5 + _DAT_112768414));
  _objc_release(puVar49);
  _objc_release(puVar50);
  puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1f680(puVar6);
  func_0x00010c0df840(puVar50);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar50;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_11276840c;
  func_0x00010c212f20(*(undefined8 *)(puVar5 + lVar57));
  _objc_release(puVar49);
  _objc_release(puVar50);
  puVar50 = puVar6;
  func_0x00010c07f5a0();
  if (((ulong)puVar50 & 1) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_1127683f4));
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + lVar57));
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_112768410));
    func_0x00010c1a7f60(*(undefined8 *)(puVar5 + _DAT_112768400));
  }
  puVar50 = puVar6;
  func_0x00010c07f5a0();
  puVar5[_DAT_112768420] = (char)puVar50;
  func_0x00010c1cbf40(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107a2ef1c; end: 107a3017b; -[SCOperaStoriesViewStatsLayerView updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2ef1c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined8 uVar52;
  undefined *puVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  ulong *puVar59;
  undefined8 uVar60;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_220;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
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
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar54 = (long)_DAT_11276841c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar54));
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar55 = (long)_DAT_1127683ec;
  uVar5 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar5;
  func_0x00010bf493c0(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar55);
  uStack_c0 = uVar60;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0xc056800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar55);
  uStack_b8 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar8;
  func_0x00010bf49420(0x407b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar55);
  uStack_b0 = uVar52;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bf49420(0x4066800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_1127683f0;
  uVar10 = *(undefined8 *)(param_1 + lVar56);
  uStack_a8 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar56);
  uStack_a0 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar56);
  uStack_98 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar12;
  func_0x00010bf49420(0x405a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar56);
  uStack_90 = uVar47;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(puVar50);
  _objc_release(uVar14);
  _objc_release(lVar56);
  _objc_release(uVar13);
  _objc_release(uVar47);
  _objc_release(uVar12);
  _objc_release(uVar19);
  _objc_release(lVar58);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(lVar55);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(uVar52);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar57);
  _objc_release(uVar6);
  _objc_release(uVar60);
  _objc_release(lVar15);
  _objc_release(uVar5);
  lVar57 = (long)_DAT_1127683f4;
  lVar15 = *(long *)(param_1 + lVar57);
  if (lVar15 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar55 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar58 = lVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar57);
    lStack_e0 = lVar58;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar60 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar57);
    uStack_d8 = uVar60;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar57);
    uStack_d0 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar52 = uVar19;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar52;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
    _objc_release(puVar50);
    _objc_release(uVar52);
    _objc_release(uVar19);
    _objc_release(uVar7);
    _objc_release(lVar18);
    _objc_release(uVar17);
    _objc_release(uVar60);
    _objc_release(lVar56);
    _objc_release(uVar16);
    _objc_release(lVar58);
    _objc_release(lVar55);
    _objc_release(lVar15);
  }
  uVar60 = 0xc02a000000000000;
  if ((*(char *)(param_1 + _DAT_112768420) == '\x01') &&
     (((*(byte *)(param_1 + _DAT_1127683e0) & 1) != 0 ||
      (*(char *)(param_1 + _DAT_1127683e4) == '\x01')))) {
    uVar60 = 0xc04e800000000000;
  }
  lVar58 = (long)_DAT_1127683fc;
  uVar8 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf493c0(0xc032000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar58);
  uStack_170 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar9;
  func_0x00010bf493c0(uVar60);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar58);
  uStack_168 = uVar52;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar10;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar58);
  uStack_160 = uVar60;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_1127683f8;
  uVar12 = *(undefined8 *)(param_1 + lVar55);
  uStack_158 = uVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar55);
  uStack_150 = uVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar13;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar55);
  uStack_148 = uVar19;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar55);
  uStack_140 = uVar47;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_112768404;
  uVar24 = *(undefined8 *)(param_1 + lVar55);
  uStack_138 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar24;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar55);
  uStack_130 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (ulong *)(param_1 + _DAT_112768408);
  uVar28 = *puVar1;
  uStack_128 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar58);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *puVar1;
  uStack_120 = uVar43;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493c0(0xc02a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *puVar1;
  uStack_118 = uVar32;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *puVar1;
  uStack_110 = uVar34;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (ulong *)(param_1 + _DAT_112768400);
  uVar37 = *puVar2;
  uStack_108 = uVar36;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar37;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *puVar2;
  uStack_100 = uVar44;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar38;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *puVar2;
  uStack_f8 = uVar45;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *puVar1;
  func_0x00010bf34860(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar39;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *puVar2;
  uStack_f0 = uVar46;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *puVar1;
  func_0x00010bf348e0(uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar41;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar48;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(puVar50);
  _objc_release(uVar48);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar46);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar45);
  _objc_release(uVar38);
  _objc_release(uVar44);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar43);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar6);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar5);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar14);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar47);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar13);
  _objc_release(uVar17);
  _objc_release(uVar12);
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(uVar60);
  _objc_release(uVar10);
  _objc_release(uVar52);
  _objc_release(lVar57);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(lVar15);
  _objc_release(uVar8);
  puVar59 = (ulong *)(param_1 + _DAT_112768410);
  uVar43 = *puVar59;
  func_0x00010c074c20();
  if ((uVar43 & 1) == 0) {
    lVar15 = (long)_DAT_11276840c;
    uVar52 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar60 = uVar52;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar15);
    uStack_1a0 = uVar60;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar58);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = *puVar59;
    uStack_198 = uVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar58);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = uVar45;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = *puVar59;
    uStack_190 = uVar43;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar47 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200(uVar47);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar46;
    func_0x00010bf493c0(0xc02a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar48 = *puVar59;
    uStack_188 = uVar32;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar48;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *puVar59;
    uStack_180 = uVar34;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar28;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_178 = uVar36;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
    _objc_release(puVar50);
    _objc_release(uVar36);
    _objc_release(uVar28);
    _objc_release(uVar34);
    _objc_release(uVar48);
    _objc_release(uVar32);
    _objc_release(uVar47);
    _objc_release(uVar46);
    _objc_release(uVar43);
    _objc_release(uVar19);
    _objc_release(uVar45);
    _objc_release(uVar7);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar60);
    _objc_release(uVar44);
    _objc_release(uVar52);
  }
  else {
    iVar3 = (int)*puVar2;
    func_0x00010c074c20();
    puVar59 = puVar1;
    if (iVar3 == 0) {
      puVar59 = puVar2;
    }
  }
  uVar43 = *puVar59;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_1127683e8) == '\x01') {
    lVar57 = (long)_DAT_112768418;
    lStack_238 = *(long *)(param_1 + lVar57);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_240 = *(long *)(param_1 + lVar58);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = lStack_238;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_250 = *(undefined8 *)(param_1 + lVar57);
    lStack_1d0 = lStack_248;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar52 = uStack_250;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_220 = *(undefined8 *)(param_1 + lVar57);
    uStack_1c8 = uVar52;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_260 = uStack_220;
    func_0x00010bf49420(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = *(undefined8 *)(param_1 + lVar57);
    uStack_1c0 = uStack_260;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uStack_268;
    func_0x00010bf49420(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112768414;
    uVar60 = *(undefined8 *)(param_1 + lVar15);
    uStack_1b8 = uVar16;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar57);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar60;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = *(undefined **)(param_1 + lVar15);
    uStack_1b0 = uVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = *(undefined **)(param_1 + lVar57);
    func_0x00010c2793a0(puVar50);
    _objc_retainAutoreleasedReturnValue();
    puVar53 = puVar49;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar51 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1a8 = puVar53;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
    _objc_release(puVar51);
  }
  else {
    lVar15 = (long)_DAT_112768414;
    lStack_238 = *(long *)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lStack_240 = lStack_238;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = *(long *)(param_1 + lVar15);
    lStack_200 = lStack_240;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_250 = *(undefined8 *)(param_1 + lVar58);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = lStack_248;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar57 = (long)_DAT_112768418;
    uVar52 = *(undefined8 *)(param_1 + lVar57);
    lStack_1f8 = lStack_258;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_220 = *(undefined8 *)(param_1 + lVar58);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_260 = uVar52;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = *(undefined8 *)(param_1 + lVar57);
    uStack_1f0 = uStack_260;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar60 = uStack_268;
    func_0x00010bf493c0(0xc02a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar57);
    uStack_1e8 = uVar60;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar17;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = *(undefined **)(param_1 + lVar57);
    uStack_1e0 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar49;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar53 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d8 = puVar50;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
  }
  _objc_release(puVar53);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(uVar60);
  _objc_release(uVar16);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_220);
  _objc_release(uVar52);
  _objc_release(lStack_258);
  _objc_release(uStack_250);
  _objc_release(lStack_248);
  _objc_release(lStack_240);
  _objc_release(lStack_238);
  puVar53 = puVar4;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar50 = puVar4;
  func_0x00010bf51e00();
  uVar60 = *(undefined8 *)(param_1 + lVar54);
  *(undefined **)(param_1 + lVar54) = puVar50;
  _objc_release(uVar60);
  puStack_208 = PTR_PTR_1126f96f8;
  lStack_210 = param_1;
  _objc_msgSendSuper2(&lStack_210,PTR_s_updateConstraints_11267ec30);
  _objc_release(uVar43);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar53);
    puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c22a980(puVar53);
    func_0x00010c0df840(puVar50);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar50;
    func_0x00010c22d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(puVar4 + _DAT_112768404));
    _objc_release(puVar49);
    _objc_release(puVar50);
    puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c29ebc0(puVar53);
    func_0x00010c29ebe0(puVar53);
    func_0x00010c0df840(puVar50);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar50;
    func_0x00010c22d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(puVar4 + _DAT_112768414));
    _objc_release(puVar49);
    _objc_release(puVar50);
    puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf1f680(puVar53);
    func_0x00010c0df840(puVar50);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar50;
    func_0x00010c22d980();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11276840c;
    func_0x00010c212f20(*(undefined8 *)(puVar4 + lVar15));
    _objc_release(puVar49);
    _objc_release(puVar50);
    puVar50 = puVar53;
    func_0x00010c07f5a0();
    if (((ulong)puVar50 & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(puVar4 + _DAT_1127683f4));
      func_0x00010c1a7f60(*(undefined8 *)(puVar4 + lVar15));
      func_0x00010c1a7f60(*(undefined8 *)(puVar4 + _DAT_112768410));
      func_0x00010c1a7f60(*(undefined8 *)(puVar4 + _DAT_112768400));
    }
    puVar50 = puVar53;
    func_0x00010c07f5a0();
    puVar4[_DAT_112768420] = (char)puVar50;
    func_0x00010c1cbf40(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar53);
    return;
  }
  return;
}



/* Entry: 107a3017c; end: 107a30337; -[SCOperaStoriesViewStatsLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3017c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010c22a980(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112768404),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010c29ebc0(param_3);
  uVar4 = param_3;
  func_0x00010c29ebe0(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar4 + uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112768414),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bf1f680(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c22d980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276840c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar1 = param_3;
  func_0x00010c07f5a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127683f4),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768410),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768400),param_2,1);
  }
  uVar1 = param_3;
  func_0x00010c07f5a0();
  *(char *)(param_1 + _DAT_112768420) = (char)uVar1;
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a30338; end: 107a3036b; -[SCOperaStoriesViewStatsLayerView _didTapActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30338(long param_1)

{
  param_1 = param_1 + _DAT_112768424;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3036c; end: 107a303b7; -[SCOperaStoriesViewStatsLayerView _didTapSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3036c(long param_1)

{
  if (*(char *)(param_1 + _DAT_112768420) == '\x01') {
    param_1 = param_1 + _DAT_112768424;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a303b8; end: 107a303ff; -[SCOperaStoriesViewStatsLayerView _isRTL] */

bool FUN_107a303b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x1;
}



/* Entry: 107a30400; end: 107a3042b; -[SCOperaStoriesViewStatsLayerView storiesViewStatsViewSidebarGradientViewRotation] */

undefined8 FUN_107a30400(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be43140();
  uVar1 = 0xbfd851eb851eb852;
  if (param_1 == 0) {
    uVar1 = 0x3fd851eb851eb852;
  }
  return uVar1;
}



/* Entry: 107a3042c; end: 107a3049f; -[SCOperaStoriesViewStatsLayerView hitTest:withEvent:] */

void FUN_107a3042c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f96f8;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a304a0; end: 107a304af; -[SCOperaStoriesViewStatsLayerView actionBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a304a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127683f4);
}



/* Entry: 107a304b0; end: 107a304ef; -[SCOperaStoriesViewStatsLayerView setActionBarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a304b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127683f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a304f0; end: 107a3050f; -[SCOperaStoriesViewStatsLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a304f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112768424);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a30510; end: 107a30523; -[SCOperaStoriesViewStatsLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30510(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112768424,param_3);
  return;
}



/* Entry: 107a30524; end: 107a3061f; -[SCOperaStoriesViewStatsLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30524(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112768424);
  _objc_storeStrong(param_1 + _DAT_1127683f4,0);
  _objc_storeStrong(param_1 + _DAT_11276841c,0);
  _objc_storeStrong(param_1 + _DAT_1127683ec,0);
  _objc_storeStrong(param_1 + _DAT_1127683f0,0);
  _objc_storeStrong(param_1 + _DAT_112768400,0);
  _objc_storeStrong(param_1 + _DAT_112768404,0);
  _objc_storeStrong(param_1 + _DAT_112768408,0);
  _objc_storeStrong(param_1 + _DAT_11276840c,0);
  _objc_storeStrong(param_1 + _DAT_112768410,0);
  _objc_storeStrong(param_1 + _DAT_112768414,0);
  _objc_storeStrong(param_1 + _DAT_112768418,0);
  _objc_storeStrong(param_1 + _DAT_1127683f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127683fc,0);
  return;
}



/* Entry: 107a30620; end: 107a306c7; -[SCOperaStoriesViewStatsLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a30620(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d5e30;
    _objc_alloc();
    func_0x00010bff00e0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768428);
    *(undefined **)((long)puVar1 + (long)_DAT_112768428) = puVar2;
    _objc_release(uVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0da1c0();
    *(undefined1 **)((long)puVar1 + (long)_DAT_11276842c) = puVar4;
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a306c8; end: 107a3085b; -[SCOperaStoriesViewStatsLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a306c8(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c23a300();
  if ((int)lVar4 != 0) {
    lVar4 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f5a0();
    _objc_release(lVar4);
  }
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c07f5a0();
  if ((int)lVar4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + _DAT_11276842c) != 1;
  }
  _objc_release(lVar5);
  puVar2 = PTR_PTR_1126d5fc8;
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c014ca0(uVar6,uVar7,uVar8,uVar9);
  lVar5 = (long)_DAT_112768430;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  if (bVar1) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010beee080(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar3);
  }
  else {
    puVar2 = PTR_PTR_1126d5fc0;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar4 = (long)_DAT_112768434;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 107a3085c; end: 107a3089f; -[SCOperaStoriesViewStatsLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3085c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768430);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2298c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a308a0; end: 107a308a3; -[SCOperaStoriesViewStatsLayerViewController didTapActionMenuButton] */

void FUN_107a308a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb76f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showActionMenu_11258b760);
  return;
}



/* Entry: 107a308a4; end: 107a308e7; -[SCOperaStoriesViewStatsLayerViewController didTapSendButton] */

void FUN_107a308a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a308e8; end: 107a308ff; -[SCOperaStoriesViewStatsLayerViewController unifiedActionMenuPresenterDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a308e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768438);
  *(undefined8 *)(param_1 + _DAT_112768438) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a30900; end: 107a309b3; -[SCOperaStoriesViewStatsLayerViewController deleteSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30900(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768438);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83dc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a309b4; end: 107a30a07;  */

void FUN_107a309b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126d5e20;
  func_0x00010bf6b1c0(PTR_PTR_1126d5e20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a30a08; end: 107a30abb; -[SCOperaStoriesViewStatsLayerViewController saveSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30a08(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768438);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83dc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a30abc; end: 107a30b0f;  */

void FUN_107a30abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126d5e20;
  func_0x00010c149e20(PTR_PTR_1126d5e20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a30b10; end: 107a30bc3; -[SCOperaStoriesViewStatsLayerViewController sendSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30b10(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768438);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83dc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a30bc4; end: 107a30c17;  */

void FUN_107a30bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a30c18; end: 107a30c2f; -[SCOperaStoriesViewStatsLayerViewController dismissActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768438),
             PTR_s_dismissMenuViewWithAnimation_com_1125be918,1,0);
  return;
}



/* Entry: 107a30c30; end: 107a30caf; -[SCOperaStoriesViewStatsLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30c30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c07f5a0();
  if ((int)lVar3 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11276842c);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112768434);
      goto LAB_107a30c94;
    }
  }
  uVar2 = 0;
LAB_107a30c94:
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a30cb0; end: 107a30cbf; -[SCOperaStoriesViewStatsLayerViewController didTapPillViewButton] */

void FUN_107a30cb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_announceEvent__11259eab0,&PTR____CFConstantStringClassReference_110ebad78
            );
  return;
}



/* Entry: 107a30cc0; end: 107a30dcf; -[SCOperaStoriesViewStatsLayerViewController _showActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30cc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112768438;
  if (*(long *)(param_1 + lVar7) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5e28;
  _objc_alloc(PTR_PTR_1126d5e28);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07f5a0();
  func_0x00010c01f7c0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112768428);
  uVar5 = 0x13;
  func_0x00010bc9107c(0x13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar4,param_2,puVar1,uVar6,0,0,uVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar4;
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  func_0x00010c10d0c0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a30dd0; end: 107a30e2f; -[SCOperaStoriesViewStatsLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a30dd0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768434,0);
  _objc_storeStrong(param_1 + _DAT_112768438,0);
  _objc_storeStrong(param_1 + _DAT_112768428,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768430,0);
  return;
}



/* Entry: 107a30e30; end: 107a30e6f;  */

void FUN_107a30e30(void)

{
  if (lRam0000000113727370 != -1) {
    func_0x00010002a2fc(0x113727370,&PTR___NSConcreteGlobalBlock_1109f6ab8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727378,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107a30e70; end: 107a30ed7;  */

void FUN_107a30e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c12b8;
  _objc_opt_class(PTR_PTR_1126c12b8);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109f6ad8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727378;
  uRam0000000113727378 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a30ed8; end: 107a30edf;  */

void FUN_107a30ed8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_blizzardLogger_1125a4d68);
  return;
}



/* Entry: 107a30ee0; end: 107a30f1f;  */

void FUN_107a30ee0(void)

{
  if (lRam0000000113727380 != -1) {
    func_0x00010002a2fc(0x113727380,&PTR___NSConcreteGlobalBlock_1109f6af8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727388,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107a30f20; end: 107a30f87;  */

void FUN_107a30f20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c12b0;
  _objc_opt_class(PTR_PTR_1126c12b0);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109f6b38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727388;
  uRam0000000113727388 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a30f88; end: 107a30f8f;  */

void FUN_107a30f88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcdf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_grapheneMetricsEmitter_1125d1170);
  return;
}



/* Entry: 107a30f90; end: 107a31067; -[SCUnifiedProfilePlayStoryActionHandler initWithUserSession:remoteStoriesDataProvider:storiesMediaCoordinator:readReceiptCoordinator:startChatDelegate:navigationDelegate:displayContentDelegate:circumstanceEngine:snapchattersSynchronousDataFetcher:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:discoverOperaPluginCreator:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:optInDataProvider:webBrowsingScopeExposer:discoverFeedEventsController:] */

void FUN_107a30f90(void)

{
  func_0x00010c05de20();
  return;
}



/* Entry: 107a31068; end: 107a31dcb; -[SCUnifiedProfilePlayStoryActionHandler initWithUserSession:myStoriesPlaybackDataProvider:playbackManagementDataProvider:myStoriesDataCoordinator:storiesDataCoordinator:remoteStoriesDataProvider:storiesMediaCoordinator:readReceiptCoordinator:saveStoryScopeExposer:deleteStorySnapScopeExposer:storyShareScopeExposer:friendProfileScopeExposer:myStorySettingsScopeExposer:customStoryMenuScopeExposer:webBrowsingScopeExposer:customStoryMembersScopeExposer:storyPrivacySettingsScopeExposer:standardExternalContentShareScopeExposer:safetyReportScopeExposer:startChatDelegate:navigationDelegate:spotlightNavigationDelegate:displayContentDelegate:circumstanceEngine:snapchattersSynchronousDataFetcher:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:snapchattersDataFetcher:snapchattersPublicInfoFetcher:blockedSnapchatterFetcher:storiesBlizzardLogger:notificationPool:externalLinkSendingService:saveFriendStoryOperaPluginProvider:plusServices:activityFeedScopeExposer:snapProPreferencesManager:snapProUserProfileIdProvider:snapProProfilesProvider:spotlightRepliesScopeExposer:profileManagementScopeExposer:discoverOperaPluginCreator:storyBoostService:applicationLifecycleEvents:resourceDownloader:bloopsReportScopeExposer:featureSettingsService:temporaryFileWriter:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:optInDataProvider:spotlightDataFetcher:discoverFeedEventsController:storiesConfigProvider:] */

undefined8 *
FUN_107a31068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  puStack_80 = PTR_PTR_1126f9708;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar3 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cf130);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_21;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1e,param_22);
    _objc_storeWeak(puVar1 + 0x1f,param_23);
    _objc_storeWeak(puVar1 + 0x20,param_24);
    _objc_storeWeak(puVar1 + 0x21,param_25);
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[9];
    puVar1[9] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[10];
    puVar1[10] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar3 = puVar1[0x33];
    puVar1[0x33] = param_42;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c14c0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_retain(param_43);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_51;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_56;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_26);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x44];
    puVar1[0x44] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_62);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x45];
    puVar1[0x45] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_62);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x46];
    puVar1[0x46] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = param_62;
    _objc_release(uVar2);
    _objc_release(param_62);
    _objc_release(param_62);
    _objc_release(param_26);
  }
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a31dcc; end: 107a31ddb;  */

void FUN_107a31dcc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c243df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapViewerDataCoordinator_11266e9a0);
  return;
}



/* Entry: 107a31ddc; end: 107a31e0b;  */

void FUN_107a31ddc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108060950(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 107a31e0c; end: 107a31f23;  */

void FUN_107a31e0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c117140(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a31f24; end: 107a31f2f; +[SCUnifiedProfilePlayStoryActionHandler announcerIdentifier] */

undefined ** FUN_107a31f24(void)

{
  return &PTR____CFConstantStringClassReference_110eaa498;
}



/* Entry: 107a31f30; end: 107a31f37; -[SCUnifiedProfilePlayStoryActionHandler addListener:] */

void FUN_107a31f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x128),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a31f38; end: 107a31f3f; -[SCUnifiedProfilePlayStoryActionHandler removeListener:] */

void FUN_107a31f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x128),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a31f40; end: 107a3273f; -[SCUnifiedProfilePlayStoryActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107a31f40(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar7 = 1;
        func_0x000108f3775c(*(undefined8 *)(param_1 + 0x1f0),1);
        func_0x000108f34dfc(*(undefined8 *)(param_1 + 0x1f0),1);
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b11d0;
        _objc_opt_class(PTR_PTR_1126b11d0);
        uVar6 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        uStack_c0 = 0x107a327dc;
        puStack_b8 = &UNK_110848ba8;
        lStack_b0 = param_1;
        _objc_retain(param_5);
        uStack_a8 = param_5;
        uStack_a0 = uVar1;
        _objc_retain(uVar1);
        func_0x0001000d76cc("APPSTORE",&puStack_d0);
        _objc_release(uStack_a0);
        _objc_release(uStack_a8);
        _objc_release(uVar1);
        goto LAB_107a320e4;
      }
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b10c0;
          func_0x00010c100440(PTR_PTR_1126b10c0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 == 0) {
              uVar1 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              if ((int)uVar2 == 0) {
                uVar7 = 0;
                goto LAB_107a320e4;
              }
              uVar1 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126b43a0;
              _objc_opt_class(PTR_PTR_1126b43a0);
              uVar6 = uVar1;
              _objc_opt_isKindOfClass(uVar1,puVar3);
              uVar2 = uVar1;
              if ((uVar6 & 1) == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar1);
              uVar1 = uVar2;
              func_0x00010c116a20(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar2;
              func_0x00010bef1560(uVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              func_0x00010be47440(param_1);
            }
            else {
              uVar1 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126b4398;
              _objc_opt_class(PTR_PTR_1126b4398);
              uVar6 = uVar1;
              _objc_opt_isKindOfClass(uVar1,puVar3);
              uVar2 = uVar1;
              if ((uVar6 & 1) == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar1);
              uVar1 = uVar2;
              func_0x00010c116a20(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar2;
              func_0x00010c24b460(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar2;
              func_0x00010bef1560(uVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              func_0x00010be47440(param_1);
              _objc_release(uVar5);
            }
          }
          else {
            uVar2 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126b10c0;
            _objc_opt_class(PTR_PTR_1126b10c0);
            uVar6 = uVar2;
            _objc_opt_isKindOfClass(uVar2,puVar3);
            uVar1 = uVar2;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar2);
            uVar4 = *(undefined8 *)(param_1 + 0x178);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar4;
            func_0x00010bfdc480();
            _objc_release(uVar4);
            uVar6 = uVar1;
            if ((int)uVar7 != 0) {
              uVar2 = uVar1;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar2 != 0) {
                uVar7 = *(undefined8 *)(param_1 + 0x178);
                func_0x00010c269d40(uVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(uVar1);
                func_0x00010c116a60(uVar7);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(uVar7);
                goto LAB_107a3272c;
              }
            }
            uVar2 = uVar1;
            func_0x00010c231b20();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar2;
            func_0x00010bf1f3c0();
            _objc_release(uVar2);
            if ((int)uVar5 != 0) {
              uVar2 = uVar1;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(param_1 + 0x1b8);
              *(ulong *)(param_1 + 0x1b8) = uVar2;
              _objc_release(uVar7);
            }
            func_0x00010c259cc0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010bf3cf60(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be74800(param_1);
            _objc_release(uVar2);
          }
LAB_107a3272c:
          _objc_release(uVar6);
          goto LAB_107a320dc;
        }
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b11d0;
        _objc_opt_class(PTR_PTR_1126b11d0);
        uVar6 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_138 = 0xc2000000;
        uStack_130 = 0x107a32900;
        puStack_128 = &UNK_110848ba8;
        lStack_120 = param_1;
        _objc_retain(param_5);
        uStack_118 = param_5;
        uStack_110 = uVar1;
        _objc_retain(uVar1);
        func_0x0001000d76cc("APPSTORE",&puStack_140);
        _objc_release(uStack_110);
        uVar7 = uStack_118;
      }
      else {
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b11d0;
        _objc_opt_class(PTR_PTR_1126b11d0);
        uVar6 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        uStack_f8 = 0x107a32864;
        puStack_f0 = &UNK_110848ba8;
        lStack_e8 = param_1;
        _objc_retain(param_5);
        uStack_e0 = param_5;
        uStack_d8 = uVar1;
        _objc_retain(uVar1);
        func_0x0001000d76cc("APPSTORE",&puStack_108);
        _objc_release(uStack_d8);
        uVar7 = uStack_e0;
      }
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar6 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107a32740;
      puStack_80 = &UNK_110848ba8;
      lStack_78 = param_1;
      _objc_retain(param_5);
      uStack_70 = param_5;
      uStack_68 = uVar1;
      _objc_retain(uVar1);
      func_0x0001000d76cc("APPSTORE",&puStack_98);
      _objc_release(uStack_68);
      uVar7 = uStack_70;
    }
    _objc_release(uVar7);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15c8;
    _objc_opt_class(PTR_PTR_1126b15c8);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010be74a80(param_1);
  }
LAB_107a320dc:
  _objc_release(uVar1);
  uVar7 = 1;
LAB_107a320e4:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 107a32740; end: 107a3299b;  */

void FUN_107a32740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c25b720(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c259cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c23f800(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74800(uVar1,param_2,uVar2,uVar3,uVar4,uVar5,0,0,0);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107a3299c; end: 107a32a6b;  */

void FUN_107a3299c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x198);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bfd3260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107a32a6c; end: 107a32b03;  */

void FUN_107a32a6c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_2);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf25020(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010beb77a0(uVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107a32b04; end: 107a32b53; -[SCUnifiedProfilePlayStoryActionHandler updateOperaDismissBaseView:] */

void FUN_107a32b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be6dca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283ba0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a32b54; end: 107a32bb3; -[SCUnifiedProfilePlayStoryActionHandler isPresentingStory] */

bool FUN_107a32b54(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010be6dca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0xd0);
    func_0x00010c150520(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107a32bb4; end: 107a32bcb; -[SCUnifiedProfilePlayStoryActionHandler _operaPresenter] */

void FUN_107a32bb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a32bcc; end: 107a32d43; -[SCUnifiedProfilePlayStoryActionHandler _playStoryForSnapchatter:baseView:] */

void FUN_107a32bcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bfaa9c0(uVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a32d44; end: 107a32da7;  */

void FUN_107a32d44(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ddc60();
  if (0 < lVar1) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be74b00();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a32da8; end: 107a3308b; -[SCUnifiedProfilePlayStoryActionHandler _playMyStoryFromBaseView:storyType:storyId:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isForPendingSnapProSnap:] */

void FUN_107a32da8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c07ad00();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be6dca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07ab40();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010be6dca0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07ab40();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_107a33028;
      func_0x00010bddf1c0(param_1);
    }
  }
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x228);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c07f540();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x248);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c07f360();
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = (undefined1)uVar4;
  uStack_6f = (undefined1)uVar6;
  uStack_6e = (undefined1)uVar5;
  uStack_78 = param_4;
  uStack_6d = param_8;
  _objc_retain(param_6);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_6b = param_9;
  uStack_6c = param_7;
  func_0x00010c11d5e0(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
LAB_107a33028:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3308c; end: 107a3325b;  */

void FUN_107a3308c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar1 = param_2;
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x48) & 1) != 0)) {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x000107d178f0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (*(long *)(param_1 + 0x40) != 10) goto LAB_107a3311c;
      func_0x000107d17800(param_2,4,2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
LAB_107a3311c:
  lVar4 = lVar1;
  if (((*(byte *)(param_1 + 0x49) & 1) != 0) || (*(char *)(param_1 + 0x4a) == '\x01')) {
    func_0x000107d179cc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((*(char *)(param_1 + 0x4b) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
      lVar1 = lVar4;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      lVar2 = lVar1;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        _objc_release(lVar4);
        lVar4 = 0;
      }
      _objc_release(lVar2);
      _objc_release(uVar3);
    }
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74620();
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a3325c; end: 107a332a3;  */

undefined8 FUN_107a3325c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107a332a4; end: 107a3346f; -[SCUnifiedProfilePlayStoryActionHandler _playPendingSnapProSnapFromBaseView:storyType:storyId:startingClientId:] */

void FUN_107a332a4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c07ad00();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be6dca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07ab40();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010be6dca0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07ab40();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_107a33418;
      func_0x00010bddf1c0(param_1);
    }
  }
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_6);
  func_0x00010c11d940(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
LAB_107a33418:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107a33470; end: 107a33697;  */

void FUN_107a33470(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  long lVar16;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined2 uStack_140;
  undefined1 uStack_13e;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_2);
        }
        lVar16 = *(long *)(lStack_128 + unaff_x28 * 8);
        lVar7 = lVar16;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = lVar7;
        func_0x00010c0f79a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar7);
        if (unaff_x26 == 0) {
          if (lVar5 != 0) {
            func_0x000108f34d84(*(undefined8 *)(lVar5 + 0x1f0),1);
          }
        }
        else {
          func_0x00010c23f220(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar16;
          func_0x00010c0f79a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(lVar7);
          _objc_release(lVar16);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar6 != unaff_x28);
      lVar6 = param_2;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_2);
  puVar8 = PTR_PTR_1126b1338;
  _objc_alloc();
  func_0x00010c04dbe0();
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uStack_13e = 1;
  uStack_140 = 1;
  uVar15 = 0;
  puVar10 = puVar8;
  func_0x00010be74620();
  _objc_release(lVar6);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(puVar4);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_188 = 1;
  pcStack_148 = FUN_107a33698;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = unaff_x26;
  lStack_180 = lVar6;
  puStack_178 = puVar8;
  lStack_170 = param_1;
  lStack_168 = lVar5;
  puStack_160 = puVar4;
  lStack_158 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  _objc_retain(uVar13);
  _objc_retain(uVar14);
  puVar4 = puVar10;
  func_0x00010c25b340(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x000100504554();
  _objc_release(puVar4);
  _objc_initWeak(auStack_1a8,lVar7);
  uVar9 = *(undefined8 *)(lVar7 + 0x40);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_13e;
  uVar2 = uStack_140._1_1_;
  uVar1 = (undefined1)uStack_140;
  _objc_copyWeak(auStack_1c0,auStack_1a8);
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  uStack_1b8 = uVar12;
  _objc_retain(uVar13);
  _objc_retain(uVar14);
  uStack_1af = uVar1;
  uStack_1ae = uVar2;
  uStack_1ad = uVar3;
  uStack_1b0 = uVar15;
  func_0x00010c121840(uVar9);
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puVar8);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 107a33698; end: 107a3388b; -[SCUnifiedProfilePlayStoryActionHandler _playDocObjectMyStory:fromBaseView:storyType:storyId:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isForPendingSnapProSnap:] */

void FUN_107a33698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010c25b340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_6f = param_9;
  uStack_70 = param_8;
  func_0x00010c121840(uVar2);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3388c; end: 107a33893;  */

void FUN_107a3388c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serverId_1126356d8);
  return;
}



/* Entry: 107a33894; end: 107a339ab;  */

void FUN_107a33894(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a339ac;
  puStack_78 = &UNK_1109f6c18;
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_70 = uVar1;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = param_2;
  _objc_retain(uVar1);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = *(undefined4 *)(param_1 + 0x50);
  uStack_50 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 107a339ac; end: 107a339fb;  */

void FUN_107a339ac(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a339fc; end: 107a33f03; -[SCUnifiedProfilePlayStoryActionHandler _playDocObjectMyStory:serverIdToViewState:fromBaseView:storyType:storyId:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isForPendingSnapProSnap:] */

void FUN_107a339fc(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  uint param_9)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *unaff_x23;
  ulong uVar12;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined *puStack_d0;
  undefined *puStack_c8;
  uint uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != 0) {
    uStack_98 = param_8;
    uStack_90 = param_5;
    puStack_88 = param_4;
    if (param_6 == 10) {
      uVar3 = *(ulong *)(param_1 + 0x230);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      bVar1 = *(long *)(param_1 + 0x10) == 0;
      uVar11 = 0x69;
      if (bVar1) {
        uVar11 = 0x6a;
      }
      if ((uVar12 & 1) == 0) {
        uVar11 = 7;
      }
      uStack_a8 = 0x54;
      if (param_9._2_1_ == 0) {
        uStack_a8 = uVar11;
      }
    }
    else {
      bVar1 = *(long *)(param_1 + 0x10) == 0;
      uStack_a8 = 0x54;
      if (param_9._2_1_ == 0) {
        uStack_a8 = 7;
      }
      if (param_6 < 10) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
      }
    }
    puVar4 = PTR_PTR_1126b4d28;
    _objc_alloc();
    func_0x00010c04dcc0();
    puStack_78 = puVar4;
    if ((param_9 & 0x1000000) == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar11;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c09df60();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar11;
      _objc_release(uVar5);
    }
    uStack_b0 = 4;
    if (param_9._2_1_ == 0) {
      uStack_b0 = 1;
    }
    uStack_b4 = (uint)(param_6 == 8);
    if ((param_6 & 0xfffffffffffffffe) == 6) {
      uStack_b4 = 1;
    }
    uStack_a0 = CONCAT44(uStack_a0._4_4_,param_9 >> 0x18);
    if (param_6 == 8) {
      uVar5 = *(undefined8 *)(param_1 + 0x220);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010bf1f3c0();
      uStack_b8 = (undefined4)uVar11;
      _objc_release(uVar5);
    }
    else {
      uStack_b8 = 0;
    }
    uStack_bc = param_9 & 0xff;
    lVar6 = *(long *)(param_1 + 0xd0);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010bddf040(param_1);
    }
    puVar4 = PTR_PTR_1126cc2c0;
    _objc_alloc_init();
    if ((uVar12 & 1) == 0) {
      uVar2 = (uint)*(undefined8 *)(param_1 + 0x130);
      func_0x000108f493fc();
      uStack_e8 = 0x3f;
      if ((param_9._2_1_ & uVar2) == 0) {
        uStack_e8 = 0x41;
      }
    }
    else {
      uStack_e8 = 0x61;
      if (!bVar1) {
        uStack_e8 = 0x62;
      }
    }
    puVar7 = PTR_PTR_1126b4d30;
    _objc_alloc(PTR_PTR_1126b4d30);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar8 = puStack_78;
    uStack_f0 = 0;
    func_0x00010c04bca0(puVar7);
    puVar9 = PTR_PTR_1126b4d38;
    puStack_70 = puVar8;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puStack_88;
    param_8 = uStack_98;
    uStack_d6 = (undefined1)uStack_a0;
    uStack_d7 = (undefined1)uStack_b8;
    uStack_d8 = (undefined1)uStack_b4;
    uStack_e8 = uStack_98;
    uStack_e0 = 0;
    uStack_f0 = uStack_80;
    puStack_d0 = puVar4;
    puStack_c8 = puVar4;
    uStack_a0 = param_7;
    func_0x00010c0d4860(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b4d40;
    _objc_alloc();
    lVar6 = param_1 + 0x250;
    _objc_loadWeakRetained(lVar6);
    param_5 = uStack_90;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x00010bff7200();
    _objc_release(lVar6);
    unaff_x23 = PTR_PTR_1126b4d48;
    _objc_alloc();
    _CACurrentMediaTime();
    func_0x00010bff0a00();
    uVar3 = *(ulong *)(param_1 + 0xd8);
    puVar4 = puVar8;
    func_0x00010bf22a20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xd0));
    _objc_release(uVar3);
    _objc_release(unaff_x23);
    param_7 = uStack_a0;
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puStack_c8);
    _objc_release(uStack_80);
    _objc_release(puStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_f8 = FUN_107a33f04;
    lStack_130 = param_1;
    puStack_128 = unaff_x23;
    uStack_120 = param_7;
    uStack_118 = param_8;
    puStack_110 = param_4;
    uStack_108 = param_3;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_retain(uVar12);
    _objc_retain(puVar4);
    uVar10 = uVar3;
    func_0x00010c07ad00();
    if ((uVar10 & 1) == 0) {
      puVar9 = PTR_PTR_1126b4d28;
      _objc_alloc();
      uVar10 = uVar12;
      func_0x00010c259cc0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dcc0();
      _objc_release(uVar10);
      puVar8 = PTR_PTR_1126b2400;
      _objc_alloc();
      func_0x00010c018aa0(0);
      _objc_initWeak(auStack_138,uVar3);
      uVar11 = *(undefined8 *)(uVar3 + 0xe0);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_140,auStack_138);
      _objc_retain(puVar8);
      _objc_retain(puVar9);
      _objc_retain(puVar4);
      func_0x00010bfef0c0(uVar11);
      _objc_release(uVar11);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_138);
      _objc_release(puVar8);
      _objc_release(puVar9);
    }
    _objc_release(puVar4);
    _objc_release(uVar12);
    return;
  }
  return;
}



/* Entry: 107a33f04; end: 107a340df; -[SCUnifiedProfilePlayStoryActionHandler _playStoryWithStoriesSummaryInfo:baseView:] */

void FUN_107a33f04(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07ad00();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b4d28;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dcc0();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b2400;
    _objc_alloc();
    func_0x00010c018aa0(0);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    func_0x00010bfef0c0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a340e0; end: 107a341bb;  */

void FUN_107a340e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a341bc;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a341bc; end: 107a341f3;  */

void FUN_107a341bc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a341f4; end: 107a3446f; -[SCUnifiedProfilePlayStoryActionHandler _presentOperaWithConfig:story:baseView:] */

void FUN_107a341f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar8 = *(long *)(param_1 + 0xd0);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    func_0x00010bddf1c0(param_1);
  }
  puVar1 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar8 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0(puVar1);
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  lVar8 = param_1 + 0x250;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c27aa00(param_3);
  _objc_release(param_3);
  func_0x00010bff7200(puVar2);
  _objc_release(param_5);
  _objc_release(lVar8);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126b4d38;
  func_0x00010c11a700(PTR_PTR_1126b4d38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bf22a20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xd0));
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010bddf040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_4 + 0x120,0);
    return;
  }
  return;
}



/* Entry: 107a34470; end: 107a34497; -[SCUnifiedProfilePlayStoryActionHandler _cleanUpOperaPresenter] */

void FUN_107a34470(long param_1)

{
  func_0x00010bddf040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,0);
  return;
}



/* Entry: 107a34498; end: 107a344df; -[SCUnifiedProfilePlayStoryActionHandler _cleanUpContentProductPlaybackScope] */

void FUN_107a34498(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xd0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a344e0; end: 107a3466b; -[SCUnifiedProfilePlayStoryActionHandler _showActivityFeedForProfileId:snapId:businessProfileAndUserData:onLoadEventId:] */

void FUN_107a344e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x188) == 0) {
    puVar1 = auStack_58;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107a3466c;
    puStack_90 = &UNK_11085b370;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_88 = param_3;
    lStack_80 = param_1;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_6);
    uStack_68 = param_6;
    func_0x00010007380c(puVar2,&puStack_a8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3466c; end: 107a347c7;  */

void FUN_107a3466c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = param_1 + 0x250;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb780();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x250;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aead0;
      _objc_alloc();
      lVar1 = param_1 + 0x250;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02e4c0(puVar3,param_2,lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      *(undefined **)(param_1 + 0x180) = puVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126ce5e0;
      _objc_alloc();
      func_0x00010c058740();
      uVar4 = *(undefined8 *)(param_1 + 0x188);
      *(undefined **)(param_1 + 0x188) = puVar3;
      _objc_release(uVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x168),param_2,*(undefined8 *)(param_1 + 0x188))
      ;
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a347c8; end: 107a348bb; -[SCUnifiedProfilePlayStoryActionHandler _showPublicProfileManagementForProfileId:businessProfileAndUserData:] */

void FUN_107a347c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 400) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107a348bc;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a348bc; end: 107a34a3b;  */

void FUN_107a348bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = param_1 + 0x250;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb780();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x250;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aead0;
      _objc_alloc();
      lVar1 = param_1 + 0x250;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02e4c0(puVar3,param_2,lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      *(undefined **)(param_1 + 0x180) = puVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b0f38;
      _objc_alloc();
      func_0x00010c0581c0();
      uVar4 = *(undefined8 *)(param_1 + 400);
      *(undefined **)(param_1 + 400) = puVar3;
      _objc_release(uVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 200),param_2,*(undefined8 *)(param_1 + 400));
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a34a3c; end: 107a34cd7; -[SCUnifiedProfilePlayStoryActionHandler _presentRepliesTrayWithSnapId:] */

void FUN_107a34a3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x1b0);
    func_0x00010c072560();
    if ((uVar2 & 1) == 0) {
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_initWeak(auStack_68,param_1);
      puVar3 = PTR_PTR_1126b5bb8;
      _objc_alloc(PTR_PTR_1126b5bb8);
      lVar1 = param_1 + 0x250;
      _objc_loadWeakRetained(lVar1);
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c038ee0(0x3fe6666666666666,puVar3);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b6018;
      _objc_alloc();
      func_0x00010c00a1a0();
      puVar5 = PTR_PTR_1126b5cb0;
      _objc_alloc();
      func_0x00010c03e4a0();
      uVar6 = *(undefined8 *)(param_1 + 0x178);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar8 = PTR_PTR_1126b6000;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056860();
      uVar9 = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined **)(param_1 + 0x1e0) = puVar8;
      _objc_release(uVar9);
      _objc_release(uVar6);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x1b0));
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a34cd8; end: 107a34d03;  */

void FUN_107a34cd8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a34d04; end: 107a34e17; -[SCUnifiedProfilePlayStoryActionHandler _launchActivityFeedForProfileId:snapId:onLoadEventId:] */

void FUN_107a34d04(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x198);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107a34e18;
    puStack_68 = &UNK_1109f6ca8;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010bfd3260(uVar1,param_2,param_3,1,1,&puStack_80);
    _objc_release(uVar1);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a34e18; end: 107a34edb;  */

void FUN_107a34e18(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    func_0x00010c2a14c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 107a34edc; end: 107a34ef7;  */

void FUN_107a34edc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb77b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showActivityFeedForProfileId_sn_11258b790,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107a34ef8; end: 107a34fab; -[SCUnifiedProfilePlayStoryActionHandler _launchPublicProfileManagementForProfileId:] */

void FUN_107a34ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a34fac;
  puStack_48 = &UNK_110852bc0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfd3260(uVar1,param_2,param_3,1,1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107a34fac; end: 107a35037;  */

void FUN_107a34fac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c2a14c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107a35038; end: 107a3504f;  */

void FUN_107a35038(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beba770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showPublicProfileManagementForP_11258c380,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 107a35050; end: 107a350e7; -[SCUnifiedProfilePlayStoryActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107a35050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea99b8);
  if ((int)param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x128);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,param_5);
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a350e8; end: 107a35123; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_107a350e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x120,param_3);
  param_1 = param_1 + 0x108;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a35124; end: 107a35157; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_107a35124(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1b8) != 0) {
    func_0x00010be7e180();
    uVar1 = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107a35158; end: 107a35183; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_107a35158(long param_1)

{
  param_1 = param_1 + 0x108;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a35184; end: 107a351af; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidCancelDismissing:] */

void FUN_107a35184(long param_1)

{
  param_1 = param_1 + 0x108;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4dea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a351b0; end: 107a351b3; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_107a351b0(void)

{
  return;
}



/* Entry: 107a351b4; end: 107a351b7; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidFailToPresent:] */

void FUN_107a351b4(void)

{
  return;
}



/* Entry: 107a351b8; end: 107a351eb; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidFinishDismissing:] */

void FUN_107a351b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a351ec; end: 107a351ef; -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidTearDown:] */

void FUN_107a351ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpOperaPresenter_112555610);
  return;
}



/* Entry: 107a351f0; end: 107a351f3; -[SCUnifiedProfilePlayStoryActionHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_107a351f0(void)

{
  return;
}



/* Entry: 107a351f4; end: 107a351f7; -[SCUnifiedProfilePlayStoryActionHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_107a351f4(void)

{
  return;
}



/* Entry: 107a351f8; end: 107a35253; -[SCUnifiedProfilePlayStoryActionHandler activityFeedDidComplete] */

void FUN_107a351f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x168));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107a35254; end: 107a35317; -[SCUnifiedProfilePlayStoryActionHandler activityFeedNeedsRemoval] */

void FUN_107a35254(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a35318; end: 107a35357;  */

void FUN_107a35318(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_1 != 0) {
    func_0x00010bef1520(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a35358; end: 107a353ab; -[SCUnifiedProfilePlayStoryActionHandler didCompleteSpotlightRepliesScope] */

void FUN_107a35358(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c072560(uVar1,param_2,*(undefined8 *)(param_1 + 0x1e0));
  if ((int)uVar1 != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x1b0),param_2,*(undefined8 *)(param_1 + 0x1e0));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}


