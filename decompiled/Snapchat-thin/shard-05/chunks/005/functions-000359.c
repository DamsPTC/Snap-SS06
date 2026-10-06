/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ec28bc; end: 103ec28c7; -[_TtC26LensProcessingTrackingImpl19LensCoreContextImpl destroyEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec28bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  _objc_retain();
  uVar1 = 0x11302b628;
  func_0x0001000285a8(0x11302b628,&UNK_10dca6688);
  func_0x000100087bd4(&uStack_38,0x103ec2adc,auStack_50,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 103ec28c8; end: 103ec2943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec28c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  _objc_retain();
  uVar1 = 0x11302b628;
  func_0x0001000285a8(0x11302b628,&UNK_10dca6688);
  func_0x000100087bd4(&uStack_38,param_3,auStack_50,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 103ec2944; end: 103ec2a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2944(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((undefined8 *)(param_2 + *param_3) + 1) == '\x01') {
    *param_1 = 0;
    return;
  }
  if (*(char *)((undefined8 *)(param_2 + *param_4) + 1) == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + *param_4);
    uVar6 = *(undefined8 *)(param_2 + *param_3);
    uVar2 = *(undefined8 *)(param_2 + _DAT_11302b5c0);
    uVar1 = ((undefined8 *)(param_2 + _DAT_11302b5c0))[1];
    uVar3 = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    FUN_103ec2748();
    uVar4 = 0;
    func_0x000100471780(0);
    _objc_allocWithZone();
    FUN_10433fbd8(uVar6,uVar5,uVar2,uVar1,uVar3,param_3,uVar4);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103ec2a20; end: 103ec2a7f; -[_TtC26LensProcessingTrackingImpl19LensCoreContextImpl init] */

void FUN_103ec2a20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingTrackingImpl.LensCoreContextImpl",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec2a4c);
  (*pcVar1)();
}



/* Entry: 103ec2a80; end: 103ec2abb; -[_TtC26LensProcessingTrackingImpl19LensCoreContextImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2a80(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b5b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302b5c0 + 8))
  ;
  return;
}



/* Entry: 103ec2abc; end: 103ec2b2b;  */

void FUN_103ec2abc(void)

{
  _objc_opt_self(&PTR_PTR_11295f970);
  return;
}



/* Entry: 103ec2b2c; end: 103ec2b8f; -[SCGenAILensUsageTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2b2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_11302b630;
  puVar3 = PTR_PTR_1126ae568;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ec2b90; end: 103ec2b9f; -[SCGenAILensUsageTracker genAILoadObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302b630));
  return;
}



/* Entry: 103ec2ba0; end: 103ec2c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2ba0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302b630);
  _swift_bridgeObjectRetain(param_3);
  _CACurrentMediaTime();
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec2c78);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      uVar2 = 0;
      FUN_1043403e4(0);
      _objc_allocWithZone();
      func_0x000104340260(param_2,param_3,param_4,(long)param_1,uVar2);
      func_0x000107c4d664(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec2c80);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec2c7c);
  (*pcVar1)();
}



/* Entry: 103ec2c80; end: 103ec2cdf; -[SCGenAILensUsageTracker trackGenAILoadWithLensId:state:] */

void FUN_103ec2c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_103ec2ba0(param_3,param_2,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103ec2ce0; end: 103ec2d13;  */

void FUN_103ec2ce0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec2d14; end: 103ec2d23; -[SCGenAILensUsageTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302b630));
  return;
}



/* Entry: 103ec2d24; end: 103ec2d43;  */

void FUN_103ec2d24(void)

{
  _objc_opt_self(&PTR_PTR_11295fa70);
  return;
}



/* Entry: 103ec2d44; end: 103ec2d83; -[SCLensMLModelUsageTrackerImpl mlModelLoadStartedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2d44(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001004575f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ec2d84; end: 103ec2dc3; -[SCLensMLModelUsageTrackerImpl mlModelLoadEndedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2d84(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001004575f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ec2dc4; end: 103ec2e03; -[SCLensMLModelUsageTrackerImpl mlModelAppliedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2dc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001004575f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ec2e04; end: 103ec2f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2e04(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar1 = _DAT_11302b678;
  if (*(long *)(unaff_x20 + _DAT_11302b678) != 0) {
    return;
  }
  uVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  _swift_retain();
  _swift_release(uVar8);
  func_0x0001000285a8(0x11302b680,&UNK_10dca66b0);
  func_0x000107c3dc84(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x0001000b637c();
  _objc_release(param_1);
  plVar3 = *(long **)(unaff_x20 + _DAT_11302b688);
  func_0x000100471e0c(plVar3,0);
  _swift_release(uVar8);
  puVar4 = &UNK_11071d050;
  _swift_allocObject(&UNK_11071d050,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  pcVar5 = FUN_103ec2fc4;
  puVar7 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_103ec2fc4);
  _swift_release(plVar3);
  _swift_release(puVar4);
  pcVar6 = pcVar5;
  _swift_getObjectType(pcVar5);
  (**(code **)(puVar7 + 0x10))(uVar2,pcVar6,puVar7);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 103ec2f68; end: 103ec2fc3;  */

void FUN_103ec2f68(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_103ec2fcc(uVar1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103ec2fc4; end: 103ec2fcb;  */

void FUN_103ec2fc4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_103ec2fcc(uVar2);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103ec2fcc; end: 103ec30f3;  */

void FUN_103ec2fcc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  func_0x000107c42434();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c4985c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x000103ec3dd0(0);
  uVar4 = param_1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar3);
  _objc_release(param_1);
  if (uVar4 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar6 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec30b4);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar7 * 8 + 0x20);
        _objc_retain(uVar5);
      }
      else {
        uVar5 = uVar7;
        FUN_103ec71f0(uVar7,uVar4);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec30b0);
        (*pcVar1)();
      }
      uVar8 = uVar7 + 1;
      FUN_103ec313c();
      _objc_release(uVar5);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar6);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103ec30f4; end: 103ec313b; -[SCLensMLModelUsageTrackerImpl subscribeWithAnalyticsProvider:] */

void FUN_103ec30f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103ec2e04(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec313c; end: 103ec3cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec313c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined *unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  double unaff_d8;
  undefined auStack_d0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0xef746e657645736e;
  puVar11 = (undefined *)0x654c4c4d68636554;
  puVar5 = param_2;
  _swift_getObjectType();
  puVar1 = (undefined *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar12 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = param_1;
  func_0x000107c49848();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar6 = puVar5;
  _objc_release(puVar2);
  if ((puVar3 == (undefined *)0x654c4c4d68636554) && (puVar5 == (undefined *)0xef746e657645736e)) {
    _swift_bridgeObjectRelease(0xef746e657645736e);
  }
  else {
    puVar6 = puVar5;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar3,puVar5,0x654c4c4d68636554,0xef746e657645736e,0);
    _swift_bridgeObjectRelease(puVar5);
    if (((ulong)puVar3 & 1) == 0) goto LAB_103ec35b4;
  }
  func_0x000107c49858();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_1);
  puStack_a0 = puVar2;
  puStack_98 = puVar6;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12);
  func_0x000100e8b654();
  uVar10 = 0;
  puVar11 = puVar12;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (puVar12,0,PTR___sSSN_11034da80,param_1);
  (**(code **)(lVar9 + 8))(puVar12,puVar1);
  _swift_bridgeObjectRelease(puVar6);
  if (uVar10 >> 0x3c < 0xf) {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    _objc_opt_self();
    puVar1 = puVar11;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar11,uVar10);
    puStack_a0 = (undefined *)0x0;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar2 = puStack_a0;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = puStack_a0;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar2);
      _objc_release(puVar3);
      _swift_willThrow();
      func_0x0001000b44c0(puVar11,uVar10);
      _swift_errorRelease(puVar2);
      goto LAB_103ec34e4;
    }
    _objc_retain();
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_a0,puVar3);
    _swift_unknownObjectRelease(puVar3);
    puVar1 = (undefined *)0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    puVar2 = PTR___sypN_11034f1a8;
    ppuVar4 = &puStack_b8;
    _swift_dynamicCast(ppuVar4,&puStack_a0,PTR___sypN_11034f1a8 + 8,puVar1,6);
    puVar3 = puStack_b8;
    if (((ulong)ppuVar4 & 1) == 0) {
      func_0x0001000b44c0(puVar11,uVar10);
      goto LAB_103ec34e4;
    }
    unaff_x20 = puVar3;
    if (*(long *)(puStack_b8 + 0x10) == 0) {
LAB_103ec3608:
      lVar9 = *(long *)(puVar3 + 0x10);
    }
    else {
      _swift_bridgeObjectRetain(puStack_b8);
      uVar7 = 0;
      lVar9 = -0x2ffffffffffffff0;
      func_0x000100029284(0xd000000000000010);
      puVar5 = puVar3;
      if ((uVar7 & 1) == 0) goto LAB_103ec3604;
      func_0x0001000bb420(*(long *)(puVar3 + 0x38) + lVar9 * 0x20,&puStack_a0);
      _swift_bridgeObjectRelease(puVar3);
      ppuVar4 = &puStack_b8;
      _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,puVar1,6);
      puVar5 = puStack_b8;
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_103ec3608;
      if (*(long *)(puStack_b8 + 0x10) == 0) {
LAB_103ec3604:
        _swift_bridgeObjectRelease(puVar5);
        goto LAB_103ec3608;
      }
      _swift_bridgeObjectRetain(puStack_b8);
      lVar9 = 0x616e5f6c65646f6d;
      uVar7 = 0xea0000000000656d;
      func_0x000100029284(0x616e5f6c65646f6d);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar5);
        goto LAB_103ec3604;
      }
      func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,&puStack_a0);
      _swift_bridgeObjectRelease(puVar5);
      ppuVar4 = &puStack_b8;
      _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,PTR___sSSN_11034da80,6);
      puVar12 = puStack_b0;
      puVar6 = puStack_b8;
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_103ec3604;
      if (*(long *)(puVar5 + 0x10) == 0) {
LAB_103ec3a08:
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        _swift_bridgeObjectRetain(puVar5);
        lVar9 = 0x7472617473;
        uVar7 = 0;
        func_0x000100029284(0x7472617473);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar5);
          goto LAB_103ec3a08;
        }
        func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,&puStack_a0);
        _swift_bridgeObjectRelease(puVar5);
      }
      _swift_bridgeObjectRelease(puVar5);
      if (lStack_88 != 0) {
        ppuVar4 = &puStack_b8;
        _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,PTR___ss5Int64VN_11034ee50,6);
        puVar5 = puVar12;
        if (((ulong)ppuVar4 & 1) != 0) {
          _swift_bridgeObjectRelease(puVar3);
          if (lRam000000011302b6c0 != -1) {
            _swift_once(0x11302b6c0,FUN_103ec3cb8);
          }
          unaff_d8 = (double)(long)puStack_b8 / 1000000000.0 + dRam000000011302b6c8;
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c466c0(unaff_d8);
          func_0x0001043406e8(0);
          _objc_allocWithZone();
          puVar1 = puVar2;
          _objc_retain(puVar2);
          puVar3 = param_2;
          _objc_retain(param_2);
          func_0x000104340678(puVar6,puVar12,puVar3,puVar2,0,0);
          puStack_a0 = puVar6;
          func_0x0001002a64a8(&puStack_a0);
          func_0x0001000b44c0(puVar11,uVar10);
          _objc_release(puVar6);
          _objc_release(puVar1);
          goto LAB_103ec35b4;
        }
        goto LAB_103ec3604;
      }
      _swift_bridgeObjectRelease(puVar12);
      func_0x00010006e7f4(&puStack_a0);
      lVar9 = *(long *)(puVar3 + 0x10);
    }
    if (lVar9 != 0) {
      _swift_bridgeObjectRetain(puVar3);
      lVar9 = 0x646c6975625f6c6d;
      uVar7 = 0xed0000656d69745f;
      func_0x000100029284(0x646c6975625f6c6d);
      puVar5 = puVar3;
      if ((uVar7 & 1) == 0) goto LAB_103ec373c;
      func_0x0001000bb420(*(long *)(puVar3 + 0x38) + lVar9 * 0x20,&puStack_a0);
      _swift_bridgeObjectRelease(puVar3);
      ppuVar4 = &puStack_b8;
      _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,puVar1,6);
      puVar5 = puStack_b8;
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_103ec3740;
      if (*(long *)(puStack_b8 + 0x10) != 0) {
        _swift_bridgeObjectRetain(puStack_b8);
        lVar9 = 0x616e5f6c65646f6d;
        uVar7 = 0xea0000000000656d;
        func_0x000100029284(0x616e5f6c65646f6d);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar5);
        }
        else {
          func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,&puStack_a0);
          _swift_bridgeObjectRelease(puVar5);
          ppuVar4 = &puStack_b8;
          _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,PTR___sSSN_11034da80,6);
          puVar12 = puStack_b0;
          puVar6 = puStack_b8;
          if (((ulong)ppuVar4 & 1) != 0) {
            if (*(long *)(puVar5 + 0x10) == 0) {
LAB_103ec3b40:
              puStack_98 = (undefined *)0x0;
              puStack_a0 = (undefined *)0x0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              _swift_bridgeObjectRetain(puVar5);
              lVar9 = 0x646e65;
              uVar7 = 0;
              func_0x000100029284(0x646e65);
              if ((uVar7 & 1) == 0) {
                _swift_bridgeObjectRelease(puVar5);
                goto LAB_103ec3b40;
              }
              func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,&puStack_a0);
              _swift_bridgeObjectRelease(puVar5);
            }
            _swift_bridgeObjectRelease(puVar5);
            if (lStack_88 == 0) {
              _swift_bridgeObjectRelease(puVar12);
              func_0x00010006e7f4(&puStack_a0);
              goto LAB_103ec3740;
            }
            ppuVar4 = &puStack_b8;
            _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,PTR___ss5Int64VN_11034ee50,6);
            puVar5 = puVar12;
            if (((ulong)ppuVar4 & 1) != 0) {
              _swift_bridgeObjectRelease(puVar3);
              if (lRam000000011302b6c0 != -1) {
                _swift_once(0x11302b6c0,FUN_103ec3cb8);
              }
              unaff_d8 = (double)(long)puStack_b8 / 1000000000.0 + dRam000000011302b6c8;
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_allocWithZone();
              func_0x000107c466c0(unaff_d8);
              func_0x0001043406e8(0);
              _objc_allocWithZone();
              puVar1 = param_2;
              _objc_retain(param_2);
              unaff_x20 = puVar2;
              _objc_retain();
              func_0x000104340678(puVar6,puVar12,puVar1,0,puVar2,0);
              puStack_a0 = puVar6;
              func_0x0001002a64a8(&puStack_a0);
              func_0x0001000b44c0(puVar11,uVar10);
              _objc_release(puVar6);
              _objc_release(unaff_x20);
              goto LAB_103ec35b4;
            }
          }
        }
      }
LAB_103ec373c:
      _swift_bridgeObjectRelease(puVar5);
    }
LAB_103ec3740:
    if (*(long *)(puVar3 + 0x10) == 0) {
LAB_103ec379c:
      puStack_98 = (undefined *)0x0;
      puStack_a0 = (undefined *)0x0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      _swift_bridgeObjectRetain(puVar3);
      lVar9 = 0x74737269665f6c6d;
      uVar7 = 0xec0000006e75725f;
      func_0x000100029284(0x74737269665f6c6d);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar3);
        goto LAB_103ec379c;
      }
      func_0x0001000bb420(*(long *)(puVar3 + 0x38) + lVar9 * 0x20,&puStack_a0);
      _swift_bridgeObjectRelease(puVar3);
    }
    _swift_bridgeObjectRelease(puVar3);
    if (lStack_88 == 0) {
      func_0x0001000b44c0(puVar11,uVar10);
LAB_103ec388c:
      func_0x00010006e7f4(&puStack_a0);
      unaff_x20 = puVar3;
      goto LAB_103ec35b4;
    }
    ppuVar4 = &puStack_b8;
    _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,puVar1,6);
    puVar5 = puStack_b8;
    if (((ulong)ppuVar4 & 1) == 0) {
      func_0x0001000b44c0(puVar11,uVar10);
      goto LAB_103ec35b4;
    }
    if (*(long *)(puStack_b8 + 0x10) == 0) {
LAB_103ec38b0:
      func_0x0001000b44c0(puVar11,uVar10);
      unaff_x20 = puVar3;
    }
    else {
      _swift_bridgeObjectRetain(puStack_b8);
      lVar9 = 0x616e5f6c65646f6d;
      uVar7 = 0xea0000000000656d;
      func_0x000100029284(0x616e5f6c65646f6d);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar5);
        goto LAB_103ec38b0;
      }
      func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,&puStack_a0);
      _swift_bridgeObjectRelease(puVar5);
      ppuVar4 = &puStack_b8;
      _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,PTR___sSSN_11034da80,6);
      unaff_x20 = puStack_b8;
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_103ec38b0;
      if (*(long *)(puVar5 + 0x10) == 0) {
LAB_103ec38cc:
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        _swift_bridgeObjectRetain(puVar5);
        lVar9 = 0x656d6974;
        uVar7 = 0;
        func_0x000100029284(0x656d6974);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar5);
          goto LAB_103ec38cc;
        }
        func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar9 * 0x20,&puStack_a0);
        _swift_bridgeObjectRelease(puVar5);
      }
      _swift_bridgeObjectRelease(puVar5);
      puVar1 = puStack_b0;
      if (lStack_88 == 0) {
        func_0x0001000b44c0(puVar11,uVar10);
        _swift_bridgeObjectRelease(puStack_b0);
        puVar3 = unaff_x20;
        goto LAB_103ec388c;
      }
      ppuVar4 = &puStack_b8;
      _swift_dynamicCast(ppuVar4,&puStack_a0,puVar2 + 8,PTR___ss5Int64VN_11034ee50,6);
      if (((ulong)ppuVar4 & 1) != 0) {
        unaff_d8 = (double)(long)puStack_b8 / 1000000000.0;
        if (lRam000000011302b6c0 != -1) goto LAB_103ec3c70;
        goto LAB_103ec392c;
      }
      func_0x0001000b44c0(puVar11,uVar10);
      puVar5 = puStack_b0;
    }
  }
  else {
LAB_103ec34e4:
    puStack_a0 = (undefined *)0x0;
    puStack_98 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x36);
    uVar8 = 0x800000010f1cbe80;
    __sSS6appendyySSF(0xd000000000000034,0x800000010f1cbe80);
    puVar2 = param_2;
    func_0x000107c4b1dc(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar2);
    __sSS6appendyySSF(puVar3,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    puVar3 = puStack_98;
    puVar2 = puStack_a0;
    puStack_a0 = (undefined *)0x5b;
    puStack_98 = (undefined *)0xe100000000000000;
    uVar10 = 0;
    __ss9_typeName_9qualifiedSSypXp_SbtF(unaff_x20,0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar10);
    __sSS6appendyySSF(0x205d,0xe200000000000000);
    __sSS6appendyySSF(puVar2,puVar3);
    _swift_bridgeObjectRelease(puVar3);
    puVar5 = puStack_98;
  }
  _swift_bridgeObjectRelease(puVar5);
LAB_103ec35b4:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puStack_b0 = puVar1;
LAB_103ec3c70:
    _swift_once(0x11302b6c0,FUN_103ec3cb8);
    puVar1 = puStack_b0;
LAB_103ec392c:
    unaff_d8 = unaff_d8 + dRam000000011302b6c8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(unaff_d8);
    func_0x0001043406e8(0);
    _objc_allocWithZone();
    puVar3 = param_2;
    _objc_retain(param_2);
    puVar5 = puVar2;
    _objc_retain(puVar2);
    puVar6 = unaff_x20;
    func_0x000104340678(unaff_x20,puVar1,puVar3,0,0,puVar2);
    puStack_a0 = puVar6;
    func_0x0001002a64a8(&puStack_a0);
    func_0x0001000b44c0(puVar11,uVar10);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 103ec3cb8; end: 103ec3ce7;  */

void FUN_103ec3cb8(double param_1)

{
  double dVar1;
  
  func_0x000100b6a110();
  dVar1 = param_1;
  func_0x00010028941c();
  dRam000000011302b6c8 = param_1 - dVar1;
  return;
}



/* Entry: 103ec3ce8; end: 103ec3d47; -[SCLensMLModelUsageTrackerImpl init] */

void FUN_103ec3ce8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingTrackingImpl.LensMLModelUsageTrackerImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec3d14);
  (*pcVar1)();
}



/* Entry: 103ec3d48; end: 103ec3daf; -[SCLensMLModelUsageTrackerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec3d48(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b678));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b688));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b660));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b668));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302b670));
  return;
}



/* Entry: 103ec3db0; end: 103ec3e13;  */

void FUN_103ec3db0(void)

{
  _objc_opt_self(&PTR_PTR_11295fb28);
  return;
}



/* Entry: 103ec3e14; end: 103ec3e5b; -[SCLensProcessingGlobalTracker reporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec3e14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302b6d0;
  _swift_beginAccess(param_1 + _DAT_11302b6d0,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ec3e5c; end: 103ec3e67; -[SCLensProcessingGlobalTracker didCreateLensCoreWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec3e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001002a64a8(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 103ec3e68; end: 103ec3e73; -[SCLensProcessingGlobalTracker didDestroyLensCoreWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec3e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001002a64a8(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 103ec3e74; end: 103ec3e7f; -[SCLensProcessingGlobalTracker didEndLensUsageWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec3e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001002a64a8(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 103ec3e80; end: 103ec3ee7;  */

void FUN_103ec3e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001002a64a8(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 103ec3ee8; end: 103ec3f1b;  */

void FUN_103ec3ee8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec3f1c; end: 103ec3f73; -[SCLensProcessingGlobalTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec3f1c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b6d8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b6e0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b6e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302b6d0));
  return;
}



/* Entry: 103ec3f74; end: 103ec3f93;  */

void FUN_103ec3f74(void)

{
  _objc_opt_self(&PTR_PTR_11295fc08);
  return;
}



/* Entry: 103ec3f94; end: 103ec469b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ec3f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_allocWithZone();
  lVar9 = _DAT_11302b718;
  uVar4 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar9) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_11302b720) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302b728) = param_2;
  lVar5 = 0;
  FUN_103ec2abc();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar9 = _DAT_11302b5b8;
  func_0x00010006a340(0);
  _swift_allocObject();
  _swift_unknownObjectRetain(param_1);
  uVar4 = param_2;
  _swift_unknownObjectRetain();
  func_0x00010006a360();
  *(undefined8 *)(lVar6 + lVar9) = uVar4;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11302b5d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11302b5d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar6 + _DAT_11302b5e0) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11302b5e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11302b5f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar9 = _DAT_11302b5f8;
  *(undefined1 *)(lVar6 + _DAT_11302b5f8) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_11302b5c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar6 + _DAT_11302b5c8) = param_5;
  *(undefined1 *)(lVar6 + lVar9) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  _swift_bridgeObjectRetain(param_4);
  plVar7 = &lStack_70;
  _objc_msgSendSuper2(plVar7,puVar3);
  _swift_bridgeObjectRelease(param_4);
  plVar2 = (long *)(unaff_x20 + _DAT_11302b730);
  *plVar2 = (long)plVar7;
  plVar2[1] = (long)&PTR_DAT_11071d030;
  uVar4 = param_2;
  func_0x000107c4c020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  FUN_103ec3db0();
  lVar5 = lVar8;
  _objc_allocWithZone();
  *(undefined8 *)(lVar5 + _DAT_11302b678) = 0;
  lVar6 = _DAT_11302b660;
  lVar9 = 0x11302b4d8;
  func_0x0001000285a8(0x11302b4d8,&UNK_10dca6550);
  lVar10 = lVar9;
  _swift_allocObject();
  func_0x0001000c2754();
  *(long *)(lVar5 + lVar6) = lVar10;
  lVar6 = _DAT_11302b668;
  lVar10 = lVar9;
  _swift_allocObject(lVar9,*(undefined4 *)(lVar9 + 0x30),*(undefined2 *)(lVar9 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar5 + lVar6) = lVar10;
  lVar6 = _DAT_11302b670;
  _swift_allocObject(lVar9,*(undefined4 *)(lVar9 + 0x30),*(undefined2 *)(lVar9 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar5 + lVar6) = lVar9;
  *(undefined8 *)(lVar5 + _DAT_11302b688) = uVar4;
  plVar7 = &lStack_80;
  lStack_80 = lVar5;
  lStack_78 = lVar8;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11302b738) = plVar7;
  uVar4 = 0;
  func_0x000103ec8910();
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + _DAT_11302b740) = uVar4;
  uVar4 = 0;
  FUN_103ec2d24();
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + _DAT_11302b748) = uVar4;
  puVar11 = auStack_90;
  _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
  lVar9 = _DAT_11302b740;
  uVar4 = *(undefined8 *)(puVar11 + _DAT_11302b740);
  _swift_getObjectType();
  puVar12 = puVar11;
  _objc_retain();
  _swift_unknownObjectRetain(uVar4);
  FUN_103ec4c2c();
  _swift_unknownObjectRelease(uVar4);
  func_0x000107c5c348(*(undefined8 *)(puVar11 + lVar9));
  _objc_release(puVar12);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar12;
}



/* Entry: 103ec469c; end: 103ec485b; -[SCLensProcessingTrackerImpl initWithGlobalTracker:lensPerformerProvider:lensCoreId:lensCoreContext:isLensCoreShared:] */

void FUN_103ec469c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  func_0x000103ec4318(param_3,param_4,param_5,param_2,param_6,param_7);
  return;
}



/* Entry: 103ec485c; end: 103ec487b; -[SCLensProcessingTrackerImpl coreContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec485c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302b730));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ec487c; end: 103ec488f; -[SCLensProcessingTrackerImpl willCreateLensCoreWithTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec487c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  code *pcStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11302b730);
  puStack_78 = auStack_60;
  pcStack_80 = FUN_103ec4e90;
  uStack_70 = uVar1;
  uStack_50 = param_1;
  _objc_retain();
  _swift_unknownObjectRetain(uVar1);
  func_0x000100087bd4(0x103ec4e7c,auStack_90,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 103ec4890; end: 103ec495b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4890(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  char cStack_31;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_11302b730);
  puStack_68 = auStack_50;
  pcStack_70 = FUN_103ec4d50;
  lStack_60 = lVar1;
  uStack_40 = param_1;
  _swift_unknownObjectRetain(lVar1);
  func_0x000100087bd4(&cStack_31,FUN_103ec4d5c,auStack_80,PTR___sSbN_11034dd40);
  _swift_unknownObjectRelease(lVar1);
  if (cStack_31 == '\x01') {
    func_0x000107c40a00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x000107c41ad4(*(undefined8 *)(unaff_x20 + _DAT_11302b720));
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 103ec495c; end: 103ec4993; -[SCLensProcessingTrackerImpl didCreateLensCoreWithTimestamp:] */

void FUN_103ec495c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_103ec4890(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103ec4994; end: 103ec49a7; -[SCLensProcessingTrackerImpl willDestroyLensCoreWithTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4994(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11302b730);
  puStack_78 = auStack_60;
  uStack_80 = 0x103ec4e94;
  uStack_70 = uVar1;
  uStack_50 = param_1;
  _objc_retain();
  _swift_unknownObjectRetain(uVar1);
  func_0x000100087bd4(0x103ec4e68,auStack_90,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 103ec49a8; end: 103ec4a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec49a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11302b730);
  puStack_78 = auStack_60;
  uStack_80 = param_4;
  uStack_70 = uVar1;
  uStack_50 = param_1;
  _objc_retain();
  _swift_unknownObjectRetain(uVar1);
  func_0x000100087bd4(param_5,auStack_90,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 103ec4a40; end: 103ec4b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4a40(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  char cStack_31;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_11302b730);
  puStack_68 = auStack_50;
  uStack_70 = 0x103ec4dac;
  lStack_60 = lVar1;
  uStack_40 = param_1;
  _swift_unknownObjectRetain(lVar1);
  func_0x000100087bd4(&cStack_31,FUN_103ec4e54,auStack_80,PTR___sSbN_11034dd40);
  _swift_unknownObjectRelease(lVar1);
  if (cStack_31 == '\x01') {
    func_0x000107c4184c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x000107c41ae8(*(undefined8 *)(unaff_x20 + _DAT_11302b720));
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 103ec4b0c; end: 103ec4b43; -[SCLensProcessingTrackerImpl didDestroyLensCoreWithTimestamp:] */

void FUN_103ec4b0c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_103ec4a40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103ec4b44; end: 103ec4ba3; -[SCLensProcessingTrackerImpl init] */

void FUN_103ec4b44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingTrackingImpl.LensProcessingTrackerImpl",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec4b70);
  (*pcVar1)();
}



/* Entry: 103ec4ba4; end: 103ec4c2b; -[SCLensProcessingTrackerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4ba4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b720));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b740));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b738));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b748));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b728));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b730));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302b718));
  return;
}



/* Entry: 103ec4c2c; end: 103ec4d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4c2c(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x0001000285a8(0x11302b778,&UNK_10dca6730);
  func_0x000107c4b504();
  _objc_retainAutoreleasedReturnValue();
  plVar1 = param_1;
  func_0x0001000b637c();
  _objc_release(param_1);
  puVar2 = &UNK_11071d078;
  _swift_allocObject(&UNK_11071d078,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_2);
  uVar3 = 0x103ec4e4c;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x103ec4e4c);
  _swift_release(plVar1);
  _swift_release(puVar2);
  uVar4 = uVar3;
  _swift_getObjectType(uVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(param_2 + _DAT_11302b718),uVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 103ec4d1c; end: 103ec4d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4d1c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_11302b5e0),1)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(param_1 + _DAT_11302b5e0) = *(long *)(param_1 + _DAT_11302b5e0) + 1;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302b5d0);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec4e4c);
  (*pcVar2)();
}



/* Entry: 103ec4d20; end: 103ec4d4f;  */

void FUN_103ec4d20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103ec4d50; end: 103ec4d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4d50(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11302b5d8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 103ec4d5c; end: 103ec4d8b;  */

void FUN_103ec4d5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103ec4d8c; end: 103ec4deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4d8c(long param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11302b5e8);
  *puVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 103ec4dec; end: 103ec4e0b;  */

void FUN_103ec4dec(void)

{
  _objc_opt_self(&PTR_PTR_11295fcd8);
  return;
}



/* Entry: 103ec4e0c; end: 103ec4e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4e0c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_11302b5e0),1)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(param_1 + _DAT_11302b5e0) = *(long *)(param_1 + _DAT_11302b5e0) + 1;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302b5d0);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec4e4c);
  (*pcVar2)();
}



/* Entry: 103ec4e54; end: 103ec4e8f;  */

void FUN_103ec4e54(void)

{
  FUN_103ec4d5c();
  return;
}



/* Entry: 103ec4e90; end: 103ec4e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4e90(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_11302b5e0),1)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(param_1 + _DAT_11302b5e0) = *(long *)(param_1 + _DAT_11302b5e0) + 1;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302b5d0);
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec4e4c);
  (*pcVar2)();
}



/* Entry: 103ec4e98; end: 103ec4e9b; -[SCLensProcessingTrackerImpl mlUsageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4e98(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11302b738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ec4e9c; end: 103ec4e9f; -[SCLensProcessingTrackerImpl mlUsageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4e9c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11302b738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ec4ea0; end: 103ec4ea3; -[SCLensProcessingTrackerImpl genAiUsageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302b748));
  return;
}



/* Entry: 103ec4ea4; end: 103ec4ea7; -[SCLensProcessingTrackerImpl genAiUsageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302b748));
  return;
}



/* Entry: 103ec4ea8; end: 103ec4eab; -[SCLensProcessingTrackerImpl lensUsageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4ea8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11302b740));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ec4eac; end: 103ec4eaf; -[SCLensProcessingTrackerImpl lensUsageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4eac(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11302b740));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ec4eb0; end: 103ec4ed3;  */

void FUN_103ec4eb0(void)

{
  long unaff_x20;
  
  func_0x000100d71704(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ec4ed4; end: 103ec4f13; -[SCLensUsageTrackerImpl lensUsageEndedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4ed4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001004575f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ec4f14; end: 103ec530f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec4f14(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  lVar1 = _DAT_11302b788;
  if (*(long *)(unaff_x20 + _DAT_11302b788) != 0) {
    return;
  }
  uVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  _swift_retain();
  _swift_release(uVar11);
  func_0x0001000285a8(0x112d59e78,&UNK_10d920c20);
  plVar3 = param_1;
  func_0x000107c5e3e4();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar3;
  func_0x0001000b637c();
  _objc_release(plVar3);
  puVar9 = &UNK_11071d0a0;
  puVar5 = puVar9;
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  pcVar6 = FUN_103ec5564;
  puVar10 = puVar5;
  (**(code **)(*plVar4 + 0x60))(FUN_103ec5564);
  _swift_release(plVar4);
  _swift_release(puVar5);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar10 + 0x10))(uVar2,pcVar7,puVar10);
  _swift_unknownObjectRelease(pcVar6);
  plVar3 = param_1;
  func_0x000107c41dc8();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar3;
  func_0x0001000b637c();
  _objc_release(plVar3);
  puVar5 = puVar9;
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  pcVar6 = FUN_103ec5818;
  puVar10 = puVar5;
  (**(code **)(*plVar4 + 0x60))(FUN_103ec5818);
  _swift_release(plVar4);
  _swift_release(puVar5);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar10 + 0x10))(uVar2,pcVar7,puVar10);
  _swift_unknownObjectRelease(pcVar6);
  func_0x0001000285a8(0x112f67a48,&UNK_10dbc33e0);
  plVar3 = param_1;
  func_0x000107c41c60();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar3;
  func_0x0001000b637c();
  _objc_release(plVar3);
  puVar5 = puVar9;
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  pcVar6 = FUN_103ec5820;
  puVar10 = puVar5;
  (**(code **)(*plVar4 + 0x60))(FUN_103ec5820);
  _swift_release(plVar4);
  _swift_release(puVar5);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar10 + 0x10))(uVar2,pcVar7,puVar10);
  _swift_unknownObjectRelease(pcVar6);
  plVar3 = param_1;
  func_0x000107c41c24();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar3;
  func_0x0001000b637c();
  _objc_release(plVar3);
  puVar5 = puVar9;
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  uVar11 = 0x103ec5850;
  puVar10 = puVar5;
  (**(code **)(*plVar4 + 0x60))(0x103ec5850);
  _swift_release(plVar4);
  _swift_release(puVar5);
  uVar8 = uVar11;
  _swift_getObjectType(uVar11);
  (**(code **)(puVar10 + 0x10))(uVar2,uVar8,puVar10);
  _swift_unknownObjectRelease(uVar11);
  func_0x000107c5e3e0();
  _objc_retainAutoreleasedReturnValue();
  plVar3 = param_1;
  func_0x0001000b637c();
  _objc_release(param_1);
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10);
  pcVar6 = FUN_103ec5c34;
  puVar5 = puVar9;
  (**(code **)(*plVar3 + 0x60))(FUN_103ec5c34);
  _swift_release(plVar3);
  _swift_release(puVar9);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar5 + 0x10))(uVar2,pcVar7,puVar5);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar6);
  return;
}



/* Entry: 103ec5310; end: 103ec5563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5310(undefined8 param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_f0 [16];
  code *pcStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_90 [32];
  
  uVar8 = *param_2;
  _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar9 = uVar8;
    func_0x000107c42454();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    FUN_103ec8bd0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar6 = uVar9;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar5);
    _objc_release(uVar9);
    if (uVar6 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      puVar2 = PTR___sytN_11034f1b0;
    }
    else {
      uVar9 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar9 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar2 = PTR___sytN_11034f1b0;
    }
    PTR___sytN_11034f1b0 = puVar2;
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5518);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(uVar6 + uVar10 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar7 = uVar10;
          FUN_103ec7204(uVar10,uVar6,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5514);
          (*pcVar4)();
        }
        func_0x000107c5ca64(uVar8);
        uVar5 = 0x11302b7a0;
        pcStack_e0 = (code *)param_3;
        puStack_d8 = (undefined8 *)uVar7;
        func_0x0001000285a8(0x11302b7a0,&UNK_10dca6738);
        func_0x000100087bd4(&uStack_c0,0x103ec8b90,auStack_f0,uVar5);
        uVar3 = uStack_b8;
        uVar5 = uStack_c0;
        puStack_d8 = &uStack_c0;
        pcStack_e0 = FUN_103ec8ba8;
        uStack_d0 = uStack_c0;
        uStack_b0 = param_1;
        uStack_a8 = uVar7;
        func_0x000100087bd4(0x103ec8c64,auStack_f0,puVar2 + 8);
        uStack_c8 = uVar3;
        uStack_d0 = uVar5;
        param_1 = uVar5;
        pcStack_e0 = (code *)param_3;
        puStack_d8 = (undefined8 *)uVar7;
        func_0x000100087bd4(FUN_103ec8bb4,auStack_f0,puVar2 + 8);
        _swift_unknownObjectRelease(uVar5);
        _objc_release(uVar7);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    _objc_release(param_3);
    _swift_bridgeObjectRelease(uVar6);
  }
  return;
}



/* Entry: 103ec5564; end: 103ec556b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5564(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 auStack_f0 [16];
  code *pcStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_90 [32];
  
  uVar9 = *param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    uVar10 = uVar9;
    func_0x000107c42454();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    FUN_103ec8bd0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar7 = uVar10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar6);
    _objc_release(uVar10);
    if (uVar7 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      puVar2 = PTR___sytN_11034f1b0;
    }
    else {
      uVar10 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar10 = uVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar2 = PTR___sytN_11034f1b0;
    }
    PTR___sytN_11034f1b0 = puVar2;
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5518);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar7 + uVar11 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar8 = uVar11;
          FUN_103ec7204(uVar11,uVar7,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5514);
          (*pcVar4)();
        }
        func_0x000107c5ca64(uVar9);
        uVar6 = 0x11302b7a0;
        pcStack_e0 = (code *)lVar5;
        puStack_d8 = (undefined8 *)uVar8;
        func_0x0001000285a8(0x11302b7a0,&UNK_10dca6738);
        func_0x000100087bd4(&uStack_c0,0x103ec8b90,auStack_f0,uVar6);
        uVar3 = uStack_b8;
        uVar6 = uStack_c0;
        puStack_d8 = &uStack_c0;
        pcStack_e0 = FUN_103ec8ba8;
        uStack_d0 = uStack_c0;
        uStack_b0 = param_1;
        uStack_a8 = uVar8;
        func_0x000100087bd4(0x103ec8c64,auStack_f0,puVar2 + 8);
        uStack_c8 = uVar3;
        uStack_d0 = uVar6;
        param_1 = uVar6;
        pcStack_e0 = (code *)lVar5;
        puStack_d8 = (undefined8 *)uVar8;
        func_0x000100087bd4(FUN_103ec8bb4,auStack_f0,puVar2 + 8);
        _swift_unknownObjectRelease(uVar6);
        _objc_release(uVar8);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar10);
    }
    _objc_release(lVar5);
    _swift_bridgeObjectRelease(uVar7);
  }
  return;
}



/* Entry: 103ec556c; end: 103ec5817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec556c(undefined8 param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f0 [16];
  code *pcStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  byte abStack_99 [9];
  undefined1 auStack_90 [32];
  
  uVar11 = *param_2;
  _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar9 = uVar11;
    func_0x000107c42454();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    FUN_103ec8bd0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar5 = uVar9;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar4);
    _objc_release(uVar9);
    if (uVar5 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar9 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec57cc);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar5 + uVar10 * 8 + 0x20);
          _objc_retain();
          uVar4 = param_1;
        }
        else {
          uVar6 = uVar10;
          FUN_103ec7204(uVar10,uVar5,&PTR_PTR_1126ae6a8,0x112d4d630);
          uVar4 = param_1;
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec57c8);
          (*pcVar3)();
        }
        func_0x000107c5ca64(uVar11);
        uVar7 = 0x11302b8a0;
        param_1 = uVar4;
        pcStack_e0 = (code *)param_3;
        plStack_d8 = (long *)uVar6;
        func_0x0001000285a8(0x11302b8a0,&UNK_10dca67a0);
        func_0x000100087bd4(alStack_c0,FUN_103ec8af4,auStack_f0,uVar7);
        lVar2 = alStack_c0[0];
        if (alStack_c0[0] == 0) {
          _objc_release(uVar6);
        }
        else {
          plStack_d8 = alStack_c0;
          pcStack_e0 = FUN_103ec8b0c;
          lStack_d0 = alStack_c0[0];
          uStack_b0 = uVar4;
          func_0x000100087bd4(abStack_99,FUN_103ec8b48,auStack_f0,PTR___sSbN_11034dd40);
          if ((abStack_99[0] & 1) != 0) {
            lVar8 = lVar2;
            func_0x000107c43bec();
            _objc_retainAutoreleasedReturnValue();
            if (lVar8 != 0) {
              func_0x0001002a64a8(auStack_f0);
              _objc_release(lVar8);
            }
          }
          pcStack_e0 = (code *)param_3;
          plStack_d8 = (long *)uVar6;
          func_0x000100087bd4(FUN_103ec8b78,auStack_f0,PTR___sytN_11034f1b0 + 8);
          _objc_release(uVar6);
          _swift_unknownObjectRelease(lVar2);
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    _objc_release(param_3);
    _swift_bridgeObjectRelease(uVar5);
  }
  return;
}



/* Entry: 103ec5818; end: 103ec581f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5818(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_f0 [16];
  code *pcStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  byte abStack_99 [9];
  undefined1 auStack_90 [32];
  
  uVar12 = *param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    uVar10 = uVar12;
    func_0x000107c42454();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    FUN_103ec8bd0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar6 = uVar10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar5);
    _objc_release(uVar10);
    if (uVar6 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar10 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec57cc);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(uVar6 + uVar11 * 8 + 0x20);
          _objc_retain();
          uVar5 = param_1;
        }
        else {
          uVar7 = uVar11;
          FUN_103ec7204(uVar11,uVar6,&PTR_PTR_1126ae6a8,0x112d4d630);
          uVar5 = param_1;
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ec57c8);
          (*pcVar3)();
        }
        func_0x000107c5ca64(uVar12);
        uVar8 = 0x11302b8a0;
        param_1 = uVar5;
        pcStack_e0 = (code *)lVar4;
        plStack_d8 = (long *)uVar7;
        func_0x0001000285a8(0x11302b8a0,&UNK_10dca67a0);
        func_0x000100087bd4(alStack_c0,FUN_103ec8af4,auStack_f0,uVar8);
        lVar2 = alStack_c0[0];
        if (alStack_c0[0] == 0) {
          _objc_release(uVar7);
        }
        else {
          plStack_d8 = alStack_c0;
          pcStack_e0 = FUN_103ec8b0c;
          lStack_d0 = alStack_c0[0];
          uStack_b0 = uVar5;
          func_0x000100087bd4(abStack_99,FUN_103ec8b48,auStack_f0,PTR___sSbN_11034dd40);
          if ((abStack_99[0] & 1) != 0) {
            lVar9 = lVar2;
            func_0x000107c43bec();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 != 0) {
              func_0x0001002a64a8(auStack_f0);
              _objc_release(lVar9);
            }
          }
          pcStack_e0 = (code *)lVar4;
          plStack_d8 = (long *)uVar7;
          func_0x000100087bd4(FUN_103ec8b78,auStack_f0,PTR___sytN_11034f1b0 + 8);
          _objc_release(uVar7);
          _swift_unknownObjectRelease(lVar2);
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar10);
    }
    _objc_release(lVar4);
    _swift_bridgeObjectRelease(uVar6);
  }
  return;
}



/* Entry: 103ec5820; end: 103ec587f;  */

void FUN_103ec5820(void)

{
  FUN_103ec5eec();
  return;
}



/* Entry: 103ec5880; end: 103ec5973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5880(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  uVar4 = param_3;
  func_0x000107c42440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_3);
  lVar2 = _DAT_11302b7b8;
  _swift_beginAccess(param_2 + _DAT_11302b7b8,auStack_58,0x20,0);
  uVar6 = *(ulong *)(param_2 + lVar2);
  if (*(long *)(uVar6 + 0x10) == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    uVar5 = uVar4;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(uVar6 + 0x38) + uVar3 * 0x10);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      _swift_unknownObjectRetain(uVar7);
    }
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar6;
  }
  _swift_bridgeObjectRelease(uVar4);
  *param_1 = uVar7;
  param_1[1] = uVar8;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 103ec5974; end: 103ec5c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5974(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = (undefined1 *)*param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = _DAT_11302b798;
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b798);
    _swift_retain(uVar11);
    func_0x00010006c804();
    _swift_release(uVar11);
    puVar12 = puVar14;
    func_0x000107c42454();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)0x0;
    FUN_103ec8bd0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    puVar6 = puVar12;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar12);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar12 = *(undefined1 **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      lVar2 = _DAT_11302b7b8;
    }
    else {
      puVar12 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar6) {
        puVar12 = puVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar2 = _DAT_11302b7b8;
    }
    _DAT_11302b7b8 = lVar2;
    if (puVar12 != (undefined1 *)0x0) {
      uVar15 = 0;
      do {
        if (((ulong)puVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5bcc);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(puVar6 + uVar15 * 8 + 0x20);
          _objc_retain();
          puVar10 = puVar5;
        }
        else {
          uVar7 = uVar15;
          puVar10 = puVar6;
          FUN_103ec7204(uVar15,puVar6,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        puVar1 = (undefined1 *)(uVar15 + 1);
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5bc8);
          (*pcVar4)();
        }
        uVar8 = uVar7;
        func_0x000107c4b1dc();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar8);
        puVar5 = auStack_c0;
        _swift_beginAccess(param_2 + lVar2,puVar5,0x20,0);
        lVar13 = *(long *)(param_2 + lVar2);
        if (*(long *)(lVar13 + 0x10) == 0) {
LAB_103ec5a68:
          _swift_bridgeObjectRelease(puVar10);
          _swift_endAccess(auStack_c0);
        }
        else {
          _swift_bridgeObjectRetain(lVar13);
          puVar5 = puVar10;
          func_0x000100029284();
          if (((ulong)puVar5 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar13);
            goto LAB_103ec5a68;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar9 * 0x10);
          _swift_unknownObjectRetain(uVar11);
          _swift_endAccess(auStack_c0);
          _swift_bridgeObjectRelease(lVar13);
          _swift_bridgeObjectRelease(puVar10);
          puStack_a8 = auStack_90;
          uStack_b0 = 0x103ec8a28;
          puVar5 = auStack_c0;
          uStack_a0 = uVar11;
          puStack_80 = puVar14;
          func_0x000100087bd4(0x103ec8c28,puVar5,PTR___sytN_11034f1b0 + 8);
          _swift_unknownObjectRelease(uVar11);
        }
        _objc_release(uVar7);
        uVar15 = uVar15 + 1;
      } while (puVar1 != puVar12);
    }
    _swift_bridgeObjectRelease(puVar6);
    uVar11 = *(undefined8 *)(param_2 + lVar3);
    _swift_retain(uVar11);
    func_0x000100070bfc();
    _objc_release(param_2);
    _swift_release(uVar11);
  }
  return;
}



/* Entry: 103ec5c34; end: 103ec5c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5c34(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  long unaff_x20;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar15 = (undefined1 *)*param_1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = _DAT_11302b798;
  if (lVar5 != 0) {
    uVar12 = *(undefined8 *)(lVar5 + _DAT_11302b798);
    _swift_retain(uVar12);
    func_0x00010006c804();
    _swift_release(uVar12);
    puVar13 = puVar15;
    func_0x000107c42454();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)0x0;
    FUN_103ec8bd0(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    puVar7 = puVar13;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar13);
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar13 = *(undefined1 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      lVar2 = _DAT_11302b7b8;
    }
    else {
      puVar13 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar7) {
        puVar13 = puVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar2 = _DAT_11302b7b8;
    }
    _DAT_11302b7b8 = lVar2;
    if (puVar13 != (undefined1 *)0x0) {
      uVar16 = 0;
      do {
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5bcc);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(puVar7 + uVar16 * 8 + 0x20);
          _objc_retain();
          puVar11 = puVar6;
        }
        else {
          uVar8 = uVar16;
          puVar11 = puVar7;
          FUN_103ec7204(uVar16,puVar7,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        puVar1 = (undefined1 *)(uVar16 + 1);
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec5bc8);
          (*pcVar4)();
        }
        uVar9 = uVar8;
        func_0x000107c4b1dc();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar9);
        puVar6 = auStack_c0;
        _swift_beginAccess(lVar5 + lVar2,puVar6,0x20,0);
        lVar14 = *(long *)(lVar5 + lVar2);
        if (*(long *)(lVar14 + 0x10) == 0) {
LAB_103ec5a68:
          _swift_bridgeObjectRelease(puVar11);
          _swift_endAccess(auStack_c0);
        }
        else {
          _swift_bridgeObjectRetain(lVar14);
          puVar6 = puVar11;
          func_0x000100029284();
          if (((ulong)puVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar14);
            goto LAB_103ec5a68;
          }
          uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar10 * 0x10);
          _swift_unknownObjectRetain(uVar12);
          _swift_endAccess(auStack_c0);
          _swift_bridgeObjectRelease(lVar14);
          _swift_bridgeObjectRelease(puVar11);
          puStack_a8 = auStack_90;
          uStack_b0 = 0x103ec8a28;
          puVar6 = auStack_c0;
          uStack_a0 = uVar12;
          puStack_80 = puVar15;
          func_0x000100087bd4(0x103ec8c28,puVar6,PTR___sytN_11034f1b0 + 8);
          _swift_unknownObjectRelease(uVar12);
        }
        _objc_release(uVar8);
        uVar16 = uVar16 + 1;
      } while (puVar1 != puVar13);
    }
    _swift_bridgeObjectRelease(puVar7);
    uVar12 = *(undefined8 *)(lVar5 + lVar3);
    _swift_retain(uVar12);
    func_0x000100070bfc();
    _objc_release(lVar5);
    _swift_release(uVar12);
  }
  return;
}



/* Entry: 103ec5c3c; end: 103ec5c47; -[SCLensUsageTrackerImpl subscribeWithEffectApplicator:] */

void FUN_103ec5c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103ec4f14(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec5c48; end: 103ec5eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5c48(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar1 = _DAT_11302b790;
  if (*(long *)(unaff_x20 + _DAT_11302b790) != 0) {
    return;
  }
  uVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  uVar10 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  _swift_retain();
  _swift_release(uVar10);
  func_0x0001000285a8(0x112f67998,&UNK_10dbc3390);
  plVar3 = param_1;
  func_0x000107c4cff4();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar3;
  func_0x0001000b637c();
  _objc_release(plVar3);
  puVar8 = &UNK_11071d0a0;
  puVar5 = puVar8;
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  pcVar6 = FUN_103ec5ff8;
  puVar9 = puVar5;
  (**(code **)(*plVar4 + 0x60))(FUN_103ec5ff8);
  _swift_release(plVar4);
  _swift_release(puVar5);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar9 + 0x10))(uVar2,pcVar7,puVar9);
  _swift_unknownObjectRelease(pcVar6);
  plVar3 = param_1;
  func_0x000107c4cff0();
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar3;
  func_0x0001000b637c();
  _objc_release(plVar3);
  puVar5 = puVar8;
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  pcVar6 = FUN_103ec60f0;
  puVar9 = puVar5;
  (**(code **)(*plVar4 + 0x60))(FUN_103ec60f0);
  _swift_release(plVar4);
  _swift_release(puVar5);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar9 + 0x10))(uVar2,pcVar7,puVar9);
  _swift_unknownObjectRelease(pcVar6);
  func_0x000107c4cfec();
  _objc_retainAutoreleasedReturnValue();
  plVar3 = param_1;
  func_0x0001000b637c();
  _objc_release(param_1);
  _swift_allocObject(&UNK_11071d0a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10);
  pcVar6 = FUN_103ec6480;
  puVar5 = puVar8;
  (**(code **)(*plVar3 + 0x60))(FUN_103ec6480);
  _swift_release(plVar3);
  _swift_release(puVar8);
  pcVar7 = pcVar6;
  _swift_getObjectType(pcVar6);
  (**(code **)(puVar5 + 0x10))(uVar2,pcVar7,puVar5);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar6);
  return;
}



/* Entry: 103ec5eec; end: 103ec5ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec5eec(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  long alStack_78 [2];
  undefined1 auStack_68 [24];
  
  puVar3 = (undefined1 *)*param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11302b798);
    lStack_c0 = param_2;
    puStack_b8 = puVar3;
    _swift_retain(uVar2);
    uVar1 = 0x11302b8a0;
    func_0x0001000285a8(0x11302b8a0,&UNK_10dca67a0);
    func_0x000100087bd4(alStack_78,param_3,auStack_d0,uVar1);
    _swift_release(uVar2);
    if (alStack_78[0] != 0) {
      puStack_b8 = auStack_a0;
      lStack_b0 = alStack_78[0];
      lStack_c0 = param_4;
      puStack_90 = puVar3;
      func_0x000100087bd4(param_5,auStack_d0,PTR___sytN_11034f1b0 + 8);
      _swift_unknownObjectRelease(alStack_78[0]);
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103ec5ff8; end: 103ec6027;  */

void FUN_103ec5ff8(void)

{
  FUN_103ec5eec();
  return;
}



/* Entry: 103ec6028; end: 103ec60ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6028(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_11302b548;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11306fd38);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11306fd38))[1];
  _swift_beginAccess(param_1 + _DAT_11302b548,auStack_58,0x21,0);
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0x8000000000000000;
  FUN_103ec7550(param_2,uVar1,uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + lVar3) = uVar5;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 103ec60f0; end: 103ec6127;  */

void FUN_103ec60f0(void)

{
  FUN_103ec634c();
  return;
}



/* Entry: 103ec6128; end: 103ec634b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6128(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_11302b548;
  plVar1 = (long *)(param_2 + _DAT_11306fd38);
  _swift_beginAccess(param_1 + _DAT_11302b548,auStack_78,0x20,0);
  lVar8 = *(long *)(param_1 + lVar4);
  lVar2 = *plVar1;
  uVar3 = plVar1[1];
  if (*(long *)(lVar8 + 0x10) == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    lVar5 = lVar2;
    uVar7 = uVar3;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + lVar5 * 8);
      _objc_retain();
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar8);
      uVar11 = *(undefined8 *)(param_2 + _DAT_11306fd40);
      uVar12 = *(undefined8 *)(lVar5 + _DAT_11306fd48);
      uVar10 = *(undefined8 *)(param_2 + _DAT_11306fd50);
      uVar9 = *(undefined8 *)(lVar5 + _DAT_11306fd58);
      _objc_retain(uVar9);
      _objc_retain(uVar11);
      uVar6 = uVar12;
      uVar13 = uVar10;
      goto LAB_103ec627c;
    }
    _swift_endAccess(auStack_78);
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar9 = 0;
  uVar6 = 0;
  lVar5 = 0;
  uVar12 = *(undefined8 *)(param_2 + _DAT_11306fd50);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306fd40);
  uVar11 = uVar10;
  uVar13 = uVar12;
LAB_103ec627c:
  _objc_retain(uVar12);
  _objc_retain(uVar10);
  func_0x0001043406e8(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain_n(uVar3,2);
  lVar8 = lVar2;
  func_0x000104340678(lVar2,uVar3,uVar11,uVar6,uVar13,uVar9);
  _swift_beginAccess(param_1 + lVar4,auStack_78,0x21,0);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar11 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0x8000000000000000;
  FUN_103ec7550(lVar8,lVar2,uVar3,uVar6);
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)(param_1 + lVar4) = uVar11;
  _swift_endAccess(auStack_78);
  _objc_release(lVar5);
  return;
}



/* Entry: 103ec634c; end: 103ec647f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec634c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_81 [9];
  long alStack_78 [2];
  undefined1 auStack_68 [24];
  
  uVar3 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11302b798);
    lStack_e0 = param_2;
    puStack_d8 = (undefined1 *)uVar3;
    _swift_retain(uVar2);
    uVar1 = 0x11302b8a0;
    func_0x0001000285a8(0x11302b8a0,&UNK_10dca67a0);
    func_0x000100087bd4(alStack_78,param_3,auStack_f0,uVar1);
    _swift_release(uVar2);
    if (alStack_78[0] == 0) {
      _objc_release(param_2);
    }
    else {
      puStack_a8 = auStack_a0;
      puStack_d8 = auStack_c0;
      lStack_d0 = alStack_78[0];
      uVar1 = 0x112d518a8;
      lStack_e0 = param_5;
      uStack_b0 = param_4;
      uStack_90 = uVar3;
      func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
      func_0x000100087bd4(auStack_81,param_6,auStack_f0,uVar1);
      _objc_release(param_2);
      _swift_unknownObjectRelease(alStack_78[0]);
    }
  }
  return;
}



/* Entry: 103ec6480; end: 103ec64b7;  */

void FUN_103ec6480(void)

{
  FUN_103ec634c();
  return;
}



/* Entry: 103ec64b8; end: 103ec65b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec64b8(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(param_3 + _DAT_11306fd40);
  func_0x000107c4b1dc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(lVar2);
  lVar2 = _DAT_11302b7b8;
  _swift_beginAccess(param_2 + _DAT_11302b7b8,auStack_58,0x20,0);
  uVar5 = *(ulong *)(param_2 + lVar2);
  if (*(long *)(uVar5 + 0x10) == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar4 = param_3;
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(uVar5 + 0x38) + lVar3 * 0x10);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      _swift_unknownObjectRetain(uVar6);
    }
    _swift_bridgeObjectRelease(param_3);
    param_3 = uVar5;
  }
  _swift_bridgeObjectRelease(param_3);
  *param_1 = uVar6;
  param_1[1] = uVar7;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 103ec65b8; end: 103ec67c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec65b8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_11302b548;
  plVar1 = (long *)(param_2 + _DAT_11306fd38);
  _swift_beginAccess(param_1 + _DAT_11302b548,auStack_78,0x20,0);
  lVar8 = *(long *)(param_1 + lVar4);
  lVar2 = *plVar1;
  uVar3 = plVar1[1];
  if (*(long *)(lVar8 + 0x10) == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    lVar5 = lVar2;
    uVar7 = uVar3;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + lVar5 * 8);
      _objc_retain();
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar8);
      uVar10 = *(undefined8 *)(param_2 + _DAT_11306fd40);
      uVar11 = *(undefined8 *)(lVar5 + _DAT_11306fd48);
      uVar9 = *(undefined8 *)(lVar5 + _DAT_11306fd50);
      _objc_retain(uVar9);
      _objc_retain(uVar10);
      uVar6 = uVar11;
      goto LAB_103ec66e4;
    }
    _swift_endAccess(auStack_78);
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar9 = 0;
  uVar6 = 0;
  lVar5 = 0;
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306fd40);
  uVar10 = uVar11;
LAB_103ec66e4:
  _objc_retain(uVar11);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306fd58);
  func_0x0001043406e8(0);
  _objc_allocWithZone();
  _objc_retain(uVar11);
  _swift_bridgeObjectRetain_n(uVar3,2);
  lVar8 = lVar2;
  func_0x000104340678(lVar2,uVar3,uVar10,uVar6,uVar9,uVar11);
  _swift_beginAccess(param_1 + lVar4,auStack_78,0x21,0);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar10 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0x8000000000000000;
  FUN_103ec7550(lVar8,lVar2,uVar3,uVar6);
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)(param_1 + lVar4) = uVar10;
  _swift_endAccess(auStack_78);
  _objc_release(lVar5);
  return;
}



/* Entry: 103ec67c4; end: 103ec67cf; -[SCLensUsageTrackerImpl subscribeWithMlUsageTracker:] */

void FUN_103ec67c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103ec5c48(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec67d0; end: 103ec6823;  */

void FUN_103ec67d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  (*param_4)(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec6824; end: 103ec6837;  */

void FUN_103ec6824(void)

{
  FUN_103ec8930();
  return;
}



/* Entry: 103ec6838; end: 103ec6ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ec6838(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000100b65f90();
  lVar7 = _DAT_11302b7b8;
  _swift_beginAccess(unaff_x20 + _DAT_11302b7b8,auStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    lVar8 = param_1;
    puVar3 = param_2;
    func_0x000100029284();
    if (((ulong)puVar3 & 1) != 0) {
      plVar1 = (long *)(*(long *)(lVar7 + 0x38) + lVar8 * 0x10);
      puVar3 = (undefined1 *)*plVar1;
      ppuVar9 = (undefined **)plVar1[1];
      _swift_unknownObjectRetain(puVar3);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_103ec6ab0;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  _swift_endAccess(auStack_68);
  lVar7 = _DAT_11302b7b0;
  puVar6 = auStack_68;
  _swift_beginAccess(unaff_x20 + _DAT_11302b7b0,puVar6,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_103ec6970:
    puVar10 = auStack_68;
    _swift_endAccess(puVar10);
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    lVar2 = param_1;
    puVar6 = param_2;
    func_0x000100029284();
    if (((ulong)puVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_103ec6970;
    }
    puVar10 = *(undefined1 **)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
    _swift_retain(puVar10);
    _swift_endAccess(auStack_68);
    _swift_bridgeObjectRelease(lVar8);
    puVar3 = puVar10 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    ppuVar9 = *(undefined ***)(puVar10 + 0x18);
    _swift_release(puVar10);
    if (puVar3 != (undefined1 *)0x0) goto LAB_103ec6ab0;
  }
  if (10 < *(ulong *)(*(long *)(unaff_x20 + lVar7) + 0x10)) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000103ec24dc();
    puVar6 = auStack_88;
    _swift_beginAccess(unaff_x20 + lVar7,puVar6,1,0);
    puVar10 = *(undefined1 **)(unaff_x20 + lVar7);
    *(undefined **)(unaff_x20 + lVar7) = puVar4;
    _swift_bridgeObjectRelease(puVar10);
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(puVar10);
  FUN_103ec26ec(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  FUN_103ec19b0(puVar3,puVar6,param_1,param_2);
  lVar8 = 0;
  FUN_103ec88f0();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x18) = 0;
  _swift_unknownObjectWeakInit(lVar8 + 0x10,0);
  ppuVar9 = &PTR_DAT_11071d020;
  *(undefined ***)(lVar8 + 0x18) = &PTR_DAT_11071d020;
  _swift_unknownObjectWeakAssign(lVar8 + 0x10,puVar3);
  _swift_beginAccess(unaff_x20 + lVar7,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
  _swift_isUniquelyReferenced_nonNull_native(uVar5);
  uStack_70 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
  func_0x000103ec76a0(lVar8,param_1,param_2,uVar5);
  _swift_bridgeObjectRelease(param_2);
  *(undefined8 *)(unaff_x20 + lVar7) = uStack_70;
  _swift_endAccess(auStack_68);
LAB_103ec6ab0:
  auVar11._8_8_ = ppuVar9;
  auVar11._0_8_ = puVar3;
  return auVar11;
}



/* Entry: 103ec6ad4; end: 103ec6b6f; -[SCLensUsageTrackerImpl applyContextWithLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_40 [2];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_2;
  _objc_retain(param_1);
  uVar1 = 0x11302b7a0;
  func_0x0001000285a8(0x11302b7a0,&UNK_10dca6738);
  func_0x000100087bd4(auStack_40,0x103ec8cb4,auStack_70,uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(auStack_40[0]);
  return;
}



/* Entry: 103ec6b70; end: 103ec6bef;  */

void FUN_103ec6b70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_3;
  func_0x000107c4b1dc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_3);
  uVar3 = uVar2;
  FUN_103ec6838();
  _swift_bridgeObjectRelease(uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103ec6bf0; end: 103ec6ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6bf0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11302b518);
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(param_2 + _DAT_11302b510);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    lVar5 = param_3;
    func_0x000107c4d420();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      lVar4 = 0;
      lVar5 = 0;
    }
    else {
      lVar4 = param_3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(param_3);
    }
    plVar2 = (long *)(param_2 + _DAT_11302b558);
    lVar3 = plVar2[1];
    *plVar2 = lVar4;
    plVar2[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
  return;
}



/* Entry: 103ec6ca4; end: 103ec6dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  uVar2 = param_2;
  uVar5 = param_2;
  func_0x000107c4b1dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar2);
  _swift_beginAccess(param_1 + _DAT_11302b7b0,auStack_68,0x21,0);
  uVar4 = uVar5;
  func_0x000103ec73c0(uVar3,uVar5);
  _swift_endAccess(auStack_68);
  _swift_bridgeObjectRelease(uVar5);
  _swift_release(uVar3);
  func_0x000107c4b1dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_2);
  lVar1 = _DAT_11302b7b8;
  _swift_beginAccess(param_1 + _DAT_11302b7b8,auStack_68,0x21,0);
  _swift_unknownObjectRetain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  func_0x000103ec77f0(param_3,param_4,uVar2,uVar4,uVar3);
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(param_1 + lVar1) = uVar5;
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 103ec6dfc; end: 103ec6eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6dfc(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  uVar4 = param_3;
  func_0x000107c4b1dc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_3);
  lVar2 = _DAT_11302b7b8;
  _swift_beginAccess(param_2 + _DAT_11302b7b8,auStack_58,0x20,0);
  uVar6 = *(ulong *)(param_2 + lVar2);
  if (*(long *)(uVar6 + 0x10) == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    uVar5 = uVar4;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(uVar6 + 0x38) + uVar3 * 0x10);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      _swift_unknownObjectRetain(uVar7);
    }
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar6;
  }
  _swift_bridgeObjectRelease(uVar4);
  *param_1 = uVar7;
  param_1[1] = uVar8;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 103ec6ef0; end: 103ec700f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec6ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar1 = param_2;
  uVar3 = param_2;
  func_0x000107c4b1dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar1);
  _swift_beginAccess(param_1 + _DAT_11302b7b8,auStack_58,0x21,0);
  uVar4 = uVar3;
  FUN_103ec747c(uVar2,uVar3);
  _swift_endAccess(auStack_58);
  _swift_bridgeObjectRelease(uVar3);
  _swift_unknownObjectRelease(uVar2);
  func_0x000107c4b1dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_2);
  _swift_beginAccess(param_1 + _DAT_11302b7b0,auStack_58,0x21,0);
  func_0x000103ec73c0(uVar1,uVar4);
  _swift_endAccess(auStack_58);
  _swift_bridgeObjectRelease(uVar4);
  _swift_release(uVar1);
  return;
}



/* Entry: 103ec7010; end: 103ec7113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec7010(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302b7a8,0);
  lVar1 = _DAT_11302b798;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_11302b7b0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103ec24dc();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_11302b7b8;
  func_0x000103ec25d8();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_11302b788) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302b790) = 0;
  lVar1 = _DAT_11302b780;
  uVar2 = 0x11302b4f0;
  func_0x0001000285a8(0x11302b4f0,&UNK_10dca6740);
  _swift_allocObject();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ec7114; end: 103ec7133; -[SCLensUsageTrackerImpl init] */

void FUN_103ec7114(void)

{
  FUN_103ec7010();
  return;
}



/* Entry: 103ec7134; end: 103ec7167;  */

void FUN_103ec7134(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec7168; end: 103ec71ef; -[SCLensUsageTrackerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec7168(long param_1)

{
  func_0x000100d71704(param_1 + _DAT_11302b7a8);
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b798));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b7b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b7b8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b788));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b790));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302b780));
  return;
}



/* Entry: 103ec71f0; end: 103ec7203;  */

ulong FUN_103ec71f0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec72e8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec72ec);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_1126c3140;
    _objc_opt_self(PTR_PTR_1126c3140);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_1126c3140;
    _objc_opt_self(PTR_PTR_1126c3140);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103ec8bd0(0,0x11302b6b8,&PTR_PTR_1126c3140);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec73c0);
  (*pcVar2)();
}



/* Entry: 103ec7204; end: 103ec747b;  */

ulong FUN_103ec7204(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec72e8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec72ec);
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
  FUN_103ec8bd0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec73c0);
  (*pcVar2)();
}


