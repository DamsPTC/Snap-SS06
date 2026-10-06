/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ccdd74; end: 108ccddc3;  */

void FUN_108ccdd74(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 108ccddc4; end: 108cce32f;  */

void FUN_108ccddc4(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  ppuVar1 = (undefined **)PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  ppuVar3 = (undefined **)PTR_PTR_1126b0c40;
  if (param_2 == 2) {
    func_0x000108ccdda4(param_1);
LAB_108ccde94:
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuVar5 = (undefined **)PTR_PTR_1126b0c40;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    goto LAB_108cce09c;
  }
  if (param_2 == 1) {
    func_0x000108ccdd84(param_1);
    goto LAB_108ccde94;
  }
  if (param_2 != 0) {
    ppuVar5 = (undefined **)0x0;
    ppuVar4 = ppuVar1;
    ppuVar3 = (undefined **)0x0;
    goto LAB_108cce09c;
  }
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
  switch(param_1) {
  case 1:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    goto LAB_108ccde40;
  case 9:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xd:
    goto code_r0x000108cce064;
  case 0xe:
  case 0x13:
LAB_108ccde40:
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)0x0;
    ppuVar3 = ppuVar4;
    if (param_1 < 0xd) {
      if ((param_1 == 9) || (param_1 == 0xc)) break;
    }
    else if ((param_1 == 0xd) || (param_1 == 0xf)) break;
    goto LAB_108cce09c;
  case 0xf:
code_r0x000108cce064:
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar5;
LAB_108cce09c:
  switch(param_1) {
  case 1:
    ppuVar6 = &PTR_PTR_110aca4e8;
    break;
  case 2:
    ppuVar6 = &PTR_PTR_110aca580;
    break;
  case 3:
    ppuVar6 = &PTR_PTR_110aca4d8;
    break;
  case 4:
    ppuVar6 = &PTR_PTR_110aca4e0;
    break;
  case 5:
    ppuVar6 = &PTR_PTR_110aca4f0;
    break;
  case 6:
    ppuVar6 = &PTR_PTR_110aca6d8;
    break;
  case 7:
    ppuVar6 = &PTR_PTR_110aca578;
    break;
  case 8:
    goto code_r0x000108cce150;
  case 9:
    ppuVar6 = &PTR_PTR_110aca788;
    break;
  default:
    goto code_r0x000108cce150;
  case 0xc:
    ppuVar6 = &PTR_PTR_110aca540;
    break;
  case 0xd:
code_r0x000108cce150:
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_108cce1c8;
  case 0xf:
    ppuVar6 = &PTR_PTR_110aca588;
    break;
  case 0x18:
    ppuVar6 = &PTR_PTR_110aca5a0;
  }
  ppuVar6 = (undefined **)*ppuVar6;
  ppuVar4 = ppuVar6;
  _objc_retain(ppuVar6);
LAB_108cce1c8:
  ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  switch(param_1) {
  case 1:
    func_0x000108edf0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 2:
    func_0x000108edf0c8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 3:
    func_0x000108edf0f8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 4:
    func_0x000108edf110();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 5:
    func_0x000108edf188();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 6:
    func_0x000108edf170();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 7:
    func_0x000108edf260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 9:
    func_0x000108edf1d0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 10:
    func_0x000108edf128();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 0xb:
    func_0x000108edf1b8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 0xc:
    func_0x000108edf1a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 0xf:
    func_0x000108edf140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 0x10:
    func_0x000108edf158();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    break;
  case 0x18:
    func_0x000108edf1e8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
  }
  func_0x00010c020380(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108cce330; end: 108cce3ef; -[SCPreviewToolBarLabeledGrowingButton initWithFrame:labelText:imageWidth:] */

undefined8
FUN_108cce330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_8);
  func_0x00010bf6d680(0x402a000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0147a0(param_1,param_2,param_3,param_4,param_5,0xc014000000000000,param_6,param_7,
                      param_8,1,puVar1);
  _objc_release(param_8);
  _objc_release(puVar1);
  return param_6;
}



/* Entry: 108cce3f0; end: 108cce403; -[SCPreviewToolBarLabeledGrowingButton initWithFrame:labelText:font:] */

void FUN_108cce3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0147b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_labelText_imageWid_1125e2bb8,param_3,0,param_4);
  return;
}



/* Entry: 108cce404; end: 108cce557; -[SCPreviewToolBarLabeledGrowingButton initWithFrame:labelText:imageWidth:gradientBackground:font:labelXOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108cce404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,int param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126fe358;
  uStack_80 = param_7;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdeef00(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a828);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277a828) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    if (param_10 != 0) {
      puVar2 = (undefined1 *)puVar1;
      func_0x00010bdee400(param_5,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined1 *)puVar1;
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f40();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_11);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 108cce558; end: 108cce693; -[SCPreviewToolBarLabeledGrowingButton _createLabelWithText:font:labelXOffset:] */

void FUN_108cce558(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  dVar3 = *(double *)PTR__CGRectZero_110347608;
  dVar4 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar5 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar6 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(dVar3,dVar4,dVar5,dVar6);
  func_0x00010c212f20();
  _objc_release(param_4);
  func_0x00010c19e480(puVar1,param_3,param_5);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar1);
  func_0x00010bfb68e0(param_2);
  func_0x00010bfb68e0(puVar1);
  dVar3 = dVar3 - dVar5;
  func_0x00010bf345e0(param_2);
  func_0x00010bfb68e0(puVar1);
  func_0x00010bfb68e0(puVar1);
  func_0x00010bfb68e0(puVar1);
  func_0x00010c19f0e0(dVar3 - param_1,dVar4 + dVar6 * -0.5,dVar5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cce694; end: 108cce823; -[SCPreviewToolBarLabeledGrowingButton _createGradientWithWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cce694(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = (long)_DAT_11277a828;
  dVar6 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  dVar7 = -10.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  dVar8 = param_3;
  func_0x00010bfb68e0(param_5);
  param_3 = param_3 + dVar8;
  func_0x00010bfb68e0(param_5);
  dVar8 = (param_3 - (dVar8 - param_1) * 0.5) + 5.0 + -5.0 + 10.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  param_4 = param_4 + 10.0;
  dVar9 = param_4 * 0.5;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,dVar8,param_4,dVar9,dVar9,PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_6
                      ,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,dVar8,param_4);
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_6,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe4000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar2,param_6,puVar4);
  _objc_release(puVar3);
  func_0x00010c1dee80(dVar6 + -10.0 + dVar8 * 0.5,dVar7 + -5.0 + dVar9,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cce824; end: 108cce833; -[SCPreviewToolBarLabeledGrowingButton label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cce824(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a828);
}



/* Entry: 108cce834; end: 108cce847; -[SCPreviewToolBarLabeledGrowingButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cce834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a828,0);
  return;
}



/* Entry: 108cce848; end: 108cceac7; -[SCPreviewToolBarMagicCaptureButton initWithFrame:titleText:loadingText:typeStyle:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108cce848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *param_10)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = PTR_PTR_1126fe360;
  puVar8 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar8,PTR_s_initWithFrame__1125e2948);
  if (puVar8 != (undefined8 *)0x0) {
    puVar2 = puVar8;
    func_0x00010bdeef20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11277a82c;
    uVar9 = *(undefined8 *)((long)puVar8 + lVar10);
    *(undefined8 **)((long)puVar8 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)((long)puVar8 + lVar10));
    func_0x00010befbb60(puVar8);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar8 + lVar10);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c08e400(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar9;
    uVar4 = *(undefined8 *)((long)puVar8 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf348e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar3);
    lVar10 = (long)_DAT_11277a830;
    _objc_retain(param_7);
    uVar9 = *(undefined8 *)((long)puVar8 + lVar10);
    *(undefined8 **)((long)puVar8 + lVar10) = param_7;
    _objc_release(uVar9);
    lVar10 = (long)_DAT_11277a834;
    _objc_retain(param_8);
    uVar9 = *(undefined8 *)((long)puVar8 + lVar10);
    *(undefined8 *)((long)puVar8 + lVar10) = param_8;
    _objc_release(uVar9);
    func_0x00010c209fc0(puVar8);
    puVar2 = param_10;
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar8;
  }
  ___stack_chk_fail();
  if (*(undefined8 **)((long)param_7 + (long)_DAT_11277a838) == puVar2) {
    return param_7;
  }
  *(undefined8 **)((long)param_7 + (long)_DAT_11277a838) = puVar2;
  lVar10 = (long)_DAT_11277a82c;
  if (puVar2 == (undefined8 *)0x2) {
    func_0x00010c1a7f60(*(undefined8 *)((long)param_7 + lVar10));
    func_0x00010c212f20(*(undefined8 *)((long)param_7 + lVar10));
    func_0x00010beb99a0(param_7);
  }
  else {
    if (puVar2 == (undefined8 *)0x1) {
      func_0x00010c1a7f60(*(undefined8 *)((long)param_7 + lVar10));
      func_0x00010c212f20(*(undefined8 *)((long)param_7 + lVar10));
    }
    else {
      if (puVar2 != (undefined8 *)0x0) goto LAB_108cceb74;
      func_0x00010c1a7f60(*(undefined8 *)((long)param_7 + lVar10));
    }
    func_0x00010be358e0(param_7);
  }
LAB_108cceb74:
  puVar8 = *(undefined8 **)((long)param_7 + lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar8,PTR_s_sizeToFit_11266cfb0);
  return puVar8;
}



/* Entry: 108cceac8; end: 108cceb83; -[SCPreviewToolBarMagicCaptureButton setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cceac8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277a838) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277a838) = param_3;
  lVar1 = (long)_DAT_11277a82c;
  if (param_3 == 2) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
    func_0x00010beb99a0(param_1);
  }
  else {
    if (param_3 == 1) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
    }
    else {
      if (param_3 != 0) goto LAB_108cceb74;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,1);
    }
    func_0x00010be358e0(param_1);
  }
LAB_108cceb74:
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_sizeToFit_11266cfb0)
  ;
  return;
}



/* Entry: 108cceb84; end: 108ccebfb; -[SCPreviewToolBarMagicCaptureButton _createLabelWithTypeStyle:] */

void FUN_108cceb84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ccebfc; end: 108ccedcb; -[SCPreviewToolBarMagicCaptureButton _showLoadingIndicator] */

/* WARNING: Possible PIC construction at 0x000108ccec70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ccec74) */

void FUN_108ccebfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf9e7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126dba90;
    _objc_alloc(PTR_PTR_1126dba90);
    func_0x00010c00c8a0(0x3fe6666666666666);
    lVar2 = param_1;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    lVar1 = lVar2;
    func_0x00010bf9e7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c199930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setExtraAnimationView__112644068,puVar3);
  return;
}



/* Entry: 108ccedcc; end: 108ccee0b; -[SCPreviewToolBarMagicCaptureButton _hideLoadingIndicator] */

void FUN_108ccedcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf9e7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c199930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setExtraAnimationView__112644068,0);
  return;
}



/* Entry: 108ccee0c; end: 108ccee5b; -[SCPreviewToolBarMagicCaptureButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccee0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a834,0);
  _objc_storeStrong(param_1 + _DAT_11277a830,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a82c,0);
  return;
}



/* Entry: 108ccee5c; end: 108cceec7;  */

undefined1  [16]
FUN_108ccee5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  auVar2._8_8_ = (double)(float)(int)param_1;
  auVar2._0_8_ = (double)(float)(int)dVar1;
  return auVar2;
}



/* Entry: 108cceec8; end: 108ccf087; -[SCPreviewToolButton initWithImage:selectedMaskImage:iconStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108cceec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fe368;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a83c) = 0;
    lVar6 = (long)_DAT_11277a840;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    *(long *)((long)puVar1 + (long)_DAT_11277a844) = param_5;
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_11277a848;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c4b80;
    _objc_alloc();
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c013de0();
    lVar6 = (long)_DAT_11277a84c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    if (param_5 != 0) {
      puVar4 = (undefined1 *)puVar1;
      func_0x00010bfe3480(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      func_0x00010befbb60(puVar1);
      puVar3 = PTR_PTR_1126b08d8;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c30a24(0x402e000000000000,0x3fc3333333333333,
                          *(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar3,uVar2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ccf088; end: 108ccf103; -[SCPreviewToolButton updateImageWithImageName:] */

void FUN_108ccf088(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2865c0(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccf104; end: 108ccf1f3; -[SCPreviewToolButton updateSelectedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf104(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + _DAT_11277a844) != 0)) {
    lVar4 = (long)_DAT_11277a840;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    lVar4 = param_1;
    func_0x00010c159b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe91e0(0x4024000000000000,0x4024000000000000,0x4024000000000000,0x4024000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    func_0x00010bfe3480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccf1f4; end: 108ccf39f; -[SCPreviewToolButton updateImage:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf1f4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_7);
  if (param_7 != 0) {
    lVar2 = (long)_DAT_11277a848;
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar2));
    func_0x00010c182220(*(undefined8 *)(param_5 + lVar2));
    if (param_8 != 0) {
      _objc_initWeak(auStack_58,*(undefined8 *)(param_5 + lVar2));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
      func_0x00010c23d0a0(param_7);
      func_0x00010c23d0a0(param_7);
      if (param_3 / param_4 <= param_1 / param_2) {
        func_0x00010c182220(*(undefined8 *)(param_5 + lVar2));
      }
      _CGAffineTransformMakeScale(&uStack_88,0x3f847ae147ae147b,0x3f847ae147ae147b);
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      uStack_a8 = uStack_70;
      uStack_b0 = uStack_78;
      uStack_98 = uStack_60;
      uStack_a0 = uStack_68;
      func_0x00010c219960(*(undefined8 *)(param_5 + lVar2));
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_copyWeak(auStack_c8,auStack_58);
      func_0x00010bf02ee0(0x3fd3333333333333,0,puVar1);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 108ccf3a0; end: 108ccf4a3;  */

void FUN_108ccf3a0(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108ccf4a4;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108ccf4a4; end: 108ccf557;  */

void FUN_108ccf4a4(long param_1)

{
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeScale(auStack_50,0x3ff4000000000000,0x3ff4000000000000);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 108ccf558; end: 108ccf62b; -[SCPreviewToolButton setLoadingIndicatorVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf558(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  if (param_3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a848));
    lVar1 = param_1;
    func_0x00010c09d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(lVar1);
    func_0x00010c09d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a848),param_2,1);
    lVar1 = param_1;
    func_0x00010c09d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277a84c);
    func_0x00010c09d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108ccf62c; end: 108ccf65f; -[SCPreviewToolButton badgeHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ccf62c(double param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_11277a850) != 0) {
    func_0x00010bf01b40();
    return param_1 == 0.0;
  }
  return true;
}



/* Entry: 108ccf660; end: 108ccf6eb; -[SCPreviewToolButton setBadgeHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf660(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_11277a850;
  uVar4 = 0;
  if (((param_3 & 1) == 0) && (uVar4 = 0x3ff0000000000000, *(long *)(param_1 + lVar3) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277a84c);
    lVar1 = param_1;
    func_0x00010bf155a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2);
    _objc_release(lVar1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,*(undefined8 *)(param_1 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108ccf6ec; end: 108ccf81f; -[SCPreviewToolButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf6ec(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe368;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  FUN_108ccee5c();
  lVar1 = (long)_DAT_11277a84c;
  func_0x00010c17a6a0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  lVar2 = (long)_DAT_11277a848;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  lVar2 = (long)_DAT_11277a850;
  dVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  param_1 = param_1 - dVar3;
  dVar4 = param_1 + -1.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  dVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar4,0x3ff0000000000000,param_1,dVar3,*(undefined8 *)(param_2 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11277a854));
  func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(*(undefined8 *)(param_2 + _DAT_11277a858));
  func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(*(undefined8 *)(param_2 + _DAT_11277a85c));
  func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(*(undefined8 *)(param_2 + _DAT_11277a860));
  return;
}



/* Entry: 108ccf820; end: 108ccf89b; -[SCPreviewToolButton setShowingHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf820(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c105f40();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c074da0();
  uVar2 = 0;
  if ((int)lVar1 != 0) {
    func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_11277a860));
    if (param_1 != 0.0) goto LAB_108ccf88c;
    uVar2 = 0x3fc3333333333333;
  }
  func_0x00010bdcb3a0(0x3ff0000000000000,uVar2,0,param_2,param_3,param_2,param_4,0);
LAB_108ccf88c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ccf89c; end: 108ccf903; -[SCPreviewToolButton setHighlighted:] */

void FUN_108ccf89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126fe368;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38,param_3);
    func_0x00010c233960(param_1);
    func_0x00010c202400(param_1);
  }
  return;
}



/* Entry: 108ccf904; end: 108ccf95f; -[SCPreviewToolButton shouldShowHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108ccf904(ulong param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + (long)_DAT_11277a83c) != 2) {
    if (*(long *)(param_1 + (long)_DAT_11277a83c) == 1) {
      return 0;
    }
    uVar1 = param_1;
    func_0x00010c074da0();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isSelected_1125fcfa8);
      return param_1;
    }
  }
  return 1;
}



/* Entry: 108ccf960; end: 108ccf9d3; -[SCPreviewToolButton setSelected:] */

void FUN_108ccf960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c233960();
  puStack_38 = PTR_PTR_1126fe368;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setSelected__11265c598,param_3);
  uVar2 = param_1;
  func_0x00010c233960();
  if ((int)uVar1 != (int)uVar2) {
    func_0x00010c202400(param_1);
  }
  return;
}



/* Entry: 108ccf9d4; end: 108ccfa43; -[SCPreviewToolButton setSelectionStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccf9d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a83c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    lVar1 = param_1;
    func_0x00010c233960();
    *(long *)(param_1 + lVar2) = param_3;
    lVar2 = param_1;
    func_0x00010c233960();
    if ((int)lVar1 != (int)lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010c202410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShowingHighlighted__11265e328,lVar2);
      return;
    }
  }
  return;
}



/* Entry: 108ccfa44; end: 108ccfe1b; -[SCPreviewToolButton highlightedImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccfa44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

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
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar9 = (long)_DAT_11277a858;
  lVar8 = *(long *)(param_5 + lVar9);
  if (lVar8 == 0) {
    if (*(long *)(param_5 + _DAT_11277a844) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                          &PTR____CFConstantStringClassReference_110ef1d58);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar7 = *(undefined8 *)(param_5 + lVar9);
      *(undefined **)(param_5 + lVar9) = puVar1;
      _objc_release(uVar7);
      puVar3 = param_5;
      func_0x00010c159b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar2);
        lVar8 = 0;
        goto LAB_108ccfde8;
      }
      puVar3 = param_5;
      func_0x00010c159b80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      func_0x00010c1400a0(param_3,param_4,puVar1,param_6,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar8 = (long)_DAT_11277a864;
      uVar7 = *(undefined8 *)(param_5 + lVar8);
      *(undefined **)(param_5 + lVar8) = puVar3;
      _objc_release(uVar7);
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      FUN_108ccee5c();
      func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar8));
      func_0x00010c1c2ca0(*(undefined8 *)(param_5 + lVar9),param_6,*(undefined8 *)(param_5 + lVar8))
      ;
      dVar10 = 0.0;
      dVar12 = 0.0;
      func_0x00010c1739e0(0,0,0x4041000000000000,0x4041000000000000,*(undefined8 *)(param_5 + lVar9)
                         );
      func_0x00010bf20c00(param_5);
      FUN_108ccee5c();
      func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar9));
      puVar3 = param_5;
      func_0x00010bfe34a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      puVar4 = param_5;
      dVar11 = dVar10;
      func_0x00010bfe3480(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar10 = dVar10 / dVar11;
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_5;
      func_0x00010bfe3480(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      puVar5 = param_5;
      func_0x00010bfe3480(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c1739e0(0,0,dVar10 * dVar11,dVar10 * dVar12,*(undefined8 *)(param_5 + lVar8));
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      FUN_108ccee5c();
      func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar8));
    }
    else {
      puVar1 = param_5;
      func_0x00010c159b80(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bfe91e0(0x4024000000000000,0x4024000000000000,0x4024000000000000,
                          0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar7 = *(undefined8 *)(param_5 + lVar9);
      *(undefined **)(param_5 + lVar9) = puVar1;
      _objc_release(uVar7);
      func_0x00010c182220(*(undefined8 *)(param_5 + lVar9),param_6,4);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_5 + lVar9),param_6,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(*(undefined8 *)(param_5 + lVar9),param_6,puVar1);
      _objc_release(puVar1);
      func_0x00010c1739e0(0,0,0x4041000000000000,0x4041000000000000,*(undefined8 *)(param_5 + lVar9)
                         );
      puVar1 = *(undefined **)(param_5 + lVar9);
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4031000000000000);
    }
    _objc_release(puVar1);
    _objc_release(puVar2);
    lVar8 = *(long *)(param_5 + lVar9);
  }
  _objc_retain(lVar8);
LAB_108ccfde8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 108ccfe1c; end: 108ccffbf; -[SCPreviewToolButton highlightedFillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccfe1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
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
  
  lVar4 = (long)_DAT_11277a860;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4043000000000000,
                        0x4043000000000000);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fc3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bf199a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010bf345e0(*(undefined8 *)(param_1 + _DAT_11277a84c));
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    _CGAffineTransformMakeScale(&uStack_70,0x3fb999999999999a,0x3fb999999999999a);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_a0);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108ccffc0; end: 108cd0097; -[SCPreviewToolButton badgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccffc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277a850;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126c2ef8;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3feccccccccccccd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c520(0x4024000000000000,puVar1,param_2,puVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1a6d20(*(undefined8 *)(param_1 + lVar6),param_2,0);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar6));
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108cd0098; end: 108cd0103; -[SCPreviewToolButton loadingIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0098(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277a854;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108cd0104; end: 108cd0183; -[SCPreviewToolButton _animateView:toScale:withDuration:delay:highlighted:completion:] */

void FUN_108cd0104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108cd0184;
  puStack_30 = &UNK_110861e68;
  uStack_28 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_7;
  func_0x00010bf03460(param_2,param_3,0x3ff0000000000000,0x3fb999999999999a,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_5,2,&puStack_48);
  return;
}



/* Entry: 108cd0184; end: 108cd0197;  */

void FUN_108cd0184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_performResizingAnimationWithScal_11261bda0,*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 108cd0198; end: 108cd022b; -[SCPreviewToolButton preResizingAnimationWork:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108cd022c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a860);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 108cd022c; end: 108cd0317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd022c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar4 + _DAT_11277a844) == 0) {
    lVar1 = *(long *)(lVar4 + _DAT_11277a860);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      lVar1 = lVar4;
      func_0x00010bfe3420(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0(lVar4,param_2,lVar1,0);
      _objc_release(lVar1);
      lVar4 = *(long *)(param_1 + 0x20);
    }
  }
  lVar4 = *(long *)(lVar4 + _DAT_11277a858);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar3;
  func_0x00010bfe3480(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108cd0318; end: 108cd0673; -[SCPreviewToolButton performResizingAnimationWithScale:isHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0318(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar6 = (long)_DAT_11277a858;
  uVar1 = *(undefined8 *)(param_3 + lVar6);
  if (param_5 == 0) {
    if (*(long *)(param_3 + _DAT_11277a844) == 0) {
      dVar9 = 0.0;
      dVar11 = 0.0;
      func_0x00010c1739e0(0,0,0x3e80000000000000,0x3e80000000000000,uVar1);
      func_0x00010bf20c00(param_3);
      FUN_108ccee5c();
      func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar6));
      lVar2 = param_3;
      func_0x00010bfe34a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      lVar3 = param_3;
      dVar10 = dVar9;
      func_0x00010bfe3480(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar9 = dVar9 / dVar10;
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010bfe3480(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      lVar4 = param_3;
      func_0x00010bfe3480(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      lVar7 = (long)_DAT_11277a864;
      func_0x00010c1739e0(0,0,dVar9 * dVar10,dVar9 * dVar11,*(undefined8 *)(param_3 + lVar7));
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar6));
      FUN_108ccee5c();
      func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar7));
      lVar6 = (long)_DAT_11277a860;
      func_0x00010c1677c0(0,*(undefined8 *)(param_3 + lVar6));
      _CGAffineTransformMakeScale(&uStack_e0,0x3fb999999999999a,0x3fb999999999999a);
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      func_0x00010c219960(*(undefined8 *)(param_3 + lVar6),param_4,&uStack_b0);
    }
    else {
      func_0x00010c1677c0(0);
    }
    uVar1 = *(undefined8 *)(param_3 + _DAT_11277a84c);
    uVar8 = 0x3ff0000000000000;
  }
  else {
    if (*(long *)(param_3 + _DAT_11277a844) == 0) {
      uVar8 = param_1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c23d0a0(uVar1);
      func_0x00010c1739e0(0,0,uVar8,param_2,*(undefined8 *)(param_3 + lVar6));
      func_0x00010bf20c00(param_3);
      FUN_108ccee5c();
      func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar6));
      func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar6));
      func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11277a864));
      lVar6 = (long)_DAT_11277a860;
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_3 + lVar6));
      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960(*(undefined8 *)(param_3 + lVar6),param_4,&uStack_b0);
      func_0x00010c1677c0(0,*(undefined8 *)(param_3 + _DAT_11277a84c));
      _objc_release(uVar1);
      goto LAB_108cd0610;
    }
    func_0x00010c1739e0(0,0,0x4041000000000000,0x4041000000000000);
    func_0x00010bf20c00(param_3);
    FUN_108ccee5c();
    func_0x00010c17a6a0(*(undefined8 *)(param_3 + lVar6));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_3 + lVar6));
    uVar1 = *(undefined8 *)(param_3 + _DAT_11277a84c);
    uVar8 = 0;
  }
  func_0x00010c1677c0(uVar8,uVar1);
LAB_108cd0610:
  _CGAffineTransformMakeScale(&uStack_110,param_1,param_1);
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  func_0x00010c219960(param_3,param_4,&uStack_b0);
  func_0x00010c1cbe20(param_3);
  func_0x00010c08cdc0(param_3);
  return;
}



/* Entry: 108cd0674; end: 108cd082b; -[SCPreviewToolButton _removeInFlightAnimationsForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0674(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  lVar1 = param_3;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_3;
        func_0x00010bf03c40(param_3,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c086900();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x00010c296f80(lVar1,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = lVar4;
        func_0x00010c086900(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220240(param_3,param_2,lVar6,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar6);
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c12aaa0(param_3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + _DAT_11277a84c);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + _DAT_11277a858);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + _DAT_11277a860);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + _DAT_11277a85c);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 108cd082c; end: 108cd0903; -[SCPreviewToolButton _removeAllViewAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd082c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a84c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a858);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a860);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a85c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd0904; end: 108cd0a67; -[SCPreviewToolButton showTrashIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
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
  
  lVar4 = (long)_DAT_11277a85c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010becf6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010bf345e0(*(undefined8 *)(param_1 + _DAT_11277a84c));
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar4));
    *(undefined1 *)(param_1 + _DAT_11277a868) = 0;
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _CGAffineTransformMakeScale(&uStack_60,0x3fe0000000000000,0x3fe0000000000000);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(lVar3,param_2,&uStack_90);
  func_0x00010c21e900(param_1,param_2,0);
  func_0x00010be8b560(param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108cd0a68;
  puStack_a0 = &UNK_110842e18;
  lStack_98 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_b8,
                      0);
  return;
}



/* Entry: 108cd0a68; end: 108cd0bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0a68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b08d8;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a84c);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30a24(0x402e000000000000,0x3fc3333333333333,*(undefined8 *)PTR__CGSizeZero_110347620
                      ,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,uVar4,puVar2);
  _objc_release(puVar2);
  _CGAffineTransformMakeScale(&uStack_80,0x3f50624dd2f1a9fc,0x3f50624dd2f1a9fc);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a858));
  _CGAffineTransformMakeScale(&uStack_e0,0x3f50624dd2f1a9fc,0x3f50624dd2f1a9fc);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a860));
  _CGAffineTransformMakeScale(&uStack_110,0x3ff0000000000000,0x3ff0000000000000);
  lVar3 = (long)_DAT_11277a85c;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  return;
}



/* Entry: 108cd0bc0; end: 108cd0ca7; -[SCPreviewToolButton _trashIconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0bc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *unaff_x19;
  
  puVar2 = PTR_PTR_1126b0c40;
  lVar4 = *(long *)(param_1 + _DAT_11277a844);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar4 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x2c8;
  }
  else {
    if (lVar4 != 1) {
      puVar2 = unaff_x19;
      if (lVar4 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e6ae78);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_108cd0c98;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x2c7;
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,uVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_108cd0c98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd0ca8; end: 108cd0d3f; -[SCPreviewToolButton hideTrashIcon] */

void FUN_108cd0ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010be8b560();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108cd0d40;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108cd0e74;
  puStack_58 = &UNK_110841f20;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_48,
                      &puStack_70);
  return;
}



/* Entry: 108cd0d40; end: 108cd0e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0d40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  
  puVar1 = PTR_PTR_1126b08d8;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a84c);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30a24(0x402e000000000000,0,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,uVar4,puVar2);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_70 = uVar4;
  uStack_68 = uVar6;
  uStack_60 = uVar8;
  uStack_58 = uVar9;
  uStack_50 = uVar5;
  uStack_48 = uVar7;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a858));
  uStack_70 = uVar4;
  uStack_68 = uVar6;
  uStack_60 = uVar8;
  uStack_58 = uVar9;
  uStack_50 = uVar5;
  uStack_48 = uVar7;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a860));
  _CGAffineTransformMakeScale(&uStack_a0,0x3fe0000000000000,0x3fe0000000000000);
  lVar3 = (long)_DAT_11277a85c;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  return;
}



/* Entry: 108cd0e74; end: 108cd0e87;  */

void FUN_108cd0e74(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setUserInteractionEnabled__112665468,1);
    return;
  }
  return;
}



/* Entry: 108cd0e88; end: 108cd0f0f; -[SCPreviewToolButton growTrashIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0e88(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + _DAT_11277a868) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11277a868) = 1;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108cd0f10;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 108cd0f10; end: 108cd0f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0f10(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff8000000000000,0x3ff8000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a85c),param_2,
                      &uStack_80);
  return;
}



/* Entry: 108cd0f6c; end: 108cd0ff3; -[SCPreviewToolButton shrinkTrashIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0f6c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_11277a868) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11277a868) = 0;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108cd0ff4;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 108cd0ff4; end: 108cd104f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd0ff4(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0000000000000,0x3ff0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a85c),param_2,
                      &uStack_80);
  return;
}



/* Entry: 108cd1050; end: 108cd1103; -[SCPreviewToolButton gestureRecognizerShouldBegin:] */

bool FUN_108cd1050(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 == param_3;
    _objc_release();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108cd1104; end: 108cd1113; -[SCPreviewToolButton selectedMaskImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd1104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a840);
}



/* Entry: 108cd1114; end: 108cd1123; -[SCPreviewToolButton selectionStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd1114(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a83c);
}



/* Entry: 108cd1124; end: 108cd1133; -[SCPreviewToolButton trashView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd1124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a85c);
}



/* Entry: 108cd1134; end: 108cd1173; -[SCPreviewToolButton setTrashView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a85c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd1174; end: 108cd1183; -[SCPreviewToolButton isTrashGrown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cd1174(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277a868);
}



/* Entry: 108cd1184; end: 108cd1193; -[SCPreviewToolButton imageViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd1184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a84c);
}



/* Entry: 108cd1194; end: 108cd11d3; -[SCPreviewToolButton setImageViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a84c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd11d4; end: 108cd11e3; -[SCPreviewToolButton imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd11d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a848);
}



/* Entry: 108cd11e4; end: 108cd1223; -[SCPreviewToolButton setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd11e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a848;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd1224; end: 108cd1263; -[SCPreviewToolButton setBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a850;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd1264; end: 108cd12a3; -[SCPreviewToolButton setLoadingIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a854;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd12a4; end: 108cd12e3; -[SCPreviewToolButton setHighlightedImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd12a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a858;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd12e4; end: 108cd12f3; -[SCPreviewToolButton highlightedImageViewMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd12e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a864);
}



/* Entry: 108cd12f4; end: 108cd1333; -[SCPreviewToolButton setHighlightedImageViewMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd12f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a864;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd1334; end: 108cd1373; -[SCPreviewToolButton setHighlightedFillView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a860;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd1374; end: 108cd1423; -[SCPreviewToolButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1374(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a860,0);
  _objc_storeStrong(param_1 + _DAT_11277a864,0);
  _objc_storeStrong(param_1 + _DAT_11277a858,0);
  _objc_storeStrong(param_1 + _DAT_11277a854,0);
  _objc_storeStrong(param_1 + _DAT_11277a850,0);
  _objc_storeStrong(param_1 + _DAT_11277a848,0);
  _objc_storeStrong(param_1 + _DAT_11277a84c,0);
  _objc_storeStrong(param_1 + _DAT_11277a85c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a840,0);
  return;
}



/* Entry: 108cd1424; end: 108cd14af; -[SCPreviewToolButtonBase pointInside:withEvent:] */

ulong FUN_108cd1424(double param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x00010c074c20();
  if (((((uVar1 & 1) == 0) && (func_0x00010bf01b40(param_2), 0.0 < param_1)) &&
      (uVar1 = param_2, func_0x00010c071800(), (int)uVar1 != 0)) &&
     (uVar1 = param_2, func_0x00010c082800(), (int)uVar1 != 0)) {
    func_0x00010bf20c00(param_2);
    _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return param_2;
  }
  return 0;
}



/* Entry: 108cd14b0; end: 108cd14c3; -[SCPreviewToolButtonBase sizeThatFits:] */

undefined1  [16] FUN_108cd14b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x404a800000000000;
  auVar1._0_8_ = 0x4046000000000000;
  return auVar1;
}



/* Entry: 108cd14c4; end: 108cd16c3; -[SCPreviewToolImageTimePickerButton initWithIconStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108cd14c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe370;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  lVar5 = (long)_DAT_11277a870;
  *(long *)((long)puVar2 + lVar5) = param_3;
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277a874);
  *(undefined ***)((long)puVar2 + (long)_DAT_11277a874) =
       &PTR__OBJC_CLASS___NSConstantFloatNumber_1111864f0;
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b0c40;
  lVar5 = *(long *)((long)puVar2 + lVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar5 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar5 != 1) {
      if (lVar5 == 0) {
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        puVar1 = PTR_PTR_1126b08d8;
      }
      else {
        puVar6 = (undefined *)0x0;
        puVar1 = PTR_PTR_1126b08d8;
      }
      goto joined_r0x000108cd16bc;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puVar1 = PTR_PTR_1126b08d8;
joined_r0x000108cd16bc:
  PTR__OBJC_CLASS___UIColor_1126aea70 = puVar4;
  PTR_PTR_1126b08d8 = puVar1;
  if (param_3 != 0) {
    func_0x00010c23ba80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a24(0x402e000000000000,0x3fc3333333333333,
                        *(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,puVar2,puVar4);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277a878);
  *(undefined **)((long)puVar2 + (long)_DAT_11277a878) = puVar4;
  _objc_release(uVar3);
  func_0x00010befbb60(puVar2);
  func_0x00010bed45c0(puVar2);
  _objc_release(puVar6);
  return (undefined1 *)puVar2;
}



/* Entry: 108cd16c4; end: 108cd19fb; -[SCPreviewToolImageTimePickerButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd16c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fe370;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar6 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,dVar6,*(undefined8 *)(param_5 + _DAT_11277a878));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar6 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,dVar6,*(undefined8 *)(param_5 + _DAT_11277a87c));
  lVar3 = *(long *)(param_5 + _DAT_11277a870);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar6 = param_1 + 0.5;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  lVar1 = (long)_DAT_11277a880;
  func_0x00010c17a6a0(dVar6,param_1 + 2.5,*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  if (lVar3 == 0) {
    _CGRectGetMidX();
    dVar5 = dVar6 + 0.5;
    func_0x00010bf20c00(param_5);
    _CGRectGetMidY();
    dVar6 = dVar6 + 2.5;
    func_0x00010c17a6a0(dVar5,dVar6,*(undefined8 *)(param_5 + _DAT_11277a884));
    puVar2 = (undefined8 *)(param_5 + _DAT_11277a888);
    func_0x00010bfb68e0(*puVar2);
    dVar4 = dVar5;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar7 = dVar5;
    _CGRectGetHeight(dVar5,dVar6,param_3,param_4);
    dVar6 = (double)(long)((dVar4 - dVar7) * 0.5);
    dVar7 = dVar6 + 3.0;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    _CGRectGetWidth(dVar5,dVar7,param_3,param_4);
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c071ae0();
    dVar4 = -1.0;
    if ((int)lVar1 == 0) {
      dVar4 = 0.5;
    }
    dVar4 = (double)(long)((dVar6 - dVar5) * 0.5) + dVar4;
  }
  else {
    _CGRectGetHeight();
    dVar4 = 0.0;
    _CGRectGetHeight(0,0,0x4034000000000000,0x4034000000000000);
    dVar6 = (double)(long)((dVar6 - dVar4) * 0.5);
    dVar7 = dVar6 + 1.5;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    dVar4 = 0.0;
    _CGRectGetWidth(0,dVar7,0x4034000000000000,0x4034000000000000);
    dVar5 = (double)(long)((dVar6 - dVar4) * 0.5);
    param_3 = 0x4034000000000000;
    param_4 = 0x4034000000000000;
    func_0x00010c19f0e0(dVar5,dVar7,0x4034000000000000,0x4034000000000000,
                        *(undefined8 *)(param_5 + lVar1));
    puVar2 = (undefined8 *)(param_5 + _DAT_11277a888);
    func_0x00010bfb68e0(*puVar2);
    dVar6 = dVar5;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar4 = dVar5;
    _CGRectGetHeight(dVar5,dVar7,param_3,param_4);
    dVar6 = (double)(long)((dVar6 - dVar4) * 0.5);
    dVar7 = dVar6 + 1.5;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    _CGRectGetWidth(dVar5,dVar7,param_3,param_4);
    dVar4 = (double)(long)((dVar6 - dVar5) * 0.5);
    func_0x00010c26f000(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  func_0x00010c19f0e0(dVar4,dVar7,param_3,param_4,*puVar2);
  return;
}



/* Entry: 108cd19fc; end: 108cd1aa3; -[SCPreviewToolImageTimePickerButton setShowingHighlighted:] */

void FUN_108cd19fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c074da0();
  if ((int)uVar2 == 0) {
    uVar3 = 0x3fd3333333333333;
    uVar1 = 0x3ff0000000000000;
    uVar2 = 0;
  }
  else {
    uVar3 = 0x3fc3333333333333;
    func_0x00010bdcb3a0(0x3ff570a3d70a3d71,0x3fc3333333333333,0,param_1,param_2,param_1,param_3,0);
    uVar1 = 0x3ff3333333333333;
    uVar2 = uVar3;
  }
  func_0x00010bdcb3a0(uVar1,uVar3,uVar2,param_1,param_2,param_1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cd1aa4; end: 108cd1b1f; -[SCPreviewToolImageTimePickerButton setHighlighted:] */

void FUN_108cd1aa4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126fe370;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38,param_3);
    uVar1 = param_1;
    func_0x00010c074da0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c07d660(param_1);
    }
    func_0x00010c202400(param_1);
  }
  return;
}



/* Entry: 108cd1b20; end: 108cd1bd3; -[SCPreviewToolImageTimePickerButton setSelected:] */

void FUN_108cd1b20(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126fe370;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598,param_3);
    uVar1 = param_1;
    func_0x00010c074da0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c07d660(param_1);
      func_0x00010c202400(param_1);
    }
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  return;
}



/* Entry: 108cd1bd4; end: 108cd1bdb;  */

void FUN_108cd1bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateButtonState_112592b18);
  return;
}



/* Entry: 108cd1bdc; end: 108cd1c83; -[SCPreviewToolImageTimePickerButton setTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1bdc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277a874;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108cd1c84;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cd1c84; end: 108cd1c8b;  */

void FUN_108cd1c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateButtonState_112592b18);
  return;
}



/* Entry: 108cd1c8c; end: 108cd1d5f; -[SCPreviewToolImageTimePickerButton subImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1c8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a880;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ef1d98);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010be36760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108cd1d60; end: 108cd1df7; -[SCPreviewToolImageTimePickerButton lightningImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1d60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a884;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ef1db8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108cd1df8; end: 108cd1eb7; -[SCPreviewToolImageTimePickerButton fillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a87c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ef1d58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = param_1;
    func_0x00010bfad660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ca0(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108cd1eb8; end: 108cd1f43; -[SCPreviewToolImageTimePickerButton fillViewMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277a88c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010be5da60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108cd1f44; end: 108cd1fa3; -[SCPreviewToolImageTimePickerButton subTitleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1f44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277a888;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108cd1fa4; end: 108cd1fe7; -[SCPreviewToolImageTimePickerButton isTimeInfinite] */

undefined8 FUN_108cd1fa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26f000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c071ae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cd1fe8; end: 108cd2197; -[SCPreviewToolImageTimePickerButton _maskImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd1fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = PTR_PTR_1126b0c40;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_5 + _DAT_11277a870);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar10 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar10 != 1) {
      if (lVar10 == 0) {
        puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                            &PTR____CFConstantStringClassReference_110e2a2d8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      goto LAB_108cd20e8;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_108cd20e8:
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c1400c0(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSShadow_1126b6158;
    _objc_alloc_init();
    func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar3);
    _objc_release(puVar2);
    func_0x00010c1fe720(0x3ff0000000000000,puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    puVar4 = puVar11;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(puVar11 + _DAT_11277a870);
    puVar5 = puVar4;
    func_0x00010c071ae0();
    bVar1 = (int)puVar5 == 0;
    uVar12 = 0x4024000000000000;
    if (bVar1) {
      uVar12 = 0x402a000000000000;
    }
    uVar13 = 0x4028000000000000;
    if (bVar1) {
      uVar13 = 0x402e000000000000;
    }
    if (lVar10 != 0) {
      uVar13 = uVar12;
    }
    func_0x00010bf1ecc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar11;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c071ae0();
    uVar12 = 0xbfe0000000000000;
    if ((int)puVar5 == 0) {
      uVar12 = 0;
    }
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar13 = *(undefined8 *)(puVar11 + _DAT_11277a874);
    FUN_108edf988(uVar13,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010be36760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar4);
    puVar8 = puVar11;
    func_0x00010c25e880(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar13);
    func_0x00010c25e880(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
    ___stack_chk_fail();
    if (*(ulong *)(puVar3 + _DAT_11277a870) < 3) {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd2198; end: 108cd2483; -[SCPreviewToolImageTimePickerButton _updateTimeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2198(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar2);
  _objc_release(puVar3);
  func_0x00010c1fe720(0x3ff0000000000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  lVar4 = param_1;
  func_0x00010c26f000();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + _DAT_11277a870);
  lVar5 = lVar4;
  func_0x00010c071ae0();
  bVar1 = (int)lVar5 == 0;
  uVar11 = 0x4024000000000000;
  if (bVar1) {
    uVar11 = 0x402a000000000000;
  }
  uVar12 = 0x4028000000000000;
  if (bVar1) {
    uVar12 = 0x402e000000000000;
  }
  if (lVar10 != 0) {
    uVar12 = uVar11;
  }
  func_0x00010bf1ecc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c26f000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c071ae0();
  uVar11 = 0xbfe0000000000000;
  if ((int)lVar5 == 0) {
    uVar11 = 0;
  }
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11277a874);
  FUN_108edf988(uVar12,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be36760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar6);
  lVar5 = param_1;
  func_0x00010c25e880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar4);
  _objc_release(uVar12);
  func_0x00010c25e880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (*(ulong *)(puVar2 + _DAT_11277a870) < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd2484; end: 108cd24c7; -[SCPreviewToolImageTimePickerButton _iconAndIconForegroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2484(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + _DAT_11277a870) < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10df9f838 + *(ulong *)(param_1 + _DAT_11277a870) * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd24c8; end: 108cd27b7; -[SCPreviewToolImageTimePickerButton _updateButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd24c8(double param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar2 = param_2;
  func_0x00010c07d660();
  dVar5 = param_1;
  puVar3 = param_2;
  if ((int)puVar2 != 0) {
    puVar2 = param_2;
    func_0x00010c26f000(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar2);
    dVar5 = 1.0;
    if (1.0 <= param_1) {
      func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a880));
      func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a888));
      func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a878));
      func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a884));
      func_0x00010bfad640(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_2);
      goto LAB_108cd2788;
    }
  }
  puVar2 = param_2;
  func_0x00010bfe90c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_2);
  _objc_release(puVar2);
  func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a87c));
  puVar2 = param_2;
  func_0x00010c081040();
  if ((int)puVar2 == 0) {
    puVar2 = param_2;
    func_0x00010c26f000(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar2);
    if (1.0 <= dVar5) {
      puVar2 = param_2;
      func_0x00010c25e880(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_2);
      _objc_release(puVar2);
      func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a880));
      func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a884));
      func_0x00010bee2180(param_2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c26f000();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(param_2);
      _objc_release(puVar2);
      _objc_release(puVar4);
      goto LAB_108cd2788;
    }
    puVar2 = param_2;
    func_0x00010c098f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_2);
    _objc_release(puVar2);
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a888));
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a878));
    iVar1 = _DAT_11277a880;
  }
  else {
    puVar2 = param_2;
    func_0x00010c25e540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_2);
    _objc_release(puVar2);
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277a888));
    iVar1 = _DAT_11277a884;
  }
  func_0x00010c12c960(*(undefined8 *)(param_2 + iVar1));
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_2);
LAB_108cd2788:
  _objc_release(puVar3);
  func_0x00010c1cbe20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108cd27b8; end: 108cd2887; -[SCPreviewToolImageTimePickerButton _animateView:toScale:withDuration:delay:highlighted:completion:] */

void FUN_108cd27b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108cd2888;
  puStack_68 = &UNK_110848c48;
  uStack_60 = param_6;
  uStack_58 = param_1;
  _objc_retain(param_6);
  func_0x00010bf03460(param_2,param_3,0x3ff0000000000000,0x3fb999999999999a,puVar1,param_5,2,
                      &puStack_80,param_8);
  _objc_release(uStack_60);
  _objc_release(param_6);
  return;
}



/* Entry: 108cd2888; end: 108cd28d7;  */

void FUN_108cd2888(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 108cd28d8; end: 108cd28e7; -[SCPreviewToolImageTimePickerButton mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd28d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a86c);
}



/* Entry: 108cd28e8; end: 108cd28f7; -[SCPreviewToolImageTimePickerButton setMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd28e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277a86c) = param_3;
  return;
}



/* Entry: 108cd28f8; end: 108cd2907; -[SCPreviewToolImageTimePickerButton time] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd28f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a874);
}



/* Entry: 108cd2908; end: 108cd2917; -[SCPreviewToolImageTimePickerButton iconStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd2908(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a870);
}



/* Entry: 108cd2918; end: 108cd2927; -[SCPreviewToolImageTimePickerButton setIconStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2918(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277a870) = param_3;
  return;
}



/* Entry: 108cd2928; end: 108cd2937; -[SCPreviewToolImageTimePickerButton imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd2928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a878);
}



/* Entry: 108cd2938; end: 108cd2977; -[SCPreviewToolImageTimePickerButton setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a878;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd2978; end: 108cd29b7; -[SCPreviewToolImageTimePickerButton setFillView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a87c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd29b8; end: 108cd29f7; -[SCPreviewToolImageTimePickerButton setFillViewMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd29b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a88c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


