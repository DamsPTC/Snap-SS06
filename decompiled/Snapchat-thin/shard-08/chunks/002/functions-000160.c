/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ec55f4; end: 105ec576b; -[SCMapAddressAnnotationController placeAnnotationsAtAddresses:] */

void FUN_105ec55f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ec56c0;
  puStack_40 = &UNK_1108f31d8;
  lStack_38 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef83c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ec576c; end: 105ec58b3; -[SCMapAddressAnnotationController removeAnnotationsAtAddresses:] */

void FUN_105ec576c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ec5838;
  puStack_40 = &UNK_1108f31d8;
  lStack_38 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c4c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ec58b4; end: 105ec58b7; -[SCMapAddressAnnotationController configureMap] */

void FUN_105ec58b4(void)

{
  return;
}



/* Entry: 105ec58b8; end: 105ec5a4b; -[SCMapAddressAnnotationController centerViewportOnAddress:edgeInsets:] */

void FUN_105ec58b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar5 = param_1;
  _objc_retain(param_7);
  if (param_7 != 0) {
    func_0x00010c08aca0(param_7);
    uVar6 = uVar5;
    func_0x00010c09abe0(param_7);
    _CLLocationCoordinate2DMake();
    _objc_initWeak(auStack_78,param_5);
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b9340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09d420();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_78);
    uVar4 = uVar3;
    uStack_a8 = uVar5;
    uStack_a0 = uVar6;
    uStack_98 = param_1;
    uStack_90 = param_2;
    uStack_88 = param_3;
    uStack_80 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x20);
    *(undefined8 *)(param_5 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 105ec5a4c; end: 105ec5b13;  */

void FUN_105ec5a4c(long param_1,undefined8 param_2)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0bec40(param_2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 105ec5b14; end: 105ec5b17;  */

void FUN_105ec5b14(void)

{
  return;
}



/* Entry: 105ec5b18; end: 105ec5b53;  */

void FUN_105ec5b18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be18420(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec5b54; end: 105ec5b57;  */

void FUN_105ec5b54(void)

{
  return;
}



/* Entry: 105ec5b58; end: 105ec5bf3; -[SCMapAddressAnnotationController _flyToCoordinate:edgeInsets:] */

void FUN_105ec5b58(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010c2bf200(*(undefined8 *)(param_3 + 8));
  dVar2 = 10.0;
  if (10.0 < dVar1) {
    func_0x00010c2bf200(*(undefined8 *)(param_3 + 8));
    dVar2 = dVar1;
  }
  func_0x00010bfb3460(param_1,param_2,dVar2,0,0x3fd999999999999a,*(undefined8 *)(param_3 + 8),
                      param_4,0);
  return;
}



/* Entry: 105ec5bf4; end: 105ec5bfb; -[SCMapAddressAnnotationController feature] */

undefined8 FUN_105ec5bf4(void)

{
  return 7;
}



/* Entry: 105ec5bfc; end: 105ec5c03; -[SCMapAddressAnnotationController touchPriority] */

undefined8 FUN_105ec5bfc(void)

{
  return 2;
}



/* Entry: 105ec5c04; end: 105ec5c0b; -[SCMapAddressAnnotationController didLongPressOnMapAtPoint:featureDescriptors:] */

undefined8 FUN_105ec5c04(void)

{
  return 0;
}



/* Entry: 105ec5c0c; end: 105ec5c13; -[SCMapAddressAnnotationController didTouchDownOnMapAtPoint:featureDescriptors:] */

undefined8 FUN_105ec5c0c(void)

{
  return 0;
}



/* Entry: 105ec5c14; end: 105ec5f6f; -[SCMapAddressAnnotationController didTouchUpOnMapAtPoint:touchWorldLocation:featureDescriptors:] */

long FUN_105ec5c14(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
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
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (lVar7 = param_3, func_0x00010bf529e0(), lVar7 != 0)
     ) {
    dVar14 = *(double *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
    dVar15 = *(double *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
    dVar13 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar7 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c118b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_100,0x10);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      lVar6 = *plStack_130;
      do {
        lVar10 = 0;
        lVar9 = lVar8;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          lVar11 = *(long *)(lStack_138 + lVar10 * 8);
          lVar8 = lVar11;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar8;
          func_0x00010c0720c0();
          if ((int)lVar3 == 0) {
LAB_105ec5e10:
            _objc_release(lVar8);
          }
          else {
            lVar3 = lVar11;
            func_0x00010c27e100();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0720c0();
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(lVar8);
            fVar12 = SUB84(dVar13,0);
            if ((int)lVar5 != 0) {
              lVar8 = param_3;
              func_0x00010bfb1920(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08aca0();
              dVar14 = (double)fVar12;
              lVar3 = param_3;
              func_0x00010bfb1920(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4a40();
              dVar15 = (double)fVar12;
              _CLLocationCoordinate2DMake(dVar14,dVar15);
              dVar13 = dVar14;
              _objc_release(lVar3);
              goto LAB_105ec5e10;
            }
          }
          lVar8 = lVar11;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar8;
          func_0x00010c0720c0();
          _objc_release(lVar8);
          lVar8 = lVar9;
          if ((int)lVar3 != 0) {
            func_0x00010c27e100();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar11;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            _objc_release(lVar11);
          }
          lVar10 = lVar10 + 1;
          lVar9 = lVar8;
        } while (lVar7 != lVar10);
        lVar7 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_100,0x10);
      } while (lVar7 != 0);
    }
    _objc_release();
    iVar1 = (int)lVar2;
    _CLLocationCoordinate2DIsValid(dVar14,dVar15);
    if (iVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar8;
      func_0x00010c08fa60();
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        param_1 = param_1 + 0x38;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf7ce40(dVar14,dVar15);
        _objc_release(param_1);
        lVar7 = 1;
      }
    }
    _objc_release(lVar8);
  }
  else {
    lVar7 = 0;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    return param_3;
  }
  return lVar7;
}



/* Entry: 105ec5f70; end: 105ec5f73; -[SCMapAddressAnnotationController priorResponderDidHandleTouch:] */

void FUN_105ec5f70(void)

{
  return;
}



/* Entry: 105ec5f74; end: 105ec5f77; -[SCMapAddressAnnotationController didCancelTouchOnMapWithReason:] */

void FUN_105ec5f74(void)

{
  return;
}



/* Entry: 105ec5f78; end: 105ec60f3; -[SCMapAddressAnnotationController _addressEntryToSDKFeature:] */

void FUN_105ec5f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2050;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(puVar1);
  _objc_release(puVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(puVar2);
  func_0x00010c08aca0(param_4);
  uVar4 = param_1;
  func_0x00010c09abe0(param_4);
  FUN_10676af10(param_1,uVar4,puVar1);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad058;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                &PTR____CFConstantStringClassReference_110e30158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010befd700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e30178;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e30178,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ec60f4; end: 105ec610b; -[SCMapAddressAnnotationController delegate] */

void FUN_105ec60f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec610c; end: 105ec6117; -[SCMapAddressAnnotationController setDelegate:] */

void FUN_105ec610c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105ec6118; end: 105ec6173; -[SCMapAddressAnnotationController .cxx_destruct] */

void FUN_105ec6118(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ec6174; end: 105ec625f; -[SCMapAddressSelectionLogging initWithUserBlizzardServices:mapSessionProvider:mapViewport:] */

undefined1 *
FUN_105ec6174(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126edc98;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    *(long *)((long)puVar1 + 0x20) = (long)param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105ec6260; end: 105ec633f; -[SCMapAddressSelectionLogging logTrayOpenWithNumberOfAddresses:] */

void FUN_105ec6260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c58d8;
  _objc_alloc_init(PTR_PTR_1126c58d8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c2bf200(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1c29c0(puVar1);
  func_0x00010c165d20(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1cee60(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ec6340; end: 105ec640f; -[SCMapAddressSelectionLogging logTrayActionWithAction:] */

void FUN_105ec6340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c58e0;
  _objc_alloc_init(PTR_PTR_1126c58e0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c165d20(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c161620(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ec6410; end: 105ec6517; -[SCMapAddressSelectionLogging logTrayCloseWithCloseMethod:viewTime:] */

void FUN_105ec6410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c58e8;
  _objc_alloc_init(PTR_PTR_1126c58e8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_2,uVar4);
  _objc_release(uVar2);
  func_0x00010c165d20(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  lVar3 = param_1;
  func_0x00010bde1640(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d580(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c222d20(puVar1,param_2,param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ec6518; end: 105ec6543; -[SCMapAddressSelectionLogging _closeMethodStringFromEnum:] */

undefined ** FUN_105ec6518(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e301b8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e30198;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e301d8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 105ec6544; end: 105ec657f; -[SCMapAddressSelectionLogging .cxx_destruct] */

void FUN_105ec6544(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ec6580; end: 105ec68b7; -[SCMapAddressSelectionWorkflow initWithAddressScope:annotationController:multiTrayManager:valdiRuntimeProvider:peliasProvider:locationProvider:snapchatterPublicDataFetcher:userInfoServices:logger:focusedDropScopeServices:focusedDropScopeExposer:mainQueue:dropsPersistenceProvider:] */

undefined8 *
FUN_105ec6580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126edca0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
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
    func_0x00010c18b5e0(puVar1[2]);
    puVar3 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
    _objc_alloc_init();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x13) = 0;
    func_0x00010be66820(puVar1);
  }
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



/* Entry: 105ec68b8; end: 105ec68f7; -[SCMapAddressSelectionWorkflow startWorkflow] */

void FUN_105ec68b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be12fe0();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ec68f8; end: 105ec6a97; -[SCMapAddressSelectionWorkflow _fetchPeliasResultsAndPresentTray] */

void FUN_105ec68f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126c58f0;
  _objc_alloc(PTR_PTR_1126c58f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010befd580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15dda0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2640(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfa8240(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 105ec6a98; end: 105ec6adf;  */

void FUN_105ec6a98(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dd20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec6ae0; end: 105ec6c43; -[SCMapAddressSelectionWorkflow _handlePeliasResponse:] */

void FUN_105ec6ae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bde1760(param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010bdea8a0(param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 0x90);
      *(long *)(param_3 + 0x90) = lVar2;
      _objc_release(uVar3);
      lVar2 = *(long *)(param_3 + 0x90);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 0x60);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105ec6c44;
      puStack_68 = &UNK_110841f80;
      lStack_60 = param_3;
      lStack_58 = lVar2;
      _objc_retain();
      func_0x00010c0f7fc0(uVar3,param_4,&puStack_80);
      _objc_release(lStack_58);
      goto LAB_105ec6b88;
    }
  }
  func_0x00010bf51c80();
  lVar2 = lVar1;
  func_0x00010befd580(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0cd60(param_1,param_2,param_3,param_4,lVar2);
LAB_105ec6b88:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 105ec6c44; end: 105ec6cc3;  */

void FUN_105ec6c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x00010be7f0e0(*(undefined8 *)(param_5 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8920();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf34830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10),
             PTR_s_centerViewportOnAddress_edgeInse_1125aabb0,*(undefined8 *)(param_5 + 0x28));
  return;
}



/* Entry: 105ec6cc4; end: 105ec6e8b; -[SCMapAddressSelectionWorkflow _presentTray] */

void FUN_105ec6cc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010bdea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xe;
  func_0x000109203bc0(0xe);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1f18;
  _objc_alloc(PTR_PTR_1126b1f18);
  func_0x00010bfdf380(PTR_PTR_1126b1f10);
  func_0x00010c0fd340(PTR_PTR_1126b1f10);
  func_0x00010c01ed80(puVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf59b80(0x405e000000000000,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0ba2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105ec6e8c; end: 105ec6ed3;  */

void FUN_105ec6e8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec6ed4; end: 105ec6f6f; -[SCMapAddressSelectionWorkflow _handleTrayEvent:] */

void FUN_105ec6ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ec6f70;
  puStack_20 = &UNK_1108592e0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ec7048;
  puStack_48 = &UNK_1108484c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105ec7098;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c1800(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 105ec6f70; end: 105ec7047;  */

void FUN_105ec6f70(double param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 2) {
    if ((param_4 < 5) && ((1L << (param_4 & 0x3f) & 0x16U) != 0)) {
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
      func_0x00010c098c40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73b00();
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
      uVar1 = 0;
      if (param_4 != 4) {
        uVar1 = 2;
      }
      func_0x00010c26f3a0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010c0b1f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar2,PTR_s_logTrayCloseWithCloseMethod_view_11260a1f0,uVar1,(long)ABS(param_1));
      return;
    }
  }
  else if ((param_3 == 4 || param_3 == 8) && (param_4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0fceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10),
               PTR_s_placeAnnotationsAtAddresses__11261cdc8,
               *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90));
    return;
  }
  return;
}



/* Entry: 105ec7048; end: 105ec70cf;  */

void FUN_105ec7048(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 8) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x98) & 1) == 0)) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x98) = 1;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
    func_0x00010bf529e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_logTrayOpenWithNumberOfAddresses_11260a208,uVar1);
    return;
  }
  return;
}



/* Entry: 105ec70d0; end: 105ec71b7; -[SCMapAddressSelectionWorkflow _createAddressEntriesFromPeliasResponse:] */

void FUN_105ec70d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x000107f492b0(0x404e000000000000);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ec71b8;
  puStack_50 = &UNK_1108f32a8;
  uStack_38 = (undefined1)uVar2;
  uStack_48 = uVar1;
  lStack_40 = param_1;
  _objc_retain(uVar1);
  uVar2 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ec71b8; end: 105ec72e3;  */

void FUN_105ec71b8(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126c58f8;
  _objc_alloc(PTR_PTR_1126c58f8);
  uVar6 = param_4;
  func_0x00010befd580(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_4);
  func_0x00010bf51c80(param_4);
  func_0x00010bff26c0(puVar5);
  _objc_release(uVar6);
  if (*(char *)(param_3 + 0x30) == '\x01') {
    uVar6 = param_4;
    func_0x00010bf51c80();
    iVar4 = (int)uVar6;
    dVar8 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar8)) {
        bVar1 = dVar8 < 1.1920928955078125e-07;
        bVar2 = dVar8 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (_CLLocationCoordinate2DIsValid(), iVar4 != 0)) {
      func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
      dVar8 = param_1;
      dVar7 = param_2;
      func_0x00010bf51c80(param_4);
      func_0x000108d312a8(param_1,param_2,dVar8,dVar7);
      uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x88);
      func_0x00010c25d440(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190b40(puVar5);
      _objc_release(uVar6);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ec72e4; end: 105ec74fb; -[SCMapAddressSelectionWorkflow _closestPeliasResponseToUserFromPeliasResponses:] */

void FUN_105ec72e4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  long lVar7;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar9;
  func_0x000107f492b0(0x404e000000000000);
  dVar17 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_5);
  lVar6 = param_5;
  func_0x00010bf52a60();
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    dVar18 = *(double *)PTR__CLLocationDistanceMax_110349b60;
    lVar13 = *plStack_140;
    do {
      lVar14 = 0;
      do {
        dVar15 = dVar17;
        if (*plStack_140 != lVar13) {
          _objc_enumerationMutation(param_5);
          dVar15 = dVar17;
        }
        lVar12 = *(long *)(lStack_148 + lVar14 * 8);
        dVar17 = dVar15;
        if ((int)uVar5 == 0) {
LAB_105ec745c:
          if (lVar11 == 0) {
            _objc_retain(lVar12);
            lVar11 = lVar12;
          }
        }
        else {
          lVar7 = lVar12;
          func_0x00010bf51c80();
          iVar4 = (int)lVar7;
          dVar17 = ABS(dVar15);
          bVar1 = false;
          bVar2 = true;
          bVar3 = false;
          if (1.1920928955078125e-07 < ABS(param_2)) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar17)) {
              bVar1 = dVar17 < 1.1920928955078125e-07;
              bVar2 = dVar17 == 1.1920928955078125e-07;
              bVar3 = false;
            }
          }
          dVar17 = dVar15;
          if ((bVar2 || bVar1 != bVar3) ||
             (_CLLocationCoordinate2DIsValid(), dVar17 = dVar15, iVar4 == 0)) goto LAB_105ec745c;
          func_0x00010bf51c80(uVar9);
          dVar17 = dVar15;
          dVar16 = param_2;
          func_0x00010bf51c80(lVar12);
          func_0x000108d312a8(dVar15,param_2,dVar17,dVar16);
          dVar17 = dVar15;
          if ((lVar11 == 0) || (dVar15 < dVar18)) {
            _objc_retain(lVar12);
            _objc_release(lVar11);
            lVar11 = lVar12;
            dVar18 = dVar15;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = param_5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_5);
  _objc_release(uVar9);
  lVar6 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_105ec74fc;
  lStack_180 = lVar11;
  uStack_178 = uVar5;
  uStack_170 = uVar9;
  lStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_188,lVar6);
  uVar8 = *(undefined8 *)(lVar6 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0fa340();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_190,auStack_188);
  uVar5 = uVar9;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar6 + 0x80);
  *(undefined8 *)(lVar6 + 0x80) = uVar5;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(lVar6 + 0x68);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa92c0();
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  return;
}



/* Entry: 105ec74fc; end: 105ec761f; -[SCMapAddressSelectionWorkflow _observePersistedDrops] */

void FUN_105ec74fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0fa340();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa92c0();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ec7620; end: 105ec7677;  */

void FUN_105ec7620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ec7678; end: 105ec776b; -[SCMapAddressSelectionWorkflow _createAddressTray] */

void FUN_105ec7678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c5900;
  _objc_alloc_init(PTR_PTR_1126c5900);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010befd580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e77c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1966e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf1ad00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21df40(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c5908;
  _objc_alloc(PTR_PTR_1126c5908);
  func_0x00010c061f20();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ec776c; end: 105ec7847; -[SCMapAddressSelectionWorkflow _exposeDropScopeWithCoordinate:address:] */

void FUN_105ec776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bdd6060(param_1,param_2,param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 105ec7848; end: 105ec788f;  */

void FUN_105ec7848(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0cda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec7890; end: 105ec791f; -[SCMapAddressSelectionWorkflow _exposeDropWithDrop:] */

void FUN_105ec7890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x90);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  uVar1 = 3;
  if (lVar3 == 0) {
    uVar1 = 4;
  }
  func_0x00010bf230c0(uVar2,param_2,param_3,param_1,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12b260(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ec7920; end: 105ec7dc3; -[SCMapAddressSelectionWorkflow _buildDropFromCoordinate:address:completion:] */

void FUN_105ec7920(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c15dda0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    _objc_initWeak(auStack_90,param_3);
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 8);
    func_0x00010c15dda0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105ec7dc4;
    puStack_c0 = &UNK_1108f3308;
    ppuVar13 = &puStack_d8;
    puVar9 = auStack_90;
    _objc_copyWeak(auStack_a8,puVar9);
    uStack_a0 = param_1;
    uStack_98 = param_2;
    _objc_retain(param_5);
    lStack_b8 = param_5;
    _objc_retain(param_6);
    lStack_b0 = param_6;
    func_0x00010c09d7c0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar16);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(lStack_b0);
    _objc_release(lStack_b8);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_90);
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 8);
    func_0x00010c15dda0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010be10fe0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bf000;
    _objc_alloc();
    puStack_e8 = puVar16;
    if (puVar16 == (undefined *)0x0) {
      puStack_e8 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x00010c15dda0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010be069c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010bf1ad00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = *(undefined ***)(param_3 + 0x40);
    func_0x00010bf1c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar14;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e760(param_1,param_2,puVar4);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puStack_e8);
    }
    puVar9 = puVar4;
    (**(code **)(param_6 + 0x10))(param_6,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar16);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar13 + 6);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar9);
  lVar17 = param_5 + 0x30;
  _objc_loadWeakRetained(lVar17);
  puVar16 = puVar9;
  func_0x00010bfb1920(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010be30840(*(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),lVar17);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar17);
  return;
}



/* Entry: 105ec7dc4; end: 105ec7e3b;  */

void FUN_105ec7dc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be30840(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec7e3c; end: 105ec807f; -[SCMapAddressSelectionWorkflow _handleSnapchatterResult:coordinate:address:completion:] */

void FUN_105ec7e3c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar8 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_6);
  func_0x00010c15dda0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010be10fe0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf000;
  _objc_alloc();
  puStack_78 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puStack_78 = puVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_5;
  func_0x00010c2923e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf85d80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c294420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be069c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf1acc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf1c0a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e760(param_1,param_2,puVar2);
  _objc_release(param_6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puStack_78);
  }
  (**(code **)(param_7 + 0x10))(param_7,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ec8080; end: 105ec8163; -[SCMapAddressSelectionWorkflow _dropNameForDisplayName:username:] */

void FUN_105ec8080(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x0001068750ac();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c14de00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ec8164; end: 105ec82fb; -[SCMapAddressSelectionWorkflow _fetchDropIdIfSavedFromCoordinate:senderUserId:] */

void FUN_105ec8164(double param_1,double param_2,long param_3,undefined8 param_4,undefined1 *param_5
                  )

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  puVar8 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_2;
  _objc_retain(param_5);
  dVar13 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar9 = *(long *)(param_3 + 0xa8);
  _objc_retain(lVar9);
  lVar4 = lVar9;
  func_0x00010bf52a60();
  uVar10 = 0;
  if (lVar4 != 0) {
    lVar11 = *plStack_140;
    do {
      lVar12 = 0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(ulong *)(lStack_148 + lVar12 * 8);
        func_0x00010bf51c80(uVar10);
        dVar1 = param_1 - dVar13;
        dVar13 = ABS(param_2 - dVar14);
        bVar2 = false;
        bVar3 = true;
        if (ABS(dVar1) <= 2.220446049250313e-16) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar13)) {
            bVar2 = dVar13 == 2.220446049250313e-16;
            bVar3 = 2.220446049250313e-16 <= dVar13;
          }
        }
        if (!bVar3 || bVar2) {
          uVar5 = uVar10;
          func_0x00010bf5b460();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          puVar8 = (undefined8 *)param_5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((uVar6 & 1) != 0) {
            func_0x00010bf8aa20();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105ec82a4;
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      lVar4 = lVar9;
      puVar8 = &uStack_150;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    uVar10 = 0;
  }
LAB_105ec82a4:
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010c08aca0(puVar8);
  dVar14 = dVar13;
  func_0x00010c09abe0(puVar8);
  _CLLocationCoordinate2DMake(dVar13,dVar14);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010befd700(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010be0cd60(dVar13,dVar14,param_5);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010c0b1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x48),PTR_s_logTrayActionWithAction__11260a1e8,0);
  return;
}



/* Entry: 105ec82fc; end: 105ec839b; -[SCMapAddressSelectionWorkflow onTapAddressEntryWithEntry:] */

void FUN_105ec82fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c08aca0(param_4);
  uVar2 = param_1;
  func_0x00010c09abe0(param_4);
  _CLLocationCoordinate2DMake(param_1,uVar2);
  uVar1 = param_4;
  func_0x00010befd700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be0cd60(param_1,uVar2,param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x48),PTR_s_logTrayActionWithAction__11260a1e8,0);
  return;
}



/* Entry: 105ec839c; end: 105ec8407; -[SCMapAddressSelectionWorkflow onClose] */

void FUN_105ec839c(double param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed20();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010c0b1f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_logTrayCloseWithCloseMethod_view_11260a1f0,1,(long)ABS(param_1));
    return;
  }
  return;
}



/* Entry: 105ec8408; end: 105ec840f; -[SCMapAddressSelectionWorkflow shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105ec8408(void)

{
  return 0;
}



/* Entry: 105ec8410; end: 105ec841b; -[SCMapAddressSelectionWorkflow pushToValdiMarshaller:] */

undefined8 FUN_105ec8410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5a50;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x000105ed6590();
  return param_3;
}



/* Entry: 105ec841c; end: 105ec841f; -[SCMapAddressSelectionWorkflow didTapOnAnnotationWithCoordinate:address:] */

void FUN_105ec841c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeDropScopeWithCoordinate_a_112560cf8);
  return;
}



/* Entry: 105ec8420; end: 105ec849b; -[SCMapAddressSelectionWorkflow didCloseDropsTray] */

void FUN_105ec8420(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c098c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ec849c; end: 105ec84f3; -[SCMapAddressSelectionWorkflow didSuccessfullySendDrop:] */

void FUN_105ec849c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ec84f4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_38);
  return;
}



/* Entry: 105ec84f4; end: 105ec8563;  */

void FUN_105ec84f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c098c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ec8564; end: 105ec866b; -[SCMapAddressSelectionWorkflow .cxx_destruct] */

void FUN_105ec8564(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 105ec866c; end: 105ec87db; -[SCMapAddressTrayViewController initWithViewModel:valdiRuntimeProvider:trayActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105ec866c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126edca8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    puVar2 = PTR_PTR_1126c5910;
    _objc_alloc_init(PTR_PTR_1126c5910);
    func_0x00010c192120();
    puVar3 = PTR_PTR_1126c5918;
    _objc_alloc();
    uVar6 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112739728);
    *(undefined **)((long)puVar1 + (long)_DAT_112739728) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273972c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273972c) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ec87dc; end: 105ec87eb; -[SCMapAddressTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec87dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11273972c));
  return;
}



/* Entry: 105ec87ec; end: 105ec8837; -[SCMapAddressTrayViewController viewDidLoad] */

void FUN_105ec87ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126edca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 105ec8838; end: 105ec8843; -[SCMapAddressTrayViewController trayFeatureName] */

undefined ** FUN_105ec8838(void)

{
  return &PTR____CFConstantStringClassReference_110e301f8;
}



/* Entry: 105ec8844; end: 105ec8853; -[SCMapAddressTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec8844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273972c),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 105ec8854; end: 105ec889f; -[SCMapAddressTrayViewController handleGripperAreaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec8854(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273972c);
  func_0x00010c065580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ec88a0; end: 105ec88a7; -[SCMapAddressTrayViewController autoSizingEnabled] */

undefined8 FUN_105ec88a0(void)

{
  return 1;
}



/* Entry: 105ec88a8; end: 105ec88e7; -[SCMapAddressTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec88a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739728,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273972c,0);
  return;
}



/* Entry: 105ec88e8; end: 105ec8d8b; -[SCMapAddressSelectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec88e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  
  lVar1 = param_1 + _DAT_112739730;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = param_1 + _DAT_112739734;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000109021d60();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar8 = PTR_PTR_1126c5920;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112739738;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11273973c;
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar2);
  lVar10 = lVar2;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar3);
  lVar13 = lVar3;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0179c0(puVar8,param_2,lVar9,lVar12,lVar13,uVar7 & 0xffffffff);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126c5928;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112739740;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_112739744;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar24);
  lVar9 = lVar24;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05aa40(puVar14,param_2,lVar1,lVar3,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar24);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar15 = PTR_PTR_1126c5930;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112739748;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_11273974c;
  _objc_loadWeakRetained();
  lVar16 = lVar2;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112739750;
  _objc_loadWeakRetained();
  lVar17 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112739754;
  _objc_loadWeakRetained();
  lVar18 = lVar24;
  func_0x00010c0f7220();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112739758;
  _objc_loadWeakRetained();
  lVar19 = lVar9;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273975c;
  _objc_loadWeakRetained();
  lVar20 = lVar10;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112739760;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112739764;
  _objc_loadWeakRetained();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112739768);
  lVar13 = param_1 + _DAT_11273976c;
  _objc_loadWeakRetained();
  lVar21 = lVar13;
  func_0x00010bf8ac00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff26a0(puVar15,param_2,lVar1,puVar8,lVar16,lVar17,lVar18,lVar19,lVar20,lVar11,puVar14
                      ,lVar12,uVar22,lVar4,lVar21);
  lVar23 = (long)_DAT_112739770;
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar15;
  _objc_release(uVar22);
  _objc_release(lVar21);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar24);
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c251d00(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar14);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ec8d8c; end: 105ec8e7f; -[SCMapAddressSelectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec8d8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739768,0);
  _objc_destroyWeak(param_1 + _DAT_112739764);
  _objc_destroyWeak(param_1 + _DAT_11273976c);
  _objc_destroyWeak(param_1 + _DAT_112739744);
  _objc_destroyWeak(param_1 + _DAT_112739740);
  _objc_destroyWeak(param_1 + _DAT_112739754);
  _objc_destroyWeak(param_1 + _DAT_112739760);
  _objc_destroyWeak(param_1 + _DAT_11273975c);
  _objc_destroyWeak(param_1 + _DAT_112739758);
  _objc_destroyWeak(param_1 + _DAT_112739738);
  _objc_destroyWeak(param_1 + _DAT_11273973c);
  _objc_destroyWeak(param_1 + _DAT_11273974c);
  _objc_destroyWeak(param_1 + _DAT_112739750);
  _objc_destroyWeak(param_1 + _DAT_112739730);
  _objc_destroyWeak(param_1 + _DAT_112739734);
  _objc_destroyWeak(param_1 + _DAT_112739748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739770,0);
  return;
}



/* Entry: 105ec8e80; end: 105ec9873; -[SCMapBitmojiTrayEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec8e80(double param_1,long param_2)

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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  long lVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_2 + _DAT_112739778);
  *(undefined **)(param_2 + _DAT_112739778) = puVar1;
  _objc_release(uVar46);
  puVar1 = PTR_PTR_1126c5938;
  _objc_alloc_init();
  lVar52 = (long)_DAT_11273977c;
  uVar46 = *(undefined8 *)(param_2 + lVar52);
  *(undefined **)(param_2 + lVar52) = puVar1;
  _objc_release(uVar46);
  lVar2 = param_2 + _DAT_112739784;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2 + _DAT_112739788;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar50;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  param_1 = param_1 * 1000.0;
  *(long *)(param_2 + _DAT_11273978c) = (long)param_1;
  _objc_release(puVar1);
  lVar50 = (long)_DAT_112739790;
  lVar2 = param_2 + lVar50;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar6;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_2 + _DAT_112739794);
  *(long *)(param_2 + _DAT_112739794) = lVar51;
  _objc_release(uVar46);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c5940;
  _objc_alloc();
  lVar2 = param_2 + _DAT_112739798;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bf38800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + _DAT_11273979c;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c0ec340();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_2 + lVar50;
  _objc_loadWeakRetained();
  lVar10 = lVar50;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2 + _DAT_1127397a0;
  _objc_loadWeakRetained();
  lVar13 = lVar6;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_2 + _DAT_1127397a4;
  _objc_loadWeakRetained();
  lVar15 = lVar51;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf61de0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2 + _DAT_1127397a8;
  _objc_loadWeakRetained();
  lVar19 = param_2 + _DAT_1127397b0;
  _objc_loadWeakRetained();
  lVar20 = param_2 + _DAT_1127397b8;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2 + _DAT_1127397bc;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2 + _DAT_1127397c4;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2 + _DAT_1127397c8;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bfe3fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_2 + _DAT_1127397cc;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0b99c0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_1127397d0;
  lVar30 = param_2 + lVar47;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2 + _DAT_1127397d4;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c0c3dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2 + _DAT_1127397d8;
  _objc_loadWeakRetained();
  lVar35 = param_2 + _DAT_1127397dc;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = (long)_DAT_1127397e0;
  lVar37 = param_2 + lVar49;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bf48a40();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_2 + lVar49;
  _objc_loadWeakRetained();
  lVar39 = lVar49;
  func_0x00010c0dd900();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_2 + _DAT_1127397e4;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c27d8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_2 + _DAT_1127397e8;
  _objc_loadWeakRetained();
  func_0x00010c00a4a0();
  uVar46 = *(undefined8 *)(param_2 + _DAT_1127397ec);
  *(undefined **)(param_2 + _DAT_1127397ec) = puVar1;
  _objc_release(uVar46);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar49);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar51);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar50);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar47 = param_2 + lVar47;
  _objc_loadWeakRetained();
  lVar6 = lVar47;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar50;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcc660();
  _objc_release(lVar2);
  _objc_release(lVar50);
  _objc_release(lVar6);
  _objc_release(lVar47);
  lVar2 = lVar5;
  func_0x00010bf1acc0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_105eca880(lVar3,lVar2);
  _objc_release(lVar2);
  FUN_105eca8f0(lVar3);
  puVar1 = PTR_PTR_1126b1f08;
  uVar46 = *(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
  puVar43 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf469c0(0,uVar46,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar44);
  _objc_release(puVar43);
  puVar43 = PTR_PTR_1126b1f18;
  _objc_alloc(PTR_PTR_1126b1f18);
  func_0x00010bfdf380(PTR_PTR_1126b1f10);
  func_0x00010c0fd340();
  func_0x00010c01ed80();
  lVar2 = param_2 + _DAT_1127397f0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar50;
  func_0x00010bf59b80(0x405e000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_1127397f4;
  uVar46 = *(undefined8 *)(param_2 + lVar51);
  *(long *)(param_2 + lVar51) = lVar6;
  _objc_release(uVar46);
  _objc_release(lVar50);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_2);
  uVar45 = *(undefined8 *)(param_2 + lVar51);
  func_0x00010c0ba2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_80);
  uVar46 = uVar45;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_2 + _DAT_1127397f8);
  *(undefined8 *)(param_2 + _DAT_1127397f8) = uVar46;
  _objc_release(uVar48);
  _objc_release(uVar45);
  uVar46 = *(undefined8 *)(param_2 + lVar52);
  param_2 = param_2 + _DAT_112739780;
  _objc_loadWeakRetained();
  lVar2 = param_2;
  func_0x00010c08bda0();
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  FUN_105ecfef8(uVar46,lVar2,1);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar43);
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 105ec9874; end: 105ec98bb;  */

void FUN_105ec9874(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be266c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ec98bc; end: 105ec9a23; -[SCMapBitmojiTrayEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec98bc(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  if (*(long *)(param_2 + _DAT_11273977c) != 0) {
    FUN_105ed01e0(*(long *)(param_2 + _DAT_11273977c),(long)(param_1 * 1000.0));
  }
  if ((*(long *)(param_2 + _DAT_1127397f4) == 0) ||
     (lVar6 = (long)_DAT_1127397fc, *(long *)(param_2 + lVar6) != 0)) {
    puStack_58 = PTR_PTR_1126edcb0;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar1;
    _objc_release(uVar5);
    lVar2 = param_2 + _DAT_1127397f0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0d26a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed20();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c117720(*(undefined8 *)(param_2 + lVar6));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ec9a24; end: 105ec9a9b; -[SCMapBitmojiTrayEntryPoint _handleBitmojiTrayEvent:] */

void FUN_105ec9a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ec9a9c;
  puStack_20 = &UNK_1108484c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ec9af0;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c1800(param_3,param_2,0,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105ec9a9c; end: 105ec9aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec9a9c(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be8dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s__removeTray_1125810a0);
    return;
  }
  lVar1 = (long)_DAT_112739774;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + lVar1) & 1) == 0) {
    func_0x00010bdcae40();
    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar1) = 1;
  }
  return;
}



/* Entry: 105ec9af0; end: 105ec9b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec9af0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127397fc) == 0) {
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112739780;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8880();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bfaf680();
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127397f4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127397f4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105ec9b7c; end: 105ec9c1f; -[SCMapBitmojiTrayEntryPoint _removeTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec9b7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_1127397f4) != 0) {
    param_1 = param_1 + _DAT_1127397f0;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0d26a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed20();
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ec9c20; end: 105ec9c77; -[SCMapBitmojiTrayEntryPoint _animateMapReaction] */

void FUN_105ec9c20(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ec9c78;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105ec9c78; end: 105ec9e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec9c78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112739780;
  lVar1 = *(long *)(param_1 + 0x20) + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c120ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20) + lVar5;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c120ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112739800;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa4540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20) + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010c120ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8780(lVar3,param_2,lVar4,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112739800;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa4540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20) + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar4 = lVar5;
    func_0x00010c120ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f87a0(lVar3,param_2,lVar4,0);
  }
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ec9e14; end: 105ec9e17; -[SCMapBitmojiTrayEntryPoint mapBitmojiTrayWantsToDismiss:] */

void FUN_105ec9e14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTray_1125810a0);
  return;
}



/* Entry: 105ec9e18; end: 105ec9f73; -[SCMapBitmojiTrayEntryPoint mapBitmojiTrayShouldPresentAvatarBuilder:bitmojiAvatarID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec9e18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  lVar2 = param_4;
  func_0x00010c08fa60();
  _objc_release(param_4);
  if (lVar2 == 0) {
    puVar5 = PTR_PTR_1126af678;
    _objc_alloc(PTR_PTR_1126af678);
    func_0x00010c04a940();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112739804),param_2,puVar5);
  }
  else {
    puVar5 = PTR_PTR_1126afdc8;
    _objc_opt_new(PTR_PTR_1126afdc8);
    func_0x00010c2ae460();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112739808;
    _objc_loadWeakRetained(lVar2);
    puVar3 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf23c20(lVar2,param_2,puVar1,puVar3,param_1,7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273980c),param_2,lVar4);
    _objc_release(lVar4);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ec9f74; end: 105eca063; -[SCMapBitmojiTrayEntryPoint mapBitmojiTrayWantsToRemoveStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ec9f74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_1127397a4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf00500(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c420(lVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112739780;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8860();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105eca064; end: 105eca227; -[SCMapBitmojiTrayEntryPoint mapBitmojiTray:didSetStatusWithSticker:statusId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eca064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_1127397a4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0b9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112739784;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd60(lVar3,param_2,param_5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar7 = param_1 + _DAT_1127397d0;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar7 = uVar9;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfcc660();
  _objc_release(uVar7);
  if ((uVar8 & 1) == 0) {
    param_1 = param_1 + _DAT_112739780;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8860();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(uVar9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105eca228; end: 105eca297; -[SCMapBitmojiTrayEntryPoint mapBitmojiTray:didSelectFriendCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eca228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112739780;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8840();
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eca298; end: 105eca2ef; -[SCMapBitmojiTrayEntryPoint mapUpsellWantsToDismissTray] */

void FUN_105eca298(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105eca2f0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105eca2f0; end: 105eca2f7;  */

void FUN_105eca2f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeTray_1125810a0);
  return;
}



/* Entry: 105eca2f8; end: 105eca2fb; -[SCMapBitmojiTrayEntryPoint bitmojiAvatarBuilderCompleted] */

void FUN_105eca2f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be262b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAvatarBuilderDismissed_112567248);
  return;
}



/* Entry: 105eca2fc; end: 105eca2ff; -[SCMapBitmojiTrayEntryPoint bitmojiAvatarBuilderCancelled] */

void FUN_105eca2fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be262b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAvatarBuilderDismissed_112567248);
  return;
}



/* Entry: 105eca300; end: 105eca34f; -[SCMapBitmojiTrayEntryPoint bitmojiAvatarBuilderFailedWithError:] */

void FUN_105eca300(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  func_0x00010be262a0();
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105eca350; end: 105eca3db; -[SCMapBitmojiTrayEntryPoint _handleAvatarBuilderDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eca350(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273980c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = (long)_DAT_112739804;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105eca3dc; end: 105eca5b7; -[SCMapBitmojiTrayEntryPoint logMapStatusOpenWithStatusOptionsCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eca3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = (long)_DAT_112739780;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c08bda0();
  if (lVar8 == 0xb3) {
    lVar2 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c247b60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c2827c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    lVar8 = 0;
  }
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127397d0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_105eca99c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112739794);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar1 = lVar7;
  func_0x00010c08bda0();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273978c);
  param_1 = param_1 + _DAT_1127397a8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c080120();
  func_0x00010c0b9ec0(uVar9,param_2,lVar1,uVar10,0,param_3,lVar8,lVar6,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105eca5b8; end: 105eca5ef; -[SCMapBitmojiTrayEntryPoint bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_105eca5b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010be262a0();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTray_1125810a0);
    return;
  }
  return;
}



/* Entry: 105eca5f0; end: 105eca853; -[SCMapBitmojiTrayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eca5f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127397c0,0);
  _objc_storeStrong(param_1 + _DAT_112739804,0);
  _objc_storeStrong(param_1 + _DAT_1127397b4,0);
  _objc_storeStrong(param_1 + _DAT_1127397ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127397b0);
  _objc_destroyWeak(param_1 + _DAT_1127397d8);
  _objc_destroyWeak(param_1 + _DAT_1127397e8);
  _objc_destroyWeak(param_1 + _DAT_1127397e4);
  _objc_destroyWeak(param_1 + _DAT_1127397e0);
  _objc_destroyWeak(param_1 + _DAT_1127397d4);
  _objc_destroyWeak(param_1 + _DAT_112739800);
  _objc_destroyWeak(param_1 + _DAT_1127397c8);
  _objc_storeStrong(param_1 + _DAT_11273980c,0);
  _objc_destroyWeak(param_1 + _DAT_112739808);
  _objc_destroyWeak(param_1 + _DAT_1127397dc);
  _objc_destroyWeak(param_1 + _DAT_112739810);
  _objc_destroyWeak(param_1 + _DAT_1127397cc);
  _objc_destroyWeak(param_1 + _DAT_1127397bc);
  _objc_destroyWeak(param_1 + _DAT_1127397b8);
  _objc_destroyWeak(param_1 + _DAT_1127397a8);
  _objc_destroyWeak(param_1 + _DAT_112739788);
  _objc_destroyWeak(param_1 + _DAT_1127397f0);
  _objc_destroyWeak(param_1 + _DAT_1127397a4);
  _objc_destroyWeak(param_1 + _DAT_1127397a0);
  _objc_destroyWeak(param_1 + _DAT_112739790);
  _objc_destroyWeak(param_1 + _DAT_11273979c);
  _objc_destroyWeak(param_1 + _DAT_112739798);
  _objc_destroyWeak(param_1 + _DAT_1127397d0);
  _objc_destroyWeak(param_1 + _DAT_1127397c4);
  _objc_destroyWeak(param_1 + _DAT_112739784);
  _objc_destroyWeak(param_1 + _DAT_112739780);
  _objc_storeStrong(param_1 + _DAT_11273977c,0);
  _objc_storeStrong(param_1 + _DAT_112739778,0);
  _objc_storeStrong(param_1 + _DAT_112739794,0);
  _objc_storeStrong(param_1 + _DAT_1127397fc,0);
  _objc_storeStrong(param_1 + _DAT_1127397ec,0);
  _objc_storeStrong(param_1 + _DAT_1127397f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127397f4,0);
  return;
}



/* Entry: 105eca854; end: 105eca87f;  */

void FUN_105eca854(void)

{
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eca880; end: 105eca8ef;  */

undefined8 FUN_105eca880(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_1 & 1) == 0) {
    if (lVar1 != 0) {
      uVar2 = 0;
      goto LAB_105eca8d0;
    }
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uVar2 = 1;
      goto LAB_105eca8d0;
    }
  }
  else if (lVar1 != 0) {
    uVar2 = 2;
    goto LAB_105eca8d0;
  }
  uVar2 = 3;
LAB_105eca8d0:
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105eca8f0; end: 105eca99b;  */

double FUN_105eca8f0(int param_1)

{
  undefined *puVar1;
  double dVar2;
  double in_d3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if (param_1 < 2) {
    if (param_1 == 0) {
      dVar2 = 0.44999998807907104;
    }
    else {
      if (param_1 != 1) {
        return 0.0;
      }
      dVar2 = 0.375;
    }
  }
  else if (param_1 == 2) {
    dVar2 = 0.550000011920929;
  }
  else {
    if (param_1 != 3) {
      return 0.0;
    }
    dVar2 = 0.48500001430511475;
  }
  return (900.0 / in_d3) * dVar2;
}



/* Entry: 105eca99c; end: 105ecaa13;  */

undefined ** FUN_105eca99c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c22c5c0();
  if (lVar2 - 1U < 3) {
    ppuVar3 = (undefined **)(&PTR_PTR_1108f3338)[lVar2 - 1U];
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  lVar2 = param_1;
  func_0x00010bfcc660();
  _objc_release(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e30258;
  if ((int)lVar2 == 0) {
    ppuVar1 = ppuVar3;
  }
  return ppuVar1;
}



/* Entry: 105ecaa14; end: 105ecb83b; -[SCMapBitmojiTrayViewController initWithDelegate:checkinRequestService:checkInOptionFetcher:mapLoggerEventSender:valdiRuntimeProvider:bitmojiAvatarId:currentStickerID:statusSessionId:loggingDelegate:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:homeWorkSettingsScopeExposer:featureSettingsService:userInfoProvider:mapPlusCarsAndPetsScopeExposer:circumstanceEngine:homeWorkDataProvider:mapQuickShareProvider:sharingPreferencesProvider:meTrayUpsellProvider:shareLocationFlowFactoryServices:bitmojiAvatarProvider:bitmojiTrayGrapheneMetric:connectedMusicProvider:nowPlayingService:musicTweaksProvider:customizationTrayFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ecaa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
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
  _objc_retain();
  puStack_80 = PTR_PTR_1126edcb8;
  puVar2 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar2);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112739814,param_4);
    lVar15 = (long)_DAT_112739818;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_6;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_11273981c;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_5;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739820;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_7;
    _objc_release(uVar3);
    lVar16 = (long)_DAT_112739824;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_8;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739828;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_9;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_11273982c;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_10;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112739830,param_12);
    lVar17 = (long)_DAT_112739834;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar17);
    *(undefined8 *)((long)puVar2 + lVar17) = param_18;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739838;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_19;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_11273983c;
    _objc_retain(param_25);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_25;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739840;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_13;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739844;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_14;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739848;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_15;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_11273984c;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_16;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739850;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_17;
    _objc_release(uVar3);
    lVar15 = (long)_DAT_112739854;
    _objc_retain(param_27);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
    *(undefined8 *)((long)puVar2 + lVar15) = param_27;
    _objc_release(uVar3);
    uVar3 = param_20;
    func_0x000109021cc4();
    lVar15 = (long)_DAT_112739858;
    *(char *)((long)puVar2 + lVar15) = (char)uVar3;
    lVar18 = (long)_DAT_11273985c;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_21;
    _objc_release(uVar3);
    lVar18 = (long)_DAT_112739860;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = param_20;
    _objc_release(uVar3);
    lVar19 = (long)_DAT_112739864;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar19);
    *(undefined8 *)((long)puVar2 + lVar19) = param_22;
    _objc_release(uVar3);
    lVar21 = (long)_DAT_112739868;
    _objc_retain(param_23);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined8 *)((long)puVar2 + lVar21) = param_23;
    _objc_release(uVar3);
    lVar23 = (long)_DAT_11273986c;
    _objc_retain(param_24);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar23);
    *(undefined8 *)((long)puVar2 + lVar23) = param_24;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar23);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219dc0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar23);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2700();
    _objc_release(uVar3);
    lVar19 = (long)_DAT_112739870;
    _objc_retain(param_26);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar19);
    *(undefined8 *)((long)puVar2 + lVar19) = param_26;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_112739874;
    _objc_retain(param_28);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_28;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_112739878;
    _objc_retain(param_30);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_30;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_11273987c;
    _objc_retain(param_29);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_29;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_112739880;
    _objc_retain(param_31);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_31;
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    lVar22 = (long)_DAT_112739884;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar22);
    *(undefined **)((long)puVar2 + lVar22) = puVar8;
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    lVar20 = (long)_DAT_112739888;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined **)((long)puVar2 + lVar20) = puVar8;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273988c) = param_11;
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112739890) = param_1;
    func_0x00010be66d40(puVar2);
    _objc_initWeak(auStack_90,puVar2);
    puVar4 = PTR_PTR_1126c5948;
    _objc_alloc(PTR_PTR_1126c5948);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105ecb83c;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c050860(puVar4);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar21);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bfcc660();
    uVar1 = (undefined4)uVar6;
    FUN_105eca880();
    *(undefined4 *)((long)puVar2 + (long)_DAT_112739894) = uVar1;
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar23);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c28eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_112739898;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined8 *)((long)puVar2 + lVar21) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126c5950;
    _objc_alloc(PTR_PTR_1126c5950);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar21);
    func_0x00010c272120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0ae0(puVar7);
    _objc_release(uVar3);
    func_0x00010beb6060(puVar2);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202220(puVar7);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a000(puVar7);
    _objc_release(puVar8);
    func_0x00010c1fb480(puVar7);
    func_0x00010beb64e0(puVar2);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201f40(puVar7);
    _objc_release(puVar8);
    puVar9 = puVar2;
    func_0x00010be21da0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6ba0(puVar7);
    _objc_release(puVar9);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105ecb940;
    puStack_c8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c212040(puVar4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e800(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar22);
    func_0x00010c272120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d600(puVar4);
    _objc_release(uVar3);
    func_0x00010c1c3f00(puVar4);
    func_0x00010c1c76c0(puVar4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    func_0x00010c272120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c3f40(puVar4);
    _objc_release(uVar3);
    uVar3 = param_13;
    func_0x00010bfa2420(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0b8740();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_13;
    func_0x00010bfa1900(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0b8740();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x000106c69040(uVar5,uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de3c0(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar9 = puVar2;
    func_0x00010be20d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce8e0(puVar4);
    _objc_release(puVar13);
    _objc_release(puVar9);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105ecb96c;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c1d2920(puVar4);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000109021d88(*(undefined8 *)((long)puVar2 + lVar18));
    func_0x00010c0df6e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181120(puVar4);
    _objc_release(puVar8);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105ecb998;
    puStack_118 = &UNK_1108f3350;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010c1e1100(puVar4);
    func_0x00010be66320(puVar2);
    if (*(char *)((long)puVar2 + lVar15) == '\x01') {
      puVar8 = PTR_PTR_1126ae820;
      _objc_opt_new();
      lVar15 = (long)_DAT_11273989c;
      uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
      *(undefined **)((long)puVar2 + lVar15) = puVar8;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)((long)puVar2 + lVar15);
      func_0x00010c272120(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb120(puVar4);
      _objc_release(uVar3);
      func_0x00010be13ca0(puVar2);
    }
    puVar8 = PTR_PTR_1126c5958;
    _objc_alloc();
    uVar6 = *(undefined8 *)((long)puVar2 + lVar16);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127398a0);
    *(undefined **)((long)puVar2 + (long)_DAT_1127398a0) = puVar8;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127398a4);
    *(undefined **)((long)puVar2 + (long)_DAT_1127398a4) = puVar8;
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_138,auStack_90);
    uVar6 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127398a8);
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127398a8) = uVar6;
    _objc_release(uVar14);
    _objc_release(uVar3);
    _objc_release(uVar5);
    func_0x00010c189400(puVar2);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 105ecb83c; end: 105ecb8c3;  */

void FUN_105ecb83c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105ecb8c4;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_1);
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105ecb8c4; end: 105ecb93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecb8c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112739814;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0b88c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


