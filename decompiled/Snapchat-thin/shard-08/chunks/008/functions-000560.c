/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066a8004; end: 1066a8083; -[SCLensExplorerRecentBannerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8004(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dca8,0);
  _objc_storeStrong(param_1 + _DAT_11274dc98,0);
  _objc_storeStrong(param_1 + _DAT_11274dc9c,0);
  _objc_storeStrong(param_1 + _DAT_11274dcac,0);
  _objc_storeStrong(param_1 + _DAT_11274dca4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dca0,0);
  return;
}



/* Entry: 1066a8084; end: 1066a80f7; -[SCLensExplorerCreatorCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066a8084(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f25f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274dcb4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274dcb4) = puVar2;
    _objc_release(uVar3);
    func_0x00010be3b0a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066a80f8; end: 1066a8c93; -[SCLensExplorerCreatorCollectionViewCell _initialSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a80f8(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
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
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  puStack_138 = puVar1;
  func_0x00010c178280();
  lVar11 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar11);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3);
  _objc_release(puVar1);
  lVar11 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf132a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf5b580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf5bbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf320c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c1125a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c1125a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c1125c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b220();
  dVar15 = param_1;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b1c0();
  _objc_release(puVar1);
  puStack_208 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_11274dcb8;
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  uStack_148 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar12);
  uStack_158 = uVar2;
  uStack_130 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  uStack_168 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_170 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  uStack_178 = uVar3;
  uStack_128 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  uStack_188 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar12);
  uStack_198 = uVar2;
  uStack_120 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  uStack_1a8 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a0 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b0 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11274dcbc;
  uVar4 = *(undefined8 *)(param_3 + lVar11);
  uStack_1b8 = uVar3;
  uStack_118 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  uStack_1c0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = uVar2;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar11);
  uStack_1d0 = uVar4;
  uStack_110 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  uStack_1d8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e0 = uVar2;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar11);
  uStack_1e8 = uVar3;
  uStack_108 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f0 = uVar2;
  func_0x00010bf49420(dVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar11);
  uStack_1f8 = uVar2;
  uStack_100 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar3;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274dcc0;
  uVar4 = *(undefined8 *)(param_3 + lVar13);
  uStack_210 = uVar3;
  uStack_f8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar11);
  uStack_218 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_220 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar13);
  uStack_228 = uVar4;
  uStack_f0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar11);
  uStack_230 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_238 = uVar2;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar13);
  uStack_240 = uVar3;
  uStack_e8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  uStack_248 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = -param_1;
  uStack_250 = uVar2;
  func_0x00010bf493c0(dVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11274dcc4;
  uVar3 = *(undefined8 *)(param_3 + lVar14);
  uStack_258 = uVar4;
  uStack_e0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar13);
  uStack_260 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_268 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar14);
  uStack_270 = uVar3;
  uStack_d8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar13);
  uStack_278 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_280 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar14);
  uStack_288 = uVar4;
  uStack_d0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar13);
  uStack_290 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274dcc8;
  uVar4 = *(undefined8 *)(param_3 + lVar13);
  uStack_2a0 = uVar3;
  uStack_c8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar11);
  uStack_2a8 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2b0 = uVar2;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + lVar13);
  uStack_2b8 = uVar4;
  uStack_c0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  uStack_2c0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c8 = uVar2;
  func_0x00010bf493c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar13);
  uStack_2d0 = uVar3;
  uStack_b8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar12);
  uStack_2d8 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_2e0 = uVar2;
  func_0x00010bf493c0(dVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar13);
  uStack_2e8 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493c0(dVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11274dccc;
  uVar7 = *(undefined8 *)(param_3 + lVar11);
  uStack_a8 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010bf34860(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar11);
  uStack_a0 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_208);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(lStack_1b0);
  _objc_release(lStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_198);
  _objc_release(lStack_190);
  _objc_release(lStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_178);
  _objc_release(lStack_170);
  _objc_release(lStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(uStack_148);
  puVar1 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_1066a8c94;
  puStack_318 = PTR_PTR_1126f25f8;
  puStack_320 = puVar1;
  uStack_310 = uVar10;
  uStack_308 = uVar5;
  puStack_300 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_320,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,puVar1);
  func_0x00010c1f9360(puVar1);
  func_0x00010bf86d80(*(undefined8 *)(puVar1 + _DAT_11274dcb4));
  return;
}



/* Entry: 1066a8c94; end: 1066a8cfb; -[SCLensExplorerCreatorCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8c94(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f25f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,param_1);
  func_0x00010c1f9360(param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274dcb4));
  return;
}



/* Entry: 1066a8cfc; end: 1066a8dab; -[SCLensExplorerCreatorCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8cfc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f25f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf19a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274dcb8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1066a8dac; end: 1066a8e5f; -[SCLensExplorerCreatorCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066a8dac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f25f8;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb780();
    _objc_release(param_3);
    func_0x00010c202c80(param_1,param_2,plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1066a8e60; end: 1066a8e63; -[SCLensExplorerCreatorCollectionViewCell setupKarma] */

void FUN_1066a8e60(void)

{
  return;
}



/* Entry: 1066a8e64; end: 1066a8e73; -[SCLensExplorerCreatorCollectionViewCell _didTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dcd0),PTR_s_performActionOnTap_11261ba70);
  return;
}



/* Entry: 1066a8e74; end: 1066a8e77; -[SCLensExplorerCreatorCollectionViewCell handleTapOnBitmojiFromAvatarView:] */

void FUN_1066a8e74(void)

{
  return;
}



/* Entry: 1066a8e78; end: 1066a8e87; -[SCLensExplorerCreatorCollectionViewCell handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dcd0),
             PTR_s_performActionOnStoryTapFromView__11261ba68);
  return;
}



/* Entry: 1066a8e88; end: 1066a8e8b; -[SCLensExplorerCreatorCollectionViewCell handleLongPressOnStoryIconFromAvatarView:] */

void FUN_1066a8e88(void)

{
  return;
}



/* Entry: 1066a8e8c; end: 1066a8f83; -[SCLensExplorerCreatorCollectionViewCell setViewModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8e8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274dcb4));
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066a8f84; end: 1066a8fcb;  */

void FUN_1066a8f84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2226c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066a8fcc; end: 1066a919f; -[SCLensExplorerCreatorCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a8fcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cce58;
  _objc_opt_class(PTR_PTR_1126cce58);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar8 = (long)_DAT_11274dcd4;
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  *(ulong *)(param_1 + lVar8) = uVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf5bbe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11274dcc0));
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf5bbc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11274dcc4));
  _objc_release(uVar4);
  lVar5 = param_1;
  func_0x00010be4b980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb9860(param_1);
  lVar9 = (long)_DAT_11274dcbc;
  lVar6 = *(long *)(param_1 + lVar9);
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    uVar7 = *(ulong *)(param_1 + lVar9);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf13300(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(lVar6);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf13300(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar9));
      _objc_release(uVar4);
    }
  }
  func_0x00010bfdcc40(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c228d00(param_1);
  _objc_release(lVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066a91a0; end: 1066a922f; -[SCLensExplorerCreatorCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a91a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11274dcd8;
    if (param_3 != *(long *)(param_1 + lVar3)) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126cceb8;
      _objc_alloc();
      func_0x00010bfff980();
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274dcd0);
      *(undefined **)(param_1 + _DAT_11274dcd0) = puVar2;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066a9230; end: 1066a9397; -[SCLensExplorerCreatorCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a9230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dcb8),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11274dcc0;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11274dcc4;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dccc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066a9398; end: 1066a955f; -[SCLensExplorerCreatorCollectionViewCell cardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a9398(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11274dcb8;
  lVar4 = *(long *)(param_1 + lVar6);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    puVar2 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402c000000000000);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1,param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4039000000000000);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar5);
    lVar4 = *(long *)(param_1 + lVar6);
    _objc_retain(lVar4);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1066a9560; end: 1066a960b; -[SCLensExplorerCreatorCollectionViewCell avatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a9560(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274dcbc;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126b1a08;
    _objc_opt_new();
    func_0x00010c18b5e0();
    func_0x00010c1d5da0(puVar1,param_2,3);
    func_0x00010c21e900(puVar1,param_2,1);
    func_0x00010c219b60(puVar1,param_2,0);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + lVar4);
    _objc_retain(lVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1066a960c; end: 1066a972b; -[SCLensExplorerCreatorCollectionViewCell creatorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a960c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274dcc0;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    func_0x00010c219b60();
    func_0x00010c212f20(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    func_0x00010c1cfce0(puVar1,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1c83a0(0x3ff0000000000000,puVar1);
    func_0x00010c213040(puVar1,param_2,0);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066a972c; end: 1066a9833; -[SCLensExplorerCreatorCollectionViewCell creatorUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a972c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274dcc4;
  puVar3 = *(undefined **)(param_1 + lVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    func_0x00010c219b60();
    func_0x00010c212f20(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    func_0x00010c1cfce0(puVar3,param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1c83a0(0x3ff0000000000000,puVar3);
    func_0x00010c213040(puVar3,param_2,0);
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar2);
  }
  else {
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066a9834; end: 1066a9933; -[SCLensExplorerCreatorCollectionViewCell previewsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a9834(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274dcc8;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010c219b60();
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x85);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066a9934; end: 1066a9a1b; -[SCLensExplorerCreatorCollectionViewCell previewsStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a9934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274dccc;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    func_0x00010bff3fe0();
    func_0x00010c219b60();
    func_0x00010c16e060(puVar1,param_2,0);
    func_0x00010c166c00(puVar1,param_2,0);
    func_0x00010c190b80(puVar1,param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar3);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066a9a1c; end: 1066a9a6b; -[SCLensExplorerCreatorCollectionViewCell _lensPreviewsViewsForViewModel:] */

void FUN_1066a9a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0960a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a9a6c; end: 1066a9f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1066a9a6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar20 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar24 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar19 = uVar24;
  uVar23 = uVar25;
  func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
  func_0x00010c219b60();
  func_0x00010c182220(puVar20);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar2 = puVar20;
  func_0x00010c08c0e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d20(uVar19);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar20);
  _objc_release(puVar1);
  lVar3 = param_2;
  func_0x00010bf140c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar20);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14120(param_2);
  puVar4 = puVar2;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14120(param_2);
  puVar6 = puVar5;
  func_0x00010bf49420(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar7;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    func_0x00010c219b60();
    func_0x00010c182220(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar4 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182d20(uVar24);
    _objc_release(puVar4);
    _objc_release(puVar1);
    lVar3 = param_2;
    func_0x00010c1112a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar2);
    _objc_release(lVar3);
    func_0x00010befbb60(puVar20);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111320(param_2);
    puVar11 = puVar10;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111320(param_2);
    puVar13 = puVar12;
    func_0x00010bf49420(uVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return puVar20;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  lVar21 = (long)_DAT_11274dccc;
  lVar15 = *(long *)(param_2 + lVar21);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar15);
      }
      uVar19 = *(undefined8 *)(lVar22 * 8);
      func_0x00010c12b280(*(undefined8 *)(param_2 + lVar21));
      func_0x00010c12c960(uVar19);
      lVar22 = lVar22 + 1;
    } while (lVar3 != lVar22);
    lVar3 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  _objc_retain(puVar16);
  puVar1 = puVar16;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar16);
      }
      func_0x00010bef6d60(*(undefined8 *)(param_2 + lVar21));
      puVar20 = puVar20 + 1;
    } while (puVar1 != puVar20);
    puVar1 = puVar16;
    func_0x00010bf52a60();
  }
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return puVar16;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar16 + _DAT_11274dcd8);
}



/* Entry: 1066a9f1c; end: 1066aa0e3; -[SCLensExplorerCreatorCollectionViewCell _showLensPreviews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1066a9f1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar4 = (long)_DAT_11274dccc;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_1a0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1a0 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_1a8 + lVar6 * 8);
        func_0x00010c12b280(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
        func_0x00010c12c960(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_168,0x10);
  if (lVar2 != 0) {
    lVar1 = *plStack_1e0;
    do {
      lVar5 = 0;
      do {
        if (*plStack_1e0 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4),param_2,
                            *(undefined8 *)(lStack_1e8 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_168,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_11274dcd8);
}



/* Entry: 1066aa0e4; end: 1066aa0f3; -[SCLensExplorerCreatorCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066aa0e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dcd8);
}



/* Entry: 1066aa0f4; end: 1066aa103; -[SCLensExplorerCreatorCollectionViewCell visibleFraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066aa0f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dcb0);
}



/* Entry: 1066aa104; end: 1066aa113; -[SCLensExplorerCreatorCollectionViewCell setVisibleFraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa104(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274dcb0) = param_1;
  return;
}



/* Entry: 1066aa114; end: 1066aa123; -[SCLensExplorerCreatorCollectionViewCell sectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066aa114(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dcdc);
}



/* Entry: 1066aa124; end: 1066aa12f; -[SCLensExplorerCreatorCollectionViewCell setSectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066aa130; end: 1066aa13f; -[SCLensExplorerCreatorCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066aa130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dcd4);
}



/* Entry: 1066aa140; end: 1066aa17f; -[SCLensExplorerCreatorCollectionViewCell setAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dcbc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066aa180; end: 1066aa24f; -[SCLensExplorerCreatorCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa180(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dcbc,0);
  _objc_storeStrong(param_1 + _DAT_11274dcd4,0);
  _objc_storeStrong(param_1 + _DAT_11274dcdc,0);
  _objc_storeStrong(param_1 + _DAT_11274dcd8,0);
  _objc_storeStrong(param_1 + _DAT_11274dccc,0);
  _objc_storeStrong(param_1 + _DAT_11274dcc8,0);
  _objc_storeStrong(param_1 + _DAT_11274dcc0,0);
  _objc_storeStrong(param_1 + _DAT_11274dcc4,0);
  _objc_storeStrong(param_1 + _DAT_11274dcb8,0);
  _objc_storeStrong(param_1 + _DAT_11274dcd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dcb4,0);
  return;
}



/* Entry: 1066aa250; end: 1066aa2ef; -[SCLensExplorerHeroCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066aa250(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274dce4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274dce4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274dce8);
    *(undefined **)((long)puVar1 + (long)_DAT_11274dce8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274dcec) = 0;
    func_0x00010be3b0a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066aa2f0; end: 1066aa683; -[SCLensExplorerHeroCollectionViewCell _initialSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa2f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdf3160();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11274dcf0;
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  *(long *)(param_1 + lVar12) = lVar1;
  _objc_release(uVar8);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar12));
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b08d8;
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100b74f58(0x4024000000000000,0x3ff0000000000000,0,0x3ff0000000000000,puVar3,lVar1,puVar4
                     );
  _objc_release(puVar4);
  _objc_release(lVar1);
  func_0x00010beacc80(param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11274dcf4;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar8;
  _objc_release(uVar9);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11274dcf8;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = uVar8;
  _objc_release(uVar9);
  _objc_release(uVar5);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar6 = *(long *)(param_1 + lVar12);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_90 = lVar6;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  lStack_88 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_1 + lVar11);
  uStack_70 = *(undefined8 *)(param_1 + lVar10);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(uVar5);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1066aa684;
  puStack_c8 = PTR_PTR_1126f2600;
  lStack_d0 = lVar2;
  lStack_c0 = lVar1;
  puStack_b8 = puVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_d0,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,lVar2);
  func_0x00010c1f9360(lVar2);
  func_0x00010c137fe0(*(undefined8 *)(lVar2 + _DAT_11274dcfc));
  return;
}



/* Entry: 1066aa684; end: 1066aa6eb; -[SCLensExplorerHeroCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa684(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2600;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c2239e0(0,param_1);
  func_0x00010c1f9360(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11274dcfc));
  return;
}



/* Entry: 1066aa6ec; end: 1066aa753; -[SCLensExplorerHeroCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa6ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2600;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + _DAT_11274dd00));
  func_0x00010bdcde80(param_1);
  func_0x00010bdcea40(param_1);
  func_0x00010be64b60(param_1);
  return;
}



/* Entry: 1066aa754; end: 1066aa833; -[SCLensExplorerHeroCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066aa754(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f2600;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c29d560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb7a0();
    _objc_release(lVar2);
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267060(param_1,0,0x447a0000,0x42480000);
    func_0x00010c202c80(plVar1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1066aa834; end: 1066aa92b; -[SCLensExplorerHeroCollectionViewCell setViewModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa834(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11274dce4));
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066aa92c; end: 1066aa973;  */

void FUN_1066aa92c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2226c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066aa974; end: 1066aaaa3; -[SCLensExplorerHeroCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aa974(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cce88;
  _objc_opt_class(PTR_PTR_1126cce88);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar7 = (long)_DAT_11274dd04;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  *(ulong *)(param_1 + lVar7) = uVar1;
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + lVar7);
  if (uVar4 != 0) {
    func_0x00010bfe0f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08cda0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274dcfc;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c08cda0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) == 0) {
      func_0x00010bed6060(param_1);
    }
    func_0x00010bf1a2c0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010bedfaa0(param_1);
    func_0x00010bead480(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066aaaa4; end: 1066aaaa7; -[SCLensExplorerHeroCollectionViewCell _setupKarma] */

void FUN_1066aaaa4(void)

{
  return;
}



/* Entry: 1066aaaa8; end: 1066aab5f; -[SCLensExplorerHeroCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aaaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + _DAT_11274dcec) = param_3;
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274dd04);
  func_0x00010c28fee0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dd00),param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dcf0),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1066aab60; end: 1066aabef; -[SCLensExplorerHeroCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aab60(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11274dd08;
    if (param_3 != *(long *)(param_1 + lVar3)) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126cce50;
      _objc_alloc();
      func_0x00010bfff980();
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274dd0c);
      *(undefined **)(param_1 + _DAT_11274dd0c) = puVar2;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066aabf0; end: 1066aaf37; -[SCLensExplorerHeroCollectionViewCell attachView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aabf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274dd04);
  func_0x00010c28fee0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (iVar1 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29,
                        *(undefined8 *)(param_1 + _DAT_11274dcec));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(param_3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(param_3,param_2,0);
  lVar18 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar18);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar19 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_88 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  uStack_80 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  uStack_78 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(uVar19);
  lVar18 = *(long *)(param_1 + _DAT_11274dd00);
  *(undefined8 *)(param_1 + _DAT_11274dd00) = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar19 = *(undefined8 *)(lVar18 + _DAT_11274dce8);
  _objc_retain(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar19);
  return;
}



/* Entry: 1066aaf38; end: 1066aaf67; -[SCLensExplorerHeroCollectionViewCell previewAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aaf38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dce8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066aaf68; end: 1066aafd3; -[SCLensExplorerHeroCollectionViewCell _setupGestureRecognizer] */

void FUN_1066aaf68(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066aafd4; end: 1066aafe3; -[SCLensExplorerHeroCollectionViewCell _didTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aafd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dd0c),PTR_s_performActionOnTap_11261ba70);
  return;
}



/* Entry: 1066aafe4; end: 1066ab04b; -[SCLensExplorerHeroCollectionViewCell _createSeparatorView] */

void FUN_1066aafe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066ab04c; end: 1066ab13f; -[SCLensExplorerHeroCollectionViewCell _updateContentLayoutWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010bddf7c0(param_1);
  lVar1 = param_1;
  func_0x00010c08ca60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c08ca60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfe0f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08cda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb7a0(param_3);
    lVar4 = lVar1;
    func_0x00010bf223e0(lVar1,param_2,uVar3,*(undefined8 *)(param_1 + _DAT_11274dcec),param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274dcfc);
    *(long *)(param_1 + _DAT_11274dcfc) = lVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ab140; end: 1066ab197; -[SCLensExplorerHeroCollectionViewCell _cleanupLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab140(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dd00;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf3a200(*(undefined8 *)(param_1 + _DAT_11274dcfc));
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1066ab198; end: 1066ab2f3; -[SCLensExplorerHeroCollectionViewCell _applyContentMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11274dd00;
  if (*(long *)(param_5 + lVar7) != 0) {
    lVar6 = (long)_DAT_11274dd04;
    lVar1 = *(long *)(param_5 + lVar6);
    if (lVar1 != 0) {
      func_0x00010c141e60();
      puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      if (lVar1 == 0) {
        puVar5 = *(undefined **)(param_5 + lVar7);
        func_0x00010c08c0e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2c00();
      }
      else {
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
        uVar2 = *(undefined8 *)(param_5 + lVar6);
        func_0x00010c141e60(uVar2);
        func_0x00010bf199e0(param_1,param_2,param_3,param_4,0x4020000000000000,0x4020000000000000,
                            puVar5,param_6,uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
        func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
        func_0x00010c19f0e0(puVar3);
        puVar4 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc1040();
        func_0x00010c1d9820(puVar3,param_6,puVar4);
        uVar2 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c08c0e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2c00();
        _objc_release(uVar2);
        _objc_release(puVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
  return;
}



/* Entry: 1066ab2f4; end: 1066ab4af; -[SCLensExplorerHeroCollectionViewCell _applyShadowMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab2f4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(ulong *)(param_5 + _DAT_11274dd04);
  if ((uVar2 != 0) && (*(long *)(param_5 + _DAT_11274dd00) != 0)) {
    func_0x00010c22a080();
    puVar3 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    if ((~(uint)uVar2 & 0xf) == 0) {
      param_5 = puVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
    }
    else {
      func_0x00010bf20c00();
      _objc_release(puVar3);
      puVar3 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar3);
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        param_3 = param_3 + 20.0;
      }
      uVar6 = 0;
      if (bVar1) {
        uVar6 = 0xc034000000000000;
      }
      bVar1 = (uVar2 & 2) != 0;
      if (bVar1) {
        param_4 = param_4 + 20.0;
      }
      uVar7 = 0;
      if (bVar1) {
        uVar7 = 0xc034000000000000;
      }
      if ((uVar2 & 4) != 0) {
        param_3 = param_3 + 20.0;
      }
      if ((uVar2 & 8) != 0) {
        param_4 = param_4 + 20.0;
      }
      puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      _objc_opt_new(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
      puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf199c0(uVar6,uVar7,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      func_0x00010c1d9820(puVar3,param_6,puVar5);
      _objc_release(puVar4);
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(puVar4);
    }
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1066ab4b0; end: 1066ab5db; -[SCLensExplorerHeroCollectionViewCell _updateSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dd04;
  lVar1 = *(long *)(param_5 + lVar2);
  if (lVar1 != 0) {
    func_0x00010c15e4e0();
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11274dcf0),param_6,lVar1 == 0);
    lVar1 = *(long *)(param_5 + lVar2);
    func_0x00010c15e4e0();
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        lVar1 = param_5;
        func_0x00010bf4dce0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010c181140(param_3,*(undefined8 *)(param_5 + _DAT_11274dcf8));
        _objc_release(lVar1);
        func_0x00010c181140(0x3ff0000000000000,*(undefined8 *)(param_5 + _DAT_11274dcf4));
      }
      else if (lVar1 == 2) {
        func_0x00010c181140(0x3ff0000000000000,*(undefined8 *)(param_5 + _DAT_11274dcf8));
        lVar1 = param_5;
        func_0x00010bf4dce0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010c181140(param_4,*(undefined8 *)(param_5 + _DAT_11274dcf4));
        _objc_release(lVar1);
      }
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_5);
      return;
    }
  }
  return;
}



/* Entry: 1066ab5dc; end: 1066ab6bf; -[SCLensExplorerHeroCollectionViewCell _notifyLayoutChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab5dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_11274dcfc) != 0) {
    lVar4 = (long)_DAT_11274dd04;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010bfd1580();
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c107840(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274dce8),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
  return;
}



/* Entry: 1066ab6c0; end: 1066ab74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab6c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11274dcfc);
  _objc_retain(param_4);
  func_0x00010c23d420(uVar2);
  puVar1 = PTR_PTR_1126ccec0;
  _objc_alloc(PTR_PTR_1126ccec0);
  func_0x00010c067fc0(param_4);
  _objc_release(param_4);
  func_0x00010c00f1a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ab750; end: 1066ab75f; -[SCLensExplorerHeroCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066ab750(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd08);
}



/* Entry: 1066ab760; end: 1066ab76f; -[SCLensExplorerHeroCollectionViewCell visibleFraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066ab760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dce0);
}



/* Entry: 1066ab770; end: 1066ab77f; -[SCLensExplorerHeroCollectionViewCell setVisibleFraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab770(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274dce0) = param_1;
  return;
}



/* Entry: 1066ab780; end: 1066ab78f; -[SCLensExplorerHeroCollectionViewCell sectionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066ab780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd10);
}



/* Entry: 1066ab790; end: 1066ab79b; -[SCLensExplorerHeroCollectionViewCell setSectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066ab79c; end: 1066ab7ab; -[SCLensExplorerHeroCollectionViewCell layoutBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066ab79c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd14);
}



/* Entry: 1066ab7ac; end: 1066ab7eb; -[SCLensExplorerHeroCollectionViewCell setLayoutBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dd14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066ab7ec; end: 1066ab7fb; -[SCLensExplorerHeroCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066ab7ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd04);
}



/* Entry: 1066ab7fc; end: 1066ab8db; -[SCLensExplorerHeroCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ab7fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dd04,0);
  _objc_storeStrong(param_1 + _DAT_11274dd14,0);
  _objc_storeStrong(param_1 + _DAT_11274dd10,0);
  _objc_storeStrong(param_1 + _DAT_11274dd08,0);
  _objc_storeStrong(param_1 + _DAT_11274dce4,0);
  _objc_storeStrong(param_1 + _DAT_11274dce8,0);
  _objc_storeStrong(param_1 + _DAT_11274dd0c,0);
  _objc_storeStrong(param_1 + _DAT_11274dcf8,0);
  _objc_storeStrong(param_1 + _DAT_11274dcf4,0);
  _objc_storeStrong(param_1 + _DAT_11274dcf0,0);
  _objc_storeStrong(param_1 + _DAT_11274dd00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dcfc,0);
  return;
}



/* Entry: 1066ab8dc; end: 1066aba4b; -[SCLensExplorerLensCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066ab8dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f2608;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc910;
    func_0x00010bfa3860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274dd18);
    *(undefined **)((long)puVar1 + (long)_DAT_11274dd18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_11274dd1c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010beb0620(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066aba4c; end: 1066aba53; -[SCLensExplorerLensCollectionViewCell shouldShowBackgroundView] */

undefined8 FUN_1066aba4c(void)

{
  return 0;
}



/* Entry: 1066aba54; end: 1066abaf7; -[SCLensExplorerLensCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aba54(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2608;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010be789c0(param_1);
  *(undefined8 *)(param_1 + _DAT_11274dd20) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dd24);
  *(undefined8 *)(param_1 + _DAT_11274dd24) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dd28);
  *(undefined8 *)(param_1 + _DAT_11274dd28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dd2c);
  *(undefined8 *)(param_1 + _DAT_11274dd2c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dd30);
  *(undefined8 *)(param_1 + _DAT_11274dd30) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11274dd34));
  return;
}



/* Entry: 1066abaf8; end: 1066abbe3; -[SCLensExplorerLensCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066abaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f2608;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar2 = (long)_DAT_11274dd1c;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar2));
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar3 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010c17a6a0(uVar3,param_1,*(undefined8 *)(param_5 + lVar2));
  _objc_release(lVar1);
  return;
}



/* Entry: 1066abbe4; end: 1066abc97; -[SCLensExplorerLensCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066abbe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f2608;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb780();
    _objc_release(param_3);
    func_0x00010c202c80(param_1,param_2,plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1066abc98; end: 1066abc9b; -[SCLensExplorerLensCollectionViewCell reloadViewModel] */

void FUN_1066abc98(void)

{
  return;
}



/* Entry: 1066abc9c; end: 1066abd27; -[SCLensExplorerLensCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066abc9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11274dd2c;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c1290e0(param_1);
    if ((*(long *)(param_1 + _DAT_11274dd30) != 0) && (*(long *)(param_1 + _DAT_11274dd28) == 0)) {
      func_0x00010bed4f00(param_1);
    }
    func_0x00010c228d00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066abd28; end: 1066abd2b; -[SCLensExplorerLensCollectionViewCell setupKarma] */

void FUN_1066abd28(void)

{
  return;
}



/* Entry: 1066abd2c; end: 1066abd2f; -[SCLensExplorerLensCollectionViewCell updateStyleOverride:] */

void FUN_1066abd2c(void)

{
  return;
}



/* Entry: 1066abd30; end: 1066abdb7; -[SCLensExplorerLensCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066abd30(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11274dd30;
    if (param_3 != *(long *)(param_1 + lVar2)) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(long *)(param_1 + lVar2) = param_3;
      _objc_release(uVar1);
      if ((*(long *)(param_1 + _DAT_11274dd2c) != 0) && (*(long *)(param_1 + _DAT_11274dd28) == 0))
      {
        func_0x00010bed4f00(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066abdb8; end: 1066abe4b; -[SCLensExplorerLensCollectionViewCell _updateCellBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066abdb8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c077060();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    ppuVar4 = &PTR_PTR_1126cced0;
  }
  else {
    func_0x00010beadf00(param_1);
    ppuVar4 = &PTR_PTR_1126ccec8;
  }
  puVar3 = *ppuVar4;
  _objc_alloc();
  func_0x00010bfff980();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274dd28);
  *(undefined **)(param_1 + _DAT_11274dd28) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066abe4c; end: 1066abf37; -[SCLensExplorerLensCollectionViewCell setViewModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066abe4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11274dd34;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066abf38; end: 1066abf87;  */

void FUN_1066abf38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2226c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066abf88; end: 1066ac00b; -[SCLensExplorerLensCollectionViewCell _setupTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066abf88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11274dd38;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066ac00c; end: 1066ac0bb; -[SCLensExplorerLensCollectionViewCell _setupLongPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac00c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274dd3c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8340(0x3fd0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1374a0(*(undefined8 *)(param_1 + _DAT_11274dd38),param_2,
                      *(undefined8 *)(param_1 + lVar3));
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066ac0bc; end: 1066ac19b; -[SCLensExplorerLensCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac0bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc4840();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f8140(*(undefined8 *)(param_1 + (long)_DAT_11274dd28));
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bdd3c80(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066ac19c; end: 1066ac1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac19c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0f8140(*(undefined8 *)(param_1 + _DAT_11274dd28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066ac1d8; end: 1066ac343; -[SCLensExplorerLensCollectionViewCell _handleLongPressAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac1d8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077060();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bdc4840();
    if ((uVar1 & 1) == 0) {
      func_0x00010c0f8100(*(undefined8 *)(param_1 + (long)_DAT_11274dd28));
    }
    else {
      lVar3 = param_3;
      func_0x00010c252440();
      if (lVar3 < 4) {
        if (lVar3 == 1) {
          _objc_initWeak(auStack_38,param_1);
          _objc_copyWeak(auStack_40,auStack_38);
          func_0x00010bdd36a0(param_1);
          _objc_destroyWeak(auStack_40);
          _objc_destroyWeak(auStack_38);
          goto LAB_1066ac30c;
        }
        if (lVar3 != 3) goto LAB_1066ac30c;
        lVar3 = *(long *)(param_1 + (long)_DAT_11274dd40);
        func_0x00010c252440();
        if (lVar3 != 0) {
          func_0x00010c0f8140(*(undefined8 *)(param_1 + (long)_DAT_11274dd28));
        }
      }
      else if ((lVar3 != 4) && (lVar3 != 5)) goto LAB_1066ac30c;
      func_0x00010be16fe0(param_1);
    }
  }
LAB_1066ac30c:
  _objc_release(param_3);
  return;
}



/* Entry: 1066ac344; end: 1066ac37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac344(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0f8100(*(undefined8 *)(param_1 + _DAT_11274dd28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066ac380; end: 1066ac413; -[SCLensExplorerLensCollectionViewCell _createGestureAnimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac380(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274dd40;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c07cd60();
  if (iVar1 != 0) {
    func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010bfaf6c0(*(undefined8 *)(param_1 + lVar5),param_2,2);
  }
  puVar2 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
  _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
  func_0x00010bff2f00();
  puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00eb20(0x3fd0000000000000);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1066ac414; end: 1066ac473; -[SCLensExplorerLensCollectionViewCell _prepareLongPressAnimatorForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac414(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274dd40;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c07cd60();
    if ((int)lVar1 != 0) {
      func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar3),param_2,0);
      func_0x00010bfaf6c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1066ac474; end: 1066ac5cb; -[SCLensExplorerLensCollectionViewCell _beginLongPressAnimationWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bdee2e0(param_1);
  _objc_initWeak(auStack_58,param_1);
  lVar2 = (long)_DAT_11274dd40;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1066ac5cc;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bef6cc0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ac5cc; end: 1066ac63b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac5cc(long param_1,undefined8 param_2)

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
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CGAffineTransformMakeScale(&uStack_50,0x3fee666666666666,0x3fee666666666666);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11274dd1c),param_2,&uStack_80);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1066ac63c; end: 1066ac68b;  */

void FUN_1066ac63c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((param_2 == 0) && (lVar1 != 0)) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066ac68c; end: 1066ac7af; -[SCLensExplorerLensCollectionViewCell _finishLongPressAnimation] */

/* WARNING: Possible PIC construction at 0x0001066ac768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066ac76c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac68c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = (long)_DAT_11274dd40;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c07cd60();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c07cb20();
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_1 + lVar5);
      func_0x00010c252440();
      if (lVar3 == 1) {
        func_0x00010c0f5bc0(*(undefined8 *)(param_1 + lVar5));
        func_0x00010c1ede40(*(undefined8 *)(param_1 + lVar5));
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        goto code_r0x00010c24dc40;
      }
    }
  }
  func_0x00010c1ede40(*(undefined8 *)(param_1 + lVar5));
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bef6cc0(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
code_r0x00010c24dc40:
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_startAnimation_112671138);
  return;
}



/* Entry: 1066ac7b0; end: 1066ac813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac7b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11274dd1c),param_2,&uStack_50);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1066ac814; end: 1066ac943; -[SCLensExplorerLensCollectionViewCell _beginTapAnimationWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bdee2e0(param_1);
  _objc_initWeak(auStack_58,param_1);
  lVar2 = (long)_DAT_11274dd40;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bef6cc0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ac944; end: 1066ac9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066ac944(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_2 != 0) {
    func_0x00010bf8b160(*(undefined8 *)(param_2 + _DAT_11274dd40));
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1066ac9dc;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_2;
    func_0x00010bf02ee0(param_1,0,puVar1,param_3,0,&puStack_48,0);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1066ac9dc; end: 1066aca8b;  */

void FUN_1066ac9dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066aca8c;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1066acaec;
  puStack_78 = &UNK_110842e18;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_90);
  return;
}



/* Entry: 1066aca8c; end: 1066acaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066aca8c(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3fee666666666666,0x3fee666666666666);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274dd1c),param_2,
                      &uStack_80);
  return;
}



/* Entry: 1066acaec; end: 1066acb33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066acaec(long param_1,undefined8 param_2)

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
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274dd1c),param_2,
                      &uStack_40);
  return;
}



/* Entry: 1066acb34; end: 1066acb4b;  */

void FUN_1066acb34(long param_1,long param_2)

{
  if ((param_2 == 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001066acb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066acb4c; end: 1066acb87; -[SCLensExplorerLensCollectionViewCell _actionsShouldBeAnimated] */

undefined8 FUN_1066acb4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c077060();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1066acb88; end: 1066acc03; +[SCLensExplorerLensCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1066acb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ccc18;
  _objc_opt_class(PTR_PTR_1126ccc18);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bfbb780(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1066acc04; end: 1066acc13; -[SCLensExplorerLensCollectionViewCell visibleFraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066acc04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dd20);
}


