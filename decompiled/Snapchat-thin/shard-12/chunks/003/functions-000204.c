/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f8738c; end: 108f8765f; -[SCSectionKitButtonViewProvider setViewModel:] */

void FUN_108f8738c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  puVar5 = *(undefined **)(param_3 + 8);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  puVar1 = param_5;
  if (puVar5 != param_5) {
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    else {
      puVar1 = puVar5;
      func_0x00010c071ae0();
      _objc_release(param_5);
      _objc_release(puVar5);
      if (((ulong)puVar1 & 1) != 0) goto LAB_108f87640;
    }
    puVar5 = PTR_PTR_1126c5278;
    _objc_retain(param_5);
    _objc_opt_class(puVar5);
    puVar1 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar5);
    puVar5 = param_5;
    if (((ulong)puVar1 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(param_5);
    puVar1 = puVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_3 + 8);
    *(undefined **)(param_3 + 8) = puVar1;
    _objc_release(uVar4);
    puVar2 = (undefined *)(param_3 + 0x10);
    _objc_loadWeakRetained();
    puVar1 = PTR_PTR_1126aec40;
    _objc_opt_class(PTR_PTR_1126aec40);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010c25dfa0(puVar5);
    func_0x00010c20eaa0(puVar1);
    puVar2 = puVar5;
    func_0x00010c2711a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar5;
    func_0x00010c23b7c0();
    puVar2 = PTR_PTR_1126b0c40;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x00010bfe58c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = puVar5;
        func_0x00010bfe58c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe8220(puVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108f875a8;
      }
    }
    else {
      func_0x00010c23b7c0(puVar5);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x4032000000000000;
      param_2 = 0x4032000000000000;
      func_0x00010bfe7ac0(0x4032000000000000,0x4032000000000000,0x3ff0000000000000,
                          0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,puVar2);
      _objc_retainAutoreleasedReturnValue();
LAB_108f875a8:
      func_0x00010c1a9fc0(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    func_0x00010c076be0(puVar5);
    func_0x00010c1beb60(puVar1);
    func_0x00010c0699c0(puVar1);
    func_0x00010c0699c0(puVar1);
    func_0x00010c19f0e0(0,0,param_1,param_2,puVar1);
    func_0x00010c198080(puVar1);
    func_0x00010befbd60(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
LAB_108f87640:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108f87660; end: 108f87737; -[SCSectionKitButtonViewProvider _didTapTrailingButton] */

void FUN_108f87660(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c5278;
  uVar5 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    uVar3 = uVar1;
    func_0x00010beeecc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd00e0(lVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f87738; end: 108f8773f; -[SCSectionKitButtonViewProvider viewModel] */

undefined8 FUN_108f87738(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f87740; end: 108f87757; -[SCSectionKitButtonViewProvider accessoryView] */

void FUN_108f87740(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f87758; end: 108f87763; -[SCSectionKitButtonViewProvider setAccessoryView:] */

void FUN_108f87758(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108f87764; end: 108f8777b; -[SCSectionKitButtonViewProvider actionHandlingDelegate] */

void FUN_108f87764(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8777c; end: 108f87787; -[SCSectionKitButtonViewProvider setActionHandlingDelegate:] */

void FUN_108f8777c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f87788; end: 108f877bb; -[SCSectionKitButtonViewProvider .cxx_destruct] */

void FUN_108f87788(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f877bc; end: 108f87bb7; -[SCSectionKitDropdownButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f877bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR_PTR_1126ff838;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0(puVar3);
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_11277e918;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar3;
    _objc_release(uVar7);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar10));
    puVar3 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar9 = (long)_DAT_11277e91c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar7);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar5 = puVar3;
    func_0x000108f8a368();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar8 = (long)_DAT_11277e920;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_70 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_68 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_60 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar8 = (long)_DAT_11277e924;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar5);
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c207380(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1887e0(0x4014000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108f87bb8;
    puStack_98 = &UNK_110acf550;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e928);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e928) = puVar3;
    _objc_release(uVar7);
    func_0x00010bed4320(puVar1);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release();
    unaff_x22 = &puStack_b0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x22 + 0x20));
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(puVar2);
  puVar1 = (undefined8 *)PTR_PTR_1126c2978;
  _objc_alloc(PTR_PTR_1126c2978);
  puVar3 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  _objc_release(puVar3);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c066fa0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 108f87bb8; end: 108f87c33;  */

void FUN_108f87bb8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c2978;
  _objc_alloc(PTR_PTR_1126c2978);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  _objc_release(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c066fa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f87c34; end: 108f87d2b; -[SCSectionKitDropdownButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f87c34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff838;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11277e924;
  uVar2 = *(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28;
  dVar3 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040(uVar2,dVar3,*(undefined8 *)(param_1 + lVar1));
  func_0x00010c19f0e0(0x4020000000000000,0x4018000000000000,uVar2,dVar3,
                      *(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3 * 0.5);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277e928);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(uVar2);
  func_0x00010c1842e0(dVar3 * 0.5,uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 108f87d2c; end: 108f87d67; -[SCSectionKitDropdownButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108f87d2c(long param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
  dVar2 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040(dVar1,dVar2,*(undefined8 *)(param_1 + _DAT_11277e924));
  auVar3._0_8_ = dVar1 + 16.0;
  auVar3._8_8_ = dVar2 + 12.0;
  return auVar3;
}



/* Entry: 108f87d68; end: 108f87f4b; -[SCSectionKitDropdownButton setTitle:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f87d68(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11277e91c;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  if (param_3 == uVar1) {
    _objc_release(uVar1);
    _objc_release(param_3);
LAB_108f87e14:
    uVar3 = *(ulong *)(param_1 + _DAT_11277e918);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(uVar3);
    if (param_4 == uVar3) {
      _objc_release(uVar3);
      _objc_release(param_4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      goto LAB_108f87f28;
    }
    uVar2 = param_4;
    if (uVar3 == 0) goto LAB_108f87e84;
    func_0x00010c071ae0(param_4,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_108f87f28;
  }
  else {
    uVar2 = param_3;
    if (uVar1 == 0) {
LAB_108f87e84:
      _objc_release(uVar2);
    }
    else {
      func_0x00010c071ae0(param_3,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(param_3);
      if ((int)uVar2 != 0) goto LAB_108f87e14;
    }
    _objc_release(uVar1);
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,uVar1 == 0);
  uVar1 = param_4;
  func_0x00010bfe9720(param_4,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277e918;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,param_4 == 0);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
LAB_108f87f28:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f87f4c; end: 108f87f87; -[SCSectionKitDropdownButton useSnapchatPlusStyling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f87f4c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277e92c) = 1;
  func_0x00010bed4320();
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108f87f88; end: 108f8806f; -[SCSectionKitDropdownButton useNonSnapchatPlusStyling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f87f88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x66);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11277e918),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11277e91c),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x49);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11277e920),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f88070; end: 108f88113; -[SCSectionKitDropdownButton _updateBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f88070(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e928);
  if (*(char *)(param_1 + _DAT_11277e92c) == '\x01') {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    uVar2 = 0;
  }
  else {
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
    uVar2 = 0x3ff0000000000000;
  }
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f88114; end: 108f88183; -[SCSectionKitDropdownButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f88114(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e928,0);
  _objc_storeStrong(param_1 + _DAT_11277e91c,0);
  _objc_storeStrong(param_1 + _DAT_11277e920,0);
  _objc_storeStrong(param_1 + _DAT_11277e918,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e924,0);
  return;
}



/* Entry: 108f88184; end: 108f883b3; -[SCSectionKitDropdownButtonViewProvider setViewModel:] */

void FUN_108f88184(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_5);
  uVar4 = *(ulong *)(param_3 + 8);
  _objc_retain(uVar4);
  _objc_retain(param_5);
  uVar1 = param_5;
  if (uVar4 != param_5) {
    if (param_5 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_5);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108f88374;
    }
    puVar2 = PTR_PTR_1126dc9a8;
    _objc_retain(param_5);
    _objc_opt_class(puVar2);
    uVar1 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar4 = param_5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_5);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_3 + 8);
    *(ulong *)(param_3 + 8) = uVar1;
    _objc_release(uVar3);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_108f883b4;
    uStack_50 = 0x108f883c4;
    uStack_48 = 0;
    uVar3 = 0xc2000000;
    func_0x00010c0bd2e0(uVar4);
    func_0x00010c219b60(puStack_68[5]);
    func_0x00010c0699c0(puStack_68[5]);
    func_0x00010c0699c0(puStack_68[5]);
    func_0x00010c19f0e0(0,0,uVar3,param_2,puStack_68[5]);
    func_0x00010c198080(puStack_68[5]);
    func_0x00010befbd60(puStack_68[5]);
    __Block_object_dispose(&uStack_70,8);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
LAB_108f88374:
  _objc_release(param_5);
  return;
}



/* Entry: 108f883b4; end: 108f883cb;  */

void FUN_108f883b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f883cc; end: 108f884db;  */

void FUN_108f883cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126dc9e0;
  _objc_opt_class(PTR_PTR_1126dc9e0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar6 = param_3;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    func_0x00010c216280(uVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216280(uVar1);
    _objc_release(puVar3);
  }
  if (param_5 == 0) {
    func_0x00010c290620(uVar1);
  }
  else {
    func_0x00010c290a60();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f884dc; end: 108f8856f;  */

void FUN_108f884dc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = lVar6 + 0x10;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126dcc08;
  _objc_opt_class(PTR_PTR_1126dcc08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c216240(uVar1);
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108f88570; end: 108f88647; -[SCSectionKitDropdownButtonViewProvider _didTapButton] */

void FUN_108f88570(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126dc9a8;
  uVar5 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    uVar3 = uVar1;
    func_0x00010beeecc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd00e0(lVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f88648; end: 108f8864f; -[SCSectionKitDropdownButtonViewProvider viewModel] */

undefined8 FUN_108f88648(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f88650; end: 108f88667; -[SCSectionKitDropdownButtonViewProvider accessoryView] */

void FUN_108f88650(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f88668; end: 108f88673; -[SCSectionKitDropdownButtonViewProvider setAccessoryView:] */

void FUN_108f88668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108f88674; end: 108f8868b; -[SCSectionKitDropdownButtonViewProvider actionHandlingDelegate] */

void FUN_108f88674(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8868c; end: 108f88697; -[SCSectionKitDropdownButtonViewProvider setActionHandlingDelegate:] */

void FUN_108f8868c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f88698; end: 108f886cb; -[SCSectionKitDropdownButtonViewProvider .cxx_destruct] */

void FUN_108f88698(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f886cc; end: 108f887cb; -[SCSectionKitImageViewProvider init] */

undefined8 * FUN_108f886cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff840;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 108f887cc; end: 108f88827;  */

void FUN_108f887cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c050900(puVar1,param_2,param_1,PTR_s_handleTap__1125d24c8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f88828; end: 108f8890f; -[SCSectionKitImageViewProvider setViewModel:] */

void FUN_108f88828(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x20);
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
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108f888fc;
    }
    puVar2 = PTR_PTR_1126b53d8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar4;
    _objc_release(uVar3);
    func_0x00010bf475e0(param_1);
  }
LAB_108f888fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f88910; end: 108f889f7; -[SCSectionKitImageViewProvider setAccessoryView:] */

void FUN_108f88910(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != uVar1) {
    lVar2 = param_1;
    func_0x00010beed360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe6360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    _objc_storeWeak(param_1 + 0x10,uVar1);
    _objc_release(uVar1);
    func_0x00010bf475e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f889f8; end: 108f88c3f; -[SCSectionKitImageViewProvider configureView] */

void FUN_108f889f8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar2 = param_1;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b53d8;
  _objc_opt_class(PTR_PTR_1126b53d8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c270f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beecfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (uVar6 != 0) {
    uVar4 = uVar2;
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beecfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610a0(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  uVar4 = uVar2;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c21e900(uVar1);
  func_0x00010c198080(uVar1);
  func_0x00010c161080(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  if (uVar4 == 0) {
    func_0x00010bfe6360(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(uVar1);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(uVar1);
  }
  _objc_release(uVar7);
  func_0x00010c23d620(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f88c40; end: 108f88d17; -[SCSectionKitImageViewProvider handleTap:] */

void FUN_108f88c40(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b53d8;
  uVar5 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    uVar3 = uVar1;
    func_0x00010beeecc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd00e0(lVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f88d18; end: 108f88d2f; -[SCSectionKitImageViewProvider accessoryView] */

void FUN_108f88d18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f88d30; end: 108f88d47; -[SCSectionKitImageViewProvider actionHandlingDelegate] */

void FUN_108f88d30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f88d48; end: 108f88d53; -[SCSectionKitImageViewProvider setActionHandlingDelegate:] */

void FUN_108f88d48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f88d54; end: 108f88d5b; -[SCSectionKitImageViewProvider viewModel] */

undefined8 FUN_108f88d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f88d5c; end: 108f88d9b; -[SCSectionKitImageViewProvider .cxx_destruct] */

void FUN_108f88d5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f88d9c; end: 108f88deb; -[SCSectionKitListSectionViewMoreProvider initWithIsCondensed:groupStyle:] */

void FUN_108f88d9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 108f88dec; end: 108f88df7; +[SCSectionKitListSectionViewMoreProvider viewMoreCellClass] */

void FUN_108f88dec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dcbe8);
  return;
}



/* Entry: 108f88df8; end: 108f88e13; +[SCSectionKitListSectionViewMoreProvider viewMoreCellReuseIdentifier] */

void FUN_108f88df8(void)

{
  _objc_opt_class(PTR_PTR_1126dcbe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 108f88e14; end: 108f88e87; -[SCSectionKitListSectionViewMoreProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

void FUN_108f88e14(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126b5aa8;
  _objc_alloc(PTR_PTR_1126b5aa8);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c20(puVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f88e88; end: 108f88e8f; -[SCSectionKitListSectionViewMoreProvider shouldRoundLastCellInList] */

undefined8 FUN_108f88e88(void)

{
  return 0;
}



/* Entry: 108f88e90; end: 108f88ea7; -[SCSectionKitListSectionViewMoreProvider viewMoreProviderDelegate] */

void FUN_108f88e90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f88ea8; end: 108f88eb3; -[SCSectionKitListSectionViewMoreProvider setViewMoreProviderDelegate:] */

void FUN_108f88ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f88eb4; end: 108f88ebb; -[SCSectionKitListSectionViewMoreProvider .cxx_destruct] */

void FUN_108f88eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 108f88ebc; end: 108f88f33; -[SCSectionKitSectionHeaderSupplementaryViewProvider initWithHeaderViewModel:] */

undefined1 * FUN_108f88ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f88f34; end: 108f88f3b; -[SCSectionKitSectionHeaderSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_108f88f34(void)

{
  return 1;
}



/* Entry: 108f88f3c; end: 108f89007; -[SCSectionKitSectionHeaderSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_108f88f3c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 0x18;
      _objc_loadWeakRetained();
      puVar3 = puVar1;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c51b0;
      _objc_opt_class(PTR_PTR_1126c51b0);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar6);
      func_0x00010c161980(puVar6);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f89008; end: 108f890ef; -[SCSectionKitSectionHeaderSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_108f89008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c51b0;
    _objc_opt_class(PTR_PTR_1126c51b0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010c2226c0(uVar5);
    func_0x00010c161980(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108f890f0; end: 108f89163; -[SCSectionKitSectionHeaderSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined8 FUN_108f890f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  else {
    func_0x00010c23d6e0(param_1,0x7fefffffffffffff,PTR_PTR_1126c51b0,param_3,
                        *(undefined8 *)(param_2 + 8));
  }
  return param_1;
}



/* Entry: 108f89164; end: 108f8916b; -[SCSectionKitSectionHeaderSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_108f89164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8916c; end: 108f89173; -[SCSectionKitSectionHeaderSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_108f8916c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108f89174; end: 108f8918b; -[SCSectionKitSectionHeaderSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_108f89174(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8918c; end: 108f89197; -[SCSectionKitSectionHeaderSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_108f8918c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f89198; end: 108f8919f; -[SCSectionKitSectionHeaderSupplementaryViewProvider actionHandler] */

undefined8 FUN_108f89198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f891a0; end: 108f891cf; -[SCSectionKitSectionHeaderSupplementaryViewProvider setActionHandler:] */

void FUN_108f891a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108f891d0; end: 108f89213; -[SCSectionKitSectionHeaderSupplementaryViewProvider .cxx_destruct] */

void FUN_108f891d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f89214; end: 108f894c3; -[SCSectionKitSelectBarProvider initWithSelectionTracker:type:addAChatVisible:] */

undefined8 *
FUN_108f89214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_1126ff858;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dcc20;
    _objc_alloc();
    func_0x00010c055880();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 4) = param_5;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar4 = puVar1[1];
    func_0x00010bf6d420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108f894c4;
    puStack_98 = &UNK_1108531d0;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
    uVar4 = puVar1[1];
    func_0x00010c28d580(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108f894c4; end: 108f89553;  */

void FUN_108f894c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f89554; end: 108f8975b; -[SCSectionKitSelectBarProvider _updateWithItemToSelectionStateMap:] */

undefined8 * FUN_108f89554(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  undefined8 *puVar8;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = &uStack_130;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lStack_138 = *plStack_120;
    unaff_x21 = &PTR____CFConstantStringClassReference_110f52df8;
    do {
      unaff_x28 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lStack_138) {
          _objc_enumerationMutation(param_3);
        }
        puVar8 = *(undefined8 **)(lStack_128 + (long)unaff_x28 * 8);
        puVar5 = param_3;
        func_0x00010c0e00e0(param_3,param_2,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010bf1f3c0();
        _objc_release(puVar5);
        if ((int)puVar2 == 0) {
          func_0x00010c12cc20(*(undefined8 *)(param_1 + 0x28),param_2,puVar8);
        }
        else {
          func_0x00010bef94e0();
        }
        unaff_x24 = puVar8;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x00010c0720c0();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x23 = puVar8;
        if (((ulong)unaff_x27 & 1) == 0) {
          unaff_x23 = param_3;
          func_0x00010c0e00e0(param_3,param_2,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x23;
          func_0x00010bf1f3c0();
          lVar6 = *(long *)(param_1 + 0x18) + -1;
          if ((int)puVar5 != 0) {
            lVar6 = *(long *)(param_1 + 0x18) + 1;
          }
          *(long *)(param_1 + 0x18) = lVar6;
          _objc_release(unaff_x23);
        }
        unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
      } while (puVar1 != unaff_x28);
      puVar5 = &uStack_130;
      puVar1 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar1 != (undefined8 *)0x0);
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar5 = (undefined8 *)(ulong)(*(long *)(param_1 + 0x18) != 0);
    func_0x00010c1650c0(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108f8975c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  ppuStack_168 = unaff_x21;
  lStack_160 = param_1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar2 = puVar5;
  func_0x00010bf52a60(puVar5,param_2,&uStack_270,auStack_228,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    lVar6 = *plStack_260;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != lVar6) {
          _objc_enumerationMutation(puVar5);
        }
        uVar7 = *(undefined8 *)(lStack_268 + (long)puVar8 * 8);
        puVar3 = puVar5;
        func_0x00010c0e00e0(puVar5,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c067fc0();
        _objc_release(puVar3);
        func_0x00010c286b20(puVar1[5],param_2,uVar7,puVar4);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar2 != puVar8);
      puVar2 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_270,auStack_228,0x10);
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar5;
  }
  ___stack_chk_fail();
  return (undefined8 *)puVar5[5];
}



/* Entry: 108f8975c; end: 108f89893; -[SCSectionKitSelectBarProvider _updateSelectionItemTitle:] */

long FUN_108f8975c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        lVar2 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c067fc0();
        _objc_release(lVar2);
        func_0x00010c286b20(*(undefined8 *)(param_1 + 0x28),param_2,uVar4,lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x28);
}



/* Entry: 108f89894; end: 108f8989b; -[SCSectionKitSelectBarProvider selectBar] */

undefined8 FUN_108f89894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f8989c; end: 108f898d7; -[SCSectionKitSelectBarProvider .cxx_destruct] */

void FUN_108f8989c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f898d8; end: 108f89b67; -[SCSectionKitStoryAudienceDropdownButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f898d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126ff860;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar6 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x20 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar8 = (long)_DAT_11277e97c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar7);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c165e00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000108f8a368();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar9 = (long)_DAT_11277e980;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uStack_78 = *(undefined8 *)((long)puVar1 + lVar8);
    uStack_70 = *(undefined8 *)((long)puVar1 + lVar9);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    lVar8 = (long)_DAT_11277e984;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar4);
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c207380(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1887e0(0x4014000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar6 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108f89b68;
  puStack_b8 = PTR_PTR_1126ff860;
  puStack_c0 = puVar6;
  puStack_b0 = unaff_x20;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_layoutSubviews_112600e60);
  lVar8 = (long)_DAT_11277e984;
  uVar7 = *(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28;
  uVar10 = *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040(uVar7,uVar10,*(undefined8 *)((long)puVar6 + lVar8));
  func_0x00010c19f0e0(0x4020000000000000,0x4018000000000000,uVar7,uVar10,
                      *(undefined8 *)((long)puVar6 + lVar8));
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar6);
  return puVar6;
}



/* Entry: 108f89b68; end: 108f89bff; -[SCSectionKitStoryAudienceDropdownButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f89b68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff860;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11277e984;
  uVar2 = *(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28;
  uVar3 = *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040(uVar2,uVar3,*(undefined8 *)(param_1 + lVar1));
  func_0x00010c19f0e0(0x4020000000000000,0x4018000000000000,uVar2,uVar3,
                      *(undefined8 *)(param_1 + lVar1));
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(param_1);
  return;
}



/* Entry: 108f89c00; end: 108f89c3b; -[SCSectionKitStoryAudienceDropdownButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108f89c00(long param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
  dVar2 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040(dVar1,dVar2,*(undefined8 *)(param_1 + _DAT_11277e984));
  auVar3._0_8_ = dVar1 + 16.0;
  auVar3._8_8_ = dVar2 + 12.0;
  return auVar3;
}



/* Entry: 108f89c3c; end: 108f89cbb; -[SCSectionKitStoryAudienceDropdownButton setHighlighted:] */

void FUN_108f89c3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff860;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 108f89cbc; end: 108f89dcb; -[SCSectionKitStoryAudienceDropdownButton setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f89cbc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e97c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
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
      if ((uVar2 & 1) != 0) goto LAB_108f89db4;
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    uVar1 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,uVar1 == 0);
    uVar1 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c1a7f60(param_1,param_2,uVar1 == 0);
    func_0x00010c069fa0(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f89db4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f89dcc; end: 108f89e1b; -[SCSectionKitStoryAudienceDropdownButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f89dcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e97c,0);
  _objc_storeStrong(param_1 + _DAT_11277e980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e984,0);
  return;
}



/* Entry: 108f89e1c; end: 108f8a01f; -[SCSectionKitTextFieldPillTracker initWithSearchField:selectionTracker:textFieldDelegate:] */

undefined8 *
FUN_108f89e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126ff868;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    func_0x00010c1db9c0(puVar1[2]);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[1];
    func_0x00010bf6d3e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e0e60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108f8a020; end: 108f8a067;  */

void FUN_108f8a020(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f8a068; end: 108f8a10b; -[SCSectionKitTextFieldPillTracker userDeletingPillUsingKeyboard:] */

void FUN_108f8a068(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b3560;
  _objc_opt_class(PTR_PTR_1126b3560);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    func_0x00010c1fb940(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8a10c; end: 108f8a323; -[SCSectionKitTextFieldPillTracker _onSelectionItemUpdates:] */

void FUN_108f8a10c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar2 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lVar9 * 8);
        uVar3 = uVar6;
        func_0x00010c07d660();
        if ((int)uVar3 == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c15a7a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12da60(uVar7);
        }
        else {
          func_0x00010c15a7a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          bVar8 = true;
        }
        _objc_release(uVar3);
        _objc_release(uVar6);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  func_0x00010befa8e0(*(undefined8 *)(param_1 + 0x10));
  if (bVar8) {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar2 = lVar4;
    func_0x00010c26be40();
    _objc_release(lVar4);
    if ((int)lVar2 != 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + 0x10));
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_destroyWeak(param_3 + 0x18);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
  return;
}



/* Entry: 108f8a324; end: 108f8a3e3; -[SCSectionKitTextFieldPillTracker .cxx_destruct] */

void FUN_108f8a324(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8a3e4; end: 108f8a48f; -[SCCollectionViewSectionDataReceivedEvent initWithSectionIdentifier:timestamp:] */

undefined1 *
FUN_108f8a3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff870;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8a490; end: 108f8a4b3; -[SCCollectionViewSectionDataReceivedEvent copyWithZone:] */

undefined8 FUN_108f8a490(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8a4b4; end: 108f8a527; -[SCCollectionViewSectionDataReceivedEvent hash] */

undefined8 * FUN_108f8a4b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f8a5a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f8a5b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f8a5b4;
        }
        goto LAB_108f8a5a8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f8a5b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f8a528; end: 108f8a5cf; -[SCCollectionViewSectionDataReceivedEvent isEqual:] */

long FUN_108f8a528(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8a5a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8a5b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f8a5b4;
        }
        goto LAB_108f8a5a8;
      }
    }
    lVar3 = 0;
  }
LAB_108f8a5b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8a5d0; end: 108f8a5d7; -[SCCollectionViewSectionDataReceivedEvent sectionIdentifier] */

undefined8 FUN_108f8a5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8a5d8; end: 108f8a5df; -[SCCollectionViewSectionDataReceivedEvent timestamp] */

undefined8 FUN_108f8a5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8a5e0; end: 108f8a60f; -[SCCollectionViewSectionDataReceivedEvent .cxx_destruct] */

void FUN_108f8a5e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8a610; end: 108f8a6bb; -[SCSectionKitAvatarViewModel initWithAvatarViewModel:actionModel:] */

undefined1 *
FUN_108f8a610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8a6bc; end: 108f8a6df; -[SCSectionKitAvatarViewModel copyWithZone:] */

undefined8 FUN_108f8a6bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8a6e0; end: 108f8a753; -[SCSectionKitAvatarViewModel hash] */

undefined8 * FUN_108f8a6e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f8a7d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f8a7e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f8a7e0;
        }
        goto LAB_108f8a7d4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f8a7e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f8a754; end: 108f8a7fb; -[SCSectionKitAvatarViewModel isEqual:] */

long FUN_108f8a754(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8a7d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8a7e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f8a7e0;
        }
        goto LAB_108f8a7d4;
      }
    }
    lVar3 = 0;
  }
LAB_108f8a7e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8a7fc; end: 108f8a803; -[SCSectionKitAvatarViewModel avatarViewModel] */

undefined8 FUN_108f8a7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8a804; end: 108f8a80b; -[SCSectionKitAvatarViewModel actionModel] */

undefined8 FUN_108f8a804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8a80c; end: 108f8a83b; -[SCSectionKitAvatarViewModel .cxx_destruct] */

void FUN_108f8a80c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8a83c; end: 108f8a8ef; -[SCSectionKitBasicInfoViewModel initWithTitleText:detailText:adjustsHeightAccommodatingExtraLines:] */

undefined1 *
FUN_108f8a83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8a8f0; end: 108f8a913; -[SCSectionKitBasicInfoViewModel copyWithZone:] */

undefined8 FUN_108f8a8f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8a914; end: 108f8a98b; -[SCSectionKitBasicInfoViewModel hash] */

undefined8 * FUN_108f8a914(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f8aa1c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8aa28;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f8aa28;
        }
        goto LAB_108f8aa1c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f8aa28:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f8a98c; end: 108f8aa43; -[SCSectionKitBasicInfoViewModel isEqual:] */

long FUN_108f8a98c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8aa1c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8aa28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f8aa28;
        }
        goto LAB_108f8aa1c;
      }
    }
    lVar3 = 0;
  }
LAB_108f8aa28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8aa44; end: 108f8aa4b; -[SCSectionKitBasicInfoViewModel titleText] */

undefined8 FUN_108f8aa44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8aa4c; end: 108f8aa53; -[SCSectionKitBasicInfoViewModel detailText] */

undefined8 FUN_108f8aa4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8aa54; end: 108f8aa5b; -[SCSectionKitBasicInfoViewModel adjustsHeightAccommodatingExtraLines] */

undefined1 FUN_108f8aa54(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f8aa5c; end: 108f8aa8b; -[SCSectionKitBasicInfoViewModel .cxx_destruct] */

void FUN_108f8aa5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f8aa8c; end: 108f8ab8b; -[SCSectionKitButtonViewModel initWithTitle:style:iconName:sigIconType:isLoading:actionModel:] */

undefined1 *
FUN_108f8aa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff888;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8ab8c; end: 108f8abaf; -[SCSectionKitButtonViewModel copyWithZone:] */

undefined8 FUN_108f8ab8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


