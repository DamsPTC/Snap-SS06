/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e8c4cc; end: 108e8c523; -[SCSolidStrokeDrawer init] */

undefined1 * FUN_108e8c4cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fedd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    _CGPathCreateMutable();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    *(undefined8 *)((long)puVar1 + 0x28) = 0x4018000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e8c524; end: 108e8c567; -[SCSolidStrokeDrawer updateDrawerMetadata:emoji:contentSize:] */

void FUN_108e8c524(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_4;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108e8c568; end: 108e8c5af; -[SCSolidStrokeDrawer dealloc] */

void FUN_108e8c568(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGPathRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126fedd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108e8c5b0; end: 108e8c5fb; -[SCSolidStrokeDrawer clearDrawing] */

void FUN_108e8c5b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _CGPathRelease();
  _CGPathCreateMutable();
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e8c5fc; end: 108e8c7e3; -[SCSolidStrokeDrawer drawPoint:pointSet:] */

void FUN_108e8c5fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    uVar4 = *(undefined8 *)(param_3 + 8);
    func_0x00010c09ea00(param_5);
    func_0x00010c09ea00(param_5);
    _CGPathMoveToPoint(param_1,uVar4,0);
  }
  else {
    lVar1 = param_6;
    func_0x00010bf529e0();
    if (lVar1 != 2) {
      lVar1 = param_6;
      func_0x00010bf529e0();
      if (lVar1 == 3) {
        uVar4 = *(undefined8 *)(param_3 + 8);
        _CGPathRelease();
        _CGPathCreateMutable();
        *(undefined8 *)(param_3 + 8) = uVar4;
      }
      func_0x00010bf529e0(param_6);
      lVar1 = param_6;
      func_0x00010c0dfd40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00();
      uVar4 = param_1;
      uVar6 = param_2;
      func_0x00010bf529e0(param_6);
      lVar2 = param_6;
      func_0x00010c0dfd40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00();
      uVar5 = uVar4;
      uVar7 = uVar6;
      func_0x00010bf529e0(param_6);
      lVar3 = param_6;
      func_0x00010c0dfd40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00();
      func_0x00010bf529e0(param_6);
      func_0x00010bdc7f20(param_1,param_2,uVar4,uVar6,uVar5,uVar7,param_3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_108e8c7b0;
    }
  }
  uVar4 = *(undefined8 *)(param_3 + 8);
  func_0x00010c09ea00(param_5);
  func_0x00010c09ea00(param_5);
  _CGPathAddLineToPoint(param_1,uVar4,0);
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
  lVar1 = param_3;
LAB_108e8c7b0:
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e8c7e4; end: 108e8cb0f; -[SCSolidStrokeDrawer redrawPoints:] */

void FUN_108e8c7e4(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010bf529e0();
  if (uVar4 == 1) {
    uVar4 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    _objc_release(uVar4);
    _CGPathMoveToPoint(param_1,param_2,*(undefined8 *)(param_3 + 8),0);
    uVar1 = *(undefined8 *)(param_3 + 8);
    dVar5 = param_1;
    dVar6 = param_2;
  }
  else {
    uVar4 = param_5;
    func_0x00010bf529e0();
    if (uVar4 != 2) {
      uVar4 = param_5;
      func_0x00010bf529e0();
      if (2 < uVar4) {
        uVar4 = param_5;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ea00();
        uVar2 = param_5;
        dVar5 = param_1;
        dVar7 = param_2;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ea00();
        uVar3 = param_5;
        dVar6 = dVar5;
        dVar8 = dVar7;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ea00();
        func_0x00010bdc7f20(param_1,param_2,dVar5,dVar7,dVar6,dVar8,param_3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar4);
        uVar4 = param_5;
        func_0x00010bf529e0();
        if ((uVar4 & 0xfffffffffffffffe) != 2) {
          uVar4 = 1;
          do {
            uVar2 = param_5;
            func_0x00010c0dfd40(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ea00();
            dVar5 = param_1;
            dVar7 = param_2;
            _objc_release(uVar2);
            uVar4 = uVar4 + 1;
            uVar2 = param_5;
            func_0x00010c0dfd40(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ea00();
            dVar6 = dVar5;
            dVar8 = dVar7;
            _objc_release(uVar2);
            uVar2 = param_5;
            func_0x00010c0dfd40(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ea00();
            _objc_release(uVar2);
            _CGPathMoveToPoint((param_1 + dVar5) * 0.5,(param_2 + dVar7) * 0.5,
                               *(undefined8 *)(param_3 + 8),0);
            _CGPathAddQuadCurveToPoint
                      (dVar5,dVar7,(dVar5 + dVar6) * 0.5,(dVar7 + dVar8) * 0.5,
                       *(undefined8 *)(param_3 + 8),0);
            uVar2 = param_5;
            func_0x00010bf529e0();
            param_1 = dVar5;
            param_2 = dVar7;
          } while (uVar4 < uVar2 - 2);
        }
      }
      goto LAB_108e8c90c;
    }
    uVar4 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    dVar5 = param_1;
    dVar6 = param_2;
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    _objc_release(uVar4);
    _CGPathMoveToPoint(param_1,param_2,*(undefined8 *)(param_3 + 8),0);
    uVar1 = *(undefined8 *)(param_3 + 8);
  }
  _CGPathAddLineToPoint(dVar5,dVar6,uVar1,0);
LAB_108e8c90c:
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e8cb10; end: 108e8cb6b; -[SCSolidStrokeDrawer drawRect:rect:] */

void FUN_108e8cb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _CGContextAddPath(param_3,*(undefined8 *)(param_1 + 8));
  _CGContextSetLineCap(param_3,1);
  _CGContextSetLineWidth(*(undefined8 *)(param_1 + 0x18),param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bdc0fe0(uVar1);
  _CGContextSetStrokeColorWithColor(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbaf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextStrokePath_110347318)(param_3);
  return;
}



/* Entry: 108e8cb6c; end: 108e8cc27; -[SCSolidStrokeDrawer isPointEligibleForAdding:previousPoint:scale:] */

bool FUN_108e8cb6c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c09ea00(param_5);
  dVar2 = param_1;
  func_0x00010c09ea00(param_6);
  param_1 = param_1 - dVar2;
  func_0x00010bf6a5c0(param_3);
  dVar2 = dVar2 * 0.5;
  if (ABS(param_1) <= dVar2) {
    func_0x00010c09ea00(param_5);
    dVar3 = param_2;
    func_0x00010c09ea00(param_6);
    func_0x00010bf6a5c0(param_3);
    bVar1 = dVar2 * 0.5 < ABS(param_2 - dVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 108e8cc28; end: 108e8cc43; -[SCSolidStrokeDrawer scaleRange] */

undefined1  [16] FUN_108e8cc28(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = 1.0 / *(double *)(param_1 + 0x28);
  auVar1._8_8_ = 200.0 / *(double *)(param_1 + 0x28);
  return auVar1;
}



/* Entry: 108e8cc44; end: 108e8cd5f; -[SCSolidStrokeDrawer _addQuadCurveWithPoint1:point2:point3:isFirstThreePoints:] */

void FUN_108e8cc44(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7,undefined8 param_8,int param_9)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_9 == 0) {
    param_2 = (param_2 + param_4) * 0.5;
    param_1 = (param_1 + param_3) * 0.5;
  }
  dVar3 = (param_3 + param_5) * 0.5;
  dVar4 = (param_4 + param_6) * 0.5;
  lVar1 = param_7;
  _CGPathCreateMutable();
  _CGPathMoveToPoint(param_1,param_2);
  _CGPathAddQuadCurveToPoint(param_3,param_4,dVar3,dVar4,lVar1,0);
  _CGPathGetBoundingBox(lVar1);
  _CGPathAddPath(*(undefined8 *)(param_7 + 8),0,lVar1);
  _CGPathRelease(lVar1);
  dVar2 = *(double *)(param_7 + 0x18);
  func_0x00010bf6b020(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc20(param_3 - dVar2 * 2.0,param_4 - dVar2 * 2.0,dVar3 + dVar2 * 4.0,
                      dVar4 + dVar2 * 4.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e8cd60; end: 108e8cd77; -[SCSolidStrokeDrawer delegate] */

void FUN_108e8cd60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8cd78; end: 108e8cd83; -[SCSolidStrokeDrawer setDelegate:] */

void FUN_108e8cd78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108e8cd84; end: 108e8cd8b; -[SCSolidStrokeDrawer defaultStrokeWidth] */

undefined8 FUN_108e8cd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e8cd8c; end: 108e8cd93; -[SCSolidStrokeDrawer setDefaultStrokeWidth:] */

void FUN_108e8cd8c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108e8cd94; end: 108e8cdbf; -[SCSolidStrokeDrawer .cxx_destruct] */

void FUN_108e8cd94(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e8cdc0; end: 108e8ce5b; -[SCDrawingMetadata initWithCoder:] */

undefined1 * FUN_108e8cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fedd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8ce5c; end: 108e8cee3; -[SCDrawingMetadata initWithDrawingStrokes:smoothingVersion:] */

undefined1 *
FUN_108e8ce5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fedd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8cee4; end: 108e8cf07; -[SCDrawingMetadata copyWithZone:] */

undefined8 FUN_108e8cee4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e8cf08; end: 108e8cf67; -[SCDrawingMetadata encodeWithCoder:] */

void FUN_108e8cf08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110efd1d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efd1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8cf68; end: 108e8cfdb; -[SCDrawingMetadata hash] */

undefined8 * FUN_108e8cf68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e8d060;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108e8d060;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108e8d060;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108e8d060:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108e8cfdc; end: 108e8d07b; -[SCDrawingMetadata isEqual:] */

long FUN_108e8cfdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e8d060;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108e8d060;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e8d060;
    }
  }
  lVar3 = 1;
LAB_108e8d060:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e8d07c; end: 108e8d083; -[SCDrawingMetadata drawingStrokes] */

undefined8 FUN_108e8d07c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e8d084; end: 108e8d08b; -[SCDrawingMetadata smoothingVersion] */

undefined8 FUN_108e8d084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e8d08c; end: 108e8d097; -[SCDrawingMetadata .cxx_destruct] */

void FUN_108e8d08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8d098; end: 108e8d147; -[SCEmojiBrushResourceSOJUWrapper initWithCoder:] */

undefined1 * FUN_108e8d098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fede0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8d148; end: 108e8d1f3; -[SCEmojiBrushResourceSOJUWrapper initWithVersion:emojis:] */

undefined1 *
FUN_108e8d148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fede0;
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



/* Entry: 108e8d1f4; end: 108e8d217; -[SCEmojiBrushResourceSOJUWrapper copyWithZone:] */

undefined8 FUN_108e8d1f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e8d218; end: 108e8d277; -[SCEmojiBrushResourceSOJUWrapper encodeWithCoder:] */

void FUN_108e8d218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e6c8f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efd218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8d278; end: 108e8d2eb; -[SCEmojiBrushResourceSOJUWrapper hash] */

undefined8 * FUN_108e8d278(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108e8d36c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e8d378;
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
          goto LAB_108e8d378;
        }
        goto LAB_108e8d36c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e8d378:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e8d2ec; end: 108e8d393; -[SCEmojiBrushResourceSOJUWrapper isEqual:] */

long FUN_108e8d2ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e8d36c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e8d378;
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
          goto LAB_108e8d378;
        }
        goto LAB_108e8d36c;
      }
    }
    lVar3 = 0;
  }
LAB_108e8d378:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e8d394; end: 108e8d39b; -[SCEmojiBrushResourceSOJUWrapper version] */

undefined8 FUN_108e8d394(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e8d39c; end: 108e8d3a3; -[SCEmojiBrushResourceSOJUWrapper emojis] */

undefined8 FUN_108e8d39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e8d3a4; end: 108e8d3d3; -[SCEmojiBrushResourceSOJUWrapper .cxx_destruct] */

void FUN_108e8d3a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8d3d4; end: 108e8d3eb; -[SCWeak target] */

void FUN_108e8d3d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8d3ec; end: 108e8d3f7; -[SCWeak setTarget:] */

void FUN_108e8d3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108e8d3f8; end: 108e8d3ff; -[SCWeak .cxx_destruct] */

void FUN_108e8d3f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108e8d400; end: 108e8d623; -[SCIntermixedSectionCTPItem initWithCTPItems:title:section:itemPresentationModelSource:] */

undefined8 *
FUN_108e8d400(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_f8 = PTR_PTR_1126fede8;
  puVar2 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[5];
    puVar2[5] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar3);
    puVar2[2] = param_5;
    uVar3 = puVar2[5];
    func_0x00010bf529e0();
    puVar2[4] = uVar3;
    *(undefined1 *)(puVar2 + 3) = 1;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar8 * 8);
        uVar3 = param_6;
        func_0x00010c10f580(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2721e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(lVar7);
        _objc_release(uVar3);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar6 = puVar4;
    func_0x00010bf51e00();
    uVar3 = puVar2[6];
    puVar2[6] = puVar6;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(param_3 + 8);
}



/* Entry: 108e8d624; end: 108e8d62b; -[SCIntermixedSectionCTPItem title] */

undefined8 FUN_108e8d624(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e8d62c; end: 108e8d633; -[SCIntermixedSectionCTPItem section] */

undefined8 FUN_108e8d62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e8d634; end: 108e8d63b; -[SCIntermixedSectionCTPItem isCTPItemSection] */

undefined1 FUN_108e8d634(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 108e8d63c; end: 108e8d643; -[SCIntermixedSectionCTPItem itemCount] */

undefined8 FUN_108e8d63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e8d644; end: 108e8d64b; -[SCIntermixedSectionCTPItem ctpItems] */

undefined8 FUN_108e8d644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e8d64c; end: 108e8d653; -[SCIntermixedSectionCTPItem scStickers] */

undefined8 FUN_108e8d64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e8d654; end: 108e8d68f; -[SCIntermixedSectionCTPItem .cxx_destruct] */

void FUN_108e8d654(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8d690; end: 108e8d74b; -[SCIntermixedSectionLegacy initWithSCStickers:title:section:] */

undefined1 *
FUN_108e8d690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fedf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010bf529e0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8d74c; end: 108e8d753; -[SCIntermixedSectionLegacy title] */

undefined8 FUN_108e8d74c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e8d754; end: 108e8d75b; -[SCIntermixedSectionLegacy section] */

undefined8 FUN_108e8d754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e8d75c; end: 108e8d763; -[SCIntermixedSectionLegacy isCTPItemSection] */

undefined1 FUN_108e8d75c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 108e8d764; end: 108e8d76b; -[SCIntermixedSectionLegacy itemCount] */

undefined8 FUN_108e8d764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e8d76c; end: 108e8d773; -[SCIntermixedSectionLegacy scStickers] */

undefined8 FUN_108e8d76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e8d774; end: 108e8d7a3; -[SCIntermixedSectionLegacy .cxx_destruct] */

void FUN_108e8d774(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8d7a4; end: 108e8d9b3; -[SCStickerIntermixedCategory initWithCTPSearchSections:searchQuery:itemPresentationModelSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e8d7a4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined *puVar13;
  undefined *unaff_x23;
  long lVar14;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined1 *puVar15;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar8 = param_4;
  puVar13 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_f0 = PTR_PTR_1126fedf8;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar14 = (long)_DAT_11277cdc8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = param_5;
    _objc_release(uVar2);
    unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    puVar8 = auStack_e8;
    puVar13 = (undefined *)0x10;
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x26 = *plStack_130;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != unaff_x26) {
            _objc_enumerationMutation(param_3);
          }
          puVar4 = puVar1;
          func_0x00010be3d400(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x23);
          _objc_release(puVar4);
          puVar15 = puVar15 + 1;
        } while (puVar3 != puVar15);
        puVar8 = auStack_e8;
        puVar13 = (undefined *)0x10;
        puVar3 = param_3;
        puVar4 = &uStack_140;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    unaff_x24 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x24;
    func_0x00010c2480a0();
    unaff_x25 = &DAT_11277cdcc;
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277cdcc) = puVar3;
    _objc_release(unaff_x24);
    puVar5 = unaff_x23;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cdd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cdd0) = puVar5;
    _objc_release(uVar2);
    _objc_release(unaff_x23);
    puVar3 = (undefined1 *)puVar4;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_190;
  pcStack_148 = FUN_108e8d9b4;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar3;
  puVar5 = puVar8;
  puStack_170 = puVar1;
  puStack_168 = param_5;
  puStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  iVar10 = (int)puVar11;
  iVar12 = (int)puVar5;
  puStack_188 = PTR_PTR_1126fedf8;
  puStack_190 = puVar15;
  _objc_msgSendSuper2(&puStack_190,PTR_s_init_1125d9248);
  puVar5 = puVar8;
  if (ppuVar6 != (undefined1 **)0x0) {
    puVar1 = (undefined8 *)PTR_PTR_1126d4fa0;
    func_0x00010c271380();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126dc4a0;
    _objc_alloc();
    func_0x00010c040fe0();
    iVar10 = (int)&puStack_180;
    iVar12 = 1;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_180 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_11277cdd0);
    *(undefined **)((long)ppuVar6 + (long)_DAT_11277cdd0) = puVar13;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar13 = puVar8;
  }
  puVar15 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_1f0;
  pcStack_198 = FUN_108e8dad0;
  lStack_1e0 = unaff_x26;
  puStack_1d8 = unaff_x25;
  puStack_1d0 = unaff_x24;
  puStack_1c8 = unaff_x23;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  puStack_1b0 = ppuVar6;
  puStack_1a8 = puVar3;
  ppuStack_1a0 = &puStack_150;
  _objc_retain(puVar13);
  puStack_1e8 = PTR_PTR_1126fedf8;
  puStack_1f0 = puVar15;
  _objc_msgSendSuper2(&puStack_1f0,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined1 **)0x0) {
    lVar14 = (long)_DAT_11277cdc8;
    _objc_retain(puVar13);
    uVar2 = *(undefined8 *)((long)ppuVar7 + lVar14);
    *(undefined **)((long)ppuVar7 + lVar14) = puVar13;
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (iVar12 != 0) {
      puVar5 = PTR_PTR_1126dc4a0;
      _objc_alloc(PTR_PTR_1126dc4a0);
      puVar9 = PTR_PTR_1126d4fa0;
      func_0x00010c271380(PTR_PTR_1126d4fa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040fe0(puVar5);
      _objc_release(puVar9);
      func_0x00010befa120(puVar8);
      _objc_release(puVar5);
    }
    if (iVar10 != 0) {
      puVar5 = PTR_PTR_1126dc4a8;
      _objc_alloc(PTR_PTR_1126dc4a8);
      puVar9 = PTR_PTR_1126d4fa0;
      func_0x00010c271380(PTR_PTR_1126d4fa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa580(puVar5);
      _objc_release(puVar9);
      func_0x00010befa120(puVar8);
      _objc_release(puVar5);
    }
    puVar5 = puVar8;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)ppuVar7 + (long)_DAT_11277cdd0);
    *(undefined **)((long)ppuVar7 + (long)_DAT_11277cdd0) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  _objc_release(puVar13);
  return ppuVar7;
}



/* Entry: 108e8d9b4; end: 108e8dacf; -[SCStickerIntermixedCategory initWithSCStickers:section:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e8d9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_3;
  uVar7 = param_4;
  _objc_retain(param_3);
  iVar5 = (int)uVar8;
  iVar6 = (int)uVar7;
  puStack_48 = PTR_PTR_1126fedf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d4fa0;
    func_0x00010c271380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126dc4a0;
    _objc_alloc();
    func_0x00010c040fe0();
    iVar5 = (int)&puStack_40;
    iVar6 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cdd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cdd0) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_5 = param_4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar1 = &uStack_b0;
  _objc_retain(param_5);
  puStack_a8 = PTR_PTR_1126fedf8;
  uStack_b0 = param_3;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11277cdc8;
    _objc_retain(param_5);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_5;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (iVar6 != 0) {
      puVar3 = PTR_PTR_1126dc4a0;
      _objc_alloc(PTR_PTR_1126dc4a0);
      puVar4 = PTR_PTR_1126d4fa0;
      func_0x00010c271380(PTR_PTR_1126d4fa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040fe0(puVar3);
      _objc_release(puVar4);
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
    }
    if (iVar5 != 0) {
      puVar3 = PTR_PTR_1126dc4a8;
      _objc_alloc(PTR_PTR_1126dc4a8);
      puVar4 = PTR_PTR_1126d4fa0;
      func_0x00010c271380(PTR_PTR_1126d4fa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa580(puVar3);
      _objc_release(puVar4);
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
    }
    puVar3 = puVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cdd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cdd0) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8dad0; end: 108e8dc73; -[SCStickerIntermixedCategory initForPreTypeWithGiphy:withForYouSection:itemPresentationModelSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e8dad0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fedf8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11277cdc8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (param_4 != 0) {
      puVar4 = PTR_PTR_1126dc4a0;
      _objc_alloc(PTR_PTR_1126dc4a0);
      puVar5 = PTR_PTR_1126d4fa0;
      func_0x00010c271380(PTR_PTR_1126d4fa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040fe0(puVar4);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
    }
    if (param_3 != 0) {
      puVar4 = PTR_PTR_1126dc4a8;
      _objc_alloc(PTR_PTR_1126dc4a8);
      puVar5 = PTR_PTR_1126d4fa0;
      func_0x00010c271380(PTR_PTR_1126d4fa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa580(puVar4);
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
    }
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cdd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cdd0) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108e8dc74; end: 108e8dda3; -[SCStickerIntermixedCategory initWithChatStickerSearchDataSourceObservable:itemPresentationModelSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e8dc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fedf8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    uVar2 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cdd4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cdd4) = uVar2;
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e8dda4; end: 108e8de67;  */

void FUN_108e8dda4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c04c0(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e8de68; end: 108e8df9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8de68(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar4 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126dc4a8;
    _objc_alloc();
    uVar5 = param_2;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4fa0;
    func_0x00010c271380();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 0;
    func_0x00010bffa580();
    _objc_release(puVar2);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277cdd0);
    *(undefined **)(param_1 + _DAT_11277cdd0) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar1);
    param_3 = (undefined1 *)ppuVar4;
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126dc4a8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  puVar3 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d4fa0;
  func_0x00010c1554e0(param_3);
  func_0x00010c271380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_3);
  _objc_release(param_3);
  func_0x00010bffa580(puVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e8dfa0; end: 108e8e07b; -[SCStickerIntermixedCategory _intermixedSectionFromCTPSearchSection:searchQuery:itemPresentationModelSource:] */

void FUN_108e8dfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126dc4a8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d4fa0;
  uVar3 = param_3;
  func_0x00010c1554e0(param_3);
  func_0x00010c271380(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c1554e0(param_3);
  _objc_release(param_3);
  func_0x00010bffa580(puVar1,param_2,uVar2,puVar4,uVar3,param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e8e07c; end: 108e8e08b; -[SCStickerIntermixedCategory columnCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8e07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cdcc);
}



/* Entry: 108e8e08c; end: 108e8e09b; -[SCStickerIntermixedCategory sectionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8e08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cdd0),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108e8e09c; end: 108e8e1d7; -[SCStickerIntermixedCategory shouldDisplaySectionHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108e8e09c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(ulong *)(param_1 + _DAT_11277cdd0);
  _objc_retain(uVar6);
  uVar3 = uVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar6);
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar4 = *(undefined8 *)(uVar8 * 8);
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078c00();
        _objc_release(uVar4);
        if ((int)puVar7 == 0) {
          uVar8 = 1;
          goto LAB_108e8e194;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar3 = uVar6;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
    uVar8 = 0;
  }
LAB_108e8e194:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar8 = uVar6;
    func_0x00010be9cba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06db00();
    ppuVar1 = &PTR_PTR_1126dc4a8;
    if ((int)uVar6 == 0) {
      ppuVar1 = &PTR_PTR_1126dc4a0;
    }
    puVar7 = *ppuVar1;
    _objc_retain(uVar8);
    _objc_opt_class(puVar7);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar7);
    uVar3 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar8);
    uVar6 = uVar3;
    func_0x00010c14c320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return uVar6;
  }
  return uVar8;
}



/* Entry: 108e8e1d8; end: 108e8e293; -[SCStickerIntermixedCategory stickersForSection:] */

void FUN_108e8e1d8(ulong param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar3 = param_1;
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06db00();
  ppuVar1 = &PTR_PTR_1126dc4a8;
  if ((int)param_1 == 0) {
    ppuVar1 = &PTR_PTR_1126dc4a0;
  }
  puVar5 = *ppuVar1;
  _objc_retain(uVar3);
  _objc_opt_class(puVar5);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar4 = uVar2;
  func_0x00010c14c320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e8e294; end: 108e8e347; -[SCStickerIntermixedCategory ctpItemsForSection:] */

void FUN_108e8e294(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06db00();
  puVar3 = PTR_PTR_1126dc4a8;
  if ((int)param_1 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar4 = uVar1;
    func_0x00010bf5d8a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e8e348; end: 108e8e3eb; -[SCStickerIntermixedCategory stickerForIndexPath:] */

void FUN_108e8e348(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c1554e0(param_3);
  func_0x00010c255420(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf529e0();
  uVar1 = param_3;
  func_0x00010c0840e0();
  if (uVar1 < uVar2) {
    uVar1 = param_3;
    func_0x00010c0840e0(param_3);
    uVar2 = param_1;
    func_0x00010c0dfd40(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e8e3ec; end: 108e8e3fb; -[SCStickerIntermixedCategory numberOfSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8e3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cdd0),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108e8e3fc; end: 108e8e437; -[SCStickerIntermixedCategory numberOfItemsInSectionAtIndex:] */

undefined8 FUN_108e8e3fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c084220();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e8e438; end: 108e8e43b; -[SCStickerIntermixedCategory ctpSectionForSection:] */

void FUN_108e8e438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sectionAtIndex__112632f60);
  return;
}



/* Entry: 108e8e43c; end: 108e8e627; -[SCStickerIntermixedCategory addCTPItemsToSection:ctpItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8e43c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0df2e0();
  if ((param_3 < (long)uVar1) && (uVar1 = param_1, func_0x00010c06db00(), (int)uVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010bf5d8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    uVar4 = param_1;
    func_0x00010be9cba0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126dc4a8;
    _objc_opt_class(PTR_PTR_1126dc4a8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    puVar5 = PTR_PTR_1126dc4a8;
    _objc_alloc(PTR_PTR_1126dc4a8);
    puVar7 = puVar3;
    func_0x00010bf09f00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(uVar1);
    _objc_release(uVar1);
    func_0x00010bffa580(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar7);
    lVar11 = (long)_DAT_11277cdd0;
    lVar8 = *(long *)(param_1 + lVar11);
    func_0x00010c0d3c80();
    lVar9 = lVar8;
    func_0x00010bf529e0();
    if (lVar9 != 0) {
      func_0x00010c12d3c0(lVar8);
    }
    func_0x00010c066b00(lVar8);
    lVar9 = lVar8;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(long *)(param_1 + lVar11) = lVar9;
    _objc_release(uVar10);
    _objc_release(lVar8);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e8e628; end: 108e8e803; -[SCStickerIntermixedCategory addStickersToSection:stickers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8e628(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0df2e0();
  if ((param_3 < (long)uVar1) && (uVar1 = param_1, func_0x00010c06db00(), (uVar1 & 1) == 0)) {
    uVar2 = param_1;
    func_0x00010c255420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    uVar4 = param_1;
    func_0x00010be9cba0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126dc4a0;
    _objc_opt_class(PTR_PTR_1126dc4a0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    puVar5 = PTR_PTR_1126dc4a0;
    _objc_alloc(PTR_PTR_1126dc4a0);
    puVar7 = puVar3;
    func_0x00010bf09f00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(uVar1);
    _objc_release(uVar1);
    func_0x00010c040fe0(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar7);
    lVar11 = (long)_DAT_11277cdd0;
    lVar8 = *(long *)(param_1 + lVar11);
    func_0x00010c0d3c80();
    lVar9 = lVar8;
    func_0x00010bf529e0();
    if (lVar9 != 0) {
      func_0x00010c12d3c0(lVar8);
    }
    func_0x00010c066b00(lVar8);
    lVar9 = lVar8;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(long *)(param_1 + lVar11) = lVar9;
    _objc_release(uVar10);
    _objc_release(lVar8);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e8e804; end: 108e8e83f; -[SCStickerIntermixedCategory removeGiphySection:] */

void FUN_108e8e804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c074720();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeSection__1126292c8,param_3);
    return;
  }
  return;
}



/* Entry: 108e8e840; end: 108e8e883; -[SCStickerIntermixedCategory removeForYouSection:] */

long FUN_108e8e840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c155500();
  if (lVar1 == 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00010c12e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeSection__1126292c8,param_3);
    return param_1;
  }
  return 0;
}



/* Entry: 108e8e884; end: 108e8e907; -[SCStickerIntermixedCategory removeSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e8e884(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c0df2e0();
  if (param_3 < lVar1) {
    lVar5 = (long)_DAT_11277cdd0;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0d3c80();
    func_0x00010c12d3c0();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  return param_3 < lVar1;
}



/* Entry: 108e8e908; end: 108e8e943; -[SCStickerIntermixedCategory isCTPItemSectionAtIndex:] */

undefined8 FUN_108e8e908(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06dae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e8e944; end: 108e8e98b; -[SCStickerIntermixedCategory isGiphySection:] */

bool FUN_108e8e944(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c155500();
  if (lVar2 == 0x10) {
    bVar1 = true;
  }
  else {
    func_0x00010c155500(param_1,param_2,param_3);
    bVar1 = param_1 == 0x200;
  }
  return bVar1;
}



/* Entry: 108e8e98c; end: 108e8e9ff; -[SCStickerIntermixedCategory titleForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8e98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11277cdd0);
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    func_0x00010be9cba0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e8ea00; end: 108e8eb23; -[SCStickerIntermixedCategory ctpItemForIndexPath:] */

void FUN_108e8ea00(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c1554e0(param_3);
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0) ||
     (uVar5 = param_1, func_0x00010c06dae0(), puVar2 = PTR_PTR_1126dc4a8, (int)uVar5 == 0)) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = param_1;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    lVar3 = param_3;
    func_0x00010c0840e0();
    uVar4 = uVar1;
    func_0x00010c084220();
    uVar5 = 0;
    if (lVar3 < (long)uVar4) {
      uVar4 = uVar1;
      func_0x00010bf5d8a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_3);
      uVar5 = uVar4;
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108e8eb24; end: 108e8ec47; -[SCStickerIntermixedCategory scStickerForIndexPath:] */

void FUN_108e8eb24(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  func_0x00010c1554e0(param_3);
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0) ||
     (uVar1 = param_1, func_0x00010c06dae0(), puVar2 = PTR_PTR_1126dc4a0, (uVar1 & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    lVar4 = param_3;
    func_0x00010c0840e0();
    uVar3 = uVar1;
    func_0x00010c084220();
    uVar5 = 0;
    if (lVar4 < (long)uVar3) {
      uVar3 = uVar1;
      func_0x00010c14c320(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_3);
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108e8ec48; end: 108e8ec83; -[SCStickerIntermixedCategory sectionAtIndex:] */

undefined8 FUN_108e8ec48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9cba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1554e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e8ec84; end: 108e8ed73; -[SCStickerIntermixedCategory insertSCStickers:sectionType:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8ec84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277cdd0;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (param_5 <= uVar1) {
    puVar2 = PTR_PTR_1126dc4a0;
    _objc_alloc(PTR_PTR_1126dc4a0);
    puVar3 = PTR_PTR_1126d4fa0;
    func_0x00010c271380(PTR_PTR_1126d4fa0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040fe0(puVar2,param_2,param_3,puVar3,param_4);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0d3c80();
    func_0x00010c066b00();
    uVar5 = uVar4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8ed74; end: 108e8ef2b; -[SCStickerIntermixedCategory flatResults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8ed74(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + _DAT_11277cdd0);
  _objc_retain(lVar7);
  lVar8 = lVar7;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar7);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar3 = uVar9;
        func_0x00010c06dae0();
        ppuVar1 = &PTR_PTR_1126dc4a8;
        if ((int)uVar3 == 0) {
          ppuVar1 = &PTR_PTR_1126dc4a0;
        }
        puVar10 = *ppuVar1;
        _objc_retain(uVar9);
        _objc_opt_class(puVar10);
        uVar4 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar10);
        uVar3 = uVar9;
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar9);
        uVar9 = uVar3;
        func_0x00010c14c320();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010befa160(puVar2);
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar8 = (long)_DAT_11277cdd0;
    puVar5 = *(undefined1 **)(puVar2 + lVar8);
    func_0x00010bf529e0();
    if (puVar6 < puVar5) {
      func_0x00010c0dfd40(*(undefined8 *)(puVar2 + lVar8));
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8ef2c; end: 108e8ef87; -[SCStickerIntermixedCategory _sectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8ef2c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277cdd0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8ef88; end: 108e8efd7; -[SCStickerIntermixedCategory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8ef88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cdd4,0);
  _objc_storeStrong(param_1 + _DAT_11277cdc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cdd0,0);
  return;
}



/* Entry: 108e8efd8; end: 108e8f343; -[SCStickerCategory initWithEmojiSet:] */

undefined8 **
FUN_108e8efd8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x21;
  long lVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 *puStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 **ppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 **ppuStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 **ppuStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puStack_178 = PTR_PTR_1126fee00;
  ppuVar2 = &puStack_180;
  puStack_180 = param_1;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined8 **)0x0) {
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_240 = ppuVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_210 = puVar3;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_218 = puVar8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    puStack_238 = param_3;
    puStack_220 = puVar3;
    func_0x00010bf33060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &uStack_1c0;
    param_4 = auStack_f0;
    param_5 = (undefined8 *)0x10;
    puStack_230 = param_3;
    func_0x00010bf52a60();
    puStack_208 = param_3;
    if (param_3 != (undefined8 *)0x0) {
      lStack_228 = *plStack_1b0;
      puStack_208 = param_3;
      do {
        unaff_x23 = (undefined8 *)0x0;
        do {
          if (*plStack_1b0 != lStack_228) {
            _objc_enumerationMutation(puStack_230);
          }
          unaff_x28 = *(long *)(lStack_1b8 + (long)unaff_x23 * 8);
          unaff_x27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lVar4 = unaff_x28;
          func_0x00010bf8e2c0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar11 = *plStack_1f0;
            do {
              unaff_x25 = 0;
              do {
                if (*plStack_1f0 != lVar11) {
                  _objc_enumerationMutation(lVar4);
                }
                unaff_x24 = *(undefined8 *)(lStack_1f8 + unaff_x25 * 8);
                unaff_x26 = PTR_PTR_1126b0d08;
                _objc_alloc();
                func_0x00010c26b700();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c00f540();
                func_0x00010befa120(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
                unaff_x25 = unaff_x25 + 1;
              } while (lVar5 != unaff_x25);
              lVar5 = lVar4;
              func_0x00010bf52a60();
            } while (lVar5 != 0);
          }
          _objc_release(lVar4);
          lVar4 = unaff_x28;
          func_0x00010c2711a0(unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_218);
          _objc_release(lVar4);
          func_0x00010befa120(puStack_220);
          puVar6 = unaff_x27;
          func_0x00010bf51e00(unaff_x27);
          func_0x00010befa120(puStack_210);
          _objc_release(puVar6);
          _objc_release(unaff_x27);
          unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
        } while (unaff_x23 != puStack_208);
        puVar3 = &uStack_1c0;
        param_4 = auStack_f0;
        param_5 = (undefined8 *)0x10;
        puVar8 = puStack_230;
        func_0x00010bf52a60();
        puStack_208 = puVar8;
      } while (puVar8 != (undefined8 *)0x0);
    }
    _objc_release(puStack_230);
    puVar8 = puStack_210;
    puVar10 = puStack_210;
    func_0x00010bf51e00();
    ppuVar2 = ppuStack_240;
    puVar9 = ppuStack_240[1];
    ppuStack_240[1] = puVar10;
    _objc_release(puVar9);
    unaff_x21 = puStack_218;
    puVar10 = puStack_218;
    func_0x00010bf51e00();
    puVar9 = ppuVar2[2];
    ppuVar2[2] = puVar10;
    _objc_release(puVar9);
    unaff_x22 = puStack_220;
    puVar10 = puStack_220;
    func_0x00010bf51e00();
    puVar9 = ppuVar2[3];
    ppuVar2[3] = puVar10;
    _objc_release(puVar9);
    *(undefined2 *)((long)ppuVar2 + 0x49) = 0x101;
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puVar8);
    param_3 = puStack_238;
  }
  puVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_2a0;
  pcStack_248 = FUN_108e8f344;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar3;
  puVar9 = param_4;
  uStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = unaff_x22;
  puStack_268 = unaff_x21;
  puStack_260 = param_3;
  ppuStack_258 = ppuVar2;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_298 = PTR_PTR_1126fee00;
  puStack_2a0 = puVar8;
  _objc_msgSendSuper2(&puStack_2a0,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined8 **)0x0) {
    unaff_x23 = puVar3;
    func_0x00010bf51e00();
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_290 = unaff_x23;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = ppuVar7[1];
    ppuVar7[1] = puVar8;
    _objc_release(puVar10);
    _objc_release(unaff_x23);
    puVar8 = ppuVar7[2];
    ppuVar7[2] = &PTR__OBJC_CLASS___NSConstantArray_1111831a0;
    _objc_release(puVar8);
    puVar8 = ppuVar7[3];
    ppuVar7[3] = &PTR__OBJC_CLASS___NSConstantArray_1111831b8;
    _objc_release(puVar8);
    puVar8 = ppuVar7[2];
    func_0x00010bf529e0();
    *(bool *)((long)ppuVar7 + 0x4a) = (undefined8 *)0x1 < puVar8;
    ppuVar2 = ppuVar7;
    puVar10 = param_4;
    puVar9 = param_5;
    func_0x00010bddbfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = ppuVar7[10];
    ppuVar7[10] = ppuVar2;
    _objc_release(puVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  puVar1 = puStack_2a0;
  pcStack_2a8 = FUN_108e8f4b0;
  lStack_300 = unaff_x28;
  puStack_2f8 = unaff_x27;
  puStack_2f0 = unaff_x26;
  lStack_2e8 = unaff_x25;
  uStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  ppuStack_2d0 = ppuVar7;
  puStack_2c8 = param_5;
  puStack_2c0 = param_4;
  puStack_2b8 = puVar3;
  ppuStack_2b0 = &puStack_250;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  _objc_retain(param_8);
  _objc_retain(puVar1);
  puStack_308 = PTR_PTR_1126fee00;
  ppuVar2 = &puStack_310;
  puStack_310 = puVar8;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined8 **)0x0) {
    puVar3 = puVar10;
    func_0x00010c2553e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb17e0(ppuVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(puVar9);
  _objc_release(puVar10);
  return ppuVar2;
}



/* Entry: 108e8f344; end: 108e8f4af; -[SCStickerCategory initWithRecentStickers:normalIconImage:selectedIconImage:] */

undefined8 *
FUN_108e8f344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  uVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fee00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar7);
    _objc_release(uVar3);
    uVar3 = puVar1[2];
    puVar1[2] = &PTR__OBJC_CLASS___NSConstantArray_1111831a0;
    _objc_release(uVar3);
    uVar3 = puVar1[3];
    puVar1[3] = &PTR__OBJC_CLASS___NSConstantArray_1111831b8;
    _objc_release(uVar3);
    uVar4 = puVar1[2];
    func_0x00010bf529e0();
    *(bool *)((long)puVar1 + 0x4a) = 1 < uVar4;
    puVar5 = puVar1;
    uVar3 = param_4;
    uVar7 = param_5;
    func_0x00010bddbfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[10];
    puVar1[10] = puVar5;
    _objc_release(uVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar8 = uStack_60;
  _objc_retain(uVar3);
  _objc_retain(uVar7);
  _objc_retain(param_8);
  _objc_retain(uVar8);
  puStack_c8 = PTR_PTR_1126fee00;
  puVar1 = &uStack_d0;
  uStack_d0 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = uVar3;
    func_0x00010c2553e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb17e0(puVar1);
    _objc_release(uVar6);
  }
  _objc_release(uVar8);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  return puVar1;
}



/* Entry: 108e8f4b0; end: 108e8f5b7; -[SCStickerCategory initWithPageDataSource:backfillStickers:stickerBackfillMax:isHorizontalScrollEnabled:isCustomStickersEnabled:normalIconImage:selectedIconImage:] */

undefined8 *
FUN_108e8f4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  puStack_68 = PTR_PTR_1126fee00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c2553e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb17e0(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e8f5b8; end: 108e8f727; -[SCStickerCategory initWithChatStickerSearchDataSourceObservable:normalIconImage:selectedIconImage:] */

undefined8 *
FUN_108e8f5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fee00;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bddbfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e8f728; end: 108e8f76f;  */

void FUN_108e8f728(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d200();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e8f770; end: 108e8f7cf; -[SCStickerCategory _handleObservedStickerResult:] */

void FUN_108e8f770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e8f7d0;
  puStack_20 = &UNK_110ac7b98;
  uStack_18 = param_1;
  func_0x00010c0c04c0(param_3,param_2,&puStack_38,0,0);
  return;
}



/* Entry: 108e8f7d0; end: 108e8f863;  */

void FUN_108e8f7d0(long param_1,long param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108e8f864;
    puStack_38 = &UNK_110841f80;
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    lStack_28 = param_2;
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108e8f864; end: 108e8f91b;  */

undefined * FUN_108e8f864(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar4 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined **)(*(long *)(param_1 + 0x20) + 8) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d4eb8;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(puVar1 + 0x50);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = uVar6;
  _objc_release(uVar5);
  puVar2[0x49] = puVar1[0x49];
  puVar2[0x4a] = puVar1[0x4a];
  uVar5 = *(undefined8 *)(puVar1 + 8);
  func_0x00010bf52240(uVar5,param_2,ppuVar4);
  uVar6 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010bf52240(uVar5,param_2,ppuVar4);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(puVar1 + 0x18);
  func_0x00010bf52240(uVar5,param_2,ppuVar4);
  uVar6 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(puVar1 + 0x28);
  func_0x00010bf52240(uVar5,param_2,ppuVar4);
  uVar6 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(puVar1 + 0x38);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(puVar1 + 0x40);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = uVar6;
  _objc_release(uVar5);
  puVar2[0x48] = puVar1[0x48];
  return puVar2;
}



/* Entry: 108e8f91c; end: 108e8fa27; -[SCStickerCategory copyWithZone:] */

undefined * FUN_108e8f91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d4eb8;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  _objc_release(uVar2);
  puVar1[0x49] = *(undefined1 *)(param_1 + 0x49);
  puVar1[0x4a] = *(undefined1 *)(param_1 + 0x4a);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf52240(uVar2,param_2,param_3);
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf52240(uVar2,param_2,param_3);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf52240(uVar2,param_2,param_3);
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf52240(uVar2,param_2,param_3);
  uVar3 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  _objc_release(uVar2);
  puVar1[0x48] = *(undefined1 *)(param_1 + 0x48);
  return puVar1;
}



/* Entry: 108e8fa28; end: 108e8fa2f; -[SCStickerCategory sectionCount] */

void FUN_108e8fa28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108e8fa30; end: 108e8fa37; -[SCStickerCategory stickersForSection:] */

void FUN_108e8fa30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectAtIndexedSubscript__112615968);
  return;
}



/* Entry: 108e8fa38; end: 108e8faff; -[SCStickerCategory stickerForIndexPath:] */

void FUN_108e8fa38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c1554e0();
  if (uVar2 < uVar1) {
    uVar2 = param_3;
    func_0x00010c1554e0(param_3);
    func_0x00010c255420(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf529e0();
    uVar1 = param_3;
    func_0x00010c0840e0();
    if (uVar1 < uVar2) {
      uVar1 = param_3;
      func_0x00010c0840e0(param_3);
      uVar2 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = 0;
    }
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e8fb00; end: 108e8fb4b; -[SCStickerCategory titleForSection:] */

void FUN_108e8fb00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8fb4c; end: 108e8fbaf; -[SCStickerCategory ctpSectionForSection:] */

undefined8 FUN_108e8fb4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 108e8fbb0; end: 108e8fc6b; -[SCStickerCategory stickerPackIdForSection:] */

void FUN_108e8fbb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd40(uVar4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0f0a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_108e8fc58;
    }
  }
  uVar6 = 0;
LAB_108e8fc58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 108e8fc6c; end: 108e8fc87; -[SCStickerCategory shouldHorizontalScrollAtSection:] */

undefined8 FUN_108e8fc6c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bf4b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_containsIndex__1125b07a8);
    return uVar1;
  }
  return 0;
}



/* Entry: 108e8fc88; end: 108e8fcef; -[SCStickerCategory isEmptyState:] */

bool FUN_108e8fc88(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar2) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108e8fcf0; end: 108e8fcf7; -[SCStickerCategory isGiphySection:] */

undefined8 FUN_108e8fcf0(void)

{
  return 0;
}


