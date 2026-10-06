/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f7e0c4; end: 103f7e1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7e0c4(double param_1,double param_2)

{
  double *pdVar1;
  bool bVar2;
  long unaff_x20;
  bool bStack_51;
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_collectionViewContentSize_1125adb90);
  pdVar1 = (double *)(unaff_x20 + _DAT_113036d28);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if (bVar2) {
    FUN_103f7ec8c();
    bStack_51 = 0.0 < param_1;
  }
  else {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_prepareLayout_112620088);
    if (param_1 <= 0.0) {
      FUN_103f7ec8c();
      bStack_51 = false;
    }
    else {
      FUN_103f7e1a4();
      FUN_103f7ec8c();
      bStack_51 = true;
    }
  }
  func_0x0001007d6d78(&bStack_51);
  return;
}



/* Entry: 103f7e1a4; end: 103f7e31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7e1a4(double param_1)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = unaff_x20;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    return;
  }
  _objc_retain();
  func_0x00010bf4cdc0();
  pdVar1 = (double *)(unaff_x20 + _DAT_113036d28);
  dVar5 = *pdVar1;
  if (dVar5 <= 0.0) {
LAB_103f7e240:
    func_0x00010bf4cdc0(lVar3);
    dVar7 = *pdVar1;
    if ((dVar7 != 0.0) || (dVar4 = pdVar1[1], dVar6 = dVar5, dVar4 != 0.0)) {
      dVar4 = param_1;
      if (param_1 < 0.0) {
        dVar4 = param_1 + dVar7 * ABS((double)(long)(dVar7 / param_1));
      }
      _fmod(dVar4,dVar7);
      dVar6 = dVar7 * 250.0;
      param_1 = dVar6 + dVar4;
    }
    func_0x00010bf4cdc0(lVar3);
    if ((dVar4 != param_1) || (dVar6 != dVar5)) {
      func_0x000107c53848(param_1,dVar5,lVar3);
      _objc_release(lVar3);
      func_0x000107c4abfc(lVar3);
      goto LAB_103f7e2fc;
    }
  }
  else {
    param_1 = (double)(long)(param_1 / dVar5);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7e318);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7e31c);
      (*pcVar2)();
    }
    dVar5 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7e320);
      (*pcVar2)();
    }
    if ((long)param_1 - 499U < 0xfffffffffffffe0f) goto LAB_103f7e240;
  }
  _objc_release(lVar3);
LAB_103f7e2fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103f7e320; end: 103f7e347; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout prepareLayout] */

void FUN_103f7e320(undefined8 param_1)

{
  _objc_retain();
  FUN_103f7e0c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f7e348; end: 103f7e36b; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f7e348(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = ((double *)(param_1 + _DAT_113036d28))[1];
  auVar1._0_8_ = *(double *)(param_1 + _DAT_113036d28) * 500.0;
  return auVar1;
}



/* Entry: 103f7e36c; end: 103f7e533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f7e36c(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  double *pdVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pdVar1 = (double *)(unaff_x20 + _DAT_113036d28);
  dVar6 = *pdVar1;
  if (dVar6 <= 0.0) {
    lVar4 = 0;
  }
  else {
    dVar5 = (double)(long)(param_1 / dVar6);
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f7e528);
      (*pcVar3)();
    }
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f7e52c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f7e534);
      (*pcVar3)();
    }
    lVar4 = (long)dVar5;
  }
  if ((dVar6 != 0.0) || (pdVar1[1] != 0.0)) {
    if (param_1 < 0.0) {
      param_1 = param_1 + dVar6 * ABS((double)(long)(dVar6 / param_1));
    }
    _fmod(param_1,dVar6);
    param_1 = dVar6 * 0.0 + param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  dVar6 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  if (*pdVar1 < dVar6) {
    dVar6 = param_1;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    dVar7 = *pdVar1;
    dVar5 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f7e530);
      (*pcVar3)();
    }
    FUN_103f7e8c0(0,0,dVar6 - dVar7,dVar5,lVar4 + 1);
    FUN_103f7eba0();
    param_3 = param_3 - (dVar6 - dVar7);
  }
  FUN_103f7e8c0(param_1,param_2,param_3,param_4,lVar4);
  FUN_103f7eba0();
  return puVar2;
}



/* Entry: 103f7e534; end: 103f7e623; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout layoutAttributesForElementsInRect:] */

void FUN_103f7e534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain();
  lVar1 = param_5;
  FUN_103f7e36c(param_1,param_2,param_3,param_4);
  if (lVar1 == 0) {
    _objc_release(param_5);
    lVar4 = 0;
  }
  else {
    lVar4 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      _objc_release(param_5);
    }
    else {
      lVar2 = lVar4;
      FUN_103f7d918();
      FUN_103f7f2dc(lVar1,lVar4);
      _objc_release(param_5);
      _objc_release(lVar4);
      _swift_release(lVar2);
    }
    uVar3 = 0;
    func_0x000101005d6c(0);
    lVar4 = lVar1;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar3);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 103f7e624; end: 103f7e813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f7e624(double param_1)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF();
  puVar4 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar4,PTR_s_layoutAttributesForItemAtIndexPa_112600c70,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (puVar4 != (undefined1 *)0x0) {
    lVar3 = unaff_x20;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bf4cdc0();
      pdVar1 = (double *)(unaff_x20 + _DAT_113036d28);
      if (0.0 < *pdVar1) {
        dVar7 = (double)(long)(param_1 / *pdVar1);
        if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7e80c);
          (*pcVar2)();
        }
        if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7e810);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7e814);
          (*pcVar2)();
        }
      }
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_90);
      _swift_unknownObjectRelease(puVar5);
      uVar6 = 0;
      func_0x000101005d6c(0);
      _swift_dynamicCast(&uStack_98,auStack_90,PTR___sypN_11034f1a8 + 8,uVar6,7);
      func_0x000107c438d4(puVar4);
      if ((*pdVar1 != 0.0) || (pdVar1[1] != 0.0)) {
        _fmod();
      }
      func_0x000107c54b80(uStack_98);
      _objc_release(puVar4);
      _objc_release(lVar3);
      return uStack_98;
    }
    _objc_release(puVar4);
  }
  return 0;
}



/* Entry: 103f7e814; end: 103f7e8bf; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout layoutAttributesForItemAtIndexPath:] */

void FUN_103f7e814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar3,param_3);
  _objc_retain(param_1);
  puVar2 = puVar3;
  FUN_103f7e624(puVar3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103f7e8c0; end: 103f7eb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103f7e8c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined *puStack_a8;
  
  _swift_getObjectType();
  pdVar1 = (double *)(unaff_x20 + _DAT_113036d28);
  dVar12 = *pdVar1;
  if ((dVar12 != 0.0) || (pdVar1[1] != 0.0)) {
    if (param_1 < 0.0) {
      param_1 = param_1 + dVar12 * ABS((double)(long)(dVar12 / param_1));
    }
    _fmod(param_1,dVar12);
    param_1 = dVar12 * 0.0 + param_1;
  }
  puVar10 = &stack0xffffffffffffff60;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar10,
                      PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x000101005d6c(0);
    puVar6 = puVar10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar10,uVar5);
    _objc_release(puVar10);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar10 = puVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar10 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar6);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a8 = puVar9;
    FUN_103f7ef70(0,(ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar3 = PTR___sypN_11034f1a8;
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f7eba0);
      (*pcVar4)();
    }
    puVar11 = (undefined *)0x0;
    do {
      puVar9 = puStack_a8;
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(puVar6 + (long)puVar11 * 8 + 0x20);
        _objc_retain(puVar7);
      }
      else {
        puVar7 = puVar11;
        func_0x00010100fb8c(puVar11,puVar6);
      }
      puVar8 = puVar7;
      func_0x00010bf51e00();
      __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_c8);
      _swift_unknownObjectRelease(puVar8);
      uVar5 = 0;
      func_0x000101005d6c(0);
      _swift_dynamicCast(&uStack_d0,auStack_c8,puVar3 + 8,uVar5,7);
      uVar5 = uStack_d0;
      func_0x000107c438d4(puVar7);
      dVar12 = *pdVar1;
      if ((dVar12 != 0.0) || (pdVar1[1] != 0.0)) {
        if (param_1 < 0.0) {
          param_1 = param_1 + dVar12 * ABS((double)(long)(dVar12 / param_1));
        }
        _fmod();
        param_1 = dVar12 * (double)param_5 + param_1;
      }
      func_0x000107c54b80(uVar5);
      _objc_release(puVar7);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puStack_a8 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_103f7ef70(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      puVar9 = puStack_a8;
      puVar11 = puVar11 + 1;
      *(ulong *)(puStack_a8 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_a8 + uVar2 * 8 + 0x20) = uVar5;
    } while (puVar10 != puVar11);
    _swift_bridgeObjectRelease(puVar6);
  }
  return puVar9;
}



/* Entry: 103f7eba0; end: 103f7ec8b;  */

void FUN_103f7eba0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_103f7eec0(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_103f7f0b0(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ec88);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ec8c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ec84);
  (*pcVar1)();
}



/* Entry: 103f7ec8c; end: 103f7ed5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ec8c(double param_1,double param_2)

{
  double *pdVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  
  lVar4 = unaff_x20;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    pdVar1 = (double *)(unaff_x20 + _DAT_113036d20);
    dVar7 = *pdVar1;
    cVar2 = *(char *)(pdVar1 + 1);
    func_0x00010bf20c00();
    _CGRectGetWidth();
    *pdVar1 = param_1;
    *(undefined1 *)(pdVar1 + 1) = 0;
    bVar3 = true;
    if ((cVar2 != '\x01') && (bVar3 = false, !NAN(dVar7) && !NAN(param_1))) {
      bVar3 = dVar7 == param_1;
    }
    if (!bVar3) {
      lVar5 = lVar4;
      dVar6 = param_1;
      _objc_retain(lVar4);
      func_0x00010bf4d5e0();
      if ((dVar6 != 0.0) || (param_2 != 0.0)) {
        dVar7 = dVar7 - param_1;
        dVar6 = dVar7 * 0.5;
        func_0x00010bf4cdc0(lVar5);
        func_0x000107c53848(dVar6 + dVar7,lVar5);
      }
      _objc_release(lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 103f7ed60; end: 103f7edbf; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout init] */

void FUN_103f7ed60(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCycledCarouselCollectionLayout",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7ed8c);
  (*pcVar1)();
}



/* Entry: 103f7edc0; end: 103f7ee17; -[_TtC21LensCarouselPresenter34LensCycledCarouselCollectionLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7edc0(long param_1)

{
  func_0x000100870a64(param_1 + _DAT_113036d10);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113036d18));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113036d30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113036d38));
  return;
}



/* Entry: 103f7ee18; end: 103f7ee53;  */

void FUN_103f7ee18(void)

{
  _objc_opt_self(&PTR_PTR_11296e738);
  return;
}



/* Entry: 103f7ee54; end: 103f7ee6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f7ee54(void)

{
  long *unaff_x20;
  
  return *(undefined1 (*) [16])(*unaff_x20 + _DAT_113036d28);
}



/* Entry: 103f7ee6c; end: 103f7eebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7ee6c(void)

{
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  return;
}



/* Entry: 103f7eec0; end: 103f7ef6f;  */

void FUN_103f7eec0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  FUN_103f89844();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 103f7ef70; end: 103f7ef8b;  */

void FUN_103f7ef70(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103f7ef8c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103f7ef8c; end: 103f7f0af;  */

undefined * FUN_103f7ef8c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7f0b0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000103f8974c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000101005d6c(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103f7f0b0; end: 103f7f207;  */

ulong FUN_103f7f0b0(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7f208);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7f1fc);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000101005d6c(0);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7f200);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f7f204);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            _objc_retain(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        _objc_retain(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x00010100fb8c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 103f7f208; end: 103f7f2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7f208(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 uStack_31;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036d20);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_113036d30;
  uStack_31 = 0;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  _swift_allocObject();
  puVar4 = &uStack_31;
  func_0x00010042e6a0();
  *(undefined1 **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113036d38) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "LensCarouselPresenter/LensCycledCarouselCollectionLayout.swift",0x3e,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103f7f2dc);
  (*pcVar3)();
}



/* Entry: 103f7f2dc; end: 103f7f85f;  */

void FUN_103f7f2dc(double param_1,ulong *param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  undefined8 *puVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulong *puStack_1b0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  double dStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar4 = 0;
  __s10Foundation9IndexPathVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = (long)&puStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x00010bf4cdc0(param_3);
  dVar22 = param_1;
  func_0x000107c438d4(param_3);
  _CGRectGetWidth();
  func_0x00010bf4cdc0(param_3);
  func_0x000107c438d4(param_3);
  _CGRectGetHeight();
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar15 = *(ulong **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (ulong *)((ulong)param_2 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < param_2) {
      puVar15 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar15 != (ulong *)0x0) {
    if ((long)puVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f7f860);
      (*pcVar2)();
    }
    puVar16 = (ulong *)0x0;
    param_1 = param_1 + dVar22 * 0.5;
    uVar12 = (ulong)param_2 & 0xc000000000000001;
    puStack_1b0 = param_2;
    do {
      if (uVar12 == 0) {
        puVar5 = (ulong *)param_2[(long)puVar16 + 4];
        _objc_retain();
      }
      else {
        puVar5 = puVar16;
        func_0x00010100fb8c(puVar16,param_2);
      }
      puVar6 = puVar5;
      func_0x000107c502fc();
      if (puVar6 == (ulong *)0x0) {
        FUN_103f97adc();
        puVar7 = puVar5;
        _swift_dynamicCastClass(puVar5,puVar6);
        if (puVar7 != (ulong *)0x0) {
          lVar13 = *(long *)(unaff_x20 + 0x130);
          lVar8 = lVar13;
          if (lVar13 == 0) {
            lVar8 = unaff_x20 + 0x138;
            _swift_unknownObjectWeakLoadStrong();
            if (lVar8 != 0) goto LAB_103f7f4fc;
            uStack_d8 = *(undefined8 *)(unaff_x20 + 0x60);
            dStack_e0 = *(double *)(unaff_x20 + 0x58);
            dStack_c8 = *(double *)(unaff_x20 + 0x70);
            dStack_d0 = *(double *)(unaff_x20 + 0x68);
            uStack_b8 = *(undefined8 *)(unaff_x20 + 0x80);
            uStack_c0 = *(undefined8 *)(unaff_x20 + 0x78);
            uStack_b0 = *(undefined8 *)(unaff_x20 + 0x88);
            uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
            uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
            _objc_retain(puVar5);
            func_0x000100870190(&uStack_f0,&uStack_140);
LAB_103f7f66c:
            lVar13 = unaff_x20 + 0x138;
            uStack_190 = uStack_f0;
            uStack_188 = uStack_e8;
            dStack_180 = dStack_e0;
            uStack_178 = uStack_d8;
            dStack_170 = dStack_d0;
            dStack_168 = dStack_c8;
            uStack_160 = uStack_c0;
            uStack_158 = uStack_b8;
            uStack_150 = uStack_b0;
            _swift_unknownObjectWeakLoadStrong();
            if (lVar13 != 0) {
              dStack_118 = dStack_168;
              dStack_120 = dStack_170;
              uStack_108 = uStack_158;
              uStack_110 = uStack_160;
              uStack_100 = uStack_150;
              dStack_130 = dStack_180;
              uStack_128 = uStack_178;
              uStack_140 = uStack_190;
              uStack_138 = uStack_188;
              goto LAB_103f7f6b4;
            }
            iVar3 = 0;
            puVar11 = &uStack_190;
          }
          else {
LAB_103f7f4fc:
            _swift_unknownObjectRetain_n(lVar13,2);
            puVar6 = puVar5;
            _objc_retain(puVar5);
            _swift_unknownObjectRetain(lVar8);
            func_0x000107c45348(puVar6);
            _objc_retainAutoreleasedReturnValue();
            __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
                      (lVar14);
            _objc_release(puVar6);
            __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF();
            (**(code **)(lVar10 + 8))(lVar14,lVar4);
            lVar9 = lVar8;
            func_0x000107c4a79c(lVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            func_0x000103f9cee8(&uStack_f0,lVar9);
            _swift_unknownObjectRelease_n(lVar8,2);
            if (lVar13 == 0) goto LAB_103f7f66c;
            dStack_118 = dStack_c8;
            dStack_120 = dStack_d0;
            uStack_108 = uStack_b8;
            uStack_110 = uStack_c0;
            uStack_100 = uStack_b0;
            dStack_130 = dStack_e0;
            uStack_128 = uStack_d8;
            uStack_140 = uStack_f0;
            uStack_138 = uStack_e8;
LAB_103f7f6b4:
            puVar6 = puVar5;
            func_0x000107c45348(puVar5);
            _objc_retainAutoreleasedReturnValue();
            __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
                      (lVar14);
            _objc_release(puVar6);
            __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF();
            (**(code **)(lVar10 + 8))(lVar14,lVar4);
            lVar8 = lVar13;
            func_0x000107c5ab30();
            iVar3 = (int)lVar8;
            _swift_unknownObjectRelease(lVar13);
            _objc_release(puVar6);
            puVar11 = &uStack_140;
          }
          dStack_c8 = (double)puVar11[5];
          dStack_d0 = (double)puVar11[4];
          uStack_b8 = puVar11[7];
          uStack_c0 = puVar11[6];
          uStack_b0 = puVar11[8];
          uStack_e8 = puVar11[1];
          uStack_f0 = *puVar11;
          uStack_d8 = puVar11[3];
          dVar17 = (double)puVar11[2];
          dStack_e0 = dVar17;
          func_0x00010bf345e0(puVar5);
          param_2 = puStack_1b0;
          puVar1 = PTR__swift_isaMask_11034f488;
          dVar19 = *(double *)(unaff_x20 + 0x10);
          dVar18 = *(double *)(unaff_x20 + 0x18);
          dVar21 = ABS(dVar17 - param_1);
          dVar22 = 0.0;
          if (dVar21 < dVar19) {
            dVar22 = (dVar19 - dVar21) / dVar19;
          }
          dVar17 = dVar17 - param_1;
          dVar20 = dStack_c8 + (dStack_d0 + -1.0) * dVar19 * 0.5;
          dVar21 = -(dVar20 * (1.0 - dVar22));
          if (0.0 <= dVar17) {
            dVar21 = dVar20 * (1.0 - dVar22);
          }
          if (iVar3 == 0) {
            dVar19 = 1.0;
            dVar17 = (dStack_d0 + -1.0) * dVar22 + 1.0;
          }
          else {
            dVar19 = dVar19 + dVar18;
            dVar22 = 0.0;
            if (ABS(dVar17 + dVar21) < dVar19) {
              dVar20 = ABS(dVar17 + dVar21) + (dVar19 + dVar19) / -3.0;
              dVar22 = 1.0;
              if (0.0 < dVar20) {
                dVar22 = dVar20 / (dVar19 / -3.0) + 1.0;
              }
            }
            dVar19 = 1.0 - dVar22;
            dVar20 = -(dVar18 * dVar22);
            if (0.0 <= dVar17) {
              dVar20 = dVar18 * dVar22;
            }
            dVar17 = dVar19 * 0.4 + 0.6;
            dVar21 = dVar21 + dVar20;
          }
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar7) + 0x90))(dVar17);
          (**(code **)((*(ulong *)puVar1 & *puVar7) + 0xa8))(dVar21);
          (**(code **)((*(ulong *)puVar1 & *puVar7) + 0x78))(dVar22);
          (**(code **)((*(ulong *)puVar1 & *puVar7) + 0xc0))(dVar19);
          FUN_103f7f8b4(&uStack_f0);
          _objc_release(puVar5);
        }
      }
      _objc_release(puVar5);
      puVar16 = (ulong *)((long)puVar16 + 1);
    } while (puVar15 != puVar16);
  }
  return;
}



/* Entry: 103f7f860; end: 103f7f8b3;  */

void FUN_103f7f860(void)

{
  long unaff_x20;
  
  func_0x000100870a64(unaff_x20 + 0x10);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000103f7d8f4(unaff_x20 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f7f8b4; end: 103f7f8e7;  */

undefined8 FUN_103f7f8b4(undefined8 param_1)

{
  FUN_103f99d74();
  return param_1;
}



/* Entry: 103f7f8e8; end: 103f7f8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f7f8e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113036e70;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113036e70);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 103f7f8f4; end: 103f7fa4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f7f8f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113036e78;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113036e78);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    func_0x000107c453e4();
    puVar2 = puVar3;
    func_0x000107c4aba4();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c562fc();
    _objc_release(puVar2);
    func_0x000107c5a050(puVar3,param_2,0);
    func_0x000107c55b3c(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar3);
    func_0x000107c55424(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 103f7fa50; end: 103f7fa5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f7fa50(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113036e88;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113036e88);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 103f7fa5c; end: 103f7fce3;  */

undefined * FUN_103f7fa5c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar1 = *(undefined **)(unaff_x20 + lVar4);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined **)(unaff_x20 + lVar4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  return puVar2;
}



/* Entry: 103f7fce4; end: 103f7fd03; -[_TtC21LensCarouselPresenter8LensCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7fce4(long param_1)

{
  _swift_unknownObjectWeakLoadStrong(param_1 + _DAT_113036eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7fd04; end: 103f7fd17; -[_TtC21LensCarouselPresenter8LensCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7fd04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_113036eb0,param_3);
  return;
}



/* Entry: 103f7fd18; end: 103f7fd37; -[_TtC21LensCarouselPresenter8LensCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7fd18(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113036eb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f7fd38; end: 103f7fda3; -[_TtC21LensCarouselPresenter8LensCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7fd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113036eb8);
  *(undefined8 *)(param_1 + _DAT_113036eb8) = param_3;
  _swift_unknownObjectRetain_n(param_3,2);
  _objc_retain(param_1);
  FUN_103f7fda4(uVar1);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103f7fda4; end: 103f800a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f7fda4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = _DAT_113036eb8;
  if (param_1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_113036eb8) == 0) {
      return;
    }
  }
  else if (param_1 == *(long *)(unaff_x20 + _DAT_113036eb8)) {
    return;
  }
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_113036e68));
  lVar1 = *(long *)(unaff_x20 + lVar5);
  if (lVar1 != 0) {
    func_0x00010bf4dc20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_1107283e8;
    _swift_allocObject(&UNK_1107283e8,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    uStack_68 = 0x103f825d0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1008561f0;
    puStack_70 = &UNK_110728400;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    __Block_copy(ppuVar3);
    _swift_release(puStack_60);
    lVar4 = lVar1;
    func_0x000107c5c320(lVar1);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar3);
    _objc_release(lVar1);
    func_0x00010bf1a3e0(lVar4);
    _objc_release(lVar4);
    lVar5 = *(long *)(unaff_x20 + lVar5);
    if (lVar5 != 0) {
      _swift_unknownObjectRetain(lVar5);
      func_0x000107c4abc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000103f9cee8(&puStack_88);
      lVar1 = lVar5;
      func_0x000107c44f7c(lVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_103f825d8(&puStack_88,auStack_d0);
      FUN_103f81654(lVar1,uStack_58,uStack_50,uStack_48);
      FUN_103f7f8b4(&puStack_88);
      _objc_release(lVar1);
      lVar1 = lVar5;
      func_0x000107c44fa4(lVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_103f81c98();
      _objc_release(lVar1);
      FUN_103f81b0c(&puStack_88);
      func_0x000107c4b44c(lVar5);
      FUN_103f81804();
      FUN_103f7f8b4(&puStack_88);
      _swift_unknownObjectRelease(lVar5);
    }
  }
  return;
}



/* Entry: 103f800a8; end: 103f80227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f800a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e60) = 0;
  lVar2 = _DAT_113036e68;
  puVar3 = PTR_PTR_1126ae810;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113036e70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036ea0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036ea8) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113036eb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_113036eb8) = 0;
  FUN_103f8258c();
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103f8069c();
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 103f80228; end: 103f80247; -[_TtC21LensCarouselPresenter8LensCell initWithFrame:] */

void FUN_103f80228(void)

{
  FUN_103f800a8();
  return;
}



/* Entry: 103f80248; end: 103f803b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f80248(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e60) = 0;
  lVar2 = _DAT_113036e68;
  puVar3 = PTR_PTR_1126ae810;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113036e70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036e98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036ea0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113036ea8) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113036eb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_113036eb8) = 0;
  FUN_103f8258c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    _objc_retain(puVar4);
    FUN_103f8069c();
    _objc_release(puVar5);
  }
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 103f803b8; end: 103f8045f; -[_TtC21LensCarouselPresenter8LensCell initWithCoder:] */

void FUN_103f803b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f80248();
  return;
}



/* Entry: 103f80460; end: 103f80487; -[_TtC21LensCarouselPresenter8LensCell prepareForReuse] */

void FUN_103f80460(undefined8 param_1)

{
  _objc_retain();
  func_0x000103f803e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f80488; end: 103f8064b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f80488(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined *puStack_98;
  undefined8 auStack_90 [6];
  
  FUN_103f8258c();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_applyLayoutAttributes__112527ed0,param_2);
  uVar3 = 0;
  FUN_103f97adc(0);
  puVar4 = param_2;
  _swift_dynamicCastClass(param_2,uVar3);
  puVar1 = PTR__swift_isaMask_11034f488;
  if (puVar4 != (ulong *)0x0) {
    pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x70);
    _objc_retain(param_2);
    (*pcVar6)();
    lVar2 = _DAT_113036e50;
    *(undefined8 *)(unaff_x20 + _DAT_113036e50) = param_1;
    func_0x000103f81f70();
    lVar5 = *(long *)(unaff_x20 + _DAT_113036e90);
    if (lVar5 != 0) {
      puStack_98 = PTR_DAT_1126a2ef0;
      _swift_dynamicCastObjCProtocolConditional(lVar5,1,&puStack_98);
      if (lVar5 != 0) {
        param_1 = *(undefined8 *)(unaff_x20 + lVar2);
        func_0x00010bf08880(param_1);
      }
    }
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x88))();
    FUN_103f7f8e8();
    _CGAffineTransformMakeScale(auStack_90,param_1,param_1);
    func_0x000107c5a03c(lVar5);
    _objc_release(lVar5);
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0xa0))();
    _CGAffineTransformMakeTranslation(auStack_90);
    func_0x000107c5a03c();
    uVar3 = auStack_90[0];
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0xb8))();
    FUN_103f7f8f4();
    func_0x000107c526c0(uVar3);
    _objc_release(param_2);
    _objc_release(unaff_x20);
  }
  return;
}



/* Entry: 103f8064c; end: 103f8069b; -[_TtC21LensCarouselPresenter8LensCell applyLayoutAttributes:] */

void FUN_103f8064c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f80488(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f8069c; end: 103f81317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8069c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  
  lVar10 = unaff_x20;
  func_0x000107c55424();
  FUN_103f7f8e8();
  func_0x00010befbb60();
  _objc_release(lVar10);
  lVar1 = _DAT_113036e70;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036e70);
  _objc_retain(uVar5);
  uVar9 = uVar5;
  FUN_103f7f8f4();
  func_0x00010befbb60(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar9);
  lVar2 = _DAT_113036e78;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036e78);
  _objc_retain(uVar5);
  uVar9 = uVar5;
  func_0x000103f7f9b8();
  func_0x00010befbb60(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar9);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  _objc_retain(uVar5);
  uVar9 = uVar5;
  FUN_103f7fa50();
  func_0x00010befbb60(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar9);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar5);
  uVar9 = uVar5;
  func_0x000103f7fad4();
  func_0x00010befbb60(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar9);
  lVar3 = _DAT_113036e98;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036e98);
  _objc_retain(uVar5);
  uVar9 = uVar5;
  func_0x000103f7fb74();
  func_0x00010befbb60(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar9);
  func_0x000103f7fc4c();
  func_0x00010befbb60();
  _objc_release(uVar9);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5e308();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar10 = _DAT_113036e58;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036e58);
  *(undefined8 *)(unaff_x20 + _DAT_113036e58) = uVar9;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c44d9c();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar11 = _DAT_113036e60;
  lVar6 = *(long *)(unaff_x20 + _DAT_113036e60);
  *(undefined8 *)(unaff_x20 + _DAT_113036e60) = uVar9;
  _objc_release();
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 0x3d;
  *(undefined8 *)(lVar6 + 0x10) = 0x1e;
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103f81314);
    (*pcVar4)();
  }
  *(long *)(lVar6 + 0x20) = lVar10;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if (lVar11 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    *(long *)(lVar6 + 0x28) = lVar11;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    _objc_retain(lVar10);
    _objc_retain(lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = unaff_x20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar10);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = unaff_x20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar10);
    *(undefined8 *)(lVar6 + 0x38) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c4ace0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x40) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c50890(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x48) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c5cbe4(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x50) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x58) = uVar9;
    lVar10 = _DAT_113036e80;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113036e80);
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ac04(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    *(undefined8 *)(lVar6 + 0x60) = uVar5;
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ac04(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    *(undefined8 *)(lVar6 + 0x68) = uVar5;
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ac04(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    *(undefined8 *)(lVar6 + 0x70) = uVar5;
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ac04(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    *(undefined8 *)(lVar6 + 0x78) = uVar5;
    lVar11 = _DAT_113036e88;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036e88);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010bf34860(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x80) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010bf348e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x88) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c5e308(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    uVar5 = uVar9;
    func_0x000107c517b8(0x443b8000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    uVar5 = uVar9;
    func_0x000107c517b8(0x443b8000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    *(undefined8 *)(lVar6 + 0x98) = uVar5;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5e308(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xa0) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c44d9c(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xa8) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c4ace0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xb0) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c50890(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xb8) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c5cbe4(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xc0) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 200) = uVar9;
    lVar10 = _DAT_113036ea0;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036ea0);
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xd0) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c50890(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xd8) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c5cbe4(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xe0) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0xe8) = uVar9;
    lVar10 = _DAT_113036ea8;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113036ea8);
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    *(undefined8 *)(lVar6 + 0xf0) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    *(undefined8 *)(lVar6 + 0xf8) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010bf34860(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x100) = uVar9;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010bf348e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar8);
    *(undefined8 *)(lVar6 + 0x108) = uVar9;
    uVar9 = 0;
    func_0x000100847984(0);
    lVar10 = lVar6;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,uVar9);
    _swift_release(lVar6);
    func_0x00010beef8c0(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103f81318);
  (*pcVar4)();
}



/* Entry: 103f81318; end: 103f8138f; -[_TtC21LensCarouselPresenter8LensCell setContentScale:] */

void FUN_103f81318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [48];
  
  _objc_retain();
  uVar1 = param_2;
  FUN_103f7f8e8();
  _CGAffineTransformMakeScale(auStack_60,param_1,param_1);
  func_0x000107c5a03c(uVar1,param_3,auStack_60);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 103f81390; end: 103f81427; -[_TtC21LensCarouselPresenter8LensCell setSelectionProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f81390(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_38;
  
  lVar1 = _DAT_113036e50;
  *(undefined8 *)(param_2 + _DAT_113036e50) = param_1;
  lVar2 = param_2;
  _objc_retain();
  func_0x000103f81f70();
  lVar3 = *(long *)(lVar2 + _DAT_113036e90);
  if (lVar3 != 0) {
    puStack_38 = PTR_DAT_1126a2ef0;
    _swift_dynamicCastObjCProtocolConditional(lVar3,1,&puStack_38);
    if (lVar3 != 0) {
      func_0x00010bf08880(*(undefined8 *)(param_2 + lVar1));
    }
    _objc_release(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103f81428; end: 103f8146f; -[_TtC21LensCarouselPresenter8LensCell setContentOpacity:] */

void FUN_103f81428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_103f7f8f4();
  func_0x000107c526c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103f81470; end: 103f814bb; -[_TtC21LensCarouselPresenter8LensCell setCellOffset:] */

void FUN_103f81470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeTranslation(auStack_50,param_1,0);
  func_0x000107c5a03c(param_2,param_3,auStack_50);
  return;
}



/* Entry: 103f814bc; end: 103f815f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f814bc(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126ddc90;
  lVar6 = param_2;
  _objc_opt_self();
  func_0x00010bf12180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf61060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar7 = lVar6;
  _objc_release(puVar3);
  if (param_1 == puVar4 && param_2 == lVar6) {
    _swift_bridgeObjectRelease(lVar6);
  }
  else {
    puVar3 = param_1;
    lVar7 = param_2;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,puVar4,lVar6,0);
    _swift_bridgeObjectRelease(lVar6);
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e40);
      *puVar1 = param_3;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e48);
      uVar8 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = param_2;
      _swift_bridgeObjectRetain(param_2);
      goto LAB_103f815d0;
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  ppuVar5 = &PTR____CFConstantStringClassReference_110da0498;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036e48);
  uVar8 = puVar1[1];
  *puVar1 = ppuVar5;
  puVar1[1] = lVar7;
LAB_103f815d0:
  _swift_bridgeObjectRelease(uVar8);
  func_0x000103f81f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103f815f4; end: 103f81653; -[_TtC21LensCarouselPresenter8LensCell setAccessibilityContentId:index:] */

void FUN_103f815f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_103f814bc(param_3,param_2,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f81654; end: 103f81803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f81654(long param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = param_1;
  func_0x000103f7f9b8();
  lVar2 = lVar3;
  func_0x000107c45034();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  bVar1 = param_1 == 0;
  if (lVar2 != 0) {
    _objc_release(lVar2);
    bVar1 = param_1 != 0 && lVar2 == param_1;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_113036e80);
  func_0x000107c55258(lVar3);
  if ((param_1 != 0) && (!bVar1)) {
    lVar3 = unaff_x20 + _DAT_113036eb0;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      func_0x000107c4af5c();
      _swift_unknownObjectRelease(lVar3);
    }
  }
  if ((param_2 == 1) || (param_1 != 0)) {
    FUN_103f7fa50();
    func_0x000107c550d8();
    param_2 = lVar3;
  }
  else {
    lVar3 = param_3;
    _objc_retain(param_3);
    _objc_retain(param_2);
    lVar2 = param_2;
    FUN_103f7fa50();
    func_0x000107c52b50();
    lVar4 = lVar2;
    func_0x000107c4aba4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      param_3 = lVar3;
      func_0x00010bdc0fe0(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x000107c52df8(lVar4);
    _objc_release(lVar4);
    _objc_release(param_3);
    lVar4 = lVar2;
    func_0x000107c4aba4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c52e0c(param_4);
    _objc_release(lVar2);
    _objc_release(lVar4);
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_113036e88));
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103f81804; end: 103f81a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f81804(double param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  plVar1 = (long *)(unaff_x20 + _DAT_113036e38);
  if (((char)plVar1[1] != '\x01') && (*plVar1 == param_2)) {
    return;
  }
  *plVar1 = param_2;
  *(undefined1 *)(plVar1 + 1) = 0;
  lVar7 = param_2;
  func_0x000103f7fb74();
  lVar2 = lVar7;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x000107c4fe68(lVar2);
  _objc_release(lVar2);
  lVar7 = _DAT_113036ea0;
  if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_113036ea0));
      uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
      uVar10 = 0x3fe0000000000000;
    }
    else {
      if (param_2 != 1) goto LAB_103f819d0;
      func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_113036ea0));
      uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
      uVar10 = 0;
    }
    func_0x000107c526c0(uVar10,uVar3);
    func_0x000103f7fc4c();
    func_0x000107c5be00();
    _objc_release(uVar3);
  }
  else if (param_2 == 2) {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_113036eb8);
    if ((uVar8 == 0) || (func_0x00010bf01140(), (uVar8 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x3fe0000000000000;
    }
    lVar7 = _DAT_113036ea0;
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_113036ea0));
    uVar9 = *(ulong *)(unaff_x20 + lVar7);
    func_0x000107c526c0(uVar3);
    func_0x000103f7fc4c();
    uVar8 = uVar9;
    func_0x000107c49a20();
    _objc_release(uVar9);
    if ((uVar8 & 1) == 0) {
      func_0x000107c5ba54(*(undefined8 *)(unaff_x20 + _DAT_113036ea8));
    }
  }
  else if (param_2 == 3) {
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_113036ea0));
    func_0x00010bf01b40(*(undefined8 *)(unaff_x20 + lVar7));
    uVar3 = 0x3fd3333333333333;
    if (param_1 != 0.0) {
      uVar3 = 0;
    }
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_110728398;
    _swift_allocObject(&UNK_110728398,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_58 = FUN_103f825ac;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1107283b0;
    ppuVar6 = &puStack_78;
    puStack_50 = puVar5;
    __Block_copy(ppuVar6);
    puVar5 = puStack_50;
    _objc_retain();
    _swift_release(puVar5);
    func_0x00010bf03440(0x3fd3333333333333,uVar3,puVar4);
    __Block_release(ppuVar6);
  }
LAB_103f819d0:
  lVar7 = *(long *)(unaff_x20 + _DAT_113036e90);
  if (lVar7 != 0) {
    puStack_48 = PTR_DAT_1126a2ef0;
    _swift_dynamicCastObjCProtocolConditional(lVar7,1,&puStack_48);
    if (lVar7 != 0) {
      func_0x00010bf08880(*(undefined8 *)(unaff_x20 + _DAT_113036e50));
    }
  }
  func_0x000103f81f70();
  return;
}



/* Entry: 103f81aa0; end: 103f81b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f81aa0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000103f7fc4c();
  uVar1 = uVar2;
  func_0x000107c49a20();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_113036ea8);
    func_0x000107c5ba54(uVar2);
  }
  func_0x000103f7fb74();
  func_0x000107c526c0(0x3fd3333333333333);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103f81b0c; end: 103f81c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f81b0c(double *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(long *)(unaff_x20 + _DAT_113036e58) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f81c94);
    (*pcVar1)();
  }
  dVar6 = *param_1;
  dVar5 = param_1[1];
  dVar4 = param_1[2];
  func_0x000107c5378c(dVar6);
  lVar2 = *(long *)(unaff_x20 + _DAT_113036e60);
  if (lVar2 != 0) {
    func_0x000107c5378c(dVar5);
    func_0x000103f7fad4();
    lVar3 = lVar2;
    func_0x000107c4aba4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x000107c539d4(dVar4,lVar3);
    _objc_release(lVar3);
    FUN_103f7f8f4();
    lVar2 = lVar3;
    func_0x000107c4aba4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x000107c539d4(dVar4,lVar2);
    _objc_release(lVar2);
    FUN_103f7fa50();
    lVar3 = lVar2;
    func_0x000107c4aba4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x000107c539d4(dVar4,lVar3);
    _objc_release(lVar3);
    dVar6 = dVar6 * (1.0 - param_1[3]) * 0.5;
    dVar5 = dVar5 * (1.0 - param_1[3]) * 0.5;
    func_0x000107c55b3c(dVar5,dVar6,dVar5,dVar6,*(undefined8 *)(unaff_x20 + _DAT_113036e78));
    lVar2 = *(long *)(unaff_x20 + _DAT_113036e90);
    if (lVar2 != 0) {
      func_0x000107c4aba4();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c539d4(dVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f81c98);
  (*pcVar1)();
}



/* Entry: 103f81c98; end: 103f8245f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f81c98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_68;
  
  lVar9 = _DAT_113036e90;
  func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + _DAT_113036e90));
  if (param_1 != 0) {
    lVar1 = param_1;
    _objc_retain();
    lVar2 = lVar1;
    func_0x000107c5a050();
    FUN_103f7f8e8();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    puVar4 = puVar3;
    func_0x0001008478a8();
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 9;
    *(undefined8 *)(puVar4 + 0x10) = 4;
    lVar2 = lVar1;
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    FUN_103f7f8f4();
    lVar6 = lVar5;
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar6);
    *(long *)(puVar4 + 0x20) = lVar5;
    lVar5 = lVar1;
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = _DAT_113036e78;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113036e78);
    func_0x000107c50890(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar7);
    *(long *)(puVar4 + 0x28) = lVar6;
    lVar5 = lVar1;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5cbe4(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar7);
    *(long *)(puVar4 + 0x30) = lVar6;
    lVar5 = lVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x00010bf1ff80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar7);
    *(long *)(puVar4 + 0x38) = lVar2;
    uVar7 = 0;
    func_0x000100847984(0);
    puVar8 = puVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,uVar7);
    _swift_release(puVar4);
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar8);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar9);
    *(long *)(unaff_x20 + lVar9) = param_1;
    _objc_retain();
    _objc_release(uVar7);
    puStack_68 = PTR_DAT_1126a2ef0;
    lVar9 = lVar1;
    _swift_dynamicCastObjCProtocolConditional(lVar1,1,&puStack_68);
    if (lVar9 != 0) {
      func_0x00010bf08880(*(undefined8 *)(unaff_x20 + _DAT_113036e50));
    }
    _objc_release(lVar1);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 103f82460; end: 103f8248f;  */

void FUN_103f82460(void)

{
  FUN_103f8258c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f82490; end: 103f8258b; -[_TtC21LensCarouselPresenter8LensCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f82490(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113036e48 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036e98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036ea0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036ea8));
  func_0x000103f82614(param_1 + _DAT_113036eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113036eb8));
  return;
}



/* Entry: 103f8258c; end: 103f825ab;  */

void FUN_103f8258c(void)

{
  _objc_opt_self(&PTR_PTR_11296e820);
  return;
}



/* Entry: 103f825ac; end: 103f825d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f825ac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = uVar3;
  func_0x000103f7fc4c();
  uVar1 = uVar2;
  func_0x000107c49a20();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(ulong *)(uVar3 + _DAT_113036ea8);
    func_0x000107c5ba54(uVar2);
  }
  func_0x000103f7fb74();
  func_0x000107c526c0(0x3fd3333333333333);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103f825d8; end: 103f82637;  */

undefined8 FUN_103f825d8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103f99db0)(param_2,param_1);
  return param_2;
}



/* Entry: 103f82638; end: 103f8263f;  */

void FUN_103f82638(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103f82640; end: 103f8286f;  */

void FUN_103f82640(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 103f82870; end: 103f8297b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f82870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113036ee8);
  *(undefined8 *)(unaff_x20 + _DAT_113036ee8) = param_1;
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113036ef0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_retain(param_1);
  FUN_103f82ccc(uVar3,uVar2);
  _swift_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c189850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDataSource__112640030);
  return;
}



/* Entry: 103f8297c; end: 103f829db; -[_TtC21LensCarouselPresenter43LensCarouselCollectionViewReloadDataHandler init] */

void FUN_103f8297c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCarouselCollectionViewReloadDataHandler",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f829a8);
  (*pcVar1)();
}



/* Entry: 103f829dc; end: 103f82a27; -[_TtC21LensCarouselPresenter43LensCarouselCollectionViewReloadDataHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f829dc(long param_1)

{
  long lVar1;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113036ee8));
  FUN_103f82ccc(*(undefined8 *)(param_1 + _DAT_113036ef0),
                ((undefined8 *)(param_1 + _DAT_113036ef0))[1]);
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_113036ef8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113036ef8));
  return;
}



/* Entry: 103f82a28; end: 103f82a47;  */

void FUN_103f82a28(void)

{
  _objc_opt_self(&PTR_PTR_11296eb48);
  return;
}



/* Entry: 103f82a48; end: 103f82a87;  */

void FUN_103f82a48(void)

{
  FUN_103f82870();
  return;
}



/* Entry: 103f82a88; end: 103f82adf; -[_TtC21LensCarouselPresenter43LensCarouselCollectionViewReloadDataHandler collectionView:numberOfItemsInSection:] */

undefined8 FUN_103f82a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_103f82cdc();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f82ae0; end: 103f82c03;  */

/* WARNING: Possible PIC construction at 0x000103f82b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103f82bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103f82bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f82ae0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar2 = unaff_x20 + _DAT_113036ef8;
  lVar1 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
  __s10Foundation9IndexPathV5UIKitE4itemSivg();
  (**(code **)(lVar1 + 0x20))();
  puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  if (lVar2 == 0) {
    _objc_allocWithZone(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  }
  else {
    pcVar5 = *(code **)(unaff_x20 + _DAT_113036ef0);
    if (pcVar5 == (code *)0x0) {
      _objc_allocWithZone(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    }
    else {
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113036ef0))[1];
      _swift_retain(uVar4);
      (*pcVar5)(param_1,param_2,lVar2);
      if (param_1 != (undefined *)0x0) {
        FUN_103f82ccc(pcVar5,uVar4);
        _swift_unknownObjectRelease(lVar2);
        return param_1;
      }
      puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
      _objc_allocWithZone(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar3;
}



/* Entry: 103f82c04; end: 103f82ccb; -[_TtC21LensCarouselPresenter43LensCarouselCollectionViewReloadDataHandler collectionView:cellForItemAtIndexPath:] */

void FUN_103f82c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar3,param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_103f82ae0(param_3,puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f82ccc; end: 103f82cdb;  */

void FUN_103f82ccc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103f82cdc; end: 103f82d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f82cdc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = unaff_x20 + _DAT_113036ef8;
  lVar3 = *(long *)(lVar4 + 0x18);
  lVar1 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,lVar3);
  (**(code **)(lVar1 + 0x10))(lVar3,lVar1);
  if (lVar3 < 1) {
    lVar4 = 0;
  }
  else if ((char)((long *)(unaff_x20 + _DAT_113036f00))[1] == '\x01') {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _DAT_113036f00);
    lVar1 = lVar4 + lVar3;
    if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f82d90);
      (*pcVar2)();
    }
    if (SBORROW8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f82d94);
      (*pcVar2)();
    }
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = (lVar1 + -1) / lVar3;
    }
  }
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar4),8) != lVar3 * lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103f82d8c);
    (*pcVar2)();
  }
  return lVar3 * lVar4;
}



/* Entry: 103f82d94; end: 103f82fef;  */

void FUN_103f82d94(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar12 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f82f7c);
          (*pcVar3)();
        }
        uVar15 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar15);
        uVar9 = param_2;
      }
      else {
        uVar15 = uVar14;
        uVar9 = param_1;
        FUN_103f8fdfc();
      }
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f82f78);
        (*pcVar3)();
      }
      uVar11 = uVar14 + 1;
      uVar5 = uVar15;
      func_0x000107c4a788();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar5);
      puVar7 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar6;
      uVar8 = uVar9;
      func_0x000100029284();
      uVar10 = (ulong)~(uint)uVar8 & 1;
      lVar1 = *(long *)(puVar4 + 0x10) + uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f82f80);
        (*pcVar3)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar1) {
        func_0x00010113678c(lVar1,puVar7);
        uVar5 = uVar6;
        param_2 = uVar9;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)param_2 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f82ff0);
          (*pcVar3)();
        }
LAB_103f82ee8:
        if ((uVar8 & 1) != 0) goto LAB_103f82df4;
LAB_103f82ef0:
        *(ulong *)(puVar4 + (uVar5 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar4 + (uVar5 >> 6) * 8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar6;
        puVar2[1] = uVar9;
        *(ulong *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar14;
        _swift_unknownObjectRelease(uVar15);
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f82f84);
          (*pcVar3)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      }
      else {
        param_2 = uVar8;
        if (((ulong)puVar7 & 1) != 0) goto LAB_103f82ee8;
        func_0x000101136368();
        if ((uVar8 & 1) == 0) goto LAB_103f82ef0;
LAB_103f82df4:
        *(ulong *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar14;
        _swift_bridgeObjectRelease(uVar9);
        _swift_unknownObjectRelease(uVar15);
      }
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar12);
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  *(ulong *)(unaff_x20 + 0x10) = param_1;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRelease(uVar13);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar13);
  return;
}



/* Entry: 103f82ff0; end: 103f830e3;  */

undefined1  [16] FUN_103f82ff0(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  uVar9 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    uVar6 = uVar9;
    if (0x7fffffffffffffff < uVar4) {
      uVar6 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar4);
  uVar5 = 0;
  do {
    if (uVar6 == uVar5) {
      uVar5 = 0;
      uVar7 = 1;
LAB_103f830a0:
      _swift_bridgeObjectRelease(uVar4);
      auVar10._8_8_ = uVar7;
      auVar10._0_8_ = uVar5;
      return auVar10;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar9 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f830cc);
        (*pcVar1)();
      }
      uVar8 = *(ulong *)(uVar4 + uVar5 * 8 + 0x20);
      _swift_unknownObjectRetain(uVar8);
    }
    else {
      uVar8 = uVar5;
      FUN_103f8fdfc(uVar5,uVar4);
    }
    uVar3 = uVar8;
    func_0x000107c4a140();
    _swift_unknownObjectRelease(uVar8);
    if ((int)uVar3 != 0) {
      uVar7 = 0;
      goto LAB_103f830a0;
    }
    bVar2 = SCARRY8(uVar5,1);
    uVar5 = uVar5 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f830d0);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 103f830e4; end: 103f8331b;  */

ulong FUN_103f830e4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 != 0) {
    if (*(char *)(unaff_x20 + 0x20) == '\x01') {
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      if (uVar2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar3 = uVar2;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f83260);
        (*pcVar1)();
      }
      if ((param_1 == 0x8000000000000000) && (uVar3 == 0xffffffffffffffff)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f832ec);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      if (uVar2 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar4 = uVar2;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      lVar5 = 0;
      if (uVar3 != 0) {
        lVar5 = (long)param_1 / (long)uVar3;
      }
      lVar6 = param_1 - lVar5 * uVar3;
      lVar5 = lVar6 + uVar4;
      if (SCARRY8(lVar6,uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f83288);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      if (uVar2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar3 = uVar2;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f832a0);
        (*pcVar1)();
      }
      if (lVar5 == -0x8000000000000000 && uVar3 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f832f0);
        (*pcVar1)();
      }
      lVar6 = 0;
      if (uVar3 != 0) {
        lVar6 = lVar5 / (long)uVar3;
      }
      param_1 = lVar5 - lVar6 * uVar3;
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      if ((uVar2 & 0xc000000000000001) != 0) {
LAB_103f832f4:
        _swift_bridgeObjectRetain(uVar2);
        FUN_103f8fdfc(param_1,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        return param_1;
      }
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f832a4);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f832a8);
        (*pcVar1)();
      }
      lVar5 = uVar2 + param_1 * 8;
LAB_103f83200:
      uVar2 = *(ulong *)(lVar5 + 0x20);
      _swift_unknownObjectRetain(uVar2);
      return uVar2;
    }
    if (-1 < (long)param_1) {
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      if (uVar2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar3 = uVar2;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if ((long)param_1 < (long)uVar3) {
        uVar2 = *(ulong *)(unaff_x20 + 0x10);
        if ((uVar2 & 0xc000000000000001) != 0) goto LAB_103f832f4;
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8331c);
          (*pcVar1)();
        }
        lVar5 = uVar2 + param_1 * 8;
        goto LAB_103f83200;
      }
    }
  }
  return 0;
}



/* Entry: 103f8331c; end: 103f83467;  */

void FUN_103f8331c(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar3);
    }
    else {
      uVar4 = *(ulong *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
      _swift_bridgeObjectRelease(lVar3);
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      if ((uVar2 & 0xc000000000000001) == 0) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f833e4);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f833e8);
          (*pcVar1)();
        }
        _swift_unknownObjectRetain(*(undefined8 *)(uVar2 + uVar4 * 8 + 0x20));
      }
      else {
        _swift_bridgeObjectRetain(uVar2);
        FUN_103f8fdfc(uVar4,uVar2);
        _swift_bridgeObjectRelease(uVar2);
      }
    }
  }
  return;
}



/* Entry: 103f83468; end: 103f834b3;  */

void FUN_103f83468(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f834b4; end: 103f834d3;  */

void FUN_103f834b4(void)

{
  FUN_103f82ff0();
  return;
}



/* Entry: 103f834d4; end: 103f834ff;  */

ulong FUN_103f834d4(void)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 >> 0x3e == 0) {
    return *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  uVar1 = uVar2 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < uVar2) {
    uVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss18_CocoaArrayWrapperV8endIndexSivg_11034e8f0)(uVar1);
  return uVar1;
}



/* Entry: 103f83500; end: 103f8355f;  */

void FUN_103f83500(void)

{
  FUN_103f82d94();
  return;
}



/* Entry: 103f83560; end: 103f835bf;  */

undefined1  [16] FUN_103f83560(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(uVar1);
  func_0x000103f833e8(param_1,param_2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 103f835c0; end: 103f8361b; -[SCLensCarouselPresenterCameraFactory provide:] */

void FUN_103f835c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103f8368c(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f8361c; end: 103f83657; -[SCLensCarouselPresenterCameraFactory init] */

void FUN_103f8361c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f83658; end: 103f8368b;  */

void FUN_103f83658(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f8368c; end: 103f841cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f8368c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  long alStack_5c0 [6];
  undefined1 auStack_590 [8];
  long alStack_588 [17];
  undefined1 auStack_500 [8];
  long lStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 *puStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined **ppuStack_4a8;
  undefined1 *puStack_4a0;
  long *plStack_498;
  long *plStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long alStack_458 [3];
  long *plStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long alStack_418 [3];
  long lStack_400;
  undefined **ppuStack_3f8;
  long alStack_3f0 [4];
  undefined **ppuStack_3d0;
  long alStack_3c8 [3];
  long lStack_3b0;
  undefined **ppuStack_3a8;
  long alStack_3a0 [3];
  long lStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined1 auStack_370 [40];
  long lStack_348;
  long lStack_340;
  long *aplStack_338 [3];
  long lStack_320;
  undefined **ppuStack_318;
  undefined1 auStack_310 [24];
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [40];
  long lStack_2b8;
  long lStack_2b0;
  undefined1 auStack_2a8 [288];
  long alStack_188 [3];
  long lStack_170;
  undefined **ppuStack_168;
  
  lVar2 = 0;
  func_0x000103f83494();
  lVar3 = lVar2;
  _swift_allocObject();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  *(undefined **)(lVar3 + 0x18) = puVar4;
  uVar16 = *(undefined8 *)(param_1 + _DAT_1130370b8);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  ppuStack_168 = &PTR_DAT_110728558;
  lVar5 = 0;
  alStack_188[0] = lVar3;
  lStack_170 = lVar2;
  FUN_103f7ca5c();
  lVar14 = lVar5;
  _objc_allocWithZone();
  *(undefined8 *)(lVar14 + _DAT_113036c88) = uVar16;
  FUN_103f84254(alStack_188,lVar14 + _DAT_113036c90);
  puVar4 = PTR_s_init_1125d9248;
  lStack_2b8 = lVar14;
  lStack_2b0 = lVar5;
  _swift_retain(lVar3);
  _swift_unknownObjectRetain(uVar16);
  plVar6 = &lStack_2b8;
  _objc_msgSendSuper2(plVar6,puVar4);
  FUN_103f84234(alStack_188);
  _swift_getObjectType(uVar16);
  _objc_retain();
  plVar7 = plVar6;
  FUN_103f7caec();
  plStack_498 = plVar6;
  plStack_490 = plVar7;
  _objc_release(plVar6);
  ppuStack_168 = &PTR_DAT_110728558;
  alStack_188[0] = lVar3;
  lStack_170 = lVar2;
  _swift_retain(lVar3);
  FUN_103f8430c(auStack_2e0,param_1,alStack_188);
  FUN_103f84234(alStack_188);
  uStack_468 = uVar16;
  func_0x000107c4abc0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  FUN_103f9beec(auStack_2a8);
  lVar14 = 0x113037068;
  func_0x0001000285a8(0x113037068,&UNK_10dcb22c8);
  _swift_allocObject();
  *(undefined8 *)(lVar14 + 0x18) = 4;
  *(undefined8 *)(lVar14 + 0x10) = 2;
  ppuStack_168 = &PTR_DAT_110728558;
  lVar8 = 0;
  alStack_188[0] = lVar3;
  lStack_170 = lVar2;
  func_0x000103f865d8();
  lVar5 = lVar8;
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x10) = 0x3fdccccccccccccd;
  FUN_103f84254(auStack_2e0,lVar5 + 0x18);
  func_0x000100db0560(alStack_188,lVar5 + 0x40);
  *(long *)(lVar14 + 0x38) = lVar8;
  *(undefined ***)(lVar14 + 0x40) = &PTR_DAT_1107285b0;
  *(long *)(lVar14 + 0x20) = lVar5;
  ppuStack_168 = &PTR_DAT_110728558;
  lVar8 = 0;
  alStack_188[0] = lVar3;
  lStack_170 = lVar2;
  func_0x000103f86314();
  lVar5 = lVar8;
  _swift_allocObject();
  func_0x000100db0560(alStack_188,lVar5 + 0x10);
  *(long *)(lVar14 + 0x60) = lVar8;
  *(undefined ***)(lVar14 + 0x68) = &PTR_DAT_110728598;
  *(long *)(lVar14 + 0x48) = lVar5;
  ppuStack_168 = &PTR_DAT_110728558;
  lVar8 = 0;
  alStack_188[0] = lVar3;
  lStack_170 = lVar2;
  func_0x000103f86b20();
  lVar5 = lVar8;
  _swift_allocObject();
  _memcpy(lVar5 + 0x10,auStack_2a8,0x120);
  func_0x000100db0560(alStack_188,lVar5 + 0x130);
  *(long *)(lVar5 + 0x158) = lVar14;
  ppuStack_168 = &PTR_DAT_1107285f8;
  alStack_188[0] = lVar5;
  lStack_170 = lVar8;
  _swift_retain_n(lVar3,3);
  _swift_retain(lVar5);
  func_0x000103f843ec(auStack_310,param_1,alStack_188);
  FUN_103f84234(alStack_188);
  ppuStack_168 = &PTR_DAT_110728558;
  lVar9 = 0;
  alStack_188[0] = lVar3;
  lStack_170 = lVar2;
  FUN_103f82a28();
  lVar14 = lVar9;
  _objc_allocWithZone();
  *(undefined8 *)(lVar14 + _DAT_113036ee8) = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_113036ef0);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_103f84254(alStack_188,lVar14 + _DAT_113036ef8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_113036f00);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar4 = PTR_s_init_1125d9248;
  lStack_348 = lVar14;
  lStack_340 = lVar9;
  _swift_retain(lVar3);
  plVar6 = &lStack_348;
  _objc_msgSendSuper2(plVar6,puVar4);
  ppuStack_318 = &PTR_DAT_110728538;
  aplStack_338[0] = plVar6;
  lStack_320 = lVar9;
  FUN_103f84234(alStack_188);
  func_0x000103f844f0(auStack_370,param_1);
  ppuStack_168 = &PTR_DAT_1107285f8;
  ppuStack_3a8 = &PTR_DAT_110728558;
  ppuStack_3d0 = (undefined **)0x0;
  alStack_3f0[1] = 0;
  alStack_3f0[0] = 0;
  alStack_3f0[3] = 0;
  alStack_3f0[2] = 0;
  lVar14 = *(long *)(param_1 + _DAT_1130370e0);
  puStack_4a0 = (undefined1 *)param_1;
  lStack_488 = lVar3;
  lStack_470 = lVar2;
  lStack_460 = lVar8;
  alStack_3c8[0] = lVar3;
  lStack_3b0 = lVar2;
  if (lVar14 == 0) {
    lVar2 = 0;
    alStack_188[0] = lVar5;
    lStack_170 = lVar8;
    func_0x000103f8c6d0();
    lVar14 = lVar2;
    _swift_allocObject();
    *(undefined8 *)(lVar14 + 0x18) = 0;
    _swift_unknownObjectWeakInit(lVar14 + 0x10,0);
    ppuStack_380 = &PTR_DAT_110728ce0;
    ppuStack_378 = &PTR_DAT_110728d20;
    alStack_3a0[0] = lVar14;
    lStack_388 = lVar2;
    _swift_retain(lVar3);
    _swift_retain(lVar5);
  }
  else {
    alStack_188[0] = lVar5;
    lStack_170 = lVar8;
    FUN_103f84254(alStack_188,alStack_3a0);
    FUN_103f84254(alStack_3c8,alStack_418);
    func_0x000103f84298(alStack_3f0,alStack_458);
    if (plStack_440 == (long *)0x0) {
      _swift_retain(lVar3);
      _swift_retain(lVar5);
      _swift_unknownObjectRetain(lVar14);
      FUN_103f841ec(alStack_458);
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      alStack_458[0] = CONCAT71(alStack_458[0]._1_7_,1);
      plVar6 = alStack_458;
      func_0x000100854cb0();
    }
    else {
      FUN_103f842e8(alStack_458,plStack_440);
      pcVar17 = *(code **)(lStack_438 + 0x18);
      _swift_retain(lVar3);
      _swift_retain(lVar5);
      _swift_unknownObjectRetain(lVar14);
      plVar6 = plStack_440;
      (*pcVar17)(plStack_440,lStack_438);
      FUN_103f84234(alStack_458);
    }
    lVar8 = 0;
    func_0x000103f8bf74();
    lVar2 = lVar8;
    _swift_allocObject();
    uVar16 = 0;
    func_0x0001005f60b4();
    _swift_allocObject();
    func_0x0001005f60d4();
    *(undefined8 *)(lVar2 + 0x78) = uVar16;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    _swift_unknownObjectWeakInit(lVar2 + 0x80,0);
    *(undefined2 *)(lVar2 + 0x90) = 0;
    *(long *)(lVar2 + 0x10) = lVar14;
    func_0x000100db0560(alStack_3a0,lVar2 + 0x18);
    func_0x000100db0560(alStack_418,lVar2 + 0x40);
    *(long **)(lVar2 + 0x68) = plVar6;
    *(undefined1 *)(lVar2 + 0x70) = 0;
    ppuStack_380 = &PTR_DAT_110728a90;
    ppuStack_378 = &PTR_DAT_110728ad0;
    lVar3 = lStack_488;
    alStack_3a0[0] = lVar2;
    lStack_388 = lVar8;
  }
  FUN_103f841ec(alStack_3f0);
  FUN_103f84234(alStack_3c8);
  FUN_103f84234(alStack_188);
  lVar14 = 0;
  func_0x000103f8d0b0();
  lStack_478 = lVar14;
  _swift_allocObject();
  lStack_480 = lVar14;
  FUN_103f84254(auStack_2e0,lVar14 + 0x10);
  lVar14 = 0x113037078;
  func_0x0001000285a8(0x113037078,&UNK_10dcb2310);
  _swift_allocObject();
  *(undefined8 *)(lVar14 + 0x18) = 0xc;
  *(undefined8 *)(lVar14 + 0x10) = 6;
  lVar8 = 0;
  FUN_103f8b164();
  lVar2 = lVar8;
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0x3fe8000000000000;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(long *)(lVar14 + 0x38) = lVar8;
  *(undefined ***)(lVar14 + 0x40) = &PTR_DAT_110728970;
  *(long *)(lVar14 + 0x20) = lVar2;
  func_0x000107c4abc0(uStack_468);
  _objc_retainAutoreleasedReturnValue();
  FUN_103f9beec(alStack_188);
  lVar8 = lStack_460;
  lVar2 = lStack_470;
  lStack_3b0 = lStack_460;
  ppuStack_3a8 = &PTR_DAT_1107285f8;
  alStack_3f0[3] = lStack_470;
  ppuStack_3d0 = &PTR_DAT_110728558;
  lVar10 = 0;
  alStack_3f0[0] = lVar3;
  alStack_3c8[0] = lVar5;
  func_0x000103f8ae5c();
  lVar9 = lVar10;
  _swift_allocObject();
  *(undefined8 *)(lVar9 + 0x10) = 0x3fd3333333333333;
  func_0x000100db0560(alStack_3c8,lVar9 + 0x18);
  FUN_103f84254(auStack_2e0,lVar9 + 0x40);
  func_0x000100db0560(alStack_3f0,lVar9 + 0x68);
  _memcpy(lVar9 + 0x90,alStack_188,0x120);
  *(long *)(lVar14 + 0x60) = lVar10;
  *(undefined ***)(lVar14 + 0x68) = &PTR_DAT_1107288e0;
  *(long *)(lVar14 + 0x48) = lVar9;
  lStack_3b0 = lVar8;
  ppuStack_3a8 = &PTR_DAT_1107285f8;
  lVar11 = 0;
  alStack_3c8[0] = lVar5;
  func_0x000103f8c478();
  lVar10 = lVar11;
  _swift_allocObject();
  func_0x000100db0560(alStack_3c8,lVar10 + 0x10);
  lVar9 = lStack_2f8;
  *(long *)(lVar14 + 0x88) = lVar11;
  *(undefined ***)(lVar14 + 0x90) = &PTR_DAT_110728b98;
  *(long *)(lVar14 + 0x70) = lVar10;
  FUN_103f842e8(auStack_310,lStack_2f8);
  *(long *)(lVar14 + 0xb0) = lVar9;
  *(undefined8 *)(lVar14 + 0xb8) = uStack_2e8;
  func_0x0001000c5db4(lVar14 + 0x98);
  (**(code **)(*(long *)(lVar9 + -8) + 0x10))();
  lStack_3b0 = lVar8;
  ppuStack_3a8 = &PTR_DAT_1107285f8;
  alStack_3f0[3] = lVar2;
  ppuStack_3d0 = &PTR_DAT_110728558;
  lStack_400 = lStack_478;
  ppuStack_3f8 = &PTR_DAT_110728db0;
  alStack_418[0] = lStack_480;
  lVar8 = 0;
  alStack_3f0[0] = lVar3;
  alStack_3c8[0] = lVar5;
  func_0x000103f8b03c();
  lVar2 = lVar8;
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0xb0) = 0;
  func_0x000100db0560(alStack_3c8,lVar2 + 0x10);
  func_0x000100db0560(alStack_3f0,lVar2 + 0x38);
  FUN_103f84254(auStack_2e0,lVar2 + 0x60);
  func_0x000100db0560(alStack_418,lVar2 + 0x88);
  lVar3 = lStack_388;
  *(long *)(lVar14 + 0xd8) = lVar8;
  *(undefined ***)(lVar14 + 0xe0) = &PTR_DAT_110728928;
  *(long *)(lVar14 + 0xc0) = lVar2;
  ppuStack_4a8 = ppuStack_380;
  lStack_4b0 = lStack_388;
  FUN_103f842e8(alStack_3a0,lStack_388);
  *(undefined ***)(lVar14 + 0x108) = ppuStack_4a8;
  *(long *)(lVar14 + 0x100) = lStack_4b0;
  func_0x0001000c5db4(lVar14 + 0xe8);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))();
  lVar8 = 0;
  func_0x000103f8b7d4();
  lStack_4b0 = lVar8;
  _swift_allocObject();
  *(long *)(lVar8 + 0x10) = lVar14;
  uVar16 = 0;
  FUN_103f873ec();
  puVar13 = puStack_4a0;
  uVar15 = *(undefined8 *)((long)puStack_4a0 + _DAT_1130370b0);
  lVar14 = 0;
  uStack_4e0 = uVar15;
  uStack_4c8 = uVar16;
  func_0x000103f909e8();
  lStack_4d0 = lVar14;
  _swift_allocObject();
  *(undefined8 *)(lVar14 + 0x10) = uVar15;
  uVar16 = 0;
  lStack_4b8 = lVar14;
  FUN_103f8258c();
  uStack_4c0 = uVar16;
  FUN_103f84254(aplStack_338,alStack_3c8);
  uVar15 = *(undefined8 *)((long)puVar13 + _DAT_1130370c8);
  uStack_4e8 = uStack_2f0;
  puVar12 = auStack_310;
  FUN_103f842e8(puVar12,lStack_2f8);
  lVar2 = lStack_388;
  ppuStack_4f0 = ppuStack_378;
  plVar6 = alStack_3a0;
  FUN_103f842e8(plVar6,lStack_388);
  FUN_103f84254(auStack_2e0,alStack_3f0);
  FUN_103f84254(auStack_370,alStack_418);
  lVar14 = (long)puVar13 + _DAT_1130370a8;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = lStack_488;
  alStack_458[0] = lStack_488;
  lStack_4f8 = lVar14;
  puStack_4a0 = auStack_500;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_2f8 + -8) + 0x40));
  puVar13 = auStack_500 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(puVar13,puVar12,lStack_2f8);
  lVar14 = lStack_480;
  lStack_428 = lStack_480;
  puStack_4d8 = puVar13;
  lStack_430 = lVar8;
  lStack_420 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12_00 + 0x10))(lVar8,plVar6,lVar2);
  _swift_unknownObjectRetain(uVar15);
  _swift_retain_n(lVar5,3);
  _swift_retain_n(lVar3,2);
  uVar16 = uStack_468;
  _swift_unknownObjectRetain(uStack_468);
  _swift_retain(lVar14);
  _swift_unknownObjectRetain(uStack_4e0);
  *(undefined8 *)(lVar8 + -0x10) = uStack_4e8;
  *(undefined ***)(lVar8 + -0x18) = ppuStack_4f0;
  *(undefined ***)(lVar8 + -0x20) = &PTR_DAT_110728558;
  *(undefined ***)(lVar8 + -0x28) = &PTR_DAT_110728db0;
  *(undefined ***)(lVar8 + -0x38) = &PTR_DAT_1107289b8;
  *(undefined ***)(lVar8 + -0x30) = &PTR_DAT_1107285f8;
  *(long *)(lVar8 + -0x48) = lStack_2f8;
  *(undefined ***)(lVar8 + -0x40) = &PTR_DAT_110729158;
  *(long *)(lVar8 + -0x50) = lVar2;
  *(long *)(lVar8 + -0x58) = lStack_470;
  *(long *)(lVar8 + -0x60) = lStack_478;
  *(long *)(lVar8 + -0x68) = lStack_460;
  *(long *)(lVar8 + -0x70) = lStack_4b0;
  *(long *)(lVar8 + -0x78) = lStack_4d0;
  *(undefined8 *)(lVar8 + -0x80) = uStack_4c8;
  *(long *)(lVar8 + -0x88) = lStack_4f8;
  *(undefined1 *)(lVar8 + -0x90) = 1;
  plVar6 = plStack_490;
  *(long **)(lVar8 + -0xa0) = alStack_418;
  *(long **)(lVar8 + -0x98) = plVar6;
  *(long *)(lVar8 + -0xb0) = lVar8;
  *(long **)(lVar8 + -0xa8) = alStack_3f0;
  *(long **)(lVar8 + -0xc0) = &lStack_428;
  *(long **)(lVar8 + -0xb8) = &lStack_430;
  lVar14 = lStack_4b8;
  lVar3 = lStack_4b8;
  FUN_103f89d30(lStack_4b8,uStack_4c0,alStack_3c8,alStack_458,uVar15,puVar13,&lStack_420,uVar16);
  _objc_release(plStack_498);
  _swift_release(lVar14);
  _swift_unknownObjectRelease(uVar15);
  _swift_unknownObjectRelease(uVar16);
  _objc_release(plVar6);
  FUN_103f84234(auStack_370);
  FUN_103f84234(auStack_2e0);
  FUN_103f84234(aplStack_338);
  FUN_103f84234(alStack_3a0);
  FUN_103f84234(auStack_310);
  return lVar3;
}



/* Entry: 103f841cc; end: 103f841eb;  */

void FUN_103f841cc(void)

{
  _objc_opt_self(&PTR_PTR_11296ec20);
  return;
}



/* Entry: 103f841ec; end: 103f84233;  */

undefined8 FUN_103f841ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x113037070;
  func_0x0001000285a8(0x113037070,&UNK_10dcb22d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f84234; end: 103f84253;  */

void FUN_103f84234(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103f84248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103f84254; end: 103f842e7;  */

long FUN_103f84254(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103f842e8; end: 103f8430b;  */

long * FUN_103f842e8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103f8430c; end: 103f846bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8430c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [24];
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_1130370c8);
  lVar1 = 0;
  FUN_103f8ec20();
  lVar2 = lVar1;
  _swift_allocObject();
  puVar5 = (undefined8 *)(lVar2 + 0x88);
  *puVar5 = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  _swift_unknownObjectWeakInit(lVar2 + 0x90,0);
  FUN_103f846d4(param_3,lVar2 + 0x10);
  _swift_beginAccess(puVar5,auStack_58,1,0);
  uVar3 = *puVar5;
  *puVar5 = uVar4;
  _swift_unknownObjectRetain(uVar4);
  _swift_unknownObjectRelease(uVar3);
  *(undefined1 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110728ef0;
  *param_1 = lVar2;
  return;
}



/* Entry: 103f846bc; end: 103f846d3;  */

undefined8 * FUN_103f846bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  param_2[3] = param_1[3];
  param_2[2] = uVar3;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_2;
}



/* Entry: 103f846d4; end: 103f84717;  */

long FUN_103f846d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103f84718; end: 103f84773; -[SCLensCarouselPresenterPostCaptureFactory provide:] */

void FUN_103f84718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103f85cec(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f84774; end: 103f847af; -[SCLensCarouselPresenterPostCaptureFactory init] */

void FUN_103f84774(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f847b0; end: 103f847e3;  */

void FUN_103f847b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f847e4; end: 103f85ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f847e4(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 uVar13;
  long **pplVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  code *pcVar18;
  long alStack_5d0 [6];
  undefined1 auStack_5a0 [8];
  long alStack_598 [17];
  undefined1 auStack_510 [8];
  long **pplStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined1 *puStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined **ppuStack_488;
  long *plStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined1 *puStack_460;
  long *plStack_458;
  long *plStack_450;
  long *aplStack_448 [3];
  undefined8 **ppuStack_430;
  long lStack_428;
  long *aplStack_420 [5];
  long lStack_3f8;
  long *plStack_3f0;
  long *aplStack_3e8 [3];
  long *plStack_3d0;
  undefined **ppuStack_3c8;
  long *aplStack_3c0 [3];
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  long *aplStack_398 [3];
  long *plStack_380;
  undefined **ppuStack_378;
  long *aplStack_370 [3];
  long *plStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined1 auStack_340 [40];
  undefined1 auStack_318 [40];
  long lStack_2f0;
  long lStack_2e8;
  long *aplStack_2e0 [3];
  long lStack_2c8;
  undefined **ppuStack_2c0;
  long *aplStack_2b8 [3];
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  long lStack_198;
  long lStack_190;
  long *aplStack_188 [3];
  long *plStack_170;
  undefined **ppuStack_168;
  
  plVar3 = (long *)0x0;
  func_0x000103f83494();
  plVar12 = plVar3;
  _swift_allocObject();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar12[2] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  plVar12[3] = (long)puVar4;
  uVar16 = *(undefined8 *)(param_1 + _DAT_1130370b8);
  *(undefined1 *)(plVar12 + 4) = 1;
  ppuStack_168 = &PTR_DAT_110728558;
  lVar5 = 0;
  aplStack_188[0] = plVar12;
  plStack_170 = plVar3;
  FUN_103f7ca5c();
  lVar15 = lVar5;
  _objc_allocWithZone();
  *(undefined8 *)(lVar15 + _DAT_113036c88) = uVar16;
  FUN_103f85dd0(aplStack_188,lVar15 + _DAT_113036c90);
  puVar4 = PTR_s_init_1125d9248;
  lStack_198 = lVar15;
  lStack_190 = lVar5;
  _swift_retain(plVar12);
  _swift_unknownObjectRetain(uVar16);
  plVar6 = &lStack_198;
  _objc_msgSendSuper2(plVar6,puVar4);
  FUN_103f85db0(aplStack_188);
  _swift_getObjectType(uVar16);
  func_0x000107c4abc0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  FUN_103f9beec(aplStack_188);
  _objc_retain();
  plVar7 = plVar6;
  uStack_468 = uVar16;
  FUN_103f7ccbc();
  plStack_470 = plVar6;
  _objc_release(plVar6);
  ppuStack_298 = &PTR_DAT_110728558;
  lVar5 = 0;
  aplStack_2b8[0] = plVar12;
  plStack_2a0 = plVar3;
  FUN_103f7ee18();
  ppuStack_350 = &PTR_DAT_110728360;
  plVar8 = (long *)0x0;
  aplStack_370[0] = plVar7;
  plStack_358 = (long *)lVar5;
  func_0x000103f86888();
  plVar9 = plVar8;
  _swift_allocObject();
  _memcpy(plVar9 + 2,aplStack_188,0x120);
  func_0x000100db0578(aplStack_2b8,plVar9 + 0x26);
  func_0x000100db0578(aplStack_370,plVar9 + 0x2b);
  ppuStack_350 = &PTR_DAT_1107285c8;
  aplStack_370[0] = plVar9;
  plStack_358 = plVar8;
  _swift_retain(plVar12);
  _objc_retain();
  _swift_retain(plVar9);
  FUN_103f7ced8(aplStack_188,aplStack_2b8);
  func_0x000103f843ec(aplStack_2b8,param_1,aplStack_370);
  FUN_103f85db0(aplStack_370);
  ppuStack_350 = &PTR_DAT_110728558;
  lVar10 = 0;
  aplStack_370[0] = plVar12;
  plStack_358 = plVar3;
  FUN_103f82a28();
  lVar15 = lVar10;
  _objc_allocWithZone();
  *(undefined8 *)(lVar15 + _DAT_113036ee8) = 0;
  puVar1 = (undefined8 *)(lVar15 + _DAT_113036ef0);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_103f85dd0(aplStack_370,lVar15 + _DAT_113036ef8);
  puVar1 = (undefined8 *)(lVar15 + _DAT_113036f00);
  *puVar1 = 100;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar4 = PTR_s_init_1125d9248;
  lStack_2f0 = lVar15;
  lStack_2e8 = lVar10;
  _swift_retain(plVar12);
  plVar6 = &lStack_2f0;
  _objc_msgSendSuper2(plVar6,puVar4);
  ppuStack_2c0 = &PTR_DAT_110728538;
  aplStack_2e0[0] = plVar6;
  lStack_2c8 = lVar10;
  FUN_103f85db0(aplStack_370);
  func_0x000103f844f0(auStack_318,param_1);
  ppuStack_350 = &PTR_DAT_110728558;
  aplStack_370[0] = plVar12;
  plStack_358 = plVar3;
  _swift_retain(plVar12);
  func_0x000103f8430c(auStack_340,param_1,aplStack_370);
  FUN_103f85db0(aplStack_370);
  ppuStack_378 = &PTR_DAT_1107285c8;
  ppuStack_3a0 = &PTR_DAT_110728558;
  ppuStack_3c8 = &PTR_DAT_110728360;
  lVar15 = *(long *)(param_1 + _DAT_1130370e0);
  plStack_490 = (long *)lVar5;
  plStack_478 = plVar12;
  puStack_460 = (undefined1 *)param_1;
  plStack_458 = plVar8;
  plStack_450 = plVar3;
  aplStack_3e8[0] = plVar7;
  plStack_3d0 = (long *)lVar5;
  aplStack_3c0[0] = plVar12;
  plStack_3a8 = plVar3;
  aplStack_398[0] = plVar9;
  plStack_380 = plVar8;
  if (lVar15 == 0) {
    plVar3 = (long *)0x0;
    func_0x000103f8c6d0();
    plVar6 = plVar3;
    _swift_allocObject();
    plVar6[3] = 0;
    _swift_unknownObjectWeakInit(plVar6 + 2,0);
    ppuStack_350 = &PTR_DAT_110728ce0;
    ppuStack_348 = &PTR_DAT_110728d20;
    aplStack_370[0] = plVar6;
    plStack_358 = plVar3;
    _swift_retain(plVar12);
    _objc_retain(plVar7);
    _swift_retain(plVar9);
  }
  else {
    FUN_103f85dd0(aplStack_398,aplStack_370);
    FUN_103f85dd0(aplStack_3c0,aplStack_420);
    func_0x000103f84298(aplStack_3e8,aplStack_448);
    if (ppuStack_430 == (long **)0x0) {
      _swift_retain(plVar12);
      _objc_retain(plVar7);
      _swift_retain(plVar9);
      _swift_unknownObjectRetain(lVar15);
      FUN_103f841ec(aplStack_448);
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      aplStack_448[0] = (long *)CONCAT71(aplStack_448[0]._1_7_,1);
      pplVar11 = aplStack_448;
      func_0x000100854cb0();
    }
    else {
      FUN_103f85e14(aplStack_448,ppuStack_430);
      pcVar18 = *(code **)(lStack_428 + 0x18);
      _swift_retain(plVar12);
      _objc_retain(plVar7);
      _swift_retain(plVar9);
      _swift_unknownObjectRetain(lVar15);
      pplVar11 = ppuStack_430;
      (*pcVar18)(ppuStack_430,lStack_428);
      FUN_103f85db0(aplStack_448);
    }
    bVar2 = plStack_3d0 != (long *)0x0;
    plVar12 = (long *)0x0;
    func_0x000103f8bf74();
    plVar6 = plVar12;
    _swift_allocObject();
    lVar5 = 0;
    func_0x0001005f60b4();
    _swift_allocObject();
    func_0x0001005f60d4();
    plVar6[0xf] = lVar5;
    plVar6[0x11] = 0;
    _swift_unknownObjectWeakInit(plVar6 + 0x10,0);
    *(undefined2 *)(plVar6 + 0x12) = 0;
    plVar6[2] = lVar15;
    func_0x000100db0578(aplStack_370,plVar6 + 3);
    func_0x000100db0578(aplStack_420,plVar6 + 8);
    plVar6[0xd] = (long)pplVar11;
    *(bool *)(plVar6 + 0xe) = bVar2;
    ppuStack_350 = &PTR_DAT_110728a90;
    ppuStack_348 = &PTR_DAT_110728ad0;
    aplStack_370[0] = plVar6;
    plStack_358 = plVar12;
  }
  FUN_103f841ec(aplStack_3e8);
  FUN_103f85db0(aplStack_3c0);
  FUN_103f85db0(aplStack_398);
  lVar15 = *(long *)((long)puStack_460 + _DAT_1130370c0);
  plVar8 = (long *)0x0;
  lStack_498 = lVar15;
  func_0x000103f8cdec();
  plVar3 = plVar8;
  plStack_4a0 = plVar8;
  _swift_allocObject();
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  FUN_103f85dd0(auStack_340,plVar3 + 3);
  plVar3[8] = lVar15;
  plVar3[2] = 0;
  *(undefined1 *)(plVar3 + 9) = 0;
  lVar15 = 0x113037078;
  func_0x0001000285a8(0x113037078,&UNK_10dcb2310);
  _swift_allocObject();
  *(undefined8 *)(lVar15 + 0x18) = 0xc;
  *(undefined8 *)(lVar15 + 0x10) = 6;
  plStack_380 = plStack_490;
  ppuStack_378 = &PTR_DAT_110728360;
  lVar10 = 0;
  plStack_4a8 = plVar7;
  aplStack_398[0] = plVar7;
  func_0x000103f8a654();
  lVar5 = lVar10;
  _swift_allocObject();
  func_0x000100db0578(aplStack_398,lVar5 + 0x10);
  *(long *)(lVar15 + 0x38) = lVar10;
  *(undefined ***)(lVar15 + 0x40) = &PTR_DAT_110728828;
  *(long *)(lVar15 + 0x20) = lVar5;
  lVar10 = 0;
  FUN_103f8c534();
  lVar5 = lVar10;
  _swift_allocObject();
  plVar6 = plStack_458;
  *(undefined8 *)(lVar5 + 0x10) = 0x4044000000000000;
  *(long *)(lVar15 + 0x60) = lVar10;
  *(undefined ***)(lVar15 + 0x68) = &PTR_DAT_110728be0;
  *(long *)(lVar15 + 0x48) = lVar5;
  plStack_380 = plStack_458;
  ppuStack_378 = &PTR_DAT_1107285c8;
  lVar10 = 0;
  aplStack_398[0] = plVar9;
  func_0x000103f8c478();
  lVar5 = lVar10;
  _swift_allocObject();
  func_0x000100db0578(aplStack_398,lVar5 + 0x10);
  plVar12 = plStack_2a0;
  *(long *)(lVar15 + 0x88) = lVar10;
  *(undefined ***)(lVar15 + 0x90) = &PTR_DAT_110728b98;
  *(long *)(lVar15 + 0x70) = lVar5;
  plStack_4d0 = plVar9;
  FUN_103f85e14(aplStack_2b8,plStack_2a0);
  *(long **)(lVar15 + 0xb0) = plVar12;
  *(undefined8 *)(lVar15 + 0xb8) = uStack_290;
  func_0x0001000c5db4(lVar15 + 0x98);
  (**(code **)(plVar12[-1] + 0x10))();
  plVar7 = plStack_450;
  plVar12 = plStack_478;
  plStack_380 = plVar6;
  ppuStack_378 = &PTR_DAT_1107285c8;
  plStack_3a8 = plStack_450;
  ppuStack_3a0 = &PTR_DAT_110728558;
  aplStack_3c0[0] = plStack_478;
  ppuStack_3c8 = &PTR_DAT_110728d60;
  lVar10 = 0;
  aplStack_3e8[0] = plVar3;
  plStack_3d0 = plVar8;
  aplStack_398[0] = plVar9;
  func_0x000103f8b03c();
  lVar5 = lVar10;
  _swift_allocObject();
  *(undefined1 *)(lVar5 + 0xb0) = 0;
  func_0x000100db0578(aplStack_398,lVar5 + 0x10);
  func_0x000100db0578(aplStack_3c0,lVar5 + 0x38);
  FUN_103f85dd0(auStack_340,lVar5 + 0x60);
  func_0x000100db0578(aplStack_3e8,lVar5 + 0x88);
  plVar6 = plStack_358;
  *(long *)(lVar15 + 0xd8) = lVar10;
  *(undefined ***)(lVar15 + 0xe0) = &PTR_DAT_110728928;
  *(long *)(lVar15 + 0xc0) = lVar5;
  ppuStack_488 = ppuStack_350;
  plStack_490 = plStack_358;
  FUN_103f85e14(aplStack_370,plStack_358);
  *(undefined ***)(lVar15 + 0x108) = ppuStack_488;
  *(long **)(lVar15 + 0x100) = plStack_490;
  func_0x0001000c5db4(lVar15 + 0xe8);
  (**(code **)(plVar6[-1] + 0x10))();
  lVar5 = 0;
  func_0x000103f8b7d4();
  plStack_490 = (long *)lVar5;
  _swift_allocObject();
  puVar17 = puStack_460;
  *(long *)(lVar5 + 0x10) = lVar15;
  uVar16 = *(undefined8 *)((long)puStack_460 + _DAT_1130370b0);
  plStack_380 = plVar7;
  ppuStack_378 = &PTR_DAT_110728558;
  aplStack_398[0] = plVar12;
  lVar10 = 0;
  lStack_4f8 = lVar5;
  uStack_4c8 = uVar16;
  func_0x000103f90eb0();
  lStack_4b0 = lVar10;
  _swift_allocObject();
  *(undefined8 *)(lVar10 + 0x160) = 0;
  *(undefined8 *)(lVar10 + 0x168) = 0;
  *(undefined8 *)(lVar10 + 0x10) = uVar16;
  _memcpy(lVar10 + 0x18,aplStack_188,0x120);
  func_0x000100db0578(aplStack_398,lVar10 + 0x138);
  uVar16 = 0;
  FUN_103f873ec();
  uVar13 = 0;
  uStack_4c0 = uVar16;
  FUN_103f8258c();
  uStack_4b8 = uVar13;
  FUN_103f85dd0(aplStack_2e0,aplStack_398);
  plVar9 = plStack_2a0;
  plVar6 = plStack_4d0;
  uVar16 = *(undefined8 *)((long)puVar17 + _DAT_1130370c8);
  ppuStack_4e0 = ppuStack_298;
  pplVar11 = aplStack_2b8;
  uStack_500 = uVar16;
  FUN_103f85e14(pplVar11,plStack_2a0);
  plVar7 = plStack_358;
  ppuStack_4e8 = ppuStack_348;
  pplVar14 = aplStack_370;
  FUN_103f85e14(pplVar14,plStack_358);
  pplStack_508 = pplVar14;
  FUN_103f85dd0(auStack_340,aplStack_3c0);
  FUN_103f85dd0(auStack_318,aplStack_3e8);
  lVar15 = (long)puVar17 + _DAT_1130370a8;
  _swift_unknownObjectWeakLoadStrong();
  aplStack_420[0] = plVar12;
  lStack_4f0 = lVar15;
  puStack_460 = auStack_510;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar9[-1] + 0x40));
  puVar17 = auStack_510 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(puVar17,pplVar11,plVar9);
  aplStack_448[0] = plVar6;
  lStack_3f8 = lStack_4f8;
  puStack_4d8 = puVar17;
  plStack_3f0 = plVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar7[-1] + 0x40));
  lVar15 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12_00 + 0x10))(lVar15,pplStack_508,plVar7);
  _swift_unknownObjectRetain(uVar16);
  _swift_retain_n(plVar12,2);
  plVar12 = plStack_4a8;
  _objc_retain();
  _swift_retain_n(plVar6,2);
  uVar13 = uStack_468;
  _swift_unknownObjectRetain(uStack_468);
  _objc_retain();
  _swift_unknownObjectRetain(lStack_498);
  _swift_retain(plVar3);
  _swift_unknownObjectRetain(uStack_4c8);
  *(undefined ***)(lVar15 + -0x10) = ppuStack_4e0;
  *(undefined ***)(lVar15 + -0x18) = ppuStack_4e8;
  *(undefined ***)(lVar15 + -0x20) = &PTR_DAT_110728558;
  *(undefined ***)(lVar15 + -0x28) = &PTR_DAT_110728d60;
  *(undefined ***)(lVar15 + -0x38) = &PTR_DAT_1107289b8;
  *(undefined ***)(lVar15 + -0x30) = &PTR_DAT_1107285c8;
  *(long **)(lVar15 + -0x48) = plVar9;
  *(undefined ***)(lVar15 + -0x40) = &PTR_DAT_110729170;
  *(long **)(lVar15 + -0x50) = plVar7;
  *(long **)(lVar15 + -0x58) = plStack_450;
  *(long **)(lVar15 + -0x60) = plStack_4a0;
  *(long **)(lVar15 + -0x68) = plStack_458;
  *(long **)(lVar15 + -0x70) = plStack_490;
  *(long *)(lVar15 + -0x78) = lStack_4b0;
  *(undefined8 *)(lVar15 + -0x80) = uStack_4c0;
  *(long *)(lVar15 + -0x88) = lStack_4f0;
  *(undefined1 *)(lVar15 + -0x90) = 0;
  *(long ***)(lVar15 + -0xa0) = aplStack_3e8;
  *(long **)(lVar15 + -0x98) = plVar12;
  *(long *)(lVar15 + -0xb0) = lVar15;
  *(long ***)(lVar15 + -0xa8) = aplStack_3c0;
  *(long ***)(lVar15 + -0xc0) = &plStack_3f0;
  *(long **)(lVar15 + -0xb8) = &lStack_3f8;
  uVar16 = uStack_500;
  lVar15 = lVar10;
  FUN_103f89d30(lVar10,uStack_4b8,aplStack_398,aplStack_420,uStack_500,puVar17,aplStack_448,uVar13);
  _objc_release(plStack_470);
  _swift_release(lVar10);
  _swift_unknownObjectRelease(uVar16);
  _swift_unknownObjectRelease(uVar13);
  _objc_release(plVar12);
  _objc_release(plVar12);
  FUN_103f85db0(auStack_340);
  FUN_103f85db0(auStack_318);
  FUN_103f85db0(aplStack_2e0);
  FUN_103f85db0(aplStack_370);
  FUN_103f85db0(aplStack_2b8);
  return lVar15;
}



/* Entry: 103f85cec; end: 103f85d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f85cec(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  long lVar14;
  long lVar15;
  long **pplVar16;
  undefined **ppuVar17;
  long lVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  code *pcVar24;
  long alStack_5d0 [6];
  undefined1 auStack_5a0 [8];
  long alStack_598 [17];
  undefined1 auStack_510 [8];
  long **pplStack_508;
  undefined8 uStack_500;
  undefined **ppuStack_4f8;
  long lStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined1 *puStack_4d8;
  long *plStack_4d0;
  long alStack_4c8 [4];
  long *plStack_4a8;
  long *plStack_4a0;
  long lStack_498;
  undefined **appuStack_490 [2];
  long lStack_480;
  long *aplStack_478 [2];
  long lStack_468;
  long *aplStack_460 [3];
  long *aplStack_448 [3];
  long **pplStack_430;
  long lStack_428;
  long *aplStack_420 [2];
  long alStack_410 [2];
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined **ppuStack_3c8;
  long *plStack_3c0;
  undefined **ppuStack_3b8;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  undefined **ppuStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined **ppuStack_350;
  undefined8 **ppuStack_348;
  long lStack_340;
  long *aplStack_338 [4];
  undefined1 auStack_318 [8];
  long *plStack_310;
  long lStack_308;
  long alStack_300 [2];
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined **appuStack_2e0 [2];
  long *plStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  long *plStack_290;
  undefined **ppuStack_288;
  long *aplStack_280 [3];
  long *plStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined1 auStack_250 [40];
  undefined1 auStack_228 [40];
  long lStack_200;
  long lStack_1f8;
  long *aplStack_1f0 [3];
  long lStack_1d8;
  undefined **ppuStack_1d0;
  long *aplStack_1c8 [3];
  long *plStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long *aplStack_188 [3];
  long *plStack_170;
  undefined **ppuStack_168;
  
  lVar18 = *(long *)(param_1 + _DAT_1130370b8);
  func_0x000107c4abc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = *(long *)(lVar18 + _DAT_1130390c0);
  lVar20 = lVar21;
  _objc_retain();
  _objc_release(lVar18);
  if ((lVar21 != 0) &&
     (cVar2 = *(char *)(lVar20 + _DAT_113039260), _objc_release(lVar20), cVar2 == '\x01')) {
    plVar4 = (long *)0x0;
    func_0x000103f83494();
    plVar10 = plVar4;
    _swift_allocObject();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    plVar10[2] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001003d21d8();
    plVar10[3] = (long)puVar5;
    uVar22 = *(undefined8 *)(param_1 + _DAT_1130370b8);
    *(undefined1 *)(plVar10 + 4) = 1;
    ppuStack_168 = &PTR_DAT_110728558;
    lVar18 = 0;
    aplStack_188[0] = plVar10;
    plStack_170 = plVar4;
    FUN_103f7ca5c();
    lVar20 = lVar18;
    _objc_allocWithZone();
    *(undefined8 *)(lVar20 + _DAT_113036c88) = uVar22;
    FUN_103f85dd0(aplStack_188,lVar20 + _DAT_113036c90);
    puVar5 = PTR_s_init_1125d9248;
    lStack_198 = lVar20;
    lStack_190 = lVar18;
    _swift_retain(plVar10);
    _swift_unknownObjectRetain(uVar22);
    plVar19 = &lStack_198;
    _objc_msgSendSuper2(plVar19,puVar5);
    FUN_103f85db0(aplStack_188);
    _swift_getObjectType(uVar22);
    func_0x000107c4abc0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    FUN_103f9beec(aplStack_188);
    _objc_retain();
    plVar12 = plVar19;
    lStack_468 = uVar22;
    FUN_103f7ccbc();
    aplStack_478[1] = plVar19;
    _objc_release(plVar19);
    ppuStack_298 = &PTR_DAT_110728558;
    lVar18 = 0;
    plStack_2b8 = plVar10;
    plStack_2a0 = plVar4;
    FUN_103f7ee18();
    ppuStack_350 = &PTR_DAT_110728360;
    plVar6 = (long *)0x0;
    plStack_370 = plVar12;
    plStack_358 = (long *)lVar18;
    func_0x000103f86888();
    plVar19 = plVar6;
    _swift_allocObject();
    _memcpy(plVar19 + 2,aplStack_188,0x120);
    func_0x000100db0578(&plStack_2b8,plVar19 + 0x26);
    func_0x000100db0578(&plStack_370,plVar19 + 0x2b);
    ppuStack_350 = &PTR_DAT_1107285c8;
    plStack_370 = plVar19;
    plStack_358 = plVar6;
    _swift_retain(plVar10);
    _objc_retain();
    _swift_retain(plVar19);
    FUN_103f7ced8(aplStack_188,&plStack_2b8);
    func_0x000103f843ec(&plStack_2b8,param_1,&plStack_370);
    FUN_103f85db0(&plStack_370);
    ppuStack_350 = &PTR_DAT_110728558;
    lVar21 = 0;
    plStack_370 = plVar10;
    plStack_358 = plVar4;
    FUN_103f82a28();
    lVar20 = lVar21;
    _objc_allocWithZone();
    *(undefined8 *)(lVar20 + _DAT_113036ee8) = 0;
    puVar1 = (undefined8 *)(lVar20 + _DAT_113036ef0);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_103f85dd0(&plStack_370,lVar20 + _DAT_113036ef8);
    puVar1 = (undefined8 *)(lVar20 + _DAT_113036f00);
    *puVar1 = 100;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar5 = PTR_s_init_1125d9248;
    puStack_2f0 = (undefined *)lVar20;
    lStack_2e8 = lVar21;
    _swift_retain(plVar10);
    ppuVar8 = (undefined **)(alStack_300 + 2);
    _objc_msgSendSuper2(ppuVar8,puVar5);
    ppuStack_2c0 = &PTR_DAT_110728538;
    appuStack_2e0[0] = ppuVar8;
    lStack_2c8 = lVar21;
    FUN_103f85db0(&plStack_370);
    func_0x000103f844f0(auStack_318,param_1);
    ppuStack_350 = &PTR_DAT_110728558;
    plStack_370 = plVar10;
    plStack_358 = plVar4;
    _swift_retain(plVar10);
    func_0x000103f8430c(&lStack_340,param_1,&plStack_370);
    FUN_103f85db0(&plStack_370);
    ppuStack_378 = &PTR_DAT_1107285c8;
    ppuStack_3a0 = &PTR_DAT_110728558;
    ppuStack_3c8 = &PTR_DAT_110728360;
    lVar20 = *(long *)(param_1 + _DAT_1130370e0);
    appuStack_490[0] = (undefined **)lVar18;
    aplStack_478[0] = plVar10;
    aplStack_460[0] = (long *)param_1;
    aplStack_460[1] = plVar6;
    aplStack_460[2] = plVar4;
    plStack_3e8 = plVar12;
    plStack_3d0 = (long *)lVar18;
    plStack_3c0 = plVar10;
    plStack_3a8 = plVar4;
    plStack_398 = plVar19;
    plStack_380 = plVar6;
    if (lVar20 == 0) {
      plVar6 = (long *)0x0;
      func_0x000103f8c6d0();
      plVar4 = plVar6;
      _swift_allocObject();
      plVar4[3] = 0;
      _swift_unknownObjectWeakInit(plVar4 + 2,0);
      ppuStack_350 = &PTR_DAT_110728ce0;
      ppuStack_348 = (undefined8 **)&PTR_DAT_110728d20;
      plStack_370 = plVar4;
      plStack_358 = plVar6;
      _swift_retain(plVar10);
      _objc_retain(plVar12);
      _swift_retain(plVar19);
    }
    else {
      FUN_103f85dd0(&plStack_398,&plStack_370);
      FUN_103f85dd0(&plStack_3c0,aplStack_420);
      func_0x000103f84298(&plStack_3e8,aplStack_448);
      if (pplStack_430 == (long **)0x0) {
        _swift_retain(plVar10);
        _objc_retain(plVar12);
        _swift_retain(plVar19);
        _swift_unknownObjectRetain(lVar20);
        FUN_103f841ec(aplStack_448);
        func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
        aplStack_448[0] = (long *)CONCAT71(aplStack_448[0]._1_7_,1);
        pplVar13 = aplStack_448;
        func_0x000100854cb0();
      }
      else {
        FUN_103f85e14(aplStack_448,pplStack_430);
        pcVar24 = *(code **)(lStack_428 + 0x18);
        _swift_retain(plVar10);
        _objc_retain(plVar12);
        _swift_retain(plVar19);
        _swift_unknownObjectRetain(lVar20);
        pplVar13 = pplStack_430;
        (*pcVar24)(pplStack_430,lStack_428);
        FUN_103f85db0(aplStack_448);
      }
      bVar3 = plStack_3d0 != (long *)0x0;
      plVar4 = (long *)0x0;
      func_0x000103f8bf74();
      plVar10 = plVar4;
      _swift_allocObject();
      lVar18 = 0;
      func_0x0001005f60b4();
      _swift_allocObject();
      func_0x0001005f60d4();
      plVar10[0xf] = lVar18;
      plVar10[0x11] = 0;
      _swift_unknownObjectWeakInit(plVar10 + 0x10,0);
      *(undefined2 *)(plVar10 + 0x12) = 0;
      plVar10[2] = lVar20;
      func_0x000100db0578(&plStack_370,plVar10 + 3);
      func_0x000100db0578(aplStack_420,plVar10 + 8);
      plVar10[0xd] = (long)pplVar13;
      *(bool *)(plVar10 + 0xe) = bVar3;
      ppuStack_350 = &PTR_DAT_110728a90;
      ppuStack_348 = (undefined8 **)&PTR_DAT_110728ad0;
      plStack_370 = plVar10;
      plStack_358 = plVar4;
    }
    FUN_103f841ec(&plStack_3e8);
    FUN_103f85db0(&plStack_3c0);
    FUN_103f85db0(&plStack_398);
    lVar20 = *(long *)((long)aplStack_460[0] + _DAT_1130370c0);
    plVar6 = (long *)0x0;
    lStack_498 = lVar20;
    func_0x000103f8cdec();
    plVar7 = plVar6;
    plStack_4a0 = plVar6;
    _swift_allocObject();
    plVar7[0xb] = 0;
    plVar7[10] = 0;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    FUN_103f85dd0(&lStack_340,plVar7 + 3);
    plVar7[8] = lVar20;
    plVar7[2] = 0;
    *(undefined1 *)(plVar7 + 9) = 0;
    puVar5 = (undefined *)0x113037078;
    func_0x0001000285a8(0x113037078,&UNK_10dcb2310);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 0xc;
    *(undefined8 *)(puVar5 + 0x10) = 6;
    plStack_380 = (long *)appuStack_490[0];
    ppuStack_378 = &PTR_DAT_110728360;
    lVar18 = 0;
    plStack_4a8 = plVar12;
    plStack_398 = plVar12;
    func_0x000103f8a654();
    lVar20 = lVar18;
    _swift_allocObject();
    func_0x000100db0578(&plStack_398,lVar20 + 0x10);
    *(long *)(puVar5 + 0x38) = lVar18;
    *(undefined ***)(puVar5 + 0x40) = &PTR_DAT_110728828;
    *(long *)(puVar5 + 0x20) = lVar20;
    lVar18 = 0;
    FUN_103f8c534();
    lVar20 = lVar18;
    _swift_allocObject();
    plVar12 = aplStack_460[1];
    *(undefined8 *)(lVar20 + 0x10) = 0x4044000000000000;
    *(long *)(puVar5 + 0x60) = lVar18;
    *(undefined ***)(puVar5 + 0x68) = &PTR_DAT_110728be0;
    *(long *)(puVar5 + 0x48) = lVar20;
    plStack_380 = aplStack_460[1];
    ppuStack_378 = &PTR_DAT_1107285c8;
    lVar18 = 0;
    plStack_398 = plVar19;
    func_0x000103f8c478();
    lVar20 = lVar18;
    _swift_allocObject();
    func_0x000100db0578(&plStack_398,lVar20 + 0x10);
    plVar10 = plStack_2a0;
    *(long *)(puVar5 + 0x88) = lVar18;
    *(undefined ***)(puVar5 + 0x90) = &PTR_DAT_110728b98;
    *(long *)(puVar5 + 0x70) = lVar20;
    plStack_4d0 = plVar19;
    FUN_103f85e14(&plStack_2b8,plStack_2a0);
    *(long **)(puVar5 + 0xb0) = plVar10;
    *(long **)(puVar5 + 0xb8) = plStack_290;
    func_0x0001000c5db4(puVar5 + 0x98);
    (**(code **)(plVar10[-1] + 0x10))();
    plVar4 = aplStack_460[2];
    plVar10 = aplStack_478[0];
    plStack_380 = plVar12;
    ppuStack_378 = &PTR_DAT_1107285c8;
    plStack_3a8 = aplStack_460[2];
    ppuStack_3a0 = &PTR_DAT_110728558;
    plStack_3c0 = aplStack_478[0];
    ppuStack_3c8 = &PTR_DAT_110728d60;
    lVar18 = 0;
    plStack_3e8 = plVar7;
    plStack_3d0 = plVar6;
    plStack_398 = plVar19;
    func_0x000103f8b03c();
    lVar20 = lVar18;
    _swift_allocObject();
    *(undefined1 *)(lVar20 + 0xb0) = 0;
    func_0x000100db0578(&plStack_398,lVar20 + 0x10);
    func_0x000100db0578(&plStack_3c0,lVar20 + 0x38);
    FUN_103f85dd0(&lStack_340,lVar20 + 0x60);
    func_0x000100db0578(&plStack_3e8,lVar20 + 0x88);
    plVar19 = plStack_358;
    *(long *)(puVar5 + 0xd8) = lVar18;
    *(undefined ***)(puVar5 + 0xe0) = &PTR_DAT_110728928;
    *(long *)(puVar5 + 0xc0) = lVar20;
    appuStack_490[1] = ppuStack_350;
    appuStack_490[0] = (undefined **)plStack_358;
    FUN_103f85e14(&plStack_370,plStack_358);
    *(undefined ***)(puVar5 + 0x108) = appuStack_490[1];
    *(undefined ***)(puVar5 + 0x100) = appuStack_490[0];
    func_0x0001000c5db4(puVar5 + 0xe8);
    (**(code **)(plVar19[-1] + 0x10))();
    ppuVar8 = (undefined **)0x0;
    func_0x000103f8b7d4();
    appuStack_490[0] = ppuVar8;
    _swift_allocObject();
    plVar12 = aplStack_460[0];
    ppuVar8[2] = puVar5;
    uVar22 = *(undefined8 *)((long)aplStack_460[0] + _DAT_1130370b0);
    plStack_380 = plVar4;
    ppuStack_378 = &PTR_DAT_110728558;
    plStack_398 = plVar10;
    lVar21 = 0;
    ppuStack_4f8 = ppuVar8;
    alStack_4c8[0] = uVar22;
    func_0x000103f90eb0();
    alStack_4c8[3] = lVar21;
    _swift_allocObject();
    *(undefined8 *)(lVar21 + 0x160) = 0;
    *(undefined8 *)(lVar21 + 0x168) = 0;
    *(undefined8 *)(lVar21 + 0x10) = uVar22;
    _memcpy(lVar21 + 0x18,aplStack_188,0x120);
    func_0x000100db0578(&plStack_398,lVar21 + 0x138);
    uVar22 = 0;
    FUN_103f873ec();
    uVar9 = 0;
    alStack_4c8[1] = uVar22;
    FUN_103f8258c();
    alStack_4c8[2] = uVar9;
    FUN_103f85dd0(appuStack_2e0,&plStack_398);
    plVar6 = plStack_2a0;
    plVar19 = plStack_4d0;
    uVar22 = *(undefined8 *)((long)plVar12 + _DAT_1130370c8);
    ppuStack_4e0 = ppuStack_298;
    pplVar13 = &plStack_2b8;
    uStack_500 = uVar22;
    FUN_103f85e14(pplVar13,plStack_2a0);
    plVar4 = plStack_358;
    ppuStack_4e8 = (undefined **)ppuStack_348;
    pplVar16 = &plStack_370;
    FUN_103f85e14(pplVar16,plStack_358);
    pplStack_508 = pplVar16;
    FUN_103f85dd0(&lStack_340,&plStack_3c0);
    FUN_103f85dd0(auStack_318,&plStack_3e8);
    lVar20 = (long)plVar12 + _DAT_1130370a8;
    _swift_unknownObjectWeakLoadStrong();
    aplStack_420[0] = plVar10;
    lStack_4f0 = lVar20;
    aplStack_460[0] = (long *)auStack_510;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar6[-1] + 0x40));
    puVar23 = auStack_510 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(extraout_x12 + 0x10))(puVar23,pplVar13,plVar6);
    aplStack_448[0] = plVar19;
    ppuStack_3f8 = ppuStack_4f8;
    puStack_4d8 = puVar23;
    plStack_3f0 = plVar7;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar4[-1] + 0x40));
    lVar18 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(extraout_x12_00 + 0x10))(lVar18,pplStack_508,plVar4);
    _swift_unknownObjectRetain(uVar22);
    _swift_retain_n(plVar10,2);
    plVar10 = plStack_4a8;
    _objc_retain();
    _swift_retain_n(plVar19,2);
    lVar20 = lStack_468;
    _swift_unknownObjectRetain(lStack_468);
    _objc_retain();
    _swift_unknownObjectRetain(lStack_498);
    _swift_retain(plVar7);
    _swift_unknownObjectRetain(alStack_4c8[0]);
    *(undefined ***)(lVar18 + -0x10) = ppuStack_4e0;
    *(undefined ***)(lVar18 + -0x18) = ppuStack_4e8;
    *(undefined ***)(lVar18 + -0x20) = &PTR_DAT_110728558;
    *(undefined ***)(lVar18 + -0x28) = &PTR_DAT_110728d60;
    *(undefined ***)(lVar18 + -0x38) = &PTR_DAT_1107289b8;
    *(undefined ***)(lVar18 + -0x30) = &PTR_DAT_1107285c8;
    *(long **)(lVar18 + -0x48) = plVar6;
    *(undefined ***)(lVar18 + -0x40) = &PTR_DAT_110729170;
    *(long **)(lVar18 + -0x50) = plVar4;
    *(long **)(lVar18 + -0x58) = aplStack_460[2];
    *(long **)(lVar18 + -0x60) = plStack_4a0;
    *(long **)(lVar18 + -0x68) = aplStack_460[1];
    *(undefined ***)(lVar18 + -0x70) = appuStack_490[0];
    *(long *)(lVar18 + -0x78) = alStack_4c8[3];
    *(long *)(lVar18 + -0x80) = alStack_4c8[1];
    *(long *)(lVar18 + -0x88) = lStack_4f0;
    *(undefined1 *)(lVar18 + -0x90) = 0;
    *(long ***)(lVar18 + -0xa0) = &plStack_3e8;
    *(long **)(lVar18 + -0x98) = plVar10;
    *(long *)(lVar18 + -0xb0) = lVar18;
    *(long ***)(lVar18 + -0xa8) = &plStack_3c0;
    *(long ***)(lVar18 + -0xc0) = &plStack_3f0;
    *(undefined ****)(lVar18 + -0xb8) = &ppuStack_3f8;
    uVar22 = uStack_500;
    lVar18 = lVar21;
    FUN_103f89d30(lVar21,alStack_4c8[2],&plStack_398,aplStack_420,uStack_500,puVar23,aplStack_448,
                  lVar20);
    _objc_release(aplStack_478[1]);
    _swift_release(lVar21);
    _swift_unknownObjectRelease(uVar22);
    _swift_unknownObjectRelease(lVar20);
    _objc_release(plVar10);
    _objc_release(plVar10);
    FUN_103f85db0(&lStack_340);
    FUN_103f85db0(auStack_318);
    FUN_103f85db0(appuStack_2e0);
    FUN_103f85db0(&plStack_370);
    FUN_103f85db0(&plStack_2b8);
    return lVar18;
  }
  plVar4 = (long *)0x0;
  func_0x000103f83494();
  plVar10 = plVar4;
  _swift_allocObject();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar10[2] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = puVar5;
  func_0x0001003d21d8();
  plVar10[3] = (long)puVar11;
  uVar22 = *(undefined8 *)(param_1 + _DAT_1130370b8);
  *(undefined1 *)(plVar10 + 4) = 0;
  ppuStack_168 = &PTR_DAT_110728558;
  lVar18 = 0;
  aplStack_188[0] = plVar10;
  plStack_170 = plVar4;
  FUN_103f7ca5c();
  lVar20 = lVar18;
  _objc_allocWithZone();
  *(undefined8 *)(lVar20 + _DAT_113036c88) = uVar22;
  FUN_103f85dd0(aplStack_188,lVar20 + _DAT_113036c90);
  puVar11 = PTR_s_init_1125d9248;
  lStack_198 = lVar20;
  lStack_190 = lVar18;
  _swift_retain(plVar10);
  _swift_unknownObjectRetain(uVar22);
  plVar19 = &lStack_198;
  _objc_msgSendSuper2(plVar19,puVar11);
  FUN_103f85db0(aplStack_188);
  _swift_getObjectType(uVar22);
  _objc_retain();
  plVar12 = plVar19;
  FUN_103f7caec();
  plStack_390 = plVar19;
  plStack_388 = plVar12;
  _objc_release(plVar19);
  plStack_380 = (long *)uVar22;
  func_0x000107c4abc0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  FUN_103f9beec(aplStack_188);
  ppuStack_1a8 = &PTR_DAT_110728558;
  plVar6 = (long *)0x0;
  aplStack_1c8[0] = plVar10;
  plStack_1b0 = plVar4;
  func_0x000103f86b20();
  plVar12 = plVar6;
  _swift_allocObject();
  _memcpy(plVar12 + 2,aplStack_188,0x120);
  func_0x000100db0578(aplStack_1c8,plVar12 + 0x26);
  plVar12[0x2b] = (long)puVar5;
  ppuStack_260 = &PTR_DAT_1107285f8;
  aplStack_280[0] = plVar12;
  plStack_268 = plVar6;
  _swift_retain(plVar10);
  _swift_retain(plVar12);
  func_0x000103f843ec(aplStack_1c8,param_1,aplStack_280);
  FUN_103f85db0(aplStack_280);
  ppuStack_260 = &PTR_DAT_110728558;
  lVar18 = 0;
  aplStack_280[0] = plVar10;
  plStack_268 = plVar4;
  FUN_103f82a28();
  lVar20 = lVar18;
  _objc_allocWithZone();
  *(undefined8 *)(lVar20 + _DAT_113036ee8) = 0;
  puVar1 = (undefined8 *)(lVar20 + _DAT_113036ef0);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_103f85dd0(aplStack_280,lVar20 + _DAT_113036ef8);
  puVar1 = (undefined8 *)(lVar20 + _DAT_113036f00);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar5 = PTR_s_init_1125d9248;
  lStack_200 = lVar20;
  lStack_1f8 = lVar18;
  _swift_retain(plVar10);
  plVar19 = &lStack_200;
  _objc_msgSendSuper2(plVar19,puVar5);
  ppuStack_1d0 = &PTR_DAT_110728538;
  aplStack_1f0[0] = plVar19;
  lStack_1d8 = lVar18;
  FUN_103f85db0(aplStack_280);
  func_0x000103f844f0(auStack_228,param_1);
  ppuStack_260 = &PTR_DAT_110728558;
  aplStack_280[0] = plVar10;
  plStack_268 = plVar4;
  _swift_retain(plVar10);
  func_0x000103f8430c(auStack_250,param_1,aplStack_280);
  FUN_103f85db0(aplStack_280);
  ppuStack_288 = &PTR_DAT_1107285f8;
  ppuStack_2b0 = &PTR_DAT_110728558;
  appuStack_2e0[0] = (undefined **)0x0;
  alStack_300[1] = 0;
  alStack_300[0] = 0;
  lStack_2e8 = 0;
  puStack_2f0 = (undefined *)0x0;
  lVar20 = *(long *)(param_1 + _DAT_1130370e0);
  ppuStack_378 = (undefined **)param_1;
  plStack_370 = plVar4;
  plStack_368 = plVar6;
  plStack_2d0 = plVar10;
  plStack_2b8 = plVar4;
  plStack_2a8 = plVar12;
  plStack_290 = plVar6;
  if (lVar20 == 0) {
    plVar4 = (long *)0x0;
    func_0x000103f8c6d0();
    plVar19 = plVar4;
    _swift_allocObject();
    plVar19[3] = 0;
    _swift_unknownObjectWeakInit(plVar19 + 2,0);
    ppuStack_260 = &PTR_DAT_110728ce0;
    ppuStack_258 = &PTR_DAT_110728d20;
    aplStack_280[0] = plVar19;
    plStack_268 = plVar4;
    _swift_retain(plVar10);
    _swift_retain(plVar12);
  }
  else {
    FUN_103f85dd0(&plStack_2a8,aplStack_280);
    FUN_103f85dd0(&plStack_2d0,aplStack_338);
    func_0x000103f84298(alStack_300,&plStack_360);
    if (ppuStack_348 == (long **)0x0) {
      _swift_retain(plVar10);
      _swift_retain(plVar12);
      _swift_unknownObjectRetain(lVar20);
      FUN_103f841ec(&plStack_360);
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      plStack_360 = (long *)CONCAT71(plStack_360._1_7_,1);
      pplVar13 = &plStack_360;
      func_0x000100854cb0();
    }
    else {
      FUN_103f85e14(&plStack_360,ppuStack_348);
      pcVar24 = *(code **)(lStack_340 + 0x18);
      _swift_retain(plVar10);
      _swift_retain(plVar12);
      _swift_unknownObjectRetain(lVar20);
      pplVar13 = ppuStack_348;
      (*pcVar24)(ppuStack_348,lStack_340);
      FUN_103f85db0(&plStack_360);
    }
    plVar4 = (long *)0x0;
    func_0x000103f8bf74();
    plVar19 = plVar4;
    _swift_allocObject();
    lVar18 = 0;
    func_0x0001005f60b4();
    _swift_allocObject();
    func_0x0001005f60d4();
    plVar19[0xf] = lVar18;
    plVar19[0x11] = 0;
    _swift_unknownObjectWeakInit(plVar19 + 0x10,0);
    *(undefined2 *)(plVar19 + 0x12) = 0;
    plVar19[2] = lVar20;
    func_0x000100db0578(aplStack_280,plVar19 + 3);
    func_0x000100db0578(aplStack_338,plVar19 + 8);
    plVar19[0xd] = (long)pplVar13;
    *(undefined1 *)(plVar19 + 0xe) = 0;
    ppuStack_260 = &PTR_DAT_110728a90;
    ppuStack_258 = &PTR_DAT_110728ad0;
    aplStack_280[0] = plVar19;
    plStack_268 = plVar4;
  }
  plStack_3a8 = plVar12;
  FUN_103f841ec(alStack_300);
  FUN_103f85db0(&plStack_2d0);
  FUN_103f85db0(&plStack_2a8);
  plVar19 = *(long **)((long)ppuStack_378 + _DAT_1130370c0);
  lVar14 = 0;
  plStack_398 = plVar19;
  func_0x000103f8cdec();
  lVar18 = lVar14;
  ppuStack_3a0 = (undefined **)lVar14;
  _swift_allocObject();
  *(undefined8 *)(lVar18 + 0x58) = 0;
  *(undefined8 *)(lVar18 + 0x50) = 0;
  *(undefined8 *)(lVar18 + 0x68) = 0;
  *(undefined8 *)(lVar18 + 0x60) = 0;
  FUN_103f85dd0(auStack_250,lVar18 + 0x18);
  *(long **)(lVar18 + 0x40) = plVar19;
  *(undefined8 *)(lVar18 + 0x10) = 0;
  *(undefined1 *)(lVar18 + 0x48) = 0;
  lVar20 = 0x113037078;
  func_0x0001000285a8(0x113037078,&UNK_10dcb2310);
  _swift_allocObject();
  *(undefined8 *)(lVar20 + 0x18) = 10;
  *(undefined8 *)(lVar20 + 0x10) = 5;
  lVar15 = 0;
  FUN_103f8c534();
  lVar21 = lVar15;
  _swift_allocObject();
  plVar19 = plStack_368;
  *(undefined8 *)(lVar21 + 0x10) = 0x4044000000000000;
  *(long *)(lVar20 + 0x38) = lVar15;
  *(undefined ***)(lVar20 + 0x40) = &PTR_DAT_110728be0;
  *(long *)(lVar20 + 0x20) = lVar21;
  plStack_290 = plStack_368;
  ppuStack_288 = &PTR_DAT_1107285f8;
  lVar15 = 0;
  plStack_2a8 = plVar12;
  func_0x000103f8c478();
  lVar21 = lVar15;
  _swift_allocObject();
  func_0x000100db0578(&plStack_2a8,lVar21 + 0x10);
  plVar4 = plStack_1b0;
  *(long *)(lVar20 + 0x60) = lVar15;
  *(undefined ***)(lVar20 + 0x68) = &PTR_DAT_110728b98;
  *(long *)(lVar20 + 0x48) = lVar21;
  FUN_103f85e14(aplStack_1c8,plStack_1b0);
  *(long **)(lVar20 + 0x88) = plVar4;
  *(undefined8 *)(lVar20 + 0x90) = uStack_1a0;
  func_0x0001000c5db4(lVar20 + 0x70);
  (**(code **)(plVar4[-1] + 0x10))();
  plStack_290 = plVar19;
  ppuStack_288 = &PTR_DAT_1107285f8;
  plStack_2b8 = plStack_370;
  ppuStack_2b0 = &PTR_DAT_110728558;
  appuStack_2e0[0] = &PTR_DAT_110728d60;
  lVar15 = 0;
  alStack_300[0] = lVar18;
  lStack_2e8 = lVar14;
  plStack_2d0 = plVar10;
  plStack_2a8 = plVar12;
  func_0x000103f8b03c();
  lVar21 = lVar15;
  _swift_allocObject();
  *(undefined1 *)(lVar21 + 0xb0) = 0;
  func_0x000100db0578(&plStack_2a8,lVar21 + 0x10);
  func_0x000100db0578(&plStack_2d0,lVar21 + 0x38);
  FUN_103f85dd0(auStack_250,lVar21 + 0x60);
  func_0x000100db0578(alStack_300,lVar21 + 0x88);
  plVar19 = plStack_268;
  *(long *)(lVar20 + 0xb0) = lVar15;
  *(undefined ***)(lVar20 + 0xb8) = &PTR_DAT_110728928;
  *(long *)(lVar20 + 0x98) = lVar21;
  ppuStack_3b8 = ppuStack_260;
  plStack_3c0 = plStack_268;
  FUN_103f85e14(aplStack_280,plStack_268);
  *(undefined ***)(lVar20 + 0xe0) = ppuStack_3b8;
  *(long **)(lVar20 + 0xd8) = plStack_3c0;
  func_0x0001000c5db4(lVar20 + 0xc0);
  (**(code **)(plVar19[-1] + 0x10))();
  plVar6 = (long *)0x0;
  func_0x000103f8b7d4();
  plStack_3c0 = plVar6;
  _swift_allocObject();
  plVar6[2] = lVar20;
  uVar22 = 0;
  FUN_103f873ec();
  ppuVar8 = ppuStack_378;
  plVar19 = *(long **)((long)ppuStack_378 + _DAT_1130370b0);
  lVar20 = 0;
  plStack_3f0 = plVar19;
  uStack_3d8 = uVar22;
  func_0x000103f909e8();
  lStack_3e0 = lVar20;
  _swift_allocObject();
  *(long **)(lVar20 + 0x10) = plVar19;
  uVar22 = 0;
  ppuStack_3c8 = (undefined **)lVar20;
  FUN_103f8258c();
  plStack_3d0 = (long *)uVar22;
  FUN_103f85dd0(aplStack_1f0,&plStack_2a8);
  plVar4 = plStack_1b0;
  uVar22 = *(undefined8 *)((long)ppuVar8 + _DAT_1130370c8);
  ppuStack_3f8 = ppuStack_1a8;
  pplVar13 = aplStack_1c8;
  FUN_103f85e14(pplVar13,plStack_1b0);
  plVar12 = plStack_268;
  ppuStack_400 = ppuStack_258;
  pplVar16 = aplStack_280;
  FUN_103f85e14(pplVar16,plStack_268);
  FUN_103f85dd0(auStack_250,&plStack_2d0);
  FUN_103f85dd0(auStack_228,alStack_300);
  lVar20 = (long)ppuVar8 + _DAT_1130370a8;
  _swift_unknownObjectWeakLoadStrong();
  alStack_410[1] = lVar20;
  ppuStack_378 = (undefined **)alStack_410;
  aplStack_338[0] = plVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar4[-1] + 0x40));
  plVar7 = (long *)((long)alStack_410 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(plVar7,pplVar13,plVar4);
  plVar19 = plStack_3a8;
  plStack_360 = plStack_3a8;
  plStack_3e8 = plVar7;
  plStack_310 = plVar6;
  lStack_308 = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar12[-1] + 0x40));
  lVar20 = (long)plVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12_02 + 0x10))(lVar20,pplVar16,plVar12);
  _swift_unknownObjectRetain(uVar22);
  _swift_retain_n(plVar19,2);
  _swift_retain(plVar10);
  plVar10 = plStack_380;
  _swift_unknownObjectRetain(plStack_380);
  _swift_unknownObjectRetain(plStack_398);
  _swift_retain(lVar18);
  _swift_unknownObjectRetain(plStack_3f0);
  *(undefined ***)(lVar20 + -0x10) = ppuStack_3f8;
  *(undefined ***)(lVar20 + -0x18) = ppuStack_400;
  *(undefined ***)(lVar20 + -0x20) = &PTR_DAT_110728558;
  *(undefined ***)(lVar20 + -0x28) = &PTR_DAT_110728d60;
  *(undefined ***)(lVar20 + -0x38) = &PTR_DAT_1107289b8;
  *(undefined ***)(lVar20 + -0x30) = &PTR_DAT_1107285f8;
  *(long **)(lVar20 + -0x48) = plVar4;
  *(undefined ***)(lVar20 + -0x40) = &PTR_DAT_110729158;
  *(long **)(lVar20 + -0x50) = plVar12;
  *(long **)(lVar20 + -0x58) = plStack_370;
  *(undefined ***)(lVar20 + -0x60) = ppuStack_3a0;
  *(long **)(lVar20 + -0x68) = plStack_368;
  *(long **)(lVar20 + -0x70) = plStack_3c0;
  *(long *)(lVar20 + -0x78) = lStack_3e0;
  *(undefined8 *)(lVar20 + -0x80) = uStack_3d8;
  *(long *)(lVar20 + -0x88) = alStack_410[1];
  *(undefined1 *)(lVar20 + -0x90) = 0;
  plVar19 = plStack_388;
  *(long **)(lVar20 + -0xa0) = alStack_300;
  *(long **)(lVar20 + -0x98) = plVar19;
  *(long *)(lVar20 + -0xb0) = lVar20;
  *(long ***)(lVar20 + -0xa8) = &plStack_2d0;
  *(long **)(lVar20 + -0xc0) = &lStack_308;
  *(long ***)(lVar20 + -0xb8) = &plStack_310;
  ppuVar8 = ppuStack_3c8;
  ppuVar17 = ppuStack_3c8;
  FUN_103f89d30(ppuStack_3c8,plStack_3d0,&plStack_2a8,aplStack_338,uVar22,plVar7,&plStack_360,
                plVar10);
  _objc_release(plStack_390);
  _swift_release(ppuVar8);
  _swift_unknownObjectRelease(uVar22);
  _swift_unknownObjectRelease(plVar10);
  _objc_release(plVar19);
  FUN_103f85db0(auStack_250);
  FUN_103f85db0(auStack_228);
  FUN_103f85db0(aplStack_1f0);
  FUN_103f85db0(aplStack_280);
  FUN_103f85db0(aplStack_1c8);
  return (long)ppuVar17;
}



/* Entry: 103f85d90; end: 103f85daf;  */

void FUN_103f85d90(void)

{
  _objc_opt_self(&PTR_PTR_11296ecd0);
  return;
}



/* Entry: 103f85db0; end: 103f85dcf;  */

void FUN_103f85db0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103f85dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103f85dd0; end: 103f85e13;  */

long FUN_103f85dd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103f85e14; end: 103f85e37;  */

long * FUN_103f85e14(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103f85e38; end: 103f85fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f85e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  lVar2 = _DAT_1130370a8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130370a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130370b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130370b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130370c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130370c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130370d0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130370d8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130370e0) = param_7;
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_8);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_7);
  puVar3 = auStack_70;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  return puVar3;
}


