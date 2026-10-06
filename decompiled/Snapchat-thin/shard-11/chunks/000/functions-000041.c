/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080a6b1c; end: 1080a6b23; -[SCValdiTextGradientHelper needsColorUpdate] */

undefined1 FUN_1080a6b1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1080a6b24; end: 1080a6c37; -[SCValdiTextGradientHelper layoutInView:animator:] */

void FUN_1080a6b24(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  undefined *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_1080a6e4c();
  _objc_retain();
  if (*(long *)(unaff_x21 + 8) != 0) {
    if (unaff_x20 == 0) {
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(*(undefined8 *)(unaff_x21 + 8));
    }
    else {
      func_0x00010bfb68e0();
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(param_3 * 0.5,param_4 * 0.5,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6ca0();
      _objc_release(puVar1);
      unaff_x19 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971a0(0,0,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6ca0();
    }
    _objc_release(unaff_x19);
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a6c38; end: 1080a6d17; -[SCValdiTextGradientHelper layoutIfNeededInView:animator:] */

undefined8
FUN_1080a6c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1080a6e4c();
  _objc_retain();
  if (*(long *)(unaff_x21 + 8) != 0) {
    func_0x00010bfb68e0();
    uVar2 = param_1;
    uVar3 = param_2;
    uVar4 = param_3;
    uVar5 = param_4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = unaff_x19;
    func_0x00010bf20c00();
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
    _objc_release(unaff_x19);
    if ((uVar1 & 1) == 0) {
      func_0x00010c08ce00();
      uVar2 = 1;
      *(undefined1 *)(unaff_x21 + 0x18) = 1;
      goto LAB_1080a6ce8;
    }
  }
  uVar2 = 0;
LAB_1080a6ce8:
  _objc_release();
  _objc_release();
  return uVar2;
}



/* Entry: 1080a6d18; end: 1080a6e1b; -[SCValdiTextGradientHelper updateColorIfNeeded] */

bool FUN_1080a6d18(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(char *)(param_5 + 0x18) == '\x01') {
    if (*(long *)(param_5 + 8) == 0) {
      uVar1 = *(undefined8 *)(param_5 + 0x10);
      *(undefined8 *)(param_5 + 0x10) = 0;
      _objc_release(uVar1);
      *(undefined1 *)(param_5 + 0x18) = 0;
      return true;
    }
    func_0x00010bf20c00();
    if ((0.0 < param_3) && (func_0x00010bf20c00(*(undefined8 *)(param_5 + 8)), 0.0 < param_4)) {
      func_0x00010c08cdc0(*(undefined8 *)(param_5 + 8));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 8));
      uVar1 = 0;
      _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
      lVar3 = *(long *)(param_5 + 8);
      _UIGraphicsGetCurrentContext();
      func_0x00010c12fc60(lVar3,param_6,uVar1);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      if (lVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41600(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,lVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)(param_5 + 0x10) = puVar2;
        _objc_release(uVar1);
        *(undefined1 *)(param_5 + 0x18) = 0;
      }
      _objc_release(lVar3);
      return lVar3 != 0;
    }
  }
  return false;
}



/* Entry: 1080a6e1c; end: 1080a6e4b; -[SCValdiTextGradientHelper .cxx_destruct] */

void FUN_1080a6e1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a6e4c; end: 1080a6e5f;  */

void FUN_1080a6e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1080a6e60; end: 1080a6ea3; -[SCValdiTextLayout init] */

undefined8 FUN_1080a6e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSLayoutManager_1126b51e8);
  func_0x00010c021ca0(param_1,param_2,puVar1);
  func_0x0001080a7b6c();
  return param_1;
}



/* Entry: 1080a6ea4; end: 1080a6f5b; -[SCValdiTextLayout initWithLayoutManager:] */

undefined1 * FUN_1080a6ea4(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x0001080a7b40();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001080a7b74();
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = unaff_x19;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined **)(puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef96a0(*(undefined8 *)(puVar1 + 8));
    puVar3 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined **)(puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1bdbc0(0,*(undefined8 *)(puVar1 + 0x20));
    func_0x00010befbe20(*(undefined8 *)(puVar1 + 0x18));
  }
  func_0x0001080a7b7c();
  return puVar1;
}



/* Entry: 1080a6f5c; end: 1080a6f9f; -[SCValdiTextLayout setProcessedText:] */

void FUN_1080a6f5c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080a7b40();
  if (*(long *)(unaff_x20 + 0x10) != unaff_x19) {
    func_0x0001080a7b74();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = unaff_x19;
    _objc_release(uVar1);
    func_0x00010c125500();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a6fa0; end: 1080a7003; -[SCValdiTextLayout refreshProcessedTextStorage] */

void FUN_1080a6fa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010bf0e280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_opt_new(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  }
  func_0x00010c16b700(uVar1,param_2,puVar3);
  if (puVar2 == (undefined *)0x0) {
    func_0x0001080a7b50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1080a7004; end: 1080a700f; -[SCValdiTextLayout ensureLayout] */

void FUN_1080a7004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_ensureLayoutForTextContainer__1125c3388,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080a7010; end: 1080a706f; -[SCValdiTextLayout invalidateLayout] */

void FUN_1080a7010(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08fa60(uVar2);
    func_0x00010c06a020(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c069e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_invalidateDisplayForCharacterRan_1125f81b0,0,
               uVar2);
    return;
  }
  return;
}



/* Entry: 1080a7070; end: 1080a70df; -[SCValdiTextLayout _resolveDrawRectWithOrigin:] */

double FUN_1080a7070(double param_1)

{
  double unaff_d9;
  
  FUN_1080a7b00();
  func_0x00010c290f60();
  func_0x00010c23d0a0();
  return unaff_d9 - param_1;
}



/* Entry: 1080a70e0; end: 1080a7143; -[SCValdiTextLayout drawInRect:] */

void FUN_1080a70e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_1080a7b00();
  func_0x00010c202c80(param_3,param_4);
  func_0x00010bf96760();
  func_0x0001080a7b10();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x00010bfcd260(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf898d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,param_4,*(undefined8 *)(unaff_x19 + 0x18),
             PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8,uVar1,param_6);
  return;
}



/* Entry: 1080a7144; end: 1080a714b; -[SCValdiTextLayout size] */

void FUN_1080a7144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_size_11266ce50);
  return;
}



/* Entry: 1080a714c; end: 1080a719f; -[SCValdiTextLayout setSize:] */

void FUN_1080a714c(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long unaff_x19;
  double unaff_d8;
  double unaff_d9;
  
  FUN_1080a7b00();
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  bVar1 = false;
  if ((param_1 == unaff_d9) && (bVar1 = false, !NAN(param_2) && !NAN(unaff_d8))) {
    bVar1 = param_2 == unaff_d8;
  }
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c202c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x19 + 0x20),PTR_s_setSize__11265e548);
    return;
  }
  return;
}



/* Entry: 1080a71a0; end: 1080a71c3; -[SCValdiTextLayout usedRect] */

void FUN_1080a71a0(long param_1)

{
  func_0x00010bf96760();
                    /* WARNING: Could not recover jumptable at 0x00010c290f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_usedRectForTextContainer__112681e08,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080a71c4; end: 1080a71cb; -[SCValdiTextLayout setMaxNumberOfLines:] */

void FUN_1080a71c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c3c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMaximumNumberOfLines__11264e928);
  return;
}



/* Entry: 1080a71cc; end: 1080a71d3; -[SCValdiTextLayout maxNumberOfLines] */

void FUN_1080a71cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c3590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_maximumNumberOfLines_11260e778);
  return;
}



/* Entry: 1080a71d4; end: 1080a724f; -[SCValdiTextLayout characterIndexAtPoint:] */

undefined8 FUN_1080a71d4(int param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  double dVar2;
  double dVar3;
  double unaff_d8;
  double unaff_d9;
  
  FUN_1080a7b00();
  dVar2 = *(double *)PTR__CGPointZero_110347540;
  dVar3 = *(double *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010be94980(dVar2,dVar3);
  _CGRectContainsPoint();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bf359b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (unaff_d9 - dVar2,unaff_d8 - dVar3,uVar1,
               PTR_s_characterIndexForPoint_inTextCon_1125ab010,*(undefined8 *)(unaff_x19 + 0x20),0)
    ;
    return uVar1;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 1080a7250; end: 1080a7313; -[SCValdiTextLayout insertionIndexAtPoint:] */

/* WARNING: Removing unreachable block (ram,0x0001080a72c0) */
/* WARNING: Removing unreachable block (ram,0x0001080a72c8) */

void FUN_1080a7250(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double unaff_d8;
  double unaff_d9;
  
  func_0x0001080a7b34();
  func_0x00010bf96760();
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    dVar2 = *(double *)PTR__CGPointZero_110347540;
    dVar3 = *(double *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010be94980(dVar2,dVar3,param_1);
    func_0x00010bf359a0(unaff_d9 - dVar2,unaff_d8 - dVar3);
  }
  return;
}



/* Entry: 1080a7314; end: 1080a7363; -[SCValdiTextLayout boundingRectForRange:] */

void FUN_1080a7314(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfcd220(lVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfcd220(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf20b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boundingRectForGlyphRange_inText_1125a5c80,lVar1,
             lVar2 - lVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080a7364; end: 1080a73e3; -[SCValdiTextLayout _glyphRangeForCharacterRange:] */

undefined1  [16] FUN_1080a7364(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  func_0x00010bf96760();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  lVar5 = 0;
  lVar3 = 0x7fffffffffffffff;
  lVar6 = lVar5;
  if (((uVar2 != 0) && (param_4 != 0)) && (uVar1 = uVar2 - param_3, param_3 <= uVar2 && uVar1 != 0))
  {
    if (uVar1 <= param_4) {
      param_4 = uVar1;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010bfcd240(lVar4,0,param_3,param_4,0);
    lVar6 = 0;
    if (lVar4 != 0x7fffffffffffffff && lVar5 != 0) {
      lVar6 = lVar5;
    }
    lVar3 = 0x7fffffffffffffff;
    if (lVar4 != 0x7fffffffffffffff && lVar5 != 0) {
      lVar3 = lVar4;
    }
  }
  auVar7._8_8_ = lVar6;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Entry: 1080a73e4; end: 1080a74eb; -[SCValdiTextLayout selectionRectsForRange:inDrawingRect:] */

void FUN_1080a73e4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001080a7b34();
  lVar1 = param_1;
  func_0x00010be24220();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((lVar1 != 0x7fffffffffffffff) && (param_2 != 0)) {
    func_0x0001080a7b10(param_1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain();
    func_0x00010bf97d80(uVar3);
    _objc_retain(puVar2);
    func_0x0001080a7b7c();
    func_0x0001080a7b50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080a74ec; end: 1080a7633;  */

void FUN_1080a74ec(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,ulong param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar4 = param_1;
  dVar5 = param_2;
  dVar7 = param_3;
  uVar6 = param_4;
  _objc_retain(param_6);
  lVar2 = *(long *)(param_5 + 0x38);
  _NSIntersectionRange(*(undefined8 *)(param_5 + 0x30),lVar2,param_7,param_8);
  if (lVar2 != 0) {
    uVar1 = *(ulong *)(*(long *)(param_5 + 0x20) + 0x18);
    func_0x00010bf20b60();
    _CGRectIsEmpty();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_5 + 0x30);
      lVar2 = *(long *)(param_5 + 0x38);
      if (uVar1 < param_7) {
        _CGRectGetMaxX(dVar4,dVar5,dVar7,uVar6);
        dVar7 = dVar4 - param_1;
        dVar4 = param_1;
      }
      if (param_7 + param_8 < lVar2 + uVar1) {
        _CGRectGetMaxX(param_1,param_2,param_3,param_4);
        dVar7 = param_1 - dVar4;
      }
      uVar3 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c2971a0(dVar4 + *(double *)(param_5 + 0x40),dVar5 + *(double *)(param_5 + 0x48),
                          dVar7,uVar6,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      func_0x0001080a7b50();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1080a7634; end: 1080a7757; -[SCValdiTextLayout caretRectForCharacterIndex:inDrawingRect:] */

double FUN_1080a7634(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  
  func_0x0001080a7b34();
  func_0x00010bf96760();
  func_0x0001080a7b10(param_5);
  uVar2 = *(ulong *)(param_5 + 8);
  dVar4 = param_1;
  func_0x00010c08fa60();
  func_0x00010c290f60(param_5);
  if (uVar2 != 0) {
    uVar1 = param_7;
    if (uVar2 <= param_7) {
      uVar1 = uVar2 - 1;
    }
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010bfcd220(uVar3,param_6,uVar1);
    func_0x00010bf20b60(*(undefined8 *)(param_5 + 0x18),param_6,uVar3,1,
                        *(undefined8 *)(param_5 + 0x20));
    func_0x00010c099260(*(undefined8 *)(param_5 + 0x18),param_6,uVar3,0);
    if (param_7 < uVar2) {
      _CGRectGetMinX();
    }
    else {
      _CGRectGetMaxX(dVar4,param_2,param_3,param_4);
    }
    param_1 = param_1 + dVar4;
  }
  return param_1;
}



/* Entry: 1080a7758; end: 1080a77db; -[SCValdiTextLayout underlineRectsForRange:inDrawingRect:lineWidth:underlineOffset:] */

void FUN_1080a7758(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  
  func_0x00010bf96760();
  func_0x00010be94980(param_1);
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001080a0e7c();
  func_0x0001080a0dd8();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (((param_4 != 0) && (param_3 != 0x7fffffffffffffff)) &&
     (func_0x0001080a0e1c(), param_3 < uVar2)) {
    func_0x0001080a0e1c();
    _NSIntersectionRange(param_3,param_4,0,uVar2);
    if (param_4 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a0dd8();
      func_0x0001080a0df8();
      func_0x00010bf97b00(unaff_x19);
      func_0x0001080a0df8();
      func_0x0001080a0e4c();
      _objc_release(uVar3);
      func_0x0001080a0e5c();
    }
  }
  func_0x0001080a0e14();
  func_0x0001080a0de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080a77dc; end: 1080a7a8b; +[SCValdiTextLayout measureSizeWithMaxSize:fontAttributes:fontManager:text:traitCollection:] */

undefined1  [16]
FUN_1080a77dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
             undefined **param_9,long param_10)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 auVar11 [16];
  
  puVar7 = param_7;
  func_0x0001080a7b34();
  _objc_retain(puVar7);
  func_0x0001080a7b74();
  _objc_retain(param_9);
  lVar3 = param_10;
  _objc_retain();
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  if (param_10 == 0) {
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c076f00();
    if ((int)lVar6 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,
                          &PTR____CFConstantStringClassReference_110ed53d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(lVar3,param_6,puVar7,3);
      _objc_release(puVar7);
    }
    _objc_release(lVar3);
    puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  }
  PTR__OBJC_CLASS___NSAttributedString_1126af068 = puVar7;
  if (param_7 == (undefined *)0x0) {
    func_0x00010bf69680(puVar7);
    _objc_retainAutoreleasedReturnValue();
    param_7 = puVar7;
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x0001080a7b60();
  ppuVar1 = param_9;
  if (((ulong)puVar7 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  ppuVar10 = param_9;
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class();
    func_0x0001080a7b60();
    if (((ulong)puVar7 & 1) == 0) {
      ppuVar10 = (undefined **)0x0;
    }
  }
  puVar4 = param_7;
  func_0x00010c13a5a0(param_7,param_6,0,param_10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSStringDrawingContext_1126bb2c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSStringDrawingContext_1126bb2c8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0def20(param_7);
  func_0x00010c0df780(puVar7,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar5,param_6,puVar7,&PTR____CFConstantStringClassReference_110ed53f8);
  _objc_release(puVar7);
  uVar2 = 0x23;
  if (cRam0000000113253780 == '\0') {
    uVar2 = 0x21;
  }
  if (ppuVar10 == (undefined **)0x0) {
    puVar7 = PTR_PTR_1126d9280;
    func_0x00010c115820(PTR_PTR_1126d9280,param_6,param_9,puVar4,0,param_8,param_10,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf0e280();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    if (puVar9 == (undefined *)0x0) {
      func_0x0001080a7b1c(&PTR____CFConstantStringClassReference_110daafd8);
    }
    else {
      func_0x00010bf20bc0(puVar8,param_6,uVar2,puVar5);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    func_0x0001080a7b1c(ppuVar10);
  }
  func_0x00010b9685cc(param_3);
  func_0x00010b9685cc(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar10);
  _objc_release(param_10);
  func_0x0001080a7b6c();
  func_0x0001080a7b7c();
  func_0x0001080a7b50();
  auVar11._8_8_ = param_4;
  auVar11._0_8_ = param_3;
  return auVar11;
}



/* Entry: 1080a7a8c; end: 1080a7a9b; +[SCValdiTextLayout fontLeadingInMeasureEnabled] */

undefined1 FUN_1080a7a8c(void)

{
  return uRam0000000113253780;
}



/* Entry: 1080a7a9c; end: 1080a7aab; +[SCValdiTextLayout setFontLeadingInMeasureEnabled:] */

void FUN_1080a7a9c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam0000000113253780 = param_3;
  return;
}



/* Entry: 1080a7aac; end: 1080a7ab3; -[SCValdiTextLayout processedText] */

undefined8 FUN_1080a7aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a7ab4; end: 1080a7abb; -[SCValdiTextLayout layoutManager] */

undefined8 FUN_1080a7ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a7abc; end: 1080a7ac3; -[SCValdiTextLayout textContainer] */

undefined8 FUN_1080a7abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080a7ac4; end: 1080a7aff; -[SCValdiTextLayout .cxx_destruct] */

void FUN_1080a7ac4(long param_1)

{
  func_0x0001080a7b58(param_1 + 0x20);
  func_0x0001080a7b58(param_1 + 0x18);
  func_0x0001080a7b58(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a7b00; end: 1080a7b83;  */

void FUN_1080a7b00(void)

{
  return;
}



/* Entry: 1080a7b84; end: 1080a7fbf;  */

/* WARNING: Possible PIC construction at 0x0001080a7c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001080a7cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080a7c70) */
/* WARNING: Removing unreachable block (ram,0x0001080a7c74) */
/* WARNING: Removing unreachable block (ram,0x0001080a7ce0) */
/* WARNING: Removing unreachable block (ram,0x0001080a7c80) */
/* WARNING: Removing unreachable block (ram,0x0001080a7c84) */
/* WARNING: Removing unreachable block (ram,0x0001080a7c94) */
/* WARNING: Removing unreachable block (ram,0x0001080a7c9c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7cdc) */
/* WARNING: Removing unreachable block (ram,0x0001080a7ce8) */
/* WARNING: Removing unreachable block (ram,0x0001080a7d58) */
/* WARNING: Removing unreachable block (ram,0x0001080a7d00) */
/* WARNING: Removing unreachable block (ram,0x0001080a7d30) */
/* WARNING: Removing unreachable block (ram,0x0001080a7d5c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7d68) */
/* WARNING: Removing unreachable block (ram,0x0001080a7d98) */
/* WARNING: Removing unreachable block (ram,0x0001080a7dd4) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e50) */
/* WARNING: Removing unreachable block (ram,0x0001080a7de4) */
/* WARNING: Removing unreachable block (ram,0x0001080a7ea8) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e7c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e10) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e40) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e5c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e64) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e24) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e34) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e3c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e68) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e8c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7dfc) */
/* WARNING: Removing unreachable block (ram,0x0001080a7dc0) */
/* WARNING: Removing unreachable block (ram,0x0001080a7eb8) */
/* WARNING: Removing unreachable block (ram,0x0001080a7e94) */
/* WARNING: Removing unreachable block (ram,0x0001080a7ec0) */
/* WARNING: Removing unreachable block (ram,0x0001080a7ec8) */
/* WARNING: Removing unreachable block (ram,0x0001080a7f00) */
/* WARNING: Removing unreachable block (ram,0x0001080a7f0c) */
/* WARNING: Removing unreachable block (ram,0x0001080a7f20) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_1080a7b84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x0001080a7fe4();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x0001080a7fdc();
  if (uVar4 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010bf529e0(), uVar2 < 2)) {
    func_0x0001080a7fe4();
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bf529e0(uVar1);
    func_0x00010bffc4a0(puVar3);
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_1125b2440,&uStack_150,auStack_108,0x10);
  return;
}



/* Entry: 1080a7fc0; end: 1080a7feb;  */

void FUN_1080a7fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080a7fec; end: 1080a806f; -[SCValdiCapturedJSStacktrace initWithStackTrace:threadStatus:] */

undefined1 *
FUN_1080a7fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc5d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1080a8070; end: 1080a8077; -[SCValdiCapturedJSStacktrace stackTrace] */

undefined8 FUN_1080a8070(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a8078; end: 1080a807f; -[SCValdiCapturedJSStacktrace threadStatus] */

undefined8 FUN_1080a8078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a8080; end: 1080a808b; -[SCValdiCapturedJSStacktrace .cxx_destruct] */

void FUN_1080a8080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a808c; end: 1080a80db; -[SCValdiActivityIndicatorView initWithFrame:] */

undefined1 * FUN_1080a808c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc5d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bebf620(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a80dc; end: 1080a8123; -[SCValdiActivityIndicatorView layoutSubviews] */

void FUN_1080a80dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc5d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bebf620(param_1);
  return;
}



/* Entry: 1080a8124; end: 1080a8157; -[SCValdiActivityIndicatorView willEnqueueIntoValdiPool] */

bool FUN_1080a8124(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d92c0;
  _objc_opt_class(PTR_PTR_1126d92c0);
  return param_1 == puVar1;
}



/* Entry: 1080a8158; end: 1080a81ab; -[SCValdiActivityIndicatorView _startAnimatingIfNeeded] */

void FUN_1080a8158(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c0e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf20c00();
    _CGRectEqualToRect();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startAnimating_112671118);
      return;
    }
  }
  return;
}



/* Entry: 1080a81ac; end: 1080a8247; -[SCValdiActivityIndicatorView _setColor:animator:] */

undefined8
FUN_1080a81ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c06c0e0();
  func_0x00010c17e800(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c24dbc0(param_1);
  }
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc640(param_4,param_2,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1080a8248; end: 1080a8277; +[SCValdiActivityIndicatorView bindAttributes:] */

void FUN_1080a8248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_bindAttribute_invalidateLayoutOn_1125a41d8,
             &PTR____CFConstantStringClassReference_110dbf658,0,
             &PTR___NSConcreteGlobalBlock_110a1b110,&PTR___NSConcreteGlobalBlock_110a1b150);
  return;
}



/* Entry: 1080a8278; end: 1080a82ef;  */

void FUN_1080a8278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c2a4b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2c20(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080a82f0; end: 1080a8347; -[SCValdiBlurView initWithFrame:] */

undefined1 * FUN_1080a82f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc5e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea8120(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a8348; end: 1080a834b; -[SCValdiBlurView contentViewForInsertingValdiChildren] */

void FUN_1080a8348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentView_1125b10e0);
  return;
}



/* Entry: 1080a834c; end: 1080a8353; -[SCValdiBlurView requiresShapeLayerForBorderRadius] */

undefined8 FUN_1080a834c(void)

{
  return 1;
}



/* Entry: 1080a8354; end: 1080a835b; -[SCValdiBlurView willEnqueueIntoValdiPool] */

undefined8 FUN_1080a8354(void)

{
  return 1;
}



/* Entry: 1080a835c; end: 1080a83eb; -[SCValdiBlurView _setStyle:animator:] */

undefined8 FUN_1080a835c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (param_4 != 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc640(param_4,param_2,param_1);
    _objc_release(param_1);
  }
  func_0x0001080a8524();
  return 1;
}



/* Entry: 1080a83ec; end: 1080a8413; +[SCValdiBlurView bindAttributes:] */

void FUN_1080a83ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_bindAttribute_invalidateLayoutOn_1125a41f8,
             &PTR____CFConstantStringClassReference_110dbf3b8,0,
             &PTR___NSConcreteGlobalBlock_110a1b190,&PTR___NSConcreteGlobalBlock_110a1b1d0);
  return;
}



/* Entry: 1080a8414; end: 1080a84ff;  */

ulong FUN_1080a8414(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_2;
  _objc_retain();
  func_0x0001080a8510();
  if ((((uVar1 & 1) == 0) && (func_0x0001080a8510(), (uVar1 & 1) == 0)) &&
     (func_0x0001080a8510(), (uVar1 & 1) == 0)) {
    func_0x0001080a8510();
    if ((uVar1 & 1) == 0) {
      func_0x0001080a8510();
    }
  }
  func_0x0001080a8524();
  uVar1 = param_2;
  func_0x00010bea8120(param_2);
  _objc_release(param_4);
  _objc_release(param_2);
  func_0x0001080a8524();
  return uVar1;
}



/* Entry: 1080a8500; end: 1080a852b;  */

void FUN_1080a8500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setStyle_animator__1125879f0,1,param_3);
  return;
}



/* Entry: 1080a852c; end: 1080a85a3; -[SCValdiDatePicker initWithFrame:] */

undefined1 * FUN_1080a852c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc5e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189bc0(puVar1);
    func_0x00010c1dff00(puVar1);
    func_0x00010befbd60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a85a4; end: 1080a8637; -[SCValdiDatePicker sizeThatFits:] */

void FUN_1080a85a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_3;
  func_0x00010c1069e0();
  if (lVar1 == 2) {
    dVar2 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
    dVar3 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
    func_0x00010c267060(param_3);
    if ((0.0 < dVar2) && (0.0 < dVar3)) {
      return;
    }
  }
  puStack_38 = PTR_PTR_1126fc5e8;
  lStack_40 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_40,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1080a8638; end: 1080a863b; -[SCValdiDatePicker convertPoint:fromView:] */

void FUN_1080a8638(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 1080a863c; end: 1080a863f; -[SCValdiDatePicker convertPoint:toView:] */

void FUN_1080a863c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 1080a8640; end: 1080a871b; -[SCValdiDatePicker hitTest:withEvent:] */

void FUN_1080a8640(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  func_0x0001080a8c94();
  puVar1 = param_3;
  func_0x00010c2953a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126fc5e8;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2953a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295740(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a8ca8();
    ppuVar2 = (undefined1 **)param_3;
  }
  func_0x0001080a8c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1080a871c; end: 1080a8723; -[SCValdiDatePicker willEnqueueIntoValdiPool] */

undefined8 FUN_1080a871c(void)

{
  return 0;
}



/* Entry: 1080a8724; end: 1080a8767; -[SCValdiDatePicker valdi_setTextColor:] */

undefined8 FUN_1080a8724(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c220220();
  func_0x00010c220220(param_1,param_2,PTR____kCFBooleanFalse_11034ab60,
                      &PTR____CFConstantStringClassReference_110ed5418);
  return 1;
}



/* Entry: 1080a8768; end: 1080a879b; -[SCValdiDatePicker valdi_setOnChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a8768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080a8c94();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127743d8);
  *(undefined8 *)(param_1 + _DAT_1127743d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a879c; end: 1080a88ff; -[SCValdiDatePicker _handleOnChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a879c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x0001080a8c74();
  plVar1 = param_2;
  func_0x00010c295200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080a8bec();
  plVar2 = param_2;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf737c0(plVar1);
  _objc_release();
  func_0x0001080a8ca8();
  func_0x0001080a8c74();
  lVar4 = (long)_DAT_1127743d8;
  if (*(long *)((long)param_2 + lVar4) != 0) {
    func_0x00010b97f424();
    plVar1 = plVar2;
    func_0x00010b97f5e4();
    plVar3 = plVar2;
    func_0x00010b97f870(param_1,plVar2);
    FUN_1080a8bec();
    func_0x00010b97f5fc(plVar2,plVar3,plVar1);
    func_0x00010c0f9540(*(undefined8 *)((long)param_2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x0001080a88b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}



/* Entry: 1080a8900; end: 1080a89ef; +[SCValdiDatePicker bindAttributes:] */

void FUN_1080a8900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080a8c94();
  func_0x0001080a8c68();
  func_0x0001080a8c68();
  func_0x0001080a8c68();
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ff8,
                      &PTR___NSConcreteGlobalBlock_110a1b310,&PTR___NSConcreteGlobalBlock_110a1b350)
  ;
  func_0x00010bf1a0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf658,0,
                      &PTR___NSConcreteGlobalBlock_110a1b390,&PTR___NSConcreteGlobalBlock_110a1b3b0)
  ;
  func_0x00010bf1a100(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5498,1,
                      &PTR___NSConcreteGlobalBlock_110a1b3f0,&PTR___NSConcreteGlobalBlock_110a1b410)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a1b430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080a89f0; end: 1080a8a5f;  */

undefined8 FUN_1080a89f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080a8c7c();
  func_0x00010bf655e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a40(param_3);
  func_0x0001080a8c74();
  func_0x0001080a8ca8();
  return 1;
}



/* Entry: 1080a8a60; end: 1080a8abb;  */

void FUN_1080a8a60(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  
  func_0x0001080a8c7c();
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a40(param_2);
  func_0x0001080a8c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
  return;
}



/* Entry: 1080a8abc; end: 1080a8b07;  */

undefined8 FUN_1080a8abc(void)

{
  FUN_1080a8c50();
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8220();
  func_0x0001080a8c8c();
  func_0x0001080a8c74();
  return 1;
}



/* Entry: 1080a8b08; end: 1080a8b13;  */

void FUN_1080a8b08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setMinimumDate__11264fab0,0);
  return;
}



/* Entry: 1080a8b14; end: 1080a8b5f;  */

undefined8 FUN_1080a8b14(void)

{
  FUN_1080a8c50();
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3ac0();
  func_0x0001080a8c8c();
  func_0x0001080a8c74();
  return 1;
}



/* Entry: 1080a8b60; end: 1080a8b93;  */

void FUN_1080a8b60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setMaximumDate__11264e8d8,0);
  return;
}



/* Entry: 1080a8b94; end: 1080a8baf;  */

undefined8 FUN_1080a8b94(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1dff00(param_2);
  return 1;
}



/* Entry: 1080a8bb0; end: 1080a8bbb;  */

void FUN_1080a8bb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setPreferredDatePickerStyle__1126559e8,1);
  return;
}



/* Entry: 1080a8bbc; end: 1080a8bd7;  */

void FUN_1080a8bbc(void)

{
  _objc_opt_new(PTR_PTR_1126d92c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080a8bd8; end: 1080a8beb; -[SCValdiDatePicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a8bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127743d8,0);
  return;
}



/* Entry: 1080a8bec; end: 1080a8c4f;  */

undefined8 FUN_1080a8bec(void)

{
  if (lRam0000000113729148 != -1) {
    func_0x000107c27d9c(0x113729148,&PTR___NSConcreteGlobalBlock_110a1b450);
  }
  return uRam0000000113729140;
}



/* Entry: 1080a8c50; end: 1080a8caf;  */

void FUN_1080a8c50(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1080a8cb0; end: 1080a8d27; -[SCValdiDateTimePicker initWithFrame:] */

undefined1 * FUN_1080a8cb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc5f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189bc0(puVar1);
    func_0x00010c1dff00(puVar1);
    func_0x00010befbd60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a8d28; end: 1080a8d2b; -[SCValdiDateTimePicker convertPoint:fromView:] */

void FUN_1080a8d28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 1080a8d2c; end: 1080a8d2f; -[SCValdiDateTimePicker convertPoint:toView:] */

void FUN_1080a8d2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 1080a8d30; end: 1080a8e0b; -[SCValdiDateTimePicker hitTest:withEvent:] */

void FUN_1080a8d30(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  func_0x0001080a92d0();
  puVar1 = param_3;
  func_0x00010c2953a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126fc5f0;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2953a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295740(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a92c8();
    ppuVar2 = (undefined1 **)param_3;
  }
  func_0x0001080a92b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1080a8e0c; end: 1080a8e13; -[SCValdiDateTimePicker willEnqueueIntoValdiPool] */

undefined8 FUN_1080a8e0c(void)

{
  return 0;
}



/* Entry: 1080a8e14; end: 1080a8e47; -[SCValdiDateTimePicker valdi_setOnChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a8e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080a92d0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127743dc);
  *(undefined8 *)(param_1 + _DAT_1127743dc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a8e48; end: 1080a8fab; -[SCValdiDateTimePicker _handleOnChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a8e48(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x0001080a929c();
  plVar1 = param_2;
  func_0x00010c295200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080a9214();
  plVar2 = param_2;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf737c0(plVar1);
  _objc_release();
  func_0x0001080a92c8();
  func_0x0001080a929c();
  lVar4 = (long)_DAT_1127743dc;
  if (*(long *)((long)param_2 + lVar4) != 0) {
    func_0x00010b97f424();
    plVar1 = plVar2;
    func_0x00010b97f5e4();
    plVar3 = plVar2;
    func_0x00010b97f870(param_1,plVar2);
    FUN_1080a9214();
    func_0x00010b97f5fc(plVar2,plVar3,plVar1);
    func_0x00010c0f9540(*(undefined8 *)((long)param_2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x0001080a8f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}



/* Entry: 1080a8fac; end: 1080a9053; +[SCValdiDateTimePicker bindAttributes:] */

void FUN_1080a8fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080a92d0();
  func_0x0001080a9290();
  func_0x0001080a9290();
  func_0x0001080a9290();
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ff8,
                      &PTR___NSConcreteGlobalBlock_110a1b590,&PTR___NSConcreteGlobalBlock_110a1b5d0)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a1b5f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080a9054; end: 1080a90c3;  */

undefined8 FUN_1080a9054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080a92a4();
  func_0x00010bf655e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a40(param_3);
  func_0x0001080a929c();
  func_0x0001080a92c8();
  return 1;
}



/* Entry: 1080a90c4; end: 1080a911f;  */

void FUN_1080a90c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  
  func_0x0001080a92a4();
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189a40(param_2);
  func_0x0001080a92b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
  return;
}



/* Entry: 1080a9120; end: 1080a916b;  */

undefined8 FUN_1080a9120(void)

{
  FUN_1080a9278();
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8220();
  func_0x0001080a92b4();
  func_0x0001080a929c();
  return 1;
}



/* Entry: 1080a916c; end: 1080a9177;  */

void FUN_1080a916c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setMinimumDate__11264fab0,0);
  return;
}



/* Entry: 1080a9178; end: 1080a91c3;  */

undefined8 FUN_1080a9178(void)

{
  FUN_1080a9278();
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3ac0();
  func_0x0001080a92b4();
  func_0x0001080a929c();
  return 1;
}



/* Entry: 1080a91c4; end: 1080a91e3;  */

void FUN_1080a91c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setMaximumDate__11264e8d8,0);
  return;
}



/* Entry: 1080a91e4; end: 1080a91ff;  */

void FUN_1080a91e4(void)

{
  _objc_opt_new(PTR_PTR_1126d92d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080a9200; end: 1080a9213; -[SCValdiDateTimePicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a9200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127743dc,0);
  return;
}



/* Entry: 1080a9214; end: 1080a9277;  */

undefined8 FUN_1080a9214(void)

{
  if (lRam0000000113729158 != -1) {
    func_0x000107c27d9c(0x113729158,&PTR___NSConcreteGlobalBlock_110a1b610);
  }
  return uRam0000000113729150;
}



/* Entry: 1080a9278; end: 1080a92d7;  */

void FUN_1080a9278(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1080a92d8; end: 1080a9353; -[SCValdiGlassView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1080a92d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc5f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127743e0) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127743e4) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127743e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127743e8) = 0;
    _objc_release(uVar2);
    func_0x00010bdce0e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a9354; end: 1080a9357; -[SCValdiGlassView contentViewForInsertingValdiChildren] */

void FUN_1080a9354(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentView_1125b10e0);
  return;
}



/* Entry: 1080a9358; end: 1080a93a7; -[SCValdiGlassView requiresShapeLayerForBorderRadius] */

uint FUN_1080a9358(uint param_1)

{
  func_0x0001080a9370();
  return param_1 ^ 1;
}



/* Entry: 1080a93a8; end: 1080a93af; -[SCValdiGlassView willEnqueueIntoValdiPool] */

undefined8 FUN_1080a93a8(void)

{
  return 1;
}


