/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dd6534; end: 105dd6543; -[SCTimePickerViewController selectedItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd6534(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736924);
}



/* Entry: 105dd6544; end: 105dd6553; -[SCTimePickerViewController tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dd6544(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736954);
}



/* Entry: 105dd6554; end: 105dd6593; -[SCTimePickerViewController setTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd6554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736954;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd6594; end: 105dd65a7; -[SCTimePickerViewController gestureBeginLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105dd6594(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112736910);
}



/* Entry: 105dd65a8; end: 105dd65bb; -[SCTimePickerViewController setGestureBeginLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd65a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112736910;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 105dd65bc; end: 105dd66c7; -[SCTimePickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd65bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736954,0);
  _objc_storeStrong(param_1 + _DAT_112736924,0);
  _objc_storeStrong(param_1 + _DAT_112736928,0);
  _objc_storeStrong(param_1 + _DAT_112736920,0);
  _objc_storeStrong(param_1 + _DAT_112736950,0);
  _objc_storeStrong(param_1 + _DAT_11273694c,0);
  _objc_storeStrong(param_1 + _DAT_112736948,0);
  _objc_storeStrong(param_1 + _DAT_112736944,0);
  _objc_storeStrong(param_1 + _DAT_112736940,0);
  _objc_storeStrong(param_1 + _DAT_112736914,0);
  _objc_storeStrong(param_1 + _DAT_11273693c,0);
  _objc_storeStrong(param_1 + _DAT_112736938,0);
  _objc_storeStrong(param_1 + _DAT_112736934,0);
  _objc_storeStrong(param_1 + _DAT_112736930,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273692c);
  return;
}



/* Entry: 105dd66c8; end: 105dd66cb; -[SCPreviewFeatureTooltipPresenterImpl configureWithView:] */

void FUN_105dd66c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPreviewView__112656330);
  return;
}



/* Entry: 105dd66cc; end: 105dd681f; -[SCPreviewFeatureTooltipPresenterImpl showTooltipInPreviewViewCenterWithText:offset:trianglePosition:shouldFadeOut:] */

void FUN_105dd66cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c1122a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010be78c20(param_2,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e4ccccd);
  _objc_release(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105dd6820;
  puStack_68 = &UNK_11084fc28;
  uStack_60 = param_2;
  uStack_58 = param_1;
  func_0x00010c0bbfc0(uVar2,param_3,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_5 == 9) {
    func_0x00010c21a1c0(uVar2,param_3,1);
  }
  else {
    func_0x00010c21a1e0(0,uVar2,param_3,param_5);
  }
  if (param_6 == 0) {
    func_0x00010bebb800(param_2,param_3,uVar2);
  }
  else {
    func_0x00010bebb820(0x4008000000000000,param_2,param_3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105dd6820; end: 105dd69a3;  */

void FUN_105dd6820(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1122a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbec0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1122a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(-*(double *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dd69a4; end: 105dd6b6b; -[SCPreviewFeatureTooltipPresenterImpl showTooltipInPreviewViewWithText:belowObjectView:fadeOutDelay:] */

void FUN_105dd69a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar4 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be78c20(param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
  func_0x00010c0699c0(uVar2);
  uVar5 = uVar4;
  func_0x00010bf20c00(param_6);
  _CGRectGetWidth();
  uVar1 = param_3;
  uVar6 = uVar5;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_6);
  uVar3 = param_6;
  func_0x00010c262ca0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(uVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105dd6b6c;
  puStack_b0 = &UNK_1108e9960;
  uStack_90 = uVar6;
  uStack_88 = param_2;
  uStack_80 = uVar4;
  _objc_retain(uVar2);
  uStack_a8 = uVar2;
  uStack_a0 = param_6;
  uStack_98 = param_3;
  uStack_78 = uVar5;
  _objc_retain(param_6);
  func_0x00010c0bbfc0(uVar2,param_4,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bebb820(param_1,param_3,param_4,uVar2);
  _objc_retain(uVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105dd6b6c; end: 105dd6dd3;  */

void FUN_105dd6b6c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_2);
  dVar7 = *(double *)(param_1 + 0x38);
  dVar8 = *(double *)(param_1 + 0x48) * 0.5;
  lVar3 = param_2;
  if (5.0 <= dVar7 - dVar8) {
    dVar8 = dVar7 + dVar8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c1122a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(uVar1);
    _objc_release(uVar2);
    if (dVar8 <= dVar7 + -5.0) {
      func_0x00010c21a1e0(0,*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf34840();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf985e0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))();
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_105dd6d08;
    }
    func_0x00010c21a1e0(*(double *)(param_1 + 0x50) * -0.5,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bc000(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c21a1e0(*(double *)(param_1 + 0x50) * 0.5,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bbfa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
LAB_105dd6d08:
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dd6dd4; end: 105dd702b; -[SCPreviewFeatureTooltipPresenterImpl showTooltipInPreviewViewWithText:aboveObjectView:offset:shouldFadeOut:fadeOutDelay:] */

void FUN_105dd6dd4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  dVar4 = param_1;
  uVar9 = param_2;
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be78c20(param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
  func_0x00010c0699c0(uVar2);
  dVar5 = dVar4;
  func_0x00010bf20c00(param_6);
  _CGRectGetWidth();
  uVar1 = param_3;
  dVar6 = dVar5;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_6);
  uVar3 = param_6;
  func_0x00010c262ca0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(uVar1,param_4,uVar3);
  dVar7 = dVar6;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf20c00(uVar2);
  _CGRectGetMinX();
  dVar10 = dVar4 + dVar7;
  uVar1 = param_3;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinX();
  uVar3 = param_3;
  dVar8 = dVar7;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (dVar7 + dVar8 < dVar10) {
    func_0x00010c2135c0(uVar2,param_4,0);
  }
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105dd702c;
  puStack_c8 = &UNK_1108e9990;
  dStack_a8 = dVar6;
  uStack_a0 = uVar9;
  dStack_98 = dVar4;
  _objc_retain(uVar2);
  uStack_c0 = uVar2;
  uStack_b8 = param_6;
  uStack_b0 = param_3;
  dStack_90 = dVar5;
  dStack_88 = param_1;
  _objc_retain(param_6);
  func_0x00010c0bbfc0(uVar2,param_4,&puStack_e0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_7 == 0) {
    func_0x00010bebb800(param_3,param_4,uVar2);
  }
  else {
    func_0x00010bebb820(param_2);
  }
  _objc_retain(uVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105dd702c; end: 105dd73ff;  */

void FUN_105dd702c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_2);
  dVar9 = *(double *)(param_1 + 0x38);
  dVar10 = *(double *)(param_1 + 0x48) * 0.5;
  lVar7 = param_2;
  if (5.0 <= dVar9 - dVar10) {
    dVar10 = dVar9 + dVar10;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c1122a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(uVar1);
    _objc_release(uVar4);
    if (dVar10 <= dVar9 + -5.0) {
      func_0x00010c21a1e0(0,*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf34840();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf985e0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))();
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_105dd7330;
    }
    func_0x00010c21a1e0(*(double *)(param_1 + 0x50) * -0.5,*(undefined8 *)(param_1 + 0x20));
    lVar8 = param_2;
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bc000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar5);
    _objc_release(lVar8);
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfce1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c1122a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))(lVar8,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(0x4014000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c21a1e0(*(double *)(param_1 + 0x50) * 0.5,*(undefined8 *)(param_1 + 0x20));
    lVar8 = param_2;
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0bbfa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar5);
    _objc_release(lVar8);
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c098960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c1122a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0bc000();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    (**(code **)(lVar8 + 0x10))(lVar8,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(0xc014000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
LAB_105dd7330:
  _objc_release(lVar8);
  _objc_release(lVar7);
  lVar7 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  (**(code **)(lVar8 + 0x10))(lVar8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dd7400; end: 105dd74d7; -[SCPreviewFeatureTooltipPresenterImpl fadeoutTooltip:] */

void FUN_105dd7400(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
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
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105dd74d8;
    puStack_50 = &UNK_110842e18;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x105dd74e4;
    puStack_78 = &UNK_110841f20;
    lStack_48 = param_3;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_68,&puStack_90);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105dd74d8; end: 105dd74eb;  */

void FUN_105dd74d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105dd74ec; end: 105dd75bb; -[SCPreviewFeatureTooltipPresenterImpl _prepareNewTooltipWithText:inView:] */

void FUN_105dd74ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6950;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21e900();
  func_0x00010c1677c0(0,puVar1);
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2133e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dd75bc; end: 105dd764f; -[SCPreviewFeatureTooltipPresenterImpl _showTooltip:] */

void FUN_105dd75bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105dd7650;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc999999999999a,puVar1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105dd7650; end: 105dd765b;  */

void FUN_105dd7650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105dd765c; end: 105dd773b; -[SCPreviewFeatureTooltipPresenterImpl _showTooltip:withFadeOutDelay:] */

void FUN_105dd765c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105dd773c;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105dd7748;
  puStack_88 = &UNK_1108e27e8;
  uStack_80 = param_2;
  uStack_78 = param_4;
  uStack_70 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bf03420(0x3fc999999999999a,puVar2,param_3,&puStack_68,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105dd773c; end: 105dd7747;  */

void FUN_105dd773c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105dd7748; end: 105dd77d3;  */

void FUN_105dd7748(long param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  dVar1 = *(double *)(param_1 + 0x30);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105dd77d4;
  puStack_38 = &UNK_110841f80;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000100c749e0((float)dVar1,"APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105dd77d4; end: 105dd77df;  */

void FUN_105dd77d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fadeoutTooltip__1125c5820,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105dd77e0; end: 105dd77e7; -[SCPreviewFeatureTooltipPresenterImpl responderChainPriority] */

undefined8 FUN_105dd77e0(void)

{
  return 0;
}



/* Entry: 105dd77e8; end: 105dd77ff; -[SCPreviewFeatureTooltipPresenterImpl previewView] */

void FUN_105dd77e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd7800; end: 105dd780b; -[SCPreviewFeatureTooltipPresenterImpl setPreviewView:] */

void FUN_105dd7800(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105dd780c; end: 105dd7813; -[SCPreviewFeatureTooltipPresenterImpl .cxx_destruct] */

void FUN_105dd780c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dd7814; end: 105dd789b; -[SCPreviewFeatureTooltipPresenterServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd7814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108e99e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4b28;
  _objc_alloc(PTR_PTR_1126c4b28);
  func_0x00010c054100();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736960);
  }
  func_0x00010bf9d660(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dd789c; end: 105dd78b7;  */

void FUN_105dd789c(void)

{
  _objc_alloc_init(PTR_PTR_1126c4b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd78b8; end: 105dd78f3; -[SCPreviewFeatureTooltipPresenterServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd78b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273695c);
  return;
}



/* Entry: 105dd78f4; end: 105dd799f; -[SCPreviewFeatureTooltipPresenterServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd78f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736964;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273696c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c273f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dd79a0; end: 105dd79e3; -[SCPreviewFeatureTooltipPresenterServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd79a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273696c);
  _objc_destroyWeak(param_1 + _DAT_112736968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736964);
  return;
}



/* Entry: 105dd79e4; end: 105dd79ef; -[SCFeatureSettingsService hasSeenMultiSnapUserNotice] */

void FUN_105dd79e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e2a538);
  return;
}



/* Entry: 105dd79f0; end: 105dd79fb; -[SCFeatureSettingsService seenMultiSnapUserNoticeServerParam] */

undefined ** FUN_105dd79f0(void)

{
  return &PTR____CFConstantStringClassReference_110e2a538;
}



/* Entry: 105dd79fc; end: 105dd7a0b; -[SCFeatureSettingsService setSeenMultiSnapUserNotice:] */

void FUN_105dd79fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e2a538,param_3);
  return;
}



/* Entry: 105dd7a0c; end: 105dd7a13; -[SCFeatureSettingsService preview_has_seen_multisnap_user_notice_client_value:] */

undefined * FUN_105dd7a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105dd7a14; end: 105dd7a1b; -[SCFeatureSettingsService preview_has_seen_multisnap_user_notice_server_value:] */

void FUN_105dd7a14(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105dd7a1c; end: 105dd7a2b; -[SCFeatureSettingsService seenMultiSnapUserNotice] */

void FUN_105dd7a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e2a538,0);
  return;
}



/* Entry: 105dd7a2c; end: 105dd7b37; -[SCPreviewBannerView initWithTitle:subtitle:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105dd7a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126ed1a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736970);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112736970) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736974);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112736974) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112736978);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112736978) = uVar2;
    _objc_release(uVar3);
    func_0x00010beb1160(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dd7b38; end: 105dd824b; -[SCPreviewBannerView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd7b38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18e180();
  func_0x00010bef9040(param_1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar36 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar39 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar36,uVar37,uVar38,uVar39);
  func_0x00010c219b60();
  func_0x00010c212f20(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x00010c21ad00(puVar2);
  func_0x00010c1cfce0(puVar2);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar36,uVar37,uVar38,uVar39);
  func_0x00010c219b60();
  func_0x00010c212f20(puVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar3);
  func_0x00010c21ad00(puVar4);
  func_0x00010c1cfce0(puVar4);
  puVar5 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  func_0x00010c1a9fc0(puVar5);
  func_0x00010c219b60(puVar5);
  func_0x00010befbd60(puVar5);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar2;
  func_0x00010c2793a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar31;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar39);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar38);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar37);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar36);
  _objc_release(puVar6);
  uVar36 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar36);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar35) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be03ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105dd824c; end: 105dd8253; -[SCPreviewBannerView handleSwipeGesture] */

void FUN_105dd824c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissViewWithAction__11255e850,1);
  return;
}



/* Entry: 105dd8254; end: 105dd825b; -[SCPreviewBannerView handleCloseButtonTap] */

void FUN_105dd8254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissViewWithAction__11255e850,0);
  return;
}



/* Entry: 105dd825c; end: 105dd8293; -[SCPreviewBannerView _dismissViewWithAction:] */

void FUN_105dd825c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd8294; end: 105dd82b3; -[SCPreviewBannerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd8294(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273697c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd82b4; end: 105dd82c7; -[SCPreviewBannerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd82b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273697c,param_3);
  return;
}



/* Entry: 105dd82c8; end: 105dd8323; -[SCPreviewBannerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd82c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273697c);
  _objc_storeStrong(param_1 + _DAT_112736978,0);
  _objc_storeStrong(param_1 + _DAT_112736974,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736970,0);
  return;
}



/* Entry: 105dd8324; end: 105dd841f; -[SCPreviewBannerWindow initWithTouchableView:frame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105dd8324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ed1b0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bd86158(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112736980),param_7);
    func_0x00010c225b00(*(double *)PTR__UIWindowLevelNormal_110345e88 + 1.0,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105dd8420; end: 105dd85bb; -[SCPreviewBannerWindow pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105dd8420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_90;
  undefined *puStack_88;
  
  iVar1 = (int)&lStack_90;
  lVar7 = (long)_DAT_112736980;
  uVar8 = param_1;
  uVar9 = param_2;
  _objc_retain(param_7);
  lVar2 = param_5 + lVar7;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    _objc_retain(lVar4);
    lVar6 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar7 = param_5 + lVar7;
  _objc_loadWeakRetained();
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    param_3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    param_4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    func_0x00010bfb68e0(lVar6);
  }
  _objc_release(lVar7);
  puStack_88 = PTR_PTR_1126ed1b0;
  lStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,&lStack_90,PTR_s_pointInside_withEvent__11261e4e8,param_7);
  _objc_release(param_7);
  if (iVar1 == 0) {
    param_7 = 0;
  }
  else {
    _CGRectContainsPoint(uVar8,uVar9,param_3,param_4,param_1,param_2);
  }
  _objc_release(lVar6);
  return param_7;
}



/* Entry: 105dd85bc; end: 105dd85cb; -[SCPreviewBannerWindow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd85bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736980);
  return;
}



/* Entry: 105dd85cc; end: 105dd8763; -[SCPreviewFeatureUserNoticeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd85cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1 + _DAT_112736984;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4b38;
  _objc_alloc(PTR_PTR_1126c4b38);
  func_0x00010c05c960();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112736990);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105dd8764; end: 105dd8857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd8764(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c4b30;
  _objc_alloc(PTR_PTR_1126c4b30);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar2 + _DAT_112736988;
    _objc_loadWeakRetained(lVar5);
  }
  lVar3 = lVar5;
  func_0x00010bfa2b80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar4 + _DAT_11273698c;
    _objc_loadWeakRetained(lVar6);
  }
  func_0x00010c011ce0(puVar1,param_2,lVar3,lVar6,*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dd8858; end: 105dd88ab; -[SCPreviewFeatureUserNoticeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd8858(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736990,0);
  _objc_destroyWeak(param_1 + _DAT_11273698c);
  _objc_destroyWeak(param_1 + _DAT_112736988);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736984);
  return;
}



/* Entry: 105dd88ac; end: 105dd896f; -[SCPreviewFeatureUserNoticeImpl initWithFeatureSettingsService:blizzardUserServices:previewConfiguration:] */

undefined1 *
FUN_105dd88ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed1b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dd8970; end: 105dd8977; -[SCPreviewFeatureUserNoticeImpl responderChainPriority] */

undefined8 FUN_105dd8970(void)

{
  return 0x7fffffff;
}



/* Entry: 105dd8978; end: 105dd89b7; -[SCPreviewFeatureUserNoticeImpl _shouldShowNotice] */

uint FUN_105dd8978(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157980();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105dd89b8; end: 105dd89f7; -[SCPreviewFeatureUserNoticeImpl configureWithView:] */

void FUN_105dd89b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dd89f8; end: 105dd8a93; -[SCPreviewFeatureUserNoticeImpl activate] */

void FUN_105dd89f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbd7e0();
  if (lVar3 != 1) {
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  lVar3 = param_1;
  func_0x00010beb6320();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf860f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayNotice_1125bf1e0);
    return;
  }
  return;
}



/* Entry: 105dd8a94; end: 105dd8fc7; -[SCPreviewFeatureUserNoticeImpl displayNotice] */

/* WARNING: Possible PIC construction at 0x000105dd8e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105dd8e40) */
/* WARNING: Removing unreachable block (ram,0x000105dd8fa0) */
/* WARNING: Removing unreachable block (ram,0x000105dd8fc0) */
/* WARNING: Removing unreachable block (ram,0x000105dd8f7c) */

void FUN_105dd8a94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  _objc_release(uVar13);
  func_0x00010be36b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108edf080();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108edf098();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4b40;
  _objc_alloc();
  func_0x00010c053680();
  func_0x00010c18b5e0();
  func_0x00010c219b60(puVar2);
  func_0x00010c160fc0(puVar2);
  puVar3 = PTR_PTR_1126c4b48;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c054a80();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar13);
  _objc_release(puVar4);
  func_0x00010c225b00(*(double *)PTR__UIWindowLevelNormal_110345e88 + 1.0,
                      *(undefined8 *)(param_1 + 0x30));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c1ee700(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  puVar3 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c274200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf493c0(0xc069000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = puVar6;
  _objc_release(uVar13);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c2793a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf494e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105dd8fc8; end: 105dd8fcf;  */

void FUN_105dd8fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105dd8fd0; end: 105dd8ffb;  */

void FUN_105dd8fd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd8ffc; end: 105dd8fff; -[SCPreviewFeatureUserNoticeImpl handleBannerViewDismissalWithAction:] */

void FUN_105dd8ffc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissNoticeWithAction__11255e538);
  return;
}



/* Entry: 105dd9000; end: 105dd9013; -[SCPreviewFeatureUserNoticeImpl dismissNotice] */

void FUN_105dd9000(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be02e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__dismissNoticeWithAction__11255e538,0xffffffffffffffff);
    return;
  }
  return;
}



/* Entry: 105dd9014; end: 105dd913f; -[SCPreviewFeatureUserNoticeImpl _dismissNoticeWithAction:] */

void FUN_105dd9014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c181140(0xc069000000000000,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105dd9140;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_80,auStack_48);
  uStack_78 = param_3;
  func_0x00010bf03440(0x3fd3333333333333,0,puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105dd9140; end: 105dd91a7;  */

void FUN_105dd9140(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1417c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd91a8; end: 105dd91db;  */

void FUN_105dd91a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd91dc; end: 105dd9253; -[SCPreviewFeatureUserNoticeImpl _handleNoticeDimissalAnimationCompletionWithAction:] */

void FUN_105dd91dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa0a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010be52680(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dd9254; end: 105dd92db; -[SCPreviewFeatureUserNoticeImpl _logDisplayEvent] */

void FUN_105dd9254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4b50;
  _objc_opt_new(PTR_PTR_1126c4b50);
  func_0x00010c16f100();
  func_0x00010c16f180(puVar1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dd92dc; end: 105dd9373; -[SCPreviewFeatureUserNoticeImpl _logDismissEventWithAction:] */

void FUN_105dd92dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4b58;
  _objc_opt_new(PTR_PTR_1126c4b58);
  func_0x00010c16f100();
  func_0x00010c16f180(puVar1,param_2,0);
  func_0x00010c18f380(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dd9374; end: 105dd93ef; -[SCPreviewFeatureUserNoticeImpl _iconXSignFillImage] */

void FUN_105dd9374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4010000000000000,0x4010000000000000,
                      0x4010000000000000,0x4010000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dd93f0; end: 105dd9407; -[SCPreviewFeatureUserNoticeImpl parentViewControllerDelegate] */

void FUN_105dd93f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dd9408; end: 105dd9413; -[SCPreviewFeatureUserNoticeImpl setParentViewControllerDelegate:] */

void FUN_105dd9408(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105dd9414; end: 105dd947f; -[SCPreviewFeatureUserNoticeImpl .cxx_destruct] */

void FUN_105dd9414(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dd9480; end: 105dd952b; -[SCPreviewFeatureUserNoticeServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd9480(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127369b4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127369bc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c292f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dd952c; end: 105dd956f; -[SCPreviewFeatureUserNoticeServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dd952c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127369bc);
  _objc_destroyWeak(param_1 + _DAT_1127369b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127369b4);
  return;
}



/* Entry: 105dd9570; end: 105dd960b; -[SCFeatureVideoPlaybackImpl initWithVideoPlaybackProvider:coreCameraLogger:] */

undefined1 *
FUN_105dd9570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed1c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dd960c; end: 105dd9653; -[SCFeatureVideoPlaybackImpl _videoPlayback] */

void FUN_105dd960c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105dd9654; end: 105dd968b; -[SCFeatureVideoPlaybackImpl setIsTranscoding:] */

void FUN_105dd9654(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b51c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd968c; end: 105dd96c7; -[SCFeatureVideoPlaybackImpl isTranscoding] */

undefined8 FUN_105dd968c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c081740();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd96c8; end: 105dd96ff; -[SCFeatureVideoPlaybackImpl setIsPlaybackVisible:] */

void FUN_105dd96c8(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9700; end: 105dd973b; -[SCFeatureVideoPlaybackImpl isPlaybackVisible] */

undefined8 FUN_105dd9700(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07a3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd973c; end: 105dd9777; -[SCFeatureVideoPlaybackImpl didRenderFirstFrame] */

undefined8 FUN_105dd973c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf79ba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd9778; end: 105dd97bb; -[SCFeatureVideoPlaybackImpl playbackEventsObservable] */

void FUN_105dd9778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ff340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd97bc; end: 105dd97c3; -[SCFeatureVideoPlaybackImpl responderChainPriority] */

undefined8 FUN_105dd97bc(void)

{
  return 0x7fffffff;
}



/* Entry: 105dd97c4; end: 105dd97fb; -[SCFeatureVideoPlaybackImpl setUseBatchCapturePlayback:] */

void FUN_105dd97c4(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd97fc; end: 105dd9837; -[SCFeatureVideoPlaybackImpl useBatchCapturePlayback] */

undefined8 FUN_105dd97fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28fe60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd9838; end: 105dd987b; -[SCFeatureVideoPlaybackImpl multiSnapV2PlayerHandler] */

void FUN_105dd9838(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d25e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd987c; end: 105dd98cb; -[SCFeatureVideoPlaybackImpl currentViewportTransform] */

void FUN_105dd987c(undefined8 *param_1,long param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    func_0x00010bf60ce0(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dd98cc; end: 105dd991b; -[SCFeatureVideoPlaybackImpl setCurrentViewportTransform:] */

void FUN_105dd98cc(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1880a0();
  _objc_release(param_1);
  return;
}



/* Entry: 105dd991c; end: 105dd9967; -[SCFeatureVideoPlaybackImpl lastFrameTime] */

void FUN_105dd991c(undefined8 *param_1,long param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010c088c00(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dd9968; end: 105dd99a3; -[SCFeatureVideoPlaybackImpl currentPlayingFrameSourceIndex] */

undefined8 FUN_105dd9968(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5fa80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd99a4; end: 105dd99df; -[SCFeatureVideoPlaybackImpl currentPlayingVideoIndex] */

undefined8 FUN_105dd99a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5fac0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd99e0; end: 105dd9a1b; -[SCFeatureVideoPlaybackImpl currentEditingVideoSegmentIndex] */

undefined8 FUN_105dd99e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5e820();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd9a1c; end: 105dd9a4b; -[SCFeatureVideoPlaybackImpl pauseVideo] */

void FUN_105dd9a1c(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9a4c; end: 105dd9a7b; -[SCFeatureVideoPlaybackImpl pauseVideoAndRendering] */

void FUN_105dd9a4c(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9a7c; end: 105dd9aab; -[SCFeatureVideoPlaybackImpl resumeVideo] */

void FUN_105dd9a7c(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9aac; end: 105dd9adb; -[SCFeatureVideoPlaybackImpl stopVideo] */

void FUN_105dd9aac(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9adc; end: 105dd9b1b; -[SCFeatureVideoPlaybackImpl stopPlayingAndSeekSmoothlyToSeconds:] */

void FUN_105dd9adc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dd9b1c; end: 105dd9b6b; -[SCFeatureVideoPlaybackImpl rewindToBeginningAndResume:] */

void FUN_105dd9b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140680();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9b6c; end: 105dd9b9b; -[SCFeatureVideoPlaybackImpl cancelRewinding] */

void FUN_105dd9b6c(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ef80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9b9c; end: 105dd9beb; -[SCFeatureVideoPlaybackImpl fastForwardToEndAndResume:] */

void FUN_105dd9b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0ce0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9bec; end: 105dd9c1b; -[SCFeatureVideoPlaybackImpl resetOverlayAndPlaybackSessionSpeed] */

void FUN_105dd9bec(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


