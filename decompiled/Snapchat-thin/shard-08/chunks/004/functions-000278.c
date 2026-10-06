/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060cda60; end: 1060cda67; -[SCQuickStickerViewProvider sticker] */

undefined8 FUN_1060cda60(void)

{
  return 0;
}



/* Entry: 1060cda68; end: 1060cda6f; -[SCQuickStickerViewProvider ctItemInstance] */

undefined8 FUN_1060cda68(void)

{
  return 0;
}



/* Entry: 1060cda70; end: 1060cdb37; -[SCQuickStickerViewProvider _quickStickerViewForItemInstance:sticker:] */

void FUN_1060cda70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba960;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc960;
  func_0x00010c290480(PTR_PTR_1126bc960,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa440(puVar1,param_2,param_3,puVar2,param_4,uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060cdb38; end: 1060cdf67; -[SCQuickStickerViewProvider _insertQuickStickerView:inFeatureContainer:inContainer:] */

void FUN_1060cdb38(double param_1,double param_2,long param_3,undefined *param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  double dVar12;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 != 0) {
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    *(ulong *)(param_3 + 0x40) = param_5;
    _objc_release(uVar4);
    func_0x00010c066fc0(param_6);
    param_4 = PTR_PTR_1126ba960;
    _objc_retain(param_5);
    _objc_opt_class();
    uVar5 = param_5;
    _objc_opt_isKindOfClass();
    uVar1 = param_5;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    func_0x00010c18b5e0(uVar1);
    puVar2 = PTR_PTR_1126ba960;
    uVar5 = uVar1;
    func_0x00010c253880(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254f40(puVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x60);
    *(ulong *)(param_3 + 0x60) = uVar6;
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x58);
    *(ulong *)(param_3 + 0x58) = uVar6;
    _objc_release(uVar4);
    _objc_release(uVar5);
    dVar12 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar3 = false;
    if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar3 = false, !NAN(param_2) && !NAN(dVar12))) {
      bVar3 = param_2 == dVar12;
    }
    param_2 = dVar12;
    if (bVar3) {
      _objc_initWeak(auStack_a0,param_3);
      uVar5 = uVar1;
      func_0x00010c2541a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_a0;
      _objc_copyWeak(auStack_a8);
      uVar6 = uVar1;
      _objc_retain(uVar1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      param_2 = dVar12;
    }
    func_0x00010c219b60(param_5);
    uVar5 = param_5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010bf2b240(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -10.0;
    uVar6 = uVar5;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (ulong *)(param_3 + 0x50);
    uVar10 = *puVar11;
    *puVar11 = uVar6;
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_98 = *puVar11;
    uVar5 = param_5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010bf34860(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = *(undefined8 *)(param_3 + 0x58);
    uStack_88 = *(undefined8 *)(param_3 + 0x60);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010c08cdc0(param_5);
    func_0x00010c08cdc0(uVar1);
    func_0x00010bddc5c0(param_3);
    uVar5 = param_5;
    func_0x00010bdc6960(param_3);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(param_4);
  lVar9 = param_5 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ba960;
  if (((lVar9 != 0) && (param_4 != (undefined *)0x0)) && (uVar5 == 0)) {
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c253880(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254f40(puVar2);
    dVar12 = param_2;
    _objc_release(uVar4);
    if (param_2 == 0.0) {
      func_0x00010c23d0a0(param_4);
      param_2 = dVar12;
    }
    func_0x00010c181140(param_2,*(undefined8 *)(lVar9 + 0x60));
    if (param_1 == 0.0) {
      func_0x00010c23d0a0(param_4);
      param_1 = param_2;
    }
    func_0x00010c181140(param_1,*(undefined8 *)(lVar9 + 0x58));
    func_0x00010c1cbe20(*(undefined8 *)(param_5 + 0x20));
    func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x20));
    func_0x00010bddc5c0(lVar9);
  }
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060cdf68; end: 1060ce067;  */

void FUN_1060cdf68(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126ba960;
  if (((lVar2 != 0) && (param_4 != 0)) && (param_5 == 0)) {
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c253880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254f40(puVar1);
    dVar4 = param_2;
    _objc_release(uVar3);
    if (param_2 == 0.0) {
      func_0x00010c23d0a0(param_4);
      param_2 = dVar4;
    }
    func_0x00010c181140(param_2,*(undefined8 *)(lVar2 + 0x60));
    if (param_1 == 0.0) {
      func_0x00010c23d0a0(param_4);
      param_1 = param_2;
    }
    func_0x00010c181140(param_1,*(undefined8 *)(lVar2 + 0x58));
    func_0x00010c1cbe20(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c08cdc0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010bddc5c0(lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060ce068; end: 1060ce467; -[SCQuickStickerViewProvider _addDisclaimerLabelIfNeededAboveQuickStickerView:inFeatureContainer:] */

void FUN_1060ce068(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar15);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1060cd4f8;
  uStack_98 = 0x1060cd508;
  uStack_90 = 0;
  dVar16 = 1.60807493534087e-314;
  func_0x00010c0bd380(uVar15);
  puVar14 = (undefined *)puStack_b0[5];
  _objc_retain(puVar14);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar14;
  func_0x00010c078d80();
  if (((param_4 != 0) && (param_3 != 0)) && ((((uint)puVar1 ^ 1) & 1) == 0)) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c21ad00();
    func_0x00010c212f20(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar1);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c213040(puVar2);
    puVar1 = PTR_PTR_1126b08d8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4020000000000000,0x3ff0000000000000,0,0x4000000000000000,puVar1,puVar2,
                        puVar3);
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2);
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar15);
    func_0x00010c066fc0(param_4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493c0(0xc03375c28f5c28f6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_88 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf34860(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    puStack_80 = puVar9;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4;
    func_0x00010c2a5060(param_4);
    _objc_retainAutoreleasedReturnValue();
    dVar16 = -48.0;
    puVar12 = puVar10;
    func_0x00010bf49520(0xc048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar14);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b8,8);
  __Unwind_Resume(param_3);
  _objc_retain(puVar3);
  puVar14 = puVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = puVar14;
  _objc_opt_isKindOfClass(puVar14,puVar1);
  puVar1 = puVar14;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar14);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010bf20c00(puVar3);
    _CGRectGetWidth();
    dVar17 = dVar16 * 0.5;
    func_0x00010bf20c00(puVar3);
    _CGRectGetHeight();
    func_0x00010c17a6a0(dVar17,dVar16 * 0.5,puVar14);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1060ce468; end: 1060ce51f; -[SCQuickStickerViewProvider _centerContentViewInPreviewStickerView:] */

void FUN_1060ce468(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010bf20c00(param_4);
    _CGRectGetWidth();
    dVar5 = param_1 * 0.5;
    func_0x00010bf20c00(param_4);
    _CGRectGetHeight();
    func_0x00010c17a6a0(dVar5,param_1 * 0.5,uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060ce520; end: 1060ce71f; -[SCQuickStickerViewProvider _setQuickStickerView:featureContainer:] */

void FUN_1060ce520(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7620(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = puVar1;
  _objc_release(uVar4);
  func_0x00010c066fc0(param_5,param_3,puVar1,0);
  puVar2 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf2b240(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf493c0(0xc024000000000000,puVar2,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  *(undefined **)(param_2 + 0x50) = puVar3;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010c162480(*(undefined8 *)(param_2 + 0x50),param_3,1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1060ce720;
  puStack_60 = &UNK_1108471b0;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010c0bbfc0(puVar1,param_3,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bdc6960(param_2,param_3,puVar1,param_5);
  _objc_release(uStack_58);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060ce720; end: 1060ce787;  */

void FUN_1060ce720(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060ce788; end: 1060ce7ef; -[SCQuickStickerViewProvider previewStickerViewDidUpdate:] */

void FUN_1060ce788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  func_0x00010bf20c00(param_7);
  func_0x00010c181140(param_3,*(undefined8 *)(param_5 + 0x58));
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  func_0x00010c181140(param_4,*(undefined8 *)(param_5 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x40),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1060ce7f0; end: 1060ce7f7; -[SCQuickStickerViewProvider quickStickerImage] */

undefined8 FUN_1060ce7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1060ce7f8; end: 1060ce7ff; -[SCQuickStickerViewProvider quickStickerMetadata] */

undefined8 FUN_1060ce7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1060ce800; end: 1060ce8f3; -[SCQuickStickerViewProvider .cxx_destruct] */

void FUN_1060ce800(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060ce8f4; end: 1060ce9d3; -[SCGenericImageSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1060ce8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11273ef80;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ef84);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ef84) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060ce9d4; end: 1060cea63; -[SCGenericImageSticker _isAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1060ce9d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11273ef80);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfc0fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c06c000(lVar2);
  }
  _objc_release(lVar2);
  return lVar3;
}



/* Entry: 1060cea64; end: 1060ceb03; -[SCGenericImageSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060cea64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar2 = PTR_PTR_1126baa08;
    _objc_opt_class(PTR_PTR_1126baa08);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11273ef80);
      func_0x00010c071ae0(uVar4);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1060ceb04; end: 1060ceb2f; -[SCGenericImageSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1060ceb04(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273ef84);
  func_0x00010bfde980(uVar1);
  return uVar1 ^ 0x5504762;
}



/* Entry: 1060ceb30; end: 1060ceceb; -[SCGenericImageSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ceb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc();
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  lVar9 = (long)_DAT_11273ef80;
  uVar8 = *(undefined8 *)(param_7 + lVar9);
  func_0x00010be3e080();
  uVar4 = *(undefined8 *)(param_7 + lVar9);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfc0fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c27dd80();
  func_0x0001060cedbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,uVar8,param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060cecec; end: 1060cecf7; -[SCGenericImageSticker stickerId] */

void FUN_1060cecec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 1060cecf8; end: 1060ced03; -[SCGenericImageSticker shortLoggingName] */

void FUN_1060cecf8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 1060ced04; end: 1060ced33; -[SCGenericImageSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ced04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ef84);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060ced34; end: 1060ced63; -[SCGenericImageSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ced34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ef80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060ced64; end: 1060ced6b; -[SCGenericImageSticker infoType] */

undefined8 FUN_1060ced64(void)

{
  return 0x13;
}



/* Entry: 1060ced6c; end: 1060ced7b; -[SCGenericImageSticker intrinsicSize] */

undefined1  [16] FUN_1060ced6c(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 1060ced7c; end: 1060cee2b; -[SCGenericImageSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ced7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ef84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ef80,0);
  return;
}



/* Entry: 1060cee2c; end: 1060cf033; -[SCCameraSnapModelImpl initWithSnapDocEditorServices:snapRecoveryServices:previewABServices:cameraUIScope:snapDocEditorPluginFuture:] */

undefined8 *
FUN_1060cee2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ef948;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    uVar3 = puVar2[5];
    puVar2[5] = 0;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c7c40;
    _objc_opt_new();
    uVar3 = puVar2[9];
    puVar2[9] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar2[8];
    puVar2[8] = puVar4;
    _objc_release(uVar3);
    bVar1 = (byte)puVar2[4];
    func_0x00010c22ef80();
    *(byte *)(puVar2 + 7) = bVar1 ^ 1;
    _objc_initWeak(auStack_68,puVar2);
    puVar5 = auStack_70;
    _objc_copyWeak(puVar5,auStack_68);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_7);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1060cf034; end: 1060cf0c7;  */

void FUN_1060cf034(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c240000(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f80(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060cf0c8; end: 1060cf17f; -[SCCameraSnapModelImpl setSnapDocEditorFromPlugin:] */

void FUN_1060cf0c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c242aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a660();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060cf180; end: 1060cf1b7; -[SCCameraSnapModelImpl snapDocEditor] */

void FUN_1060cf180(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    func_0x00010c137fe0();
    lVar1 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060cf1b8; end: 1060cf57f; -[SCCameraSnapModelImpl reset] */

void FUN_1060cf1b8(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_2 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c242aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a660();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar1);
    func_0x00010bf86d80(*(undefined8 *)(param_2 + 0x30));
  }
  puVar2 = PTR_PTR_1126c7c40;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined **)(param_2 + 0x48) = puVar2;
  _objc_release(uVar8);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_new(PTR_PTR_1126b25c0);
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf8cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = uVar8;
  func_0x00010c240200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c240200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = uVar8;
  func_0x00010c240200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c240200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c43a0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(uVar8);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar8;
  _objc_release(uVar1);
  func_0x00010bfce280(*(undefined8 *)(param_2 + 0x28));
  if (param_1 == 0.0) {
    func_0x00010c1a44c0(0x3fe2000000000000,*(undefined8 *)(param_2 + 0x28));
  }
  func_0x00010bf2bbc0();
  func_0x00010c179060(*(undefined8 *)(param_2 + 0x28));
  lVar6 = *(long *)(param_2 + 0x20);
  func_0x00010bf2bbc0();
  if (lVar6 != 9) {
    puVar2 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    puVar3 = puVar2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_2);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c242aa0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bf34f20(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar1;
    func_0x00010c09a3e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x40));
  _objc_release(uVar8);
  return;
}



/* Entry: 1060cf580; end: 1060cf5bf;  */

void FUN_1060cf580(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee51e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060cf5c0; end: 1060cf71f; -[SCCameraSnapModelImpl _updatedContext] */

void FUN_1060cf5c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar7);
  if ((lVar7 == 0) || (lVar1 = lVar7, func_0x00010c09dea0(), lVar1 == 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar7;
    func_0x00010c0ff5a0(lVar7,param_2,&PTR___NSConcreteGlobalBlock_11090d750);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = lVar7;
      func_0x00010c0ff5a0(lVar7,param_2,&PTR___NSConcreteGlobalBlock_11090d770);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      lVar4 = lVar7;
      func_0x00010c09dea0();
      if (lVar3 == lVar4) {
        lVar3 = lVar7;
        func_0x00010c23fe00(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010be45540(param_1,param_2,lVar3,lVar7);
        if ((int)lVar4 == 0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = PTR_PTR_1126c7c48;
          _objc_opt_new(PTR_PTR_1126c7c48);
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010bf51e00(uVar5);
          func_0x00010c2042c0(puVar8,param_2,uVar5);
          _objc_release(uVar5);
          puVar6 = puVar8;
          func_0x00010c2407e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203f00();
          _objc_release(puVar6);
        }
        _objc_release(lVar3);
      }
      else {
        puVar8 = (undefined *)0x0;
      }
      _objc_release(lVar2);
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1060cf720; end: 1060cf837;  */

uint FUN_1060cf720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar2 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1060cf838; end: 1060cf913; -[SCCameraSnapModelImpl _isValidSnapDoc:editor:] */

bool FUN_1060cf838(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c7c50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c240200(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0c46a0(uVar2);
  func_0x00010c029140(puVar1);
  puVar3 = puVar1;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  lVar4 = param_3;
  func_0x000108022988(param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(puVar3);
  return lVar4 == 0;
}



/* Entry: 1060cf914; end: 1060cf943; -[SCCameraSnapModelImpl setSnapDocEditor:] */

void FUN_1060cf914(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060cf944; end: 1060cf94b; -[SCCameraSnapModelImpl snapEditorConfig] */

undefined8 FUN_1060cf944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1060cf94c; end: 1060cf97b; -[SCCameraSnapModelImpl setSnapEditorConfig:] */

void FUN_1060cf94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060cf97c; end: 1060cf983; -[SCCameraSnapModelImpl snapDocEditorObservable] */

undefined8 FUN_1060cf97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060cf984; end: 1060cf9b3; -[SCCameraSnapModelImpl setSnapDocEditorObservable:] */

void FUN_1060cf984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060cf9b4; end: 1060cfa7b; -[SCCameraSnapModelImpl .cxx_destruct] */

void FUN_1060cf9b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1060cfa7c; end: 1060cfbff; -[SCCameraSnapModelServicesEntryPoint createSnapModelWithLazyPluginResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060cfa7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  lVar6 = (long)_DAT_11273efac;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273efc0);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1060cfc4c;
  puStack_60 = &UNK_110846660;
  uStack_58 = uVar5;
  _objc_retain(uVar5);
  func_0x00010bf9d5c0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_11090d7e0,&puStack_78);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c7c68;
  _objc_alloc(PTR_PTR_1126c7c68);
  lVar6 = param_1 + _DAT_11273efb4;
  _objc_loadWeakRetained(lVar6);
  lVar2 = param_1 + _DAT_11273efb8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11273efbc;
  _objc_loadWeakRetained(lVar3);
  param_1 = param_1 + _DAT_11273efb0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c047720(puVar1,param_2,lVar6,lVar2,lVar3,param_1,uVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uStack_58);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060cfc00; end: 1060cfc8b;  */

void FUN_1060cfc00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7c60;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060cfc8c; end: 1060cfd0b; -[SCCameraSnapModelServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060cfc8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273efc4,0);
  _objc_storeStrong(param_1 + _DAT_11273efc0,0);
  _objc_destroyWeak(param_1 + _DAT_11273efbc);
  _objc_destroyWeak(param_1 + _DAT_11273efb8);
  _objc_destroyWeak(param_1 + _DAT_11273efb4);
  _objc_destroyWeak(param_1 + _DAT_11273efb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273efac,0);
  return;
}



/* Entry: 1060cfd0c; end: 1060cfd77; -[SCLensAlwaysOnMediaPickerButtonContainer initWithCameraUIScopeViewContainer:] */

undefined1 * FUN_1060cfd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060cfd78; end: 1060cfdd7; -[SCLensAlwaysOnMediaPickerButtonContainer attachView:] */

void FUN_1060cfd78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bdeffe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  func_0x00010bf0ca20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060cfdd8; end: 1060d00db; -[SCLensAlwaysOnMediaPickerButtonContainer _createMemoriesButtonContainer] */

void FUN_1060cfdd8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c094220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe1280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b40c0;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c1d96a0(puVar6);
  lVar2 = lVar4;
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar6;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf1ff80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49580(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf49580(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(lVar4);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar5 + 8);
  return;
}



/* Entry: 1060d00dc; end: 1060d0107; -[SCLensAlwaysOnMediaPickerButtonContainer .cxx_destruct] */

void FUN_1060d00dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060d0108; end: 1060d01a3; -[SCLensAlwaysOnMediaPickerConfigurationImpl initWithAppStartExperimentReader:cameraSwitcherConfig:] */

undefined1 *
FUN_1060d0108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef958;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d01a4; end: 1060d01e3; -[SCLensAlwaysOnMediaPickerConfigurationImpl isAvailable:] */

undefined8 FUN_1060d01a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1060d01e4; end: 1060d0233; -[SCLensAlwaysOnMediaPickerConfigurationImpl mediaPickerMediaType] */

undefined8 FUN_1060d01e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bf1f440();
  _objc_release(param_1);
  uVar1 = 3;
  if ((int)lVar2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1060d0234; end: 1060d025f; -[SCLensAlwaysOnMediaPickerConfigurationImpl .cxx_destruct] */

void FUN_1060d0234(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d0260; end: 1060d032f; -[SCLensAlwaysOnMediaPickerLoggerImpl initWithBlizzardLogger:userId:lensCarouselLogger:] */

undefined1 *
FUN_1060d0260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d0330; end: 1060d0337; -[SCLensAlwaysOnMediaPickerLoggerImpl blizzardLogger] */

void FUN_1060d0330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1060d0338; end: 1060d033f; -[SCLensAlwaysOnMediaPickerLoggerImpl lensCarouselLogger] */

void FUN_1060d0338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1060d0340; end: 1060d0443; -[SCLensAlwaysOnMediaPickerLoggerImpl mediaPickerOpened] */

void FUN_1060d0340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c7c70;
  _objc_opt_new(PTR_PTR_1126c7c70);
  func_0x00010c21e620();
  uVar2 = param_1;
  func_0x00010c090bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c090bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060d0444; end: 1060d050b; -[SCLensAlwaysOnMediaPickerLoggerImpl .cxx_destruct] */

void FUN_1060d0444(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d050c; end: 1060d05cf;  */

void FUN_1060d050c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c7c88;
  _objc_alloc(PTR_PTR_1126c7c88);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c293740(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c091140(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8bc0(puVar1,param_2,uVar2,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060d05d0; end: 1060d064f;  */

void FUN_1060d05d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126c7c90;
  _objc_alloc(PTR_PTR_1126c7c90);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf45e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2b140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3640(puVar2,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060d0650; end: 1060d06cf; -[SCLensAlwaysOnMediaPickerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d0650(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273f000);
  _objc_destroyWeak(param_1 + _DAT_11273effc);
  _objc_destroyWeak(param_1 + _DAT_11273eff8);
  _objc_destroyWeak(param_1 + _DAT_11273eff4);
  _objc_destroyWeak(param_1 + _DAT_11273eff0);
  _objc_destroyWeak(param_1 + _DAT_11273efec);
  _objc_destroyWeak(param_1 + _DAT_11273efe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273efe4);
  return;
}



/* Entry: 1060d06d0; end: 1060d0743; -[SCLensAlwaysOnMediaPickerSupportedDeviceProvider _deviceModel] */

undefined * FUN_1060d06d0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_528 [1024];
  undefined1 auStack_128 [256];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_528);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_128,4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bdfbe80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x1117ff78;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_11117ff78,param_2,puVar2);
  _objc_release(puVar2);
  return (undefined *)(ulong)(uVar1 ^ 1);
}



/* Entry: 1060d0744; end: 1060d078b; -[SCLensAlwaysOnMediaPickerSupportedDeviceProvider isDeviceSupportedOnModularCameras] */

uint FUN_1060d0744(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x00010bdfbe80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x1117ff78;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_11117ff78,param_2,param_1);
  _objc_release(param_1);
  return uVar1 ^ 1;
}



/* Entry: 1060d078c; end: 1060d081b; -[SCLensAlwaysOnMediaPickerToggleContainerManagerImpl initWithMemoriesButtonContainer:] */

undefined1 * FUN_1060d078c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef968;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d081c; end: 1060d0823; -[SCLensAlwaysOnMediaPickerToggleContainerManagerImpl toggleContainer] */

void FUN_1060d081c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1060d0824; end: 1060d0827; -[SCLensAlwaysOnMediaPickerToggleContainerManagerImpl mediaPickerStateDelegate] */

void FUN_1060d0824(void)

{
  return;
}



/* Entry: 1060d0828; end: 1060d086b; -[SCLensAlwaysOnMediaPickerToggleContainerManagerImpl mediaPickerStateChanged:] */

void FUN_1060d0828(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060d086c; end: 1060d0873; -[SCLensAlwaysOnMediaPickerToggleContainerManagerImpl mediaPickerActiveObservable] */

undefined8 FUN_1060d086c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060d0874; end: 1060d08a3; -[SCLensAlwaysOnMediaPickerToggleContainerManagerImpl .cxx_destruct] */

void FUN_1060d0874(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d08a4; end: 1060d0907; -[SCLensInLensMediaPickerManagerImpl init] */

undefined1 * FUN_1060d08a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060d0908; end: 1060d090b; -[SCLensInLensMediaPickerManagerImpl inLensMediaPickerTrayStateDelegate] */

void FUN_1060d0908(void)

{
  return;
}



/* Entry: 1060d090c; end: 1060d094f; -[SCLensInLensMediaPickerManagerImpl trayOpened:] */

void FUN_1060d090c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060d0950; end: 1060d0957; -[SCLensInLensMediaPickerManagerImpl inLensMediaPickerTrayStateObservable] */

undefined8 FUN_1060d0950(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060d0958; end: 1060d0963; -[SCLensInLensMediaPickerManagerImpl .cxx_destruct] */

void FUN_1060d0958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d0964; end: 1060d09bf; -[SCLensInLensMediaPickerStateServiceProvider provide] */

void FUN_1060d0964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11090d8b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7cb0;
  _objc_alloc(PTR_PTR_1126c7cb0);
  func_0x00010c01d5e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060d09c0; end: 1060d09db;  */

void FUN_1060d09c0(void)

{
  _objc_alloc_init(PTR_PTR_1126c7ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060d09dc; end: 1060d09eb; -[SCLensInLensMediaPickerStateServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d09dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f010);
  return;
}



/* Entry: 1060d09ec; end: 1060d0ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d09ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c7cb8;
    _objc_alloc(PTR_PTR_1126c7cb8);
    lVar1 = param_1 + _DAT_11273f018;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11273f01c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c094e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8820(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060d0ac4; end: 1060d0b17; -[SCLensCollectionsBlizzardLoggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d0ac4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f020,0);
  _objc_destroyWeak(param_1 + _DAT_11273f01c);
  _objc_destroyWeak(param_1 + _DAT_11273f018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f014);
  return;
}



/* Entry: 1060d0b18; end: 1060d0bbb; -[SCLensCollectionsBlizzardLogger initWithBlizzardLogger:lensLogger:] */

undefined1 *
FUN_1060d0b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef978;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d0bbc; end: 1060d0bc3; -[SCLensCollectionsBlizzardLogger blizzardLogger] */

void FUN_1060d0bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1060d0bc4; end: 1060d0bcb; -[SCLensCollectionsBlizzardLogger lensLogger] */

void FUN_1060d0bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1060d0bcc; end: 1060d0c9f; -[SCLensCollectionsBlizzardLogger didOpenLensCollectionsFromLensWithId:] */

void FUN_1060d0bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7cc8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c19c100();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c094e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c206c40(puVar1,param_2,0x3a);
  func_0x00010c16b360(puVar1,param_2,0x16);
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060d0ca0; end: 1060d0ccf; -[SCLensCollectionsBlizzardLogger .cxx_destruct] */

void FUN_1060d0ca0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d0cd0; end: 1060d120f; -[SCOperaConfigurationFactory initWithSafeBrowsingAPI:urlInterceptor:deviceMotionManager:currentPageTracker:adConfigProvider:adPluginProvider:userAdIdProvider:grapheneRegistry:audioSession:userTrackedLogger:networkBandwidthEstimator:batteryLogger:customStatusBarStyleContextController:shakeInfoHolder:shakeEventAnnouncer:playerProvider:operaLayerProvider:customVolumeController:valdiRuntimeProvider:operaConfigProvider:circumstanceEngine:browserPrivacyConsentInfoManager:discoverVideoCatalogService:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:] */

undefined8 *
FUN_1060d0cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126ef980;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
  }
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



/* Entry: 1060d1210; end: 1060d138b; -[SCOperaConfigurationFactory configurationWithOperaProperties:existingOperaConfiguration:] */

void FUN_1060d1210(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b23c0;
  _objc_retain(param_3);
  func_0x00010c0ea1a0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6c80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5480(puVar1,param_2,0xb3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0ce18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c7cd0;
  puVar4 = puVar1;
  if ((int)uVar3 != 0) {
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284720(puVar5,param_2,puVar4,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0xa8),
                        *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xc0),
                        *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b23c0;
    func_0x00010c0ea1a0(PTR_PTR_1126b23c0,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    param_4 = puVar5;
  }
  puVar1 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060d138c; end: 1060d15d3; -[SCOperaConfigurationFactory operaDependencies] */

void FUN_1060d138c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b23c8;
  _objc_opt_new(PTR_PTR_1126b23c8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac3a0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2ab820(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6cc0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2bc220(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b76c0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2aef00(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c80(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2bc420(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b45e0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2a92a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abae0(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8580(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8560(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5760(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab040(puVar1,param_2,*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abc00(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc4a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aac20(puVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060d15d4; end: 1060d1723; -[SCOperaConfigurationFactory .cxx_destruct] */

void FUN_1060d15d4(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1060d1724; end: 1060d1dc7; -[SCLensOperaControllerProvider initWithLensLogger:safeBrowsingAPI:deepLinkHandler:deviceMotionManager:userTrackedLogger:adConfigProvider:adPluginProvider:skAdNetworkMetricsManager:skStoreProductPrefetcher:currentPageTracker:operaSessionScopeExposer:operaSessionScopeServices:commerceShoppingScopeExposer:commerceProductCatalogScopeExposer:studySettingsProvider:userAdIdProvider:grapheneRegistry:audioSession:networkBandwidthEstimator:batteryLogger:customStatusBarStyleContextController:shakeInfoHolder:shakeEventAnnouncer:playerProvider:operaLayerProvider:customVolumeController:valdiRuntimeProvider:operaConfigProvider:circumstanceEngine:browserPrivacyConsentInfoManager:discoverVideoCatalogService:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:] */

undefined8 *
FUN_1060d1724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126ef988;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
  }
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



/* Entry: 1060d1dc8; end: 1060d1f2b; -[SCLensOperaControllerProvider operaControllerWithParentViewController:delegate:urlInterceptor:] */

void FUN_1060d1dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7cd8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c034100(puVar1,*(undefined8 *)(param_1 + 0x70),param_3,*(undefined8 *)(param_1 + 8),
                      param_4,*(undefined8 *)(param_1 + 0x18),param_5,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060d1f2c; end: 1060d20db; -[SCLensOperaControllerProvider .cxx_destruct] */

void FUN_1060d1f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1060d20dc; end: 1060d2803; -[SCLensOperaController initWithParentViewController:lensLogger:delegate:safeBrowsingAPI:urlInterceptor:deepLinkHandler:deviceMotionManager:userTrackedLogger:adConfigProvider:adPluginProvider:skAdNetworkMetricsManager:skStoreProductPrefetcher:currentPageTracker:operaSessionScopeExposer:operaSessionScopeServices:commerceShoppingScopeExposer:commerceProductCatalogScopeExposer:studySettingsProvider:userAdIdProvider:grapheneRegistry:audioSession:networkBandwidthEstimator:batteryLogger:customStatusBarStyleContextController:shakeInfoHolder:shakeEventAnnouncer:playerProvider:operaLayerProvider:customVolumeController:valdiRuntimeProvider:operaConfigProvider:circumstanceEngine:browserPrivacyConsentInfoManager:discoverVideoCatalogService:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:] */

undefined8 *
FUN_1060d20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126ef990;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_39;
    _objc_release(uVar2);
  }
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



/* Entry: 1060d2804; end: 1060d2813; -[SCLensOperaController isPresenting] */

void FUN_1060d2804(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x40),PTR_s_isPresenting_1125fc4e0);
    return;
  }
  return;
}



/* Entry: 1060d2814; end: 1060d289f; -[SCLensOperaController showCallToActionOperaPresenterForLens:] */

void FUN_1060d2814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c162800(param_1,param_2,param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    func_0x00010be78ce0(param_1);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  func_0x00010bf5d380(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar1;
  _objc_retain();
  _objc_release(uVar2);
  func_0x00010c10ae00(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060d28a0; end: 1060d28a7; -[SCLensOperaController dismissLensOperaPresenterWithDidBackground:] */

void FUN_1060d28a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_dismissWithDidBackground__1125bece8);
  return;
}



/* Entry: 1060d28a8; end: 1060d2923; -[SCLensOperaController lensOperaPresenterDidPresentOperaViewController:] */

void FUN_1060d28a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c095940();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060d2924; end: 1060d2983; -[SCLensOperaController lensOperaPresenterDidDismissOperaViewController:] */

void FUN_1060d2924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c095920();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060d2984; end: 1060d2ad3; -[SCLensOperaController _prepareOperaPresenterFactory] */

void FUN_1060d2984(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c7ce0;
  _objc_alloc();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038bc0(puVar1,*(undefined8 *)(param_1 + 0xa0),param_1,lVar2,
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)(param_1 + 0x138));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060d2ad4; end: 1060d2adb; -[SCLensOperaController activeLens] */

undefined8 FUN_1060d2ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1060d2adc; end: 1060d2b0b; -[SCLensOperaController setActiveLens:] */

void FUN_1060d2adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060d2b0c; end: 1060d2cfb; -[SCLensOperaController .cxx_destruct] */

void FUN_1060d2b0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060d2cfc; end: 1060d2d97;  */

void FUN_1060d2cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7ce8;
  _objc_alloc(PTR_PTR_1126c7ce8);
  puVar2 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
  func_0x00010c045040(puVar1,param_2,0,puVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


