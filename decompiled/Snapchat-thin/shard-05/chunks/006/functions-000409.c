/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f97640; end: 103f9767f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f97640(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113038dc8;
  _swift_beginAccess(unaff_x20 + _DAT_113038dc8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f97f18;
  return auVar2;
}



/* Entry: 103f97680; end: 103f97703; -[SCLensLayoutAttributes offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f97680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113038dd0;
  _swift_beginAccess(param_1 + _DAT_113038dd0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103f97704; end: 103f9779f; -[SCLensLayoutAttributes setOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97704(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113038dd0;
  _swift_beginAccess(param_2 + _DAT_113038dd0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 103f977a0; end: 103f977df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f977a0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113038dd0;
  _swift_beginAccess(unaff_x20 + _DAT_113038dd0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f97f14;
  return auVar2;
}



/* Entry: 103f977e0; end: 103f97863; -[SCLensLayoutAttributes iconOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f977e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113038dd8;
  _swift_beginAccess(param_1 + _DAT_113038dd8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103f97864; end: 103f978ff; -[SCLensLayoutAttributes setIconOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97864(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113038dd8;
  _swift_beginAccess(param_2 + _DAT_113038dd8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 103f97900; end: 103f9793f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f97900(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113038dd8;
  _swift_beginAccess(unaff_x20 + _DAT_113038dd8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103f97940;
  return auVar2;
}



/* Entry: 103f97940; end: 103f97943;  */

void FUN_103f97940(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f97944; end: 103f97adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97944(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined1 auStack_80 [32];
  
  lVar3 = param_2;
  FUN_103f97adc();
  puVar4 = &stack0xffffffffffffff70;
  _objc_msgSendSuper2(puVar4,PTR_s_copyWithZone__1125b2238,param_2);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_80);
  _swift_unknownObjectRelease(puVar4);
  _swift_dynamicCast(alStack_a8,auStack_80,PTR___sypN_11034f1a8 + 8,lVar3,7);
  lVar1 = _DAT_113038dc8;
  _swift_beginAccess(unaff_x20 + _DAT_113038dc8,auStack_80,0,0);
  lVar2 = _DAT_113038dc8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_beginAccess(alStack_a8[0] + _DAT_113038dc8,alStack_a8,1,0);
  *(undefined8 *)(alStack_a8[0] + lVar2) = uVar5;
  lVar1 = _DAT_113038dd0;
  _swift_beginAccess(unaff_x20 + _DAT_113038dd0,auStack_c0,0,0);
  lVar2 = _DAT_113038dd0;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_beginAccess(alStack_a8[0] + _DAT_113038dd0,auStack_d8,1,0);
  *(undefined8 *)(alStack_a8[0] + lVar2) = uVar5;
  lVar1 = _DAT_113038dc0;
  _swift_beginAccess(unaff_x20 + _DAT_113038dc0,auStack_f0,0,0);
  lVar2 = _DAT_113038dc0;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_beginAccess(alStack_a8[0] + _DAT_113038dc0,auStack_108,1,0);
  *(undefined8 *)(alStack_a8[0] + lVar2) = uVar5;
  lVar1 = _DAT_113038dd8;
  _swift_beginAccess(unaff_x20 + _DAT_113038dd8,auStack_120,0,0);
  lVar2 = _DAT_113038dd8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_beginAccess(alStack_a8[0] + _DAT_113038dd8,auStack_138,1,0);
  *(undefined8 *)(alStack_a8[0] + lVar2) = uVar5;
  param_1[3] = lVar3;
  *param_1 = alStack_a8[0];
  return;
}



/* Entry: 103f97adc; end: 103f97afb;  */

void FUN_103f97adc(void)

{
  _objc_opt_self(&PTR_PTR_112971ab8);
  return;
}



/* Entry: 103f97afc; end: 103f97b63; -[SCLensLayoutAttributes copyWithZone:] */

undefined1 * FUN_103f97afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  _objc_retain();
  FUN_103f97944(auStack_40,param_3);
  _objc_release(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 103f97b64; end: 103f97def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f97b64(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined1 auStack_90 [24];
  long lStack_78;
  
  uVar2 = param_1;
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    FUN_103f97adc();
    plVar3 = alStack_a8;
    _swift_dynamicCast(plVar3,auStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar6 = _DAT_113038dc8;
    if (((ulong)plVar3 & 1) != 0) {
      _swift_beginAccess(alStack_a8[0] + _DAT_113038dc8,alStack_a8,0,0);
      lVar1 = _DAT_113038dc8;
      dVar7 = *(double *)(alStack_a8[0] + lVar6);
      _swift_beginAccess(unaff_x20 + _DAT_113038dc8,auStack_c0,0,0);
      lVar6 = _DAT_113038dd0;
      if (dVar7 == *(double *)(unaff_x20 + lVar1)) {
        _swift_beginAccess(alStack_a8[0] + _DAT_113038dd0,auStack_d8,0,0);
        lVar1 = _DAT_113038dd0;
        dVar7 = *(double *)(alStack_a8[0] + lVar6);
        _swift_beginAccess(unaff_x20 + _DAT_113038dd0,auStack_f0,0,0);
        lVar6 = _DAT_113038dc0;
        if (dVar7 == *(double *)(unaff_x20 + lVar1)) {
          _swift_beginAccess(alStack_a8[0] + _DAT_113038dc0,auStack_108,0,0);
          lVar1 = _DAT_113038dc0;
          dVar7 = *(double *)(alStack_a8[0] + lVar6);
          _swift_beginAccess(unaff_x20 + _DAT_113038dc0,auStack_120,0,0);
          lVar6 = _DAT_113038dd8;
          if (dVar7 == *(double *)(unaff_x20 + lVar1)) {
            _swift_beginAccess(alStack_a8[0] + _DAT_113038dd8,auStack_138,0,0);
            lVar1 = _DAT_113038dd8;
            dVar7 = *(double *)(alStack_a8[0] + lVar6);
            _swift_beginAccess(unaff_x20 + _DAT_113038dd8,auStack_150,0,0);
            if (dVar7 == *(double *)(unaff_x20 + lVar1)) {
              func_0x000100672b50(param_1,auStack_90);
              if (lStack_78 == 0) {
                puVar5 = (undefined1 *)0x0;
              }
              else {
                func_0x0001006732c8(auStack_90,lStack_78);
                lVar6 = *(long *)(lStack_78 + -8);
                (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
                puVar4 = auStack_150 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
                (**(code **)(lVar6 + 0x10))(puVar4);
                puVar5 = puVar4;
                __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar4,lStack_78);
                (**(code **)(lVar6 + 8))(puVar4,lStack_78);
                func_0x000100183ab8(auStack_90);
              }
              puVar4 = &stack0xfffffffffffffea0;
              _objc_msgSendSuper2(puVar4,PTR_s_isEqual__1125fa0c8,puVar5);
              _objc_release(alStack_a8[0]);
              _swift_unknownObjectRelease(puVar5);
              return puVar4;
            }
          }
        }
      }
      _objc_release(alStack_a8[0]);
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 103f97df0; end: 103f97e6f; -[SCLensLayoutAttributes isEqual:] */

uint FUN_103f97df0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f97b64(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103f97e70; end: 103f97edf; -[SCLensLayoutAttributes init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97e70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113038dc0) = 0;
  *(undefined8 *)(param_1 + _DAT_113038dc8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + _DAT_113038dd0) = 0;
  *(undefined8 *)(param_1 + _DAT_113038dd8) = 0x3ff0000000000000;
  lVar1 = param_1;
  FUN_103f97adc();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f97ee0; end: 103f97f0f;  */

void FUN_103f97ee0(void)

{
  FUN_103f97adc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f97f10; end: 103f97f1b;  */

void FUN_103f97f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f97f1c; end: 103f97f2b; -[_TtC32SCLensCarouselDependencyServices42SCLensCarouselCollectionControllerServices lensCarouselCollectionController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113038e08));
  return;
}



/* Entry: 103f97f2c; end: 103f97fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97f2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113038e08) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f97fc4; end: 103f9801b; -[_TtC32SCLensCarouselDependencyServices42SCLensCarouselCollectionControllerServices initWithLensCarouselCollectionController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f97fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113038e08) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f9801c; end: 103f9807b; -[_TtC32SCLensCarouselDependencyServices42SCLensCarouselCollectionControllerServices init] */

void FUN_103f9801c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselDependencyServices.SCLensCarouselCollectionControllerServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98048);
  (*pcVar1)();
}



/* Entry: 103f9807c; end: 103f9808b; -[_TtC32SCLensCarouselDependencyServices42SCLensCarouselCollectionControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9807c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113038e08));
  return;
}



/* Entry: 103f9808c; end: 103f980ab;  */

void FUN_103f9808c(void)

{
  _objc_opt_self(&PTR_PTR_112971be8);
  return;
}



/* Entry: 103f980ac; end: 103f98157;  */

void FUN_103f980ac(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f98158; end: 103f98197;  */

void FUN_103f98158(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103f98198; end: 103f981ff; -[SCLensCarouselExternalScrollSourceEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98198(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113038e38) == '\x01') {
    if (*(char *)(param_1 + _DAT_113038e48 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f981c8);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_113038e40 + 8) == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98200);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98200; end: 103f98247; -[SCLensCarouselExternalScrollSourceEvent init] */

void FUN_103f98200(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselDependencyServices/LensCarouselExternalScrollSourceEventWrapper.swift",
             0x53,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98248);
  (*pcVar1)();
}



/* Entry: 103f98248; end: 103f9824b; -[SCLensCarouselExternalScrollSourceEvent copyWithZone:] */

void FUN_103f98248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f9824c; end: 103f982c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9824c(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113038e38) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038e40);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038e48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f982c4; end: 103f98347; +[SCLensCarouselExternalScrollSourceEvent didChangeWithItemOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f982c4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113038e38) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038e40);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038e48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98348; end: 103f983bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98348(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113038e38) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038e40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038e48);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f983c0; end: 103f98443; +[SCLensCarouselExternalScrollSourceEvent didEndScrollingWithItemOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f983c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113038e38) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038e40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038e48);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98444; end: 103f984c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98444(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113038e38) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113038e48) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f984c0);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113038e48));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113038e40) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f984c4);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113038e40));
  }
  return;
}



/* Entry: 103f984c4; end: 103f9852f; -[SCLensCarouselExternalScrollSourceEvent matchDidChange:didEndScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f984c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113038e38) != '\x01') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113038e40) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103f98524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + _DAT_113038e40),param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98530);
    (*pcVar1)();
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_113038e48) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103f984fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(*(undefined8 *)(param_1 + _DAT_113038e48),param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9852c);
  (*pcVar1)();
}



/* Entry: 103f98530; end: 103f98583;  */

void FUN_103f98530(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f98584; end: 103f986eb;  */

int FUN_103f98584(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f98600;
        goto LAB_103f985e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f985e4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f98600:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f986ec; end: 103f9872b;  */

void FUN_103f986ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113038e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb4230;
  _swift_getWitnessTable(&UNK_10dcb4230,&UNK_110729ef8);
  puRam0000000113038e78 = puVar1;
  return;
}



/* Entry: 103f9872c; end: 103f98777; -[SCLensCarouselPresenterVisibilityModel itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9872c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113038e80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113038e80))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f98778; end: 103f98787; -[SCLensCarouselPresenterVisibilityModel carouselPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f98778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113038e88);
}



/* Entry: 103f98788; end: 103f9879f; -[SCLensCarouselPresenterVisibilityModel screenPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f98788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113038e90);
}



/* Entry: 103f987a0; end: 103f98933; -[SCLensCarouselPresenterVisibilityModel initWithItemId:carouselPosition:screenPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f987a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113038e80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113038e88) = param_4;
  *(undefined8 *)(param_1 + _DAT_113038e90) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f98934; end: 103f98967; -[SCLensCarouselPresenterVisibilityModel hash] */

undefined8 FUN_103f98934(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f98968();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f98968; end: 103f989ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98968(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113038e80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113038e80))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113038e88));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113038e90));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f98a00; end: 103f98aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f98a00(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_113038e80);
      if (lVar3 == *(long *)(lStack_68 + _DAT_113038e80) &&
          ((long *)(unaff_x20 + _DAT_113038e80))[1] == ((long *)(lStack_68 + _DAT_113038e80))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar3;
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_113038e88);
      lVar5 = *(long *)(lStack_68 + _DAT_113038e88);
      lVar3 = *(long *)(unaff_x20 + _DAT_113038e90);
      lVar6 = *(long *)(lStack_68 + _DAT_113038e90);
      _objc_release(lStack_68);
      if (lVar3 != lVar6) {
        return 0;
      }
      return uVar1 & lVar4 == lVar5;
    }
  }
  return 0;
}



/* Entry: 103f98b00; end: 103f98b7f; -[SCLensCarouselPresenterVisibilityModel isEqual:] */

uint FUN_103f98b00(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f98a00(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103f98b80; end: 103f98b83; -[SCLensCarouselPresenterVisibilityModel copyWithZone:] */

void FUN_103f98b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f98b84; end: 103f98b9f; -[SCLensCarouselPresenterVisibilityModel description] */

void FUN_103f98b84(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98ba0; end: 103f98c1b; -[SCLensCarouselPresenterVisibilityModel init] */

void FUN_103f98ba0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselDependencyServices/LensCarouselPresenterVisibilityModelWrapper.swift",
             0x52,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98be8);
  (*pcVar1)();
}



/* Entry: 103f98c1c; end: 103f98c2f; -[SCLensCarouselPresenterVisibilityModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113038e80 + 8))
  ;
  return;
}



/* Entry: 103f98c30; end: 103f98c4f;  */

void FUN_103f98c30(void)

{
  _objc_opt_self(&PTR_PTR_112971d78);
  return;
}



/* Entry: 103f98c50; end: 103f98c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038e80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113038e88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113038e90) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f98c54; end: 103f98cff;  */

void FUN_103f98c54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f98d00; end: 103f98d3f;  */

void FUN_103f98d00(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103f98d40; end: 103f98d97; -[SCLensDownloadEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98d40(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113038ec0) == '\x01') {
    if (*(long *)(param_1 + _DAT_113038ed0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98d68);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113038ec8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98d98);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98d98; end: 103f98ddf; -[SCLensDownloadEvent init] */

void FUN_103f98d98(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselDependencyServices/LensDownloadEventWrapper.swift",0x3f,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98de0);
  (*pcVar1)();
}



/* Entry: 103f98de0; end: 103f98de3; -[SCLensDownloadEvent copyWithZone:] */

void FUN_103f98de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f98de4; end: 103f98e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98de4(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113038ec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113038ec8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113038ed0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_30,puVar1);
  return;
}



/* Entry: 103f98e54; end: 103f98f3b; +[SCLensDownloadEvent willStartDownloadWithLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113038ec0) = 0;
  *(undefined8 *)(lVar2 + _DAT_113038ec8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113038ed0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98f3c; end: 103f98fb3; +[SCLensDownloadEvent didFinishDownloadWithLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113038ec0) = 1;
  *(undefined8 *)(lVar2 + _DAT_113038ec8) = 0;
  *(undefined8 *)(lVar2 + _DAT_113038ed0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f98fb4; end: 103f98fff; -[SCLensDownloadEvent matchWillStartDownload:didFinishDownload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f98fb4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113038ec0) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113038ed0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f98fe0);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113038ec8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99000);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103f98ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103f99000; end: 103f99033;  */

void FUN_103f99000(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f99034; end: 103f9906b; -[SCLensDownloadEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f99034(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113038ec8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113038ed0));
  return;
}



/* Entry: 103f9906c; end: 103f9908b;  */

void FUN_103f9906c(void)

{
  _objc_opt_self(&PTR_PTR_112971e50);
  return;
}



/* Entry: 103f9908c; end: 103f991f3;  */

int FUN_103f9908c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f99108;
        goto LAB_103f990ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f990ec:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f99108:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f991f4; end: 103f99233;  */

void FUN_103f991f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113038f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb433c;
  _swift_getWitnessTable(&UNK_10dcb433c,&UNK_110729fe0);
  puRam0000000113038f00 = puVar1;
  return;
}



/* Entry: 103f99234; end: 103f992df;  */

void FUN_103f99234(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f992e0; end: 103f9931f;  */

void FUN_103f992e0(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103f99320; end: 103f99347; -[SCLensUIControllerRestoreStrategy description] */

void FUN_103f99320(void)

{
  _objc_retain();
  FUN_103f99aa4();
  func_0x000103f8a58c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f99348; end: 103f9934b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f99348(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_113038f08) == '\x01') {
    lVar3 = ((undefined8 *)(param_1 + _DAT_113038f20))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99b54);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_113038f20);
    _swift_bridgeObjectRetain(lVar3);
    _objc_release(param_1);
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113038f10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99b58);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113038f18) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99b5c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_113038f10);
    _objc_release();
  }
  return uVar2;
}



/* Entry: 103f9934c; end: 103f99393; -[SCLensUIControllerRestoreStrategy init] */

void FUN_103f9934c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselDependencyServices/LensUIControllerRestoreStrategyWrapper.swift",0x4d,2,
             0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99394);
  (*pcVar1)();
}



/* Entry: 103f99394; end: 103f993c7; -[SCLensUIControllerRestoreStrategy hash] */

undefined8 FUN_103f99394(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f993c8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f993c8; end: 103f9968f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f993c8(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113038f08));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113038f10) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113038f10);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_113038f18);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113038f20))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113038f20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f99690; end: 103f9970f; -[SCLensUIControllerRestoreStrategy isEqual:] */

uint FUN_103f99690(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000103f994d4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103f99710; end: 103f99713; -[SCLensUIControllerRestoreStrategy copyWithZone:] */

void FUN_103f99710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f99714; end: 103f9979b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f99714(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113038f08) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038f10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113038f18) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113038f20);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f9979c; end: 103f998c3; +[SCLensUIControllerRestoreStrategy restoreWithLensAtIndexWithLensIndex:shouldSkipOriginal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9979c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113038f08) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038f10);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(lVar2 + _DAT_113038f18) = param_4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038f20);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f998c4; end: 103f99967; +[SCLensUIControllerRestoreStrategy restoreWithLensIdWithLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f998c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113038f08) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038f10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar2 + _DAT_113038f18) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113038f20);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f99968; end: 103f99a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f99968(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113038f08) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_113038f20))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99a00);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113038f20));
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113038f10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99a04);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_113038f18) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99a08);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113038f10),*(byte *)(unaff_x20 + _DAT_113038f18) & 1
              );
  }
  return;
}



/* Entry: 103f99a08; end: 103f99a5b; -[SCLensUIControllerRestoreStrategy matchRestoreWithLensAtIndex:restoreWithLensId:] */

void FUN_103f99a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_103f99968(FUN_103f99d24,auStack_40,FUN_103f99d3c,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 103f99a5c; end: 103f99a8f;  */

void FUN_103f99a5c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f99a90; end: 103f99aa3; -[SCLensUIControllerRestoreStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f99a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113038f20 + 8))
  ;
  return;
}



/* Entry: 103f99aa4; end: 103f99b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f99aa4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_113038f08) == '\x01') {
    lVar3 = ((undefined8 *)(param_1 + _DAT_113038f20))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99b54);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_113038f20);
    _swift_bridgeObjectRetain(lVar3);
    _objc_release(param_1);
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_113038f10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99b58);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113038f18) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f99b5c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_113038f10);
    _objc_release();
  }
  return uVar2;
}



/* Entry: 103f99b5c; end: 103f99b7b;  */

void FUN_103f99b5c(void)

{
  _objc_opt_self(&PTR_PTR_112971f20);
  return;
}



/* Entry: 103f99b7c; end: 103f99ce3;  */

int FUN_103f99b7c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f99bf8;
        goto LAB_103f99bdc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f99bdc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f99bf8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f99ce4; end: 103f99d23;  */

void FUN_103f99ce4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113038f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb4438;
  _swift_getWitnessTable(&UNK_10dcb4438,&UNK_11072a0c8);
  puRam0000000113038f50 = puVar1;
  return;
}



/* Entry: 103f99d24; end: 103f99d3b;  */

void FUN_103f99d24(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103f99d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2 & 1)
  ;
  return;
}



/* Entry: 103f99d3c; end: 103f99d73;  */

void FUN_103f99d3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f99d74; end: 103f9b43b;  */

void FUN_103f99d74(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 1) {
    return;
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 103f9b43c; end: 103f9b487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b43c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113038f68) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f9b488; end: 103f9b4df; -[_TtC28SCLensCarouselLayoutServices28SCLensCarouselLayoutServices initWithLayoutProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113038f68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f9b4e0; end: 103f9b53f; -[_TtC28SCLensCarouselLayoutServices28SCLensCarouselLayoutServices init] */

void FUN_103f9b4e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselLayoutServices.SCLensCarouselLayoutServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9b50c);
  (*pcVar1)();
}



/* Entry: 103f9b540; end: 103f9b54f; -[_TtC28SCLensCarouselLayoutServices28SCLensCarouselLayoutServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113038f68));
  return;
}



/* Entry: 103f9b550; end: 103f9b59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b550(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113038f98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f9b59c; end: 103f9b5f3; -[_TtC28SCLensCarouselLayoutServices44SCMainCameraScopedLensCarouselLayoutServices initWithLensCarouselLayoutServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113038f98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f9b5f4; end: 103f9b653; -[_TtC28SCLensCarouselLayoutServices44SCMainCameraScopedLensCarouselLayoutServices init] */

void FUN_103f9b5f4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselLayoutServices.SCMainCameraScopedLensCarouselLayoutServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9b620);
  (*pcVar1)();
}



/* Entry: 103f9b654; end: 103f9b663; -[_TtC28SCLensCarouselLayoutServices44SCMainCameraScopedLensCarouselLayoutServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113038f98));
  return;
}



/* Entry: 103f9b664; end: 103f9b673; -[_TtC28SCLensCarouselLayoutServices41SCPreviewScopedLensCarouselLayoutServices lensCarouselLayoutServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113038fc8));
  return;
}



/* Entry: 103f9b674; end: 103f9b70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b674(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113038fc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f9b70c; end: 103f9b763; -[_TtC28SCLensCarouselLayoutServices41SCPreviewScopedLensCarouselLayoutServices initWithLensCarouselLayoutServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113038fc8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f9b764; end: 103f9b7c3; -[_TtC28SCLensCarouselLayoutServices41SCPreviewScopedLensCarouselLayoutServices init] */

void FUN_103f9b764(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselLayoutServices.SCPreviewScopedLensCarouselLayoutServices",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9b790);
  (*pcVar1)();
}



/* Entry: 103f9b7c4; end: 103f9b7d3; -[_TtC28SCLensCarouselLayoutServices41SCPreviewScopedLensCarouselLayoutServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9b7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113038fc8));
  return;
}


