/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ef725c; end: 104ef72cb; -[SCComposerMapView initWithFrame:nativeMapSDK:configProvider:] */

undefined1 * FUN_104ef725c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4ea0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_maxMapZoomLevel_na_1125e2c00);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
    func_0x00010c1c8460(0,puVar1);
    func_0x00010c1c3d40(0x4033000000000000,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ef72cc; end: 104ef7437; -[SCComposerMapView _sendCentroidToComposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104ef72cc(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined *param_5
             )

{
  undefined *puVar1;
  undefined *unaff_x19;
  undefined8 uVar2;
  undefined *unaff_x20;
  undefined *unaff_x21;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)(long)_DAT_112716940;
  if (*(long *)(param_3 + (long)puVar4) != 0) {
    func_0x00010bf34640();
    unaff_x19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = ABS(param_1 - *(double *)(param_3 + _DAT_112716944));
    if ((2.220446049250313e-16 < param_1) ||
       (param_1 = ABS(param_2 - *(double *)((long)(param_3 + _DAT_112716944) + 8)),
       unaff_x21 = param_3, 2.220446049250313e-16 < param_1)) {
      unaff_x21 = *(undefined **)(param_3 + (long)puVar4);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = unaff_x19;
      puStack_68 = unaff_x20;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_70,2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar1;
      func_0x00010c0f95a0(unaff_x21);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar4);
    }
    _objc_release(unaff_x20);
    param_3 = unaff_x19;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_78 = FUN_104ef7438;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = (long)_DAT_112716948;
    puStack_a0 = puVar4;
    puStack_98 = unaff_x21;
    puStack_90 = unaff_x20;
    puStack_88 = unaff_x19;
    puStack_80 = &stack0xfffffffffffffff0;
    if (*(long *)(param_3 + lVar3) != 0) {
      func_0x00010c2bf200();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_b0,1);
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar4;
      func_0x00010c0f95a0(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release();
      param_3 = puVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return param_3;
    }
    ___stack_chk_fail();
    _objc_retain(param_5);
    puVar4 = param_5;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x2) {
      puVar1 = param_5;
      func_0x00010c0dfd40(param_5,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar5 = param_1;
      _objc_release(puVar1);
      puVar1 = param_5;
      func_0x00010c0dfd40(param_5,param_4,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar1);
      _CLLocationCoordinate2DMake();
      lVar3 = (long)_DAT_112716944;
      *(double *)(param_3 + lVar3) = param_1;
      *(double *)((long)(param_3 + lVar3) + 8) = dVar5;
      func_0x00010be614a0(param_3);
    }
    _objc_release(param_5);
    return (undefined *)(ulong)(puVar4 == (undefined *)0x2);
  }
  return param_3;
}



/* Entry: 104ef7438; end: 104ef750b; -[SCComposerMapView _sendZoomLevelToComposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104ef7438(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_112716948;
  if (*(long *)(param_2 + lVar4) != 0) {
    func_0x00010c2bf200();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar2;
    func_0x00010c0f95a0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release();
    param_2 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x2) {
    puVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = param_1;
    _objc_release(puVar2);
    puVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar2);
    _CLLocationCoordinate2DMake();
    lVar4 = (long)_DAT_112716944;
    *(undefined8 *)(param_2 + lVar4) = param_1;
    *(undefined8 *)((long)(param_2 + lVar4) + 8) = uVar3;
    func_0x00010be614a0(param_2);
  }
  _objc_release(param_4);
  return (undefined *)(ulong)(puVar1 == (undefined *)0x2);
}



/* Entry: 104ef750c; end: 104ef75df; -[SCComposerMapView _composerSetCentroid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104ef750c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 2) {
    lVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = param_1;
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar2);
    _CLLocationCoordinate2DMake();
    lVar2 = (long)_DAT_112716944;
    *(undefined8 *)(param_2 + lVar2) = param_1;
    ((undefined8 *)(param_2 + lVar2))[1] = uVar3;
    func_0x00010be614a0(param_2);
  }
  _objc_release(param_4);
  return lVar1 == 2;
}



/* Entry: 104ef75e0; end: 104ef761b; -[SCComposerMapView _composerSetZoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104ef75e0(double param_1,long param_2)

{
  if (param_1 != 0.0) {
    *(double *)(param_2 + _DAT_112716934) = param_1;
    func_0x00010beaa3a0();
  }
  return param_1 != 0.0;
}



/* Entry: 104ef761c; end: 104ef7657; -[SCComposerMapView _composerSetPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104ef761c(double param_1,long param_2)

{
  if (0.0 <= param_1) {
    *(double *)(param_2 + _DAT_112716938) = param_1;
    func_0x00010bea64e0();
  }
  return 0.0 <= param_1;
}



/* Entry: 104ef7658; end: 104ef7693; -[SCComposerMapView _composerSetRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104ef7658(double param_1,long param_2)

{
  if (0.0 <= param_1) {
    *(double *)(param_2 + _DAT_11271693c) = param_1;
    func_0x00010bea6de0();
  }
  return 0.0 <= param_1;
}



/* Entry: 104ef7694; end: 104ef77ab; -[SCComposerMapView _moveToCoordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7694(long param_1,undefined8 param_2)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  
  pdVar1 = (double *)(param_1 + _DAT_112716944);
  dVar9 = ABS(*pdVar1);
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (1.1920928955078125e-07 < ABS(pdVar1[1])) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(dVar9)) {
      bVar2 = dVar9 < 1.1920928955078125e-07;
      bVar3 = dVar9 == 1.1920928955078125e-07;
      bVar4 = false;
    }
  }
  if ((!bVar3 && bVar2 == bVar4) &&
     (lVar5 = param_1, _CLLocationCoordinate2DIsValid(), (int)lVar5 != 0)) {
    lVar5 = param_1;
    func_0x00010c0b9c00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfc3540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010c071800();
    if ((int)lVar5 == 0) {
      func_0x00010c17a6c0(*pdVar1,pdVar1[1],param_1);
    }
    else {
      puVar7 = PTR_PTR_1126b1dc8;
      func_0x00010c271ea0(*pdVar1,pdVar1[1],PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b1dc8;
      func_0x00010bf2a160(PTR_PTR_1126b1dc8,param_2,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1840(lVar6,param_2,puVar7,puVar8,0);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 104ef77ac; end: 104ef788b; -[SCComposerMapView _setZoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef77ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c071800();
  puVar4 = PTR_PTR_1126b1dc8;
  if ((int)lVar1 == 0) {
    func_0x00010c227be0(*(undefined8 *)(param_1 + _DAT_112716934),param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112716934),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a160(puVar4,param_2,puVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0d17a0(lVar2,param_2,puVar4,0);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ef788c; end: 104ef796b; -[SCComposerMapView _setPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef788c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c071800();
  puVar4 = PTR_PTR_1126b1dc8;
  if ((int)lVar1 == 0) {
    func_0x00010c1dbe20(*(undefined8 *)(param_1 + _DAT_112716938),param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112716938),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a160(puVar4,param_2,0,0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0d17a0(lVar2,param_2,puVar4,0);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ef796c; end: 104ef7a53; -[SCComposerMapView _setRotation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef796c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271693c);
  lVar1 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c071800();
  puVar4 = PTR_PTR_1126b1dc8;
  if ((int)lVar1 == 0) {
    func_0x00010c18e1a0(uVar5,param_1,param_2,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a160(puVar4,param_2,0,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0d17a0(lVar2,param_2,puVar4,0);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ef7a54; end: 104ef7b6b; +[SCComposerMapView bindAttributes:] */

void FUN_104ef7a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a060(param_3,param_2,&PTR____CFConstantStringClassReference_110dba538,0,
                      &PTR___NSConcreteGlobalBlock_110859ee8,&PTR___NSConcreteGlobalBlock_110859f28)
  ;
  func_0x00010bf1a0e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba558,0,
                      &PTR___NSConcreteGlobalBlock_110859f68,&PTR___NSConcreteGlobalBlock_110859f88)
  ;
  func_0x00010bf1a0e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba578,0,
                      &PTR___NSConcreteGlobalBlock_110859fa8,&PTR___NSConcreteGlobalBlock_110859fc8)
  ;
  func_0x00010bf1a0e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba598,0,
                      &PTR___NSConcreteGlobalBlock_110859fe8,&PTR___NSConcreteGlobalBlock_11085a008)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba5b8,
                      &PTR___NSConcreteGlobalBlock_11085a048,&PTR___NSConcreteGlobalBlock_11085a088)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba5d8,
                      &PTR___NSConcreteGlobalBlock_11085a0a8,&PTR___NSConcreteGlobalBlock_11085a0c8)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba5f8,
                      &PTR___NSConcreteGlobalBlock_11085a0e8,&PTR___NSConcreteGlobalBlock_11085a108)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef7b6c; end: 104ef7bdf;  */

undefined8 FUN_104ef7b6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 2) {
    uVar2 = param_2;
    func_0x00010bde3ee0(param_2);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104ef7be0; end: 104ef7c37;  */

void FUN_104ef7be0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__composerSetCentroid__112556958,0);
  return;
}



/* Entry: 104ef7c38; end: 104ef7c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7c38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112716940);
  *(undefined8 *)(param_2 + _DAT_112716940) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ef7c70; end: 104ef7c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7c70(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112716940);
  *(undefined8 *)(param_2 + _DAT_112716940) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ef7c84; end: 104ef7cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7c84(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112716948);
  *(undefined8 *)(param_2 + _DAT_112716948) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ef7cbc; end: 104ef7cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7cbc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112716948);
  *(undefined8 *)(param_2 + _DAT_112716948) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ef7cd8; end: 104ef7cfb; -[SCComposerMapView mapView:regionDidChangeAnimated:] */

void FUN_104ef7cd8(undefined8 param_1)

{
  func_0x00010be9eae0();
                    /* WARNING: Could not recover jumptable at 0x00010bea1290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendZoomLevelToComposer_112585e48);
  return;
}



/* Entry: 104ef7cfc; end: 104ef7d3b; -[SCComposerMapView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef7cfc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716948,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716940,0);
  return;
}



/* Entry: 104ef7d3c; end: 104ef7dcf; -[SCAdaptiveUIContainer initWithRootViewController:] */

undefined1 * FUN_104ef7d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4ea8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ef7dd0; end: 104ef7e5b; -[SCAdaptiveUIContainer attachUI:] */

void FUN_104ef7dd0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b10a8;
  _objc_opt_class(PTR_PTR_1126b10a8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c10af80();
    _objc_release(lVar3);
  }
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef7e5c; end: 104ef7f1b; -[SCAdaptiveUIContainer detachUI:] */

void FUN_104ef7e5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_1 + 0x18;
    _objc_loadWeakRetained();
    puVar3 = PTR_PTR_1126b10a8;
    _objc_opt_class(PTR_PTR_1126b10a8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf82fe0();
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      _objc_release(lVar1);
    }
    _objc_storeWeak(param_1 + 0x18,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ef7f1c; end: 104ef7f4f; -[SCAdaptiveUIContainer .cxx_destruct] */

void FUN_104ef7f1c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ef7f50; end: 104ef7ff3; -[SCPhotoPickerRouter initWithPhotoPickerScopeExposer:photoPickerScopeServices:] */

undefined1 *
FUN_104ef7f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4eb0;
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



/* Entry: 104ef7ff4; end: 104ef806b; -[SCPhotoPickerRouter showPhotoPickerOptions] */

void FUN_104ef7ff4(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104ef806c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 104ef806c; end: 104ef8073;  */

void FUN_104ef806c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doShowPhotoPicker_11255efb8);
  return;
}



/* Entry: 104ef8074; end: 104ef80cb; -[SCPhotoPickerRouter dismissPhotoPickerWorkflow] */

void FUN_104ef8074(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ef80cc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104ef80cc; end: 104ef80d3;  */

void FUN_104ef80cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doDismissPhotoPicker_11255eec0);
  return;
}



/* Entry: 104ef80d4; end: 104ef817b; -[SCPhotoPickerRouter showPhotoPickerErrorText:] */

void FUN_104ef80d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104ef817c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ef817c; end: 104ef8187;  */

void FUN_104ef817c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doShowPhotoPickerErrorText__11255efc0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ef8188; end: 104ef81c7; -[SCPhotoPickerRouter showPhotoLibraryPermissionsDialogIfNeeded] */

void FUN_104ef8188(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdde030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkPhotoLibraryPermissions_1125551a8);
    return;
  }
  return;
}



/* Entry: 104ef81c8; end: 104ef8217; -[SCPhotoPickerRouter photoPickerScope:didPickPhotosAtURLs:] */

void FUN_104ef81c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fb540();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef8218; end: 104ef827f; -[SCPhotoPickerRouter photoPickerScope:didUpdateMetadata:forPhotoAtURL:] */

void FUN_104ef8218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fb620();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef8280; end: 104ef832b; -[SCPhotoPickerRouter _doShowPhotoPicker] */

void FUN_104ef8280(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1349c0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ef832c; end: 104ef8363;  */

void FUN_104ef832c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef8364; end: 104ef83f7; -[SCPhotoPickerRouter _exposePhotoPickerScopeWithPhotoLibrary:] */

void FUN_104ef8364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b21e0;
  _objc_alloc(PTR_PTR_1126b21e0);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0402e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf24520(uVar3,param_2,puVar1,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef83f8; end: 104ef8417; -[SCPhotoPickerRouter _doDismissPhotoPicker] */

void FUN_104ef83f8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ef8418; end: 104ef854f; -[SCPhotoPickerRouter _doShowPhotoPickerErrorText:] */

void FUN_104ef8418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104ef89e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ef8550; end: 104ef855f;  */

void FUN_104ef8550(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ef8560; end: 104ef860b; -[SCPhotoPickerRouter _checkPhotoLibraryPermissions] */

void FUN_104ef8560(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1349c0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ef860c; end: 104ef863f;  */

void FUN_104ef860c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef8640; end: 104ef86ef; -[SCPhotoPickerRouter _handlePhotoLibraryAuthorizationStatus:] */

void FUN_104ef8640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ef86f0;
  puStack_40 = &UNK_110846540;
  uStack_30 = param_3;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ef86f0; end: 104ef872b;  */

void FUN_104ef86f0(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 3) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ef872c; end: 104ef88e3; -[SCPhotoPickerRouter _presentPhotoLibraryPermissionsDialog] */

void FUN_104ef872c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  _objc_release();
  puVar3 = PTR_PTR_1126aed70;
  if (lVar1 != 0) {
    func_0x000104ef89f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0(puVar3,param_2,lVar2,&PTR___NSConcreteGlobalBlock_11085a148);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000104ef8a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0(puVar4,param_2,lVar2,&PTR___NSConcreteGlobalBlock_11085a168);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar6 = puVar5;
    func_0x000104ef8a10();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000104ef8a28();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar3;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar5,param_2,puVar6,puVar7,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104ef88e4; end: 104ef891b;  */

void FUN_104ef88e4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef891c; end: 104ef892b;  */

void FUN_104ef891c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ef892c; end: 104ef8943; -[SCPhotoPickerRouter delegate] */

void FUN_104ef892c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef8944; end: 104ef894f; -[SCPhotoPickerRouter setDelegate:] */

void FUN_104ef8944(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104ef8950; end: 104ef8967; -[SCPhotoPickerRouter photoDataDelegate] */

void FUN_104ef8950(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef8968; end: 104ef8973; -[SCPhotoPickerRouter setPhotoDataDelegate:] */

void FUN_104ef8968(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104ef8974; end: 104ef898b; -[SCPhotoPickerRouter routeRoot] */

void FUN_104ef8974(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef898c; end: 104ef8997; -[SCPhotoPickerRouter setRouteRoot:] */

void FUN_104ef898c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104ef8998; end: 104ef89df; -[SCPhotoPickerRouter .cxx_destruct] */

void FUN_104ef8998(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ef89e0; end: 104ef8a57;  */

void FUN_104ef89e0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba638;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dba638,
                      &PTR____CFConstantStringClassReference_110dba618,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104ef8a58; end: 104ef9347; -[SCMemoriesStoryEditorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef8a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uStack_130;
  undefined8 uStack_118;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126b21e8;
  _objc_alloc();
  lVar27 = param_1;
  FUN_104ef9348();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar27;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  FUN_104ef9348();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar29;
  func_0x00010c259960();
  lVar30 = param_1;
  func_0x000104ef936c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar30;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000104ef9390();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x000104ef93b4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar31;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112716994;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar26;
  func_0x00010bf97800();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000104ef93d8();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x000104ef93fc();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar28;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104ef9420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034c60(puVar2,param_2,puVar1,lVar3,lVar4,lVar5,lVar7,lVar8,lVar9,lVar11,lVar12,lVar13
                     );
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar28);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar26);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar27);
  puVar14 = PTR_PTR_1126b21f0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112716978;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar27;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_e8 = 0;
    uStack_90 = 0;
  }
  else {
    uStack_e8 = *(undefined8 *)(param_1 + _DAT_1127169ac);
    _objc_retain();
    uStack_90 = param_1 + _DAT_1127169b0;
    _objc_loadWeakRetained();
  }
  lVar29 = param_1;
  func_0x000104ef9444();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar29;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = param_1 + _DAT_112716980;
    _objc_loadWeakRetained();
  }
  lVar30 = param_1;
  func_0x000104ef9468();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar30;
  func_0x00010bf6d080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000104ef9468();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c13f8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x000104ef9468();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar31;
  func_0x00010bf8c440();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000104ef9468();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar26;
  func_0x00010bfe3220();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000104ef9468();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c130a60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_130 = 0;
    uStack_118 = 0;
    lVar28 = 0;
  }
  else {
    uStack_118 = *(undefined8 *)(param_1 + _DAT_1127169b8);
    _objc_retain();
    uStack_130 = param_1 + _DAT_1127169bc;
    _objc_loadWeakRetained();
    lVar28 = param_1 + _DAT_112716974;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar28;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104ef93b4();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000104ef93d8();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000104ef948c();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x000104ef9390();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x000104ef936c();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008a00(puVar14,param_2,lVar3,puVar1,uStack_e8,uStack_90,lVar4,uStack_a0,lVar5,lVar7,
                      lVar8,lVar9,lVar11,uStack_118,uStack_130,lVar12,lVar15,lVar17,lVar19,lVar21,
                      lVar23);
  _objc_release(uStack_118);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar28);
  _objc_release(uStack_130);
  _objc_release(uStack_e8);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar26);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar30);
  _objc_release(uStack_a0);
  _objc_release(lVar4);
  _objc_release(lVar29);
  _objc_release(uStack_90);
  _objc_release(lVar3);
  _objc_release(lVar27);
  puVar24 = PTR_PTR_1126b21f8;
  _objc_alloc();
  lVar27 = param_1;
  func_0x000104ef9444(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0274e0(puVar24,param_2,lVar3,puVar1);
  _objc_release(lVar3);
  _objc_release(lVar27);
  puVar25 = PTR_PTR_1126b2200;
  _objc_alloc();
  lVar27 = param_1;
  FUN_104ef9348();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar27;
  func_0x00010c2598e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112716984;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar29;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112716988;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar30;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000104ef948c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112716970;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000104ef93fc();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar26;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000104ef9420();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063380(puVar25,param_2,puVar24,puVar2,puVar14,lVar3,lVar4,lVar5,lVar7,lVar8,lVar9,
                      lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar26);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar30);
  _objc_release(lVar4);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar27);
  FUN_104ef9348(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar27);
  _objc_release(param_1);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar14);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ef9348; end: 104ef94af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef9348(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271696c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef94b0; end: 104ef9537; -[SCMemoriesStoryEditorEntryPoint end] */

void FUN_104ef94b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_104ef9348();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e4eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ef9538; end: 104ef9667; -[SCMemoriesStoryEditorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ef9538(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127169c0);
  _objc_destroyWeak(param_1 + _DAT_1127169bc);
  _objc_storeStrong(param_1 + _DAT_1127169b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127169b4);
  _objc_destroyWeak(param_1 + _DAT_1127169b0);
  _objc_storeStrong(param_1 + _DAT_1127169ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127169a8);
  _objc_destroyWeak(param_1 + _DAT_1127169a4);
  _objc_destroyWeak(param_1 + _DAT_1127169a0);
  _objc_destroyWeak(param_1 + _DAT_11271699c);
  _objc_destroyWeak(param_1 + _DAT_112716998);
  _objc_destroyWeak(param_1 + _DAT_112716994);
  _objc_destroyWeak(param_1 + _DAT_112716990);
  _objc_destroyWeak(param_1 + _DAT_11271698c);
  _objc_destroyWeak(param_1 + _DAT_112716988);
  _objc_destroyWeak(param_1 + _DAT_112716984);
  _objc_destroyWeak(param_1 + _DAT_112716980);
  _objc_destroyWeak(param_1 + _DAT_11271697c);
  _objc_destroyWeak(param_1 + _DAT_112716978);
  _objc_destroyWeak(param_1 + _DAT_112716974);
  _objc_destroyWeak(param_1 + _DAT_112716970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271696c);
  return;
}



/* Entry: 104ef9668; end: 104ef9b0f; -[SCMemoriesStoryEditorActionHandler initWithDataObjectContext:performer:addSnapsScopeExposer:memoriesPickerScopeServices:userTrackedLogger:videoImportServices:memoriesDeletionMutating:memoriesRetryMutating:memoriesEditMutating:memoriesHighlightMutating:memoriesReorderMutating:memoriesActionMenuScopeExposer:memoriesActionMenuScopeServices:memoriesLegacyOperaPresenterBuilder:memoriesMergedDataSource:memoriesSnapThumbnailGeneratorBuilder:circumstanceEngine:memoriesFeaturedStoryDataMutator:memoriesHighlightContentDataSource:] */

undefined8 *
FUN_104ef9668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126e4ec0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c29a4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[9];
    puVar1[9] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[10];
    puVar1[10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2208;
    _objc_alloc(PTR_PTR_1126b2208);
    func_0x000108ec17a8(puVar1[0x10],1);
    func_0x00010bff9720(puVar3);
    uVar2 = param_16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf22c80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
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



/* Entry: 104ef9b10; end: 104ef9e3b; -[SCMemoriesStoryEditorActionHandler handleAction:actionModel:completion:] */

void FUN_104ef9b10(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ef9e3c;
  puStack_70 = &UNK_110842508;
  _objc_retain(param_5);
  ppuVar1 = &puStack_88;
  uStack_68 = param_5;
  _objc_retainBlock();
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x00010be281e0(param_1);
      }
      else if (param_3 == 1) {
        _objc_initWeak(auStack_90,param_1);
        uVar2 = *(undefined8 *)(param_1 + 8);
        _objc_copyWeak(auStack_98,auStack_90);
        _objc_retain(param_4);
        _objc_retain(ppuVar1);
        func_0x00010c0f7fc0(uVar2);
        _objc_release(ppuVar1);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_90);
      }
      goto LAB_104ef9de0;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        func_0x00010be329c0(param_1);
      }
      goto LAB_104ef9de0;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(ppuVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(ppuVar1);
  }
  else if (param_3 < 6) {
    if (param_3 != 4) {
      if (param_3 == 5) {
        func_0x00010be2eee0(param_1);
      }
      goto LAB_104ef9de0;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(ppuVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(ppuVar1);
  }
  else {
    if (param_3 != 6) {
      if (param_3 == 7) {
        func_0x00010be2e620(param_1);
      }
      else if (param_3 == 8) {
        func_0x00010be28240(param_1);
      }
      goto LAB_104ef9de0;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(ppuVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(param_4);
LAB_104ef9de0:
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104ef9e3c; end: 104ef9ebb;  */

void FUN_104ef9e3c(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104ef9ebc;
    puStack_38 = &UNK_11084a9b8;
    _objc_retain(lVar1);
    lStack_30 = lVar1;
    uStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_30);
  }
  return;
}



/* Entry: 104ef9ebc; end: 104ef9ecf;  */

void FUN_104ef9ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ef9ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ef9ed0; end: 104efa04f;  */

void FUN_104ef9ed0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010b5f6bec();
    uVar5 = 2;
    if ((int)uVar3 == 0) {
      uVar5 = 0;
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000105cbd218(uVar2,uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,lVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104efa050;
    puStack_70 = &UNK_110857fd0;
    _objc_copyWeak(auStack_50,auStack_48);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_68 = uVar5;
    _objc_retain(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar3;
    _objc_retain(uVar5);
    uStack_58 = uVar5;
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104efa050; end: 104efa09b;  */

void FUN_104efa050(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be25720(lVar1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104efa09c; end: 104efa0cb;  */

void FUN_104efa09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleSaveStoryForActionModel_c_1125697d0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104efa0cc; end: 104efa207; -[SCMemoriesStoryEditorActionHandler _handleReorderForActionModel:completion:] */

void FUN_104efa0cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf97060(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c245680(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_104efa208;
      puStack_50 = &UNK_11085a188;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010c130ae0(uVar2,param_2,lVar1,lVar3,&puStack_68);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(uVar2);
      _objc_release(uStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efa208; end: 104efa21f;  */

void FUN_104efa208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104efa218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 104efa220; end: 104efa3d3; -[SCMemoriesStoryEditorActionHandler _handleDeleteOriginalEntry:completion:] */

void FUN_104efa220(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0ed4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee6aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bf6bbc0(uVar3);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104efa3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104efa3d4; end: 104efa3e7;  */

void FUN_104efa3d4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104efa3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104efa3e8; end: 104efa6d3; -[SCMemoriesStoryEditorActionHandler _handleSaveStoryForActionModel:completion:] */

void FUN_104efa3e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104efa50c;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  lStack_50 = lVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retainBlock();
  if (lVar1 == 0) {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf97060(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6ae0(lVar1,param_2,uVar3,ppuVar2);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104efa6d4; end: 104efa8eb; -[SCMemoriesStoryEditorActionHandler _handleSaveEditsForActionModel:completion:] */

void FUN_104efa6d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = param_3;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c080ca0();
  if ((int)lVar5 == 0) {
    bVar2 = false;
  }
  else {
    lVar5 = param_3;
    func_0x00010c0ed4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar6 != 0;
    _objc_release();
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  if ((lVar3 == 0) || (bVar2)) {
    func_0x00010be2f8c0(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR_PTR_1126b2210;
    lVar3 = param_3;
    func_0x00010c0ed4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf97060(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf97100(puVar1);
    _objc_release(uVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efa8ec; end: 104efa967;  */

void FUN_104efa8ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ed4e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0540(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104efa968; end: 104efac1f; -[SCMemoriesStoryEditorActionHandler _updateSnapsForEntry:byEntryChangeResult:completion:] */

void FUN_104efa968(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c067320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf6cfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = lVar3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      if (lVar4 == 0 && lVar5 == 0) {
        if (param_5 != 0) {
          (**(code **)(param_5 + 0x10))(param_5,1);
        }
      }
      else {
        func_0x00010be8e980(param_1);
      }
    }
    else {
      func_0x00010bdfa820(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee6aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar3);
    _objc_retain(lVar5);
    _objc_retain(param_5);
    func_0x00010c285940(uVar6);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(param_5);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efac20; end: 104efadcb;  */

void FUN_104efac20(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c245800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d3c80();
    _objc_release(lVar3);
    lVar8 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar8);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar5 = *(undefined8 *)(lVar9 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(lVar4);
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    param_4 = *(long *)(param_1 + 0x20);
    lVar3 = lVar4;
    func_0x00010bf51e00();
    param_6 = *(long *)(param_1 + 0x28);
    param_7 = *(long *)(param_1 + 0x30);
    param_3 = param_2;
    param_5 = lVar3;
    func_0x00010bdfa820(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    if (param_5 == 0 && param_6 == 0) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
    }
    else {
      func_0x00010be8e980(param_2);
    }
  }
  else {
    _objc_initWeak(auStack_198,param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bee6aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a0,auStack_198);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010bf6c980(uVar5);
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efadcc; end: 104efafff; -[SCMemoriesStoryEditorActionHandler _deleteSnapsFromEntry:snapsToDelete:snapOrderToUpdate:newTitle:completion:] */

void FUN_104efadcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_5 == 0 && param_6 == 0) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,1);
      }
    }
    else {
      func_0x00010be8e980(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bee6aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010bf6c980(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efb000; end: 104efb03f;  */

void FUN_104efb000(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be8e980(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104efb040; end: 104efb1a7; -[SCMemoriesStoryEditorActionHandler _reorderSnapsToEntry:snapOrderToUpdate:newTitle:completion:] */

void FUN_104efb040(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0 && param_5 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bee6aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c130a00(uVar1);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efb1a8; end: 104efb1b7;  */

void FUN_104efb1a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000104efb1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
  return;
}



/* Entry: 104efb1b8; end: 104efb313; -[SCMemoriesStoryEditorActionHandler _handleDeleteCopyForActionModel:completion:] */

void FUN_104efb1b8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c080ca0();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf97060(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010bf6c2c0(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar4);
      _objc_release(param_4);
      goto LAB_104efb2ec;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
LAB_104efb2ec:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efb314; end: 104efb393;  */

void FUN_104efb314(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104efb394;
    puStack_38 = &UNK_11084a9b8;
    _objc_retain(lVar1);
    lStack_30 = lVar1;
    uStack_28 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(lStack_30);
  }
  return;
}



/* Entry: 104efb394; end: 104efb3a7;  */

void FUN_104efb394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104efb3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 104efb3a8; end: 104efb557; -[SCMemoriesStoryEditorActionHandler _handleDeleteForActionModel:completion:] */

void FUN_104efb3a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
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
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104efb558;
  puStack_70 = &UNK_11085a2d8;
  uStack_68 = uVar2;
  _objc_retain(uVar2);
  uVar4 = uVar3;
  func_0x00010c0b8620(uVar3,param_2,&puStack_88,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2218;
  _objc_alloc(PTR_PTR_1126b2218);
  lVar6 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c016ea0(puVar5,param_2,0,uVar4,1,lVar6,1,0,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),0,0);
  _objc_release(lVar6);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104efb568;
  puStack_98 = &UNK_110842508;
  uStack_90 = param_4;
  _objc_retain(param_4);
  func_0x00010c142b00(puVar5,param_2,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 104efb558; end: 104efb57b;  */

void FUN_104efb558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d80a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c046f40();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104efb57c; end: 104efb75b; -[SCMemoriesStoryEditorActionHandler _handleUpdateStoryTitleForActionModel:completion:] */

void FUN_104efb57c(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_3;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010bf97060(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    func_0x00010bf97060(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      func_0x00010c28b1c0(uVar5);
      _objc_release(ppuVar2);
      _objc_release(uVar5);
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,1);
      }
    }
    else {
      _objc_retain(param_4);
      func_0x00010c28b1e0(uVar5);
      _objc_release(ppuVar2);
      _objc_release(uVar5);
      _objc_release(param_4);
    }
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efb75c; end: 104efb773;  */

void FUN_104efb75c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104efb76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    return;
  }
  return;
}



/* Entry: 104efb774; end: 104efb83f; -[SCMemoriesStoryEditorActionHandler _userContextWithActionString:] */

void FUN_104efb774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2220;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd;
  func_0x00010bafa2a4(0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec3598,param_3,puVar2
                      ,0,0,uVar3,0);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104efb840; end: 104efbab7; -[SCMemoriesStoryEditorActionHandler _handleAddSnapForActionModel:disabledSnapIds:] */

void FUN_104efb840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0311a0();
  puVar2 = PTR_PTR_1126b1c60;
  _objc_alloc(PTR_PTR_1126b1c60);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dba798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba798,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052c80(puVar2);
  _objc_release(ppuVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar5 = PTR_PTR_1126b2228;
  _objc_alloc(PTR_PTR_1126b2228);
  uVar6 = param_3;
  func_0x00010bf97060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ed00(puVar5);
  func_0x00010bf23840(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efbab8; end: 104efbb23;  */

void FUN_104efbab8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10eda0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104efbb24; end: 104efbb27;  */

void FUN_104efbb24(void)

{
  return;
}



/* Entry: 104efbb28; end: 104efbc67; -[SCMemoriesStoryEditorActionHandler _handlePresentActionMenuForActionModel:completion:] */

void FUN_104efbb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010010fab4();
  uVar5 = param_3;
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2230;
  _objc_alloc(PTR_PTR_1126b2230);
  func_0x00010c01fce0();
  _objc_release(uVar5);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar3 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0f2220();
  lVar4 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf22900(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104efbc68; end: 104efbce3; -[SCMemoriesStoryEditorActionHandler requestToDismissPage] */

void FUN_104efbc68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104efbce4; end: 104efbe03; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerAddToStory:item:] */

void FUN_104efbce4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a4ec8);
  lVar1 = param_4;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efbe04; end: 104efbfb3;  */

void FUN_104efbe04(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b2238;
    _objc_alloc();
    func_0x00010c010180();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010b5f6bec();
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    puVar6 = puVar5;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x000105cbd218(puVar6,uVar7,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_initWeak(auStack_48,lVar2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104efbfb4;
    puStack_68 = &UNK_110848218;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar5);
    puStack_60 = puVar5;
    _objc_retain(puVar8);
    puStack_58 = puVar8;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(puStack_58);
    _objc_release(puStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104efbfb4; end: 104efbfef;  */

void FUN_104efbfb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be25720(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104efbff0; end: 104efbff3; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapEntry:item:fromView:] */

void FUN_104efbff0(void)

{
  return;
}



/* Entry: 104efbff4; end: 104efbff7; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapEditStory:item:fromView:] */

void FUN_104efbff4(void)

{
  return;
}



/* Entry: 104efbff8; end: 104efbffb; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapViewSnapsFromView:] */

void FUN_104efbff8(void)

{
  return;
}



/* Entry: 104efbffc; end: 104efbfff; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapRemoveStories] */

void FUN_104efbffc(void)

{
  return;
}



/* Entry: 104efc000; end: 104efc003; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerCreateMashupForStory:] */

void FUN_104efc000(void)

{
  return;
}


