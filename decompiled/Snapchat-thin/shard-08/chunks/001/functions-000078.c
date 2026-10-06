/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d1107c; end: 105d1126f; -[SCLensCarouselDMPreviewViewProviderImpl carouselViewContainerFrameIn:] */

double FUN_105d1107c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbc20(param_5);
  dVar12 = param_1;
  func_0x00010bf20c00(lVar1);
  _CGRectGetHeight();
  dVar11 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar12 = dVar12 - dVar11;
  dVar11 = 0.0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar2 = lVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_150;
    do {
      lVar10 = 0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar8 = *(long *)(lStack_158 + lVar10 * 8);
        lVar4 = lVar1;
        func_0x00010c110940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 != lVar4) {
          func_0x00010c106b60(lVar8);
          dVar12 = dVar12 - dVar11;
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_6,&uStack_160,auStack_118,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010bf51460(param_1,dVar12,param_3,param_4,lVar1,param_6,param_7);
  dVar12 = param_1;
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_7 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108cc6364();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return dVar12;
}



/* Entry: 105d11270; end: 105d112d7; -[SCLensCarouselDMPreviewViewProviderImpl _previewView] */

void FUN_105d11270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108cc6364();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d112d8; end: 105d11613; -[SCLensCarouselDMPreviewViewProviderImpl _attachCarouselView:] */

undefined8
FUN_105d112d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bddbc20(param_5);
    puVar3 = PTR_PTR_1126c4078;
    _objc_alloc();
    uVar17 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    func_0x00010c014b00(param_1,param_2,param_3,param_4,uVar17);
    lVar4 = lVar2;
    func_0x00010bf20760(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00();
    _objc_release(lVar4);
    func_0x00010bfaf6e0(lVar2);
    func_0x00010c1e1a60(lVar2,param_6,puVar3);
    uVar17 = *(undefined8 *)(param_5 + 0x20);
    *(undefined **)(param_5 + 0x20) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar17);
    func_0x00010c219b60(param_7,param_6,0);
    func_0x00010befbb60(puVar3,param_6,param_7);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar17 = param_7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar17;
    func_0x00010bf493a0(uVar17,param_6,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_7;
    uStack_a8 = uVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0(uVar7,param_6,puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_7;
    uStack_a0 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c274200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0(uVar10,param_6,puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_7;
    uStack_98 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010bf1ff80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0(uVar13,param_6,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_a8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_6,puVar16);
    _objc_release(puVar3);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar17);
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar17 = param_7;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbc80(param_7);
  uVar6 = uVar17;
  func_0x00010bf4b2a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar6);
  _objc_release(uVar17);
  return 0;
}



/* Entry: 105d11614; end: 105d11693; -[SCLensCarouselDMPreviewViewProviderImpl _carouselFrame] */

undefined8 FUN_105d11614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbc80(param_1);
  uVar2 = uVar1;
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 105d11694; end: 105d1170f; -[SCLensCarouselDMPreviewViewProviderImpl _carouselHeight] */

double FUN_105d11694(double param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf3fe00(uVar2);
  dVar3 = param_1;
  func_0x00010c152d40(uVar2);
  func_0x00010c152d40(uVar2);
  _objc_release(uVar2);
  return param_1 + dVar3 + param_3;
}



/* Entry: 105d11710; end: 105d11757; -[SCLensCarouselDMPreviewViewProviderImpl .cxx_destruct] */

void FUN_105d11710(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d11758; end: 105d11823; -[SCLensCarouselPreviewViewProviderImpl initWithLegacySnapEditor:layoutProvider:carouselConfigProvider:] */

undefined1 *
FUN_105d11758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ece88;
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



/* Entry: 105d11824; end: 105d118af; -[SCLensCarouselPreviewViewProviderImpl containerView] */

void FUN_105d11824(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010be7ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
    _objc_release(uVar3);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar2;
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + 0x20);
    }
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d118b0; end: 105d11977; -[SCLensCarouselPreviewViewProviderImpl carouselViewContainer] */

void FUN_105d118b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d11978; end: 105d119bf;  */

void FUN_105d11978(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd02c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d119c0; end: 105d119cb;  */

void FUN_105d119c0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105d119c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}



/* Entry: 105d119cc; end: 105d11b03; -[SCLensCarouselPreviewViewProviderImpl carouselViewContainerFrameIn:] */

undefined8
FUN_105d119cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c110940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bddbc20(param_5);
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_5 = lVar2;
    func_0x00010c262ca0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(lVar2);
  }
  func_0x00010bf51460(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 105d11b04; end: 105d11b6b; -[SCLensCarouselPreviewViewProviderImpl _previewView] */

void FUN_105d11b04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108cc6364();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d11b6c; end: 105d11bb3; -[SCLensCarouselPreviewViewProviderImpl _previewConfiguration] */

void FUN_105d11b6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d11bb4; end: 105d12247; -[SCLensCarouselPreviewViewProviderImpl _attachCarouselView:] */

double FUN_105d11bb4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bddbc20(param_5);
    puVar2 = PTR_PTR_1126c4078;
    _objc_alloc();
    dVar22 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar23 = param_1;
    func_0x00010c014b00(param_1,param_2,param_3,param_4,dVar22);
    lVar3 = param_5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    func_0x00010c1e1a60(lVar1,param_6,puVar2);
    func_0x00010c219b60(puVar2,param_6,0);
    func_0x00010bf20c00(lVar3);
    _CGRectGetHeight();
    dVar22 = param_1;
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    lVar4 = param_5;
    dVar24 = dVar22;
    func_0x00010be85a00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      dVar24 = dVar23 - dVar22;
    }
    else {
      func_0x00010bddbbe0(param_5);
    }
    puVar5 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf1ff80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493c0(-dVar24,puVar5,param_6,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar8 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0(puVar8,param_6,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    puStack_c0 = puVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c1408a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0(puVar10,param_6,lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    puStack_b8 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    puVar14 = puVar13;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar14;
    puStack_a8 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_c0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar5,param_6,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar6);
    _objc_release(puVar8);
    func_0x00010beb26c0();
    if ((int)param_5 != 0) {
      param_1 = 5.65581687602019e-315;
      func_0x00010c1e3380(puVar7);
      func_0x00010bf4bd00(lVar1);
      _CGRectGetHeight();
      dVar22 = param_1;
      func_0x00010bf20c00(lVar1);
      _CGRectGetHeight();
      param_1 = param_1 - dVar22;
      puVar8 = puVar2;
      func_0x00010bf1ff80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bf1ff80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf49520(puVar8,param_6,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5,param_6,puVar9);
      _objc_release(puVar9);
      _objc_release(lVar6);
      _objc_release(puVar8);
    }
    if (lVar4 != 0) {
      func_0x00010c1e3380(0x443b8000,puVar7);
      puVar8 = puVar2;
      func_0x00010bf1ff80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c274200(lVar4);
      _objc_retainAutoreleasedReturnValue();
      param_1 = -2.0;
      puVar9 = puVar8;
      func_0x00010bf49520(puVar8,param_6,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5,param_6,puVar9);
      _objc_release(puVar9);
      _objc_release(lVar6);
      _objc_release(puVar8);
    }
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,puVar5);
    func_0x00010c219b60(param_7,param_6,0);
    func_0x00010befbb60(puVar2,param_6,param_7);
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar6 = param_7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010bf493a0(lVar6,param_6,puVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_7;
    lStack_e0 = lVar11;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf493a0(lVar16,param_6,puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_7;
    lStack_d8 = lVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010bf493a0(lVar18,param_6,puVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_7;
    lStack_d0 = lVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010bf493a0(lVar20,param_6,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_c8 = lVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_e0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar8,param_6,puVar14);
    _objc_release(puVar14);
    _objc_release(lVar21);
    _objc_release(puVar13);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(puVar12);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(puVar10);
    _objc_release(lVar16);
    _objc_release(lVar11);
    _objc_release(puVar9);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = param_7;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010be7fc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbbe0(param_7);
  func_0x00010bf4bd00(lVar1);
  _CGRectGetHeight();
  lVar4 = param_7;
  func_0x00010beb26c0();
  if ((int)lVar4 != 0) {
    lVar4 = lVar1;
    func_0x00010bf4b2a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(lVar4);
  }
  lVar4 = lVar3;
  func_0x00010c07ba00();
  if ((int)lVar4 != 0) {
    lVar4 = param_7;
    func_0x00010be85a00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010c11e860(lVar1);
    }
    else {
      lVar6 = lVar4;
      func_0x00010c262ca0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(lVar4);
      lVar11 = lVar1;
      func_0x00010bf4b2a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51460(param_1,param_2,param_3,param_4,lVar6,param_6,lVar11);
      _objc_release(lVar11);
      _objc_release(lVar6);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
    }
    _objc_release(lVar4);
  }
  func_0x00010bddbc80(param_7);
  lVar4 = lVar1;
  func_0x00010bf4b2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return 0.0;
}



/* Entry: 105d12248; end: 105d12443; -[SCLensCarouselPreviewViewProviderImpl _carouselFrame] */

undefined8
FUN_105d12248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_5;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010be7fc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbbe0(param_5);
  func_0x00010bf4bd00(lVar1);
  _CGRectGetHeight();
  lVar3 = param_5;
  func_0x00010beb26c0();
  if ((int)lVar3 != 0) {
    lVar3 = lVar1;
    func_0x00010bf4b2a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(lVar3);
  }
  lVar3 = lVar2;
  func_0x00010c07ba00();
  if ((int)lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010be85a00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010c11e860(lVar1);
    }
    else {
      lVar4 = lVar3;
      func_0x00010c262ca0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(lVar3);
      lVar5 = lVar1;
      func_0x00010bf4b2a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51460(param_1,param_2,param_3,param_4,lVar4,param_6,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
    }
    _objc_release(lVar3);
  }
  func_0x00010bddbc80(param_5);
  lVar3 = lVar1;
  func_0x00010bf4b2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return 0;
}



/* Entry: 105d12444; end: 105d124fb; -[SCLensCarouselPreviewViewProviderImpl _carouselBottomPadding] */

double FUN_105d12444(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_1;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0786e0();
  dVar4 = 8.0;
  if ((int)lVar2 != 0) {
    func_0x00010be7fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c07ba00();
    dVar4 = 8.0;
    if ((int)lVar2 == 0) {
      dVar4 = 0.0;
    }
    _objc_release(param_1);
  }
  lVar2 = lVar1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe4380();
  _objc_release(lVar2);
  dVar5 = dVar4 + 14.0;
  if (lVar3 != 2) {
    dVar5 = dVar4;
  }
  _objc_release(lVar1);
  return dVar5;
}



/* Entry: 105d124fc; end: 105d125bf; -[SCLensCarouselPreviewViewProviderImpl _quickSendBarToStayAbove] */

void FUN_105d124fc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2;
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c07ba00();
  _objc_release(param_2);
  if (((int)lVar4 == 0) || (func_0x00010c11e860(lVar1), param_1 != 0.0)) {
    lVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = lVar2;
    }
    _objc_retain(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d125c0; end: 105d1263f; -[SCLensCarouselPreviewViewProviderImpl _shouldAnchorCarouselAboveBar] */

bool FUN_105d125c0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be7ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c235440();
  if (((int)lVar2 == 0) || (lVar2 = param_1, func_0x00010c0786e0(), (int)lVar2 == 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf20760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 == 0;
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105d12640; end: 105d126bb; -[SCLensCarouselPreviewViewProviderImpl _carouselHeight] */

double FUN_105d12640(double param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf3fe00(uVar2);
  dVar3 = param_1;
  func_0x00010c152d40(uVar2);
  func_0x00010c152d40(uVar2);
  _objc_release(uVar2);
  return param_1 + dVar3 + param_3;
}



/* Entry: 105d126bc; end: 105d12703; -[SCLensCarouselPreviewViewProviderImpl .cxx_destruct] */

void FUN_105d126bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d12704; end: 105d12753; -[SCPreviewLensCarouselContainerView initWithFrame:preferredHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d12704(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_d4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ece90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112734934) = in_d4;
  }
  return;
}



/* Entry: 105d12754; end: 105d127c7; -[SCPreviewLensCarouselContainerView hitTest:withEvent:] */

void FUN_105d12754(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126ece90;
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



/* Entry: 105d127c8; end: 105d127d7; -[SCPreviewLensCarouselContainerView preferredHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d127c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734934);
}



/* Entry: 105d127d8; end: 105d127db; -[SCPreviewLensCarouselContainerView componentView] */

void FUN_105d127d8(void)

{
  return;
}



/* Entry: 105d127dc; end: 105d1284f; -[SCGraphenePromptLensesMetricsMetric2 init] */

undefined1 * FUN_105d127dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ece98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d12850; end: 105d12a37;  */

void FUN_105d12850(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  long *plStack_130;
  undefined1 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 **appuStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    plVar5 = (long *)&UNK_1108e5b08;
    param_3 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e5b08,puVar6,param_4);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    puVar9 = (undefined8 *)auStack_78;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  plVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  plVar2 = plVar8;
  __Unwind_Resume();
  pcStack_a8 = FUN_105d12a38;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puStack_d0 = param_3;
  puStack_c8 = (undefined1 *)puVar9;
  plStack_c0 = plVar8;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (plVar2 != (long *)0x0) {
    plVar8 = (long *)plVar2[1];
    pcVar1 = "true";
    if ((int)plVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_f0,pcVar1);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    func_0x00010007e1e8(&uStack_110,appuStack_f0,&lStack_d8,1);
    plVar5 = (long *)&UNK_1108e5b58;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e5b58,&uStack_110,puVar6);
    ppuVar3 = &puStack_f8;
    puStack_f8 = (undefined1 *)&uStack_110;
    func_0x00010007e5dc();
    puVar9 = &uStack_110;
    if (cStack_d9 < '\0') {
      ppuVar3 = appuStack_f0[0];
      __ZdlPv();
      puVar9 = &uStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  puStack_f8 = (undefined1 *)puVar9;
  func_0x00010007e5dc(&puStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  puStack_138 = (undefined1 *)&uStack_150;
  pcStack_118 = FUN_105d12b50;
  if (ppuVar4 != (undefined1 **)0x0) {
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    plStack_130 = plVar8;
    ppuStack_128 = ppuVar3;
    ppuStack_120 = &puStack_b0;
    (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_1108e5ba8,&uStack_150,plVar5);
    func_0x00010007e5dc(&puStack_138);
  }
  return;
}



/* Entry: 105d12a38; end: 105d12b4f;  */

void FUN_105d12a38(long param_1,undefined *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108e5b58;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108e5b58,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_105d12b50;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108e5ba8,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 105d12b50; end: 105d12bc7;  */

void FUN_105d12b50(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e5ba8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105d12bc8; end: 105d12c3f;  */

void FUN_105d12bc8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e5bf8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105d12c40; end: 105d12db3;  */

void FUN_105d12c40(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108e5c48,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105d12db4;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108e5c98,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105d12db4; end: 105d12e2b;  */

void FUN_105d12db4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e5c98,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105d12e2c; end: 105d12ea3;  */

void FUN_105d12e2c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e5ce8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105d12ea4; end: 105d12fbb;  */

undefined1 **
FUN_105d12ea4(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5,
             undefined1 *param_6)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar6 = param_3;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108e5d38);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar5;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar5;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pppuVar3 = &ppuStack_c0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_b8 = PTR_PTR_1126ecea0;
  ppuStack_c0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_c0,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined1 ***)0x0) {
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)pppuVar3[1];
    pppuVar3[1] = (undefined1 **)puVar6;
    _objc_release(puVar4);
    _objc_retain(param_4);
    puVar4 = (undefined1 *)pppuVar3[2];
    pppuVar3[2] = (undefined1 **)param_4;
    _objc_release(puVar4);
    _objc_retain(param_5);
    puVar4 = (undefined1 *)pppuVar3[3];
    pppuVar3[3] = (undefined1 **)param_5;
    _objc_release(puVar4);
    _objc_retain(param_6);
    puVar4 = (undefined1 *)pppuVar3[4];
    pppuVar3[4] = (undefined1 **)param_6;
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined1 **)pppuVar3;
}



/* Entry: 105d12fbc; end: 105d130b7; -[SCUcoCommandProviderImpl initWithImageProcessCommandProvider:snapEditorPlaybackCommandProvider:basicIppCommandProvider:circumstanceEngine:] */

undefined1 *
FUN_105d12fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ecea0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d130b8; end: 105d1315f; -[SCUcoCommandProviderImpl commandForLensId:isVideo:isExport:] */

void FUN_105d130b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = 8;
  if (((uint)param_4 & (uint)param_5) == 0) {
    lVar1 = 0x10;
  }
  lVar1 = *(long *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bde2200(param_1,param_2,param_3,param_4,param_5,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d13160; end: 105d131a3; -[SCUcoCommandProviderImpl _commandForLensId:isVideo:isExport:ippProvider:] */

void FUN_105d13160(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde2220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d131a4; end: 105d133a3; -[SCUcoCommandProviderImpl _commandListForLensId:isVideo:isExport:ippProvider:] */

void FUN_105d131a4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b26d8;
  func_0x00010bf978e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b26e0;
  if (param_4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (param_5 == 0) {
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8940(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe76c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x20));
    puVar4 = PTR_PTR_1126b26e0;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29b060(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  uVar5 = param_6;
  func_0x00010c29f920(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105d133a4; end: 105d133eb; -[SCUcoCommandProviderImpl .cxx_destruct] */

void FUN_105d133a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d133ec; end: 105d13597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d133ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126c4080;
  _objc_alloc(PTR_PTR_1126c4080);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  FUN_105d13598();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  FUN_105d13598();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c240b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar8 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar8 + _DAT_112734958;
    _objc_loadWeakRetained(lVar12);
  }
  lVar9 = lVar12;
  func_0x00010bf16560(lVar12);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112734950;
    _objc_loadWeakRetained(lVar11);
  }
  lVar10 = lVar11;
  func_0x00010bf398e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cca0(puVar1,param_2,lVar4,lVar7,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d13598; end: 105d135bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d13598(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112734954);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d135bc; end: 105d1360b; -[SCUcoCommandServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d135bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734958);
  _objc_destroyWeak(param_1 + _DAT_112734954);
  _objc_destroyWeak(param_1 + _DAT_112734950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273494c);
  return;
}



/* Entry: 105d1360c; end: 105d13b17; -[SCUcoImageProcessServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1360c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  uVar1 = param_1;
  func_0x00010be7fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c083340();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0830e0();
    uVar13 = (undefined1)uVar4;
    _objc_release(uVar3);
  }
  else {
    uVar13 = 1;
  }
  _objc_release(uVar2);
  lVar5 = param_1 + (long)_DAT_11273495c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0962a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_copyWeak(auStack_80,param_1 + (long)_DAT_112734960);
  _objc_copyWeak(auStack_88,param_1 + (long)_DAT_112734964);
  puVar9 = PTR_PTR_1126ae720;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105d13b18;
  puStack_98 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_90,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_112734968);
  *(undefined **)(param_1 + (long)_DAT_112734968) = puVar9;
  _objc_release(uVar12);
  puVar9 = PTR_PTR_1126ae720;
  puStack_d8 = puVar11;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105d13bb4;
  puStack_c0 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_b8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_11273496c);
  *(undefined **)(param_1 + (long)_DAT_11273496c) = puVar9;
  _objc_release(uVar12);
  puVar10 = PTR_PTR_1126c40a8;
  _objc_alloc();
  func_0x00010c058120();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_11273498c);
  _objc_retain(uVar12);
  func_0x00010bf9d660(uVar12);
  _objc_release(uVar12);
  lVar5 = param_1 + (long)_DAT_112734988;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfe84c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_1 + (long)_DAT_112734970;
  _objc_loadWeakRetained();
  puVar9 = PTR_PTR_1126ae720;
  puStack_128 = puVar11;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_105d13c50;
  puStack_110 = &UNK_1108e5e08;
  _objc_copyWeak(auStack_f0,auStack_80);
  _objc_retain(lVar6);
  lStack_108 = lVar6;
  _objc_retain(lVar5);
  lStack_100 = lVar5;
  _objc_copyWeak(auStack_e8,auStack_88);
  uStack_e0 = uVar13;
  _objc_retain(lVar8);
  lStack_f8 = lVar8;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_112734974);
  *(undefined **)(param_1 + (long)_DAT_112734974) = puVar9;
  _objc_release(uVar12);
  puVar11 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_140,auStack_80);
  _objc_retain(lVar6);
  _objc_retain(lVar5);
  _objc_copyWeak(auStack_138,auStack_88);
  uStack_130 = uVar13;
  _objc_retain(lVar8);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_112734978);
  *(undefined **)(param_1 + (long)_DAT_112734978) = puVar11;
  _objc_release(uVar12);
  puVar11 = PTR_PTR_1126c40b0;
  _objc_alloc(PTR_PTR_1126c40b0);
  func_0x00010c00a060();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_112734990);
  _objc_retain(uVar12);
  func_0x00010bf9d660(uVar12);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_138);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_140);
  _objc_release(lStack_f8);
  _objc_destroyWeak(auStack_e8);
  _objc_release(lStack_100);
  _objc_release(lStack_108);
  _objc_destroyWeak(auStack_f0);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar8);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d13b18; end: 105d13c4f;  */

void FUN_105d13b18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c4090;
  _objc_opt_new(PTR_PTR_1126c4090);
  puVar2 = PTR_PTR_1126c4098;
  _objc_alloc(PTR_PTR_1126c4098);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c045bc0(puVar2,param_2,param_1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c40a0;
  _objc_alloc(PTR_PTR_1126c40a0);
  func_0x00010c00a0a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d13c50; end: 105d13e37;  */

void FUN_105d13c50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bb978;
  _objc_alloc(PTR_PTR_1126bb978);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1046a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c1116c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045be0(puVar1,param_2,lVar2,uVar3,uVar4,lVar6,0,*(undefined1 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d13e38; end: 105d13ebf; -[SCUcoImageProcessServicesEntryPoint _previewConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d13e38(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1 + _DAT_11273497c;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar4;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105d13ec0; end: 105d13f9f; -[SCUcoImageProcessServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d13ec0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734990,0);
  _objc_storeStrong(param_1 + _DAT_11273498c,0);
  _objc_destroyWeak(param_1 + _DAT_112734964);
  _objc_destroyWeak(param_1 + _DAT_112734988);
  _objc_destroyWeak(param_1 + _DAT_112734970);
  _objc_destroyWeak(param_1 + _DAT_112734984);
  _objc_destroyWeak(param_1 + _DAT_11273495c);
  _objc_destroyWeak(param_1 + _DAT_112734960);
  _objc_destroyWeak(param_1 + _DAT_112734980);
  _objc_destroyWeak(param_1 + _DAT_11273497c);
  _objc_storeStrong(param_1 + _DAT_112734978,0);
  _objc_storeStrong(param_1 + _DAT_112734974,0);
  _objc_storeStrong(param_1 + _DAT_11273496c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734968,0);
  return;
}



/* Entry: 105d13fa0; end: 105d13fe7; -[SCBaseImageProcessCommandProvider initWithSpectaclesCPUCommandsEnabled:] */

void FUN_105d13fa0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecea8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 105d13fe8; end: 105d1419b; -[SCBaseImageProcessCommandProvider videoCPUCommandForFilterName:config:isSpectacles:] */

void FUN_105d13fe8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  if ((param_5 == 0) || ((*(byte *)(param_1 + 8) & 1) == 0)) {
    func_0x00010914e0b4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_105d14054;
  }
  else {
LAB_105d14054:
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27538);
    puVar4 = PTR_PTR_1126bf450;
    if (((((int)uVar3 != 0) ||
         (uVar3 = param_3,
         func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27518),
         puVar4 = PTR_PTR_1126bf470, (int)uVar3 != 0)) ||
        (uVar3 = param_3,
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27558),
        puVar4 = PTR_PTR_1126bf460, (int)uVar3 != 0)) ||
       (uVar3 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27658),
       puVar4 = PTR_PTR_1126c40b8, (int)uVar3 != 0)) {
      func_0x00010c22b820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d140f0;
    }
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27598);
    if ((((int)uVar3 != 0) ||
        (uVar3 = param_3,
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f275d8),
        (int)uVar3 != 0)) ||
       (uVar3 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f275b8),
       (int)uVar3 != 0)) {
      puVar4 = PTR_PTR_1126bf480;
      uVar3 = param_3;
      FUN_105d1419c(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22b840(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_105d140f0;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_105d140f0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d1419c; end: 105d14233;  */

undefined ** FUN_105d1419c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f27598);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f275d8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f275b8);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e28bb8;
      if ((int)uVar1 == 0) {
        ppuVar2 = (undefined **)0x0;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e28b98;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e28b78;
  }
  _objc_release(param_1);
  return ppuVar2;
}



/* Entry: 105d14234; end: 105d14397; -[SCBaseImageProcessCommandProvider imageCommandForFilterName:] */

void FUN_105d14234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27538);
  puVar2 = PTR_PTR_1126bf448;
  if (((((int)uVar1 == 0) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27518),
       puVar2 = PTR_PTR_1126bf468, (int)uVar1 == 0)) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27558),
      puVar2 = PTR_PTR_1126bf458, (int)uVar1 == 0)) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27658),
     puVar2 = PTR_PTR_1126b26c8, (int)uVar1 == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27598);
    if ((((int)uVar1 == 0) &&
        (uVar1 = param_3,
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f275d8),
        (int)uVar1 == 0)) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f275b8),
       (int)uVar1 == 0)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126bf478;
      uVar1 = param_3;
      FUN_105d1419c(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22b840(puVar2,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010c22b820(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d14398; end: 105d1442b; -[SCBaseImageProcessCommandProvider imageCommandForFilterName:config:] */

void FUN_105d14398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c40c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010b7448e4();
  _objc_release(param_3);
  func_0x00010bfe7140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d1442c; end: 105d1450b; -[SCBaseImageProcessCommandProvider imageCommandForCommandConfiguration:filterConfiguration:] */

void FUN_105d1442c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f277d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf488;
  if (param_4 == 0) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_3 + 0x10);
    }
    _objc_retain(uVar3);
    func_0x00010bfe7160(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    lVar1 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    func_0x00010c23d0a0(param_4);
    func_0x00010bf41dc0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d1450c; end: 105d1456b; -[SCBaseImageProcessCommandProvider spectaclesRectificationCommandForConfig:] */

void FUN_105d1450c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0badf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_mappedCommandsWithMapper__11260c590,puVar1);
  return;
}



/* Entry: 105d1456c; end: 105d1457b; -[SCBaseImageProcessCommandProvider virtualCommandsForRequest:] */

void FUN_105d1456c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0badf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_mappedCommandsWithMapper__11260c590,param_1);
  return;
}



/* Entry: 105d1457c; end: 105d1457f; -[SCBaseImageProcessCommandProvider commandsForRequest:] */

void FUN_105d1457c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_virtualCommandsForRequest__112685870);
  return;
}



/* Entry: 105d14580; end: 105d14677; -[SCBaseImageProcessCommandProvider commandForRequest:filterName:filterConfig:fallbackImageProcessCommand:] */

void FUN_105d14580(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 - 1U < 2) {
    func_0x00010bfe71a0(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 0) {
    func_0x00010c299800(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  lVar1 = param_6;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d14678; end: 105d1469f; -[SCBaseImageProcessCommandProvider commandForRequest:imageProcessCommand:] */

void FUN_105d14678(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x3);
  return;
}



/* Entry: 105d146a0; end: 105d146a7; -[SCBaseImageProcessCommandProvider commandForRequest:lensId:] */

undefined8 FUN_105d146a0(void)

{
  return 0;
}



/* Entry: 105d146a8; end: 105d14763; -[SCBaseImageProcessCommandProvider imageCommandForRequest:filterName:filterConfig:] */

void FUN_105d146a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f277d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf488;
  if (param_5 == 0) {
    func_0x00010bfe7160(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_5;
    _objc_retainAutorelease(param_5);
    func_0x00010bdc1020();
    func_0x00010c23d0a0(param_5);
    func_0x00010bf41dc0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d14764; end: 105d148d7; -[SCBaseImageProcessCommandProvider videoCommandForRequest:filterName:filterConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105d14764(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             long param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_60;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_4;
  lVar8 = param_5;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puVar6 = param_4;
    func_0x00010bfe7160();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR_PTR_1126b26e8;
    _objc_alloc();
    puVar1 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bf488;
    _objc_retainAutorelease(param_5);
    func_0x00010bdc1020();
    func_0x00010c23d0a0(param_5);
    func_0x00010bf41dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x2;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bfffdc0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(lVar8);
  _objc_retain(param_6);
  _objc_retain(uStack_60);
  puStack_c8 = PTR_PTR_1126eceb0;
  puStack_d0 = param_4;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_initWithSpectaclesCPUCommandsEna_11252d228,1);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + (long)_DAT_112734998),puVar6);
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + (long)_DAT_11273499c),puVar7);
    lVar9 = (long)_DAT_1127349a0;
    _objc_retain(lVar8);
    uVar5 = *(undefined8 *)((long)ppuVar4 + lVar9);
    *(long *)((long)ppuVar4 + lVar9) = lVar8;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_1127349a4;
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + lVar9);
    *(undefined8 *)((long)ppuVar4 + lVar9) = param_6;
    _objc_release(uVar5);
    *(undefined1 *)((long)ppuVar4 + (long)_DAT_1127349a8) = param_7;
    *(undefined1 *)((long)ppuVar4 + (long)_DAT_1127349ac) = param_8;
    lVar9 = (long)_DAT_1127349b0;
    _objc_retain(uStack_60);
    uVar5 = *(undefined8 *)((long)ppuVar4 + lVar9);
    *(undefined8 *)((long)ppuVar4 + lVar9) = uStack_60;
    _objc_release(uVar5);
  }
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105d148d8; end: 105d14a33; -[SCImageProcessCommandProviderV2 initWithSharedServices:spectaclesCommandFactory:entryPointTracker:lensCrashLogger:usedForTranscodingOnly:isVideo:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105d148d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eceb0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithSpectaclesCPUCommandsEna_11252d228,1);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112734998),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273499c),param_4);
    lVar3 = (long)_DAT_1127349a0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127349a4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127349a8) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127349ac) = param_8;
    lVar3 = (long)_DAT_1127349b0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d14a34; end: 105d14abb; -[SCImageProcessCommandProviderV2 lensModeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14a34(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_1127349a8);
  param_1 = param_1 + _DAT_112734998;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  if ((bVar1 & 1) == 0) {
    func_0x00010c0955a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c279fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d14abc; end: 105d14b23; -[SCImageProcessCommandProviderV2 lensProcessingCore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14abc(long param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_1127349a8);
  param_1 = param_1 + _DAT_112734998;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  if ((bVar1 & 1) == 0) {
    func_0x00010c096120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c27a000();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d14b24; end: 105d14b6b; -[SCImageProcessCommandProviderV2 dirtyFrameProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14b24(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112734998;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf7f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d14b6c; end: 105d14bd3; -[SCImageProcessCommandProviderV2 fpsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14b6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112734998;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfb6720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d14bd4; end: 105d14cbb; -[SCImageProcessCommandProviderV2 videoCPUCommandForFilterName:config:isSpectacles:] */

void FUN_105d14bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be4afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be4b6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puStack_48 = PTR_PTR_1126eceb0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_videoCPUCommandForFilterName_con_112683ee8,param_3,param_4,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar3 = (long *)0x0;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 105d14cbc; end: 105d14f1b; -[SCImageProcessCommandProviderV2 imageCommandForCommandConfiguration:filterConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14cbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_88;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar9);
  lVar1 = param_1;
  func_0x00010be4afc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar9);
  lVar2 = param_1;
  func_0x00010be4b6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar2 == 0) {
    puStack_68 = PTR_PTR_1126eceb0;
    plVar8 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar8,PTR_s_imageCommandForCommandConfigurat_1125d7618,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar8 = (long *)PTR_PTR_1126c40c8;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c096120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfb6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf7f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127349a0);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127349a4);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    if (lVar1 == 0) {
      lStack_88 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lStack_88;
      func_0x00010bf8cda0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c025100(plVar8);
    if (lVar1 == 0) {
      _objc_release(lVar7);
      _objc_release(lStack_88);
    }
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar8);
  return;
}



/* Entry: 105d14f1c; end: 105d14f87; -[SCImageProcessCommandProviderV2 spectaclesRectificationCommandForConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273499c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c087c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d14f88; end: 105d1514f; -[SCImageProcessCommandProviderV2 commandsForRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d14f88(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c072520();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar1 != 0) {
    puVar2 = param_1;
    func_0x00010c29f920(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 < (undefined *)0x2) {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    else {
      puVar4 = PTR_PTR_1126c4098;
      _objc_alloc();
      param_1 = param_1 + _DAT_112734998;
      _objc_loadWeakRetained(param_1);
      func_0x00010c045bc0(puVar4,param_2,param_1);
      _objc_release(param_1);
      puVar5 = PTR_PTR_1126c40d0;
      _objc_alloc(PTR_PTR_1126c40d0);
      func_0x00010c0169a0();
      puVar6 = PTR_PTR_1126c40d8;
      _objc_alloc(PTR_PTR_1126c40d8);
      lVar1 = param_3;
      func_0x00010c072520(param_3);
      func_0x00010c05a600(puVar6,param_2,1,0,lVar1);
      lVar1 = param_3;
      func_0x00010c27dd80(param_3);
      puVar7 = puVar4;
      func_0x00010c27fea0(puVar4,param_2,puVar5,puVar6,lVar1 == 0);
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined *)0x1;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    puVar3 = param_4;
    ___stack_chk_fail();
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d15150; end: 105d15177; -[SCImageProcessCommandProviderV2 commandForRequest:imageProcessCommand:] */

void FUN_105d15150(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x3);
  return;
}



/* Entry: 105d15178; end: 105d154af; -[SCImageProcessCommandProviderV2 commandForRequest:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d15178(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 in_stack_ffffffffffffff78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c072520();
  if ((int)lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0955a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c095540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c27dd80();
    lVar5 = param_1;
    lVar6 = param_1;
    lVar7 = param_1;
    if ((lVar1 == 1) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 2)) {
      puVar9 = PTR_PTR_1126c40e0;
      _objc_alloc(PTR_PTR_1126c40e0);
      func_0x00010c096120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb6720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127349a0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127349a4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        lVar1 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar1;
        func_0x00010bf8cda0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c025460(puVar9,param_2,lVar5,lVar6,lVar7,uVar3,uVar4,lVar8,0x100,
                            *(undefined8 *)(param_1 + _DAT_1127349b0));
        _objc_release(lVar8);
        _objc_release(lVar1);
      }
      else {
        func_0x00010c025460(puVar9,param_2,lVar5,lVar6,lVar7,uVar3,uVar4,param_4,0x100,
                            *(undefined8 *)(param_1 + _DAT_1127349b0));
      }
    }
    else {
      puVar9 = PTR_PTR_1126c40c8;
      _objc_alloc();
      func_0x00010c096120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb6720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127349a0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127349a4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c27dd80();
      lVar8 = param_3;
      func_0x00010c07e6c0();
      func_0x00010c025100(puVar9,param_2,lVar2,lVar5,lVar6,lVar7,uVar3,uVar4,param_4,
                          CONCAT71(CONCAT61((int6)(CONCAT53((int5)((ulong)in_stack_ffffffffffffff78
                                                                  >> 0x18),0x10000) >> 0x10),
                                            (char)lVar8),lVar1 == 0),
                          *(undefined8 *)(param_1 + _DAT_1127349b0));
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105d154b0; end: 105d15863; -[SCImageProcessCommandProviderV2 imageCommandForRequest:filterName:filterConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d154b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_98;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be4afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be4b6a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puStack_68 = PTR_PTR_1126eceb0;
    plVar5 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar5,PTR_s_imageCommandForRequest_filterNam_1125d7630,param_3,param_4,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_3;
    func_0x00010c072520();
    lVar6 = param_1;
    if ((int)uVar3 == 0) {
      plVar5 = (long *)PTR_PTR_1126c40c8;
      _objc_alloc();
      func_0x00010c096120();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bfb6720();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf7f9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127349a0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127349a4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      if (lVar1 == 0) {
        lStack_98 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lStack_98;
        func_0x00010bf8cda0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c07e6c0();
      func_0x00010c072520();
      func_0x00010c025100(plVar5);
      if (lVar1 == 0) {
        _objc_release(lVar9);
        _objc_release(lStack_98);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    else {
      plVar5 = (long *)PTR_PTR_1126c40e0;
      _objc_alloc();
      func_0x00010c096120();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bfb6720();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf7f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127349a0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127349a4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar9 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf8cda0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c025460(plVar5);
        _objc_release(lVar10);
        _objc_release(lVar9);
      }
      else {
        func_0x00010c025460(plVar5);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 105d15864; end: 105d15aaf; -[SCImageProcessCommandProviderV2 videoCommandForRequest:filterName:filterConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d15864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_98;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be4afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be4b6a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puStack_68 = PTR_PTR_1126eceb0;
    plVar9 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar9,PTR_s_videoCommandForRequest_filterNam_112684028,param_3,param_4,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar9 = (long *)PTR_PTR_1126c40c8;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c096120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfb6720();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf7f9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127349a0);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127349a4);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    if (lVar1 == 0) {
      lStack_98 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lStack_98;
      func_0x00010bf8cda0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c07e6c0();
    func_0x00010c072520();
    func_0x00010c025100(plVar9);
    if (lVar1 == 0) {
      _objc_release(lVar8);
      _objc_release(lStack_98);
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar9);
  return;
}



/* Entry: 105d15ab0; end: 105d15b47; -[SCImageProcessCommandProviderV2 _lensModeForLensId:filterName:] */

void FUN_105d15ab0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0955a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  if (param_3 == 0) {
    func_0x00010bf24d20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c095540();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d15b48; end: 105d15c37; -[SCImageProcessCommandProviderV2 _lensIdForFilterConfig:filterName:] */

void FUN_105d15b48(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27778);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c081f00();
  if ((int)uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) goto LAB_105d15bf4;
  }
  uVar1 = param_4;
  func_0x00010bf44740(param_4,param_2,&PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_105d15bf4:
  uVar2 = uVar3;
  func_0x00010c08fa60();
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar3;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d15c38; end: 105d15c9f; -[SCImageProcessCommandProviderV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d15c38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127349b0,0);
  _objc_storeStrong(param_1 + _DAT_1127349a4,0);
  _objc_storeStrong(param_1 + _DAT_1127349a0,0);
  _objc_destroyWeak(param_1 + _DAT_11273499c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734998);
  return;
}



/* Entry: 105d15ca0; end: 105d15f6f; -[SCUcoMemoriesSpectaclesServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d15ca0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = param_1;
  FUN_105d15f70();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27e5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x000105d15f94();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf6dcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c40e8;
    _objc_alloc();
    puVar5 = puVar3;
    func_0x00010bfbd940(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c113000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x000105d15f94();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar1);
    puVar1 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c2484e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00b920();
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar1 = PTR_PTR_1126ae720;
    _objc_retain(puVar4);
    func_0x00010bf11fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  puVar2 = PTR_PTR_1126c40f0;
  _objc_alloc(PTR_PTR_1126c40f0);
  puVar4 = param_1;
  FUN_105d15f70(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c27e9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057fc0(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (param_1 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127349c0);
  }
  func_0x00010bf9d660(uVar9);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d15f70; end: 105d15fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d15f70(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127349b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d15fb8; end: 105d160a3;  */

undefined * FUN_105d15fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117f4b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4b900(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 105d160a4; end: 105d160fb; -[SCUcoMemoriesSpectaclesServicesEntryPoint spectaclesAvailabilityHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d160a4(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127349bc;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c1306e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d160fc; end: 105d1614f; -[SCUcoMemoriesSpectaclesServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d160fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127349c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127349bc);
  _objc_destroyWeak(param_1 + _DAT_1127349b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127349b4);
  return;
}



/* Entry: 105d16150; end: 105d16277; -[SCUcoSnapDepthDataLoaderImpl initWithDepthDataForGallerySnaps:primarySnap:ucoMediaContainer:availabilityHandler:depthDataAvailabilityResolver:] */

undefined1 *
FUN_105d16150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eceb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d16278; end: 105d163c3; -[SCUcoSnapDepthDataLoaderImpl loadRequiredDataForLensMetadata:] */

void FUN_105d16278(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x00010c263620();
  if ((param_3 & 1) == 0) {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,PTR____kCFBooleanTrue_11034ab68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar5 = PTR_PTR_1126c40f8;
      _objc_alloc(PTR_PTR_1126c40f8);
      func_0x00010c00b8e0();
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105d163c4;
      puStack_60 = &UNK_110849810;
      _objc_retain(puVar4);
      puStack_58 = puVar4;
      func_0x00010c13a7c0(puVar5,param_2,uVar7,uVar2,uVar1,uVar6,&puStack_78);
      _objc_release(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar4;
      _objc_retain(puVar4);
      _objc_release(uVar7);
      _objc_release(puStack_58);
      _objc_release(puVar4);
      _objc_release(puVar5);
      lVar3 = *(long *)(param_1 + 0x30);
    }
    func_0x00010bfbc3e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d163c4; end: 105d1647b;  */

void FUN_105d163c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f88c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105d1647c; end: 105d16493;  */

void FUN_105d1647c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105d16494; end: 105d164f3; -[SCUcoSnapDepthDataLoaderImpl .cxx_destruct] */

void FUN_105d16494(long param_1)

{
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



/* Entry: 105d164f4; end: 105d1656b; -[SCUcoSnapDepthDataResolverImpl initWithDepthDataAvailabilityResolver:] */

undefined1 * FUN_105d164f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecec0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d1656c; end: 105d16603; -[SCUcoSnapDepthDataResolverImpl renderingMetadataUnavailableErrorForSnap:] */

void FUN_105d1656c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e28bf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e28bd8,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d16604; end: 105d1692f; -[SCUcoSnapDepthDataResolverImpl resolveDepthDataForGallerySnaps:primarySnap:ucoMediaContainer:availabilityHandler:completion:] */

void FUN_105d16604(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010b5fa088(param_4);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    uVar6 = (uint)lVar2 ^ 1;
  }
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105d16930;
  puStack_100 = &UNK_110859a38;
  _objc_retain(param_7);
  ppuVar3 = &puStack_118;
  uStack_f8 = param_7;
  _objc_retainBlock();
  if (uVar6 == 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(uVar7 * 8);
        func_0x00010b5fa088(uVar4);
        uVar5 = *(ulong *)(param_1 + 8);
        if ((uVar5 == 0) || ((**(code **)(uVar5 + 0x10))(uVar5,uVar4), (uVar5 & 1) == 0)) {
          (*(code *)ppuVar3[2])(ppuVar3,0);
          param_1 = param_3;
          goto LAB_105d16888;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar1 = param_3;
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      uVar1 = param_6;
      func_0x00010c07b100();
      if ((int)uVar1 == 0) goto LAB_105d167ec;
    }
    else {
      uVar1 = param_6;
      func_0x00010c07b0e0();
      if ((uVar1 & 1) == 0) {
LAB_105d167ec:
        uVar1 = param_6;
        func_0x00010c07c3c0();
        if ((uVar1 & 1) == 0) {
          func_0x00010c130800(param_1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)ppuVar3[2])(ppuVar3,param_1);
        }
        else {
          uVar1 = param_4;
          func_0x00010b5fa088();
          param_1 = param_5;
          if ((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) {
            func_0x00010c29ae80(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c109240(param_6);
          }
          else {
            func_0x00010bfbbbc0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c109220(param_6);
          }
        }
LAB_105d16888:
        _objc_release(param_1);
        goto LAB_105d1688c;
      }
    }
  }
  (*(code *)ppuVar3[2])(ppuVar3,0);
LAB_105d1688c:
  _objc_release(ppuVar3);
  _objc_release(uStack_f8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105d1693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105d16930; end: 105d16947;  */

void FUN_105d16930(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105d1693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105d16948; end: 105d16953; -[SCUcoSnapDepthDataResolverImpl .cxx_destruct] */

void FUN_105d16948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d16954; end: 105d169c7; -[SCUcoVisualSignalDataServices initWithVisualSignalProvider:] */

undefined1 * FUN_105d16954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecec8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d169c8; end: 105d169cf; -[SCUcoVisualSignalDataServices visualSignalProvider] */

undefined8 FUN_105d169c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d169d0; end: 105d169db; -[SCUcoVisualSignalDataServices .cxx_destruct] */

void FUN_105d169d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d169dc; end: 105d16a53; -[SCUcoVisualSignalData initWithClassifications:] */

undefined1 * FUN_105d169dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eced0;
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



/* Entry: 105d16a54; end: 105d16a77; -[SCUcoVisualSignalData copyWithZone:] */

undefined8 FUN_105d16a54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105d16a78; end: 105d16a7f; -[SCUcoVisualSignalData hash] */

void FUN_105d16a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105d16a80; end: 105d16b0f; -[SCUcoVisualSignalData isEqual:] */

long FUN_105d16a80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105d16af4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105d16af4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105d16af4;
    }
  }
  lVar3 = 1;
LAB_105d16af4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d16b10; end: 105d16b17; -[SCUcoVisualSignalData classifications] */

undefined8 FUN_105d16b10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


