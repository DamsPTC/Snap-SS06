/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104eda240; end: 104eda2fb;  */

void FUN_104eda240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1ef0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de340(param_2);
  _objc_release(param_2);
  func_0x00010c036560(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eda2fc; end: 104eda3ef; -[SCMapPlaceDiscoveryTrayDataProvider _constructUpdatedDiscoveryPlaces:previewRankedSnapsDictionary:placePivotsDictionary:currentPivot:] */

void FUN_104eda2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104eda3f0;
  puStack_68 = &UNK_110859530;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104eda3f0; end: 104eda907;  */

void FUN_104eda3f0(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar14 = *(ulong *)(param_2 + 0x20);
  puVar1 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar15 = *(ulong *)(param_2 + 0x28);
  puVar1 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010c0d3c80();
  _objc_release(uVar15);
  _objc_release(puVar1);
  if ((uVar14 == 0) && (uVar15 = uVar2, func_0x00010bf529e0(), uVar15 == 0)) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c0fc8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar15 = uVar2;
      func_0x00010bf4b900();
      _objc_release(uVar3);
      if ((uVar15 & 1) == 0) {
        func_0x00010c1dc600(*(undefined8 *)(param_2 + 0x30));
        func_0x00010c066b00(uVar2);
      }
    }
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010be7fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c0de340();
    param_1 = (double)uVar15;
    func_0x00010c1cfec0(uVar4);
    uVar15 = uVar14;
    func_0x00010c26e500();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010c08fa60();
    _objc_release(uVar15);
    if (uVar5 != 0) {
      puVar1 = PTR_PTR_1126b1ef8;
      _objc_alloc(PTR_PTR_1126b1ef8);
      uVar15 = uVar14;
      func_0x00010c26e500(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0520c0(puVar1);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar15);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e71a0(uVar4);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126b1e10;
    _objc_alloc();
    puVar6 = param_3;
    func_0x00010c0fd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0(param_3);
    dVar16 = param_1;
    func_0x00010c09abe0(param_3);
    puVar7 = param_3;
    func_0x00010bf20ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c09e640(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c09e480(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c09e400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010bfe5be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072ac0();
    puVar12 = param_3;
    func_0x00010c119ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036460(param_1,dVar16);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010c112bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2920(puVar1);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010c0e9e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d52c0(puVar1);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010c25b5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dd00(puVar1);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010c0870c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7020(puVar1);
    _objc_release(puVar6);
    uVar15 = uVar2;
    func_0x00010bf529e0();
    if (uVar15 == 0) {
      puVar6 = param_3;
      func_0x00010c0fd340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc620(puVar1);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c1dc620(puVar1);
    }
    puVar7 = param_3;
    func_0x00010bfa1320();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c19a7a0(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b1e30;
    _objc_retain(puVar6);
    _objc_alloc(puVar1);
    puVar7 = puVar6;
    func_0x00010c259320(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df1e0();
    puVar8 = puVar6;
    func_0x00010c259320(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09a20();
    puVar9 = puVar6;
    func_0x00010c259320(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar9;
    func_0x00010c11f900(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0305c0(param_1,puVar1);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eda908; end: 104eda9fb; -[SCMapPlaceDiscoveryTrayDataProvider _prevPlaceStoryCarouselDataForPlace:] */

void FUN_104eda908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1e30;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df1e0();
  uVar3 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf09a20();
  uVar5 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar6 = uVar5;
  func_0x00010c11f900(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0305c0(param_1,puVar1,param_3,uVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eda9fc; end: 104edaa67; -[SCMapPlaceDiscoveryTrayDataProvider .cxx_destruct] */

void FUN_104eda9fc(long param_1)

{
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



/* Entry: 104edaa68; end: 104edaadb; -[SCMapPlaceDiscoveryGrapheneLogger initWithGrapheneMetric:] */

undefined1 * FUN_104edaa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4de8;
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



/* Entry: 104edaadc; end: 104edab83; -[SCMapPlaceDiscoveryGrapheneLogger logTotalLoadLatencyWithStartTimestamp:pivotName:placesCount:] */

void FUN_104edaadc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar3 = param_1;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = param_2;
  func_0x00010bde6e40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_104edcb24(dVar3 - param_1,*(undefined8 *)(param_2 + 8),lVar2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104edab84; end: 104edabff; -[SCMapPlaceDiscoveryGrapheneLogger logPlaceDiscoveryLatencyWithStartTimestamp:] */

void FUN_104edab84(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar3 = param_1;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(long **)(lVar2 + 8) + 0x18))
                (*(long **)(lVar2 + 8),&UNK_1108595e8,&uStack_40,(long)((dVar3 - param_1) * 1000.0))
      ;
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 104edac00; end: 104edac7b; -[SCMapPlaceDiscoveryGrapheneLogger logPlacePivotsLatencyWithStartTimestamp:] */

void FUN_104edac00(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar3 = param_1;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(long **)(lVar2 + 8) + 0x18))
                (*(long **)(lVar2 + 8),&UNK_110859638,&uStack_40,(long)((dVar3 - param_1) * 1000.0))
      ;
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 104edac7c; end: 104edacf7; -[SCMapPlaceDiscoveryGrapheneLogger logOrbisPreviewLatencyWithStartTimestamp:] */

void FUN_104edac7c(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar3 = param_1;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(long **)(lVar2 + 8) + 0x18))
                (*(long **)(lVar2 + 8),&UNK_110859688,&uStack_40,(long)((dVar3 - param_1) * 1000.0))
      ;
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 104edacf8; end: 104edad33; -[SCMapPlaceDiscoveryGrapheneLogger _constructPlacesCountStringForPlacesCount:] */

undefined ** FUN_104edacf8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9fd8;
  if (199 < param_3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db9ff8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9fb8;
  if (99 < param_3) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9f98;
  if (0x31 < (long)param_3) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 104edad34; end: 104edad3f; -[SCMapPlaceDiscoveryGrapheneLogger .cxx_destruct] */

void FUN_104edad34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104edad40; end: 104edaf67; -[SCMapPlaceDiscoverySessionIdsProvider initWithMapSession:blizzardLogger:openSource:sourceSessionId:parentTraySessionId:footerActionId:] */

undefined1 *
FUN_104edad40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e4df0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = uVar3;
    _objc_release(uVar6);
    uVar3 = param_8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = uVar3;
    _objc_release(uVar6);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (*(undefined ***)((long)puVar2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)((long)puVar2 + 0x18);
    }
    _objc_retain(ppuVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x18) = ppuVar1;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined **)((long)puVar2 + 0x38) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined **)((long)puVar2 + 0x40) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined **)((long)puVar2 + 0x48) = puVar4;
    _objc_release(uVar3);
    puVar5 = (undefined1 *)puVar2;
    func_0x00010bdf32a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined1 **)((long)puVar2 + 0x58) = puVar5;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar2 + 0x38));
    func_0x00010beae040(puVar2);
    func_0x00010beae8a0(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104edaf68; end: 104edafdb; -[SCMapPlaceDiscoverySessionIdsProvider updateVisualTrayNetworkSessionIdWithSessionId:] */

void FUN_104edaf68(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  double dVar1;
  
  dVar1 = (double)param_4;
  func_0x00010c2a0640(*(undefined8 *)(param_2 + 0x58));
  if (param_1 != dVar1) {
    func_0x00010c223f80(dVar1,*(undefined8 *)(param_2 + 0x58));
    func_0x00010c223fe0(dVar1,*(undefined8 *)(param_2 + 0x58));
    if (*(char *)(param_2 + 0x50) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x38),PTR_s_next__112614028,
                 *(undefined8 *)(param_2 + 0x58));
      return;
    }
  }
  return;
}



/* Entry: 104edafdc; end: 104edb043; -[SCMapPlaceDiscoverySessionIdsProvider updateVisualTrayViewportSessionIdWithSessionId:] */

void FUN_104edafdc(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010c2a0680(*(undefined8 *)(param_2 + 0x58));
  if ((param_1 != (double)param_4) &&
     (func_0x00010c223fe0((double)param_4,*(undefined8 *)(param_2 + 0x58)),
     *(char *)(param_2 + 0x50) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x38),PTR_s_next__112614028,*(undefined8 *)(param_2 + 0x58)
              );
    return;
  }
  return;
}



/* Entry: 104edb044; end: 104edb153; -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayActionTapPlacePoiForPlaceID:placePivotNames:] */

void FUN_104edb044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b1e28;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c010e40();
  puStack_68 = PTR_PTR_113184b28;
  puStack_60 = PTR_PTR_113184b30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480(puVar1,param_2,puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b1e28;
  _objc_alloc(PTR_PTR_1126b1e28);
  func_0x00010c010e40();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (*(long *)(puVar1 + 0x20) != 0) {
    func_0x00010c1d0640(puVar3,param_2,*(long *)(puVar1 + 0x20),PTR_PTR_113184b40);
  }
  if (*(long *)(puVar1 + 0x28) != 0) {
    func_0x00010c1d0640(puVar3,param_2,*(long *)(puVar1 + 0x28),PTR_PTR_113184b70);
  }
  func_0x00010c1d0640(puVar3,param_2,*(undefined8 *)(puVar1 + 0x18),PTR_PTR_113184b38);
  func_0x00010c189480(puVar2,param_2,puVar3);
  func_0x00010c0d9840(*(undefined8 *)(puVar1 + 0x40),param_2,puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104edb154; end: 104edb213; -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayOpen] */

void FUN_104edb154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1e28;
  _objc_alloc(PTR_PTR_1126b1e28);
  func_0x00010c010e40();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c1d0640(puVar2,param_2,*(long *)(param_1 + 0x20),PTR_PTR_113184b40);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c1d0640(puVar2,param_2,*(long *)(param_1 + 0x28),PTR_PTR_113184b70);
  }
  func_0x00010c1d0640(puVar2,param_2,*(undefined8 *)(param_1 + 0x18),PTR_PTR_113184b38);
  func_0x00010c189480(puVar1,param_2,puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104edb214; end: 104edb303; -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayClose:] */

void FUN_104edb214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1e28;
  _objc_alloc();
  func_0x00010c010e40();
  puStack_48 = PTR_PTR_113184b48;
  func_0x00010bb02250();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c189480(puVar1,param_2,puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b1e28;
  _objc_alloc(PTR_PTR_1126b1e28);
  func_0x00010c010e40();
  func_0x00010c0d9840(*(undefined8 *)(puVar1 + 0x40),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104edb304; end: 104edb347; -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayLoaded] */

void FUN_104edb304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1e28;
  _objc_alloc(PTR_PTR_1126b1e28);
  func_0x00010c010e40();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104edb348; end: 104edb357; -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayStoriesLoadedWithEvent:] */

void FUN_104edb348(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 104edb358; end: 104edb37f; -[SCMapPlaceDiscoverySessionIdsProvider blizzardLogger] */

void FUN_104edb358(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104edb380; end: 104edb387; -[SCMapPlaceDiscoverySessionIdsProvider getSessionIdsHolderObservable] */

void FUN_104edb380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 104edb388; end: 104edb38f; -[SCMapPlaceDiscoverySessionIdsProvider onEnterSearchSubject] */

void FUN_104edb388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_toSCBridgeSubject_11267a278);
  return;
}



/* Entry: 104edb390; end: 104edb397; -[SCMapPlaceDiscoverySessionIdsProvider onMetricDataEvent] */

void FUN_104edb390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 104edb398; end: 104edb39f; -[SCMapPlaceDiscoverySessionIdsProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104edb398(void)

{
  return 0;
}



/* Entry: 104edb3a0; end: 104edb3ab; -[SCMapPlaceDiscoverySessionIdsProvider pushToValdiMarshaller:] */

undefined8 FUN_104edb3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d20e8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x000106ccd2bc();
  return param_3;
}



/* Entry: 104edb3ac; end: 104edb47f; -[SCMapPlaceDiscoverySessionIdsProvider _createSessionIdsHolderWithParentTraySessionId:] */

void FUN_104edb3ac(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1f00;
  _objc_alloc(PTR_PTR_1126b1f00);
  uVar2 = *(ulong *)(param_2 + 8);
  func_0x00010c15ffa0(uVar2);
  uVar3 = (long)param_1;
  if (param_4 != 0) {
    uVar3 = param_4;
    func_0x00010c2827c0(param_4);
  }
  uVar4 = *(ulong *)(param_2 + 8);
  func_0x00010c0bac20(uVar4);
  func_0x00010c028680((double)uVar2,(double)uVar3,(double)uVar4,(double)(ulong)(long)param_1,0,
                      puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104edb480; end: 104edb57f; -[SCMapPlaceDiscoverySessionIdsProvider _setupMapViewportSessionIdObservable] */

void FUN_104edb480(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_mapViewportSessionIdObservable_11260c528);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0bac40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104edb580; end: 104edb5df;  */

void FUN_104edb580(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf885a0(param_2);
  _objc_release(param_2);
  func_0x00010bedb240(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104edb5e0; end: 104edb647; -[SCMapPlaceDiscoverySessionIdsProvider _updateMapViewportSessionIdWithSessionId:] */

void FUN_104edb5e0(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010c29f6a0(*(undefined8 *)(param_2 + 0x58));
  if ((param_1 != (double)param_4) &&
     (func_0x00010c223520((double)param_4,*(undefined8 *)(param_2 + 0x58)),
     *(char *)(param_2 + 0x50) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x38),PTR_s_next__112614028,*(undefined8 *)(param_2 + 0x58)
              );
    return;
  }
  return;
}



/* Entry: 104edb648; end: 104edb6f7; -[SCMapPlaceDiscoverySessionIdsProvider _setupOnEnterSearchObserver] */

void FUN_104edb648(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c25ff60(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104edb6f8; end: 104edb75b;  */

void FUN_104edb6f8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28c2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104edb75c; end: 104edb763; -[SCMapPlaceDiscoverySessionIdsProvider sessionIds] */

undefined8 FUN_104edb75c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104edb764; end: 104edb793; -[SCMapPlaceDiscoverySessionIdsProvider setBlizzardLogger:] */

void FUN_104edb764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edb794; end: 104edb79b; -[SCMapPlaceDiscoverySessionIdsProvider isTrayActive] */

undefined1 FUN_104edb794(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 104edb79c; end: 104edb7a3; -[SCMapPlaceDiscoverySessionIdsProvider setIsTrayActive:] */

void FUN_104edb79c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 104edb7a4; end: 104edb8d3; -[SCMapPlaceDiscoverySessionIdsProvider .cxx_destruct] */

void FUN_104edb7a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104edb8d4; end: 104edb93b;  */

void FUN_104edb8d4(int param_1)

{
  func_0x00010bfdf380(PTR_PTR_1126b1f10);
  func_0x00010c0fd340(PTR_PTR_1126b1f10);
  if (param_1 != 0) {
    func_0x00010c09e300(PTR_PTR_1126b1f10);
  }
  _objc_alloc(PTR_PTR_1126b1f18);
  func_0x00010c01ed80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104edb93c; end: 104edba37; -[SCMapPlaceDiscoveryWorkflow initWithRouter:controller:trayDetailsObservable:currentUserId:] */

undefined1 *
FUN_104edb93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4df8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104edba38; end: 104edba3b; -[SCMapPlaceDiscoveryWorkflow beginWorkflow] */

void FUN_104edba38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb0c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupTrayDetailsObserver_112589cc8);
  return;
}



/* Entry: 104edba3c; end: 104edba87; -[SCMapPlaceDiscoveryWorkflow endWorkflow:] */

void FUN_104edba3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf86d40(uVar1);
  func_0x00010bf3da60(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104edba88; end: 104edbb4f; -[SCMapPlaceDiscoveryWorkflow _setupTrayDetailsObserver] */

void FUN_104edba88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104edbb50; end: 104edbbab;  */

void FUN_104edbb50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c219da0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c28cf60(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104edbbac; end: 104edbbff; -[SCMapPlaceDiscoveryWorkflow .cxx_destruct] */

void FUN_104edbbac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104edbc00; end: 104edc573; -[SCMapPlaceDiscoveryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104edbc00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126b1f20;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126b1f28;
  _objc_alloc();
  func_0x00010c018420();
  puVar5 = PTR_PTR_1126b1f30;
  _objc_alloc();
  lVar26 = param_1;
  FUN_104edc574(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000104edc598(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000104edc5bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000104edc5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x000104edc604(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar25;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000104edc628(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf60940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028480(puVar5,param_2,lVar26,lVar6,lVar7,lVar9,lVar10,lVar12,puVar4);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar26);
  puVar13 = PTR_PTR_1126b1f38;
  _objc_alloc();
  lVar26 = param_1;
  func_0x000104edc5bc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar26;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000104edc5bc();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar9;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000104edc5bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar14;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x000104edc64c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x000104edc604();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0555a0(puVar13,param_2,puVar5,puVar1,lVar8,lVar10,lVar28,lVar29,puVar2,lVar16,puVar4)
  ;
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar26);
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11271642c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar26;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar26);
  puVar17 = PTR_PTR_1126b1f40;
  _objc_alloc();
  lVar26 = param_1;
  func_0x000104edc5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar26;
  func_0x00010c292d00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000104edc5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112716424;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar25;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_104edc574();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x000104edc628();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar27 = 0;
  }
  else {
    uVar27 = *(undefined8 *)(param_1 + _DAT_112716440);
  }
  _objc_retain(uVar27);
  lVar28 = param_1;
  func_0x000104edc670();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x000104edc694();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x000104edc598();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c0b9f40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000104edc604();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112716430;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar23;
  func_0x00010bf44e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + _DAT_112716444);
  }
  func_0x00010c05c640(puVar17,param_2,lVar6,lVar9,lVar11,lVar12,lVar14,puVar1,uVar27,lVar28,puVar13,
                      lVar29,lVar16,lVar19,lVar20,puVar2,lVar7,uVar24);
  _objc_release(uVar27);
  _objc_release(lVar20);
  _objc_release(lVar23);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar26);
  puVar21 = PTR_PTR_1126b1f48;
  _objc_alloc();
  lVar26 = param_1;
  func_0x000104edc64c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000104edc694();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000104edc628();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_104edc574();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar27 = 0;
  }
  else {
    uVar27 = *(undefined8 *)(param_1 + _DAT_112716440);
  }
  _objc_retain(uVar27);
  lVar25 = param_1;
  func_0x000104edc670();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000104edc628();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0eafc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000104edc604();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar28 = 0;
    uVar24 = 0;
    lVar29 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + _DAT_112716448);
    _objc_retain(uVar24);
    lVar28 = param_1 + _DAT_112716434;
    _objc_loadWeakRetained();
    lVar29 = param_1 + _DAT_112716438;
    _objc_loadWeakRetained();
  }
  func_0x00010c02cc00(puVar21,param_2,lVar26,lVar6,lVar8,lVar9,puVar13,puVar17,uVar27,lVar25,lVar11,
                      lVar14,uVar24,lVar28,lVar29);
  _objc_release(uVar24);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(uVar27);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar26);
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112716428;
    _objc_loadWeakRetained(lVar26);
  }
  lVar6 = lVar26;
  func_0x00010c0fdca0(lVar26);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar26);
  puVar22 = PTR_PTR_1126b1f50;
  _objc_alloc();
  lVar26 = param_1;
  func_0x000104edc628(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar26;
  func_0x00010c27b260();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000104edc628(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf60940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040640(puVar22,param_2,puVar21,puVar13,lVar6,lVar9);
  lVar25 = (long)_DAT_1127163fc;
  uVar27 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar22;
  _objc_release(uVar27);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar26);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar25));
  _objc_release(puVar21);
  _objc_release(puVar17);
  _objc_release(lVar7);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104edc574; end: 104edc6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104edc574(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716410);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104edc6b8; end: 104edc743; -[SCMapPlaceDiscoveryEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104edc6b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112716400);
  *(undefined **)(param_1 + _DAT_112716400) = puVar1;
  _objc_retain();
  _objc_release(uVar3);
  func_0x00010bf95c80(*(undefined8 *)(param_1 + _DAT_1127163fc),param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104edc744; end: 104edc867; -[SCMapPlaceDiscoveryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104edc744(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716448,0);
  _objc_storeStrong(param_1 + _DAT_112716444,0);
  _objc_storeStrong(param_1 + _DAT_112716440,0);
  _objc_destroyWeak(param_1 + _DAT_11271643c);
  _objc_destroyWeak(param_1 + _DAT_112716438);
  _objc_destroyWeak(param_1 + _DAT_112716434);
  _objc_destroyWeak(param_1 + _DAT_112716430);
  _objc_destroyWeak(param_1 + _DAT_11271642c);
  _objc_destroyWeak(param_1 + _DAT_112716428);
  _objc_destroyWeak(param_1 + _DAT_112716424);
  _objc_destroyWeak(param_1 + _DAT_112716420);
  _objc_destroyWeak(param_1 + _DAT_11271641c);
  _objc_destroyWeak(param_1 + _DAT_112716418);
  _objc_destroyWeak(param_1 + _DAT_112716414);
  _objc_destroyWeak(param_1 + _DAT_112716410);
  _objc_destroyWeak(param_1 + _DAT_11271640c);
  _objc_destroyWeak(param_1 + _DAT_112716408);
  _objc_destroyWeak(param_1 + _DAT_112716404);
  _objc_storeStrong(param_1 + _DAT_112716400,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127163fc,0);
  return;
}



/* Entry: 104edc868; end: 104edc87f;  */

void FUN_104edc868(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba038;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dba038,
                      &PTR____CFConstantStringClassReference_110dba058,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104edc880; end: 104edc8f3; -[SCGrapheneMapPlaceDiscoveryMetric2 init] */

undefined1 * FUN_104edc880(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104edc8f4; end: 104edcb23;  */

void FUN_104edc8f4(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    pcVar3 = acStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110859598,pcVar3,param_5);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    FUN_104edc8f4(pcVar2,pcVar1,pcVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104edcb24; end: 104edcbb7;  */

void FUN_104edcb24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_104edc8f4(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104edcbb8; end: 104edcc2f;  */

void FUN_104edcbb8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108595e8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104edcc30; end: 104edcca7;  */

void FUN_104edcc30(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110859638,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104edcca8; end: 104edcd1f;  */

void FUN_104edcca8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110859688,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104edcd20; end: 104edcda3; -[SCMapPlaceProfileV2MetricHandler handleActionSheetOptionTappedWithMetricType:providerIdentifier:] */

void FUN_104edcd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1f58;
  if (*(long *)(param_1 + 8) != 0) {
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c1c7720();
    func_0x00010c1e5340(puVar1);
    _objc_release(param_4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104edcda4; end: 104edcdbb; -[SCMapPlaceProfileV2MetricHandler handleFloatingButtonActionWithType:] */

void FUN_104edcda4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104edcdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 104edcdbc; end: 104edcdc3; -[SCMapPlaceProfileV2MetricHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104edcdbc(void)

{
  return 0;
}



/* Entry: 104edcdc4; end: 104edcdcf; -[SCMapPlaceProfileV2MetricHandler pushToValdiMarshaller:] */

undefined8 FUN_104edcdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d20f8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000106ccf450();
  func_0x000106ccf3a8();
  return param_3;
}



/* Entry: 104edcdd0; end: 104edcdff; -[SCMapPlaceProfileV2MetricHandler onMetricsOperationCompletedWithOnTapped:] */

void FUN_104edcdd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edce00; end: 104edce2f; -[SCMapPlaceProfileV2MetricHandler onFloatingButtonActionWithOnTapped:] */

void FUN_104edce00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edce30; end: 104edce5f; -[SCMapPlaceProfileV2MetricHandler .cxx_destruct] */

void FUN_104edce30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104edce60; end: 104edcf37; -[SCMapPlaceProfileV2SessionIdsProvider initWithMapSession:] */

undefined1 * FUN_104edce60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4e08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdeebe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 8));
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    func_0x00010beae040(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104edcf38; end: 104edcf53; -[SCMapPlaceProfileV2SessionIdsProvider placeSessionId] */

long FUN_104edcf38(double param_1,long param_2)

{
  func_0x00010c0fd4a0(*(undefined8 *)(param_2 + 0x18));
  return (long)param_1;
}



/* Entry: 104edcf54; end: 104edcf7b; -[SCMapPlaceProfileV2SessionIdsProvider sessionIdsObservable] */

void FUN_104edcf54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104edcf7c; end: 104edd02f; -[SCMapPlaceProfileV2SessionIdsProvider startNewPlaceProfileSessionWithTrayViewportSessionId:networkViewportSessionId:] */

void FUN_104edcf7c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c1dc800(param_1 * 1000.0,*(undefined8 *)(param_2 + 0x18));
  func_0x00010c21a080(*(undefined8 *)(param_2 + 0x18));
  _objc_release(param_4);
  func_0x00010c1cc8a0(*(undefined8 *)(param_2 + 0x18));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_next__112614028,*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 104edd030; end: 104edd0bb; -[SCMapPlaceProfileV2SessionIdsProvider _createInitialSessionIds] */

void FUN_104edd030(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126b1f60;
  _objc_alloc(PTR_PTR_1126b1f60);
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(uVar2);
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  uVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(uVar4);
  uVar5 = uVar4;
  func_0x00010c0bac20();
  func_0x00010c028660((double)uVar3,0,(double)uVar5,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104edd0bc; end: 104edd1e7; -[SCMapPlaceProfileV2SessionIdsProvider _setupMapViewportSessionIdObservable] */

void FUN_104edd0bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c0bac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 104edd1e8; end: 104edd247;  */

void FUN_104edd1e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf885a0(param_2);
  _objc_release(param_2);
  func_0x00010bedb240(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104edd248; end: 104edd2a3; -[SCMapPlaceProfileV2SessionIdsProvider _updateMapViewportSessionIdWithSessionId:] */

void FUN_104edd248(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010c0bac20(*(undefined8 *)(param_2 + 0x18));
  if (param_1 != (double)param_4) {
    func_0x00010c1c2900((double)param_4,*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 8),PTR_s_next__112614028,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  return;
}



/* Entry: 104edd2a4; end: 104edd2e7; -[SCMapPlaceProfileV2SessionIdsProvider .cxx_destruct] */

void FUN_104edd2a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104edd2e8; end: 104edd4af; -[SCMapPlaceProfileV2ThumbnailViewFactory initWithConfiguration:runtime:composerVideoViewDelegate:storyFetcher:storyPlaybackScopeExposer:storyPlaybackScopeServices:composerPlaceStoryPlayer:sessionIdsProvider:promotedPlaceActionPublisher:] */

undefined1 *
FUN_104edd2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e4e10;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104edd4b0; end: 104edd57b; -[SCMapPlaceProfileV2ThumbnailViewFactory createNativeThumbnailViewFactory] */

void FUN_104edd4b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_opt_class(PTR_PTR_1126b1ea8);
  func_0x00010c0b7ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104edd57c; end: 104edd5bb;  */

void FUN_104edd57c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf57a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104edd5bc; end: 104edd653; -[SCMapPlaceProfileV2ThumbnailViewFactory _createVideoView] */

void FUN_104edd5bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = param_1;
  func_0x00010be23c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1ea8;
  _objc_alloc(PTR_PTR_1126b1ea8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c028720(puVar4,param_2,uVar1,uVar2,uVar5,lVar3,param_1,0);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104edd654; end: 104edd78b; -[SCMapPlaceProfileV2ThumbnailViewFactory _getVenueStoryAnalytics] */

void FUN_104edd654(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1eb0;
  _objc_alloc(PTR_PTR_1126b1eb0);
  uVar2 = 0x22;
  func_0x00010baf2e2c(0x22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0620a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b9ce0(uVar2);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c25a0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0bac20(uVar2);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2900(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar2 = 10;
  func_0x00010bb01b4c(10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c26e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0fd4a0(uVar2);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc800(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104edd78c; end: 104edd803; -[SCMapPlaceProfileV2ThumbnailViewFactory notifyStoryThumbnailTapped] */

void FUN_104edd78c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c07b500();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11acc0(uVar2,param_2,7,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104edd804; end: 104edd80b; -[SCMapPlaceProfileV2ThumbnailViewFactory nativeVenueStoryPlayer] */

undefined8 FUN_104edd804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104edd80c; end: 104edd83b; -[SCMapPlaceProfileV2ThumbnailViewFactory setNativeVenueStoryPlayer:] */

void FUN_104edd80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edd83c; end: 104edd843; -[SCMapPlaceProfileV2ThumbnailViewFactory trayData] */

undefined8 FUN_104edd83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104edd844; end: 104edd873; -[SCMapPlaceProfileV2ThumbnailViewFactory setTrayData:] */

void FUN_104edd844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edd874; end: 104edd8ff; -[SCMapPlaceProfileV2ThumbnailViewFactory .cxx_destruct] */

void FUN_104edd874(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104edd900; end: 104eddbd7; -[SCMapPlaceProfileV2ContextFactory initWithNetworkingClient:blizzardLogger:mapPresenter:placesGrpcService:mapPlacesContentServices:subscriptionStore:composerStaticMapURLGenerator:mapSession:locationProvider:valdiRuntimeProvider:circumstanceEngine:adsBannerProvider:deckService:] */

undefined8 *
FUN_104edd900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e4e18;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[3];
    puVar1[3] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104eddbd8; end: 104eddf37; -[SCMapPlaceProfileV2ContextFactory createVenueProfileV2ContextWithConfiguration:sessionIdsObservable:] */

void FUN_104eddbd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_retain(param_4);
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be348);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c239c20();
  if ((int)uVar7 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be390);
  }
  lVar2 = param_1;
  func_0x00010bee8280(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1f68;
  _objc_alloc(PTR_PTR_1126b1f68);
  func_0x00010c046600();
  puVar4 = PTR_PTR_1126b1f70;
  _objc_alloc(PTR_PTR_1126b1f70);
  func_0x00010c02f840();
  _objc_release(param_4);
  func_0x00010c220a40(puVar4,param_2,param_1);
  func_0x00010c171b20(puVar4,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1dcda0(puVar4,param_2,*(undefined8 *)(param_1 + 0x28));
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8ba0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c220940(puVar4,param_2,puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0fd080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2207e0(puVar4,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c272140(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7c20(puVar4,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c1c24a0(puVar4,param_2,*(undefined8 *)(param_1 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b20a0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b20c0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2100(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar7);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104eddf38;
  puStack_70 = &UNK_1108596f8;
  _objc_retain(uVar7);
  uStack_68 = uVar7;
  func_0x00010c1a30c0(puVar4,param_2,&puStack_88);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010c20f5e0(puVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c27e0(puVar4,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010bde6980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a240(puVar4,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uStack_68);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104eddf38; end: 104ede007;  */

void FUN_104eddf38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1f78;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf590c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c165fc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ede008; end: 104ede17f; -[SCMapPlaceProfileV2ContextFactory _venueProfileV2ConfigWithConfiguration:sectionsToShow:] */

void FUN_104ede008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x000109022308(uVar3);
  puVar1 = PTR_PTR_1126b1f80;
  _objc_alloc(PTR_PTR_1126b1f80);
  func_0x00010c043880();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167b00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8be0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000109021e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9ca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c21d940(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
  func_0x00010c21d920(puVar1,param_2,puVar2);
  func_0x00010c1952a0(puVar1,param_2,puVar2);
  func_0x00010c201e60(puVar1,param_2,puVar2);
  func_0x00010c2020e0(puVar1,param_2,puVar2);
  func_0x00010c201a60(puVar1,param_2,puVar2);
  func_0x00010c195040(puVar1,param_2,puVar2);
  func_0x00010c194d60(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ede180; end: 104ede1cf; -[SCMapPlaceProfileV2ContextFactory _constructComposerDeckHierarchy] */

void FUN_104ede180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c112e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf553a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ede1d0; end: 104ede2bb; -[SCMapPlaceProfileV2ContextFactory getFormattedDistanceToLocationWithLat:lng:] */

void FUN_104ede1d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_3 + 0x50);
  if (lVar1 != 0) {
    uVar6 = param_1;
    uVar7 = param_2;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107f49238();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x50);
      func_0x00010c09ea00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _CLLocationCoordinate2DMake(param_1,param_2);
      func_0x000108d312a8(uVar6,uVar7,param_1,param_2);
      _objc_release(uVar3);
      puVar4 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
      _objc_alloc_init(PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88);
      puVar5 = puVar4;
      func_0x00010c25d440(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_104ede2a0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_104ede2a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ede2bc; end: 104ede37b; -[SCMapPlaceProfileV2ContextFactory .cxx_destruct] */

void FUN_104ede2bc(long param_1)

{
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



/* Entry: 104ede37c; end: 104ede84b; -[SCMapPlaceProfileV2Controller initWithPlaceDataProvider:valdiRuntimeProvider:circumstanceEngine:multiTrayServices:contextFactory:placeProfileScope:actionHandler:composerPlaceStoryPlayer:storyFetcher:storyPlaybackScopeExposer:storyPlaybackScopeServices:actionSheetPresenterFactory:bitmojiAvatarId:mapSession:mapLoggerProvider:mapViewServices:delegate:eventSender:basemapManager:browsingContextManager:promotedPlaceActionPublisher:] */

undefined8 *
FUN_104ede37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_70,param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_initWeak(auStack_78,param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain();
  puStack_80 = PTR_PTR_1126e4e20;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    puVar3 = auStack_78;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 0xb,puVar3);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar4;
    _objc_release(uVar2);
    puVar3 = auStack_70;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 10,puVar3);
    _objc_release(puVar3);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b1f90;
    _objc_alloc();
    func_0x00010c028580();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_23;
    _objc_release(uVar2);
    func_0x00010be898e0(puVar1);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ede84c; end: 104eded2f; -[SCMapPlaceProfileV2Controller loadPlaceWithTrayData:openSource:layerSource:] */

void FUN_104ede84c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_3 + 0x60);
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0x20);
    *(ulong *)(param_3 + 0x20) = uVar2;
    _objc_release(uVar17);
    func_0x00010bf51c80(param_5);
    *(undefined8 *)(param_3 + 0xf0) = param_1;
    *(undefined8 *)(param_3 + 0xf8) = param_2;
    _objc_retain(param_5);
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    *(ulong *)(param_3 + 0x28) = param_5;
    _objc_release(uVar17);
    func_0x00010c219d80(*(undefined8 *)(param_3 + 0xb8),param_4,param_5);
    uVar2 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0e9800(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c247b60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c247d20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c29f680(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010bfd9000();
    lVar8 = param_3;
    func_0x00010be742e0(param_3,param_4,uVar2,uVar3,uVar4,uVar5,uVar6,param_7,uVar7 & 0xff);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0x98);
    *(long *)(param_3 + 0x98) = lVar8;
    _objc_release(uVar17);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar9 = PTR_PTR_1126b1f98;
    _objc_alloc(PTR_PTR_1126b1f98);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0bad40(*(undefined8 *)(param_3 + 0x98));
    func_0x00010c0df720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0df720(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bf043a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c247d20(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c08c400();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar13 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010bfd9000(uVar13);
    func_0x00010c0df6e0(puVar14,param_4,uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0289a0(puVar9,param_4,puVar10,param_6,puVar11,0,uVar2,uVar17,uVar12,0,puVar14);
    _objc_release(puVar14);
    _objc_release(uVar12);
    _objc_release(uVar17);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(puVar10);
    uVar17 = *(undefined8 *)(param_3 + 0xc0);
    uVar2 = param_5;
    func_0x00010c29f680(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29f6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c29f680(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d8020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f660(uVar17,param_4,uVar3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c07b500(param_5);
    lVar8 = param_3;
    func_0x00010bee82a0(param_3,param_4,uVar2,puVar9,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar15 = param_3;
    func_0x00010beb0fe0(param_3,param_4,*(undefined8 *)(param_3 + 0x98));
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b1fa0;
    _objc_alloc();
    func_0x00010c061d40();
    uVar17 = *(undefined8 *)(param_3 + 0x40);
    *(undefined **)(param_3 + 0x40) = puVar10;
    _objc_release(uVar17);
    puVar10 = PTR_PTR_1126b1fa8;
    _objc_alloc();
    func_0x00010c05fb60();
    uVar17 = *(undefined8 *)(param_3 + 0xd8);
    *(undefined **)(param_3 + 0xd8) = puVar10;
    _objc_release(uVar17);
    puVar10 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    func_0x00010c1e1540(*(undefined8 *)(param_3 + 0x68),param_4,puVar10);
    func_0x00010be69da0(param_3,param_4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be3a8);
    uVar2 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be77520(param_3,param_4,uVar2);
    _objc_release(uVar2);
    uVar12 = *(undefined8 *)(param_3 + 8);
    uVar2 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0xc0);
    func_0x00010c0fd4a0(uVar17);
    func_0x00010bfa93a0(uVar12,param_4,uVar2,uVar17);
    _objc_release(uVar2);
    func_0x00010bdf50a0(param_3,param_4,*(undefined8 *)(param_3 + 0xd8));
    lVar16 = *(long *)(param_3 + 0x28);
    func_0x00010c0fd160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar16 != 0) {
      func_0x00010bdc6ce0(param_3);
    }
    _objc_release(puVar10);
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(puVar9);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104eded30; end: 104edf053; -[SCMapPlaceProfileV2Controller reloadPlaceWithTrayData:openSource:] */

void FUN_104eded30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  *(long *)(param_3 + 0x20) = lVar1;
  _objc_release(uVar11);
  func_0x00010bf51c80(param_5);
  *(undefined8 *)(param_3 + 0xf0) = param_1;
  *(undefined8 *)(param_3 + 0xf8) = param_2;
  lVar2 = *(long *)(param_3 + 0x28);
  func_0x00010c0fd160();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c0fd160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar2 != lVar1) {
    func_0x00010be8c1e0(param_3);
  }
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  *(long *)(param_3 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar11);
  func_0x00010c219d80(*(undefined8 *)(param_3 + 0xb8),param_4,param_5);
  puVar3 = PTR_PTR_1126b1f98;
  _objc_alloc(PTR_PTR_1126b1f98);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0bad40(*(undefined8 *)(param_3 + 0x98));
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf043a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x98);
  func_0x00010c247d20(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x98);
  func_0x00010c08c400();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_3 + 0x98);
  func_0x00010bfd9000(uVar7);
  func_0x00010c0df6e0(puVar8,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0289a0(puVar3,param_4,puVar4,param_6,puVar5,0,lVar1,uVar11,uVar6,0,puVar8);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar11 = *(undefined8 *)(param_3 + 0xc0);
  lVar1 = param_5;
  func_0x00010c29f680(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29f6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010c29f680(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0d8020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f660(uVar11,param_4,lVar2,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee32c0(param_3,param_4,lVar1,0,puVar3);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be77520(param_3,param_4,lVar1);
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_3 + 8);
  lVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0xc0);
  func_0x00010c0fd4a0(uVar11);
  func_0x00010bfa93a0(uVar6,param_4,lVar1,uVar11);
  _objc_release(param_5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104edf054; end: 104edf163; -[SCMapPlaceProfileV2Controller removeVisitWithCompletion:] */

void FUN_104edf054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010bf51e00();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c12f1c0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104edf164; end: 104edf1cf;  */

void FUN_104edf164(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010c12f260(*(undefined8 *)(lVar1 + 0xd0));
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104edf1d0; end: 104edf1d7; -[SCMapPlaceProfileV2Controller handleActionSheetOptionTappedWithMetricType:providerIdentifier:] */

void FUN_104edf1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd00d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_handleActionSheetOptionTappedWit_1125d19d8);
  return;
}



/* Entry: 104edf1d8; end: 104edf1df; -[SCMapPlaceProfileV2Controller placeSessionId] */

void FUN_104edf1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_placeSessionId_11261cf48);
  return;
}



/* Entry: 104edf1e0; end: 104edf1e7; -[SCMapPlaceProfileV2Controller hasMediaPin] */

void FUN_104edf1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_hasMediaPin_1125d3da8);
  return;
}



/* Entry: 104edf1e8; end: 104edf20f; -[SCMapPlaceProfileV2Controller boundingBox] */

void FUN_104edf1e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104edf210; end: 104edf217; -[SCMapPlaceProfileV2Controller placeDiscoveryViewportSessionData] */

void FUN_104edf210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_viewportSessionData_1126857c8);
  return;
}



/* Entry: 104edf218; end: 104edf23f; -[SCMapPlaceProfileV2Controller trayViewController] */

void FUN_104edf218(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


