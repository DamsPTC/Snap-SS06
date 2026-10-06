/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f8f710; end: 103f8f783; -[_TtC21LensCarouselPresenter26LensCarouselBaseTapHandler gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_103f8f710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_4;
  FUN_103f8fc9c(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103f8f784; end: 103f8f88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8f784(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_113037f70;
  _swift_unknownObjectWeakLoadStrong(lVar1);
  func_0x000107c4b8b8(param_1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000107c5bcc0();
  if ((lVar1 == 3) && (FUN_103f8f8dc(param_1), (param_2 & 0xff) != 1)) {
    lVar1 = unaff_x20 + _DAT_113037f80;
    _swift_beginAccess(lVar1,auStack_58,0,0);
    lVar2 = lVar1;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar1 + 8);
      lVar1 = lVar2;
      _swift_getObjectType();
      FUN_103f8fa78();
      pcVar4 = *(code **)(lVar3 + 8);
      _objc_retain();
      (*pcVar4)(&stack0xffffffffffffff80,param_1,lVar1,lVar3);
      _swift_unknownObjectRelease(lVar2);
      func_0x0001000834e4(&stack0xffffffffffffff80);
    }
  }
  return;
}



/* Entry: 103f8f88c; end: 103f8f8db; -[_TtC21LensCarouselPresenter26LensCarouselBaseTapHandler handleTap:] */

void FUN_103f8f88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f8f784(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f8f8dc; end: 103f8f9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8f8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar1 = _DAT_113037f70;
  lVar4 = unaff_x20 + _DAT_113037f70;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    func_0x000107c4b8b8(param_3);
    uVar5 = unaff_x20 + lVar1;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x00010bf20c00();
      _CGRectContainsPoint();
      if ((uVar6 & 1) != 0) {
        lVar1 = unaff_x20 + _DAT_113037f78;
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        lVar3 = *(long *)(lVar1 + 0x20);
        func_0x0001000a8868(lVar1,uVar2);
        (**(code **)(lVar3 + 8))(param_1,param_2,uVar5,uVar2,lVar3);
        _objc_release(uVar5);
        _objc_release(lVar4);
        return;
      }
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 103f8f9d4; end: 103f8fa2f; -[_TtC21LensCarouselPresenter26LensCarouselBaseTapHandler init] */

void FUN_103f8f9d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCarouselBaseTapHandler",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8fa00);
  (*pcVar1)();
}



/* Entry: 103f8fa30; end: 103f8fa77; -[_TtC21LensCarouselPresenter26LensCarouselBaseTapHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f8fa30(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113037f70);
  func_0x0001000834e4(param_1 + _DAT_113037f78);
  param_1 = param_1 + _DAT_113037f80;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f8fa78; end: 103f8fa97;  */

void FUN_103f8fa78(void)

{
  _objc_opt_self(&PTR_PTR_11296efd8);
  return;
}



/* Entry: 103f8fa98; end: 103f8fae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8fa98(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20 + _DAT_113037f80;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(lVar1);
  return;
}



/* Entry: 103f8fae8; end: 103f8fc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8fae8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20 + _DAT_113037f80;
  _swift_beginAccess(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 103f8fc58; end: 103f8fc9b;  */

uint FUN_103f8fc58(uint param_1)

{
  FUN_103f8f440();
  return param_1 & 1;
}



/* Entry: 103f8fc9c; end: 103f8fd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f8fc9c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20 + _DAT_113037f70;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    if (lVar1 == 0) {
      uVar3 = 1;
      goto LAB_103f8fd2c;
    }
    uVar3 = 0;
  }
  else if (lVar1 == 0) {
    uVar3 = 0;
    lVar1 = param_1;
  }
  else {
    func_0x000100f115fc(0);
    _objc_retain(param_1);
    lVar2 = param_1;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    uVar3 = (uint)lVar2;
    _objc_release(lVar1);
    _objc_release(param_1);
    lVar1 = param_1;
  }
  _objc_release(lVar1);
LAB_103f8fd2c:
  return uVar3 & 1;
}



/* Entry: 103f8fd48; end: 103f8fd6b;  */

undefined8 FUN_103f8fd48(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f8fd6c; end: 103f8fd73; -[_TtC21LensCarouselPresenter27LensCarouselEagerTapHandler gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_103f8fd6c(void)

{
  return 1;
}



/* Entry: 103f8fd74; end: 103f8fdc7;  */

void FUN_103f8fd74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f8fdc8; end: 103f8fdd7;  */

void FUN_103f8fdc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8fdd8; end: 103f8fdf7;  */

void FUN_103f8fdd8(void)

{
  _objc_opt_self(&PTR_PTR_113038018);
  return;
}



/* Entry: 103f8fdf8; end: 103f8fdfb;  */

undefined1  [16]
FUN_103f8fdf8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  double dVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  double dStack_a8;
  
  lVar3 = 0;
  __s10Foundation9IndexPathVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar11 - extraout_x12;
  uVar9 = param_5;
  func_0x000107c5dfd0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_103f904c0(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  uVar5 = uVar9;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar4);
  _objc_release(uVar9);
  if (uVar5 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if (uVar9 != 0) goto LAB_103f90244;
LAB_103f90478:
    _swift_bridgeObjectRelease(uVar5);
  }
  else {
    uVar9 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar9 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar9 == 0) goto LAB_103f90478;
LAB_103f90244:
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f904bc);
      (*pcVar2)();
    }
    uVar7 = 0;
    uVar12 = 0;
    dVar15 = 1.79769313486232e+308;
    dStack_a8 = 1.79769313486232e+308;
    lStack_c0 = lVar11;
    lStack_b8 = lVar10;
    lStack_b0 = lVar3;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar6 = uVar12;
        FUN_103f8ffa0(uVar12,uVar5,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8,0x112d62a98);
      }
      _objc_retain();
      dVar13 = param_1;
      uVar4 = param_2;
      func_0x00010bf511c0(param_1,param_2);
      dVar14 = dVar13;
      func_0x00010bf20c00(uVar6);
      _objc_release(uVar6);
      _CGRectGetMidX(dVar14,uVar4,param_3,param_4);
      dVar1 = dVar13 - dVar14;
      if (dVar15 <= ABS(dVar1)) {
        _objc_release(uVar6);
      }
      else {
        dVar14 = dVar13 - dVar14;
        dStack_a8 = dVar14;
        _objc_release(uVar7);
        uVar7 = uVar6;
        dVar15 = ABS(dVar1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
    _swift_bridgeObjectRelease(uVar5);
    if (uVar7 != 0) {
      _objc_retain();
      uVar9 = param_5;
      func_0x000107c4534c();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lStack_c0;
      if (uVar9 != 0) {
        __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
                  (lStack_c0);
        _objc_release(uVar9);
        lVar11 = lStack_b0;
        lVar10 = lStack_b8;
        uVar9 = uVar8;
        (**(code **)(lStack_b8 + 0x20))(uVar8,lVar3,lStack_b0);
        __s10Foundation9IndexPathV5UIKitE4itemSivg();
        if (uVar9 != 0) {
LAB_103f903c0:
          __s10Foundation9IndexPathV5UIKitE4itemSivg();
          __s10Foundation9IndexPathV5UIKitE7sectionSivg();
          func_0x000107c4d91c();
          if (SBORROW8(param_5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f904c0);
            (*pcVar2)();
          }
          if (uVar9 == param_5 - 1) {
            param_5 = uVar7;
            func_0x00010bf20c00(uVar7);
            _CGRectGetWidth();
            if (dVar14 * 0.5 < dStack_a8) goto LAB_103f90408;
          }
          __s10Foundation9IndexPathV5UIKitE4itemSivg();
          _objc_release(uVar7);
          _objc_release(uVar7);
          (**(code **)(lVar10 + 8))(uVar8,lVar11);
          uVar4 = 0;
          goto LAB_103f90488;
        }
        uVar9 = uVar7;
        func_0x00010bf20c00();
        _CGRectGetWidth();
        dVar14 = dVar14 * -0.5;
        if (dVar14 <= dStack_a8) goto LAB_103f903c0;
LAB_103f90408:
        (**(code **)(lVar10 + 8))(uVar8,lVar11);
      }
      _objc_release(uVar7);
      _objc_release(uVar7);
    }
  }
  param_5 = 0;
  uVar4 = 1;
LAB_103f90488:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = param_5;
  return auVar16;
}



/* Entry: 103f8fdfc; end: 103f8ff9f;  */

ulong FUN_103f8fdfc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f8fed4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f8fed8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000019,0x800000010f1d3a90);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f8ffa0);
  (*pcVar2)();
}



/* Entry: 103f8ffa0; end: 103f9015b;  */

ulong FUN_103f8ffa0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f90084);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f90088);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103f904c0(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f9015c);
  (*pcVar2)();
}



/* Entry: 103f9015c; end: 103f904bf;  */

undefined1  [16]
FUN_103f9015c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  double dVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  double dStack_a8;
  
  lVar3 = 0;
  __s10Foundation9IndexPathVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar11 - extraout_x12;
  uVar9 = param_5;
  func_0x000107c5dfd0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_103f904c0(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  uVar5 = uVar9;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar4);
  _objc_release(uVar9);
  if (uVar5 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if (uVar9 != 0) goto LAB_103f90244;
LAB_103f90478:
    _swift_bridgeObjectRelease(uVar5);
  }
  else {
    uVar9 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar9 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar9 == 0) goto LAB_103f90478;
LAB_103f90244:
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f904bc);
      (*pcVar2)();
    }
    uVar7 = 0;
    uVar12 = 0;
    dVar15 = 1.79769313486232e+308;
    dStack_a8 = 1.79769313486232e+308;
    lStack_c0 = lVar11;
    lStack_b8 = lVar10;
    lStack_b0 = lVar3;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar6 = uVar12;
        FUN_103f8ffa0(uVar12,uVar5,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8,0x112d62a98);
      }
      _objc_retain();
      dVar13 = param_1;
      uVar4 = param_2;
      func_0x00010bf511c0(param_1,param_2);
      dVar14 = dVar13;
      func_0x00010bf20c00(uVar6);
      _objc_release(uVar6);
      _CGRectGetMidX(dVar14,uVar4,param_3,param_4);
      dVar1 = dVar13 - dVar14;
      if (dVar15 <= ABS(dVar1)) {
        _objc_release(uVar6);
      }
      else {
        dVar14 = dVar13 - dVar14;
        dStack_a8 = dVar14;
        _objc_release(uVar7);
        uVar7 = uVar6;
        dVar15 = ABS(dVar1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
    _swift_bridgeObjectRelease(uVar5);
    if (uVar7 != 0) {
      _objc_retain();
      uVar9 = param_5;
      func_0x000107c4534c();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lStack_c0;
      if (uVar9 != 0) {
        __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
                  (lStack_c0);
        _objc_release(uVar9);
        lVar11 = lStack_b0;
        lVar10 = lStack_b8;
        uVar9 = uVar8;
        (**(code **)(lStack_b8 + 0x20))(uVar8,lVar3,lStack_b0);
        __s10Foundation9IndexPathV5UIKitE4itemSivg();
        if (uVar9 != 0) {
LAB_103f903c0:
          __s10Foundation9IndexPathV5UIKitE4itemSivg();
          __s10Foundation9IndexPathV5UIKitE7sectionSivg();
          func_0x000107c4d91c();
          if (SBORROW8(param_5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f904c0);
            (*pcVar2)();
          }
          if (uVar9 == param_5 - 1) {
            param_5 = uVar7;
            func_0x00010bf20c00(uVar7);
            _CGRectGetWidth();
            if (dVar14 * 0.5 < dStack_a8) goto LAB_103f90408;
          }
          __s10Foundation9IndexPathV5UIKitE4itemSivg();
          _objc_release(uVar7);
          _objc_release(uVar7);
          (**(code **)(lVar10 + 8))(uVar8,lVar11);
          uVar4 = 0;
          goto LAB_103f90488;
        }
        uVar9 = uVar7;
        func_0x00010bf20c00();
        _CGRectGetWidth();
        dVar14 = dVar14 * -0.5;
        if (dVar14 <= dStack_a8) goto LAB_103f903c0;
LAB_103f90408:
        (**(code **)(lVar10 + 8))(uVar8,lVar11);
      }
      _objc_release(uVar7);
      _objc_release(uVar7);
    }
  }
  param_5 = 0;
  uVar4 = 1;
LAB_103f90488:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = param_5;
  return auVar16;
}



/* Entry: 103f904c0; end: 103f90537;  */

void FUN_103f904c0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103f90538; end: 103f9053f; -[_TtC21LensCarouselPresenter29LensCarouselPassiveTapHandler gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_103f90538(void)

{
  return 1;
}



/* Entry: 103f90540; end: 103f90593;  */

void FUN_103f90540(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f90594; end: 103f905a3;  */

void FUN_103f90594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f905a4; end: 103f905c3;  */

void FUN_103f905a4(void)

{
  _objc_opt_self(&PTR_PTR_1130380d8);
  return;
}



/* Entry: 103f905c4; end: 103f905c7;  */

undefined1  [16]
FUN_103f905c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long lStack_b0;
  long lStack_a8;
  
  lVar3 = 0;
  __s10Foundation9IndexPathVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  uVar10 = param_5;
  func_0x000107c5dfd0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_103f9083c(0);
  uVar5 = uVar10;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar4);
  _objc_release(uVar10);
  if (uVar5 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar10 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar10 != 0) {
    lVar7 = 4;
    lStack_b0 = lVar11;
    lStack_a8 = lVar3;
    do {
      uVar12 = lVar7 - 4;
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f907e4);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar5 + lVar7 * 8);
        _objc_retain();
      }
      else {
        uVar6 = uVar12;
        func_0x00010118dc90(uVar12,uVar5);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f907e0);
        (*pcVar1)();
      }
      uVar13 = lVar7 - 3;
      _objc_retain();
      uVar4 = param_1;
      uVar15 = param_2;
      func_0x00010bf511c0(param_1,param_2);
      uVar14 = uVar4;
      uVar16 = uVar15;
      func_0x00010bf20c00(uVar6);
      uVar12 = uVar6;
      _objc_release();
      iVar2 = (int)uVar12;
      _CGRectContainsPoint(uVar14,uVar16,param_3,param_4,uVar4,uVar15);
      if (iVar2 != 0) {
        uVar12 = param_5;
        func_0x000107c4534c();
        _objc_retainAutoreleasedReturnValue();
        if (uVar12 != 0) {
          __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
                    (lVar9);
          _objc_release(uVar12);
          lVar11 = lStack_a8;
          lVar3 = lStack_b0;
          lVar7 = lVar8;
          (**(code **)(lStack_b0 + 0x20))(lVar8,lVar9,lStack_a8);
          __s10Foundation9IndexPathV5UIKitE4itemSivg();
          _objc_release(uVar6);
          _swift_bridgeObjectRelease(uVar5);
          (**(code **)(lVar3 + 8))(lVar8,lVar11);
          uVar4 = 0;
          goto LAB_103f9080c;
        }
      }
      _objc_release(uVar6);
      lVar7 = lVar7 + 1;
    } while (uVar13 != uVar10);
  }
  _swift_bridgeObjectRelease(uVar5);
  lVar7 = 0;
  uVar4 = 1;
LAB_103f9080c:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = lVar7;
  return auVar17;
}



/* Entry: 103f905c8; end: 103f9083b;  */

undefined1  [16]
FUN_103f905c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long lStack_b0;
  long lStack_a8;
  
  lVar3 = 0;
  __s10Foundation9IndexPathVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  uVar10 = param_5;
  func_0x000107c5dfd0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_103f9083c(0);
  uVar5 = uVar10;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar4);
  _objc_release(uVar10);
  if (uVar5 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar10 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar10 != 0) {
    lVar7 = 4;
    lStack_b0 = lVar11;
    lStack_a8 = lVar3;
    do {
      uVar12 = lVar7 - 4;
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f907e4);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar5 + lVar7 * 8);
        _objc_retain();
      }
      else {
        uVar6 = uVar12;
        func_0x00010118dc90(uVar12,uVar5);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f907e0);
        (*pcVar1)();
      }
      uVar13 = lVar7 - 3;
      _objc_retain();
      uVar4 = param_1;
      uVar15 = param_2;
      func_0x00010bf511c0(param_1,param_2);
      uVar14 = uVar4;
      uVar16 = uVar15;
      func_0x00010bf20c00(uVar6);
      uVar12 = uVar6;
      _objc_release();
      iVar2 = (int)uVar12;
      _CGRectContainsPoint(uVar14,uVar16,param_3,param_4,uVar4,uVar15);
      if (iVar2 != 0) {
        uVar12 = param_5;
        func_0x000107c4534c();
        _objc_retainAutoreleasedReturnValue();
        if (uVar12 != 0) {
          __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
                    (lVar9);
          _objc_release(uVar12);
          lVar11 = lStack_a8;
          lVar3 = lStack_b0;
          lVar7 = lVar8;
          (**(code **)(lStack_b0 + 0x20))(lVar8,lVar9,lStack_a8);
          __s10Foundation9IndexPathV5UIKitE4itemSivg();
          _objc_release(uVar6);
          _swift_bridgeObjectRelease(uVar5);
          (**(code **)(lVar3 + 8))(lVar8,lVar11);
          uVar4 = 0;
          goto LAB_103f9080c;
        }
      }
      _objc_release(uVar6);
      lVar7 = lVar7 + 1;
    } while (uVar13 != uVar10);
  }
  _swift_bridgeObjectRelease(uVar5);
  lVar7 = 0;
  uVar4 = 1;
LAB_103f9080c:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = lVar7;
  return auVar17;
}



/* Entry: 103f9083c; end: 103f9087f;  */

void FUN_103f9083c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d62a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000112d62a98 = puVar1;
  return;
}



/* Entry: 103f90880; end: 103f90897;  */

bool FUN_103f90880(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f90898; end: 103f908d7;  */

void FUN_103f90898(void)

{
  undefined *puVar1;
  
  if (puRam0000000113038130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb2dc0;
  _swift_getWitnessTable(&UNK_10dcb2dc0,&UNK_1107290f0);
  puRam0000000113038130 = puVar1;
  return;
}



/* Entry: 103f908d8; end: 103f90983;  */

void FUN_103f908d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f90984; end: 103f909bb;  */

void FUN_103f90984(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f909bc; end: 103f909c3; -[_TtC21LensCarouselPresenter32LensCarouselViewContainerAdapter attachView:] */

void FUN_103f909bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_attachView__1125a0c30);
  return;
}



/* Entry: 103f909c4; end: 103f90a07;  */

void FUN_103f909c4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f90a08; end: 103f90a0b;  */

void FUN_103f90a08(void)

{
  return;
}



/* Entry: 103f90a0c; end: 103f90cff;  */

void FUN_103f90a0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  FUN_103f90d00();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x00010befbb60();
  func_0x000107c534b0(param_1);
  func_0x000107c5a050(param_1);
  uVar7 = param_1;
  func_0x000107c5e308();
  _objc_retainAutoreleasedReturnValue();
  FUN_103f90d30();
  uVar2 = uVar7;
  func_0x00010bf49580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar4 = puVar3;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 0xb;
  *(undefined8 *)(puVar4 + 0x10) = 5;
  uVar7 = param_1;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x000107c5cbe4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar5);
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar5);
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  uVar7 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar5);
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  func_0x000107c5e308();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x000107c5e308(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar5);
  uVar6 = uVar7;
  func_0x000107c517b8(0x443b8000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  *(undefined8 *)(puVar4 + 0x38) = uVar6;
  *(undefined8 *)(puVar4 + 0x40) = uVar2;
  uVar7 = 0;
  func_0x000100847984(0);
  _objc_retain();
  puVar5 = puVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,uVar7);
  _swift_release(puVar4);
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined **)(unaff_x20 + 0x160) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x168) = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar7);
  func_0x00010bf0ca20(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103f90d00; end: 103f90d2f;  */

void FUN_103f90d00(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x160) != 0) {
    func_0x000107c4ff34();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
  }
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103f90d30; end: 103f90db3;  */

double FUN_103f90d30(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(unaff_x20 + 0x150);
  lVar1 = *(long *)(unaff_x20 + 0x158);
  func_0x0001000a8868(unaff_x20 + 0x138,lVar2);
  (**(code **)(lVar1 + 0x10))(lVar2,lVar1);
  if (lVar2 < 1) {
    dVar3 = 0.0;
  }
  else {
    auVar4 = NEON_fmov(0x4000000000000000,8);
    dVar3 = (*(double *)(unaff_x20 + 0x18) + *(double *)(unaff_x20 + 0x20)) * (double)(lVar2 - 1);
    dVar3 = *(double *)(unaff_x20 + 0x70) * *(double *)(unaff_x20 + 0x18) +
            *(double *)(unaff_x20 + 0x78) * auVar4._8_8_ + dVar3 + dVar3;
  }
  return dVar3;
}



/* Entry: 103f90db4; end: 103f90df7; -[_TtC21LensCarouselPresenter31LensCycledCarouselViewContainer attachView:] */

void FUN_103f90db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _swift_retain(param_1);
  FUN_103f90a0c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103f90df8; end: 103f90e6b;  */

void FUN_103f90df8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x160);
  if ((lVar1 != 0) && (lVar2 = *(long *)(unaff_x20 + 0x168), lVar2 != 0)) {
    _objc_retain();
    _objc_retain(lVar2);
    FUN_103f90d30();
    func_0x000107c5378c(lVar2);
    func_0x000107c4abfc(lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103f90e6c; end: 103f90ecf;  */

void FUN_103f90e6c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100870a64(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x138);
  _objc_release(*(undefined8 *)(unaff_x20 + 0x160));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f90ed0; end: 103f90ed3;  */

void FUN_103f90ed0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x160);
  if ((lVar1 != 0) && (lVar2 = *(long *)(unaff_x20 + 0x168), lVar2 != 0)) {
    _objc_retain();
    _objc_retain(lVar2);
    FUN_103f90d30();
    func_0x000107c5378c(lVar2);
    func_0x000107c4abfc(lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103f90ed4; end: 103f90f13;  */

void FUN_103f90ed4(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  func_0x000100857b08(param_1,param_2);
  return;
}



/* Entry: 103f90f14; end: 103f90f23; -[SCLensCarouselManagerProxy activeStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f90f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382a8));
  return;
}



/* Entry: 103f90f24; end: 103f90f33; -[SCLensCarouselManagerProxy activeObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f90f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382b0));
  return;
}



/* Entry: 103f90f34; end: 103f90f43; -[SCLensCarouselManagerProxy lensCarouselEventsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f90f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382b8));
  return;
}



/* Entry: 103f90f44; end: 103f90fbb; -[SCLensCarouselManagerProxy activateWithLensCarouselType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f90f44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bef0000();
      _swift_unknownObjectRelease(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103f90fbc; end: 103f91067; -[SCLensCarouselManagerProxy activateWithLensesObservable:activationConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f90fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_1);
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bef0060();
      _swift_unknownObjectRelease(lVar1);
    }
    _objc_release(param_3);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103f91068; end: 103f910cb; -[SCLensCarouselManagerProxy activateWithLastSavedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91068(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010beeffc0();
      _swift_unknownObjectRelease(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103f910cc; end: 103f9118f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f910cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar4 = (undefined1 *)0x0;
      if (param_1 != 0) {
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_100ab47f8;
        puStack_48 = &UNK_1107292b0;
        lStack_40 = param_1;
        uStack_38 = param_2;
        __Block_copy(&puStack_60);
        uVar1 = uStack_38;
        _swift_retain(param_2);
        _swift_release(uVar1);
        puVar4 = (undefined1 *)ppuVar3;
      }
      func_0x00010beeffe0(lVar2);
      __Block_release(puVar4);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 103f91190; end: 103f9121b; -[SCLensCarouselManagerProxy activateWithLastSavedStateWithCompletion:] */

void FUN_103f91190(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110729428;
    _swift_allocObject(&UNK_110729428,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x103f9219c;
  }
  _objc_retain(param_1);
  FUN_103f910cc(uVar2,puVar1);
  func_0x000101237350(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f9121c; end: 103f9127f; -[SCLensCarouselManagerProxy activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9121c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010beef6e0();
      _swift_unknownObjectRelease(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103f91280; end: 103f91353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91280(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar4 = (undefined1 *)0x0;
      if (param_2 != 0) {
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_100ab47f8;
        puStack_58 = &UNK_1107292d8;
        lStack_50 = param_2;
        uStack_48 = param_3;
        __Block_copy(&puStack_70);
        uVar1 = uStack_48;
        _swift_retain(param_3);
        _swift_release(uVar1);
        puVar4 = (undefined1 *)ppuVar3;
      }
      func_0x00010bef0080(lVar2);
      __Block_release(puVar4);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 103f91354; end: 103f913ff; -[SCLensCarouselManagerProxy activateWithParameters:completion:] */

void FUN_103f91354(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110729400;
    _swift_allocObject(&UNK_110729400,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x103f92198;
  }
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f91280(param_3,uVar2,puVar1);
  func_0x000101237350(uVar2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f91400; end: 103f914c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar4 = (undefined1 *)0x0;
      if (param_1 != 0) {
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_100ab47f8;
        puStack_48 = &UNK_110729300;
        lStack_40 = param_1;
        uStack_38 = param_2;
        __Block_copy(&puStack_60);
        uVar1 = uStack_38;
        _swift_retain(param_2);
        _swift_release(uVar1);
        puVar4 = (undefined1 *)ppuVar3;
      }
      func_0x00010beeffa0(lVar2);
      __Block_release(puVar4);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 103f914c4; end: 103f9154f; -[SCLensCarouselManagerProxy activateWithCompletion:] */

void FUN_103f914c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1107293d8;
    _swift_allocObject(&UNK_1107293d8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x103f92194;
  }
  _objc_retain(param_1);
  FUN_103f91400(uVar2,puVar1);
  func_0x000101237350(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f91550; end: 103f91623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91550(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar4 = (undefined1 *)0x0;
      if (param_2 != 0) {
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_100ab47f8;
        puStack_58 = &UNK_110729328;
        lStack_50 = param_2;
        uStack_48 = param_3;
        __Block_copy(&puStack_70);
        uVar1 = uStack_48;
        _swift_retain(param_3);
        _swift_release(uVar1);
        puVar4 = (undefined1 *)ppuVar3;
      }
      func_0x00010beeff00(lVar2);
      __Block_release(puVar4);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 103f91624; end: 103f916cf; -[SCLensCarouselManagerProxy activateWithActivationSource:completion:] */

void FUN_103f91624(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1107293b0;
    _swift_allocObject(&UNK_1107293b0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar3 = 0x103f92190;
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f91550(param_3,uVar3,puVar2);
  func_0x000101237350(uVar3,puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f916d0; end: 103f91733; -[SCLensCarouselManagerProxy deactivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f916d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bf65b20();
      _swift_unknownObjectRelease(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103f91734; end: 103f917f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar4 = (undefined1 *)0x0;
      if (param_1 != 0) {
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_100ab47f8;
        puStack_48 = &UNK_110729350;
        lStack_40 = param_1;
        uStack_38 = param_2;
        __Block_copy(&puStack_60);
        uVar1 = uStack_38;
        _swift_retain(param_2);
        _swift_release(uVar1);
        puVar4 = (undefined1 *)ppuVar3;
      }
      func_0x00010bf65dc0(lVar2);
      __Block_release(puVar4);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 103f917f8; end: 103f91883; -[SCLensCarouselManagerProxy deactivateWithCompletion:] */

void FUN_103f917f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110729388;
    _swift_allocObject(&UNK_110729388,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x103f920f4;
  }
  _objc_retain(param_1);
  FUN_103f91734(uVar2,puVar1);
  func_0x000101237350(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f91884; end: 103f918ff; -[SCLensCarouselManagerProxy active] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f91884(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_113038298);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x00010bef03e0();
      _objc_release(param_1);
      _swift_unknownObjectRelease(lVar2);
      return lVar1;
    }
    _objc_release(param_1);
  }
  return 0;
}



/* Entry: 103f91900; end: 103f9197b; -[SCLensCarouselManagerProxy presentationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f91900(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_113038298);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4f05c();
      _objc_release(param_1);
      _swift_unknownObjectRelease(lVar2);
      return lVar1;
    }
    _objc_release(param_1);
  }
  return 0;
}



/* Entry: 103f9197c; end: 103f9198b; -[SCLensCarouselManagerProxy activeLensIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9197c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382c0));
  return;
}



/* Entry: 103f9198c; end: 103f91a0f; -[SCLensCarouselManagerProxy activeLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9198c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_113038298);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x00010bef0a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _swift_unknownObjectRelease(lVar2);
      goto LAB_103f91a00;
    }
    _objc_release(param_1);
  }
  lVar1 = 0;
LAB_103f91a00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103f91a10; end: 103f91a93; -[SCLensCarouselManagerProxy firstApplicableLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91a10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_113038298);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c435e8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _swift_unknownObjectRelease(lVar2);
      goto LAB_103f91a84;
    }
    _objc_release(param_1);
  }
  lVar1 = 0;
LAB_103f91a84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103f91a94; end: 103f91b87; -[SCLensCarouselManagerProxy defaultSelectionLensId] */

void FUN_103f91a94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103f91afc();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f91b88; end: 103f91b97; -[SCLensCarouselManagerProxy selectedLensIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382d8));
  return;
}



/* Entry: 103f91b98; end: 103f91ba7; -[SCLensCarouselManagerProxy selectedLensObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382e0));
  return;
}



/* Entry: 103f91ba8; end: 103f91c63; -[SCLensCarouselManagerProxy selectLensWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
      func_0x000107c51c34(lVar1);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(param_2);
      _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f91c64; end: 103f91d33; -[SCLensCarouselManagerProxy selectLensWithIdentifier:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
      func_0x000107c51c38(lVar1);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(param_2);
      _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f91d34; end: 103f91dc3; -[SCLensCarouselManagerProxy applyLensCarouselSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_1);
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bf08620();
      _swift_unknownObjectRelease(lVar1);
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103f91dc4; end: 103f91e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f91dc4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4fbec();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar1);
      return lVar2;
    }
  }
  lVar1 = 0;
  FUN_103f91e40(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return lVar1;
}



/* Entry: 103f91e40; end: 103f91e5f;  */

void FUN_103f91e40(void)

{
  _objc_opt_self(&PTR_PTR_113038358);
  return;
}



/* Entry: 103f91e60; end: 103f91ebb; -[SCLensCarouselManagerProxy registerContextWithConfig:] */

void FUN_103f91e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103f91dc4(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f91ebc; end: 103f91f77; -[SCLensCarouselManagerProxy unregisterContextWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  lVar1 = *(long *)(param_1 + _DAT_113038298);
  if (lVar1 != 0) {
    _objc_retain();
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
      func_0x000107c5d348(lVar1);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(param_2);
      _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f91f78; end: 103f91fd7; -[SCLensCarouselManagerProxy init] */

void FUN_103f91f78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensInCameraTempSwift.LensCarouselManagerProxy",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f91fa4);
  (*pcVar1)();
}



/* Entry: 103f91fd8; end: 103f9209f; -[SCLensCarouselManagerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f91fd8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113038298));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130382e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130382d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130382e0));
  return;
}



/* Entry: 103f920a0; end: 103f920bf;  */

void FUN_103f920a0(void)

{
  _objc_opt_self(&PTR_PTR_11296f3b0);
  return;
}



/* Entry: 103f920c0; end: 103f920db; -[_TtC23SCLensInCameraTempSwiftP33_74275E2A9F2EE5D05C9E00966EC4211126LensCarouselContextDefault contextId] */

void FUN_103f920c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f920dc; end: 103f920df; -[_TtC23SCLensInCameraTempSwiftP33_74275E2A9F2EE5D05C9E00966EC4211126LensCarouselContextDefault activateWithLensSelection:completion:] */

void FUN_103f920dc(void)

{
  return;
}



/* Entry: 103f920e0; end: 103f92107; -[_TtC23SCLensInCameraTempSwiftP33_74275E2A9F2EE5D05C9E00966EC4211126LensCarouselContextDefault activateWithLensSelection:] */

void FUN_103f920e0(void)

{
  return;
}



/* Entry: 103f92108; end: 103f92147;  */

void FUN_103f92108(void)

{
  func_0x000100b6ed34();
  return;
}



/* Entry: 103f92148; end: 103f9219f;  */

void FUN_103f92148(long param_1,long param_2)

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



/* Entry: 103f921a0; end: 103f92213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f921a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130383c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130383d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130383d8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f92214; end: 103f922a3; -[SCLensDisplayableStateProvider initWithAuthorizationChecker:lensesApplicationStateProvider:lensesCameraViewControllerVisibilityProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f92214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130383c8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130383d0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130383d8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f922a4; end: 103f92303; -[SCLensDisplayableStateProvider init] */

void FUN_103f922a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensInCameraTempSwift.LensDisplayableStateProvider",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f922d0);
  (*pcVar1)();
}



/* Entry: 103f92304; end: 103f9234b; -[SCLensDisplayableStateProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f92304(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130383c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130383d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130383d8));
  return;
}



/* Entry: 103f9234c; end: 103f9237f; -[SCLensDisplayableStateProvider isLensDisplayable] */

uint FUN_103f9234c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f92380();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103f92380; end: 103f92543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f92380(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_1130383d0);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_1130383c8);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar1;
    func_0x000107c4b574();
    lVar4 = lVar2;
    func_0x000107c4a6e0();
    _swift_unknownObjectRelease(lVar1);
    _swift_unknownObjectRelease(lVar2);
    if (lVar3 != 0 || (int)lVar4 == 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_1130383d8);
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c4a728();
  }
  _swift_unknownObjectRelease(lVar1);
  return;
}



/* Entry: 103f92544; end: 103f9257f; -[SCLensDisplayableStateProvider isLensDisplayableWithRequireCameraViewFullyVisible:] */

uint FUN_103f92544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x000103f92460(param_3);
  _objc_release(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 103f92580; end: 103f9259f;  */

void FUN_103f92580(void)

{
  _objc_opt_self(&PTR_PTR_11296f4c0);
  return;
}



/* Entry: 103f925a0; end: 103f92707;  */

void FUN_103f925a0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 103f92708; end: 103f92733; +[SCFeatureFourByThreeAspectRatioConst buttonTapCountKey] */

void FUN_103f92708(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1d3b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f92734; end: 103f9275f; +[SCFeatureFourByThreeAspectRatioConst modeActivatedKey] */

void FUN_103f92734(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1d3b60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f92760; end: 103f9279b; -[SCFeatureFourByThreeAspectRatioConst init] */

void FUN_103f92760(undefined8 param_1)

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



/* Entry: 103f9279c; end: 103f927cf;  */

void FUN_103f9279c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f927d0; end: 103f927d3; -[SCFeatureFourByThreeAspectRatioConst .cxx_destruct] */

void FUN_103f927d0(void)

{
  return;
}



/* Entry: 103f927d4; end: 103f927f3;  */

void FUN_103f927d4(void)

{
  _objc_opt_self(&PTR_PTR_11296f590);
  return;
}



/* Entry: 103f927f4; end: 103f9281f; +[SCFeatureHDModeUsageMetricKey buttonTapCount] */

void FUN_103f927f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1d3b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


