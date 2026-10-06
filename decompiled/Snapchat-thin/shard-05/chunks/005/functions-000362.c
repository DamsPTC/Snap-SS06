/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ece0b4; end: 103ece0ef; +[SCCameraReplyCameraActionBarPositionExperiment actionBarPositionModeWithCircumstanceEngine:] */

undefined8 FUN_103ece0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  FUN_103ece15c(param_3);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 103ece0f0; end: 103ece12b; -[SCCameraReplyCameraActionBarPositionExperiment init] */

void FUN_103ece0f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103ece1e4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ece12c; end: 103ece15b;  */

void FUN_103ece12c(void)

{
  FUN_103ece1e4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ece15c; end: 103ece1e3;  */

undefined1 FUN_103ece15c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    uVar2 = 0xd00000000000002b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1cc0f0);
    lVar3 = param_1;
    func_0x000107c4980c();
    _objc_release(uVar2);
    _swift_unknownObjectRelease(param_1);
    uVar1 = 2;
    if ((int)lVar3 != 2) {
      uVar1 = (int)lVar3 == 1;
    }
  }
  return uVar1;
}



/* Entry: 103ece1e4; end: 103ece203;  */

void FUN_103ece1e4(void)

{
  _objc_opt_self(&PTR_PTR_1129606d0);
  return;
}



/* Entry: 103ece204; end: 103ece207;  */

void FUN_103ece204(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6ed0;
  _swift_getWitnessTable(&UNK_10dca6ed0,&UNK_11071d6b0);
  puRam000000011302bfa8 = puVar1;
  return;
}



/* Entry: 103ece208; end: 103ece247;  */

void FUN_103ece208(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6ed0;
  _swift_getWitnessTable(&UNK_10dca6ed0,&UNK_11071d6b0);
  puRam000000011302bfa8 = puVar1;
  return;
}



/* Entry: 103ece248; end: 103ece257;  */

undefined1  [16] FUN_103ece248(void)

{
  return ZEXT816(0x11071d6b0);
}



/* Entry: 103ece258; end: 103ece267; -[PreviewFilterUIServices uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bfd8));
  return;
}



/* Entry: 103ece268; end: 103ece277; -[PreviewFilterUIServices touchProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bfe0));
  return;
}



/* Entry: 103ece278; end: 103ece287; -[PreviewFilterUIServices stateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bfe8));
  return;
}



/* Entry: 103ece288; end: 103ece36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302bfd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302bfe0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302bfe8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ece370; end: 103ece3cf; -[PreviewFilterUIServices init] */

void FUN_103ece370(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PreviewFilterUIServices.PreviewFilterUIServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ece39c);
  (*pcVar1)();
}



/* Entry: 103ece3d0; end: 103ece417; -[PreviewFilterUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece3d0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bfd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bfe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302bfe8));
  return;
}



/* Entry: 103ece418; end: 103ece437;  */

void FUN_103ece418(void)

{
  _objc_opt_self(&PTR_PTR_112960780);
  return;
}



/* Entry: 103ece438; end: 103ece4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ece438(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_11302c040;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_11302c040);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
    _objc_allocWithZone();
    func_0x000107c46358(0x3fe0000000000000,0x3fd3333333333333);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ece500);
      (*pcVar2)();
    }
    puVar4 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_allocWithZone();
    func_0x000107c46714(0x3fc3333333333333);
    func_0x000107c5a378();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar5);
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  return puVar4;
}



/* Entry: 103ece500; end: 103ece57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ece500(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302c048;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_11302c048);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_allocWithZone();
    func_0x000107c4670c(0x3fc3333333333333);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain();
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 103ece580; end: 103ece593;  */

bool FUN_103ece580(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ece594; end: 103ece66b;  */

void FUN_103ece594(void)

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



/* Entry: 103ece66c; end: 103ece6af; -[SCGenerativeAICropButton roundedcorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ece66c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c018;
  _swift_beginAccess(param_1 + _DAT_11302c018,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103ece6b0; end: 103ece707; -[SCGenerativeAICropButton setRoundedcorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece6b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302c018;
  _swift_beginAccess(param_1 + _DAT_11302c018,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  func_0x000107c4abfc(param_1);
  return;
}



/* Entry: 103ece708; end: 103ece74b; -[SCGenerativeAICropButton cropState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ece708(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c020;
  _swift_beginAccess(param_1 + _DAT_11302c020,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103ece74c; end: 103ece77b; -[SCGenerativeAICropButton setCropState:] */

void FUN_103ece74c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_103ece77c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ece77c; end: 103ece7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece77c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11302c020;
  _swift_beginAccess(unaff_x20 + _DAT_11302c020,auStack_48,1,0);
  iVar1 = *(int *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  if ((int)param_1 != iVar1) {
    FUN_103ece7d8();
  }
  return;
}



/* Entry: 103ece7d8; end: 103eceacb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ece7d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [24];
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  FUN_103ece500();
  func_0x000107c5be08();
  _objc_release(param_5);
  func_0x000107c43590(*(undefined8 *)(unaff_x20 + _DAT_11302c048));
  lVar9 = _DAT_11302c020;
  _swift_beginAccess(unaff_x20 + _DAT_11302c020,auStack_78,0,0);
  alStack_90[0] = *(long *)(unaff_x20 + lVar9);
  if (alStack_90[0] - 1U < 2) {
    func_0x000107c4ff40();
  }
  else {
    if (alStack_90[0] == 3) {
      FUN_103ecf484();
      return;
    }
    if (alStack_90[0] != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_11071d848,alStack_90,&UNK_11071d848,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103eceacc);
      (*pcVar2)();
    }
    func_0x000107c3ec60();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    dVar10 = param_1;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar4 = puVar3;
    func_0x000107c44444();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c44448(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = _DAT_11302c018;
    _swift_beginAccess(unaff_x20 + _DAT_11302c018,auStack_a8,0,0);
    dVar11 = 0.0;
    if (*(char *)(unaff_x20 + lVar7) == '\x01') {
      func_0x000107c3ec60();
      _CGRectGetHeight();
      dVar11 = dVar10 * 0.5;
    }
    func_0x000107c3d700(param_1,param_2,param_3,param_4,0x4000000000000000,dVar11);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  func_0x000107c550d8();
  lVar7 = _DAT_11302c080;
  lVar8 = *(long *)(unaff_x20 + lVar9);
  plVar6 = alStack_90;
  _swift_beginAccess(unaff_x20 + _DAT_11302c080,plVar6,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    FUN_103ed02bc();
    if (((ulong)plVar6 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar8 * 0x10);
      uVar5 = *puVar1;
      lVar8 = puVar1[1];
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRelease(lVar7);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar8);
      lVar7 = lVar8;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  _swift_endAccess(alStack_90);
  func_0x000107c59e1c();
  _objc_release(uVar5);
  lVar7 = _DAT_11302c088;
  lVar9 = *(long *)(unaff_x20 + lVar9);
  plVar6 = alStack_90;
  _swift_beginAccess(unaff_x20 + _DAT_11302c088,plVar6,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    FUN_103ed02bc();
    if (((ulong)plVar6 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar9 * 8);
      _objc_retain(uVar5);
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  _swift_endAccess(alStack_90);
  func_0x000107c55260();
  _objc_release(uVar5);
  func_0x000107c4abfc();
  return;
}



/* Entry: 103eceacc; end: 103eceb0f; -[SCGenerativeAICropButton animationsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103eceacc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c028;
  _swift_beginAccess(param_1 + _DAT_11302c028,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103eceb10; end: 103ececcf; -[SCGenerativeAICropButton setAnimationsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eceb10(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11302c028;
  _swift_beginAccess(param_1 + _DAT_11302c028,auStack_48,1,0);
  uVar1 = *(undefined1 *)(param_1 + lVar2);
  *(undefined1 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_1);
  func_0x000103eceb80(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 103ececd0; end: 103eced87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ececd0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  param_1 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(param_1 + 0xb);
  bVar2 = *(byte *)(param_1[9] + param_1[10]);
  *(byte *)(param_1[9] + param_1[10]) = bVar1;
  if (((bVar1 ^ bVar2) & 1) != 0) {
    lVar3 = param_1[9];
    if (bVar1 == 0) {
      func_0x000107c5002c(lVar3,param_2,lVar3,PTR_s_animateDownWithSender__112525058,0x11);
      func_0x000107c5002c(lVar3,param_2,lVar3,PTR_s_animateUpWithSender__112525060,0x160);
      *param_1 = 0x3ff0000000000000;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0x3ff0000000000000;
      param_1[4] = 0;
      param_1[5] = 0;
      func_0x000107c5a03c(lVar3,param_2,param_1);
      *(undefined1 *)(lVar3 + _DAT_11302c030) = 0;
    }
    else {
      func_0x000107c3d8b8();
      func_0x000107c3d8b8(lVar3,param_2,lVar3,PTR_s_animateUpWithSender__112525060,0x160);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 103eced88; end: 103ecf0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103eced88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11302c038) = 0x3fc3333333333333;
  *(undefined8 *)(unaff_x20 + _DAT_11302c040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c048) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c050) = 0x3ff2666666666666;
  *(undefined8 *)(unaff_x20 + _DAT_11302c058) = 0x4049000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c060) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c068) = 0x3fe0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c070) = 0x401c000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c078) = 0x4034000000000000;
  lVar1 = _DAT_11302c080;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103ed10f0();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_11302c088;
  func_0x000103ed11e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_11302c030) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302c018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c020) = 3;
  *(undefined1 *)(unaff_x20 + _DAT_11302c028) = 0;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar5 = puVar4;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_opt_self(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c3eb8c(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c54adc(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  puVar5 = puVar4;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c56ba8();
    _objc_release(puVar5);
  }
  puVar5 = puVar4;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c55f80();
    _objc_release(puVar5);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar2 = puVar3;
  func_0x000107c5e2ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e34(puVar4);
  _objc_release(puVar2);
  _objc_retain(puVar4);
  func_0x000107c3ea80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x000107c3fdd0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x000107c52b50(puVar4);
  _objc_release(puVar2);
  func_0x000107c59e38(0,0x401c000000000000,0,0,puVar4);
  func_0x000107c55268(0,0,0,0x401c000000000000,puVar4);
  func_0x000107c53810(0,0x4034000000000000,0,0x4034000000000000,puVar4);
  func_0x000107c53840(puVar4);
  func_0x000107c52524(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x000107c562fc(puVar5);
  _objc_release(puVar5);
  FUN_103ece7d8();
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 103ecf0d4; end: 103ecf0f3; -[SCGenerativeAICropButton initWithFrame:] */

void FUN_103ecf0d4(void)

{
  FUN_103eced88();
  return;
}



/* Entry: 103ecf0f4; end: 103ecf263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ecf0f4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11302c038) = 0x3fc3333333333333;
  *(undefined8 *)(unaff_x20 + _DAT_11302c040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c048) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c050) = 0x3ff2666666666666;
  *(undefined8 *)(unaff_x20 + _DAT_11302c058) = 0x4049000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c060) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c068) = 0x3fe0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c070) = 0x401c000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302c078) = 0x4034000000000000;
  lVar1 = _DAT_11302c080;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103ed10f0();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_11302c088;
  func_0x000103ed11e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_11302c030) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302c018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c020) = 3;
  *(undefined1 *)(unaff_x20 + _DAT_11302c028) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar4 != (undefined1 *)0x0) {
    _objc_release(puVar4);
  }
  return puVar4;
}



/* Entry: 103ecf264; end: 103ecf28b; -[SCGenerativeAICropButton initWithCoder:] */

void FUN_103ecf264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103ecf0f4();
  return;
}



/* Entry: 103ecf28c; end: 103ecf3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecf28c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_layoutSubviews_112600e60);
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = _DAT_11302c018;
  _swift_beginAccess(unaff_x20 + _DAT_11302c018,auStack_78,0,0);
  dVar3 = 0.0;
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    func_0x000107c3ec60(0);
    _CGRectGetHeight();
    dVar3 = dVar3 * 0.5;
  }
  func_0x000107c539d4(dVar3,lVar2);
  _objc_release(lVar2);
  func_0x000107c3ec60();
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    func_0x000107c3ec60();
    _CGRectGetHeight();
  }
  func_0x000107c5d49c();
  return;
}



/* Entry: 103ecf3a4; end: 103ecf3cb; -[SCGenerativeAICropButton layoutSubviews] */

void FUN_103ecf3a4(undefined8 param_1)

{
  _objc_retain();
  FUN_103ecf28c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ecf3cc; end: 103ecf3d3; -[SCGenerativeAICropButton gestureRecognizerShouldBegin:] */

undefined8 FUN_103ecf3cc(void)

{
  return 0;
}



/* Entry: 103ecf3d4; end: 103ecf483; -[SCGenerativeAICropButton intrinsicContentSize] */

undefined1  [16] FUN_103ecf3d4(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain();
  lVar1 = param_2;
  func_0x000107c45130();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    dVar2 = 0.0;
    dVar3 = param_1;
  }
  else {
    func_0x000107c498ec();
    dVar3 = param_1;
    _objc_release(lVar1);
    dVar2 = param_1;
  }
  lVar1 = param_2;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release(param_2);
    dVar3 = 0.0;
  }
  else {
    func_0x000107c498ec();
    _objc_release(param_2);
    _objc_release(lVar1);
  }
  auVar4._0_8_ = dVar2 + dVar3 + 47.0;
  auVar4._8_8_ = 0x4049000000000000;
  return auVar4;
}



/* Entry: 103ecf484; end: 103ecf817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecf484(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = _DAT_11302c020;
  _swift_beginAccess(unaff_x20 + _DAT_11302c020,auStack_a8,0,0);
  lVar7 = _DAT_11302c080;
  lVar9 = *(long *)(unaff_x20 + lVar10);
  puVar1 = &uStack_90;
  _swift_beginAccess(unaff_x20 + _DAT_11302c080,puVar1,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar8 = 0;
    lVar9 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    FUN_103ed02bc();
    if (((ulong)puVar1 & 1) == 0) {
      uVar8 = 0;
      lVar9 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar9 * 0x10);
      uVar8 = *puVar1;
      lVar9 = puVar1[1];
      _swift_bridgeObjectRetain(lVar9);
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  _swift_endAccess(&uStack_90);
  lVar7 = _DAT_11302c088;
  lVar10 = *(long *)(unaff_x20 + lVar10);
  puVar1 = &uStack_90;
  _swift_beginAccess(unaff_x20 + _DAT_11302c088,puVar1,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar11 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    FUN_103ed02bc();
    if (((ulong)puVar1 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar10 * 8);
      _objc_retain(uVar11);
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  puVar1 = &uStack_90;
  _swift_endAccess(puVar1);
  lVar10 = _DAT_11302c030;
  if ((*(byte *)(unaff_x20 + _DAT_11302c030) & 1) == 0) {
    func_0x000107c550d8();
    if (lVar9 == 0) {
      uVar8 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar9);
      _swift_bridgeObjectRelease(lVar9);
    }
    func_0x000107c59e1c();
    _objc_release(uVar8);
    func_0x000107c55260();
  }
  else {
    _CGAffineTransformMakeScale(&uStack_90,0x3f847ae147ae147b,0x3f847ae147ae147b);
    FUN_103ece438();
    func_0x000107c5be08();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302c040);
    func_0x000107c43590(uVar2);
    *(undefined1 *)(unaff_x20 + lVar10) = 0;
    FUN_103ece500();
    puVar6 = &UNK_11071d868;
    puVar3 = puVar6;
    _swift_allocObject(&UNK_11071d868,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    puVar4 = &UNK_11071d930;
    _swift_allocObject(&UNK_11071d930,0x48,7);
    *(undefined8 *)(puVar4 + 0x20) = uStack_88;
    *(undefined8 *)(puVar4 + 0x18) = uStack_90;
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x30) = uStack_78;
    *(undefined8 *)(puVar4 + 0x28) = uStack_80;
    *(undefined8 *)(puVar4 + 0x40) = uStack_68;
    *(undefined8 *)(puVar4 + 0x38) = uStack_70;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_b8 = FUN_103ed13d4;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_1000f6b44;
    puStack_c0 = &UNK_11071d948;
    ppuVar5 = &puStack_d8;
    puStack_b0 = puVar4;
    __Block_copy(ppuVar5);
    _swift_release(puStack_b0);
    func_0x000107c3d5ac(uVar2);
    __Block_release(ppuVar5);
    _objc_release(uVar2);
    lVar10 = _DAT_11302c048;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302c048);
    _swift_allocObject(&UNK_11071d868,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    puVar4 = &UNK_11071d980;
    _swift_allocObject(&UNK_11071d980,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    *(long *)(puVar4 + 0x20) = lVar9;
    *(undefined8 *)(puVar4 + 0x28) = uVar11;
    pcStack_b8 = (code *)0x103ed13e0;
    puStack_d8 = puVar3;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_1023dda20;
    puStack_c0 = &UNK_11071d998;
    ppuVar5 = &puStack_d8;
    puStack_b0 = puVar4;
    __Block_copy(ppuVar5);
    puVar6 = puStack_b0;
    _objc_retain(uVar11);
    _objc_retain(uVar2);
    _swift_release(puVar6);
    func_0x000107c3d62c(uVar2);
    __Block_release(ppuVar5);
    _objc_release(uVar2);
    func_0x000107c5ba5c(*(undefined8 *)(unaff_x20 + lVar10));
  }
  _objc_release(uVar11);
  return;
}



/* Entry: 103ecf818; end: 103ecf8df;  */

void FUN_103ecf818(long param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  pauVar1 = param_2 + 1;
  uVar2 = *(undefined8 *)*pauVar1;
  auVar6 = *pauVar1;
  auVar9 = *pauVar1;
  uVar3 = *(undefined8 *)param_2[2];
  auVar7 = param_2[2];
  uVar4 = *(undefined8 *)*param_2;
  auVar5 = *param_2;
  auVar10 = *param_2;
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  lVar8 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 != 0) {
    auVar9 = NEON_ext(auVar9,auVar6,8,1);
    auVar10 = NEON_ext(auVar10,auVar5,8,1);
    uStack_60 = auVar10._0_8_;
    uStack_50 = auVar9._0_8_;
    auVar10 = NEON_ext(auVar7,auVar7,8,1);
    uStack_40 = auVar10._0_8_;
    uStack_68 = uVar4;
    uStack_58 = uVar2;
    uStack_48 = uVar3;
    func_0x000107c5a03c();
    _objc_release(lVar8);
  }
  _swift_beginAccess(param_1 + 0x10,&uStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x000107c526c0(0x3fe0000000000000);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103ecf8e0; end: 103ecfb9f;  */

void FUN_103ecf8e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uStack_88 = 0x3ff0000000000000;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0x3ff0000000000000;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107c5a03c();
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_2 + 0x10,&uStack_88,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_a0,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c550d8();
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_b8,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c4ff40();
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_d0,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_4 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
      uVar2 = param_3;
    }
    func_0x000107c59e1c(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_e8,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c55260();
    _objc_release(lVar1);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_100,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000107c4abfc();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103ecfba0; end: 103ecfc6f;  */

void FUN_103ecfba0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    lVar2 = *unaff_x20;
    uVar3 = param_2;
    _swift_bridgeObjectRetain(lVar2);
    FUN_103ed02bc();
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        func_0x000103ed05ec();
      }
      _objc_release(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x000103ed0dc8(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar2);
    lVar4 = *unaff_x20;
    FUN_103ed0378(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 103ecfc70; end: 103ecfd8b; -[SCGenerativeAICropButton setWithTitle:image:cropState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecfc70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _swift_beginAccess(param_1 + _DAT_11302c080,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x000103ecfabc(param_3,param_2,param_5);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(param_1 + _DAT_11302c088,auStack_68,0x21,0);
  _objc_retain(uVar1);
  FUN_103ecfba0(param_4,param_5);
  _swift_endAccess(auStack_68);
  FUN_103ece7d8();
  _swift_bridgeObjectRelease(param_2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 103ecfd8c; end: 103ecfdbf;  */

void FUN_103ecfd8c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ecfdc0; end: 103ecfe17; -[SCGenerativeAICropButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecfdc0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c040));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c048));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c080));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302c088));
  return;
}



/* Entry: 103ecfe18; end: 103ed0003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecfe18(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar3 = param_1;
  FUN_103ece500();
  func_0x000107c5be08();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302c048);
  func_0x000107c43590(uVar3);
  FUN_103ece438();
  func_0x000107c5be08();
  _objc_release(uVar3);
  lVar2 = _DAT_11302c040;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302c040);
  puVar4 = &UNK_11071d890;
  _swift_allocObject(&UNK_11071d890,0x48,7);
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(puVar4 + 0x20) = param_2[1];
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x30) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  uVar7 = param_2[4];
  *(undefined8 *)(puVar4 + 0x40) = param_2[5];
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_103ed1358;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11071d8a8;
  puStack_78 = puVar4;
  __Block_copy(&puStack_a0);
  puVar4 = puStack_78;
  _objc_retain(uVar3);
  _objc_retain(param_1);
  _swift_release(puVar4);
  func_0x000107c3d5ac(uVar3);
  __Block_release(ppuVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  puVar4 = &UNK_11071d8e0;
  _swift_allocObject(&UNK_11071d8e0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  pcStack_80 = FUN_103ed13ac;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1023dda20;
  puStack_88 = &UNK_11071d8f8;
  puStack_78 = puVar4;
  __Block_copy(&puStack_a0);
  puVar4 = puStack_78;
  _objc_retain(uVar3);
  func_0x000100b64c10(param_3,param_4);
  _swift_release(puVar4);
  func_0x000107c3d62c(uVar3);
  __Block_release(ppuVar6);
  _objc_release(uVar3);
  func_0x000107c5ba5c(*(undefined8 *)(unaff_x20 + lVar2));
  return;
}



/* Entry: 103ed0004; end: 103ed00df; -[SCGenerativeAICropButton animateDownWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed0004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [48];
  
  *(undefined1 *)(param_1 + _DAT_11302c030) = 1;
  _CGAffineTransformMakeScale
            (auStack_50,*(undefined8 *)(param_1 + _DAT_11302c050),
             *(undefined8 *)(param_1 + _DAT_11302c050));
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ecfe18(param_3,auStack_50,0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed00e0; end: 103ed0193; -[SCGenerativeAICropButton animateUpWithSender:] */

void FUN_103ed00e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = 0x3ff0000000000000;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar1 = &UNK_11071d868;
  _swift_allocObject(&UNK_11071d868,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  FUN_103ecfe18(param_3,&uStack_60,0x103ed1350,puVar1);
  _swift_release_n(puVar1,2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed0194; end: 103ed01d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ed0194(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c028;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _DAT_11302c028,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Entry: 103ed01d8; end: 103ed028f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed01d8(undefined1 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11302c028;
  lVar3 = *unaff_x20;
  _swift_beginAccess(lVar3 + _DAT_11302c028,auStack_48,1,0);
  uVar1 = *(undefined1 *)(lVar3 + lVar2);
  *(undefined1 *)(lVar3 + lVar2) = param_1;
  func_0x000103eceb80(uVar1);
  return;
}



/* Entry: 103ed0290; end: 103ed02bb;  */

void FUN_103ed0290(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103ed02bc; end: 103ed0313;  */

void FUN_103ed02bc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103ed0314; end: 103ed0377;  */

void FUN_103ed0314(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103ed0378; end: 103ed04a7;  */

void FUN_103ed0378(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_103ed02bc();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed043c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_103ed08b0(lVar5);
    uVar2 = param_2;
    FUN_103ed02bc();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_11071d848);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed0408);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000103ed05ec();
    lVar5 = *unaff_x20;
    goto joined_r0x000103ed0450;
  }
  lVar5 = *unaff_x20;
joined_r0x000103ed0450:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed04a8);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 103ed04a8; end: 103ed08af;  */

void FUN_103ed04a8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  FUN_103ed02bc();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed0578);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    func_0x000103ed0b34(lVar7);
    uVar3 = param_3;
    FUN_103ed02bc();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_11071d848);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed0540);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103ed0748();
    lVar7 = *unaff_x20;
    goto joined_r0x000103ed058c;
  }
  lVar7 = *unaff_x20;
joined_r0x000103ed058c:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed05ec);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 103ed08b0; end: 103ed10ef;  */

void FUN_103ed08b0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x11302c0c0;
  func_0x0001000285a8(0x11302c0c0,&UNK_10dca7150);
  lVar4 = lVar11;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_103ed0b00:
    _swift_release(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ed0b30);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              _bzero(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_103ed0b00;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      _objc_retain(uVar14);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ed0b34);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 103ed10f0; end: 103ed12cb;  */

undefined * FUN_103ed10f0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    uVar7 = 0;
    func_0x0001000285a8(0x11302c0c8);
    puVar5 = puVar9;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      uVar10 = *puVar11;
      _swift_bridgeObjectRetain(uVar10);
      uVar6 = uVar2;
      FUN_103ed02bc();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ed11dc);
        (*pcVar4)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 8) = uVar2;
      puVar1 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ed11e0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 3;
    } while (puVar9 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 103ed12cc; end: 103ed12df;  */

undefined1  [16] FUN_103ed12cc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103ed12e0; end: 103ed133f;  */

void FUN_103ed12e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7020;
  _swift_getWitnessTable(&UNK_10dca7020,&UNK_11071d848);
  puRam000000011302c090 = puVar1;
  return;
}



/* Entry: 103ed1340; end: 103ed1357;  */

undefined1  [16] FUN_103ed1340(void)

{
  return ZEXT816(0x11071d848);
}



/* Entry: 103ed1358; end: 103ed138f;  */

void FUN_103ed1358(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_18 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_20 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 103ed1390; end: 103ed13ab;  */

void FUN_103ed1390(long param_1,long param_2)

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



/* Entry: 103ed13ac; end: 103ed13d3;  */

void FUN_103ed13ac(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 103ed13d4; end: 103ed1407;  */

void FUN_103ed13d4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  pauVar2 = (undefined1 (*) [16])(unaff_x20 + 0x18);
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)*pauVar1;
  auVar7 = *pauVar1;
  auVar11 = *pauVar1;
  uVar4 = *(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38);
  auVar8 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)*pauVar2;
  auVar6 = *pauVar2;
  auVar12 = *pauVar2;
  _swift_beginAccess(lVar10 + 0x10,auStack_38,0,0);
  lVar9 = lVar10 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    auVar11 = NEON_ext(auVar11,auVar7,8,1);
    auVar12 = NEON_ext(auVar12,auVar6,8,1);
    uStack_60 = auVar12._0_8_;
    uStack_50 = auVar11._0_8_;
    auVar12 = NEON_ext(auVar8,auVar8,8,1);
    uStack_40 = auVar12._0_8_;
    uStack_68 = uVar5;
    uStack_58 = uVar3;
    uStack_48 = uVar4;
    func_0x000107c5a03c();
    _objc_release(lVar9);
  }
  _swift_beginAccess(lVar10 + 0x10,&uStack_68,0,0);
  lVar10 = lVar10 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar10 != 0) {
    func_0x000107c526c0(0x3fe0000000000000);
    _objc_release(lVar10);
  }
  return;
}



/* Entry: 103ed1408; end: 103ed1447;  */

void FUN_103ed1408(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_103ed1448(param_1,param_2);
  return;
}



/* Entry: 103ed1448; end: 103ed184f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ed1448(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar3 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  auVar12 = NEON_fmov(0x403c000000000000,8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c0d0);
  puVar1[1] = auVar12._8_8_;
  *puVar1 = auVar12._0_8_;
  *(undefined8 *)(unaff_x20 + _DAT_11302c0d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c0e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302c0f0) = 0;
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x000107c550d8();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52b50(puVar3);
  _objc_release(puVar4);
  *(undefined8 *)(puVar3 + _DAT_11302c0d8) = param_2;
  *(undefined8 *)(puVar3 + _DAT_11302c0e0) = param_1;
  uVar5 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1cc150);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  func_0x000107c46dc0();
  _objc_release(puVar4);
  lVar11 = _DAT_11302c0e8;
  uVar5 = *(undefined8 *)(puVar3 + _DAT_11302c0e8);
  *(undefined **)(puVar3 + _DAT_11302c0e8) = puVar6;
  _objc_retain();
  _objc_release(uVar5);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1838);
    (*pcVar2)();
  }
  func_0x000107c53840(puVar6);
  _objc_release(puVar6);
  if (*(long *)(puVar3 + lVar11) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed183c);
    (*pcVar2)();
  }
  func_0x000107c5a050();
  if (*(long *)(puVar3 + lVar11) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1840);
    (*pcVar2)();
  }
  func_0x000107c3d89c(puVar3);
  lVar7 = 0x112d360b8;
  FUN_103ed1ba4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 9;
  *(undefined8 *)(lVar7 + 0x10) = 4;
  lVar8 = *(long *)(puVar3 + lVar11);
  if (lVar8 != 0) {
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x000107c5cbe4(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar9);
    *(long *)(lVar7 + 0x20) = lVar10;
    lVar8 = *(long *)(puVar3 + lVar11);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1848);
      (*pcVar2)();
    }
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x000107c4acb0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar9);
    *(long *)(lVar7 + 0x28) = lVar10;
    lVar8 = *(long *)(puVar3 + lVar11);
    if (lVar8 != 0) {
      func_0x000107c5ce8c();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x000107c5ce8c(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x000107c40280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(puVar9);
      *(long *)(lVar7 + 0x30) = lVar10;
      lVar11 = *(long *)(puVar3 + lVar11);
      if (lVar11 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        func_0x000107c3ec1c();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x000107c3ec1c(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar8 = lVar11;
        func_0x000107c40280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        _objc_release(puVar9);
        *(long *)(lVar7 + 0x38) = lVar8;
        uVar5 = 0;
        FUN_103ed1c64(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar11 = lVar7;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar5);
        _swift_release(lVar7);
        func_0x000107c3d048(puVar4);
        _objc_release(puVar3);
        _objc_release(lVar11);
        return puVar3;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1850);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed184c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1844);
  (*pcVar2)();
}



/* Entry: 103ed1850; end: 103ed1873; -[SCGenerativeAILoadingIndicatorView initWithDirection:secondsPerCycle:] */

void FUN_103ed1850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103ed1448(param_3);
  return;
}



/* Entry: 103ed1874; end: 103ed191f; -[SCGenerativeAILoadingIndicatorView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed1874(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  auVar3 = NEON_fmov(0x403c000000000000,8);
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c0d0);
  puVar1[1] = auVar3._8_8_;
  *puVar1 = auVar3._0_8_;
  *(undefined8 *)(param_1 + _DAT_11302c0d8) = 0;
  *(undefined8 *)(param_1 + _DAT_11302c0e0) = 0;
  *(undefined8 *)(param_1 + _DAT_11302c0e8) = 0;
  *(undefined1 *)(param_1 + _DAT_11302c0f0) = 0;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 103ed1920; end: 103ed19cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ed1920(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = &stack0xffffffffffffffc0;
  _swift_getObjectType();
  auVar3 = NEON_fmov(0x403c000000000000,8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c0d0);
  puVar1[1] = auVar3._8_8_;
  *puVar1 = auVar3._0_8_;
  *(undefined8 *)(unaff_x20 + _DAT_11302c0d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302c0e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302c0f0) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    _objc_release(puVar2);
  }
  return puVar2;
}



/* Entry: 103ed19d0; end: 103ed19f7; -[SCGenerativeAILoadingIndicatorView initWithCoder:] */

void FUN_103ed19d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103ed1920();
  return;
}



/* Entry: 103ed19f8; end: 103ed1a03; -[SCGenerativeAILoadingIndicatorView intrinsicContentSize] */

undefined1  [16] FUN_103ed19f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x403c000000000000;
  auVar1._0_8_ = 0x403c000000000000;
  return auVar1;
}



/* Entry: 103ed1a04; end: 103ed1a0f; -[SCGenerativeAILoadingIndicatorView sizeThatFits:] */

undefined1  [16] FUN_103ed1a04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x403c000000000000;
  auVar1._0_8_ = 0x403c000000000000;
  return auVar1;
}



/* Entry: 103ed1a10; end: 103ed1a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed1a10(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_11302c0e8;
  lVar3 = *(long *)(unaff_x20 + _DAT_11302c0e8);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1a98);
    (*pcVar2)();
  }
  func_0x000107c4a70c();
  if (((int)lVar3 != 0) && (lVar3 = unaff_x20, func_0x000107c49eac(), (int)lVar3 == 0)) {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_11302c0f0) = 1;
  func_0x000107c550d8();
  if (*(long *)(unaff_x20 + lVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c250430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + _DAT_11302c0e0),*(long *)(unaff_x20 + lVar1),
               PTR_s_startRotationAnimatingWithDirect_112671b30,
               *(undefined8 *)(unaff_x20 + _DAT_11302c0d8));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed1a9c);
  (*pcVar2)();
}



/* Entry: 103ed1a9c; end: 103ed1ac3; -[SCGenerativeAILoadingIndicatorView startAnimating] */

void FUN_103ed1a9c(undefined8 param_1)

{
  _objc_retain();
  FUN_103ed1a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed1ac4; end: 103ed1af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed1ac4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_11302c0e8) != 0) {
    func_0x000107c5bdfc();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed1af4);
  (*pcVar1)();
}



/* Entry: 103ed1af4; end: 103ed1b3f; -[SCGenerativeAILoadingIndicatorView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed1af4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11302c0e8);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x000107c5bdfc(lVar2);
    func_0x000107c550d8(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed1b40);
  (*pcVar1)();
}



/* Entry: 103ed1b40; end: 103ed1b73;  */

void FUN_103ed1b40(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ed1b74; end: 103ed1b83; -[SCGenerativeAILoadingIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed1b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c0e8));
  return;
}



/* Entry: 103ed1b84; end: 103ed1ba3;  */

void FUN_103ed1b84(void)

{
  _objc_opt_self(&PTR_PTR_112960978);
  return;
}



/* Entry: 103ed1ba4; end: 103ed1c1b;  */

void FUN_103ed1ba4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103ed1c64(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103ed1c1c; end: 103ed1c63;  */

void FUN_103ed1c1c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x11302c120;
  plVar5 = (long *)&UNK_10dca7188;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103ed1c64(0,0x11302c128,&PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103ed1c64; end: 103ed1ca3;  */

void FUN_103ed1c64(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103ed1ca4; end: 103ed20f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed1ca4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  
  lVar8 = unaff_x20 + _DAT_11302c130;
  _swift_unknownObjectWeakAssign();
  FUN_103ed20f4();
  lVar3 = lVar8;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302c138);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302c140);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302c148);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11302c150) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11302c158) = param_7;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302c160);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302c168);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar4 = PTR_PTR_1126aec40;
  _objc_opt_self();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_11);
  puVar5 = puVar4;
  func_0x000107c3ee98();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar3 + _DAT_11302c170) = puVar5;
  func_0x000107c3ee98();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar3 + _DAT_11302c178) = puVar4;
  puVar4 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_11302c180) = puVar4;
  puVar4 = PTR_PTR_1126b0648;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_11302c188) = puVar4;
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_11302c190) = puVar4;
  plVar6 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar8;
  _objc_msgSendSuper2(plVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c53dec();
  puVar5 = PTR_PTR_1126b0a08;
  _objc_allocWithZone();
  func_0x000107c48e84();
  lVar8 = _DAT_11302c198;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11302c198);
  *(undefined **)(unaff_x20 + _DAT_11302c198) = puVar5;
  _objc_retain();
  _objc_release(uVar9);
  puVar4 = &UNK_11071da28;
  puVar7 = puVar4;
  _swift_allocObject(&UNK_11071da28,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10,puVar5);
  _objc_release(puVar5);
  puVar1 = (undefined8 *)((long)plVar6 + _DAT_11302c138);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_103ed216c;
  puVar1[1] = puVar7;
  _swift_retain(puVar7);
  func_0x000100d718c8(uVar9,uVar2);
  _swift_release(puVar7);
  _swift_allocObject(&UNK_11071da28,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,*(undefined8 *)(unaff_x20 + lVar8));
  puVar5 = &UNK_11071da50;
  _swift_allocObject(&UNK_11071da50,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar7 = &UNK_11071da78;
  _swift_allocObject(&UNK_11071da78,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  puVar1 = (undefined8 *)((long)plVar6 + _DAT_11302c140);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_103ed2204;
  puVar1[1] = puVar7;
  _swift_retain(puVar5);
  _swift_retain(puVar4);
  func_0x000100d718c8(uVar9,uVar2);
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar1 = (undefined8 *)((long)plVar6 + _DAT_11302c148);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_14;
  puVar1[1] = param_15;
  func_0x000100d718b8(param_14,param_15);
  func_0x000100d718c8(uVar9,uVar2);
  _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_11302c1a0,plVar6);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c1a8);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_12;
  puVar1[1] = param_13;
  func_0x000100d718b8();
  func_0x000100d718c8(uVar9,uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c1b0);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_14;
  puVar1[1] = param_15;
  func_0x000100d718b8(param_14,param_15);
  func_0x000100d718c8(uVar9,uVar2);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (lVar8 != 0) {
    _objc_retain();
    func_0x000107c5921c();
    FUN_103ed23a0();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    _objc_opt_self(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c3ec60();
    _objc_release(puVar4);
    func_0x000107c5a074(lVar8);
    func_0x000107c4ef3c(param_2 / param_4,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(plVar6);
  return;
}



/* Entry: 103ed20f4; end: 103ed2113;  */

void FUN_103ed20f4(void)

{
  _objc_opt_self(&PTR_PTR_112960b40);
  return;
}



/* Entry: 103ed2114; end: 103ed216b;  */

void FUN_103ed2114(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x000107c42018();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103ed216c; end: 103ed2173;  */

void FUN_103ed216c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c42018();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103ed2174; end: 103ed2203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed2174(long param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11302c1c0) = 1;
    _objc_release();
  }
  _swift_beginAccess(param_2 + 0x10,auStack_50,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000107c42018();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103ed2204; end: 103ed220b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed2204(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_11302c1c0) = 1;
    _objc_release();
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_50,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    func_0x000107c42018();
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 103ed220c; end: 103ed239f; -[SCGenerativeAITrayAlert presentWithContainerUI:info:iconObservable:cancelButtonTitle:acceptButtonTitle:acceptButtonTapped:linkTapped:] */

void FUN_103ed220c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  
  __Block_copy();
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11071dac8;
    _swift_allocObject(&UNK_11071dac8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_8;
    pcVar5 = FUN_103ed3b48;
  }
  if (param_9 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11071daa0;
    _swift_allocObject(&UNK_11071daa0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    pcVar3 = FUN_103ed3b0c;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  FUN_103ed1ca4(param_3,param_4,param_5,param_6,param_2,param_7,uVar1,pcVar5,puVar4,pcVar3,puVar2);
  func_0x000100d718c8(pcVar3,puVar2);
  func_0x000100d718c8(pcVar5,puVar4);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103ed23a0; end: 103ed246b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_103ed23a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  uVar8 = (undefined4)((ulong)param_4 >> 0x20);
  uVar7 = (undefined4)param_4;
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  lVar2 = unaff_x20 + _DAT_11302c1a0;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed246c);
      (*pcVar1)();
    }
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    _objc_opt_self(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c3ec60();
    uVar9 = CONCAT44(uVar6,uVar5);
    uVar10 = CONCAT44(uVar8,uVar7);
    _objc_release(puVar4);
    func_0x000107c5c614(uVar9,uVar10,0x447a0000,0x42480000,lVar3);
    _objc_release(lVar3);
  }
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = uVar9;
  return auVar11;
}



/* Entry: 103ed246c; end: 103ed251b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed246c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11302c198) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c1a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c1b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302c1c0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c1b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302c1a0,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302c130,0);
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ed251c; end: 103ed253b; -[SCGenerativeAITrayAlert init] */

void FUN_103ed251c(void)

{
  FUN_103ed246c();
  return;
}



/* Entry: 103ed253c; end: 103ed253f;  */

void FUN_103ed253c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ed2540; end: 103ed25c3; -[SCGenerativeAITrayAlert .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ed2540(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c198));
  func_0x000100d718c8(*(undefined8 *)(param_1 + _DAT_11302c1a8),
                      ((undefined8 *)(param_1 + _DAT_11302c1a8))[1]);
  func_0x000100d718c8(*(undefined8 *)(param_1 + _DAT_11302c1b0),
                      ((undefined8 *)(param_1 + _DAT_11302c1b0))[1]);
  func_0x000100d718c8(*(undefined8 *)(param_1 + _DAT_11302c1b8),
                      ((undefined8 *)(param_1 + _DAT_11302c1b8))[1]);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302c1a0);
  param_1 = param_1 + _DAT_11302c130;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103ed25c4; end: 103ed265f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed25c4(long param_1,uint param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar2 = *(code **)(param_1 + _DAT_11302c1a8);
    if (pcVar2 == (code *)0x0) {
      _objc_release();
    }
    else {
      uVar1 = ((undefined8 *)(param_1 + _DAT_11302c1a8))[1];
      func_0x000100d718b8(pcVar2,uVar1);
      _objc_release(param_1);
      (*pcVar2)(param_2 & 1);
      func_0x000100d718c8(pcVar2,uVar1);
    }
  }
  return;
}



/* Entry: 103ed2660; end: 103ed26b3; -[SCGenerativeAITrayAlert tray:positionDidChange:] */

void FUN_103ed2660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ed3820(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed26b4; end: 103ed271b; -[SCGenerativeAITrayAlert tray:heightForPosition:] */

undefined8
FUN_103ed26b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  FUN_103ed3a20(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 103ed271c; end: 103ed2773; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController init] */

void FUN_103ed271c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GenerativeAIUI/GenerativeAITrayAlert.swift",0x2a,2,0x89,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed2774);
  (*pcVar1)();
}



/* Entry: 103ed2774; end: 103ed27fb; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed2774(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c138);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c140);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c148);
  *puVar1 = 0;
  puVar1[1] = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GenerativeAIUI/GenerativeAITrayAlert.swift",0x2a,2,0xa4,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed27fc);
  (*pcVar2)();
}



/* Entry: 103ed27fc; end: 103ed352b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed27fc(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed34f4);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52b50(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar4);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_11302c188);
  func_0x000107c5528c(uVar16);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_opt_self();
  func_0x000107c4c194();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000107c5ce94();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x000107c5d9c8();
  _objc_release(puVar5);
  if (puVar4 == (undefined *)0x2) {
    uVar6 = 0x61445f65736f6c43;
    uVar13 = 0xee0065646f4d6b72;
  }
  else {
    uVar6 = 0x65736f6c43;
    uVar13 = 0xe500000000000000;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar13);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self();
  func_0x000107c450cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11302c190);
  func_0x000107c52b68(uVar13);
  func_0x000107c3d8b8(uVar13);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_11302c180);
  func_0x000107c529c4(uVar17);
  func_0x000107c53df8(uVar17);
  func_0x000107c58cd8(uVar17);
  func_0x000107c54400(uVar17);
  func_0x000107c5928c(uVar17);
  func_0x000107c59284(uVar17);
  func_0x000107c53fcc(uVar17);
  uVar6 = uVar17;
  func_0x000107c5c83c(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c55f80();
  _objc_release(uVar6);
  func_0x000107c59c7c(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),uVar17);
  func_0x000107c5a378(uVar17);
  puVar5 = puVar3;
  func_0x000107c5af88(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e10(uVar17);
  _objc_release(puVar5);
  func_0x000107c5af88(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59c78(uVar17);
  _objc_release(puVar3);
  func_0x000107c58dd4(uVar17);
  lVar14 = *(long *)(unaff_x20 + _DAT_11302c178);
  func_0x000107c59a2c(lVar14);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302c168);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar6,((undefined8 *)(unaff_x20 + _DAT_11302c168))[1]);
  func_0x000107c59e1c(lVar14);
  _objc_release(uVar6);
  func_0x000107c3d8b8(lVar14);
  uVar6 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1cc1c0);
  func_0x000107c520f4(lVar14);
  _objc_release(uVar6);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11302c170);
  func_0x000107c59a2c(uVar15);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302c160);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar6,((undefined8 *)(unaff_x20 + _DAT_11302c160))[1]);
  func_0x000107c59e1c(uVar15);
  _objc_release(uVar6);
  func_0x000107c3d8b8(uVar15);
  uVar6 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1cc1e0);
  func_0x000107c520f4(uVar15);
  _objc_release(uVar6);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed34f8);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  _objc_release(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed34fc);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  _objc_release(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3500);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  _objc_release(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3504);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  _objc_release(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3508);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  _objc_release(lVar2);
  func_0x000107c5a050(uVar15);
  func_0x000107c5a050(lVar14);
  func_0x000107c5a050(uVar17);
  func_0x000107c5a050(uVar16);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed350c);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  _objc_release(lVar2);
  func_0x000107c5a050(uVar13);
  lVar2 = lVar14;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c515ac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar8;
    func_0x000107c3ec1c(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar2;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar7);
    lVar2 = lVar8;
    func_0x000107c5784c(0x437a0000);
    func_0x0001008478a8();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 0x29;
    *(undefined8 *)(lVar2 + 0x10) = 0x14;
    uVar6 = uVar16;
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x000107c40290(0x404d000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    *(undefined8 *)(lVar2 + 0x20) = uVar9;
    uVar6 = uVar16;
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x000107c40290(0x404d000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    *(undefined8 *)(lVar2 + 0x28) = uVar9;
    uVar6 = uVar16;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3514);
      (*pcVar1)();
    }
    lVar10 = lVar7;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    uVar9 = uVar6;
    func_0x000107c40284(0x4033000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lVar10);
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    uVar6 = uVar16;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3518);
      (*pcVar1)();
    }
    lVar10 = lVar7;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    uVar9 = uVar6;
    func_0x000107c40284(0x4033000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lVar10);
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    uVar6 = uVar13;
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x000107c40290(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    *(undefined8 *)(lVar2 + 0x40) = uVar9;
    uVar6 = uVar13;
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x000107c40290(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    *(undefined8 *)(lVar2 + 0x48) = uVar9;
    uVar6 = uVar13;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar16;
    func_0x000107c5cbe4(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar9);
    *(undefined8 *)(lVar2 + 0x50) = uVar11;
    func_0x000107c5ce8c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed351c);
      (*pcVar1)();
    }
    lVar10 = lVar7;
    func_0x000107c5ce8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    uVar6 = uVar13;
    func_0x000107c40284(0xc033000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(lVar10);
    *(undefined8 *)(lVar2 + 0x58) = uVar6;
    uVar6 = uVar17;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      lVar10 = lVar7;
      func_0x000107c4acb0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      uVar13 = uVar6;
      func_0x000107c40284(0x4038000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(lVar10);
      *(undefined8 *)(lVar2 + 0x60) = uVar13;
      uVar6 = uVar17;
      func_0x000107c5ce8c();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = unaff_x20;
      func_0x000107c5de64();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3524);
        (*pcVar1)();
      }
      lVar10 = lVar7;
      func_0x000107c5ce8c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      uVar13 = uVar6;
      func_0x000107c40284(0xc038000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(lVar10);
      *(undefined8 *)(lVar2 + 0x68) = uVar13;
      uVar6 = uVar17;
      func_0x000107c5cbe4();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3ec1c(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x000107c40284(0x4033000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar16);
      *(undefined8 *)(lVar2 + 0x70) = uVar13;
      func_0x000107c3ec1c();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x000107c5cbe4(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar17;
      func_0x000107c40284(0xc033000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      _objc_release(uVar16);
      *(undefined8 *)(lVar2 + 0x78) = uVar6;
      uVar16 = uVar15;
      func_0x000107c4acb0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = unaff_x20;
      func_0x000107c5de64();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0) {
        lVar10 = lVar7;
        func_0x000107c4acb0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        uVar6 = uVar16;
        func_0x000107c40284(0x4033000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        _objc_release(lVar10);
        *(undefined8 *)(lVar2 + 0x80) = uVar6;
        uVar16 = uVar15;
        func_0x000107c5ce8c();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar14;
        func_0x000107c4acb0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar16;
        func_0x000107c40284(0xc033000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        _objc_release(lVar7);
        *(undefined8 *)(lVar2 + 0x88) = uVar6;
        uVar16 = uVar15;
        func_0x000107c44d9c();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar16;
        func_0x000107c40290(0x404a000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        *(undefined8 *)(lVar2 + 0x90) = uVar6;
        lVar7 = lVar14;
        func_0x000107c5ce8c();
        _objc_retainAutoreleasedReturnValue();
        func_0x000107c5de64();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x20 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar10 = unaff_x20;
          func_0x000107c5ce8c(unaff_x20);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x20);
          lVar12 = lVar7;
          func_0x000107c40284(0xc033000000000000);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar10);
          *(long *)(lVar2 + 0x98) = lVar12;
          lVar7 = lVar14;
          func_0x000107c3ec1c();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x000107c3ec1c(uVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar7;
          func_0x000107c40280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(uVar16);
          *(long *)(lVar2 + 0xa0) = lVar10;
          lVar7 = lVar14;
          func_0x000107c5e308();
          _objc_retainAutoreleasedReturnValue();
          func_0x000107c5e308(uVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar7;
          func_0x000107c40280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(uVar15);
          *(long *)(lVar2 + 0xa8) = lVar10;
          func_0x000107c44d9c();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar14;
          func_0x000107c40290(0x404a000000000000);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          *(long *)(lVar2 + 0xb0) = lVar7;
          *(long *)(lVar2 + 0xb8) = lVar8;
          uVar16 = 0;
          func_0x000100847984(0);
          _objc_retain(lVar8);
          lVar14 = lVar2;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar16);
          _swift_release(lVar2);
          func_0x000107c3d048(puVar3);
          _objc_release(puVar4);
          _objc_release(lVar8);
          _objc_release(lVar14);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed352c);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3528);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3520);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3510);
  (*pcVar1)();
}



/* Entry: 103ed352c; end: 103ed3553; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController viewDidLoad] */

void FUN_103ed352c(undefined8 param_1)

{
  _objc_retain();
  FUN_103ed27fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed3554; end: 103ed355f; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController cancelButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3554(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_11302c138);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_11302c138))[1];
  _objc_retain();
  func_0x000100d718b8(pcVar1,uVar2);
  (*pcVar1)();
  _objc_release(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}


