/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f236c4; end: 105f236d3; -[SCMapAltitudeSliderView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f236c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273a85c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 105f236d4; end: 105f236e3; -[SCMapAltitudeSliderView percentage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f236d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a844);
}



/* Entry: 105f236e4; end: 105f236f3; -[SCMapAltitudeSliderView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f236e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a848);
}



/* Entry: 105f236f4; end: 105f23703; -[SCMapAltitudeSliderView shouldFlipTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105f236f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273a84c);
}



/* Entry: 105f23704; end: 105f23713; -[SCMapAltitudeSliderView setShouldFlipTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f23704(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273a84c) = param_3;
  return;
}



/* Entry: 105f23714; end: 105f23773; -[SCMapAltitudeSliderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f23714(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273a85c,0);
  _objc_storeStrong(param_1 + _DAT_11273a858,0);
  _objc_storeStrong(param_1 + _DAT_11273a854,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a850,0);
  return;
}



/* Entry: 105f23774; end: 105f23993; -[SCMapZoomThresholdTracker initWithViewport:zoomThreshold:zoomTolerance:] */

undefined8 *
FUN_105f23774(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  double dVar7;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee0a8;
  puVar1 = &uStack_50;
  uStack_50 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    dVar7 = param_1 + param_2;
    puVar1[2] = param_1;
    puVar1[3] = dVar7;
    puVar1[4] = param_1 - param_2;
    puVar1[6] = dVar7;
    puVar1[7] = param_1 - param_2;
    func_0x00010c2bf200(param_5);
    puVar1[5] = dVar7;
    func_0x00010bdd8940(puVar1);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = param_5;
    if (param_2 == 0.0) {
      func_0x00010c29f500();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105f23994;
      puStack_68 = &UNK_110858ee0;
      puVar6 = auStack_60;
      _objc_copyWeak(puVar6,auStack_58);
      uVar5 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c29f500();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_88;
      _objc_copyWeak(puVar6,auStack_58);
      uVar5 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = puVar1[9];
    puVar1[9] = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(puVar6);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar5 = puVar1[8];
    _objc_retain(uVar5);
    uVar2 = puVar1[10];
    puVar1[10] = uVar5;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105f23994; end: 105f239eb;  */

void FUN_105f23994(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f239ec; end: 105f23acb; -[SCMapZoomThresholdTracker _onViewportChange] */

void FUN_105f239ec(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010c2bf200(*(undefined8 *)(param_2 + 8));
  dVar2 = *(double *)(param_2 + 0x28);
  dVar4 = ABS(param_1 - dVar2);
  dVar5 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar1 = dVar4 < dVar5;
  }
  if (bVar1) {
    return;
  }
  dVar4 = *(double *)(param_2 + 0x30);
  bVar1 = true;
  if ((dVar2 < dVar4) && (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
    bVar1 = param_1 < dVar4;
  }
  if (bVar1) {
    dVar4 = *(double *)(param_2 + 0x38);
    bVar1 = false;
    if ((dVar4 <= dVar2) && (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
      bVar1 = param_1 < dVar4;
    }
    if ((!bVar1) ||
       (func_0x00010be83fe0(dVar2,param_1,param_2),
       *(double *)(param_2 + 0x38) != *(double *)(param_2 + 0x10))) goto LAB_105f23ab4;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    func_0x00010be84120(dVar2,param_1,param_2);
    if (*(double *)(param_2 + 0x30) != *(double *)(param_2 + 0x10)) goto LAB_105f23ab4;
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar3;
LAB_105f23ab4:
  *(double *)(param_2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdd8950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__calculateThresholds_112553bf0);
  return;
}



/* Entry: 105f23acc; end: 105f23b6b; -[SCMapZoomThresholdTracker _onViewportChangeWithoutTolerance] */

void FUN_105f23acc(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010c2bf200(*(undefined8 *)(param_2 + 8));
  dVar2 = *(double *)(param_2 + 0x28);
  dVar3 = ABS(param_1 - dVar2);
  dVar4 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar4))) {
    bVar1 = dVar3 < dVar4;
  }
  if (!bVar1) {
    dVar3 = *(double *)(param_2 + 0x10);
    if (dVar2 < dVar3 != param_1 < dVar3) {
      if (dVar3 <= dVar2) {
        func_0x00010be83fe0(dVar2,param_1,param_2);
      }
      else {
        func_0x00010be84120(dVar2,param_1);
      }
    }
    *(double *)(param_2 + 0x28) = param_1;
  }
  return;
}



/* Entry: 105f23b6c; end: 105f23baf; -[SCMapZoomThresholdTracker _publishLower:toHigher:] */

void FUN_105f23b6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c5fb8;
  func_0x00010c0bad80(PTR_PTR_1126c5fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f23bb0; end: 105f23bff; -[SCMapZoomThresholdTracker _publishHigher:toLower:] */

void FUN_105f23bb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  puVar1 = PTR_PTR_1126c5fb8;
  func_0x00010c0bad60(param_2,param_1,PTR_PTR_1126c5fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f23c00; end: 105f23c23; -[SCMapZoomThresholdTracker _calculateThresholds] */

void FUN_105f23c00(long param_1)

{
  if ((*(double *)(param_1 + 0x28) < *(double *)(param_1 + 0x20)) ||
     (*(double *)(param_1 + 0x18) <= *(double *)(param_1 + 0x28))) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



/* Entry: 105f23c24; end: 105f23c2b; -[SCMapZoomThresholdTracker zoomThresholdCrossingObservable] */

undefined8 FUN_105f23c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f23c2c; end: 105f23c73; -[SCMapZoomThresholdTracker .cxx_destruct] */

void FUN_105f23c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f23c74; end: 105f23cd3; +[SCMapZoomThresholdCrossing mapZoomThresholdCrossedHigherToLowerWithLower:higher:] */

void FUN_105f23c74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5fb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f23cd4; end: 105f23d2f; +[SCMapZoomThresholdCrossing mapZoomThresholdCrossedLowerToHigherWithLower:higher:] */

void FUN_105f23cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5fb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f23d30; end: 105f23d73; -[SCMapZoomThresholdCrossing internalInit] */

void FUN_105f23d30(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ee0b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f23d74; end: 105f23e03; -[SCMapZoomThresholdCrossing matchMapZoomThresholdCrossedLowerToHigher:mapZoomThresholdCrossedHigherToLower:] */

void FUN_105f23d74(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_105f23de8;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_105f23de8;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_105f23de8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f23e04; end: 105f23e77; -[SCMapInitialViewportGrapheneMetricReporter initWithMapInitialViewportGraphene:] */

undefined1 * FUN_105f23e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee0b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f23e78; end: 105f23e7f; -[SCMapInitialViewportGrapheneMetricReporter hasLoggedInitialViewportFinal] */

undefined1 FUN_105f23e78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 105f23e80; end: 105f23e9b; -[SCMapInitialViewportGrapheneMetricReporter logInitialViewportLoadedFromMapDestination] */

/* WARNING: Removing unreachable block (ram,0x000105f29098) */
/* WARNING: Removing unreachable block (ram,0x000105f28ec0) */
/* WARNING: Removing unreachable block (ram,0x000105f28e90) */
/* WARNING: Removing unreachable block (ram,0x000105f28f08) */
/* WARNING: Removing unreachable block (ram,0x000105f294cc) */

undefined ** FUN_105f23e80(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 in_x5;
  undefined *in_x6;
  undefined *puVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110e31a18;
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = (undefined *)0x0;
  puVar9 = (undefined *)0x0;
  puVar11 = (undefined *)0x1;
  puVar8 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110e31a18);
  _objc_retain(0);
  _objc_retain(0);
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e31a18);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e31a18);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e31a18);
    func_0x00010002b838(auStack_a0,ppuVar2);
    _objc_retain(0);
    _objc_release(0);
    func_0x00010002b838(auStack_88,&UNK_10f34f3aa);
    _objc_retain(0);
    _objc_release(0);
    func_0x00010002b838(auStack_70,&UNK_10f34f3aa);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    ppuVar2 = (undefined **)&UNK_1108f96d0;
    puVar9 = (undefined *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    puVar7 = (undefined *)puVar8;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(0);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(0);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)puStack_f8);
  _objc_release(0);
  _objc_release(0);
  _objc_release(&PTR____CFConstantStringClassReference_110e31a18);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  puVar8 = &uStack_140;
  uStack_e8 = 0;
  uStack_e0 = 0;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e31a18;
  pcStack_c8 = FUN_105f290d0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar2;
  puVar13 = puVar7;
  puStack_100 = (undefined1 *)unaff_x24;
  ppuStack_f0 = ppuVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f34f3aa;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_120,ppuVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    ppuVar6 = (undefined **)&UNK_1108f9720;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar13 = (undefined *)puVar8;
    puVar9 = puVar7;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar13 = (undefined *)puVar8;
      puVar9 = puVar7;
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    __Unwind_Resume();
    puVar8 = &uStack_200;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar13;
    puVar10 = puVar9;
    puVar12 = puVar11;
    _objc_retain(ppuVar6);
    _objc_retain(puVar13);
    _objc_retain(puVar9);
    if (ppuVar3 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar3[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f34f3aa;
      }
      else {
        ppuVar3 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_1e0,ppuVar3);
      _objc_retain(puVar13);
      if (puVar13 == (undefined *)0x0) {
        puVar7 = &UNK_10f34f3aa;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar7 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_1c8,puVar7);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar7 = &UNK_10f34f3aa;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar7 = puVar9;
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1b0,puVar7);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108f9770);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar1 = 0;
      puVar7 = (undefined *)puVar8;
      puVar10 = puVar11;
      do {
        if ((&cStack_199)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x24 = &uStack_200;
      } while (lVar1 != -0x48);
    }
    _objc_release(puVar9);
    _objc_release(puVar13);
    ppuVar3 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_1e0);
      _objc_release(puVar9);
      _objc_release(puVar13);
      _objc_release(ppuVar6);
      __Unwind_Resume();
      pppuVar5 = &ppuStack_270;
      _objc_retain(puVar7);
      _objc_retain(puVar10);
      _objc_retain(puVar12);
      _objc_retain(in_x5);
      _objc_retain(in_x6);
      puStack_268 = PTR_PTR_1126ee0e8;
      ppuStack_270 = ppuVar3;
      _objc_msgSendSuper2(&ppuStack_270,PTR_s_init_1125d9248);
      if (pppuVar5 != (undefined ***)0x0) {
        _objc_retain(puVar7);
        puVar9 = (undefined *)pppuVar5[1];
        pppuVar5[1] = (undefined **)puVar7;
        _objc_release(puVar9);
        _objc_retain(puVar10);
        puVar9 = (undefined *)pppuVar5[2];
        pppuVar5[2] = (undefined **)puVar10;
        _objc_release(puVar9);
        _objc_retain(puVar12);
        puVar9 = (undefined *)pppuVar5[3];
        pppuVar5[3] = (undefined **)puVar12;
        _objc_release(puVar9);
        _objc_retain(in_x6);
        puVar9 = (undefined *)pppuVar5[0xb];
        pppuVar5[0xb] = (undefined **)in_x6;
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        puVar11 = (undefined *)pppuVar5[7];
        pppuVar5[7] = (undefined **)puVar9;
        _objc_release(puVar11);
        puVar9 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
        func_0x00010c2a2c00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined *)pppuVar5[8];
        pppuVar5[8] = (undefined **)puVar9;
        _objc_release(puVar11);
        puVar9 = PTR_PTR_1126ae820;
        _objc_alloc();
        puVar11 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060400();
        puVar13 = (undefined *)pppuVar5[9];
        pppuVar5[9] = (undefined **)puVar9;
        _objc_release(puVar13);
        _objc_release(puVar11);
        puVar9 = PTR_PTR_1126ae820;
        _objc_alloc();
        func_0x00010c060400();
        puVar11 = (undefined *)pppuVar5[10];
        pppuVar5[10] = (undefined **)puVar9;
        _objc_release(puVar11);
        puVar9 = PTR_PTR_1126ae810;
        _objc_alloc_init();
        puVar11 = (undefined *)pppuVar5[6];
        pppuVar5[6] = (undefined **)puVar9;
        _objc_release(puVar11);
        func_0x00010beab820(pppuVar5);
        func_0x00010beadfe0(pppuVar5);
      }
      _objc_release(in_x6);
      _objc_release(in_x5);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar7);
      return (undefined **)pppuVar5;
    }
    return ppuVar3;
  }
  return ppuVar3;
}



/* Entry: 105f23e9c; end: 105f23f3f; -[SCMapInitialViewportGrapheneMetricReporter logInitialViewportLoadedWithZoomLevel:hasUserLocation:hasFriendLocations:] */

void FUN_105f23e9c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = 0;
  func_0x0001072433f8(0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e31a78;
  if (15.0 <= param_1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e31a98;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31a58;
  if (10.0 <= param_1) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e31a38;
  if (5.0 <= param_1) {
    ppuVar2 = ppuVar1;
  }
  FUN_105f28e10(uVar4,&PTR____CFConstantStringClassReference_110e319f8,uVar3,ppuVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105f23f40; end: 105f23fff; -[SCMapInitialViewportGrapheneMetricReporter logInitialViewportCalculatedWithDataState:] */

void FUN_105f23f40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e31b78);
  _objc_retainAutoreleasedReturnValue();
  FUN_105f290d0(uVar1,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105f24000; end: 105f24143; -[SCMapInitialViewportGrapheneMetricReporter logInitialViewportFinalWithOutcome:zoomLevel:dataState:] */

void FUN_105f24000(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x18) = 1;
  uVar5 = *(undefined8 *)(param_2 + 8);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110e31b78);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 - 1U < 4) {
    ppuVar4 = (undefined **)(&PTR_PTR_1108f94b0)[param_4 - 1U];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e31b98;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e31a78;
  if (15.0 <= param_1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e31a98;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31a58;
  if (10.0 <= param_1) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e31a38;
  if (5.0 <= param_1) {
    ppuVar2 = ppuVar1;
  }
  FUN_105f29244(uVar5,puVar3,ppuVar4,ppuVar2,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f24144; end: 105f2414f; -[SCMapInitialViewportGrapheneMetricReporter .cxx_destruct] */

void FUN_105f24144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f24150; end: 105f2430b; -[SCMapLifecycleLoggingInfoProvider initWithAttributionObservable:currentPageTracker:isOpenFromSwipe:] */

undefined8 *
FUN_105f24150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126ee0c0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0xffffffffffffffff;
    *(undefined1 *)(puVar1 + 3) = param_5;
    _objc_initWeak(auStack_68,puVar1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105f2430c;
    puStack_78 = &UNK_1108f5460;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf5f7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f2430c; end: 105f2439b;  */

void FUN_105f2430c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67dc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f2439c; end: 105f24447; -[SCMapLifecycleLoggingInfoProvider _onAttributionUpdated:] */

void FUN_105f2439c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 5;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = 3;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e9800();
  func_0x0001072433b4();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_3;
  func_0x00010c0e9820();
  func_0x000107243730();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c2479a0();
  _objc_release(param_3);
  func_0x000107243448();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f24448; end: 105f244b7; -[SCMapLifecycleLoggingInfoProvider _didChangeCurrentPageEvent:] */

void FUN_105f24448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f244b8;
  puStack_20 = &UNK_110872390;
  uStack_18 = param_1;
  func_0x00010c0c02c0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1108f94d0,
                      &PTR___NSConcreteGlobalBlock_1108f94f0,&PTR___NSConcreteGlobalBlock_1108f9510)
  ;
  return;
}



/* Entry: 105f244b8; end: 105f24533;  */

void FUN_105f244b8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_2 == 0x93) && (*(long *)(*(long *)(param_1 + 0x20) + 0x28) == 0)) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x28) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f24534; end: 105f2453f;  */

void FUN_105f24534(void)

{
  return;
}



/* Entry: 105f24540; end: 105f24547; -[SCMapLifecycleLoggingInfoProvider openSource] */

undefined8 FUN_105f24540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f24548; end: 105f2454f; -[SCMapLifecycleLoggingInfoProvider openSourcePage] */

undefined8 FUN_105f24548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f24550; end: 105f24557; -[SCMapLifecycleLoggingInfoProvider openState] */

undefined8 FUN_105f24550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f24558; end: 105f2455f; -[SCMapLifecycleLoggingInfoProvider setOpenState:] */

void FUN_105f24558(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 105f24560; end: 105f24567; -[SCMapLifecycleLoggingInfoProvider openType] */

undefined8 FUN_105f24560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f24568; end: 105f2456f; -[SCMapLifecycleLoggingInfoProvider sourcePageContext] */

undefined8 FUN_105f24568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f24570; end: 105f245b7; -[SCMapLifecycleLoggingInfoProvider .cxx_destruct] */

void FUN_105f24570(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f245b8; end: 105f2462b; -[SCMapLoggerSessionUserLocationProvider initWithLocationProvider:] */

undefined1 * FUN_105f245b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee0c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f2462c; end: 105f24673; -[SCMapLoggerSessionUserLocationProvider userLocation] */

void FUN_105f2462c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f24674; end: 105f246af; -[SCMapLoggerSessionUserLocationProvider .cxx_destruct] */

void FUN_105f24674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f246b0; end: 105f249ab; -[SCMapLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f246b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105f249ac;
  puStack_90 = &UNK_1108f9560;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105f249ec;
  puStack_b8 = &UNK_1108f9590;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x105f24a2c;
  puStack_f0 = &UNK_1108f95c0;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_e8 = puVar2;
  puStack_e0 = puVar1;
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_140 = puVar5;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105f24a74;
  puStack_128 = &UNK_1108f95f0;
  _objc_copyWeak(auStack_110,auStack_80);
  puStack_120 = puVar2;
  puStack_118 = puVar1;
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_148,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c5fc0;
  _objc_alloc(PTR_PTR_1126c5fc0);
  func_0x00010c0283c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273a8cc));
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_110);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105f249ac; end: 105f24afb;  */

void FUN_105f249ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4c3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f24afc; end: 105f24c8b; -[SCMapLoggingServicesEntryPoint _mapLoggerSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f24afc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5fc8;
  _objc_alloc(PTR_PTR_1126c5fc8);
  lVar3 = param_1 + _DAT_11273a8d0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273a8d4;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff88e0(puVar2);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f24c8c; end: 105f24ccb;  */

void FUN_105f24c8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee6ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f24ccc; end: 105f24dc3; -[SCMapLoggingServicesEntryPoint _lifecycleLoggingInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f24ccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c5fd0;
  _objc_alloc(PTR_PTR_1126c5fd0);
  lVar7 = (long)_DAT_11273a8d8;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf0eaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273a8dc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c080680();
  func_0x00010bff50c0(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f24dc4; end: 105f24e3f; -[SCMapLoggingServicesEntryPoint _userLocationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f24dc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c5fd8;
  _objc_alloc(PTR_PTR_1126c5fd8);
  param_1 = param_1 + _DAT_11273a8e0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026e20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f24e40; end: 105f251e3; -[SCMapLoggingServicesEntryPoint _mapViewLoggerWithSessionProvider:lifecycleInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f24e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  
  puVar1 = PTR_PTR_1126c5fe0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273a8e4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11273a8e8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c252d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar10 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar11 = param_1 + _DAT_11273a8ec;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11273a8d4;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11273a8f0;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11273a8f4;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11273a8f8;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11273a8dc;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11273a8fc;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273a900;
  _objc_loadWeakRetained();
  lVar30 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0077e0(puVar1,param_2,lVar4,lVar8,uVar9,uVar10,0x93,lVar13,lVar16,lVar18,lVar21,
                      lVar25,lVar27,lVar29,lVar30);
  _objc_release(lVar30);
  _objc_release(param_1);
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
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f251e4; end: 105f2524f; -[SCMapLoggingServicesEntryPoint _tapToPlayLoggerWithSessionInfoProvider:lifecycleLoggingProvider:] */

void FUN_105f251e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5fe8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c044fc0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f25250; end: 105f252a3; -[SCMapLoggingServicesEntryPoint _createMapInitialViewportGrapheneMetricReporter] */

void FUN_105f25250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5ff0;
  _objc_alloc(PTR_PTR_1126c5ff0);
  puVar2 = PTR_PTR_1126c5ff8;
  _objc_opt_new(PTR_PTR_1126c5ff8);
  func_0x00010c028380(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f252a4; end: 105f25387; -[SCMapLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f252a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273a8cc,0);
  _objc_destroyWeak(param_1 + _DAT_11273a908);
  _objc_destroyWeak(param_1 + _DAT_11273a900);
  _objc_destroyWeak(param_1 + _DAT_11273a8f4);
  _objc_destroyWeak(param_1 + _DAT_11273a8dc);
  _objc_destroyWeak(param_1 + _DAT_11273a8ec);
  _objc_destroyWeak(param_1 + _DAT_11273a8e8);
  _objc_destroyWeak(param_1 + _DAT_11273a8e4);
  _objc_destroyWeak(param_1 + _DAT_11273a8e0);
  _objc_destroyWeak(param_1 + _DAT_11273a8f0);
  _objc_destroyWeak(param_1 + _DAT_11273a8d0);
  _objc_destroyWeak(param_1 + _DAT_11273a8d4);
  _objc_destroyWeak(param_1 + _DAT_11273a8fc);
  _objc_destroyWeak(param_1 + _DAT_11273a8f8);
  _objc_destroyWeak(param_1 + _DAT_11273a8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a904);
  return;
}



/* Entry: 105f25388; end: 105f2541b; -[SCMapTapToPlayLogger initWithSession:mapLifecycleInfoProvider:] */

undefined1 *
FUN_105f25388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee0d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f2541c; end: 105f2559f; -[SCMapTapToPlayLogger didAttemptTTPAnywhereAtCoordinate:zoomLevel:result:] */

void FUN_105f2541c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_4 + 8;
  uVar6 = param_1;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c292d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c292ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  func_0x000108d312a8();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c6000;
  lVar2 = param_4 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf86ec0(param_1,param_2,puVar1,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_4 = param_4 + 8;
  _objc_loadWeakRetained(param_4);
  lVar2 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2695e0(param_1,param_2,param_3,uVar6,uVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f255a0; end: 105f258a7; -[SCMapTapToPlayLogger didAttemptPlayMapPoiWithIdentifier:coordinate:zoomLevel:result:initializationTimeTaken:] */

void FUN_105f255a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

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
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar13 = param_1;
  _objc_retain(param_7);
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c292d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c292ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  func_0x000108d312a8();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c6000;
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bf86ec0(param_1,param_2,puVar1,param_6,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269620(param_1,param_2,param_3,uVar13,uVar14);
  _objc_release(param_7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((param_8 == 3) && (0.0 <= param_4)) {
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf9a1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e9800();
    lVar4 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar4);
    lVar9 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0e9820();
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_5 + 0x10;
    _objc_loadWeakRetained(param_5);
    lVar11 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0e98a0();
    func_0x00010c0ba180(lVar6,param_6,lVar8,lVar10,(long)(param_4 * 1000.0),lVar12);
    _objc_release(lVar11);
    _objc_release(param_5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105f258a8; end: 105f258cf; -[SCMapTapToPlayLogger .cxx_destruct] */

void FUN_105f258a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f258d0; end: 105f25d67; -[SCMapViewLogger initWithCurrentUserId:mapGestureStatsProvider:lifecycleInfoProvider:mapLoggerSession:mapPageViewName:mapPeopleProvider:mapPersonLocationsProvider:deviceLocationPermissionsManager:mapStatusService:mapViewport:currentPageTracker:sharingPreferencesProvider:circumstanceEngine:] */

undefined8 *
FUN_105f258d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126ee0d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x12,param_6);
    puVar1[2] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[5];
    func_0x00010c09fa60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f25d68; end: 105f25d93;  */

void FUN_105f25d68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f25d94; end: 105f25d9b; -[SCMapViewLogger updateWithOpenState:] */

void FUN_105f25d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setOpenState__112652e68);
  return;
}



/* Entry: 105f25d9c; end: 105f25f1f; -[SCMapViewLogger viewDidAppearWithBitmojiLayerInfoProvider:poiIdsInViewport:] */

void FUN_105f25d9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bed8a20(param_1);
  func_0x00010bedd780(param_1,param_2,param_4);
  _objc_release(param_4);
  uVar4 = param_3;
  func_0x00010bfe3440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe33e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf3e980(param_3);
  uVar7 = param_3;
  func_0x00010bf3e960(param_3);
  uVar1 = param_3;
  func_0x00010c276620(param_3);
  uVar2 = param_3;
  func_0x00010c276600(param_3);
  uVar3 = param_3;
  func_0x00010c2765e0();
  _objc_release(param_3);
  func_0x00010bed9440(param_1,param_2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar2,uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bee0b40(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9b20(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9800(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2479a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69f80(param_1,param_2,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105f25f20; end: 105f25f7f; -[SCMapViewLogger onboardingViewDidAppearWithOpenType:source:] */

void FUN_105f25f20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba920();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f25f80; end: 105f260eb; -[SCMapViewLogger viewDidDisappearWithCloseType:bitmojiLayerInfoProvider:trayType:trayUnseenItemCount:poiIdsInViewport:isHeatmapToggleOn:loadedMapStyle:traitCollection:] */

void FUN_105f25f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010bed8a20(param_1);
  func_0x00010bedd780(param_1,param_2,param_7);
  _objc_release(param_7);
  uVar1 = param_4;
  func_0x00010bfe3440(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe33e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf3e980(param_4);
  uVar4 = param_4;
  func_0x00010bf3e960(param_4);
  uVar5 = param_4;
  func_0x00010c276620(param_4);
  uVar6 = param_4;
  func_0x00010c276600(param_4);
  uVar7 = param_4;
  func_0x00010c2765e0();
  _objc_release(param_4);
  func_0x00010bed9440(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be69fa0(param_1,param_2,param_3,param_5,param_6,param_8,param_9,param_10);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 105f260ec; end: 105f26263; -[SCMapViewLogger applicationDidBecomeActiveWithBitmojiLayerInfoProvider:poiIdsInViewport:] */

void FUN_105f260ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bed8a20(param_1);
  func_0x00010bedd780(param_1,param_2,param_4);
  _objc_release(param_4);
  uVar8 = param_3;
  func_0x00010bfe3440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bfe33e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3e980(param_3);
  uVar3 = param_3;
  func_0x00010bf3e960(param_3);
  uVar4 = param_3;
  func_0x00010c276620(param_3);
  uVar5 = param_3;
  func_0x00010c276600(param_3);
  uVar6 = param_3;
  func_0x00010c2765e0();
  _objc_release(param_3);
  func_0x00010bed9440(param_1,param_2,uVar8,uVar9,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar9);
  _objc_release(uVar8);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c0e9800();
  lVar1 = 8;
  if (lVar7 != -1) {
    lVar1 = lVar7;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9820(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2479a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69f80(param_1,param_2,2,lVar1,uVar8,uVar9);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105f26264; end: 105f263cb; -[SCMapViewLogger applicationDidEnterBackgroundWithBitmojiLayerInfoProvider:trayType:trayUnseenItemCount:poiIdsInViewport:isHeatmapToggleOn:loadedMapStyle:traitCollection:] */

void FUN_105f26264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bed8a20(param_1);
  func_0x00010bedd780(param_1,param_2,param_6);
  _objc_release(param_6);
  uVar1 = param_3;
  func_0x00010bfe3440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe33e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf3e980(param_3);
  uVar4 = param_3;
  func_0x00010bf3e960(param_3);
  uVar5 = param_3;
  func_0x00010c276620(param_3);
  uVar6 = param_3;
  func_0x00010c276600(param_3);
  uVar7 = param_3;
  func_0x00010c2765e0();
  _objc_release(param_3);
  func_0x00010bed9440(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be69fa0(param_1,param_2,2,param_4,param_5,param_7,param_8,param_9);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 105f263cc; end: 105f264e7; -[SCMapViewLogger regionDidChangeWithBitmojiLayerInfoProvider:poiIdsInViewport:] */

void FUN_105f263cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfeb6e0();
  if ((int)uVar1 != 0) {
    func_0x00010bed8a20(param_1);
    func_0x00010bedd780(param_1,param_2,param_4);
    uVar1 = param_3;
    func_0x00010bfe3440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfe33e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf3e980(param_3);
    uVar4 = param_3;
    func_0x00010bf3e960(param_3);
    uVar5 = param_3;
    func_0x00010c276620(param_3);
    uVar6 = param_3;
    func_0x00010c276600(param_3);
    uVar7 = param_3;
    func_0x00010c2765e0();
    func_0x00010bed9440(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f264e8; end: 105f2662f; -[SCMapViewLogger viewedUnreadChatOrSnapCalloutOnPersonLocation:highlighted:zoomLevel:source:actionType:calloutUserID:isChat:] */

void FUN_105f264e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e31e98;
  if (param_10 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e31eb8;
  }
  uVar9 = param_1;
  uStack_80 = param_5;
  _objc_retain(ppuVar7);
  _objc_retain(param_9);
  _objc_retain(param_5);
  func_0x00010bf0a140(puVar1,param_4,&uStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_5);
  _objc_release(param_5);
  puVar4 = puVar1;
  ppuVar5 = ppuVar7;
  uVar6 = param_9;
  func_0x00010bee9ea0(uVar9,param_2,param_1,param_3,param_4,puVar1,param_6,param_7,param_8,ppuVar7,
                      param_9,0);
  _objc_release(ppuVar7);
  _objc_release(param_9);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(ppuVar5);
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuVar7 = ppuVar5;
    func_0x00010beee240();
    if (ppuVar7 == (undefined **)0x2) {
      ppuVar8 = ppuVar5;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar8;
      func_0x00010c0720c0();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e31e98;
      if ((int)ppuVar2 == 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110e31eb8;
      }
      _objc_retain(ppuVar7);
      _objc_release(ppuVar8);
    }
    else {
      ppuVar7 = (undefined **)0x0;
    }
    ppuVar8 = ppuVar5;
    func_0x00010c2923e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar4;
  func_0x00010c0fa5e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(puVar4);
  func_0x00010bee9ea0(puVar1,param_4,puVar3,param_6,param_7,param_8,ppuVar7,ppuVar8,uVar6);
  _objc_release(puVar3);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105f26630; end: 105f26793; -[SCMapViewLogger viewedPersonCluster:highlighted:zoomLevel:source:actionType:callout:footerActionId:] */

void FUN_105f26630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  if (param_7 == 0) {
    lVar4 = 0;
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = param_7;
    func_0x00010beee240();
    if (lVar4 == 2) {
      lVar4 = param_7;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c0720c0();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e31e98;
      if ((int)lVar1 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e31eb8;
      }
      _objc_retain(ppuVar3);
      _objc_release(lVar4);
    }
    else {
      ppuVar3 = (undefined **)0x0;
    }
    lVar4 = param_7;
    func_0x00010c2923e0(param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_3;
  func_0x00010c0fa5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_3);
  func_0x00010bee9ea0(param_1,param_2,uVar2,param_4,param_5,param_6,ppuVar3,lVar4,param_8);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(ppuVar3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f26794; end: 105f268df; -[SCMapViewLogger viewedPersonLocations:atCoordinate:highlighted:zoomLevel:source:actionType:callout:] */

void FUN_105f26794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_10);
  if (param_10 == 0) {
    ppuVar2 = (undefined **)0x0;
    lVar3 = 0;
  }
  else {
    lVar3 = param_10;
    func_0x00010beee240();
    if (lVar3 == 2) {
      lVar3 = param_10;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010c0720c0();
      ppuVar2 = &PTR____CFConstantStringClassReference_110e31e98;
      if ((int)lVar1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e31eb8;
      }
      _objc_retain(ppuVar2);
      _objc_release(lVar3);
    }
    else {
      ppuVar2 = (undefined **)0x0;
    }
    lVar3 = param_10;
    func_0x00010c2923e0(param_10);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bee9ea0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      ppuVar2,lVar3,0);
  _objc_release(lVar3);
  _objc_release(ppuVar2);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105f268e0; end: 105f26edb; -[SCMapViewLogger _viewedPersonLocations:atCoordinate:highlighted:zoomLevel:source:actionType:calloutExtra:calloutUserID:footerActionId:] */

/* WARNING: Possible PIC construction at 0x000105f26a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f26b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f26b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f26c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f26b78) */
/* WARNING: Removing unreachable block (ram,0x000105f26bec) */
/* WARNING: Removing unreachable block (ram,0x000105f26eac) */
/* WARNING: Removing unreachable block (ram,0x000105f26c0c) */
/* WARNING: Removing unreachable block (ram,0x000105f26bc4) */
/* WARNING: Removing unreachable block (ram,0x000105f26c44) */
/* WARNING: Removing unreachable block (ram,0x000105f26c48) */
/* WARNING: Removing unreachable block (ram,0x000105f26b54) */
/* WARNING: Removing unreachable block (ram,0x000105f26b68) */
/* WARNING: Removing unreachable block (ram,0x000105f26a28) */
/* WARNING: Removing unreachable block (ram,0x000105f26a4c) */
/* WARNING: Removing unreachable block (ram,0x000105f26a6c) */
/* WARNING: Removing unreachable block (ram,0x000105f26a84) */
/* WARNING: Removing unreachable block (ram,0x000105f26a8c) */
/* WARNING: Removing unreachable block (ram,0x000105f26a98) */
/* WARNING: Removing unreachable block (ram,0x000105f26ab4) */
/* WARNING: Removing unreachable block (ram,0x000105f26c58) */
/* WARNING: Removing unreachable block (ram,0x000105f26cb8) */
/* WARNING: Removing unreachable block (ram,0x000105f26ca0) */
/* WARNING: Removing unreachable block (ram,0x000105f26ccc) */
/* WARNING: Removing unreachable block (ram,0x000105f26cfc) */
/* WARNING: Removing unreachable block (ram,0x000105f26a10) */

void FUN_105f268e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_x6;
  long in_x7;
  long lVar8;
  undefined *puStack_198;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  uVar1 = param_4;
  func_0x00010c15fac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c292d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c292ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  func_0x000108d312a8();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retain(param_6);
  puVar4 = param_6;
  func_0x00010bf52a60();
  if (puVar4 == (undefined *)0x0) {
    _objc_release(param_6);
    puStack_198 = param_6;
    func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_1108f9680);
    puVar4 = puStack_198;
    func_0x0001006372a4();
    puVar5 = param_6;
    func_0x00010bf529e0();
    puVar6 = puVar5;
    func_0x000105f24680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x1) {
      func_0x00010bfb1920(param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (in_x7 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_198);
        puStack_198 = puVar5;
      }
      uVar1 = param_4;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf9a1e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      uVar3 = param_4;
      func_0x00010be199c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      uVar7 = param_4;
      func_0x00010bdd4060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010be19960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c0ba860(param_1,param_3,uVar2);
      _objc_release(param_4);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puStack_198);
      _objc_release(in_x7);
      _objc_release(in_x6);
      _objc_release(param_6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f26edc; end: 105f26ee3;  */

void FUN_105f26edc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105f26ee4; end: 105f26f47;  */

undefined8 FUN_105f26ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bdd4060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105f26f48; end: 105f2709f; -[SCMapViewLogger didTapOnCompassButton] */

void FUN_105f26f48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010bf34640(*(undefined8 *)(param_3 + 0x38));
  lVar1 = param_3;
  func_0x00010c15fac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010c021a60(param_1,param_2);
  func_0x00010bf86f80(lVar3,param_4,puVar4);
  lVar1 = param_3;
  func_0x00010be19960(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c15fac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be199c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf529e0();
  lVar7 = lVar1;
  func_0x00010bf529e0(lVar1);
  func_0x00010c0ba660(param_1,lVar5,param_4,lVar6,lVar7);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105f270a0; end: 105f27127; -[SCMapViewLogger userDidTakeScreenshotWithAction:] */

void FUN_105f270a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be19960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  func_0x00010c0b9b80(uVar2,param_2,param_3,uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f27128; end: 105f271b3; -[SCMapViewLogger logNotificationAction:notificationType:] */

void FUN_105f27128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dcba0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f271b4; end: 105f271db; -[SCMapViewLogger mapZoomEventObservable] */

void FUN_105f271b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f271dc; end: 105f271f3; -[SCMapViewLogger logMapZoomForMapInitialViewportWithOpenType:initialViewportLogicType:] */

void FUN_105f271dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMapZoomWithMapZoomType_openT_112573020,4,param_3,param_4,0,0);
  return;
}



/* Entry: 105f271f4; end: 105f27373; -[SCMapViewLogger _logMapZoomWithMapZoomType:openType:initialViewportLogicType:closeType:action:] */

void FUN_105f271f4(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (*(long *)(param_2 + 0x38) != 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    if (param_4 - 3U < 2) {
      uVar4 = *(undefined8 *)(param_2 + 0x80);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_3,puVar1);
      _objc_release(puVar1);
    }
    lVar2 = param_2;
    func_0x00010c15fac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9a1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200(*(undefined8 *)(param_2 + 0x38));
    func_0x00010c0baaa0(lVar3,param_3,puVar1,param_4,param_5,param_6,param_7,param_8);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar1);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105f27374; end: 105f273eb; -[SCMapViewLogger _logMapZoomForMapCloseWithCloseType:lastZoomGesture:] */

void FUN_105f27374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072433d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f2468c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55a00(param_1,param_2,3,0,0,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f273ec; end: 105f273ff; -[SCMapViewLogger _logMapZoomForMapZoomType:] */

void FUN_105f273ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logMapZoomWithMapZoomType_openT_112573020,param_3,0,0,0,0);
  return;
}



/* Entry: 105f27400; end: 105f274c7; -[SCMapViewLogger mapDidBecomeInteractiveLatencyMs:] */

void FUN_105f27400(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9800(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0e98a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0b9a40(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be559f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logMapZoomForMapZoomType__112573018,0);
  return;
}



/* Entry: 105f274c8; end: 105f27583; -[SCMapViewLogger mapLoadedFirstFriendBitmojiLatencyMs:locationRequestedToFetchedLatencyMs:locationFetchedToBitmojiRenderLatencyMs:] */

void FUN_105f274c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9800(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e98a0(uVar5);
  func_0x00010c0b90e0(lVar2,param_2,uVar3,uVar4,uVar5,param_3,param_5,param_4);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f27584; end: 105f2776b; -[SCMapViewLogger didFinishFirstMapLoadWithStoryThumbnailCount:heatPointCount:] */

void FUN_105f27584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  lVar1 = param_1;
  func_0x00010be19960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        lVar10 = *(long *)(param_1 + 0x18);
        func_0x00010c2923e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b96e0(lVar10,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar10;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        _objc_release(lVar10);
        _objc_release(uVar3);
        if (lVar5 != 0) {
          lVar9 = lVar9 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  lVar2 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf9a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf200(*(undefined8 *)(param_1 + 0x38));
  lVar8 = lVar1;
  func_0x00010bf529e0(lVar1);
  func_0x00010c0b8ea0(uVar6,lVar7,param_2,lVar8,lVar9,param_3,param_4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  func_0x00010be559e0(param_1,param_2,2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  return;
}



/* Entry: 105f2776c; end: 105f27793; -[SCMapViewLogger mapViewVisibilityObservable] */

void FUN_105f2776c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f27794; end: 105f27afb; -[SCMapViewLogger _onMapEnteredWithOpenType:source:sourcePage:sourcePageContext:] */

void FUN_105f27794(ulong param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined **ppuStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bfeb6e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1aba20(param_1);
    uVar1 = param_1;
    func_0x00010be19960();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    lVar8 = 0;
    lVar7 = 0;
    if (uVar2 != 0) {
      lVar9 = *plStack_130;
      do {
        uVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(uVar1);
          }
          uVar3 = param_1;
          func_0x00010bec2800();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c08fa60();
          if (uVar4 != 0) {
            uVar4 = *(ulong *)(param_1 + 0x30);
            func_0x00010c083580();
            lVar8 = lVar8 + (uVar4 & 0xffffffff);
            lVar7 = lVar7 + (ulong)((uint)uVar4 ^ 1);
          }
          _objc_release(uVar3);
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
        uVar2 = uVar1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(uVar1);
    uVar2 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf9a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf529e0();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_initWeak(auStack_148,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_105f27afc;
    puStack_1a0 = &UNK_1108f96a0;
    _objc_retain(uVar10);
    uStack_198 = uVar10;
    ppuStack_170 = param_4;
    _objc_retain(param_5);
    lStack_190 = param_5;
    _objc_retain(param_6);
    uStack_188 = param_6;
    uStack_168 = param_3;
    uStack_160 = uVar2;
    lStack_158 = lVar7;
    lStack_150 = lVar8;
    _objc_retain(uVar6);
    param_4 = &puStack_1b8;
    uStack_180 = uVar6;
    _objc_copyWeak(auStack_178);
    func_0x00010bfa8140(uVar5);
    _objc_release(uVar5);
    func_0x00010c138160(*(undefined8 *)(param_1 + 0x70));
    func_0x00010bec1940(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78));
    _objc_destroyWeak(auStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(lStack_190);
    _objc_release(uStack_198);
    _objc_destroyWeak(auStack_148);
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 8);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  func_0x000106c1af90();
  func_0x00010c0ba940(uVar6);
  param_5 = param_5 + 0x40;
  _objc_loadWeakRetained(param_5);
  func_0x00010be559e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f27afc; end: 105f27bb3;  */

void FUN_105f27afc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000106c1af90();
  func_0x00010c0ba940(uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be559e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f27bb4; end: 105f28127; -[SCMapViewLogger _onMapExitedWithCloseType:trayType:trayUnseenItemCount:isHeatmapToggleOn:loadedMapStyleName:traitCollection:] */

void FUN_105f27bb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
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
  ulong uVar13;
  long in_x6;
  undefined8 in_x7;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  lVar1 = param_1;
  func_0x00010bfeb6e0();
  if ((int)lVar1 != 0) {
    func_0x00010c1aba20(param_1);
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x70));
    func_0x00010bec3940(param_1);
    lVar1 = param_1;
    func_0x00010c15fac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf9a1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cf20();
    func_0x00010bf88400();
    func_0x00010c0b4da0(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c0fc200(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c0f3620(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c2bf320(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c0e8200();
    func_0x00010c27dce0();
    func_0x00010c26efa0();
    func_0x00010c141960();
    func_0x00010c0a76c0(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar3 = param_1;
    func_0x00010be19960();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0;
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = param_1;
        func_0x00010bec2800();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        if (lVar5 != 0) {
          func_0x00010c083580();
        }
        _objc_release(lVar4);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    func_0x00010c292b20();
    lVar1 = param_1;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf9a1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820(*(undefined8 *)(param_1 + 0x70));
    lVar15 = param_1;
    func_0x00010be199c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar4 = param_1;
    func_0x00010bdd4060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    func_0x00010c0c2300();
    lVar5 = param_1;
    func_0x00010c157780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar6 = param_1;
    func_0x00010c1574c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar7 = param_1;
    func_0x00010bfe3620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar8 = param_1;
    func_0x00010bfe33c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar9 = param_1;
    func_0x00010bfe3600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf3e980();
    func_0x00010bf3e960();
    func_0x00010bfb8f80();
    func_0x00010bfb8fa0();
    func_0x00010bfb8f60();
    lVar10 = param_1;
    func_0x00010c157f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar11 = param_1;
    func_0x00010c157b60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba640(uVar16,lVar2);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar15);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c15fac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139640();
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78));
    func_0x00010c08ac60(*(undefined8 *)(param_1 + 0x58));
    func_0x00010be559a0(param_1);
    func_0x00010c1386a0(*(undefined8 *)(param_1 + 0x58));
    _objc_release(lVar3);
    lVar2 = param_3;
  }
  _objc_release(in_x7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    uVar13 = *(ulong *)(in_x6 + 0x60);
    func_0x00010b09ce5c();
    if ((lVar2 != 2) && ((uVar13 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(in_x6 + 0x40),PTR_s_startPage__112671938,
                 *(undefined8 *)(in_x6 + 0x10));
      return;
    }
    return;
  }
  return;
}



/* Entry: 105f28128; end: 105f2816f; -[SCMapViewLogger _startSnapchatSessionLoggingWithOpenType:] */

void FUN_105f28128(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010b09ce5c();
  if ((param_3 != 2) && ((uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_startPage__112671938,
               *(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 105f28170; end: 105f28173; -[SCMapViewLogger _stopSnapchatSessionLoggingWithCloseType:] */

void FUN_105f28170(void)

{
  return;
}



/* Entry: 105f28174; end: 105f2835f; -[SCMapViewLogger _updateFriendsInViewportStatistics] */

void FUN_105f28174(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be19960();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = auStack_e8;
  lVar11 = 0x10;
  uVar12 = uVar1;
  func_0x00010bf52a60();
  if (uVar12 != 0) {
    lVar15 = *plStack_120;
    do {
      uVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar1);
        }
        uVar13 = *(undefined8 *)(lStack_128 + uVar16 * 8);
        uVar2 = param_1;
        func_0x00010c157780(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar13;
        func_0x00010c2923e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar2,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bf197c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar13;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bf4b900(uVar4,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar4);
        if ((int)uVar6 != 0) {
          uVar2 = param_1;
          func_0x00010c1574c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar2,param_2,uVar13);
          _objc_release(uVar13);
          _objc_release(uVar2);
        }
        uVar16 = uVar16 + 1;
      } while (uVar12 != uVar16);
      puVar10 = auStack_e8;
      lVar11 = 0x10;
      uVar12 = uVar1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar12 != 0);
  }
  uVar12 = *(ulong *)(param_1 + 0xa8);
  uVar16 = uVar1;
  func_0x00010bf529e0();
  if (uVar12 <= uVar16) {
    uVar12 = uVar16;
  }
  *(ulong *)(param_1 + 0xa8) = uVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bf52a60(puVar7,param_2,&uStack_2e0,auStack_220,0x10);
  if (puVar5 != (undefined1 *)0x0) {
    lVar15 = *plStack_2d0;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_2d0 != lVar15) {
          _objc_enumerationMutation(puVar7);
        }
        uVar12 = uVar1;
        func_0x00010bfe3620(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar12);
        uVar6 = *(undefined8 *)(uVar1 + 0x18);
        func_0x00010bf197c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010bf4b900();
        _objc_release(uVar6);
        if ((int)uVar3 != 0) {
          uVar12 = uVar1;
          func_0x00010bfe33c0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(uVar12);
        }
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar5 = (undefined1 *)puVar7;
      func_0x00010bf52a60(puVar7,param_2,&uStack_2e0,auStack_220,0x10);
    } while (puVar5 != (undefined1 *)0x0);
  }
  uVar3 = uStack_130;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  _objc_retain(puVar10);
  puVar9 = &uStack_320;
  puVar5 = puVar10;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    lVar15 = *plStack_310;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_310 != lVar15) {
          _objc_enumerationMutation(puVar10);
        }
        uVar12 = uVar1;
        func_0x00010bfe3600(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar12);
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar9 = &uStack_320;
      puVar5 = puVar10;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  *(long *)(uVar1 + 0xf8) = *(long *)(uVar1 + 0xf8) + lVar11;
  *(long *)(uVar1 + 0x100) = *(long *)(uVar1 + 0x100) + in_x5;
  *(undefined8 *)(uVar1 + 0xe0) = in_x6;
  *(undefined8 *)(uVar1 + 0xe8) = in_x7;
  *(undefined8 *)(uVar1 + 0xf0) = uVar3;
  _objc_release(puVar10);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar8 = puVar9;
  func_0x00010bf529e0();
  if (puVar8 != (undefined8 *)0x0) {
    func_0x00010c157b60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105f28360; end: 105f285c7; -[SCMapViewLogger _updateHighlightedFriendsStatisticsWithHighlightedFriendUserIds:highlightedClusterIds:clustersInHighlightZoneCount:clustersHighlightedCount:totalFriendStoryUniqueUserIdCount:totalFriendStoryUniqueThumbnailCount:totalFriendStoryTapCount:] */

void FUN_105f28360(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_1;
        func_0x00010bfe3620(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(lVar2);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bf197c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf4b900();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          lVar2 = param_1;
          func_0x00010bfe33c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(lVar2);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_4);
  puVar6 = &uStack_1f0;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_1e0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1e0 != lVar7) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = param_1;
        func_0x00010bfe3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar6 = &uStack_1f0;
      lVar1 = param_4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + param_5;
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + param_6;
  *(undefined8 *)(param_1 + 0xe0) = param_7;
  *(undefined8 *)(param_1 + 0xe8) = param_8;
  *(undefined8 *)(param_1 + 0xf0) = param_9;
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  if (puVar5 != (undefined8 *)0x0) {
    func_0x00010c157b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105f285c8; end: 105f28623; -[SCMapViewLogger _updatePoisInViewportStatisticsWithPoisInViewport:] */

void FUN_105f285c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c157b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f28624; end: 105f2878b; -[SCMapViewLogger _updateStatusesInViewportStatistics] */

void FUN_105f28624(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  func_0x00010be19960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        lVar5 = param_1;
        func_0x00010bec2800();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        if (lVar6 != 0) {
          lVar6 = param_1;
          func_0x00010c157f20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(lVar6);
          uVar10 = uVar10 + 1;
        }
        _objc_release(lVar5);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  uVar1 = *(ulong *)(param_1 + 0xc0);
  if (*(ulong *)(param_1 + 0xc0) <= uVar10) {
    uVar1 = uVar10;
  }
  *(ulong *)(param_1 + 0xc0) = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126c6000;
    func_0x00010c0fa620(PTR_PTR_1126c6000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x0001006372a4();
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  return;
}



/* Entry: 105f2878c; end: 105f28863; -[SCMapViewLogger _friendsInViewport] */

void FUN_105f2878c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6000;
  func_0x00010c0fa620(PTR_PTR_1126c6000,param_2,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001006372a4();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f28864; end: 105f2892f; -[SCMapViewLogger _friendsOnMap] */

void FUN_105f28864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf00660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f28930; end: 105f289ef; -[SCMapViewLogger _bestFriendsOnMap] */

void FUN_105f28930(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf197c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f289f0; end: 105f28b3f; -[SCMapViewLogger _currentUserInViewport] */

undefined8 FUN_105f289f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c6000;
  func_0x00010c0fa620(PTR_PTR_1126c6000,param_2,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        uVar3 = *(ulong *)(lStack_118 + (long)puVar9 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = *(undefined8 **)(param_1 + 8);
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          uVar7 = 1;
          goto LAB_105f28af4;
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  uVar7 = 0;
LAB_105f28af4:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar1 + 0x30);
  func_0x00010c2923e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ab60(uVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  uVar6 = uVar7;
  func_0x00010bfe5ec0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return uVar6;
}



/* Entry: 105f28b40; end: 105f28bcf; -[SCMapViewLogger _statusIdForPersonLocation:] */

void FUN_105f28b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ab60(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f28bd0; end: 105f28be7; -[SCMapViewLogger session] */

void FUN_105f28bd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f28be8; end: 105f28bf3; -[SCMapViewLogger setSession:] */

void FUN_105f28be8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 105f28bf4; end: 105f28bfb; -[SCMapViewLogger inMap] */

undefined1 FUN_105f28bf4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}


