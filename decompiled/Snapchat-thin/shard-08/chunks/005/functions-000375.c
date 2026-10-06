/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10628afb0; end: 10628afff; -[SCContextScrubberPanGesture canPreventGestureRecognizer:] */

uint FUN_10628afb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 10628b000; end: 10628b093; -[SCContextScrubberPanGesture canBePreventedByGestureRecognizer:] */

undefined8 FUN_10628b000(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010c110340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar3);
    func_0x00010c195460(param_3);
    func_0x00010c1e1860(param_1);
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 10628b094; end: 10628b103; -[SCContextScrubberPanGesture reset] */

void FUN_10628b094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_reset_11262ba18);
  uVar1 = param_1;
  func_0x00010c110340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c1e1860(param_1);
  return;
}



/* Entry: 10628b104; end: 10628b163; -[SCContextScrubberPanGesture dealloc] */

void FUN_10628b104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c110340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f0ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10628b164; end: 10628b183; -[SCContextScrubberPanGesture preventedPanGestureOrNil] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628b164(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274487c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10628b184; end: 10628b197; -[SCContextScrubberPanGesture setPreventedPanGestureOrNil:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628b184(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274487c,param_3);
  return;
}



/* Entry: 10628b198; end: 10628b1a7; -[SCContextScrubberPanGesture .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628b198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274487c);
  return;
}



/* Entry: 10628b1a8; end: 10628b39b; -[SCContextSpotlightScrubberControllerViewController initWithOperaPropertyModerator:operaEventAnnouncing:storiesConfigProvider:contextParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10628b1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126f0ac8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112744884;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112744888;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274488c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274488c) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744890;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112744894;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c93e0;
    func_0x00010c152f00(PTR_PTR_1126c93e0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c067e20();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744898) = uVar2;
    _objc_release(puVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c93e0;
    func_0x00010c152f40(PTR_PTR_1126c93e0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f320();
    *(char *)((long)puVar1 + (long)_DAT_11274489c) = (char)uVar2;
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_retain(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 10628b39c; end: 10628b4db; +[SCContextSpotlightScrubberControllerViewController isEnabledForContextParams:] */

bool FUN_10628b39c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b3af0;
  _objc_opt_class(PTR_PTR_1126b3af0);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar2 = uVar1;
  func_0x00010c276c00();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ea8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c067fc0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar2 == 1 && uVar6 == 3;
}



/* Entry: 10628b4dc; end: 10628b607; -[SCContextSpotlightScrubberControllerViewController loadView] */

void FUN_10628b4dc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be43860();
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR_PTR_1126c93e8;
    _objc_alloc(PTR_PTR_1126c93e8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0549c0(puVar2);
    func_0x00010c222380(param_1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  puVar2 = PTR_PTR_1126c93e8;
  _objc_alloc(PTR_PTR_1126c93e8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10628b608; end: 10628b647;  */

double FUN_10628b608(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde60c0();
  _objc_release(param_1);
  return (double)lVar1;
}



/* Entry: 10628b648; end: 10628b807; -[SCContextSpotlightScrubberControllerViewController viewDidLoad] */

void FUN_10628b648(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0ac8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c93f0;
  _objc_alloc(PTR_PTR_1126c93f0);
  func_0x00010c050900();
  func_0x00010c1d8e60(param_1);
  _objc_release(puVar2);
  uVar1 = param_1;
  func_0x00010c0f3660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f3660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be43860();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126c93f0;
    _objc_alloc(PTR_PTR_1126c93f0);
    func_0x00010c050900();
    func_0x00010c1987c0(param_1);
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010bf9c020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar1);
  }
  func_0x00010bec7f80(param_1);
  return;
}



/* Entry: 10628b808; end: 10628b8c7; -[SCContextSpotlightScrubberControllerViewController didMoveToParentViewController:] */

void FUN_10628b808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0ac8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  lVar1 = param_1;
  func_0x00010bf9c020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(uVar2);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10628b8c8; end: 10628b98f; -[SCContextSpotlightScrubberControllerViewController willMoveToParentViewController:] */

void FUN_10628b8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010bf9c020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf9c020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puStack_48 = PTR_PTR_1126f0ac8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10628b990; end: 10628bc13; -[SCContextSpotlightScrubberControllerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628b990(double param_1,double param_2,double param_3,double param_4,undefined *param_5)

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
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f0ac8;
  puStack_a8 = param_5;
  _objc_msgSendSuper2(&puStack_a8,PTR_s_viewDidAppear__112684bd0);
  puVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137f60(PTR_PTR_1126c93f8);
  puVar1 = param_5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_5;
  puStack_98 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_5;
  puStack_90 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf1ff80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_5;
  puStack_88 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar12;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar12);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  if (0 < *(long *)(puVar2 + _DAT_112744898)) {
    func_0x00010c0ea4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf3df00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release();
    puVar1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  puVar4 = puVar3;
  func_0x00010bf9c020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  if (puVar1 != puVar4) {
    puVar2 = puVar1;
  }
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar13 = puVar2;
  func_0x00010c09ef00(puVar1);
  dVar15 = param_1;
  func_0x00010bfb68e0(puVar2);
  puVar4 = puVar1;
  dVar16 = dVar15;
  dVar17 = param_4;
  func_0x00010c252440();
  if (puVar4 + -3 < (undefined *)0x3) {
    param_3 = (param_1 - dVar15) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar15 = 1.0;
    if (param_3 <= 1.0) {
      dVar15 = param_3;
    }
    func_0x00010be235a0(dVar15,puVar3);
    puVar4 = puVar3;
    func_0x00010c118d00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c9410;
    func_0x00010c157340();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c9400;
    func_0x00010c2999a0();
    _objc_retainAutoreleasedReturnValue();
LAB_10628bed8:
    puVar13 = puVar4;
    func_0x00010bdcbb60(puVar3);
  }
  else {
    if (puVar4 != (undefined *)0x2) {
      if (puVar4 != (undefined *)0x1) goto LAB_10628bef0;
      puVar4 = PTR_PTR_1126c9400;
      func_0x00010c2999c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10628bed8;
    }
    func_0x00010bf20c00(puVar2);
    puVar4 = puVar3;
    func_0x00010be43860();
    if ((int)puVar4 != 0) {
      func_0x00010be9c340(puVar3);
      param_4 = dVar16;
    }
    if (param_4 + 200.0 < dVar17 - param_2) {
      puVar13 = (undefined *)0x4;
      func_0x00010c209fc0(puVar1);
      goto LAB_10628bef0;
    }
    param_3 = (param_1 - dVar15) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar15 = 1.0;
    if (param_3 <= 1.0) {
      dVar15 = param_3;
    }
    func_0x00010be235a0(dVar15,puVar3);
    puVar4 = puVar3;
    func_0x00010c0ea4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9400;
    func_0x00010c2999e0(PTR_PTR_1126c9400);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9408;
    func_0x00010c157360();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010c0eb7c0(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
LAB_10628bef0:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar2 = puVar1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0ea4a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 10628bc14; end: 10628bd1b; -[SCContextSpotlightScrubberControllerViewController _subscribeToOperaEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628bc14(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_5;
  if (0 < *(long *)(param_5 + _DAT_112744898)) {
    func_0x00010c0ea4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2330;
    puStack_58 = puVar2;
    func_0x00010bf3df00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar1,param_6,param_5,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    param_7 = param_5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar3 = puVar1;
  func_0x00010bf9c020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_7 != puVar3) {
    puVar2 = param_7;
  }
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar8 = puVar2;
  func_0x00010c09ef00(param_7,param_6,puVar2);
  dVar9 = param_1;
  func_0x00010bfb68e0(puVar2);
  puVar3 = param_7;
  dVar10 = dVar9;
  dVar11 = param_4;
  func_0x00010c252440();
  if (puVar3 + -3 < (undefined *)0x3) {
    param_3 = (param_1 - dVar9) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar9 = 1.0;
    if (param_3 <= 1.0) {
      dVar9 = param_3;
    }
    func_0x00010be235a0(dVar9,puVar1);
    puVar3 = puVar1;
    func_0x00010c118d00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9410;
    func_0x00010c157340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_108 = puVar8;
    func_0x00010c0df720(dVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_100 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_100,&puStack_108,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar3,param_6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9400;
    func_0x00010c2999a0();
    _objc_retainAutoreleasedReturnValue();
LAB_10628bed8:
    puVar8 = puVar3;
    func_0x00010bdcbb60(puVar1,param_6,puVar3);
  }
  else {
    if (puVar3 != (undefined *)0x2) {
      if (puVar3 != (undefined *)0x1) goto LAB_10628bef0;
      puVar3 = PTR_PTR_1126c9400;
      func_0x00010c2999c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10628bed8;
    }
    func_0x00010bf20c00(puVar2);
    puVar3 = puVar1;
    func_0x00010be43860();
    if ((int)puVar3 != 0) {
      func_0x00010be9c340(puVar1);
      param_4 = dVar10;
    }
    if (param_4 + 200.0 < dVar11 - param_2) {
      puVar8 = (undefined *)0x4;
      func_0x00010c209fc0(param_7,param_6,4);
      goto LAB_10628bef0;
    }
    param_3 = (param_1 - dVar9) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar9 = 1.0;
    if (param_3 <= 1.0) {
      dVar9 = param_3;
    }
    func_0x00010be235a0(dVar9,puVar1);
    puVar3 = puVar1;
    func_0x00010c0ea4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9400;
    func_0x00010c2999e0(PTR_PTR_1126c9400);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9408;
    func_0x00010c157360();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f8 = puVar5;
    func_0x00010c0df720(dVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f0 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_f0,&puStack_f8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0eb7c0(puVar3,param_6,puVar4,puVar1,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_10628bef0:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar1 = param_7;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_7;
    func_0x00010c0ea4a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(puVar1,param_6,puVar8,param_7);
    _objc_release(param_7);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10628bd1c; end: 10628c093; -[SCContextSpotlightScrubberControllerViewController _handlePanGesture:] */

void FUN_10628bd1c(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = param_5;
  func_0x00010bf9c020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_5;
  if (param_7 != puVar1) {
    puVar2 = param_7;
  }
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar7 = puVar2;
  func_0x00010c09ef00(param_7,param_6,puVar2);
  dVar8 = param_1;
  func_0x00010bfb68e0(puVar2);
  puVar1 = param_7;
  dVar9 = dVar8;
  dVar10 = param_4;
  func_0x00010c252440();
  if (puVar1 + -3 < (undefined *)0x3) {
    param_3 = (param_1 - dVar8) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar8 = 1.0;
    if (param_3 <= 1.0) {
      dVar8 = param_3;
    }
    func_0x00010be235a0(dVar8,param_5);
    puVar1 = param_5;
    func_0x00010c118d00(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c157340();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar7;
    func_0x00010c0df720(dVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_a0,&puStack_a8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar1,param_6,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9400;
    func_0x00010c2999a0();
    _objc_retainAutoreleasedReturnValue();
LAB_10628bed8:
    puVar7 = puVar1;
    func_0x00010bdcbb60(param_5,param_6,puVar1);
  }
  else {
    if (puVar1 != (undefined *)0x2) {
      if (puVar1 != (undefined *)0x1) goto LAB_10628bef0;
      puVar1 = PTR_PTR_1126c9400;
      func_0x00010c2999c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10628bed8;
    }
    func_0x00010bf20c00(puVar2);
    puVar1 = param_5;
    func_0x00010be43860();
    if ((int)puVar1 != 0) {
      func_0x00010be9c340(param_5);
      param_4 = dVar9;
    }
    if (param_4 + 200.0 < dVar10 - param_2) {
      puVar7 = (undefined *)0x4;
      func_0x00010c209fc0(param_7,param_6,4);
      goto LAB_10628bef0;
    }
    param_3 = (param_1 - dVar8) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar8 = 1.0;
    if (param_3 <= 1.0) {
      dVar8 = param_3;
    }
    func_0x00010be235a0(dVar8,param_5);
    puVar1 = param_5;
    func_0x00010c0ea4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9400;
    func_0x00010c2999e0(PTR_PTR_1126c9400);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9408;
    func_0x00010c157360();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar4;
    func_0x00010c0df720(dVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_90,&puStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c0eb7c0(puVar1,param_6,puVar3,param_5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_10628bef0:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar2 = param_7;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_7;
    func_0x00010c0ea4a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(puVar2,param_6,puVar7,param_7);
    _objc_release(param_7);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10628c094; end: 10628c12b; -[SCContextSpotlightScrubberControllerViewController _announceEvent:] */

void FUN_10628c094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0ea4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(lVar1,param_2,param_3,param_1);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628c12c; end: 10628c2d3; -[SCContextSpotlightScrubberControllerViewController operaViewDidSendEvent:page:params:] */

void FUN_10628c12c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar4 = param_4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0ea8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c0720c0(lVar4,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar7 != 0) {
        puVar8 = PTR_PTR_1126b2330;
        func_0x00010c0e9c40(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar8);
        _objc_release(puVar8);
        if ((int)uVar9 == 0) {
          puVar8 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar8);
          _objc_release(puVar8);
          if ((int)uVar9 != 0) {
            func_0x00010bed1d80(param_1);
          }
        }
        else {
          func_0x00010be89c00(param_1);
        }
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628c2d4; end: 10628c51f; -[SCContextSpotlightScrubberControllerViewController _registerPanGestureForExtendedTouchIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10628c2d4(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if ((0 < *(long *)(param_2 + _DAT_112744898)) && (func_0x00010c2a2560(), ((ulong)puVar1 & 1) == 0)
     ) {
    puVar2 = param_2;
    func_0x00010c0f3660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c224900(param_2);
      puVar3 = PTR_PTR_1126c9418;
      func_0x00010bfc1ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c0f3660();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9418;
      func_0x00010bf9dbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297120();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c9418;
      func_0x00010bf6aca0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010be43860(param_2);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar2 = param_2;
      func_0x00010c0ea4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9420;
      func_0x00010c126700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(puVar2);
      _objc_release(param_2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  if ((0 < *(long *)(puVar1 + _DAT_112744898)) && (func_0x00010c2a2560(), (int)puVar2 != 0)) {
    puVar3 = puVar1;
    func_0x00010c0f3660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c224900(puVar1);
      puVar3 = PTR_PTR_1126c9418;
      func_0x00010bfc1ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0f3660();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c0ea4a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c9420;
      func_0x00010c282040(PTR_PTR_1126c9420);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea8e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(puVar3);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bde60c0();
  if (0 < (long)puVar2) {
    return (double)puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c137f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c93f8,PTR_s_reservedScrubbingHeight_11262b9f8);
  return param_1;
}



/* Entry: 10628c520; end: 10628c697; -[SCContextSpotlightScrubberControllerViewController _unregisterPanGestureForExtendedTouchIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10628c520(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if ((0 < *(long *)(param_2 + _DAT_112744898)) && (func_0x00010c2a2560(), (int)puVar1 != 0)) {
    puVar2 = param_2;
    func_0x00010c0f3660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c224900(param_2);
      puVar2 = PTR_PTR_1126c9418;
      func_0x00010bfc1ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c0f3660();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_2;
      func_0x00010c0ea4a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9420;
      func_0x00010c282040(PTR_PTR_1126c9420);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea8e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(puVar2);
      _objc_release(param_2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bde60c0();
  if (0 < (long)puVar1) {
    return (double)puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c137f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c93f8,PTR_s_reservedScrubbingHeight_11262b9f8);
  return param_1;
}



/* Entry: 10628c698; end: 10628c6c7; -[SCContextSpotlightScrubberControllerViewController _scrubberTouchAreaHeight] */

double FUN_10628c698(double param_1,ulong param_2)

{
  func_0x00010bde60c0();
  if (0 < (long)param_2) {
    return (double)param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c137f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c93f8,PTR_s_reservedScrubbingHeight_11262b9f8);
  return param_1;
}



/* Entry: 10628c6c8; end: 10628c74b; -[SCContextSpotlightScrubberControllerViewController _configuredScrubberTouchAreaHeight] */

undefined8 FUN_10628c6c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c2584c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93e0;
  func_0x00010c152f60(PTR_PTR_1126c93e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067e20(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10628c74c; end: 10628c767; -[SCContextSpotlightScrubberControllerViewController _isScrubberTouchAreaAboveEnabled] */

bool FUN_10628c74c(long param_1)

{
  func_0x00010bde60c0();
  return 0 < param_1;
}



/* Entry: 10628c768; end: 10628c7cf; -[SCContextSpotlightScrubberControllerViewController _getTimeOffsetInMsWithScrubOffset:] */

double FUN_10628c768(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_2;
  dVar2 = param_1;
  _objc_opt_class();
  func_0x00010bf4ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee8ba0(uVar1,param_3,param_2);
  _objc_release(param_2);
  return param_1 * dVar2 * 1000.0;
}



/* Entry: 10628c7d0; end: 10628c8f7; +[SCContextSpotlightScrubberControllerViewController _videoDurationFromParams:] */

double FUN_10628c7d0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_4;
    func_0x00010c160280(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf885a0(lVar3);
    param_1 = param_1 / 1000.0;
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10628c8f8; end: 10628cad7; -[SCContextSpotlightScrubberControllerViewController gestureRecognizerShouldBegin:] */

undefined8
FUN_10628c8f8(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c152f40();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010be43860();
    if ((uVar2 & 1) != 0) {
      bVar1 = false;
      goto LAB_10628c974;
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010c0f3660();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_5 == uVar2;
    _objc_release();
    uVar3 = param_3;
    func_0x00010be43860();
    if ((uVar3 & 1) != 0) {
LAB_10628c974:
      uVar2 = param_3;
      func_0x00010c0f3660();
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == uVar2) {
        _objc_release(uVar2);
        dVar6 = param_2;
LAB_10628c9c8:
        uVar2 = param_3;
        func_0x00010c29bf00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,uVar2);
        param_2 = dVar6;
        func_0x00010be9c340(param_3);
        dVar5 = param_1;
        func_0x00010bf20c00(uVar2);
        _CGRectGetHeight();
        param_1 = dVar5 - param_1;
        if (param_1 <= dVar6) {
          if (!bVar1) {
            func_0x00010bf9c020();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar2);
            uVar2 = param_3;
            goto joined_r0x00010628ca50;
          }
          _objc_release(uVar2);
          goto LAB_10628ca54;
        }
        _objc_release(uVar2);
      }
      else {
        uVar3 = param_3;
        func_0x00010bf9c020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        dVar6 = param_2;
        if (param_5 == uVar3) goto LAB_10628c9c8;
        if (!bVar1) goto LAB_10628cab0;
LAB_10628ca54:
        uVar2 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297a00(param_5,param_4,uVar2);
        _objc_release(uVar2);
        if ((ABS(param_2) <= 15.0) || (ABS(param_2) <= ABS(param_1) * 1.5)) goto LAB_10628cab0;
      }
      uVar4 = 0;
      goto LAB_10628cab4;
    }
joined_r0x00010628ca50:
    if (param_5 == uVar2) goto LAB_10628ca54;
  }
LAB_10628cab0:
  uVar4 = 1;
LAB_10628cab4:
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 10628cad8; end: 10628cadf; -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10628cad8(void)

{
  return 0;
}



/* Entry: 10628cae0; end: 10628cc6f; -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldReceiveTouch:] */

bool FUN_10628cae0(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  bool bVar2;
  double dVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010be43860();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_6,param_4,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf9c020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_5 == lVar1) {
      lVar1 = param_3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar3 = param_1;
      func_0x00010be9c340(param_3);
      _objc_release(lVar1);
      lVar1 = param_6;
      func_0x00010c29bf00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      bVar2 = false;
      if (param_1 - dVar3 <= param_2) {
        bVar2 = param_2 < 0.0 || lVar1 != param_3;
      }
      goto LAB_10628cc48;
    }
    lVar1 = param_3;
    func_0x00010c0f3660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_5 == lVar1) {
      lVar1 = param_6;
      func_0x00010c29bf00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      bVar2 = 0.0 <= param_2 && lVar1 == param_3;
      goto LAB_10628cc48;
    }
  }
  bVar2 = true;
LAB_10628cc48:
  _objc_release(param_6);
  _objc_release(param_5);
  return bVar2;
}



/* Entry: 10628cc70; end: 10628ccab; -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_10628cc70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2bf3a0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10628ccac; end: 10628ccb3; -[SCContextSpotlightScrubberControllerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10628ccac(void)

{
  return 0;
}



/* Entry: 10628ccb4; end: 10628ccc3; -[SCContextSpotlightScrubberControllerViewController panGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628ccb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127448a0);
}



/* Entry: 10628ccc4; end: 10628cd03; -[SCContextSpotlightScrubberControllerViewController setPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ccc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127448a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628cd04; end: 10628cd13; -[SCContextSpotlightScrubberControllerViewController expandedPanGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628cd04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127448a4);
}



/* Entry: 10628cd14; end: 10628cd53; -[SCContextSpotlightScrubberControllerViewController setExpandedPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127448a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628cd54; end: 10628cd63; -[SCContextSpotlightScrubberControllerViewController propertyModerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628cd54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744884);
}



/* Entry: 10628cd64; end: 10628cda3; -[SCContextSpotlightScrubberControllerViewController setPropertyModerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cd64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744884;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628cda4; end: 10628cdb3; -[SCContextSpotlightScrubberControllerViewController operaEventAnnouncing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628cda4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744888);
}



/* Entry: 10628cdb4; end: 10628cdf3; -[SCContextSpotlightScrubberControllerViewController setOperaEventAnnouncing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744888;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628cdf4; end: 10628ce03; -[SCContextSpotlightScrubberControllerViewController operaPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628cdf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274488c);
}



/* Entry: 10628ce04; end: 10628ce43; -[SCContextSpotlightScrubberControllerViewController setOperaPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ce04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274488c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628ce44; end: 10628ce53; -[SCContextSpotlightScrubberControllerViewController contextParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628ce44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744890);
}



/* Entry: 10628ce54; end: 10628ce93; -[SCContextSpotlightScrubberControllerViewController setContextParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ce54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744890;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628ce94; end: 10628cea3; -[SCContextSpotlightScrubberControllerViewController storiesConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628ce94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744894);
}



/* Entry: 10628cea4; end: 10628cee3; -[SCContextSpotlightScrubberControllerViewController setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744894;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628cee4; end: 10628cef3; -[SCContextSpotlightScrubberControllerViewController wasPanGestureRegisteredForExtendedTouch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10628cee4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744880);
}



/* Entry: 10628cef4; end: 10628cf03; -[SCContextSpotlightScrubberControllerViewController setWasPanGestureRegisteredForExtendedTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cef4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112744880) = param_3;
  return;
}



/* Entry: 10628cf04; end: 10628cf13; -[SCContextSpotlightScrubberControllerViewController extendedPanGestureBottomInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628cf04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744898);
}



/* Entry: 10628cf14; end: 10628cf23; -[SCContextSpotlightScrubberControllerViewController setExtendedPanGestureBottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112744898) = param_3;
  return;
}



/* Entry: 10628cf24; end: 10628cf33; -[SCContextSpotlightScrubberControllerViewController scrubberShouldIgnoreVerticalSwipes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10628cf24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274489c);
}



/* Entry: 10628cf34; end: 10628cf43; -[SCContextSpotlightScrubberControllerViewController setScrubberShouldIgnoreVerticalSwipes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cf34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274489c) = param_3;
  return;
}



/* Entry: 10628cf44; end: 10628cfd3; -[SCContextSpotlightScrubberControllerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628cf44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744894,0);
  _objc_storeStrong(param_1 + _DAT_112744890,0);
  _objc_storeStrong(param_1 + _DAT_11274488c,0);
  _objc_storeStrong(param_1 + _DAT_112744888,0);
  _objc_storeStrong(param_1 + _DAT_112744884,0);
  _objc_storeStrong(param_1 + _DAT_1127448a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127448a0,0);
  return;
}



/* Entry: 10628cfd4; end: 10628d07b; -[SCContextSpotlightSoundHeaderViewController initWithSoundEntryParamsObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10628cfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127448a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127448a8) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127448ac;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10628d07c; end: 10628d0cb; -[SCContextSpotlightSoundHeaderViewController loadView] */

void FUN_10628d07c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9380;
  _objc_alloc(PTR_PTR_1126c9380);
  func_0x00010c01a8a0(0xc024000000000000,0xc028000000000000,0xc024000000000000,0);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10628d0cc; end: 10628d21f; -[SCContextSpotlightSoundHeaderViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d0cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0ad0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb14e0(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127448ac);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10628d220; end: 10628d267;  */

void FUN_10628d220(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea50c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10628d268; end: 10628d7ff; -[SCContextSpotlightSoundHeaderViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar22);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar23 = (long)_DAT_1127448b0;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar21);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar23),param_2,3);
  func_0x00010c207380(0x4010000000000000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23),param_2,0);
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar24 = (long)_DAT_1127448b4;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar24),param_2,1);
  puVar1 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x402c000000000000,0x402c000000000000,puVar1,param_2,0x1a6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar24),param_2,
                      &PTR____CFConstantStringClassReference_110e47c38);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar24),param_2,0);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar22 = (long)_DAT_1127448b8;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar22),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar22),param_2,0x17);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar22),param_2,
                      &PTR____CFConstantStringClassReference_110e47c58);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar23),param_2,*(undefined8 *)(param_1 + lVar24));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar23),param_2,*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar23);
  uStack_b0 = uVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar23);
  uStack_a8 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  uStack_a0 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar24);
  uStack_98 = uVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar24);
  uStack_90 = uVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar23);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(lVar5);
  _objc_release(lVar22);
  _objc_release(uVar4);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  puVar2 = puVar1;
  func_0x00010bef9040(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  lVar22 = (long)_DAT_1127448bc;
  _objc_retain(puVar2);
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar2;
  _objc_release(uVar21);
  puVar1 = puVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if ((puVar3 != (undefined *)0x0) &&
     (puVar3 = puVar2, func_0x00010bfdda20(), ((ulong)puVar3 & 1) == 0)) {
    puVar3 = puVar2;
    func_0x00010c230c60();
    _objc_release(puVar1);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10628d870;
    puVar1 = puVar2;
    func_0x00010c2711a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127448b8),param_2,puVar1);
  }
  _objc_release(puVar1);
LAB_10628d870:
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10628d800; end: 10628d8f7; -[SCContextSpotlightSoundHeaderViewController _setLabelTextWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d800(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127448bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(ulong *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if ((uVar3 != 0) && (uVar3 = param_3, func_0x00010bfdda20(), (uVar3 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010c230c60();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_10628d870;
    uVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127448b8),param_2,uVar2);
  }
  _objc_release(uVar2);
LAB_10628d870:
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628d8f8; end: 10628d98f; -[SCContextSpotlightSoundHeaderViewController _tappedSoundHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d8f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127448bc);
  func_0x00010c246fa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247140(lVar2,param_2,param_1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10628d990; end: 10628d9af; -[SCContextSpotlightSoundHeaderViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d990(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127448c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10628d9b0; end: 10628d9c3; -[SCContextSpotlightSoundHeaderViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127448c0,param_3);
  return;
}



/* Entry: 10628d9c4; end: 10628da4f; -[SCContextSpotlightSoundHeaderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628d9c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127448c0);
  _objc_storeStrong(param_1 + _DAT_1127448ac,0);
  _objc_storeStrong(param_1 + _DAT_1127448bc,0);
  _objc_storeStrong(param_1 + _DAT_1127448a8,0);
  _objc_storeStrong(param_1 + _DAT_1127448b8,0);
  _objc_storeStrong(param_1 + _DAT_1127448b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127448b0,0);
  return;
}



/* Entry: 10628da50; end: 10628dad3; -[SCContextSpotlightSponsorInfoTrayViewController initWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10628da50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0ad8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127448c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10628dad4; end: 10628db1b; -[SCContextSpotlightSponsorInfoTrayViewController viewDidLoad] */

void FUN_10628dad4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0ad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bea9c40(param_1);
  return;
}



/* Entry: 10628db1c; end: 10628ddd7; -[SCContextSpotlightSponsorInfoTrayViewController _setUpTrayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628db1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_1127448c4;
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + _DAT_1127448c4,0);
  return;
}



/* Entry: 10628ddd8; end: 10628ddeb; -[SCContextSpotlightSponsorInfoTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ddd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127448c4,0);
  return;
}



/* Entry: 10628ddec; end: 10628df3b; -[SCContextSpotlightSponsorTagViewController initWithSponsorParams:circumstanceEngine:valdiRuntimeProvider:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10628ddec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f0ae0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127448c8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127448cc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127448d0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127448d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127448d4) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127448d8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127448dc) = 0x10000000000000;
    func_0x00010be66e00(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10628df3c; end: 10628e2ef; -[SCContextSpotlightSponsorTagViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628df3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5c360();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127448e0;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(long *)(param_1 + lVar22) = lVar2;
  _objc_release(uVar21);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar22);
  uStack_90 = uVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar22);
  uStack_88 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  uStack_80 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf49500(uVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  uStack_78 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010beef8c0(puVar1,param_2,puVar19);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(lVar22);
  _objc_release(param_1);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar20);
  func_0x00010bf6b020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24a100();
  _objc_release(puVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10628e2f0; end: 10628e34b; -[SCContextSpotlightSponsorTagViewController didTapSponsorNameWithAction:] */

void FUN_10628e2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24a100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10628e34c; end: 10628e55b; -[SCContextSpotlightSponsorTagViewController showInfoTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628e34c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar7 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    puVar1 = PTR_PTR_1126c9428;
    _objc_alloc_init(PTR_PTR_1126c9428);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1d2040(puVar1);
    puVar2 = PTR_PTR_1126c9430;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127448d8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127448e4);
    *(undefined **)(param_1 + _DAT_1127448e4) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c9438;
    _objc_alloc(PTR_PTR_1126c9438);
    func_0x00010c061440();
    puVar4 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    lVar7 = (long)_DAT_1127448e8;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010c167420(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c219d60(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c16d3e0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c219e20(*(undefined8 *)(param_1 + lVar7));
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c580(uVar6);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10628e55c; end: 10628e587;  */

void FUN_10628e55c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be038c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10628e588; end: 10628e597; -[SCContextSpotlightSponsorTagViewController tray:positionDidChange:] */

void FUN_10628e588(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfd5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDismissTray_11255cf08);
    return;
  }
  return;
}



/* Entry: 10628e598; end: 10628e5ab; -[SCContextSpotlightSponsorTagViewController tray:heightForPosition:] */

undefined8
FUN_10628e598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd89d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__calculateTrayViewHeight_112553c10);
    return param_1;
  }
  return 0xbff0000000000000;
}



/* Entry: 10628e5ac; end: 10628e6db; -[SCContextSpotlightSponsorTagViewController _observeSponsorParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628e5ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127448cc);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10628e6dc; end: 10628e723;  */

void FUN_10628e6dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10628e724; end: 10628e7b7; -[SCContextSpotlightSponsorTagViewController _configureWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628e724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bebb0c0(param_1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar1 == 0) {
    func_0x00010c1a7f60();
    _objc_release(lVar2);
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(lVar2);
    func_0x00010bf47a80(*(undefined8 *)(param_1 + _DAT_1127448e0),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628e7b8; end: 10628e7ef; -[SCContextSpotlightSponsorTagViewController _makeSponsorView] */

void FUN_10628e7b8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9440;
  _objc_opt_new(PTR_PTR_1126c9440);
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10628e7f0; end: 10628e893; -[SCContextSpotlightSponsorTagViewController _showSponsorTagWithSponsorParams:] */

undefined * FUN_10628e7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126c50b0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c116a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c252d60(param_3);
  _objc_release(param_3);
  func_0x00010c232640(puVar4,param_2,uVar1,uVar2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar4;
}



/* Entry: 10628e894; end: 10628e913; -[SCContextSpotlightSponsorTagViewController _dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628e894(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_1127448e8);
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10628e914;
    puStack_30 = &UNK_110842e18;
    lStack_28 = lVar1;
    _objc_retain(lVar1);
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10628e914; end: 10628e91f;  */

void FUN_10628e914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 10628e920; end: 10628e96f; -[SCContextSpotlightSponsorTagViewController _didDismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628e920(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127448e8);
  *(undefined8 *)(param_1 + _DAT_1127448e8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127448e4);
  *(undefined8 *)(param_1 + _DAT_1127448e4) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_1127448dc) = 0x10000000000000;
  return;
}



/* Entry: 10628e970; end: 10628ea57; -[SCContextSpotlightSponsorTagViewController _calculateTrayViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10628e970(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar4 = (long)_DAT_1127448e4;
  lVar2 = *(long *)(param_1 + lVar4);
  lVar6 = (long)_DAT_1127448dc;
  dVar7 = *(double *)(param_1 + lVar6);
  if (lVar2 != 0) {
    dVar8 = ABS(dVar7 + -2.2250738585072014e-308);
    uVar9 = 0x10000000000000;
    dVar10 = ABS(dVar7 + 2.2250738585072014e-308) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar10))) {
      bVar1 = dVar8 < dVar10;
    }
    if (bVar1) {
      func_0x00010c295200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a1560();
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar7 = 1.79769313486232e+308;
      func_0x00010c23d5a0(uVar9,uVar5);
      *(double *)(param_1 + lVar6) = dVar7 + 15.0;
      _objc_release(puVar3);
      _objc_release(lVar2);
      dVar7 = *(double *)(param_1 + lVar6);
    }
  }
  return dVar7;
}



/* Entry: 10628ea58; end: 10628ea77; -[SCContextSpotlightSponsorTagViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ea58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127448ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10628ea78; end: 10628ea8b; -[SCContextSpotlightSponsorTagViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ea78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127448ec,param_3);
  return;
}



/* Entry: 10628ea8c; end: 10628eb47; -[SCContextSpotlightSponsorTagViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ea8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127448ec);
  _objc_storeStrong(param_1 + _DAT_1127448cc,0);
  _objc_storeStrong(param_1 + _DAT_1127448f0,0);
  _objc_storeStrong(param_1 + _DAT_1127448e8,0);
  _objc_storeStrong(param_1 + _DAT_1127448e4,0);
  _objc_storeStrong(param_1 + _DAT_1127448e0,0);
  _objc_storeStrong(param_1 + _DAT_1127448d0,0);
  _objc_storeStrong(param_1 + _DAT_1127448d8,0);
  _objc_storeStrong(param_1 + _DAT_1127448c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127448d4,0);
  return;
}



/* Entry: 10628eb48; end: 10628ed63; -[SCContextSpotlightSubtitlesViewController initWithStoryId:operaEventAnnouncer:logger:preferences:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10628eb48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = &uStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_88 = PTR_PTR_1126f0ae8;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_1127448f4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(long *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127448f8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127448fc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_5;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112744900;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112744904;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c2612e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2330;
    puStack_80 = puVar3;
    func_0x00010bf3df00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2338;
    puStack_78 = puVar4;
    func_0x00010c08fa00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar7 = *(undefined1 **)(param_3 + _DAT_112744908);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return puVar7;
}



/* Entry: 10628ed64; end: 10628ede7; -[SCContextSpotlightSubtitlesViewController _updateSubtitleVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ed64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744908);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628ede8; end: 10628ee7f; -[SCContextSpotlightSubtitlesViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ede8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0ae8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744904);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127448f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4a954(uVar2,uVar1);
  *(byte *)(param_1 + _DAT_11274490c) = (byte)uVar2 ^ 1;
  _objc_release(uVar1);
  func_0x00010bee1520(param_1);
  return;
}



/* Entry: 10628ee80; end: 10628f49f; -[SCContextSpotlightSubtitlesViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628ee80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 in_x4;
  undefined8 uVar35;
  long lVar36;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f0ae8;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c17d4c0(puVar1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4018000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010c1677c0(0x3fe3333333333333,puVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar36 = (long)_DAT_112744908;
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar2;
  _objc_release(uVar35);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar36));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar36));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar36));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar36));
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar36);
  uStack_b0 = uVar35;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar36);
  uStack_a8 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar36);
  uStack_a0 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf49520(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  uStack_98 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493c0(0xc010000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  puStack_90 = puVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar1;
  puStack_88 = puVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar1;
  puStack_80 = puVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = 8;
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar30;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar35);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = 1;
  func_0x00010c1a7f60();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar35);
  _objc_retain(in_x4);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar34;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar34);
  puVar2 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar33 = uVar32;
  _objc_opt_isKindOfClass(uVar32,puVar2);
  uVar34 = uVar32;
  if ((uVar33 & 1) == 0) {
    uVar34 = 0;
  }
  _objc_retain(uVar34);
  _objc_release(uVar32);
  if (uVar34 != 0) {
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010c0720c0();
    _objc_release(uVar32);
    if ((int)uVar33 != 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c2612e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar35;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar10 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar35;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)uVar10 == 0) {
          puVar2 = PTR_PTR_1126b2338;
          func_0x00010c08fa00(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar35;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)uVar10 != 0) {
            func_0x00010be2b2c0(puVar1);
          }
        }
        else {
          func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_112744908));
          func_0x00010bee1520(puVar1);
        }
      }
      else {
        func_0x00010be31580(puVar1);
      }
    }
  }
  _objc_release(uVar34);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar35);
  return;
}



/* Entry: 10628f4a0; end: 10628f677; -[SCContextSpotlightSubtitlesViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628f4a0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c2612e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)uVar5 == 0) {
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)uVar5 == 0) {
          puVar3 = PTR_PTR_1126b2338;
          func_0x00010c08fa00(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)uVar5 != 0) {
            func_0x00010be2b2c0(param_1);
          }
        }
        else {
          func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112744908));
          func_0x00010bee1520(param_1);
        }
      }
      else {
        func_0x00010be31580(param_1);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628f678; end: 10628f7d7; -[SCContextSpotlightSubtitlesViewController _handleSubtitlesStateUpdatedWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628f678(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c293fe0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c2612c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9448;
    _objc_opt_class(PTR_PTR_1126c9448);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf926c0();
    _objc_release(uVar1);
    *(byte *)(param_1 + _DAT_11274490c) = (byte)uVar3 ^ 1;
    func_0x00010c0b14a0(*(undefined8 *)(param_1 + _DAT_1127448fc));
  }
  func_0x00010bee1520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628f7d8; end: 10628f89f; -[SCContextSpotlightSubtitlesViewController _handleLegibleOutputUpdatedWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628f7d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b2348;
  _objc_retain(param_3);
  func_0x00010bf30940(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112744908));
  }
  func_0x00010bee1520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628f8a0; end: 10628f8f3; -[SCContextSpotlightSubtitlesViewController _handleSubtitlesTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628f8a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be59aa0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744900);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c261280(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10628f8f4; end: 10628f983; -[SCContextSpotlightSubtitlesViewController _logTappingOnSubtitlesView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628f8f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5c68;
  func_0x00010c261180(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bff0a60();
  func_0x00010c0a0480(*(undefined8 *)(param_1 + _DAT_1127448fc),param_2,puVar1,0,0,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10628f984; end: 10628fa03; -[SCContextSpotlightSubtitlesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628f984(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744904,0);
  _objc_storeStrong(param_1 + _DAT_112744900,0);
  _objc_storeStrong(param_1 + _DAT_1127448f8,0);
  _objc_storeStrong(param_1 + _DAT_1127448f4,0);
  _objc_storeStrong(param_1 + _DAT_1127448fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744908,0);
  return;
}



/* Entry: 10628fa04; end: 10628fadb; -[SCContextSpotlightSuggestedSearchViewController initWithSuggestedSearchString:suggestedSearchType:poiEventEndTimeMs:contextLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10628fa04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0af0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744910);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744910) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744914) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744918) = param_5;
    lVar4 = (long)_DAT_11274491c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10628fadc; end: 10628fb23; -[SCContextSpotlightSuggestedSearchViewController viewDidLoad] */

void FUN_10628fadc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0af0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb14e0(param_1);
  return;
}



/* Entry: 10628fb24; end: 1062902c7; -[SCContextSpotlightSuggestedSearchViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628fb24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + _DAT_112744910));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar39 = (long)_DAT_112744920;
  uVar37 = *(undefined8 *)(param_1 + lVar39);
  *(undefined **)(param_1 + lVar39) = puVar2;
  _objc_release(uVar37);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar39),param_2,0);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar39),param_2,3);
  func_0x00010c207380(0x4018000000000000,*(undefined8 *)(param_1 + lVar39));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar39),param_2,0);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar40 = (long)_DAT_112744924;
  uVar37 = *(undefined8 *)(param_1 + lVar40);
  *(undefined **)(param_1 + lVar40) = puVar2;
  _objc_release(uVar37);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar40),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar40),param_2,1);
  puVar2 = PTR_PTR_1126b0c40;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3feb333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar2,param_2,0x18b,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar40),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar40),param_2,
                      &PTR____CFConstantStringClassReference_110e47c98);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar38 = (long)_DAT_112744928;
  uVar37 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar2;
  _objc_release(uVar37);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar38),param_2,0);
  lVar1 = param_1;
  func_0x00010bdd0fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar38),param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar38),param_2,
                      &PTR____CFConstantStringClassReference_110e47cb8);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar39),param_2,*(undefined8 *)(param_1 + lVar40));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar39),param_2,*(undefined8 *)(param_1 + lVar38));
  puVar3 = PTR_PTR_1126c9380;
  _objc_alloc();
  func_0x00010c01a8a0(0xc020000000000000,0xc028000000000000,0xc020000000000000,0xc028000000000000);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar3,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar39);
  uStack_c0 = uVar37;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar39);
  uStack_b8 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar39);
  uStack_b0 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar40);
  uStack_a8 = uVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar40);
  uStack_a0 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar3;
  uStack_98 = uVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar22;
  func_0x00010bf493a0(puVar22,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar3;
  puStack_90 = puVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar26;
  func_0x00010bf493a0(puVar26,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar3;
  puStack_88 = puVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010bf493a0(puVar30,param_2,lVar40);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar3;
  puStack_80 = puVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x00010bf493a0(puVar33,param_2,lVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = 10;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,10);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar4;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar34);
  _objc_release(lVar39);
  _objc_release(param_1);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(lVar40);
  _objc_release(lVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar37);
  _objc_release(lVar38);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(uVar36);
  puVar4 = puVar35;
  _objc_retain();
  func_0x0001062ccf24();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar4;
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bdd1060(puVar3,param_2,puVar2,uVar36,*(undefined8 *)(puVar3 + _DAT_112744910),puVar35,
                      param_5,param_8,puVar34);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062902c8; end: 1062903b3; -[SCContextSpotlightSuggestedSearchViewController _trendingAttributedSearchTextWithBaseColor:prefixColor:font:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062902c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain();
  func_0x0001062ccf24();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bdd1060(param_1,param_2,puVar2,param_4,*(undefined8 *)(param_1 + _DAT_112744910),
                      param_3,param_5,param_8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1062903b4; end: 1062906e7; -[SCContextSpotlightSuggestedSearchViewController _attributedSearchText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1062903b4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *puVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = 0.85;
  puVar2 = puVar5;
  func_0x00010bf414e0(0x3feb333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2e);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3feb333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + _DAT_112744914) == 2) {
LAB_1062904c0:
    func_0x00010becf940(param_1,param_2,puVar2,puVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + _DAT_112744914) == 1) {
      puVar3 = param_1;
      func_0x00010be34060();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar3 & 1) == 0) {
        func_0x0001062ccf3c();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010bdd1060(param_1,param_2,puVar5,puVar4,*(undefined8 *)(param_1 + _DAT_112744910),
                            puVar2,puVar1,in_x7,puVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (0 < *(long *)(param_1 + _DAT_112744918)) goto LAB_1062904c0;
        puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        uVar7 = *(undefined8 *)(param_1 + _DAT_112744910);
        uStack_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
        uStack_70 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_68 = puVar2;
        puStack_60 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&uStack_78,
                            2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar3,param_2,uVar7,puVar5);
        param_1 = puVar3;
      }
    }
    else {
      func_0x0001062ccf0c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      param_1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      uStack_98 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      uStack_90 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar2;
      puStack_80 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&uStack_98,2)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(param_1,param_2,puVar5,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar6 = (long)_DAT_112744918;
    if (*(long *)(puVar1 + lVar6) < 1) {
      puVar5 = (undefined *)0x1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar5);
      puVar5 = (undefined *)(ulong)(*(long *)(puVar1 + lVar6) <= (long)(dVar8 * 1000.0));
    }
    return puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}


