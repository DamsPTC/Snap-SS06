/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10522a21c; end: 10522a3b3; -[SCSpectaclesContentPageViewController initWithScreen:mediaProvider:deviceName:contentPageAssetResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10522a21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e7068;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112720054;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112720058;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272005c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272005c) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112720060;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    func_0x00010c20eaa0(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar4);
    func_0x00010c21e060(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10522a3b4; end: 10522b037; -[SCSpectaclesContentPageViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522a3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_398 [8];
  undefined *puStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined **ppuStack_368;
  undefined8 *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined8 *puStack_320;
  undefined1 auStack_318 [8];
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_230;
  double dStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126e7068;
  lStack_128 = param_5;
  _objc_msgSendSuper2(&lStack_128,PTR_s_viewDidLoad_112684cd8);
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar1);
  _objc_release(lVar16);
  puVar2 = PTR_PTR_1126b6688;
  _objc_alloc();
  func_0x00010c00a380();
  uVar12 = *(undefined8 *)(param_5 + _DAT_112720064);
  *(undefined **)(param_5 + _DAT_112720064) = puVar2;
  _objc_release(uVar12);
  func_0x00010be88ea0(param_5);
  lVar16 = param_5;
  func_0x00010bfdf5e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(lVar16);
  lVar16 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010bf8d060();
  _objc_release(lVar16);
  lVar16 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  lVar14 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  lVar15 = param_5;
  uVar8 = param_3;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  lVar3 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0x4030000000000000;
  if (lVar1 != 1) {
    param_2 = 0x4030000000000000;
    param_3 = uVar8;
    uVar12 = param_4;
  }
  func_0x00010c181f80(param_1,uVar12,param_3,param_2);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar16);
  puVar2 = PTR_PTR_1126b6690;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  func_0x00010c042640();
  _objc_release(puVar4);
  func_0x00010c1c8300(0,puVar2);
  puStack_130 = puVar2;
  func_0x00010c1c82c0(0,puVar2);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  dVar19 = *(double *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c014040(dVar19,uVar20,uVar21,uVar22);
  _objc_opt_class(PTR_PTR_1126b6698);
  puVar4 = PTR_PTR_1126b6698;
  _objc_opt_class(PTR_PTR_1126b6698);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(puVar2);
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126b66a0);
  puVar4 = PTR_PTR_1126b66a0;
  _objc_opt_class(PTR_PTR_1126b66a0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(puVar2);
  _objc_release(puVar4);
  func_0x00010c189840(puVar2);
  func_0x00010c18b5e0(puVar2);
  func_0x00010c167680(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar4);
  _objc_storeWeak(param_5 + _DAT_112720068,puVar2);
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  func_0x00010c219b60(puVar2);
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  puStack_148 = puVar4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_158 = puVar4;
  puStack_c0 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  puStack_168 = puVar5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = (undefined *)lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_180 = puVar5;
  puStack_138 = puVar2;
  puStack_b8 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(puVar4);
  _objc_release(puStack_180);
  _objc_release(lStack_170);
  _objc_release(puStack_160);
  _objc_release(puStack_168);
  _objc_release(puStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(puStack_148);
  puVar2 = PTR_PTR_1126b66a8;
  _objc_alloc();
  func_0x00010c013de0(dVar19,uVar20,uVar21,uVar22);
  lVar14 = (long)_DAT_11272006c;
  uVar12 = *(undefined8 *)(param_5 + lVar14);
  *(undefined **)(param_5 + lVar14) = puVar2;
  _objc_release(uVar12);
  uVar17 = 0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar14));
  func_0x00010c21e900(*(undefined8 *)(param_5 + lVar14));
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  _objc_opt_class(*(undefined8 *)(param_5 + lVar14));
  func_0x00010bfe0640();
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar14));
  uVar8 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112720070;
  uVar13 = *(undefined8 *)(param_5 + lVar15);
  *(undefined8 *)(param_5 + lVar15) = uVar12;
  _objc_release(uVar13);
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(uVar8);
  puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  puStack_148 = (undefined *)uVar12;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar14);
  puStack_158 = (undefined *)uVar12;
  uStack_e0 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = *(undefined8 *)(param_5 + lVar15);
  uVar9 = *(undefined8 *)(param_5 + lVar14);
  uStack_d8 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf49420(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_160);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(uVar13);
  _objc_release(puStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(puStack_148);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(dVar19,uVar20,uVar21,uVar22);
  lVar15 = (long)_DAT_112720074;
  uVar12 = *(undefined8 *)(param_5 + lVar15);
  *(undefined **)(param_5 + lVar15) = puVar2;
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar15));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar15));
  _objc_release(puVar2);
  lVar16 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  lVar3 = param_5;
  func_0x00010be4c880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar15));
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar15));
  puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  puStack_148 = (undefined *)uVar12;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar15);
  puStack_158 = (undefined *)uVar12;
  uStack_118 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  puStack_168 = (undefined *)uVar8;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = (undefined *)lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar15);
  puStack_178 = (undefined *)uVar8;
  uStack_110 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  uStack_188 = uVar12;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = (undefined *)lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar15);
  uStack_1a0 = uVar12;
  uStack_108 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar8;
  func_0x00010bfe0640(PTR_PTR_1126b66b0);
  dVar18 = dVar19;
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010bf49420(dVar19 + dVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar3;
  uStack_1b8 = uVar8;
  uStack_100 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + lVar15);
  lStack_1c0 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  lStack_1a8 = lVar3;
  lStack_f8 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_e8 = lVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_190);
  _objc_release(puVar4);
  _objc_release(lVar15);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(uVar8);
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(uVar12);
  _objc_release(lStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a0);
  _objc_release(lStack_198);
  _objc_release(puStack_180);
  _objc_release(uStack_188);
  _objc_release(puStack_178);
  _objc_release(lStack_170);
  _objc_release(puStack_160);
  _objc_release(puStack_168);
  _objc_release(puStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(puStack_148);
  func_0x00010be3a1a0(param_5);
  func_0x00010be67120(param_5);
  _objc_release(lStack_1a8);
  _objc_release(puStack_138);
  puVar2 = puStack_130;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    pcStack_1c8 = FUN_10522b038;
    puStack_260 = &uStack_268;
    uStack_268 = 0;
    uStack_258 = 0x3032000000;
    pcStack_250 = FUN_10522b4b0;
    uStack_248 = 0x10522b4c0;
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uStack_230 = uVar20;
    dStack_228 = dVar19;
    lStack_220 = lVar3;
    lStack_218 = lVar14;
    uStack_210 = uVar8;
    lStack_208 = lVar16;
    uStack_200 = uVar12;
    puStack_1f8 = puVar4;
    uStack_1f0 = uVar13;
    lStack_1e8 = lVar1;
    lStack_1e0 = lVar15;
    lStack_1d8 = param_5;
    puStack_1d0 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    puStack_290 = &uStack_298;
    uStack_298 = 0;
    uStack_288 = 0x3032000000;
    pcStack_280 = FUN_10522b4b0;
    uStack_278 = 0x10522b4c0;
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puStack_240 = puVar5;
    _objc_opt_new();
    uStack_2c8 = 0;
    uStack_2b8 = 0x3032000000;
    pcStack_2b0 = FUN_10522b4b0;
    uStack_2a8 = 0x10522b4c0;
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puStack_2c0 = &uStack_2c8;
    puStack_270 = puVar4;
    _objc_opt_new();
    puStack_2a0 = puVar5;
    _objc_initWeak(auStack_2d0,puVar2);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_308 = 0xc2000000;
    pcStack_300 = FUN_10522b4c8;
    puStack_2f8 = &UNK_110870ee0;
    _objc_copyWeak(auStack_2d8,auStack_2d0);
    puStack_2f0 = &uStack_268;
    puStack_2e8 = &uStack_298;
    ppuVar10 = &puStack_310;
    puStack_2e0 = &uStack_2c8;
    _objc_retainBlock();
    puVar5 = PTR_PTR_1126b66b0;
    _objc_alloc();
    ppuVar11 = ppuVar10;
    (*(code *)ppuVar10[2])(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0800();
    _objc_release(ppuVar11);
    func_0x00010c219b60(puVar5);
    func_0x00010c1c1c20(puVar5);
    lVar16 = (long)_DAT_112720060;
    uVar12 = *(undefined8 *)(puVar2 + lVar16);
    func_0x00010bf4cea0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puStack_350 = puVar4;
    uStack_348 = 0xc2000000;
    pcStack_340 = FUN_10522b6a8;
    puStack_338 = &UNK_110870f10;
    _objc_copyWeak(auStack_318,auStack_2d0);
    puStack_320 = &uStack_268;
    _objc_retain(puVar5);
    ppuVar11 = ppuVar10;
    puStack_330 = puVar5;
    _objc_retain(ppuVar10);
    ppuStack_328 = ppuVar10;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar12);
    _objc_release(ppuVar11);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar2 + lVar16);
    func_0x00010bf4ce80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puStack_390 = puVar4;
    uStack_388 = 0xc2000000;
    pcStack_380 = FUN_10522b7c8;
    puStack_378 = &UNK_110870f10;
    _objc_copyWeak(auStack_358,auStack_2d0);
    puStack_360 = &uStack_298;
    _objc_retain(puVar5);
    ppuVar11 = ppuVar10;
    puStack_370 = puVar5;
    _objc_retain(ppuVar10);
    ppuStack_368 = ppuVar10;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar12);
    _objc_release(ppuVar11);
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar2 + lVar16);
    func_0x00010bf4ce60(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_398,auStack_2d0);
    _objc_retain(puVar5);
    ppuVar11 = ppuVar10;
    _objc_retain(ppuVar10);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar12);
    _objc_release(ppuVar11);
    _objc_release(uVar12);
    _objc_retain(puVar5);
    _objc_release(ppuVar10);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_398);
    _objc_release(ppuStack_368);
    _objc_release(puStack_370);
    _objc_destroyWeak(auStack_358);
    _objc_release(ppuStack_328);
    _objc_release(puStack_330);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_318);
    _objc_release(ppuVar10);
    _objc_destroyWeak(auStack_2d8);
    _objc_destroyWeak(auStack_2d0);
    __Block_object_dispose(&uStack_2c8,8);
    _objc_release(puStack_2a0);
    __Block_object_dispose(&uStack_298,8);
    _objc_release(puStack_270);
    __Block_object_dispose(&uStack_268,8);
    _objc_release(puStack_240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10522b038; end: 10522b4af; -[SCSpectaclesContentPageViewController _loadActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522b038(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10522b4b0;
  uStack_88 = 0x10522b4c0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_new();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_10522b4b0;
  uStack_b8 = 0x10522b4c0;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_80 = puVar1;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_10522b4b0;
  uStack_e8 = 0x10522b4c0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_100 = &uStack_108;
  puStack_b0 = puVar2;
  _objc_opt_new();
  puStack_e0 = puVar1;
  _objc_initWeak(auStack_110,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10522b4c8;
  puStack_138 = &UNK_110870ee0;
  _objc_copyWeak(auStack_118,auStack_110);
  puStack_130 = &uStack_a8;
  puStack_128 = &uStack_d8;
  ppuVar3 = &puStack_150;
  puStack_120 = &uStack_108;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126b66b0;
  _objc_alloc();
  ppuVar4 = ppuVar3;
  (*(code *)ppuVar3[2])(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0800();
  _objc_release(ppuVar4);
  func_0x00010c219b60(puVar2);
  func_0x00010c1c1c20(puVar2);
  lVar6 = (long)_DAT_112720060;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4cea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_10522b6a8;
  puStack_178 = &UNK_110870f10;
  _objc_copyWeak(auStack_158,auStack_110);
  puStack_160 = &uStack_a8;
  _objc_retain(puVar2);
  ppuVar4 = ppuVar3;
  puStack_170 = puVar2;
  _objc_retain(ppuVar3);
  ppuStack_168 = ppuVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4ce80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_10522b7c8;
  puStack_1b8 = &UNK_110870f10;
  _objc_copyWeak(auStack_198,auStack_110);
  puStack_1a0 = &uStack_d8;
  _objc_retain(puVar2);
  ppuVar4 = ppuVar3;
  puStack_1b0 = puVar2;
  _objc_retain(ppuVar3);
  ppuStack_1a8 = ppuVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4ce60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1d8,auStack_110);
  _objc_retain(puVar2);
  ppuVar4 = ppuVar3;
  _objc_retain(ppuVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar5);
  _objc_retain(puVar2);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(ppuStack_1a8);
  _objc_release(puStack_1b0);
  _objc_destroyWeak(auStack_198);
  _objc_release(ppuStack_168);
  _objc_release(puStack_170);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_158);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(puStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(puStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10522b4b0; end: 10522b4c7;  */

void FUN_10522b4b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10522b4c8; end: 10522b6a7;  */

void FUN_10522b4c8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b66b8;
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    lVar8 = param_1;
    func_0x0001090252e8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beedf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b66b8;
    puVar2 = puVar1;
    func_0x0001090252d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beedf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b66b8;
    puVar4 = puVar3;
    func_0x0001090250d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beedf00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    lVar9 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar9 != 0) {
      if (param_2 == 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar11 = *(undefined8 *)(lVar8 + 0x28);
        _objc_retain(uVar11);
        uVar7 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar8 + 0x28) = uVar11;
      }
      else {
        lVar8 = param_2;
        func_0x00010bfe9720();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar7 = *(undefined8 *)(lVar10 + 0x28);
        *(long *)(lVar10 + 0x28) = lVar8;
      }
      _objc_release(uVar7);
      lVar8 = *(long *)(param_1 + 0x28);
      (**(code **)(lVar8 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161aa0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar8);
    }
    _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10522b6a8; end: 10522b777;  */

void FUN_10522b6a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar3 + 0x28);
      _objc_retain(uVar5);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
    }
    else {
      lVar3 = param_2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar3;
    }
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161aa0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10522b778; end: 10522b7c7;  */

void FUN_10522b778(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 10522b7c8; end: 10522b967;  */

void FUN_10522b7c8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar3 + 0x28);
      _objc_retain(uVar5);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
    }
    else {
      lVar3 = param_2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar3;
    }
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161aa0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10522b968; end: 10522bdcb; -[SCSpectaclesContentPageViewController _initPostShareLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522b968(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar10 = (long)_DAT_112720078;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c24dbc0(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  puStack_b8 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_b0 = puVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar3;
  puStack_a0 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_d8 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  puStack_e8 = puVar1;
  puStack_98 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f8 = uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_110 = uVar9;
  uStack_90 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_120 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_88 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  uStack_80 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(puStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(puStack_d8);
  _objc_release(puStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_a8);
  _objc_release(puStack_b0);
  puVar3 = puStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10522bdcc;
  puStack_158 = PTR_PTR_1126e7068;
  puStack_160 = puVar3;
  uStack_150 = uVar5;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_160,PTR_s_viewDidAppear__112684bd0);
  uVar9 = *(undefined8 *)(puVar3 + _DAT_112720054);
  puVar1 = PTR_PTR_1126b66c0;
  func_0x00010c29c680(PTR_PTR_1126b66c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar9);
  _objc_release(puVar1);
  return;
}



/* Entry: 10522bdcc; end: 10522be43; -[SCSpectaclesContentPageViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522bdcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7068;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112720054);
  puVar1 = PTR_PTR_1126b66c0;
  func_0x00010c29c680(PTR_PTR_1126b66c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10522be44; end: 10522be4b; -[SCSpectaclesContentPageViewController loadScrollView] */

undefined8 FUN_10522be44(void)

{
  return 0;
}



/* Entry: 10522be4c; end: 10522bed3; -[SCSpectaclesContentPageViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522be4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112720054);
    puVar2 = PTR_PTR_1126b66c0;
    func_0x00010c29c840(PTR_PTR_1126b66c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3);
    _objc_release(puVar2);
  }
  puStack_38 = PTR_PTR_1126e7068;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10522bed4; end: 10522bf83; -[SCSpectaclesContentPageViewController _observeViewModelUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522bed4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720054);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10522bf84; end: 10522bfcb;  */

void FUN_10522bf84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522bfcc; end: 10522c0ef; -[SCSpectaclesContentPageViewController _updateUIWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522bfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf4d4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272007c;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4d4e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c071b60(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(lVar4,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar4);
  uVar5 = *(ulong *)(param_1 + lVar6);
  func_0x00010c0824c0();
  if ((uVar5 & 1) == 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11272005c));
  }
  func_0x00010be88ea0(param_1);
  func_0x00010be888c0(param_1);
  func_0x00010be88440(param_1,param_2,(uint)uVar2 ^ 1);
  func_0x00010be88720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10522c0f0; end: 10522c12f; -[SCSpectaclesContentPageViewController _refreshLoadingOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c0f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272007c);
  func_0x00010c2381a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112720078),PTR_s_setHidden__1126479f8,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10522c130; end: 10522c16b; -[SCSpectaclesContentPageViewController _refreshWiFiStateIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c130(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112720064);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272007c);
  func_0x00010c2a55a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_updateWithWiFiState__112680e70,uVar1);
  return;
}



/* Entry: 10522c16c; end: 10522c38b; -[SCSpectaclesContentPageViewController _refreshProgressBarIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_110 [9];
  undefined8 auStack_c8 [9];
  
  puVar6 = auStack_110;
  lVar9 = (long)_DAT_11272006c;
  lVar1 = *(long *)(param_5 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11272007c;
  lVar2 = *(long *)(param_5 + lVar11);
  func_0x00010c117840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 != lVar2) {
    lVar2 = *(long *)(param_5 + lVar9);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = *(long *)(param_5 + lVar11);
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c117840(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_5 + lVar9),param_6,uVar4);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_5 + lVar9);
    uVar10 = *(undefined8 *)(param_5 + _DAT_112720058);
    uVar5 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c117840(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252ce0(uVar10,param_6,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f60(uVar7,param_6,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar5);
    lVar1 = param_5 + _DAT_112720068;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4c7c0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      pcVar8 = FUN_10522c38c;
      puVar6 = auStack_c8;
    }
    else {
      if (lVar3 != 0) {
        return;
      }
      pcVar8 = (code *)0x10522c458;
    }
    lVar1 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puVar6[1] = 0xc2000000;
    puVar6[2] = pcVar8;
    puVar6[3] = &UNK_110870f70;
    puVar6[4] = param_5;
    puVar6[5] = param_1;
    puVar6[6] = param_2;
    puVar6[7] = param_3;
    puVar6[8] = param_4;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_6,puVar6,0);
  }
  return;
}



/* Entry: 10522c38c; end: 10522c51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c38c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = (long)_DAT_11272006c;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar2));
  _CGRectGetHeight();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x20) + (long)_DAT_112720068;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c181f80(param_1,uVar3,uVar4,uVar5);
  _objc_release(lVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar2));
  func_0x00010c181140(0,*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112720070));
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10522c520; end: 10522c673; -[SCSpectaclesContentPageViewController _refreshCollectionViewIfNeededWithHasContentSectionViewModelsChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c520(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272007c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c28d3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c28d3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be873a0(param_1);
LAB_10522c584:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  func_0x00010bf6cf20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010bf6cf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be87370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reconfigureAllVisibleItems_11257f678);
        return;
      }
      lVar2 = param_1 + _DAT_112720068;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c128b60();
      goto LAB_10522c584;
    }
  }
  else {
    _objc_release();
  }
  param_1 = param_1 + _DAT_112720068;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f8420();
  _objc_release(param_1);
  return;
}



/* Entry: 10522c674; end: 10522c78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c674(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272007c;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bf6cf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112720068;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
    func_0x00010bf6cf20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c100(lVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bf6cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112720068;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
    func_0x00010bf6cf40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c740(lVar1,param_2,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10522c78c; end: 10522c907; -[SCSpectaclesContentPageViewController _reconfigureItemsAtIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c78c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      uVar1 = param_1 + _DAT_112720068;
      _objc_loadWeakRetained();
      uVar12 = uVar1;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126b6698;
      _objc_opt_class(PTR_PTR_1126b6698);
      uVar10 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar2);
      uVar1 = uVar12;
      if ((uVar10 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar12);
      if (uVar1 != 0) {
        func_0x00010bde4d60(param_1);
      }
      _objc_release(uVar1);
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112720068;
  lVar11 = param_3 + lVar8;
  _objc_loadWeakRetained();
  lVar13 = lVar11;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar13;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar13);
      }
      puVar2 = PTR_PTR_1126b6698;
      uVar10 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar2);
      uVar12 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar2);
      uVar1 = uVar10;
      if ((uVar12 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      if (uVar1 != 0) {
        lVar3 = param_3 + lVar8;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010bfecfa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde4d60(param_3);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar11 != lVar9);
    lVar11 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  lVar8 = param_3 + lVar8;
  _objc_loadWeakRetained();
  lVar6 = lVar8;
  func_0x00010c2a00c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar11 = lVar6;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar6);
      }
      puVar2 = PTR_PTR_1126b66a0;
      uVar10 = *(ulong *)(lVar13 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar2);
      uVar12 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar2);
      uVar1 = uVar10;
      if ((uVar12 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      if (uVar1 != 0) {
        func_0x00010c0824c0(*(undefined8 *)(param_3 + _DAT_11272007c));
        func_0x00010c21e900(uVar10);
      }
      _objc_release(uVar1);
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = (long)_DAT_112720068;
  lVar11 = lVar6 + lVar13;
  _objc_loadWeakRetained();
  lVar8 = lVar11;
  func_0x00010c0deec0();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = lVar6 + lVar13;
      _objc_loadWeakRetained();
      uVar12 = uVar1;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar5 = PTR_PTR_1126b6698;
      _objc_opt_class(PTR_PTR_1126b6698);
      uVar10 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar5);
      uVar1 = uVar12;
      if ((uVar10 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar12);
      if (uVar1 == 0) {
        uVar12 = *(ulong *)(lVar6 + _DAT_11272005c);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar5);
        if ((uVar12 & 1) == 0) {
          lVar7 = lVar6 + lVar13;
          _objc_loadWeakRetained(lVar7);
          func_0x00010bf6e840();
          _objc_release(lVar7);
        }
      }
      else {
        func_0x00010bde4d60(lVar6);
      }
      _objc_release(uVar1);
      _objc_release(puVar2);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
  }
  return;
}



/* Entry: 10522c908; end: 10522cbd7; -[SCSpectaclesContentPageViewController _reconfigureAllVisibleItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522c908(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112720068;
  lVar11 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar13 = lVar11;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar13;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar13);
      }
      puVar1 = PTR_PTR_1126b6698;
      uVar10 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar1);
      uVar12 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar1);
      uVar5 = uVar10;
      if ((uVar12 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar10);
      if (uVar5 != 0) {
        lVar2 = param_1 + lVar8;
        _objc_loadWeakRetained();
        lVar3 = lVar2;
        func_0x00010bfecfa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde4d60(param_1);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar11 != lVar9);
    lVar11 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar4 = lVar8;
  func_0x00010c2a00c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar11 = lVar4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar4);
      }
      puVar1 = PTR_PTR_1126b66a0;
      uVar10 = *(ulong *)(lVar13 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar1);
      uVar12 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar1);
      uVar5 = uVar10;
      if ((uVar12 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar10);
      if (uVar5 != 0) {
        func_0x00010c0824c0(*(undefined8 *)(param_1 + _DAT_11272007c));
        func_0x00010c21e900(uVar10);
      }
      _objc_release(uVar5);
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = (long)_DAT_112720068;
  lVar11 = lVar4 + lVar13;
  _objc_loadWeakRetained();
  lVar8 = lVar11;
  func_0x00010c0deec0();
  _objc_release(lVar11);
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = lVar4 + lVar13;
      _objc_loadWeakRetained();
      uVar12 = uVar5;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126b6698;
      _objc_opt_class(PTR_PTR_1126b6698);
      uVar10 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar6);
      uVar5 = uVar12;
      if ((uVar10 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar12);
      if (uVar5 == 0) {
        uVar12 = *(ulong *)(lVar4 + _DAT_11272005c);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar6);
        if ((uVar12 & 1) == 0) {
          lVar7 = lVar4 + lVar13;
          _objc_loadWeakRetained(lVar7);
          func_0x00010bf6e840();
          _objc_release(lVar7);
        }
      }
      else {
        func_0x00010bde4d60(lVar4);
      }
      _objc_release(uVar5);
      _objc_release(puVar1);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
  }
  return;
}



/* Entry: 10522cbd8; end: 10522cd8f; -[SCSpectaclesContentPageViewController _reconfigureItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522cbd8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112720068;
  lVar7 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar1 = lVar7;
  func_0x00010c0deec0();
  _objc_release(lVar7);
  if (lVar1 != 0) {
    lVar7 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1 + lVar9;
      _objc_loadWeakRetained();
      uVar8 = uVar3;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126b6698;
      _objc_opt_class(PTR_PTR_1126b6698);
      uVar5 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar4);
      uVar3 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar8);
      if (uVar3 == 0) {
        uVar8 = *(ulong *)(param_1 + _DAT_11272005c);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar4);
        if ((uVar8 & 1) == 0) {
          lVar6 = param_1 + lVar9;
          _objc_loadWeakRetained(lVar6);
          func_0x00010bf6e840();
          _objc_release(lVar6);
        }
      }
      else {
        func_0x00010bde4d60(param_1);
      }
      _objc_release(uVar3);
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
  }
  return;
}



/* Entry: 10522cd90; end: 10522d0e7; -[SCSpectaclesContentPageViewController _configureCell:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522cd90(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar11 = (long)_DAT_11272007c;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0824c0(uVar1);
  func_0x00010c21e900(param_3,param_2,uVar1);
  uVar2 = *(ulong *)(param_1 + lVar11);
  func_0x00010bf4d4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_4;
  func_0x00010c1554e0();
  _objc_release(uVar2);
  if (uVar4 < uVar3) {
    uVar5 = *(ulong *)(param_1 + lVar11);
    func_0x00010bf4d4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c1554e0(param_4);
    uVar4 = uVar5;
    func_0x00010c0dfd40(uVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf4bfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf529e0();
    uVar6 = param_4;
    func_0x00010c142240();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    if (uVar6 < uVar2) {
      lVar7 = *(long *)(param_1 + lVar11);
      func_0x00010bf4d4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c1554e0(param_4);
      lVar11 = lVar7;
      func_0x00010c0dfd40(lVar7,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010bf4bfe0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c142240(param_4);
      lVar8 = lVar10;
      func_0x00010c0dfd40(lVar10,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar11);
      _objc_release(lVar7);
      func_0x00010c2226c0(param_3,param_2,lVar8);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = *(undefined8 *)(param_1 + _DAT_11272005c);
      uVar3 = param_4;
      func_0x00010c1554e0(param_4);
      func_0x00010c0df780(puVar9,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar1,param_2,puVar9);
      _objc_release(puVar9);
      if ((int)uVar1 == 0) {
        func_0x00010c1abae0(param_3,param_2,0);
        lVar11 = param_1 + _DAT_112720068;
        _objc_loadWeakRetained(lVar11);
        func_0x00010bf6e840();
        _objc_release(lVar11);
      }
      else {
        func_0x00010c1abae0(param_3,param_2,1);
      }
      lVar11 = lVar8;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 == 0) {
        func_0x00010c181f60(param_3,param_2,0);
      }
      else {
        lVar7 = (long)_DAT_112720058;
        lVar10 = *(long *)(param_1 + lVar7);
        lVar11 = lVar8;
        func_0x00010bf4c700(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf03900(lVar10,param_2,lVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar10 == 0) {
          lVar11 = lVar8;
          func_0x00010c0c6c20();
          if ((lVar11 == 1) && (lVar11 = lVar8, func_0x00010bf4d6e0(), lVar11 != 5)) {
            func_0x00010c1abb20(param_3,param_2,1);
          }
          uVar1 = *(undefined8 *)(param_1 + lVar7);
          lVar11 = lVar8;
          func_0x00010bf4c700(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252ce0(uVar1,param_2,lVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          func_0x00010c181f60(param_3,param_2,uVar1);
          _objc_release(uVar1);
        }
        else {
          func_0x00010c1abb20(param_3,param_2,0);
          func_0x00010c181f60(param_3,param_2,lVar10);
        }
        _objc_release(lVar10);
      }
      _objc_release(lVar8);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10522d0e8; end: 10522d1fb; -[SCSpectaclesContentPageViewController _configureHeader:inSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d0e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11272007c;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0824c0(uVar1);
  func_0x00010c21e900(param_3,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272005c);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1,param_2,puVar2);
  func_0x00010c1abae0(param_3,param_2,uVar1);
  _objc_release(puVar2);
  uVar3 = *(ulong *)(param_1 + lVar6);
  func_0x00010bf4d4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  if (param_4 < uVar4) {
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf4d4e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10522d1fc; end: 10522d263; -[SCSpectaclesContentPageViewController _actionBarImportButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d1fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720080;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b66c0;
    func_0x00010bfea3e0(PTR_PTR_1126b66c0,param_2,*(undefined8 *)(param_1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07700(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10522d264; end: 10522d2cb; -[SCSpectaclesContentPageViewController _actionBarExportButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720080;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b66c0;
    func_0x00010bf9cfc0(PTR_PTR_1126b66c0,param_2,*(undefined8 *)(param_1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07700(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10522d2cc; end: 10522d54b; -[SCSpectaclesContentPageViewController _actionBarDeleteButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d2cc(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112720080;
  lVar1 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  lVar9 = 0;
  if (lVar1 != 0) {
    lVar9 = *(long *)(param_1 + lVar10);
    _objc_retain(lVar9);
    puVar2 = auStack_80;
    _objc_initWeak(puVar2,param_1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x0001090250d8();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10522d54c;
    puStack_98 = &UNK_110849410;
    param_2 = auStack_80;
    _objc_copyWeak(auStack_88,param_2);
    lStack_90 = lVar9;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000109025078();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar5 = *(ulong *)(param_1 + lVar10);
    func_0x00010bf529e0();
    if (uVar5 < 2) {
      func_0x000109025420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000109025408();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar7 = puVar6;
    func_0x0001090253f0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c10eda0(param_1);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release();
    unaff_x27 = &puStack_b0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x28));
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  func_0x00010bf84b00(param_2);
  lVar9 = lVar9 + 0x28;
  _objc_loadWeakRetained(lVar9);
  puVar3 = PTR_PTR_1126b66c0;
  func_0x00010bf6b940(PTR_PTR_1126b66c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07700(lVar9);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 10522d54c; end: 10522d5b7;  */

void FUN_10522d54c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b66c0;
  func_0x00010bf6b940(PTR_PTR_1126b66c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07700(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522d5b8; end: 10522d5c7;  */

void FUN_10522d5b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10522d5c8; end: 10522d63f; -[SCSpectaclesContentPageViewController _emitActionAndResetSelectionState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d5c8(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf8dd80(*(undefined8 *)(param_1 + _DAT_112720054));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10522d640;
  puStack_30 = &UNK_110870fc0;
  lStack_28 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_11272005c),param_2,&puStack_48);
  return;
}



/* Entry: 10522d640; end: 10522d74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d640(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x20);
  lVar7 = (long)_DAT_112720068;
  _objc_retain(param_2);
  uVar1 = lVar6 + lVar7;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c067fc0(param_2);
  func_0x00010bfed020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c262e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b66a0;
  _objc_opt_class(PTR_PTR_1126b66a0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010be49ea0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10522d750; end: 10522d8b3; -[SCSpectaclesContentPageViewController _refreshSelectedContentIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = (long)_DAT_112720068;
  lVar3 = param_5 + lVar5;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0xc2000000;
  lVar2 = lVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112720080;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  *(long *)(param_5 + lVar6) = lVar2;
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_5 + lVar5;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf4c7c0();
  uVar4 = uVar7;
  _objc_release(lVar3);
  lVar3 = *(long *)(param_5 + lVar6);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bfe0640(PTR_PTR_1126b66b0);
  }
  lVar5 = param_5 + lVar5;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c181f80(uVar7,param_2,uVar4,param_4);
  _objc_release(lVar5);
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_112720074),param_6,lVar3 == 0);
  return;
}



/* Entry: 10522d8b4; end: 10522d99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d8b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272007c);
  _objc_retain(param_2);
  func_0x00010bf4d4e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_2);
  uVar1 = uVar5;
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(param_2);
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10522d99c; end: 10522dbc7; -[SCSpectaclesContentPageViewController _enterSelectionModeInSection:sectionHeader:shouldSelectAllItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522d99c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  _objc_retain(param_4);
  lVar8 = (long)_DAT_11272005c;
  uVar10 = *(ulong *)(param_1 + lVar8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar10,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar10 & 1) == 0) {
    func_0x00010c1abae0(param_4,param_2,1);
    uVar11 = *(undefined8 *)(param_1 + lVar8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010be873c0(param_1,param_2,param_3);
    if (param_5 != 0) {
      lVar12 = (long)_DAT_112720068;
      lVar8 = param_1 + lVar12;
      _objc_loadWeakRetained();
      lVar9 = lVar8;
      func_0x00010c0deec0();
      _objc_release(lVar8);
      if (0 < lVar9) {
        lVar8 = 0;
        lVar9 = (long)_DAT_11272007c;
        do {
          uVar2 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010bf4d4e0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar11;
          func_0x00010bf4bfe0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf014c0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar11);
          _objc_release(uVar2);
          if ((int)uVar5 != 0) {
            lVar6 = param_1 + lVar12;
            _objc_loadWeakRetained(lVar6);
            puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar8,param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c158b60(lVar6,param_2,puVar1,1,0);
            _objc_release(puVar1);
            _objc_release(lVar6);
          }
          lVar8 = lVar8 + 1;
          lVar6 = param_1 + lVar12;
          _objc_loadWeakRetained();
          lVar7 = lVar6;
          func_0x00010c0deec0();
          _objc_release(lVar6);
        } while (lVar8 < lVar7);
      }
      func_0x00010be88980(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10522dbc8; end: 10522dca3; -[SCSpectaclesContentPageViewController _leaveSelectionModeInSection:sectionHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522dbc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11272005c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1abae0(param_4,param_2,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010be873c0(param_1,param_2,param_3);
    func_0x00010be88980(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10522dca4; end: 10522de0f; -[SCSpectaclesContentPageViewController _leaveSelectionModeIfNoSelectedItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522dca4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112720068;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar4 = param_1 + lVar8;
    _objc_loadWeakRetained();
    puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c262e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b66a0;
    _objc_opt_class(PTR_PTR_1126b66a0);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    func_0x00010be49ea0(param_1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10522de10; end: 10522de3f;  */

bool FUN_10522de10(long param_1,long param_2)

{
  func_0x00010c1554e0(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 10522de40; end: 10522de87; -[SCSpectaclesContentPageViewController numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10522de40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272007c);
  func_0x00010bf4d4e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10522de88; end: 10522df0f; -[SCSpectaclesContentPageViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10522de88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272007c);
  func_0x00010bf4d4e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4bfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10522df10; end: 10522dfcb; -[SCSpectaclesContentPageViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522df10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6698;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c18b5e0(uVar2,param_2,param_1);
  func_0x00010c16a920(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_112720060));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10522dfcc; end: 10522e1c3; -[SCSpectaclesContentPageViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10522dfcc(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar9 = (long)_DAT_11272007c;
  uVar1 = *(ulong *)(param_4 + lVar9);
  func_0x00010bf4d4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_8;
  func_0x00010c1554e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar4 = *(ulong *)(param_4 + lVar9);
    func_0x00010bf4d4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_8;
    func_0x00010c1554e0(param_8);
    uVar3 = uVar4;
    func_0x00010c0dfd40(uVar4,param_5,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4bfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    uVar5 = param_8;
    func_0x00010c142240();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    if (uVar5 < uVar1) {
      lVar6 = *(long *)(param_4 + lVar9);
      func_0x00010bf4d4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_8;
      func_0x00010c1554e0(param_8);
      lVar9 = lVar6;
      func_0x00010c0dfd40(lVar6,param_5,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00010bf4bfe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_8;
      func_0x00010c142240(param_8);
      lVar8 = lVar7;
      func_0x00010c0dfd40(lVar7,param_5,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar9);
      _objc_release(lVar6);
      func_0x00010bfb68e0(param_6);
      lVar9 = lVar8;
      func_0x00010c0c6c20();
      dVar10 = param_3 * 0.5625;
      if (lVar9 != 1) {
        dVar10 = param_3 * 0.5 * 0.75;
        param_3 = param_3 * 0.5;
      }
      _objc_release(lVar8);
      goto LAB_10522e18c;
    }
  }
  param_3 = *(double *)PTR__CGSizeZero_110347620;
  dVar10 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_10522e18c:
  _objc_release(param_8);
  _objc_release(param_6);
  auVar11._8_8_ = dVar10;
  auVar11._0_8_ = param_3;
  return auVar11;
}



/* Entry: 10522e1c4; end: 10522e24f; -[SCSpectaclesContentPageViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_10522e1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b6698;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bde4d60(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10522e250; end: 10522e343; -[SCSpectaclesContentPageViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_10522e250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b66a0;
    _objc_opt_class(PTR_PTR_1126b66a0);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf6e120(param_3,param_2,param_4,puVar1,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c18b5e0(uVar3,param_2,param_1);
    uVar2 = param_5;
    func_0x00010c1554e0(param_5);
    func_0x00010bde5160(param_1,param_2,uVar3,uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10522e344; end: 10522e367; -[SCSpectaclesContentPageViewController collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_10522e344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(param_6);
  auVar1._8_8_ = 0x4042000000000000;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10522e368; end: 10522e42b; -[SCSpectaclesContentPageViewController collectionView:shouldSelectItemAtIndexPath:] */

ulong FUN_10522e368(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010bf33b60(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6698;
  _objc_opt_class(PTR_PTR_1126b6698);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b6608;
  _objc_opt_class(PTR_PTR_1126b6608);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf014c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10522e42c; end: 10522e55f; -[SCSpectaclesContentPageViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e42c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1554e0(param_4);
  func_0x00010bfed020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c262e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b66a0;
  _objc_opt_class(PTR_PTR_1126b66a0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c1554e0(param_4);
  func_0x00010be0a8a0(param_1);
  _objc_release(uVar1);
  lVar5 = param_1 + _DAT_112720068;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c158b60();
  _objc_release(param_4);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be88990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshSelectedContentIds_11257fc00);
  return;
}



/* Entry: 10522e560; end: 10522e5b3; -[SCSpectaclesContentPageViewController collectionView:didDeselectItemAtIndexPath:] */

void FUN_10522e560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010be88980(param_1);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be49e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__leaveSelectionModeIfNoSelectedI_112570140,uVar1);
  return;
}



/* Entry: 10522e5b4; end: 10522e5ff; -[SCSpectaclesContentPageViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e5b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112720054);
  puVar1 = PTR_PTR_1126b66c0;
  func_0x00010bf9b400(PTR_PTR_1126b66c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10522e600; end: 10522e683; -[SCSpectaclesContentPageViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e600(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7068;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if (param_4 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112720054);
    puVar1 = PTR_PTR_1126b66c0;
    func_0x00010bf9b400(PTR_PTR_1126b66c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10522e684; end: 10522e80f; -[SCSpectaclesContentPageViewController contentPageCellDidClickActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e684(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11272007c);
  func_0x00010c0824c0();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_11272005c);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar3 = param_3;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b6608;
      _objc_opt_class(PTR_PTR_1126b6608);
      puVar5 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar4);
      puVar4 = puVar3;
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar3);
      puVar5 = puVar4;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR_PTR_1126b66c0;
      if (puVar5 != (undefined *)0x0) {
        uVar9 = *(undefined8 *)(param_1 + _DAT_112720054);
        puVar5 = puVar4;
        func_0x00010bf4c700();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfea3e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bf8dd80(uVar9);
        _objc_release(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar4 = puVar7;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_3 + _DAT_112720068;
    _objc_loadWeakRetained();
    puVar3 = puVar4;
    func_0x00010bfed100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c1554e0(puVar3);
      iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11272005c);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar4);
      if (iVar1 == 0) {
        func_0x00010be0a8a0(param_3);
      }
      else {
        func_0x00010be49ea0();
      }
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10522e810; end: 10522e91b; -[SCSpectaclesContentPageViewController contentPageSectionHeaderDidTapSelectAllButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e810(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_112720068;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfed100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x00010c1554e0(lVar2);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11272005c);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar4,param_2,puVar3);
      _objc_release(puVar3);
      if ((int)uVar4 == 0) {
        func_0x00010be0a8a0(param_1,param_2,lVar1,param_3,1);
      }
      else {
        func_0x00010be49ea0();
      }
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10522e91c; end: 10522e97f; -[SCSpectaclesContentPageViewController wifiIconViewDidRefreshImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e91c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112720064) != param_3) {
    return;
  }
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522e980; end: 10522e9e3; -[SCSpectaclesContentPageViewController didTapOnWiFiIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e980(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_112720064) != param_3) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112720054);
  puVar1 = PTR_PTR_1126b66c0;
  func_0x00010c2697c0(PTR_PTR_1126b66c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10522e9e4; end: 10522e9ef; -[SCSpectaclesContentPageViewController defaultProjectNameV2] */

void FUN_10522e9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spectacles_11266fb40);
  return;
}



/* Entry: 10522e9f0; end: 10522e9fb; -[SCSpectaclesContentPageViewController defaultSubProjectName] */

undefined ** FUN_10522e9f0(void)

{
  return &PTR____CFConstantStringClassReference_110dcc278;
}



/* Entry: 10522e9fc; end: 10522eae7; -[SCSpectaclesContentPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522e9fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272005c,0);
  _objc_storeStrong(param_1 + _DAT_112720080,0);
  _objc_storeStrong(param_1 + _DAT_112720078,0);
  _objc_storeStrong(param_1 + _DAT_112720070,0);
  _objc_storeStrong(param_1 + _DAT_11272006c,0);
  _objc_storeStrong(param_1 + _DAT_112720064,0);
  _objc_destroyWeak(param_1 + _DAT_112720068);
  _objc_storeStrong(param_1 + _DAT_112720074,0);
  _objc_storeStrong(param_1 + _DAT_11272007c,0);
  _objc_storeStrong(param_1 + _DAT_112720084,0);
  _objc_storeStrong(param_1 + _DAT_112720060,0);
  _objc_storeStrong(param_1 + _DAT_112720058,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720054,0);
  return;
}



/* Entry: 10522eae8; end: 10522ebef; -[SCSpectaclesContentPageWiFiIconView initWithDelegate:assetResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10522eae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112720088),param_3);
    lVar4 = (long)_DAT_11272008c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    func_0x00010c21e900(puVar1);
    func_0x00010c182220(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10522ebf0; end: 10522ed2b; -[SCSpectaclesContentPageWiFiIconView updateWithWiFiState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522ebf0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + _DAT_112720090) != param_3) || (*(long *)(param_1 + _DAT_112720094) == 0)
     ) {
    *(long *)(param_1 + _DAT_112720090) = param_3;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272008c);
    func_0x00010bfe57e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112720094;
    _objc_retain();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    puVar3 = auStack_48;
    _objc_copyWeak(puVar3,auStack_38);
    lStack_40 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10522ed2c; end: 10522ed9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522ed2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x28) == *(long *)(lVar1 + _DAT_112720090)) {
      func_0x00010bee4a60(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10522ed9c; end: 10522ee9b; -[SCSpectaclesContentPageWiFiIconView _updateWithNewImage:wifiState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522ed9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1677c0(0,param_1);
  func_0x00010c1a7f60(param_1,param_2,0);
  func_0x00010c1a9f00(param_1,param_2,param_3);
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10522ee9c;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x10522eea8;
  puStack_70 = &UNK_1108471e0;
  lStack_68 = param_1;
  uStack_60 = param_4;
  lStack_38 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x30000,
                      &puStack_58,&puStack_88);
  param_1 = param_1 + _DAT_112720088;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a53a0();
  _objc_release(param_1);
  return;
}



/* Entry: 10522ee9c; end: 10522eeb3;  */

void FUN_10522ee9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10522eeb4; end: 10522ef5b; -[SCSpectaclesContentPageWiFiIconView _fadeOutIfNeededWithWifiState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522eeb4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((param_3 == 1) && (*(long *)(param_1 + _DAT_112720090) == 1)) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10522ef5c;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10522ef68;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fd3333333333333,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,0x30000,&puStack_38,&puStack_60);
  }
  return;
}



/* Entry: 10522ef5c; end: 10522ef73;  */

void FUN_10522ef5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10522ef74; end: 10522efaf; -[SCSpectaclesContentPageWiFiIconView _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522ef74(long param_1)

{
  param_1 = param_1 + _DAT_112720088;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522efb0; end: 10522effb; -[SCSpectaclesContentPageWiFiIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522efb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720094,0);
  _objc_storeStrong(param_1 + _DAT_11272008c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720088);
  return;
}



/* Entry: 10522effc; end: 10522f003; -[SCSpectaclesContentPageMemoriesSaveDialogOption shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10522effc(void)

{
  return 0;
}



/* Entry: 10522f004; end: 10522f00f; -[SCSpectaclesContentPageMemoriesSaveDialogOption pushToValdiMarshaller:] */

void FUN_10522f004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 10522f010; end: 10522f017; -[SCSpectaclesContentPageMemoriesSaveDialogOption saveOption] */

undefined4 FUN_10522f010(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10522f018; end: 10522f01f; -[SCSpectaclesContentPageMemoriesSaveDialogOption setSaveOption:] */

void FUN_10522f018(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10522f020; end: 10522f027; -[SCSpectaclesContentPageMemoriesSaveDialogOption optionText] */

undefined8 FUN_10522f020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10522f028; end: 10522f02f; -[SCSpectaclesContentPageMemoriesSaveDialogOption setOptionText:] */

void FUN_10522f028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10522f030; end: 10522f03b; -[SCSpectaclesContentPageMemoriesSaveDialogOption .cxx_destruct] */

void FUN_10522f030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10522f03c; end: 10522f237; -[SCSpectaclesContentPageMemoriesSaveDialogContext initWithSaveOptionClickedBlock:dismissBlock:autoSaveManager:] */

undefined8 *
FUN_10522f03c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  iVar6 = (int)puVar1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR_PTR_1126e7078;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    _objc_retainBlock();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar7);
    uVar7 = param_4;
    _objc_retainBlock();
    uVar8 = puVar1[2];
    puVar1[2] = uVar7;
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar7 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release();
    func_0x000109025438();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[7];
    puVar1[7] = uVar7;
    _objc_release();
    func_0x000109025450();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[6];
    puVar1[6] = uVar8;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126b66c8;
    _objc_opt_new();
    puVar4 = puVar3;
    func_0x00010c1f5980();
    func_0x000109025468();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5ea0(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b66c8;
    _objc_opt_new();
    puVar5 = puVar4;
    func_0x00010c1f5980();
    func_0x000109025480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5ea0(puVar4);
    _objc_release(puVar5);
    iVar6 = (int)&puStack_68;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar3;
    puStack_60 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[5];
    puVar1[5] = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10522f238;
  puStack_b0 = puVar1;
  uStack_a8 = param_5;
  uStack_a0 = param_4;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (iVar6 != 0) {
    _objc_initWeak(&uStack_b8,puVar2);
    uVar7 = puVar2[3];
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar2 + 8;
    _objc_loadWeakRetained(puVar2);
    puVar1 = puVar2;
    func_0x00010c10fd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,&uStack_b8);
    func_0x00010c27cce0(uVar7);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_c0);
    puVar1 = &uStack_b8;
    _objc_destroyWeak(puVar1);
    return puVar1;
  }
  uVar7 = puVar2[3];
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80780();
  _objc_release(uVar7);
  (**(code **)(puVar2[1] + 0x10))(puVar2[1],1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_onDismiss_112616920);
  return puVar2;
}



/* Entry: 10522f238; end: 10522f383; -[SCSpectaclesContentPageMemoriesSaveDialogContext onSaveOptionClickedWithOption:] */

void FUN_10522f238(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c10fd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c27cce0(uVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80780();
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onDismiss_112616920);
  return;
}



/* Entry: 10522f384; end: 10522f3b7;  */

void FUN_10522f384(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522f3b8; end: 10522f3c3; -[SCSpectaclesContentPageMemoriesSaveDialogContext onDismiss] */

void FUN_10522f3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010522f3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10522f3c4; end: 10522f3cb; -[SCSpectaclesContentPageMemoriesSaveDialogContext shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10522f3c4(void)

{
  return 0;
}



/* Entry: 10522f3cc; end: 10522f3d7; -[SCSpectaclesContentPageMemoriesSaveDialogContext pushToValdiMarshaller:] */

void FUN_10522f3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 10522f3d8; end: 10522f407; -[SCSpectaclesContentPageMemoriesSaveDialogContext _didTryEnablingSaveToCameraRoll:] */

void FUN_10522f3d8(long param_1,undefined8 param_2,uint param_3)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onDismiss_112616920);
  return;
}



/* Entry: 10522f408; end: 10522f40f; -[SCSpectaclesContentPageMemoriesSaveDialogContext isNewUser] */

undefined1 FUN_10522f408(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10522f410; end: 10522f417; -[SCSpectaclesContentPageMemoriesSaveDialogContext setIsNewUser:] */

void FUN_10522f410(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10522f418; end: 10522f41f; -[SCSpectaclesContentPageMemoriesSaveDialogContext options] */

undefined8 FUN_10522f418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10522f420; end: 10522f427; -[SCSpectaclesContentPageMemoriesSaveDialogContext setOptions:] */

void FUN_10522f420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10522f428; end: 10522f42f; -[SCSpectaclesContentPageMemoriesSaveDialogContext dialogBody] */

undefined8 FUN_10522f428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10522f430; end: 10522f437; -[SCSpectaclesContentPageMemoriesSaveDialogContext setDialogBody:] */

void FUN_10522f430(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10522f438; end: 10522f43f; -[SCSpectaclesContentPageMemoriesSaveDialogContext dialogTitle] */

undefined8 FUN_10522f438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10522f440; end: 10522f447; -[SCSpectaclesContentPageMemoriesSaveDialogContext setDialogTitle:] */

void FUN_10522f440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10522f448; end: 10522f45f; -[SCSpectaclesContentPageMemoriesSaveDialogContext delegate] */

void FUN_10522f448(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10522f460; end: 10522f46b; -[SCSpectaclesContentPageMemoriesSaveDialogContext setDelegate:] */

void FUN_10522f460(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10522f46c; end: 10522f4d3; -[SCSpectaclesContentPageMemoriesSaveDialogContext .cxx_destruct] */

void FUN_10522f46c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10522f4d4; end: 10522f4df; -[SCSpectaclesContentPageMemoriesSaveDialogPresentingTransition transitionDuration:] */

undefined8 FUN_10522f4d4(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10522f4e0; end: 10522f7e3; -[SCSpectaclesContentPageMemoriesSaveDialogPresentingTransition animateTransition:] */

void FUN_10522f4e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined *puStack_108;
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
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10522f7e4;
  puStack_88 = &UNK_110841f80;
  _objc_retain(puVar1);
  puStack_80 = puVar1;
  _objc_retain(param_3);
  ppuVar5 = &puStack_a0;
  uStack_78 = param_3;
  _objc_retainBlock();
  uVar3 = param_3;
  func_0x00010c06c000();
  if ((uVar3 & 1) == 0) {
    (*(code *)ppuVar5[2])(ppuVar5);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGAffineTransformMakeTranslation(&uStack_d0,0,in_d3);
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    func_0x00010c219960(uVar4,param_2,&uStack_100);
    _objc_release(uVar3);
    puVar6 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    func_0x00010c1d4bc0(0);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1,param_2,0);
    puStack_138 = puVar2;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x10522f810;
    puStack_120 = &UNK_110848ba8;
    _objc_retain(param_3);
    uStack_118 = param_3;
    _objc_retain(uVar4);
    uStack_110 = uVar4;
    _objc_retain(puVar1);
    puStack_160 = puVar2;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10522f898;
    puStack_148 = &UNK_110842508;
    puStack_108 = puVar1;
    _objc_retain(ppuVar5);
    ppuStack_140 = ppuVar5;
    func_0x00010bf03420(uVar7,puVar6,param_2,&puStack_138,&puStack_160);
    _objc_release(ppuStack_140);
    _objc_release(puStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
  }
  _objc_release(ppuVar5);
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10522f7e4; end: 10522f897;  */

void FUN_10522f7e4(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 10522f898; end: 10522f8a3;  */

void FUN_10522f898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010522f8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10522f8a4; end: 10522f8bf; -[SCSpectaclesContentPageMemoriesSaveDialogTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10522f8a4(void)

{
  _objc_alloc_init(PTR_PTR_1126b66d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10522f8c0; end: 10522f9b3; -[SCSpectaclesContentPageMemoriesSaveDialogViewController initWithContext:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10522f8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7080;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127200c0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127200c4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b66d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127200c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127200c8) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b20(puVar1);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10522f9b4; end: 10522fcff; -[SCSpectaclesContentPageMemoriesSaveDialogViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522f9b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e7080;
  uStack_98 = param_1;
  _objc_msgSendSuper2(&uStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b66e0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b66e8;
  _objc_alloc_init(PTR_PTR_1126b66e8);
  func_0x00010c061d40();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  puVar2 = puVar1;
  func_0x00010c295200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  puStack_a8 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_b8 = puVar2;
  puStack_88 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  puStack_c8 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_e0 = puVar4;
  puStack_80 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puStack_e0);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10522fd00;
  puStack_118 = PTR_PTR_1126e7080;
  puStack_120 = puVar2;
  uStack_110 = param_1;
  uStack_108 = uVar3;
  puStack_100 = puVar9;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_120,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10522fd00; end: 10522fdab; -[SCSpectaclesContentPageMemoriesSaveDialogViewController viewDidAppear:] */

void FUN_10522fd00(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e7080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}


