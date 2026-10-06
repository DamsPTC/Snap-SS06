/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e1a1c0; end: 108e1a263; -[SCCaptionControlledView initWithFrame:caption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e1a1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fea38;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277c030),param_7);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108e1a264; end: 108e1a283; -[SCCaptionControlledView caption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e1a264(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e1a284; end: 108e1a293; -[SCCaptionControlledView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e1a284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c030);
  return;
}



/* Entry: 108e1a294; end: 108e1a303; -[SCCaptionDefaultTextView setKillSwitchProvider:] */

void FUN_108e1a294(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xf0,param_3);
  func_0x00010c06e1c0(param_3);
  _objc_release(param_3);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1a304; end: 108e1a53f; -[SCCaptionDefaultTextView initWithState:editingDelegate:resourceDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:] */

undefined8 *
FUN_108e1a304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined1 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  uVar3 = param_3;
  uVar4 = param_4;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_17);
  puStack_a8 = PTR_PTR_1126fea40;
  puVar1 = &uStack_b0;
  uStack_b0 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_11;
    func_0x00010c25e1c0();
    puVar1[1] = uVar2;
    uVar2 = param_11;
    func_0x00010bfd6620();
    *(char *)((long)puVar1 + 0xc1) = (char)uVar2;
    puVar1[0x28] = param_5;
    puVar1[0x29] = param_6;
    puVar1[0x2a] = param_7;
    puVar1[0x2b] = param_8;
    puVar1[0x2c] = param_18;
    puVar1[0x2d] = param_19;
    puVar1[0x2e] = param_20;
    puVar1[0x2f] = param_21;
    puVar1[0xf] = param_22;
    puVar1[0x10] = param_23;
    puVar1[0x11] = param_24;
    puVar1[0x12] = param_25;
    *(undefined1 *)(puVar1 + 2) = param_14;
    _objc_storeWeak(puVar1 + 0x1f,param_12);
    *(undefined1 *)((long)puVar1 + 0x11) = param_15;
    func_0x000107c308a4();
    puVar1[0x14] = param_3;
    puVar1[0x15] = param_4;
    puVar1[0x16] = uVar3;
    puVar1[0x17] = uVar4;
    puVar1[3] = 0x4031000000000000;
    *(undefined1 *)(puVar1 + 8) = 0;
    uVar3 = param_11;
    func_0x00010c247520();
    puVar1[9] = uVar3;
    uVar3 = param_11;
    func_0x00010beffa20();
    puVar1[10] = uVar3;
    _objc_retain(param_17);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 0x18) = param_26;
    *(undefined1 *)((long)puVar1 + 0xc2) = 0;
    func_0x00010c0ff520(param_11);
    func_0x00010c1dd660(puVar1);
    uVar3 = param_11;
    func_0x00010bf8c1c0(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193640(puVar1);
    _objc_release(uVar3);
    uVar3 = param_11;
    func_0x00010bfc0860(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar1);
    _objc_release(uVar3);
    func_0x00010befa2c0(puVar1);
    func_0x00010c064ba0(puVar1);
    *(undefined1 *)((long)puVar1 + 0xc4) = 0;
  }
  _objc_release(param_17);
  _objc_release(param_12);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 108e1a540; end: 108e1a5ab; -[SCCaptionDefaultTextView initWithState:editingDelegate:backgroundImage:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:] */

void FUN_108e1a540(void)

{
  func_0x00010c04be80();
  return;
}



/* Entry: 108e1a5ac; end: 108e1a5b3; -[SCCaptionDefaultTextView alignment] */

undefined8 FUN_108e1a5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108e1a5b4; end: 108e1a637; -[SCCaptionDefaultTextView setEditing:] */

void FUN_108e1a5b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xc5) = param_3;
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar1);
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1a638; end: 108e1a63f; -[SCCaptionDefaultTextView setAlignment:] */

void FUN_108e1a638(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bea1b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAlignment_112586088);
  return;
}



/* Entry: 108e1a640; end: 108e1a687; -[SCCaptionDefaultTextView _setAlignment] */

void FUN_108e1a640(undefined8 param_1)

{
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1a688; end: 108e1b04b; -[SCCaptionDefaultTextView initializeViewsWithState:shouldKeepStyles:] */

void FUN_108e1a688(double param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined *puVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain(param_4);
  func_0x00010bf348c0(param_4);
  if (param_1 != 1.79769313486232e+308) {
    func_0x00010bf348c0(0x3fe0000000000000,param_4);
  }
  func_0x00010c1b8f60(param_2);
  func_0x00010c086c00(param_4);
  func_0x00010c1b6e20(param_2);
  uVar1 = param_4;
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(ulong *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = puVar3;
  }
  else {
    uVar8 = param_4;
    func_0x00010c268460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c0d3c80();
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    *(ulong *)(param_2 + 0x60) = uVar2;
    _objc_release(uVar7);
  }
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c293da0();
  *(ulong *)(param_2 + 0xd8) = uVar1;
  puVar3 = PTR_PTR_1126c4278;
  _objc_alloc(PTR_PTR_1126c4278);
  func_0x00010c013fc0(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0xa8),
                      *(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xb8));
  func_0x00010c181a20(param_2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c4850;
  _objc_alloc();
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  *(undefined **)(param_2 + 0x98) = puVar3;
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + 0x98),param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c14d2a0();
  uVar7 = 0x402e000000000000;
  if ((((ulong)puVar4 & 1) == 0) &&
     (puVar4 = puVar3, func_0x00010c14d280(), ((ulong)puVar4 & 1) == 0)) {
    puVar4 = puVar3;
    func_0x00010c14d2c0();
    uVar7 = 0x4031000000000000;
    if (((ulong)puVar4 & 1) != 0) goto LAB_108e1a890;
    puVar4 = puVar3;
    func_0x00010c14d2e0();
    uVar7 = 0x4033000000000000;
    if (((ulong)puVar4 & 1) != 0) goto LAB_108e1a890;
    puVar4 = puVar3;
    func_0x00010c14d300();
    uVar7 = 0x4031000000000000;
    if (((ulong)puVar4 & 1) != 0) goto LAB_108e1a890;
    puVar4 = puVar3;
    func_0x00010c14d320();
    uVar7 = 0x4032000000000000;
    if ((int)puVar4 != 0) goto LAB_108e1a890;
  }
  else {
LAB_108e1a890:
    *(undefined8 *)(param_2 + 0x18) = uVar7;
  }
  uVar1 = param_4;
  func_0x00010c0fb8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0fb8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    *(ulong *)(param_2 + 0x38) = uVar1;
    _objc_release(uVar7);
    *(undefined1 *)(param_2 + 0x40) = 1;
  }
  uVar1 = param_4;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar4 = PTR_PTR_1126cbf68;
    func_0x00010bf8b640();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar4;
  }
  else {
    _objc_retain(uVar1);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    *(ulong *)(param_2 + 0x30) = uVar1;
  }
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126dc068;
  _objc_alloc(PTR_PTR_1126dc068);
  func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
  func_0x00010c2138e0(param_2,param_3,puVar4);
  _objc_release(puVar4);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d97c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  _objc_release(puVar4);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207da0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0c0();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(*(undefined8 *)(param_2 + 0x18),PTR__OBJC_CLASS___UIFont_1126aec38,param_3,
                      &PTR____CFConstantStringClassReference_110efb098);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar1);
  _objc_release(puVar4);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(0x402e000000000000);
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2131e0(0x4020000000000000,0,0x4020000000000000,0);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + 0x98),param_3,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar4);
  func_0x00010c17d4c0(*(undefined8 *)(param_2 + 0x98),param_3,1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar1);
  _objc_release(puVar4);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6da0();
  _objc_release(uVar1);
  puVar10 = *(undefined **)(param_2 + 0x38);
  puVar4 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar1);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  uVar1 = param_4;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  uVar2 = param_2;
  if (uVar1 != 0) {
    uVar5 = param_4;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if (uVar6 != 0) {
      uVar1 = param_2;
      func_0x00010c087020();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar5 = param_2;
        func_0x00010c087020(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c06e1e0();
        uVar9 = (uint)uVar6 ^ 1;
        _objc_release(uVar5);
      }
      _objc_release(uVar1);
      func_0x00010bf0e540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c14c7c0(uVar8,param_3,uVar1,param_5,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
      func_0x00010c26ca80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
      goto LAB_108e1ae8c;
    }
  }
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
LAB_108e1ae8c:
  _objc_release(uVar2);
  _objc_release(uVar8);
  uVar1 = param_4;
  func_0x00010c08a3e0(param_4);
  func_0x00010bea8580(param_2,param_3,uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 1;
  func_0x00010c167580();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfe1300();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf301c0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_4;
      func_0x00010bf8c660(param_4);
      uVar9 = (uint)uVar1 ^ 1;
    }
    else {
      uVar9 = 0;
    }
  }
  func_0x00010c1a7f60(param_2,param_3,uVar9);
  uVar1 = param_4;
  func_0x00010bf8c660(param_4);
  func_0x00010c193b00(param_2,param_3,uVar1);
  uVar1 = param_2;
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf4de60(param_2);
  dVar11 = 3.4028234663852886e+38;
  func_0x00010c23d5a0((double)(long)uVar8,uVar1);
  *(double *)(param_2 + 0x20) = dVar11 * 0.5;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c074c20();
  if ((int)uVar1 != 0) {
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar12);
    _objc_release(uVar7);
  }
  func_0x00010be93120(param_2);
  uVar1 = param_4;
  func_0x00010bf8c660();
  if ((int)uVar1 == 0) {
    func_0x00010bde5d00(param_2);
  }
  else {
    func_0x00010c24eaa0(param_2,param_3,0);
  }
  uVar1 = param_2;
  func_0x00010bf4b2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c26ca80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar7,param_3,param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e1b04c; end: 108e1b08f; -[SCCaptionDefaultTextView dealloc] */

void FUN_108e1b04c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d5e0();
  puStack_28 = PTR_PTR_1126fea40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108e1b090; end: 108e1b1fb; -[SCCaptionDefaultTextView _setTextTransformWithLastTransform:] */

void FUN_108e1b090(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    if (lVar2 == 0) {
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c14d5e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
    }
    else {
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c14d5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c14c800(lVar6,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      param_1 = lVar3;
    }
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 108e1b1fc; end: 108e1b203; -[SCCaptionDefaultTextView updateAnchor:rotation:scale:] */

void FUN_108e1b1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beda630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,param_3,PTR_s__updateLastVerticalWithY__112594330);
  return;
}



/* Entry: 108e1b204; end: 108e1b28f; -[SCCaptionDefaultTextView tearDownAndRemoveFromSuperview] */

void FUN_108e1b204(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x98));
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c193b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setEditingDelegate__1126428f8,0);
  return;
}



/* Entry: 108e1b290; end: 108e1b293; -[SCCaptionDefaultTextView view] */

void FUN_108e1b290(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 108e1b294; end: 108e1b2eb; -[SCCaptionDefaultTextView _configureTextViewBasedOnEditMode] */

void FUN_108e1b294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c071280();
  func_0x00010c21e900(param_1,param_2,uVar1);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1b2ec; end: 108e1b343; -[SCCaptionDefaultTextView addObservers] */

void FUN_108e1b2ec(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e1b344; end: 108e1b393; -[SCCaptionDefaultTextView removeObservers] */

void FUN_108e1b344(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e1b394; end: 108e1b673; -[SCCaptionDefaultTextView inputKeyboardWillChangeFrame:] */

void FUN_108e1b394(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  undefined8 auStack_150 [5];
  undefined1 auStack_128 [8];
  undefined8 auStack_120 [5];
  undefined1 auStack_f8 [8];
  undefined8 auStack_f0 [6];
  undefined8 auStack_c0 [6];
  
  puVar10 = auStack_150;
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = param_5;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c073040();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    dVar12 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    if (dVar12 != 0.0) {
      func_0x00010c1b6e20(param_5);
    }
    lVar1 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_7;
    func_0x00010c292820(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2827c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = param_5;
    func_0x00010bf301c0();
    uVar4 = param_5;
    func_0x00010c071280();
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar13 = param_1;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(puVar6);
    if (dVar13 <= param_1) {
      uVar7 = param_5;
      func_0x00010c071280();
      if ((uVar7 & 1) != 0) goto LAB_108e1b640;
      *(undefined1 *)(param_5 + 0x28) = 1;
      pcVar11 = FUN_108e1b7dc;
      pcVar9 = (code *)0x108e1b76c;
      puVar8 = (undefined8 *)(auStack_128 + 8);
    }
    else {
      *(undefined1 *)(param_5 + 0x28) = 1;
      uVar7 = param_5;
      func_0x00010c074c20(param_5);
      func_0x00010c1677c0((double)((uint)uVar7 ^ 1),*(undefined8 *)(param_5 + 0x110));
      func_0x00010c1a7f60(param_5,param_6,0);
      pcVar11 = (code *)0x108e1b6f4;
      puVar10 = (undefined8 *)(auStack_128 + 0x38);
      puVar8 = (undefined8 *)(auStack_128 + 0x68);
      pcVar9 = FUN_108e1b674;
    }
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puVar8[1] = 0xc2000000;
    puVar8[2] = pcVar9;
    puVar8[3] = &UNK_110845ce0;
    *(char *)(puVar8 + 5) = (char)uVar3;
    puVar8[4] = param_5;
    func_0x00010bf03440(dVar12,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,lVar5 << 0x10,puVar8,0);
    *puVar10 = puVar6;
    puVar10[1] = 0xc2000000;
    puVar10[2] = pcVar11;
    puVar10[3] = &UNK_110854380;
    puVar10[4] = param_5;
    *(char *)(puVar10 + 5) = (char)uVar4;
    *(char *)((long)puVar10 + 0x29) = (char)uVar3;
    func_0x00010bdc93c0(param_5,param_6,puVar10);
  }
LAB_108e1b640:
  _objc_release(param_7);
  return;
}



/* Entry: 108e1b674; end: 108e1b7db;  */

void FUN_108e1b674(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010be93120();
  }
  else {
    func_0x00010becb4e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98));
    func_0x00010becb7e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110));
  }
  func_0x00010bddb1c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010be64870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyEditingLayoutDidUpdate_112576bb8);
  return;
}



/* Entry: 108e1b7dc; end: 108e1b88b;  */

void FUN_108e1b7dc(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  bVar1 = *(byte *)(param_1 + 0x28);
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c071280();
  if (bVar1 == uVar2) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20));
  }
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c071280();
    if (bVar1 == uVar2) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar4);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be93130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__resetLayout_1125825e8);
      return;
    }
  }
  return;
}



/* Entry: 108e1b88c; end: 108e1b88f; -[SCCaptionDefaultTextView editingTextView] */

void FUN_108e1b88c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textView_112678cc8);
  return;
}



/* Entry: 108e1b890; end: 108e1b8cb; -[SCCaptionDefaultTextView isHidden] */

undefined8 FUN_108e1b890(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e1b8cc; end: 108e1b90f; -[SCCaptionDefaultTextView text] */

void FUN_108e1b8cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1b910; end: 108e1b937; -[SCCaptionDefaultTextView captionStyle] */

void FUN_108e1b910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1b938; end: 108e1bc73; -[SCCaptionDefaultTextView searchableNameForFriendFiltering] */

void FUN_108e1b938(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0xd8) == 0x7fffffffffffffff) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c24d960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c0e1ce0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar7);
    lVar9 = *(long *)(param_1 + 0xd8);
    uVar7 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar7);
    if (*(long *)(param_1 + 0xd8) < 0) {
      _objc_release(uVar1);
      uVar7 = 0;
      goto LAB_108e1b970;
    }
    if (uVar3 < uVar5) {
      uVar7 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf193c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf94e60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1ce0(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar7);
      uVar7 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c260c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar7);
      lVar9 = *(long *)(param_1 + 0xd8);
      lVar8 = uVar3 - lVar9;
      _objc_release(uVar4);
    }
    else {
      lVar8 = uVar5 - lVar9;
    }
    uVar2 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    FUN_108e3ebf0(lVar9,lVar8,uVar5);
    uVar7 = uVar3;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar7 != 0) && (uVar1 = uVar7, func_0x00010c08fa60(), uVar1 != 0)) {
      uVar1 = uVar7;
      func_0x00010c260c20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_108e1b970;
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0x7fffffffffffffff;
LAB_108e1b970:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108e1bc74; end: 108e1bcbb; -[SCCaptionDefaultTextView usernamesForTagging] */

void FUN_108e1bc74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108e226d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e1bcbc; end: 108e1bd03; -[SCCaptionDefaultTextView topicsInCaption] */

void FUN_108e1bcbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108e227f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e1bd04; end: 108e1bd1b; -[SCCaptionDefaultTextView taggedUsers] */

void FUN_108e1bd04(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e1bd1c; end: 108e1bddb; -[SCCaptionDefaultTextView addTaggedUser:] */

void FUN_108e1bd1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_108e22f3c(param_3,*(undefined1 *)(param_1 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010be8ed00(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108e1bddc; end: 108e1be73;  */

void FUN_108e1bddc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d2ab0;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf51620(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010befbcc0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e1be74; end: 108e1bf77; -[SCCaptionDefaultTextView addTaggedUsers:] */

ulong FUN_108e1be74(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      func_0x000108e22aa4(*(undefined8 *)(uVar4 * 8),*(undefined8 *)(param_1 + 0x60),
                          *(undefined8 *)(param_1 + 0x110));
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    uVar1 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010be93120(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 0x60);
  func_0x00010bf002e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  return (ulong)(lVar2 != 0);
}



/* Entry: 108e1bf78; end: 108e1bfbb; -[SCCaptionDefaultTextView hasTaggedUsers] */

bool FUN_108e1bf78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf002e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 108e1bfbc; end: 108e1bfeb; -[SCCaptionDefaultTextView setTopics:] */

void FUN_108e1bfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e1bfec; end: 108e1bff3; -[SCCaptionDefaultTextView isFullscreen] */

undefined8 FUN_108e1bfec(void)

{
  return 0;
}



/* Entry: 108e1bff4; end: 108e1c083; -[SCCaptionDefaultTextView captionPresent] */

uint FUN_108e1bff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  _objc_release(uVar2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 108e1c084; end: 108e1c0ab; -[SCCaptionDefaultTextView textContainerView] */

void FUN_108e1c084(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1c0ac; end: 108e1c0f7; -[SCCaptionDefaultTextView textSize] */

undefined1  [16]
FUN_108e1c0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c620();
  _objc_release(param_5);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e1c0f8; end: 108e1c147; -[SCCaptionDefaultTextView _getCombinedTaggedItemsDictionary] */

void FUN_108e1c0f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x11) == '\x01') {
    func_0x00010bef7f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e1c148; end: 108e1c223; -[SCCaptionDefaultTextView _removeTagFromCaptionIfNeededForText:range:] */

void FUN_108e1c148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x11) == '\x01') {
    func_0x00010befa120(puVar2,param_2,*(undefined8 *)(param_1 + 0x60));
  }
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar1 = PTR_PTR_1126c4438;
  if (puVar3 != (undefined *)0x0) {
    lVar4 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c12e8c0(puVar1,param_2,puVar2,lVar4,param_4,param_5,uVar5,
                        *(undefined1 *)(param_1 + 0xc0));
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e1c224; end: 108e1c5ef; -[SCCaptionDefaultTextView _replaceTextWithFormattedTag:updateDictionaryHandler:] */

void FUN_108e1c224(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c24d960(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c0e1ce0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  lVar9 = *(long *)(param_1 + 0xd8);
  lVar8 = (long)puVar7 - lVar9;
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if ((((puVar7 == (undefined *)0x7fffffffffffffff) || (puVar1 < puVar7)) ||
      (0x7ffffffffffffffe < *(ulong *)(param_1 + 0xd8))) ||
     ((long)puVar7 < (long)*(ulong *)(param_1 + 0xd8))) {
    FUN_108e3ebf0(lVar9,lVar8,puVar2);
  }
  else {
    FUN_108e3ebf0(lVar9,lVar8,puVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c25cf80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar4;
    func_0x00010c08fa60(puVar4);
    puVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    _objc_release(puVar2);
    (**(code **)(param_4 + 0x10))(param_4,lVar9,lVar8,(long)puVar1 - (long)puVar6);
    puVar1 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    if (puVar5 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar2);
      puVar6 = puVar2;
      func_0x00010c14c840();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(puVar7);
    }
    else {
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c14c840();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c26ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
    }
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0x7fffffffffffffff;
    func_0x00010be93120(param_1);
    puVar2 = puVar4;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e1c5f0; end: 108e1c603; -[SCCaptionDefaultTextView setCaptionDismissedPollsSuggestion] */

void FUN_108e1c5f0(long param_1)

{
  if ((*(byte *)(param_1 + 0xc1) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  return;
}



/* Entry: 108e1c604; end: 108e1c60b; -[SCCaptionDefaultTextView setCaptionStylePreference:] */

void FUN_108e1c604(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108e1c60c; end: 108e1c68b; -[SCCaptionDefaultTextView setUserInteractionEnabled:] */

void FUN_108e1c60c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082800();
  _objc_release(uVar1);
  if (param_3 != (int)uVar2) {
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e1c68c; end: 108e1c6c3; -[SCCaptionDefaultTextView setHidden:] */

void FUN_108e1c68c(undefined8 param_1)

{
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1c6c4; end: 108e1c7b7; -[SCCaptionDefaultTextView setTextFromTagging:] */

void FUN_108e1c6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0xc2) = 1;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c159e80();
  _objc_release(lVar1);
  func_0x00010c212f20(param_1);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  FUN_108e3ebf0(lVar2 + 1,param_2,lVar3);
  lVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb500();
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0xc2) = 0;
  return;
}



/* Entry: 108e1c7b8; end: 108e1c8bf; -[SCCaptionDefaultTextView setText:] */

void FUN_108e1c7b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c212f20();
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c14c840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(param_1);
    _objc_release(lVar3);
    param_3 = lVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e1c8c0; end: 108e1c9af; -[SCCaptionDefaultTextView setPromptText:] */

void FUN_108e1c8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xc3) = 1;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128d60();
  _objc_release(lVar1);
  func_0x00010c212f20(param_1,param_2,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb500();
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e1c9b0; end: 108e1cb83; -[SCCaptionDefaultTextView setCaptionStyle:appliedStyle:] */

void FUN_108e1c9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  puVar7 = *(undefined **)(param_1 + 0x38);
  puVar2 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar3);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  lVar3 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c14c7a0(0,lVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139a0(0,lVar3,param_2,uVar1,0);
  _objc_release(uVar1);
  _objc_release(lVar3);
  func_0x00010be93120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e1cb84; end: 108e1cba7; -[SCCaptionDefaultTextView maxTextWidth] */

long FUN_108e1cb84(long param_1)

{
  func_0x00010bf4de60();
  return (long)((double)param_1 + -30.0);
}



/* Entry: 108e1cba8; end: 108e1cc07; -[SCCaptionDefaultTextView contentWidth] */

long FUN_108e1cba8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  double dVar6;
  
  bVar5 = *(char *)(param_1 + 0x10) == '\0';
  lVar1 = 0x140;
  if (bVar5) {
    lVar1 = 0x160;
  }
  lVar2 = 0x148;
  if (bVar5) {
    lVar2 = 0x168;
  }
  lVar3 = 0x150;
  if (bVar5) {
    lVar3 = 0x170;
  }
  lVar4 = 0x158;
  if (bVar5) {
    lVar4 = 0x178;
  }
  dVar6 = *(double *)(param_1 + lVar1);
  _CGRectGetWidth(dVar6,*(undefined8 *)(param_1 + lVar2),*(undefined8 *)(param_1 + lVar3),
                  *(undefined8 *)(param_1 + lVar4));
  return (long)dVar6;
}



/* Entry: 108e1cc08; end: 108e1cc57; -[SCCaptionDefaultTextView contentMargin] */

long FUN_108e1cc08(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x160);
  _CGRectGetWidth(dVar1,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                  *(undefined8 *)(param_1 + 0x178));
  func_0x00010bf4de60(param_1);
  return (long)((dVar1 - (double)param_1) * 0.5);
}



/* Entry: 108e1cc58; end: 108e1ce03; -[SCCaptionDefaultTextView textViewDidChange:] */

void FUN_108e1cc58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  func_0x00010be93120();
  lVar1 = param_1;
  func_0x00010bf8c6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b900();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0xc3) == '\x01') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c24d960(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c0e1ce0(lVar1,param_2,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126c4438;
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be1dde0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf480(puVar7,param_2,lVar6,lVar3,lVar4);
    *(undefined **)(param_1 + 0xd8) = puVar7;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108e1ce04; end: 108e1d09f; -[SCCaptionDefaultTextView textView:shouldChangeTextInRange:replacementText:] */

undefined8
FUN_108e1ce04(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
             long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    lVar1 = param_6;
    func_0x00010c08fa60();
    uVar3 = (uVar3 - param_5) + lVar1;
    _objc_release(uVar2);
    if (0xfa < uVar3) {
      uVar2 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      if (uVar4 <= uVar3) {
        uVar3 = param_3;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_108e225c8();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c26b700(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar2);
        _objc_release(uVar3);
        if ((uVar5 & 1) == 0) {
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0xc2000000;
          pcStack_78 = FUN_108e1d0a0;
          puStack_70 = &UNK_110848ba8;
          _objc_retain(param_3);
          uStack_68 = param_3;
          _objc_retain(param_6);
          lStack_60 = param_6;
          uStack_58 = param_1;
          func_0x000107c312d0("APPSTORE",&puStack_88);
          _objc_release(lStack_60);
          _objc_release(uStack_68);
        }
        goto LAB_108e1cea0;
      }
    }
    if (*(char *)(param_1 + 0x11) == '\x01') {
      lVar1 = param_6;
      func_0x00010c0720c0();
      if ((int)lVar1 != 0) {
        uVar3 = param_1;
        func_0x00010bf8c6e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        _objc_opt_respondsToSelector();
        _objc_release(uVar3);
        if ((uVar2 & 1) != 0) {
          uVar3 = param_1;
          func_0x00010bf8c6e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7c4a0();
          _objc_release(uVar3);
        }
        *(undefined8 *)(param_1 + 0xd8) = param_4;
      }
      func_0x00010be8d920(param_1);
    }
    uVar6 = 1;
  }
  else {
    func_0x00010c12ddc0(param_1);
    uVar3 = param_1;
    func_0x00010bf8c6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf2d960();
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      *(undefined8 *)(param_1 + 0x58) = 2;
      func_0x00010c255ee0(param_1);
    }
LAB_108e1cea0:
    uVar6 = 0;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 108e1d0a0; end: 108e1d13f;  */

void FUN_108e1d0a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108e225c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be93120(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e1d140; end: 108e1d2d3; -[SCCaptionDefaultTextView textViewDidBeginEditing:] */

void FUN_108e1d140(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c074c20();
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotification_1126dc088;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971a0(0,0,0,0x4054000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02d860();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c065c00(param_1);
    _objc_release(puVar2);
  }
  lVar5 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  func_0x00010c1fb500(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar10 = lVar5 + 0xf8;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c159e80(lVar6);
  lVar7 = lVar6;
  func_0x00010c26b700(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c26cb40(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar10);
  if ((*(char *)(lVar5 + 0xc2) == '\x01') && (*(char *)(lVar5 + 0x11) == '\x01')) {
    lVar10 = lVar5;
    func_0x00010c26ca80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar5;
    func_0x00010c26ca80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c26ca80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c24d960(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1ce0(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar10);
    puVar2 = PTR_PTR_1126c4438;
    lVar10 = lVar5;
    func_0x00010c26ca80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010be1dde0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf480();
    *(undefined **)(lVar5 + 0xd8) = puVar2;
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 108e1d2d4; end: 108e1d4bf; -[SCCaptionDefaultTextView textViewDidChangeSelection:] */

void FUN_108e1d2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xf8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c159e80(param_3);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26cb40(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if ((*(char *)(param_1 + 0xc2) == '\x01') && (*(char *)(param_1 + 0x11) == '\x01')) {
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c24d960(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1ce0(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126c4438;
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be1dde0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf480();
    *(undefined **)(param_1 + 0xd8) = puVar7;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 108e1d4c0; end: 108e1d557; -[SCCaptionDefaultTextView textPasteConfigurationSupporting:transformPasteItem:] */

void FUN_108e1d4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108e1d558;
  puStack_38 = &UNK_110ac62c0;
  uStack_30 = param_4;
  uStack_28 = param_1;
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_50);
  FUN_108e23020(param_4,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 108e1d558; end: 108e1d667;  */

void FUN_108e1d558(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if ((lVar2 == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    func_0x00010c1cd880(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar2 = param_2;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf8c1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf2f800();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010c1cd880(*(undefined8 *)(param_1 + 0x20));
        iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010c071280();
        if (iVar1 != 0) {
          func_0x00010c255ee0(*(undefined8 *)(param_1 + 0x28));
        }
        lVar2 = *(long *)(param_1 + 0x28) + 0xf8;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf2fbc0();
        _objc_release(lVar2);
        goto LAB_108e1d648;
      }
    }
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c20e840(*(undefined8 *)(param_1 + 0x20));
    }
  }
LAB_108e1d648:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e1d668; end: 108e1d6ff; -[SCCaptionDefaultTextView stopTagging] */

void FUN_108e1d668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d1320;
  lVar2 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  lVar3 = param_1;
  func_0x00010be1dde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xf8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfd0760(puVar1,param_2,param_1,lVar2,uVar5,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e1d700; end: 108e1d7a7; -[SCCaptionDefaultTextView startEditingAnimated:] */

void FUN_108e1d700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c193b00(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf8c6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109080();
  _objc_release(lVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x70));
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf7bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didStartEditingAnimated__1125bc880,param_3);
  return;
}



/* Entry: 108e1d7a8; end: 108e1d877; -[SCCaptionDefaultTextView stopEditingAnimated:] */

void FUN_108e1d7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0xf8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a6f00();
  _objc_release(lVar1);
  func_0x00010c193b00(param_1,param_2,0);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108e1d878;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  }
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(lVar1);
  func_0x00010bf7c080(param_1,param_2,param_3);
  return;
}



/* Entry: 108e1d878; end: 108e1d87f;  */

void FUN_108e1d878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetLayout_1125825e8);
  return;
}



/* Entry: 108e1d880; end: 108e1d8c3; -[SCCaptionDefaultTextView prepareToStartEditing] */

void FUN_108e1d880(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(param_1,param_2,0);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1d8c4; end: 108e1d90f; -[SCCaptionDefaultTextView didStartEditingAnimated:] */

void FUN_108e1d8c4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c193b00(param_1,param_2,1);
  func_0x00010bde5d00(param_1);
  func_0x00010bf8c6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1d910; end: 108e1d977; -[SCCaptionDefaultTextView prepareToStopEditing] */

void FUN_108e1d910(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 108e1d978; end: 108e1da57; -[SCCaptionDefaultTextView didStopEditingAnimated:] */

void FUN_108e1d978(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar1 = param_1;
    func_0x00010bf8c6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf8c6e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7c480();
      _objc_release(uVar1);
    }
  }
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(uVar1);
  func_0x00010c193b00(param_1);
  func_0x00010bde5d00(param_1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x70));
  func_0x00010bf8c6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1da58; end: 108e1daab; -[SCCaptionDefaultTextView removePromptTextIfNecessary] */

void FUN_108e1da58(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xc3) == '\x01') {
    func_0x00010c1fb500(*(undefined8 *)(param_1 + 0x110),param_2,0,0);
    if ((*(byte *)(param_1 + 0xc4) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x110),PTR_s_setText__1126625f0,0);
      return;
    }
  }
  return;
}



/* Entry: 108e1daac; end: 108e1dc07; -[SCCaptionDefaultTextView tap:] */

void FUN_108e1daac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c074c20();
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c071280(), (int)uVar2 != 0)) {
    uVar2 = *(ulong *)(param_3 + 0x98);
    func_0x00010bfb68e0();
    _CGRectContainsPoint();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bf8c6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf2d960();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        *(undefined8 *)(param_3 + 0x58) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010c255ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stopEditingAnimated__1126731e0,1);
        return;
      }
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010bf8c6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2d920();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = param_3;
      func_0x00010c074c20();
      if ((int)uVar2 != 0) {
        func_0x00010beda620(param_2,param_3);
        func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(param_3 + 0x98));
      }
                    /* WARNING: Could not recover jumptable at 0x00010c24eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_startEditingAnimated__1126714d0,1);
      return;
    }
  }
  return;
}



/* Entry: 108e1dc08; end: 108e1dd7b; -[SCCaptionDefaultTextView pan:] */

void FUN_108e1dc08(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c2321e0(param_3,param_4,param_5);
  if ((int)lVar1 != 0) {
    lVar1 = param_5;
    func_0x00010c252440();
    if (lVar1 == 2) {
      uVar2 = *(undefined8 *)(param_3 + 0x98);
      func_0x00010c262ca0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09f140(param_5,param_4,0,uVar2);
      _objc_release(uVar2);
      func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x98));
      _CGRectGetHeight();
      param_2 = param_2 - param_1 * 0.5;
      func_0x00010befda80(param_2,param_1,param_3);
      dVar3 = *(double *)(param_3 + 0x160);
      _CGRectGetMinY(dVar3,*(undefined8 *)(param_3 + 0x168),*(undefined8 *)(param_3 + 0x170),
                     *(undefined8 *)(param_3 + 0x178));
      dVar5 = dVar3;
      func_0x00010bf8c0c0(param_3);
      dVar4 = *(double *)(param_3 + 0x160);
      dVar7 = *(double *)(param_3 + 0x170);
      _CGRectGetMaxY(dVar4,*(undefined8 *)(param_3 + 0x168),dVar7,*(undefined8 *)(param_3 + 0x178));
      func_0x00010bf8c0c0(param_3);
      dVar6 = dVar3 + dVar5;
      if ((dVar3 + dVar5 <= param_2) &&
         (dVar5 = (dVar4 - dVar7) - param_1, dVar6 = param_2, dVar5 < param_2)) {
        dVar6 = dVar5;
      }
      func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x98));
      dVar6 = param_1 * 0.5 + dVar6;
      func_0x00010c17a6a0(*(undefined8 *)(param_3 + 0x98));
      func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x98));
      func_0x00010beda620(dVar6,param_3);
    }
    else {
      lVar1 = param_5;
      func_0x00010c252440();
      if (lVar1 == 3) {
        param_3 = param_3 + 0xf8;
        _objc_loadWeakRetained(param_3);
        func_0x00010bf2fea0();
        _objc_release(param_3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e1dd7c; end: 108e1dd7f; -[SCCaptionDefaultTextView pinch:] */

void FUN_108e1dd7c(void)

{
  return;
}



/* Entry: 108e1dd80; end: 108e1dd83; -[SCCaptionDefaultTextView rotation:] */

void FUN_108e1dd80(void)

{
  return;
}



/* Entry: 108e1dd84; end: 108e1de87; -[SCCaptionDefaultTextView textFrameContainsGesture:] */

ulong FUN_108e1dd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  func_0x00010c09ef00(param_7,param_6,*(undefined8 *)(param_5 + 0x98));
  uVar1 = *(ulong *)(param_5 + 0x98);
  func_0x00010bf20c00();
  _CGRectInset();
  uVar4 = param_1;
  uVar6 = param_2;
  _CGRectContainsPoint();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_7;
    func_0x00010c0df520();
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar3 = 0;
      do {
        uVar1 = param_7;
        func_0x00010c09f140(param_7,param_6,uVar3,*(undefined8 *)(param_5 + 0x98));
        uVar5 = param_1;
        uVar7 = param_2;
        _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar4,uVar6);
        if ((int)uVar1 != 0) break;
        uVar3 = uVar3 + 1;
        uVar2 = param_7;
        func_0x00010c0df520();
        uVar4 = uVar5;
        uVar6 = uVar7;
      } while (uVar3 < uVar2);
    }
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_7);
  return uVar1;
}



/* Entry: 108e1de88; end: 108e1deff; -[SCCaptionDefaultTextView colorChanged:] */

void FUN_108e1de88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = 1;
  func_0x00010c14df80(*(undefined8 *)(param_1 + 0x110),param_2,param_3);
  _objc_release(param_3);
  param_1 = param_1 + 0xf8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e1df00; end: 108e1df27; -[SCCaptionDefaultTextView pickedColor] */

void FUN_108e1df00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1df28; end: 108e1df2f; -[SCCaptionDefaultTextView setCaptionExitSource:] */

void FUN_108e1df28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 108e1df30; end: 108e1df37; -[SCCaptionDefaultTextView captionExitSource] */

undefined8 FUN_108e1df30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e1df38; end: 108e1df7b; -[SCCaptionDefaultTextView attributedText] */

void FUN_108e1df38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1df7c; end: 108e1dfcf; -[SCCaptionDefaultTextView adjustedYOffsetForContentBounds:textViewHeight:] */

double FUN_108e1df7c(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c262ce0();
  _CGRectGetMaxY();
  param_2 = dVar1 - param_2;
  func_0x00010c262ce0(param_3);
  _CGRectGetMinY();
  if (param_1 <= dVar1) {
    param_1 = dVar1;
  }
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 108e1dfd0; end: 108e1e11f; -[SCCaptionDefaultTextView _textContainerViewFrameForAnimation] */

double FUN_108e1dfd0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar2 = param_1;
  func_0x00010c071280();
  if ((int)lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    _CGRectGetHeight(uVar6,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150),
                     *(undefined8 *)(param_1 + 0x158));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x98));
    dVar5 = 0.0;
    func_0x00010b69090c(0,uVar6);
  }
  else {
    lVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf4de60(param_1);
    dVar4 = (double)lVar3;
    dVar7 = 3.4028234663852886e+38;
    func_0x00010c23d5a0(dVar4,0x47efffffe0000000,lVar2);
    _objc_release(lVar2);
    cVar1 = *(char *)(param_1 + 0x10);
    func_0x00010c262cc0(param_1);
    _CGRectGetHeight();
    dVar5 = dVar4;
    if (cVar1 == '\x01') {
      dVar5 = *(double *)(param_1 + 0x160);
      _CGRectGetHeight(dVar5,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                       *(undefined8 *)(param_1 + 0x178));
      dVar4 = dVar4 + dVar5;
      dVar5 = dVar4 * 0.5;
    }
    func_0x00010c086c00(param_1);
    func_0x00010befda80(*(double *)(param_1 + 0x88) + ((dVar5 - dVar4) - dVar7),dVar7,param_1);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x70));
    dVar4 = *(double *)(param_1 + 0x20);
    dVar5 = 0.0;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      dVar5 = *(double *)(param_1 + 0x160);
      _CGRectGetMinX(dVar5,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                     *(undefined8 *)(param_1 + 0x178));
    }
    dVar5 = dVar5 - dVar4;
    _CGRectGetWidth(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                    *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178));
  }
  return dVar5;
}



/* Entry: 108e1e120; end: 108e1e147; -[SCCaptionDefaultTextView _textViewFrameForAnimation] */

double FUN_108e1e120(double param_1,long param_2)

{
  func_0x00010c26cba0();
  return *(double *)(param_2 + 0x20) + param_1;
}



/* Entry: 108e1e148; end: 108e1e20f; -[SCCaptionDefaultTextView _captionCarouselContainerViewFrame] */

double FUN_108e1e148(long param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0xc5) == '\x01') {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x98));
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x98));
    _CGRectGetHeight();
  }
  else {
    _CGRectGetHeight(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                     *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
  }
  dVar1 = *(double *)(param_1 + 0x160);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    _CGRectGetWidth();
    dVar2 = *(double *)(param_1 + 0x140);
    _CGRectGetWidth(dVar2,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150),
                    *(undefined8 *)(param_1 + 0x158));
    dVar1 = (dVar1 - dVar2) * 0.5;
  }
  else {
    _CGRectGetMinX(dVar1,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                   *(undefined8 *)(param_1 + 0x178));
  }
  func_0x00010bf4de60(param_1);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x70));
  return dVar1;
}



/* Entry: 108e1e210; end: 108e1e3b3; -[SCCaptionDefaultTextView textContainerViewFrame] */

double FUN_108e1e210(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = param_1;
  func_0x00010c074c20();
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf4de60(param_1);
    dVar4 = (double)lVar3;
    dVar6 = 3.4028234663852886e+38;
    func_0x00010c23d5a0(dVar4,0x47efffffe0000000,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c071280();
    if ((int)lVar2 == 0) {
      func_0x00010c08aa60(param_1);
      dVar5 = dVar4;
      func_0x00010c262ce0(param_1);
      _CGRectGetHeight();
      dVar4 = dVar5 * dVar4;
      func_0x00010c262ce0(param_1);
      _CGRectGetMinY();
      dVar5 = dVar6 * -0.5 + dVar4 + dVar5;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x10);
      func_0x00010c262cc0(param_1);
      _CGRectGetHeight();
      dVar5 = dVar4;
      if (cVar1 == '\x01') {
        dVar5 = *(double *)(param_1 + 0x160);
        _CGRectGetHeight(dVar5,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                         *(undefined8 *)(param_1 + 0x178));
        dVar4 = dVar4 + dVar5;
        dVar5 = dVar4 * 0.5;
      }
      func_0x00010c086c00(param_1);
      dVar5 = *(double *)(param_1 + 0x88) + ((dVar5 - dVar4) - dVar6);
    }
    func_0x00010befda80(dVar5,dVar6,param_1);
    lVar2 = param_1;
    func_0x00010c071280();
    if ((int)lVar2 != 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x70));
      _CGRectGetHeight();
    }
    dVar4 = 0.0;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      dVar4 = *(double *)(param_1 + 0x160);
      _CGRectGetMinX(dVar4,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                     *(undefined8 *)(param_1 + 0x178));
    }
    _CGRectGetWidth(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                    *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178));
  }
  else {
    dVar4 = *(double *)(param_1 + 0x140);
    _CGRectGetWidth(dVar4,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150),
                    *(undefined8 *)(param_1 + 0x158));
    dVar4 = dVar4 * 0.5 - *(double *)(param_1 + 0x20);
    _CGRectGetHeight(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                     *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
  }
  return dVar4;
}



/* Entry: 108e1e3b4; end: 108e1e453; -[SCCaptionDefaultTextView textViewFrame] */

double FUN_108e1e3b4(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0xc5) == '\x01') {
    dVar3 = 0.0;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      dVar3 = *(double *)(param_1 + 0x160);
      _CGRectGetWidth(dVar3,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                      *(undefined8 *)(param_1 + 0x178));
      dVar2 = *(double *)(param_1 + 0x140);
      _CGRectGetWidth(dVar2,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150),
                      *(undefined8 *)(param_1 + 0x158));
      dVar3 = (dVar3 - dVar2) * 0.5;
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bf4cb20(param_1);
    dVar3 = (double)lVar1;
  }
  func_0x00010bf4de60(param_1);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x98));
  _CGRectGetHeight();
  return dVar3;
}



/* Entry: 108e1e454; end: 108e1e49f; -[SCCaptionDefaultTextView _updateLastVerticalWithY:] */

void FUN_108e1e454(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_2 + 0x160);
  _CGRectGetMinY(dVar1,*(undefined8 *)(param_2 + 0x168),*(undefined8 *)(param_2 + 0x170),
                 *(undefined8 *)(param_2 + 0x178));
  dVar2 = *(double *)(param_2 + 0x160);
  _CGRectGetHeight(dVar2,*(undefined8 *)(param_2 + 0x168),*(undefined8 *)(param_2 + 0x170),
                   *(undefined8 *)(param_2 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010c1b8f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_1 - dVar1) / dVar2,param_2,PTR_s_setLastVertical__11264be00);
  return;
}



/* Entry: 108e1e4a0; end: 108e1e4db; -[SCCaptionDefaultTextView _resetLayout] */

void FUN_108e1e4a0(long param_1)

{
  func_0x00010c26ba80();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c26cba0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010be64870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyEditingLayoutDidUpdate_112576bb8);
  return;
}



/* Entry: 108e1e4dc; end: 108e1e527; -[SCCaptionDefaultTextView resizeForEditing] */

void FUN_108e1e4dc(long param_1)

{
  func_0x00010c26ba80();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c26cba0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x110));
  func_0x00010bddb1c0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010be64870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyEditingLayoutDidUpdate_112576bb8);
  return;
}



/* Entry: 108e1e528; end: 108e1e5b3; -[SCCaptionDefaultTextView _notifyEditingLayoutDidUpdate] */

void FUN_108e1e528(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c071280();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf8c6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf8c6e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2fec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108e1e5b4; end: 108e1e76f; -[SCCaptionDefaultTextView viewDidLayoutSubviewsWithSuperviewBounds:superviewContentBounds:superviewEdgeInsets:] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000108e1e63c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_108e1e5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  undefined1 in_b0;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined1 in_register_00005001;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined1 in_register_00005002;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 in_register_00005003;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 in_register_00005004;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 in_register_00005005;
  undefined1 uVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 in_register_00005006;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 in_register_00005007;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double in_stack_00000000;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  long lVar4;
  
  uVar5 = SUB81(in_stack_00000018,0);
  uVar8 = (undefined1)((ulong)in_stack_00000018 >> 8);
  uVar11 = (undefined1)((ulong)in_stack_00000018 >> 0x10);
  uVar13 = (undefined1)((ulong)in_stack_00000018 >> 0x18);
  uVar15 = (undefined1)((ulong)in_stack_00000018 >> 0x20);
  uVar18 = (undefined1)((ulong)in_stack_00000018 >> 0x28);
  uVar21 = (undefined1)((ulong)in_stack_00000018 >> 0x30);
  uVar23 = (undefined1)((ulong)in_stack_00000018 >> 0x38);
  lVar4 = param_8;
  uVar25 = param_1;
  uVar29 = param_2;
  uVar31 = param_3;
  func_0x00010c262cc0();
  iVar3 = (int)lVar4;
  uVar26 = param_1;
  uVar30 = param_2;
  uVar32 = param_3;
  _CGRectEqualToRect(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar19,CONCAT14(uVar16,CONCAT13(uVar14
                                                  ,CONCAT12(uVar12,CONCAT11(uVar9,uVar6))))))),
                     param_1,param_2,param_3,
                     CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar18,CONCAT14(uVar15,CONCAT13(uVar13
                                                  ,CONCAT12(uVar11,CONCAT11(uVar8,uVar5))))))),
                     uVar25,uVar29,uVar31);
  uVar24 = in_register_00005007;
  uVar22 = in_register_00005006;
  uVar19 = in_register_00005005;
  uVar16 = in_register_00005004;
  uVar14 = in_register_00005003;
  uVar12 = in_register_00005002;
  uVar9 = in_register_00005001;
  uVar6 = in_b0;
  if (iVar3 != 0) {
    lVar4 = param_8;
    func_0x00010c262ce0();
    iVar3 = (int)lVar4;
    _CGRectEqualToRect(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar19,CONCAT14(uVar16,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(uVar9,uVar6)))))))
                       ,param_5,param_6,param_7,
                       CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar19,CONCAT14(uVar16,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(uVar9,uVar6)))))))
                       ,uVar26,uVar30,uVar32);
    if (iVar3 != 0) {
      lVar27 = -(ulong)(in_stack_00000010 == *(double *)(param_8 + 0x88));
      lVar28 = -(ulong)(in_stack_00000018 == *(double *)(param_8 + 0x90));
      lVar4 = -(ulong)(in_stack_00000000 == *(double *)(param_8 + 0x78));
      lVar2 = -(ulong)(in_stack_00000008 == *(double *)(param_8 + 0x80));
      bVar7 = ~(byte)lVar4;
      bVar10 = ~(byte)((ulong)lVar4 >> 8);
      bVar17 = ~(byte)lVar2;
      bVar20 = ~(byte)((ulong)lVar2 >> 8);
      uVar1 = NEON_umaxv(CONCAT17(~(byte)((ulong)lVar28 >> 8),
                                  CONCAT16(~(byte)lVar28,
                                           CONCAT15(~(byte)((ulong)lVar27 >> 8),
                                                    CONCAT14(~(byte)lVar27,
                                                             CONCAT13(bVar20,CONCAT12(bVar17,
                                                  CONCAT11(bVar10,bVar7))))))),2);
      func_0x00010c20fde0(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(bVar20,CONCAT14(bVar17,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(bVar10,bVar7))))))
                                  ),param_1,param_2,param_3,param_8);
      func_0x00010c20fe00(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(bVar20,CONCAT14(bVar17,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(bVar10,bVar7))))))
                                  ),param_5,param_6,param_7,param_8);
      *(double *)(param_8 + 0x78) = in_stack_00000000;
      *(double *)(param_8 + 0x80) = in_stack_00000008;
      *(double *)(param_8 + 0x88) = in_stack_00000010;
      *(double *)(param_8 + 0x90) = in_stack_00000018;
      if ((uVar1 & 1) == 0) {
        return;
      }
      goto LAB_108e1e74c;
    }
  }
  func_0x00010c20fde0(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar19,CONCAT14(uVar16,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(uVar9,uVar6)))))))
                      ,param_1,param_2,param_3,param_8);
  func_0x00010c20fe00(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar19,CONCAT14(uVar16,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(uVar9,uVar6)))))))
                      ,param_5,param_6,param_7,param_8);
  *(double *)(param_8 + 0x78) = in_stack_00000000;
  *(double *)(param_8 + 0x80) = in_stack_00000008;
  *(double *)(param_8 + 0x88) = in_stack_00000010;
  *(double *)(param_8 + 0x90) = in_stack_00000018;
LAB_108e1e74c:
                    /* WARNING: Could not recover jumptable at 0x00010c13a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_8,PTR_s_resizeForEditing_11262c298);
  return;
}



/* Entry: 108e1e770; end: 108e1e777; -[SCCaptionDefaultTextView isPinningSupported] */

undefined8 FUN_108e1e770(void)

{
  return 0;
}



/* Entry: 108e1e778; end: 108e1e9fb; -[SCCaptionDefaultTextView _adjustAnimationsSpeedForView:withSpeed:] */

void FUN_108e1e778(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  puVar10 = &uStack_200;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar12 = param_7;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar12;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = lVar11;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar14 = *plStack_1b0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1b0 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        lVar1 = param_7;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf03c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar1 = lVar2;
        func_0x00010bf51e00();
        func_0x00010c207c40((float)param_1);
        lVar3 = param_7;
        func_0x00010c08c0e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b200();
        _objc_release(lVar3);
        lVar3 = param_7;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6c20();
        _objc_release(lVar3);
        _objc_release(lVar1);
        _objc_release(lVar2);
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      lVar12 = lVar11;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar11);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  lVar12 = param_7;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar12;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar14 = *plStack_1f0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1f0 != lVar14) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bdc9280(param_1,param_5);
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar12;
      puVar10 = &uStack_200;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar6);
      }
      func_0x00010bdc9280(0x4000000000000000,param_7);
      puVar13 = puVar13 + 1;
    } while (puVar4 != puVar13);
    puVar4 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126cbf60;
    _objc_alloc_init(PTR_PTR_1126cbf60);
    func_0x00010c20eb40();
    func_0x00010c166c00(puVar5);
    func_0x00010c206c40(puVar5);
    puVar13 = puVar4;
    func_0x00010c26b700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar5);
    _objc_release(puVar13);
    func_0x00010c1a5d40(puVar5);
    puVar13 = puVar4;
    func_0x00010c26ca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar13);
    puVar13 = puVar4;
    func_0x00010c26ca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c190940(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar13);
    puVar13 = puVar4;
    func_0x00010c26ca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c193ba0(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar13);
    func_0x00010c17a840(0x3fe0000000000000,puVar5);
    func_0x00010c08aa60(puVar4);
    func_0x00010c17a860(puVar5);
    puVar13 = puVar4;
    func_0x00010c26ba60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar16 = param_3;
    func_0x00010c262ce0(puVar4);
    puVar6 = puVar4;
    func_0x00010c26ba60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar17 = param_4;
    func_0x00010c262ce0(puVar4);
    func_0x00010c1e9aa0(param_3 / dVar16,param_4 / dVar17,puVar5);
    _objc_release(puVar6);
    _objc_release(puVar13);
    func_0x00010c1ee7a0(0,puVar5);
    func_0x00010c074c20(puVar4);
    func_0x00010c1a7f60(puVar5);
    func_0x00010c071280(puVar4);
    func_0x00010c193b00(puVar5);
    func_0x00010c086c00(puVar4);
    func_0x00010c1b6e20(puVar5);
    uVar7 = *(undefined8 *)(puVar4 + 0x60);
    func_0x00010bf51e00(uVar7);
    func_0x00010c211940(puVar5);
    _objc_release(uVar7);
    puVar13 = puVar4;
    func_0x00010be1dde0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c26ca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c26ba60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar13;
    FUN_108e23654(puVar13,puVar6,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211920(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    func_0x00010c217ac0(puVar5);
    puVar6 = puVar4;
    func_0x00010c081660();
    func_0x00010c1b5180(puVar5);
    if ((int)puVar6 != 0) {
      puVar6 = puVar4;
      func_0x00010c279100(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219440(puVar5);
      _objc_release(puVar6);
    }
    func_0x00010c081160(puVar4);
    func_0x00010c1b5080(puVar5);
    func_0x00010c21f580(puVar5);
    func_0x00010c178860(puVar5);
    uVar7 = *(undefined8 *)(puVar4 + 0x30);
    func_0x00010c113040(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b00(puVar5);
    _objc_release(uVar7);
    func_0x00010c1db640(puVar5);
    func_0x00010c280560(puVar4);
    func_0x00010c21b740(puVar5);
    func_0x00010c0ff520(puVar4);
    func_0x00010c1dd660(puVar5);
    puVar6 = puVar4;
    func_0x00010bf8c1c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193640(puVar5);
    _objc_release(puVar6);
    func_0x00010bfc0860(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e1e9fc; end: 108e1ebb3; -[SCCaptionDefaultTextView _adjustKeyboardAnimationSpeed:] */

void FUN_108e1e9fc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_retain(puVar3);
  puVar1 = puVar3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010bdc9280(0x4000000000000000,param_5);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar1 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126cbf60;
    _objc_alloc_init(PTR_PTR_1126cbf60);
    func_0x00010c20eb40();
    func_0x00010c166c00(puVar2);
    func_0x00010c206c40(puVar2);
    puVar9 = puVar1;
    func_0x00010c26b700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(puVar9);
    func_0x00010c1a5d40(puVar2);
    puVar9 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar9 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c190940(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar9 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c193ba0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar9);
    func_0x00010c17a840(0x3fe0000000000000,puVar2);
    func_0x00010c08aa60(puVar1);
    func_0x00010c17a860(puVar2);
    puVar9 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar10 = param_3;
    func_0x00010c262ce0(puVar1);
    puVar3 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar11 = param_4;
    func_0x00010c262ce0(puVar1);
    func_0x00010c1e9aa0(param_3 / dVar10,param_4 / dVar11,puVar2);
    _objc_release(puVar3);
    _objc_release(puVar9);
    func_0x00010c1ee7a0(0,puVar2);
    func_0x00010c074c20(puVar1);
    func_0x00010c1a7f60(puVar2);
    func_0x00010c071280(puVar1);
    func_0x00010c193b00(puVar2);
    func_0x00010c086c00(puVar1);
    func_0x00010c1b6e20(puVar2);
    uVar4 = *(undefined8 *)(puVar1 + 0x60);
    func_0x00010bf51e00(uVar4);
    func_0x00010c211940(puVar2);
    _objc_release(uVar4);
    puVar9 = puVar1;
    func_0x00010be1dde0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    FUN_108e23654(puVar9,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211920(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c217ac0(puVar2);
    puVar3 = puVar1;
    func_0x00010c081660();
    func_0x00010c1b5180(puVar2);
    if ((int)puVar3 != 0) {
      puVar3 = puVar1;
      func_0x00010c279100(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219440(puVar2);
      _objc_release(puVar3);
    }
    func_0x00010c081160(puVar1);
    func_0x00010c1b5080(puVar2);
    func_0x00010c21f580(puVar2);
    func_0x00010c178860(puVar2);
    uVar4 = *(undefined8 *)(puVar1 + 0x30);
    func_0x00010c113040(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b00(puVar2);
    _objc_release(uVar4);
    func_0x00010c1db640(puVar2);
    func_0x00010c280560(puVar1);
    func_0x00010c21b740(puVar2);
    func_0x00010c0ff520(puVar1);
    func_0x00010c1dd660(puVar2);
    puVar3 = puVar1;
    func_0x00010bf8c1c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193640(puVar2);
    _objc_release(puVar3);
    func_0x00010bfc0860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e1ebb4; end: 108e1ecb3; -[SCCaptionDefaultTextView shareLoggingParameters] */

void FUN_108e1ebb4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,*(undefined1 *)(param_5 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126cbf60;
    _objc_alloc_init(PTR_PTR_1126cbf60);
    func_0x00010c20eb40();
    func_0x00010c166c00(puVar3);
    func_0x00010c206c40(puVar3);
    puVar2 = puVar1;
    func_0x00010c26b700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3);
    _objc_release(puVar2);
    func_0x00010c1a5d40(puVar3);
    puVar2 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c190940(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c193ba0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c17a840(0x3fe0000000000000,puVar3);
    func_0x00010c08aa60(puVar1);
    func_0x00010c17a860(puVar3);
    puVar2 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar9 = param_3;
    func_0x00010c262ce0(puVar1);
    puVar4 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar10 = param_4;
    func_0x00010c262ce0(puVar1);
    func_0x00010c1e9aa0(param_3 / dVar9,param_4 / dVar10,puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1ee7a0(0,puVar3);
    func_0x00010c074c20(puVar1);
    func_0x00010c1a7f60(puVar3);
    func_0x00010c071280(puVar1);
    func_0x00010c193b00(puVar3);
    func_0x00010c086c00(puVar1);
    func_0x00010c1b6e20(puVar3);
    uVar5 = *(undefined8 *)(puVar1 + 0x60);
    func_0x00010bf51e00(uVar5);
    func_0x00010c211940(puVar3);
    _objc_release(uVar5);
    puVar2 = puVar1;
    func_0x00010be1dde0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c26ca80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c26ba60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    FUN_108e23654(puVar2,puVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211920(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010c217ac0(puVar3);
    puVar4 = puVar1;
    func_0x00010c081660();
    func_0x00010c1b5180(puVar3);
    if ((int)puVar4 != 0) {
      puVar4 = puVar1;
      func_0x00010c279100(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219440(puVar3);
      _objc_release(puVar4);
    }
    func_0x00010c081160(puVar1);
    func_0x00010c1b5080(puVar3);
    func_0x00010c21f580(puVar3);
    func_0x00010c178860(puVar3);
    uVar5 = *(undefined8 *)(puVar1 + 0x30);
    func_0x00010c113040(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b00(puVar3);
    _objc_release(uVar5);
    func_0x00010c1db640(puVar3);
    func_0x00010c280560(puVar1);
    func_0x00010c21b740(puVar3);
    func_0x00010c0ff520(puVar1);
    func_0x00010c1dd660(puVar3);
    puVar4 = puVar1;
    func_0x00010bf8c1c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193640(puVar3);
    _objc_release(puVar4);
    func_0x00010bfc0860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e1ecb4; end: 108e1f0a7; -[SCCaptionDefaultTextView state] */

void FUN_108e1ecb4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126cbf60;
  _objc_alloc_init(PTR_PTR_1126cbf60);
  func_0x00010c20eb40();
  func_0x00010c166c00(puVar1);
  func_0x00010c206c40(puVar1);
  lVar2 = param_5;
  func_0x00010c26b700(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(lVar2);
  func_0x00010c1a5d40(puVar1);
  lVar2 = param_5;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  func_0x00010c190940(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  func_0x00010c193ba0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c17a840(0x3fe0000000000000,puVar1);
  func_0x00010c08aa60(param_5);
  func_0x00010c17a860(puVar1);
  lVar2 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = param_3;
  func_0x00010c262ce0(param_5);
  lVar3 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar8 = param_4;
  func_0x00010c262ce0(param_5);
  func_0x00010c1e9aa0(param_3 / dVar7,param_4 / dVar8,puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1ee7a0(0,puVar1);
  func_0x00010c074c20(param_5);
  func_0x00010c1a7f60(puVar1);
  func_0x00010c071280(param_5);
  func_0x00010c193b00(puVar1);
  func_0x00010c086c00(param_5);
  func_0x00010c1b6e20(puVar1);
  uVar4 = *(undefined8 *)(param_5 + 0x60);
  func_0x00010bf51e00(uVar4);
  func_0x00010c211940(puVar1);
  _objc_release(uVar4);
  lVar2 = param_5;
  func_0x00010be1dde0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c26ba60(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  FUN_108e23654(lVar2,lVar3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211920(puVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010c217ac0(puVar1);
  lVar3 = param_5;
  func_0x00010c081660();
  func_0x00010c1b5180(puVar1);
  if ((int)lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010c279100(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219440(puVar1);
    _objc_release(lVar3);
  }
  func_0x00010c081160(param_5);
  func_0x00010c1b5080(puVar1);
  func_0x00010c21f580(puVar1);
  func_0x00010c178860(puVar1);
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c113040(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169b00(puVar1);
  _objc_release(uVar4);
  func_0x00010c1db640(puVar1);
  func_0x00010c280560(param_5);
  func_0x00010c21b740(puVar1);
  func_0x00010c0ff520(param_5);
  func_0x00010c1dd660(puVar1);
  lVar3 = param_5;
  func_0x00010bf8c1c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193640(puVar1);
  _objc_release(lVar3);
  func_0x00010bfc0860(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2740(puVar1);
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e1f0a8; end: 108e1f0af; -[SCCaptionDefaultTextView alignableTouchControlView] */

undefined8 FUN_108e1f0a8(void)

{
  return 0;
}



/* Entry: 108e1f0b0; end: 108e1f0b3; -[SCCaptionDefaultTextView alignableContentRect] */

void FUN_108e1f0b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textContainerViewFrame_1126788c8);
  return;
}



/* Entry: 108e1f0b4; end: 108e1f0c3; -[SCCaptionDefaultTextView shouldProcessGesture:] */

byte FUN_108e1f0b4(long param_1)

{
  return (*(byte *)(param_1 + 0xc5) ^ 0xff) & 1;
}



/* Entry: 108e1f0c4; end: 108e1f0c7; -[SCCaptionDefaultTextView updateAnchorState:withGestureRecognizer:] */

void FUN_108e1f0c4(void)

{
  return;
}



/* Entry: 108e1f0c8; end: 108e1f107; -[SCCaptionDefaultTextView deletableView] */

void FUN_108e1f0c8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  func_0x00010bf2f800();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
  }
  else {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


