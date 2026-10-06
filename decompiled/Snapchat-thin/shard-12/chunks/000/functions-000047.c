/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cb10b4; end: 108cb110b; -[SCLensProcessingEffectReadyLogger willApplyLensWithId:timestamp:] */

void FUN_108cb10b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c277d20(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  *(undefined **)(param_1 + 0x18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108cb110c; end: 108cb11b3; -[SCLensProcessingEffectReadyLogger didApplyLensWithId:timestamp:] */

void FUN_108cb110c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c277d00(param_1,lVar1,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  if (lVar1 != 0) {
    func_0x00010be50520(param_2,param_3,1,param_4,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cb11b4; end: 108cb125b; -[SCLensProcessingEffectReadyLogger didFailedApplyLensWithId:timestamp:] */

void FUN_108cb11b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c277d00(param_1,lVar1,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  if (lVar1 != 0) {
    func_0x00010be50520(param_2,param_3,0,param_4,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cb125c; end: 108cb1383; -[SCLensProcessingEffectReadyLogger _logApplyDelayResult:effectId:effectApplyEntry:] */

void FUN_108cb125c(double param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  puVar2 = PTR_PTR_1126db4e0;
  _objc_retain(param_6);
  func_0x00010bf08320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2930;
  func_0x00010bf70080(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dedcf8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,puVar2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf07860(param_6);
  dVar6 = param_1;
  func_0x00010bf07b20(param_6);
  _objc_release(param_6);
  func_0x00010befc000(param_1 - dVar6,uVar5,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108cb1384; end: 108cb13b3; -[SCLensProcessingEffectReadyLogger .cxx_destruct] */

void FUN_108cb1384(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb13b4; end: 108cb13df; +[SCGrapheneLensProcessingMetric fps] */

void FUN_108cb13b4(void)

{
  _objc_alloc(PTR_PTR_1126db4e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb13e0; end: 108cb140b; +[SCGrapheneLensProcessingMetric videoRecordFps] */

void FUN_108cb13e0(void)

{
  _objc_alloc(PTR_PTR_1126db4e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb140c; end: 108cb1437; +[SCGrapheneLensProcessingMetric frameTime] */

void FUN_108cb140c(void)

{
  _objc_alloc(PTR_PTR_1126db4e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb1438; end: 108cb1463; +[SCGrapheneLensProcessingMetric videoRecordFrameTime] */

void FUN_108cb1438(void)

{
  _objc_alloc(PTR_PTR_1126db4e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb1464; end: 108cb148f; +[SCGrapheneLensProcessingMetric applyDelay] */

void FUN_108cb1464(void)

{
  _objc_alloc(PTR_PTR_1126db4e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb1490; end: 108cb14bb; +[SCGrapheneLensProcessingMetric lensCancellation] */

void FUN_108cb1490(void)

{
  _objc_alloc(PTR_PTR_1126db4e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb14bc; end: 108cb155b; -[SCGrapheneLensProcessingMetric description] */

void FUN_108cb14bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef0e38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ef0e38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fe1a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108cb155c; end: 108cb163f; -[SCLensEffectOffscreenAssetContentMemento initWithAssetContainer:assetPaths:] */

undefined1 *
FUN_108cb155c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fe1a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uVar2 = param_3;
    func_0x00010bf0bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb1640; end: 108cb1647; -[SCLensEffectOffscreenAssetContentMemento container] */

undefined8 FUN_108cb1640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb1648; end: 108cb164f; -[SCLensEffectOffscreenAssetContentMemento assetPathToAssetMap] */

undefined8 FUN_108cb1648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb1650; end: 108cb167f; -[SCLensEffectOffscreenAssetContentMemento .cxx_destruct] */

void FUN_108cb1650(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb1680; end: 108cb16c3; +[SCLensEffectOffscreenFailedAssetsEnumerator failedEnumeratorWithError:] */

void FUN_108cb1680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db910;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cb16c4; end: 108cb16ff; -[SCLensEffectOffscreenFailedAssetsEnumerator enumerateAssetsUsingBlock:] */

void FUN_108cb16c4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,*(undefined8 *)(param_1 + 8),&uStack_11);
  }
  return;
}



/* Entry: 108cb1700; end: 108cb170b; -[SCLensEffectOffscreenFailedAssetsEnumerator .cxx_destruct] */

void FUN_108cb1700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb170c; end: 108cb177f; -[SCLensEffectOffscreenAssetItem initWithLoadingToken:] */

undefined1 * FUN_108cb170c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe1b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb1780; end: 108cb1787; -[SCLensEffectOffscreenAssetItem nextItem] */

undefined8 FUN_108cb1780(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb1788; end: 108cb17b7; -[SCLensEffectOffscreenAssetItem setNextItem:] */

void FUN_108cb1788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb17b8; end: 108cb17bf; -[SCLensEffectOffscreenAssetItem token] */

undefined8 FUN_108cb17b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb17c0; end: 108cb17cb; -[SCLensEffectOffscreenAssetItem container] */

void FUN_108cb17c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 108cb17cc; end: 108cb17d3; -[SCLensEffectOffscreenAssetItem setContainer:] */

void FUN_108cb17cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108cb17d4; end: 108cb17df; -[SCLensEffectOffscreenAssetItem assetPaths] */

void FUN_108cb17d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 108cb17e0; end: 108cb17e7; -[SCLensEffectOffscreenAssetItem setAssetPaths:] */

void FUN_108cb17e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108cb17e8; end: 108cb17f3; -[SCLensEffectOffscreenAssetItem error] */

void FUN_108cb17e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 108cb17f4; end: 108cb17fb; -[SCLensEffectOffscreenAssetItem setError:] */

void FUN_108cb17f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108cb17fc; end: 108cb184f; -[SCLensEffectOffscreenAssetItem .cxx_destruct] */

void FUN_108cb17fc(long param_1)

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



/* Entry: 108cb1850; end: 108cb1b53; -[SCLensEffectOffscreenOrderedAssetsEnumerator initWithAssetsContainers:associatedAssetsPaths:] */

undefined8 *
FUN_108cb1850(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined **unaff_x28;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR_PTR_1126fe1b8;
  puVar1 = &uStack_98;
  puVar10 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_98 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSCondition_1126db998;
    _objc_opt_new();
    uVar11 = puVar1[2];
    puVar1[2] = puVar14;
    _objc_release(uVar11);
    puVar14 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuVar2 = (undefined **)param_3;
    func_0x00010bf529e0();
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[3];
    puVar1[3] = puVar14;
    _objc_release(uVar11);
    puVar13 = param_3;
    func_0x00010bf529e0();
    if (puVar13 != (undefined1 *)0x0) {
      puVar13 = (undefined1 *)0x0;
      puVar14 = (undefined *)0x0;
      do {
        puVar3 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = puVar1[1];
        puVar4 = PTR_PTR_1126db9a0;
        _objc_alloc();
        func_0x00010c026880();
        if (lVar12 == 0) {
          _objc_retain(puVar4);
          _objc_release(puVar14);
          _objc_retain(puVar4);
          puVar14 = (undefined *)puVar1[1];
          puVar1[1] = puVar4;
        }
        else {
          func_0x00010c1cd3e0(puVar14);
          _objc_retain(puVar4);
        }
        _objc_release(puVar14);
        func_0x00010befa120(puVar1[3]);
        _objc_initWeak(&uStack_a0,puVar1);
        puVar14 = PTR_PTR_1126ae558;
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar3;
        uStack_80 = uVar11;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beffb40();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_108cb1b54;
        puStack_b8 = &UNK_110853590;
        puVar10 = &uStack_a0;
        _objc_copyWeak(auStack_a8);
        _objc_retain(puVar4);
        ppuVar2 = &puStack_d0;
        puStack_b0 = puVar4;
        func_0x00010c297260(puVar14);
        _objc_release(puVar14);
        _objc_release(puVar5);
        _objc_release(puStack_b0);
        _objc_destroyWeak(auStack_a8);
        _objc_destroyWeak(&uStack_a0);
        _objc_release(puVar4);
        _objc_release(uVar11);
        _objc_release(puVar3);
        puVar3 = param_3;
        func_0x00010bf529e0();
        puVar13 = puVar13 + 1;
        puVar14 = puVar4;
      } while (puVar13 < puVar3);
      _objc_release(puVar4);
      unaff_x28 = &puStack_d0;
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x28));
  _objc_destroyWeak(&uStack_a0);
  __Unwind_Resume();
  _objc_retain(puVar10);
  _objc_retain(ppuVar2);
  puVar13 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (puVar13 != (undefined1 *)0x0) {
    if (ppuVar2 == (undefined **)0x0) {
      puVar1 = puVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf0bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf529e0();
      puVar9 = puVar6;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      if (puVar8 == puVar9) {
        func_0x00010c16a900(*(undefined8 *)(param_3 + 0x20));
        func_0x00010c1818e0(*(undefined8 *)(param_3 + 0x20));
      }
      else {
        puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c196ee0(*(undefined8 *)(param_3 + 0x20));
        _objc_release(puVar14);
      }
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    else {
      func_0x00010c196ee0(*(undefined8 *)(param_3 + 0x20));
    }
    func_0x00010c09faa0(*(undefined8 *)(puVar13 + 0x10));
    func_0x00010bf21360(*(undefined8 *)(puVar13 + 0x10));
    func_0x00010c280b40(*(undefined8 *)(puVar13 + 0x10));
  }
  _objc_release(puVar13);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return puVar10;
}



/* Entry: 108cb1b54; end: 108cb1ccb;  */

void FUN_108cb1b54(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf0bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      lVar6 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar5 == lVar6) {
        func_0x00010c16a900(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c1818e0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar7);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010c09faa0(*(undefined8 *)(lVar1 + 0x10));
    func_0x00010bf21360(*(undefined8 *)(lVar1 + 0x10));
    func_0x00010c280b40(*(undefined8 *)(lVar1 + 0x10));
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cb1ccc; end: 108cb209f; -[SCLensEffectOffscreenOrderedAssetsEnumerator enumerateAssetsUsingBlock:] */

void FUN_108cb1ccc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cStack_51;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x10));
  cStack_51 = '\0';
  puVar5 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar5);
  while (puVar5 != (undefined *)0x0) {
    if (cStack_51 == '\x01') goto LAB_108cb206c;
    puVar1 = puVar5;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = puVar5;
      func_0x00010bf4ab60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126db8d0;
        _objc_alloc(PTR_PTR_1126db8d0);
        puVar2 = puVar5;
        func_0x00010bf4ab60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010bf0b520(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4340(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        if (param_3 != 0) {
          (**(code **)(param_3 + 0x10))(param_3,puVar1,0,&cStack_51);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        puVar2 = puVar5;
        func_0x00010c272ec0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(uVar7);
        _objc_release(puVar2);
        goto LAB_108cb1e5c;
      }
    }
    else {
      if (param_3 != 0) {
        puVar1 = puVar5;
        func_0x00010bf987e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_3 + 0x10))(param_3,0,puVar1,&cStack_51);
        _objc_release(puVar1);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      puVar1 = puVar5;
      func_0x00010c272ec0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar7);
LAB_108cb1e5c:
      _objc_release(puVar1);
    }
    puVar1 = puVar5;
    func_0x00010c0d9b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  while (lVar4 != 0) {
    func_0x00010c2a1260(*(undefined8 *)(param_1 + 0x10));
    puVar5 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar5);
    while (puVar5 != (undefined *)0x0) {
      if (cStack_51 == '\x01') goto LAB_108cb206c;
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = puVar5;
      func_0x00010c272ec0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar1);
      if ((uVar6 & 1) != 0) {
        puVar1 = puVar5;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 == (undefined *)0x0) {
          puVar1 = puVar5;
          func_0x00010bf4ab60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar1 == (undefined *)0x0) goto LAB_108cb2030;
          puVar1 = PTR_PTR_1126db8d0;
          _objc_alloc(PTR_PTR_1126db8d0);
          puVar2 = puVar5;
          func_0x00010bf4ab60(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          func_0x00010bf0b520(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff4340(puVar1);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if (param_3 != 0) {
            (**(code **)(param_3 + 0x10))(param_3,puVar1,0,&cStack_51);
          }
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          puVar2 = puVar5;
          func_0x00010c272ec0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(uVar7);
          _objc_release(puVar2);
        }
        else {
          if (param_3 != 0) {
            puVar1 = puVar5;
            func_0x00010bf987e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(param_3 + 0x10))(param_3,0,puVar1,&cStack_51);
            _objc_release(puVar1);
          }
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          puVar1 = puVar5;
          func_0x00010c272ec0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(uVar7);
        }
        _objc_release(puVar1);
      }
LAB_108cb2030:
      puVar1 = puVar5;
      func_0x00010c0d9b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar1;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x10));
LAB_108cb207c:
  _objc_release(param_3);
  return;
LAB_108cb206c:
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar5);
  goto LAB_108cb207c;
}



/* Entry: 108cb20a0; end: 108cb20db; -[SCLensEffectOffscreenOrderedAssetsEnumerator .cxx_destruct] */

void FUN_108cb20a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb20dc; end: 108cb219f; -[SCLensEffectOffscreenStackedMemento initWithEffect:lens:] */

undefined1 *
FUN_108cb20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe1c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb21a0; end: 108cb21a7; -[SCLensEffectOffscreenStackedMemento info] */

undefined8 FUN_108cb21a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb21a8; end: 108cb21af; -[SCLensEffectOffscreenStackedMemento lens] */

undefined8 FUN_108cb21a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb21b0; end: 108cb21b7; -[SCLensEffectOffscreenStackedMemento lensId] */

undefined8 FUN_108cb21b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb21b8; end: 108cb21ff; -[SCLensEffectOffscreenStackedMemento .cxx_destruct] */

void FUN_108cb21b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb2200; end: 108cb223b; -[SCLensEffectOffscreenURIHandler init] */

void FUN_108cb2200(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fe1c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108cb223c; end: 108cb23bb; -[SCLensEffectOffscreenURIHandler handleWithRequest:completion:] */

/* WARNING: Removing unreachable block (ram,0x000108cb22b4) */

void FUN_108cb223c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar2 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar3 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar2);
    _objc_release(uVar3);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  lVar4 = param_4;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar4;
  _objc_release(uVar3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108cb23bc; end: 108cb23ef; -[SCLensEffectOffscreenURIHandler reset] */

void FUN_108cb23bc(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 108cb23f0; end: 108cb2527; -[SCLensEffectOffscreenURIHandler setConfigurationMetadata:] */

void FUN_108cb23f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    _objc_retain(0);
    puVar2 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c28f280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar2);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
  return;
}



/* Entry: 108cb2528; end: 108cb252b; -[SCLensEffectOffscreenURIHandler setConfigurationAsset:] */

void FUN_108cb2528(void)

{
  return;
}



/* Entry: 108cb252c; end: 108cb2567; -[SCLensEffectOffscreenURIHandler .cxx_destruct] */

void FUN_108cb252c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb2568; end: 108cb2673; -[SCLensEffectOffscreenWarmingContainer initWithContainerIdentifier:effectIdentifier:payload:assets:] */

undefined1 *
FUN_108cb2568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe1d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb2674; end: 108cb2697; -[SCLensEffectOffscreenWarmingContainer copyWithZone:] */

undefined8 FUN_108cb2674(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb2698; end: 108cb2723; -[SCLensEffectOffscreenWarmingContainer hash] */

undefined8 * FUN_108cb2698(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108cb27d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108cb27e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_108cb27e0;
            }
            goto LAB_108cb27d4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108cb27e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108cb2724; end: 108cb27fb; -[SCLensEffectOffscreenWarmingContainer isEqual:] */

long FUN_108cb2724(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108cb27d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108cb27e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108cb27e0;
            }
            goto LAB_108cb27d4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108cb27e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108cb27fc; end: 108cb2803; -[SCLensEffectOffscreenWarmingContainer containerIdentifier] */

undefined8 FUN_108cb27fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb2804; end: 108cb280b; -[SCLensEffectOffscreenWarmingContainer effectIdentifier] */

undefined8 FUN_108cb2804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb280c; end: 108cb2813; -[SCLensEffectOffscreenWarmingContainer payload] */

undefined8 FUN_108cb280c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb2814; end: 108cb281b; -[SCLensEffectOffscreenWarmingContainer assets] */

undefined8 FUN_108cb2814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb281c; end: 108cb2863; -[SCLensEffectOffscreenWarmingContainer .cxx_destruct] */

void FUN_108cb281c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb2864; end: 108cb28d7; -[SCPreviewFeaturesPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_108cb2864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe1d8;
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



/* Entry: 108cb28d8; end: 108cb28df; -[SCPreviewFeaturesPluginScope plugInRegistry] */

undefined8 FUN_108cb28d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb28e0; end: 108cb28eb; -[SCPreviewFeaturesPluginScope .cxx_destruct] */

void FUN_108cb28e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb28ec; end: 108cb2c0b; -[SCPreviewScope initWithConfig:legacyConfig:snapDocEditor:source:workflowDelegate:snapchatGalleryDelegate:uiContainer:cameraPreviewDelegate:setupMultisnapViewObservable:setCaptureDiscardRelatedDataObservable:batchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable:logDirectSnapCreateForTimelineWithSessionIDObservable:sendFlowEventSubject:quickPostEventSubject:] */

undefined8 *
FUN_108cb28ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126fe1e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 2) = param_6;
    puVar3 = PTR_PTR_1126db9a8;
    _objc_alloc();
    func_0x00010c063500();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c112580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 7,puVar1[1]);
    _objc_storeWeak(puVar1 + 8,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cb2c0c; end: 108cb2c13; -[SCPreviewScope previewWorkflowEventObservable] */

undefined8 FUN_108cb2c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb2c14; end: 108cb2c1b; -[SCPreviewScope config] */

undefined8 FUN_108cb2c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb2c1c; end: 108cb2c23; -[SCPreviewScope snapDocEditor] */

undefined8 FUN_108cb2c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cb2c24; end: 108cb2c2b; -[SCPreviewScope legacyConfig] */

undefined8 FUN_108cb2c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cb2c2c; end: 108cb2c33; -[SCPreviewScope source] */

undefined1 FUN_108cb2c2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108cb2c34; end: 108cb2c4b; -[SCPreviewScope workflowDelegate] */

void FUN_108cb2c34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb2c4c; end: 108cb2c63; -[SCPreviewScope snapchatGalleryDelegate] */

void FUN_108cb2c4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb2c64; end: 108cb2c6b; -[SCPreviewScope uiContainer] */

undefined8 FUN_108cb2c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cb2c6c; end: 108cb2c83; -[SCPreviewScope cameraPreviewDelegate] */

void FUN_108cb2c6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb2c84; end: 108cb2c8f; -[SCPreviewScope setCameraPreviewDelegate:] */

void FUN_108cb2c84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 108cb2c90; end: 108cb2c97; -[SCPreviewScope setupMultisnapViewObservable] */

undefined8 FUN_108cb2c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108cb2c98; end: 108cb2cc7; -[SCPreviewScope setSetupMultisnapViewObservable:] */

void FUN_108cb2c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb2cc8; end: 108cb2ccf; -[SCPreviewScope setCaptureDiscardRelatedDataObservable] */

undefined8 FUN_108cb2cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108cb2cd0; end: 108cb2cff; -[SCPreviewScope setSetCaptureDiscardRelatedDataObservable:] */

void FUN_108cb2cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb2d00; end: 108cb2d07; -[SCPreviewScope batchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable] */

undefined8 FUN_108cb2d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108cb2d08; end: 108cb2d37; -[SCPreviewScope setBatchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable:] */

void FUN_108cb2d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb2d38; end: 108cb2d3f; -[SCPreviewScope logDirectSnapCreateForTimelineWithSessionIDObservable] */

undefined8 FUN_108cb2d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108cb2d40; end: 108cb2d6f; -[SCPreviewScope setLogDirectSnapCreateForTimelineWithSessionIDObservable:] */

void FUN_108cb2d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb2d70; end: 108cb2d77; -[SCPreviewScope sendFlowEventSubject] */

undefined8 FUN_108cb2d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108cb2d78; end: 108cb2d7f; -[SCPreviewScope quickPostEventSubject] */

undefined8 FUN_108cb2d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108cb2d80; end: 108cb2e3f; -[SCPreviewScope .cxx_destruct] */

void FUN_108cb2d80(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb2e40; end: 108cb2ec7; -[SCPreviewWorkflowDelegateProxy initWithWorkflowDelegate:] */

undefined1 * FUN_108cb2e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe1e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb2ec8; end: 108cb2f6f; -[SCPreviewWorkflowDelegateProxy didCancelFromPreview:] */

void FUN_108cb2ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf72d00();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf72ce0(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb2f70; end: 108cb2ff7; -[SCPreviewWorkflowDelegateProxy didSendSnapsAndPostToStory:storyTypes:] */

void FUN_108cb2f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cb2ff8; end: 108cb308f; -[SCPreviewWorkflowDelegateProxy didCancelFromPreview:withCompletion:] */

void FUN_108cb2ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf72d20();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb3090; end: 108cb30ff; -[SCPreviewWorkflowDelegateProxy didComeFromCameraWithoutSendingSnap] */

void FUN_108cb3090(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf73c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108cb3100; end: 108cb3177; -[SCPreviewWorkflowDelegateProxy didSendDiscoverSharedMessageWithParameters:] */

void FUN_108cb3100(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b440();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb3178; end: 108cb31e7; -[SCPreviewWorkflowDelegateProxy didSendChatMessage] */

void FUN_108cb3178(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108cb31e8; end: 108cb3257; -[SCPreviewWorkflowDelegateProxy didSendToGallery] */

void FUN_108cb31e8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108cb3258; end: 108cb32cf; -[SCPreviewWorkflowDelegateProxy didSaveSnapWithParameters:] */

void FUN_108cb3258(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7a380();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb32d0; end: 108cb3347; -[SCPreviewWorkflowDelegateProxy didPostStoryWithStoryTypes:] */

void FUN_108cb32d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78540();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb3348; end: 108cb3407; -[SCPreviewWorkflowDelegateProxy didPostStoryWithStoryTypes:clientIds:spotlightTileBytes:isCrossPostingSpotlightToStories:] */

void FUN_108cb3348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78560();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb3408; end: 108cb347f; -[SCPreviewWorkflowDelegateProxy didPostStoryWithConfig:] */

void FUN_108cb3408(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb3480; end: 108cb34f7; -[SCPreviewWorkflowDelegateProxy didPostNewlyCreatedGroupStoriesWithMetadata:] */

void FUN_108cb3480(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf784a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb34f8; end: 108cb3587; -[SCPreviewWorkflowDelegateProxy didPresentSendTo] */

void FUN_108cb34f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf786c0();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf786c0(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb3588; end: 108cb3617; -[SCPreviewWorkflowDelegateProxy didDismissSendTo] */

void FUN_108cb3588(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf75120();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf75120(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb3618; end: 108cb368f; -[SCPreviewWorkflowDelegateProxy willDismissSendToWithSelectedItems:] */

void FUN_108cb3618(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a5f20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb3690; end: 108cb371f; -[SCPreviewWorkflowDelegateProxy didPresentStoryPostingTray] */

void FUN_108cb3690(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf78740();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf78740(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb3720; end: 108cb37af; -[SCPreviewWorkflowDelegateProxy didDismissStoryPostingTray] */

void FUN_108cb3720(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf752c0();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf752c0(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb37b0; end: 108cb383f; -[SCPreviewWorkflowDelegateProxy didPresentMusicPicker] */

void FUN_108cb37b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf78640();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf78640(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb3840; end: 108cb38cf; -[SCPreviewWorkflowDelegateProxy didDismissMusicPicker] */

void FUN_108cb3840(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf74f60();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf74f60(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb38d0; end: 108cb395f; -[SCPreviewWorkflowDelegateProxy didAttachMusicEditor] */

void FUN_108cb38d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf725c0();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf725c0(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}


