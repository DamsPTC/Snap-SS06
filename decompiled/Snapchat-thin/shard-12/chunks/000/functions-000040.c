/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c931dc; end: 108c931e7; -[SCLensProcessingReverseCameraController resourceId] */

undefined ** FUN_108c931dc(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108c931e8; end: 108c93223; -[SCLensProcessingReverseCameraController currentCVPixelBufferRef] */

undefined8 FUN_108c931e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf64620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5e2c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108c93224; end: 108c93273; -[SCLensProcessingReverseCameraController preferredFrameTransformForReverseCamera] */

void FUN_108c93224(undefined8 *param_1,long param_2)

{
  func_0x00010bf64620();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    func_0x00010c106b20(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c93274; end: 108c932c3; -[SCLensProcessingReverseCameraController didRegisterProviderToken:noFormatFoundError:] */

void FUN_108c93274(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea7090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSecondaryCameraStreamProvide_1125875c8)
    ;
    return;
  }
  return;
}



/* Entry: 108c932c4; end: 108c932ef; -[SCLensProcessingReverseCameraController didUnregisterProviderToken:] */

void FUN_108c932c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf65d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deactivateReverseCamera_1125b70f8);
  return;
}



/* Entry: 108c932f0; end: 108c932fb; -[SCLensProcessingReverseCameraController featureNameForToken:] */

undefined ** FUN_108c932f0(void)

{
  return &PTR____CFConstantStringClassReference_110ef09b8;
}



/* Entry: 108c932fc; end: 108c93383; -[SCLensProcessingReverseCameraController _setSecondaryCameraStreamProvider] */

void FUN_108c932fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bf64620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1898a0(param_1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108c93384; end: 108c93443; -[SCLensProcessingReverseCameraController _setSecondaryCameraStreamProviderIfStillLoading] */

void FUN_108c93384(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108c93444; end: 108c93483;  */

void FUN_108c93444(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010c076be0(), (int)lVar1 != 0)) {
    func_0x00010bea7080(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c93484; end: 108c93563; -[SCLensProcessingReverseCameraController startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_108c93484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108c93564; end: 108c93653;  */

void FUN_108c93564(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108c93654;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 108c93654; end: 108c936ab;  */

void FUN_108c93654(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c936ac; end: 108c936d7; -[SCLensProcessingReverseCameraController stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_108c936ac(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c936d8; end: 108c93797; -[SCLensProcessingReverseCameraController _didDeliverSecondarySampleBufferToLensCore] */

void FUN_108c936d8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108c93798; end: 108c937c7;  */

void FUN_108c93798(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1b2440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c937c8; end: 108c9396f; -[SCLensProcessingReverseCameraController setIsLoading:] */

void FUN_108c937c8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(byte *)(param_1 + 0x48) != param_3) {
    *(char *)(param_1 + 0x48) = (char)param_3;
    if (param_3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      lVar1 = param_1;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(uVar4);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c299c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa260();
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar3 = auStack_40;
    _objc_copyWeak(puVar3,auStack_38);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(uVar4);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 108c93970; end: 108c93977;  */

void FUN_108c93970(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_onFeatureStartsLoading_112616aa0);
  return;
}



/* Entry: 108c93978; end: 108c939bf;  */

void FUN_108c93978(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c939c0; end: 108c939c7; -[SCLensProcessingReverseCameraController isLoading] */

undefined1 FUN_108c939c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 108c939c8; end: 108c939df; -[SCLensProcessingReverseCameraController _didStopLoadingWithContainerView:] */

void FUN_108c939c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e4210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_onFeatureCompletesLoading_112616a98);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e41f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_onFeatureAbortsLoading_112616a90);
  return;
}



/* Entry: 108c939e0; end: 108c939eb; -[SCLensProcessingReverseCameraController dataSourceStream] */

void FUN_108c939e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 108c939ec; end: 108c939f3; -[SCLensProcessingReverseCameraController setDataSourceStream:] */

void FUN_108c939ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c939f4; end: 108c93a8f; -[SCLensProcessingReverseCameraController .cxx_destruct] */

void FUN_108c939f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c93a90; end: 108c93d07; -[SCLensProcessingReverseCameraPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c93a90(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126db608;
  _objc_alloc();
  lVar16 = (long)_DAT_11277964c;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar4 = lVar16;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112779650;
  _objc_loadWeakRetained();
  lVar5 = lVar17;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf4b320();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112779654;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf70fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112779658;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf70f80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11277965c;
  _objc_loadWeakRetained(lVar14);
  lVar18 = lVar14;
  func_0x00010bf2b720();
  func_0x00010bffb6a0(puVar1,param_2,lVar3,lVar4,lVar7,lVar9,lVar13,lVar18);
  lVar18 = (long)_DAT_112779660;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar17 = (long)_DAT_112779664;
  lVar2 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar2);
  lVar16 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar16);
  _objc_release(lVar2);
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  param_1 = param_1 + lVar17;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefe60(uVar15,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c93d08; end: 108c93d63; -[SCLensProcessingReverseCameraPluginEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c93d08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112779660) != 0) {
    func_0x00010bf65d40();
  }
  puStack_28 = PTR_PTR_1126fdfe8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c93d64; end: 108c93ddb; -[SCLensProcessingReverseCameraPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c93d64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779654);
  _objc_destroyWeak(param_1 + _DAT_112779658);
  _objc_destroyWeak(param_1 + _DAT_11277965c);
  _objc_destroyWeak(param_1 + _DAT_112779650);
  _objc_destroyWeak(param_1 + _DAT_11277964c);
  _objc_destroyWeak(param_1 + _DAT_112779664);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779660,0);
  return;
}



/* Entry: 108c93ddc; end: 108c93fbb; -[SCLensProcessingFPSTracker initWithEffectApplicator:performer:] */

undefined8 *
FUN_108c93ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdff0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126db610;
    _objc_alloc();
    func_0x00010c050b80();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dafa0;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dafa0;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e33e0(param_3);
    puVar4 = puVar1;
    func_0x00010bdedcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c93fbc; end: 108c9400b;  */

void FUN_108c93fbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec6b00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c9400c; end: 108c9410f; -[SCLensProcessingFPSTracker fpsInfoUIUpdateObservable] */

void FUN_108c9400c(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d5a0(0x3ff0000000000000,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c94110; end: 108c9414f;  */

void FUN_108c94110(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf5e8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c94150; end: 108c94237; -[SCLensProcessingFPSTracker fpsInfoLoggingObservable] */

void FUN_108c94150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26d5a0(0x3fc999999999999a,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c94238; end: 108c94277;  */

void FUN_108c94238(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf5e8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c94278; end: 108c9432b; -[SCLensProcessingFPSTracker _createFirstFrameRenderedObservable] */

void FUN_108c94278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c0e0ea0(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9432c; end: 108c9434b;  */

bool FUN_108c9432c(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 != 0;
}



/* Entry: 108c9434c; end: 108c943a3;  */

void FUN_108c9434c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db618;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  _CACurrentMediaTime();
  func_0x00010bff3da0(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c943a4; end: 108c94477; -[SCLensProcessingFPSTracker currentFPSInfo] */

void FUN_108c943a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126db620;
  _objc_alloc(PTR_PTR_1126db620);
  lVar2 = param_2;
  func_0x00010c09c8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c07bee0(param_2);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010c2523e0(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3e20(*(undefined8 *)(param_2 + 0x10));
  uVar5 = param_1;
  func_0x00010c0c3e20(*(undefined8 *)(param_2 + 0x18));
  uVar6 = uVar5;
  func_0x00010c24d780(*(undefined8 *)(param_2 + 0x18));
  func_0x00010bff3d80(param_1,uVar5,uVar6,puVar1,param_3,lVar2,lVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c94478; end: 108c94503; -[SCLensProcessingFPSTracker didProcessEffects:latency:inputSource:] */

void FUN_108c94478(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((param_5 - 3U < 2) && (uVar1 = param_2, func_0x00010c07bee0(), (uVar1 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010bea5540(param_2);
    _objc_release(puVar2);
  }
  func_0x00010c1b3c20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * 1000.0,*(undefined8 *)(param_2 + 0x18),PTR_s_addValue__11259cba8);
  return;
}



/* Entry: 108c94504; end: 108c945f3; -[SCLensProcessingFPSTracker didDrawSampleBuffer:latency:] */

void FUN_108c94504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3390;
  _objc_opt_class(PTR_PTR_1126d3390);
  puVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  puVar1 = param_4;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010c092900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010bf755e0(param_1,param_2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c945f4; end: 108c94693; -[SCLensProcessingFPSTracker didDrawTextureWithEffects:latency:] */

void FUN_108c945f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010bea5540(param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _CACurrentMediaTime();
  func_0x00010c114b20(uVar1);
  func_0x00010c088c00(*(undefined8 *)(param_2 + 8));
  dVar2 = param_1;
  func_0x00010bfb13e0(*(undefined8 *)(param_2 + 8));
  if (0.5 < param_1 - dVar2) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bfb6f20(*(undefined8 *)(param_2 + 8));
    func_0x00010befc800(uVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28),param_3,param_4);
    func_0x00010c137fe0(*(undefined8 *)(param_2 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c94694; end: 108c9470f; -[SCLensProcessingFPSTracker _setLoadedEffects:] */

void FUN_108c94694(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c09c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c072060();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1be960(param_1,param_2,param_3);
    func_0x00010be94200(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c94710; end: 108c9483b; -[SCLensProcessingFPSTracker _subscribeOnApplicator:] */

void FUN_108c94710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf07dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf65f60(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108c9483c; end: 108c948db;  */

void FUN_108c9483c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf8d080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5540(param_1);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c948dc; end: 108c94903; -[SCLensProcessingFPSTracker _resetTracking] */

/* WARNING: Possible PIC construction at 0x000108c948f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c948f4) */

void FUN_108c948dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 108c94904; end: 108c9490b; -[SCLensProcessingFPSTracker firstFrameRenderedObservable] */

undefined8 FUN_108c94904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108c9490c; end: 108c94917; -[SCLensProcessingFPSTracker isRecording] */

byte FUN_108c9490c(long param_1)

{
  return *(byte *)(param_1 + 0x40) & 1;
}



/* Entry: 108c94918; end: 108c9491f; -[SCLensProcessingFPSTracker setIsRecording:] */

void FUN_108c94918(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108c94920; end: 108c9492b; -[SCLensProcessingFPSTracker loadedEffectIds] */

void FUN_108c94920(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 108c9492c; end: 108c94933; -[SCLensProcessingFPSTracker setLoadedEffectIds:] */

void FUN_108c9492c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c94934; end: 108c949b7; -[SCLensProcessingFPSTracker .cxx_destruct] */

void FUN_108c94934(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108c949b8; end: 108c94a23; -[SCLensEntryPointTracker init] */

undefined1 * FUN_108c949b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdff8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c94a24; end: 108c94aef; -[SCLensEntryPointTracker pushEntryPoint:forLensWithId:] */

void FUN_108c94a24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010c0e00e0(puVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_4);
    }
    func_0x00010bee0880(param_1,param_2,puVar2,*(undefined8 *)(param_1 + 8),param_3);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c94af0; end: 108c94b57; -[SCLensEntryPointTracker resetEntryPointsForLensWithId:] */

void FUN_108c94af0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c94b58; end: 108c94c43; -[SCLensEntryPointTracker popEntryPointForLensWithId:] */

ulong FUN_108c94b58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf529e0();
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c089820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2827c0();
      _objc_release(uVar3);
    }
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (1 < uVar3) {
      func_0x00010c12cd60(uVar2);
    }
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108c94c44; end: 108c94d17; -[SCLensEntryPointTracker _updateStack:defaultEntryPoint:newEntryPoint:] */

void FUN_108c94c44(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  uVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if ((2 < param_5) < uVar1) {
    func_0x00010c130f40(param_3,param_2,(ulong)(2 < param_5),puVar2);
  }
  else {
    func_0x00010befa120(param_3,param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c94d18; end: 108c94d23; -[SCLensEntryPointTracker .cxx_destruct] */

void FUN_108c94d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c94d24; end: 108c94e67; -[SCLensProcessingLaunchDataStore initWithPersistentStore:lensEntryPointTracker:lensUserProvider:lensUserDataProvider:lensNetworkPermissionsProvider:] */

undefined1 *
FUN_108c94d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fe000;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c94e68; end: 108c94f43; -[SCLensProcessingLaunchDataStore setupLaunchParams:forEffectId:] */

void FUN_108c94e68(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar1 = param_1;
    func_0x00010be47860(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ce8c0;
    _objc_alloc_init(PTR_PTR_1126ce8c0);
    func_0x00010c189980();
    func_0x00010c1b96c0(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c94f44; end: 108c94fcf; -[SCLensProcessingLaunchDataStore clearLaunchParamsForEffectId:] */

void FUN_108c94f44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar1 = param_1;
    func_0x00010be47860(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b96c0();
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c94fd0; end: 108c9509f; -[SCLensProcessingLaunchDataStore setupLaunchDate:forEffectId:] */

void FUN_108c94fd0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar1 = param_1;
    func_0x00010be47860(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0458;
    _objc_alloc(PTR_PTR_1126b0458);
    func_0x00010c009500();
    func_0x00010c1d7a60(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c950a0; end: 108c9512b; -[SCLensProcessingLaunchDataStore clearLaunchDateForEffectId:] */

void FUN_108c950a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar1 = param_1;
    func_0x00010be47860(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7a60();
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c9512c; end: 108c95133; -[SCLensProcessingLaunchDataStore effectInfoForLensMetadata:] */

void FUN_108c9512c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_effectInfoForLensMetadata_isWarm_1125c0d38,param_3,0);
  return;
}



/* Entry: 108c95134; end: 108c95513; -[SCLensProcessingLaunchDataStore effectInfoForLensMetadata:isWarmup:] */

void FUN_108c95134(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be62a40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0fa320(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126db628;
  _objc_opt_new(PTR_PTR_1126db628);
  func_0x00010c20c1a0();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c097c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be47860(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(lVar7,param_2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  uVar3 = param_3;
  func_0x00010c07f140();
  if ((int)uVar3 != 0) {
    puVar10 = PTR_PTR_1126ae740;
    func_0x00010bf09f00(PTR_PTR_1126ae740);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    func_0x00010c17f9c0(lVar7,param_2,puVar10);
    _objc_release(puVar10);
  }
  func_0x00010c21e180(lVar7,param_2,uVar2);
  lVar11 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c103860(lVar11,param_2,uVar3);
  if (lVar12 - 1U < 7) {
    uVar15 = *(undefined4 *)(&UNK_10df9f4b8 + (lVar12 - 1U) * 4);
  }
  else {
    uVar15 = 0;
  }
  func_0x00010c196980(lVar7,param_2,uVar15);
  _objc_release(uVar3);
  _objc_release(lVar11);
  func_0x00010c1dad20(lVar7,param_2,puVar5);
  if (lVar1 != 0) {
    func_0x00010c1cc3c0(lVar7,param_2,lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x28);
  lVar12 = lVar7;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar12;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    lVar13 = lVar7;
    func_0x00010c291840(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(lVar14);
    _objc_release(lVar13);
  }
  _objc_release(lVar11);
  _objc_release(lVar12);
  uVar3 = param_3;
  func_0x00010c230800();
  if ((uVar3 & 1) != 0) {
    func_0x00010c2005c0(param_3,param_2,0);
  }
  lVar12 = lVar7;
  func_0x00010bf63640(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4b240(param_1,param_2,lVar12,param_3,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c95514; end: 108c9558f; -[SCLensProcessingLaunchDataStore isValidLaunchData] */

bool FUN_108c95514(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c097c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 != 0;
}



/* Entry: 108c95590; end: 108c95597; -[SCLensProcessingLaunchDataStore forceReloadEffectForLensMetadata:] */

void FUN_108c95590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c230810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_shouldForceReload_112669c28);
  return;
}



/* Entry: 108c95598; end: 108c9559f; -[SCLensProcessingLaunchDataStore containsValidContentForLensMetadata:] */

undefined8 FUN_108c95598(void)

{
  return 1;
}



/* Entry: 108c955a0; end: 108c95657; -[SCLensProcessingLaunchDataStore _launchDataWithEffectId:] */

void FUN_108c955a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x28);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ce8b8;
    _objc_opt_new(PTR_PTR_1126ce8b8);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ce8b8;
      _objc_opt_new(PTR_PTR_1126ce8b8);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar3,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c95658; end: 108c95853; -[SCLensProcessingLaunchDataStore _networkPermissionsForLens:] */

void FUN_108c95658(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    lVar5 = param_3;
    func_0x00010c0d7d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126db630;
      _objc_opt_new();
      func_0x00010bf926c0(lVar2);
      func_0x00010c195460(puVar9);
      puVar3 = PTR_PTR_1126ae740;
      _objc_opt_new();
      lVar4 = lVar2;
      func_0x00010bf928e0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_e8;
      lVar5 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010c067ec0(*(undefined8 *)(lVar10 * 8));
          func_0x00010befc800(puVar3);
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        param_4 = auStack_e8;
        lVar5 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      func_0x00010c1954c0(puVar9);
      lVar1 = lVar2;
      func_0x00010bf92a40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c0d3c80();
      lVar5 = lVar4;
      func_0x00010c195500(puVar9);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    _objc_retain(lVar5);
    func_0x00010bf04b60();
    func_0x00010c11a280(param_4);
    func_0x00010c080040();
    if (lRam000000011372e3c0 != -1) {
      func_0x000107c27d9c(0x11372e3c0,&PTR___NSConcreteGlobalBlock_110ac0208);
    }
    if ((bRam000000011372e3b8 & 1) != 0) {
      puVar9 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010bf981e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar9);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c0720c0();
      }
      _objc_release(puVar6);
    }
    puVar9 = PTR_PTR_1126db638;
    _objc_alloc(PTR_PTR_1126db638);
    puVar7 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010bf4cf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0243a0(puVar9);
    _objc_release(lVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c167200(puVar9);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108c95854; end: 108c95a43; -[SCLensProcessingLaunchDataStore _lensInfoWithLaunchMetadata:lens:isWarmup:forceReload:] */

void FUN_108c95854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04b60();
  func_0x00010c11a280(param_4);
  func_0x00010c080040();
  if (lRam000000011372e3c0 != -1) {
    func_0x000107c27d9c(0x11372e3c0,&PTR___NSConcreteGlobalBlock_110ac0208);
  }
  if ((bRam000000011372e3b8 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf981e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c0720c0();
    }
    _objc_release(puVar3);
  }
  puVar1 = PTR_PTR_1126db638;
  _objc_alloc(PTR_PTR_1126db638);
  uVar4 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf4cf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0243a0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c167200(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c95a44; end: 108c95a4b; -[SCLensProcessingLaunchDataStore persistentStore] */

undefined8 FUN_108c95a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c95a4c; end: 108c95b0b; -[SCLensProcessingLaunchDataStore .cxx_destruct] */

void FUN_108c95a4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c95b0c; end: 108c95b7f; -[SCLensProcessingCompassDataProvidingAdapter initWithCompassProvider:] */

undefined1 * FUN_108c95b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe008;
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



/* Entry: 108c95b80; end: 108c95bdf; -[SCLensProcessingCompassDataProvidingAdapter startCompassUpdates] */

void FUN_108c95b80(long param_1)

{
  undefined *puVar1;
  
  func_0x000107c31820(&UNK_10f510dfa);
  func_0x00010c24e540(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c95be0; end: 108c95c3f; -[SCLensProcessingCompassDataProvidingAdapter stopCompassUpdates] */

void FUN_108c95be0(long param_1)

{
  undefined *puVar1;
  
  func_0x000107c31820(&UNK_10f510e18);
  func_0x00010c255d80(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c95c40; end: 108c95cb3; -[SCLensProcessingCompassDataProvidingAdapter heading] */

void FUN_108c95c40(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_10f510e35;
  func_0x000107c31820(&UNK_10f510e35);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe0320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c95cb4; end: 108c95cbf; -[SCLensProcessingCompassDataProvidingAdapter .cxx_destruct] */

void FUN_108c95cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c95cc0; end: 108c95d83; -[SCLensProcessingGeoDataProvidingAdapter initWithGeoDataProvider:dirtyFrameProvider:performer:] */

undefined1 *
FUN_108c95cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c95d84; end: 108c95ef3; -[SCLensProcessingGeoDataProvidingAdapter requestGeoDataAsyncWithGeoDataComponent:] */

void FUN_108c95d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f510e4d;
  func_0x000107c31820(&UNK_10f510e4d);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,auStack_50);
  func_0x00010c1355c0(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  func_0x000107c31828(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108c95ef4; end: 108c95feb;  */

void FUN_108c95ef4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 108c95fec; end: 108c9609f;  */

void FUN_108c95fec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c31820(&UNK_10f510e69);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010be5b180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c1a2b20(*(undefined8 *)(param_1 + 0x28),param_2,lVar3,0);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0bb400();
  _objc_release(param_1);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c960a0; end: 108c960a7; -[SCLensProcessingGeoDataProvidingAdapter prefetchedGeoData] */

undefined8 FUN_108c960a0(void)

{
  return 0;
}



/* Entry: 108c960a8; end: 108c9629f; -[SCLensProcessingGeoDataProvidingAdapter _lsaGeoDataFromLensProcessingType:] */

void FUN_108c960a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2a2ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe4800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b1a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126db640;
  _objc_alloc(PTR_PTR_1126db640);
  uVar1 = param_3;
  func_0x00010c086020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060880(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126db648;
  _objc_alloc(PTR_PTR_1126db648);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010c2a2ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34540();
  func_0x00010c0df740(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c2a2ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9fa60();
  func_0x00010c0df740(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c2a2ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar7;
  func_0x00010c09f000(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd380(puVar4,param_2,puVar5,puVar6,uVar8,param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126db650;
  _objc_alloc(PTR_PTR_1126db650);
  func_0x00010c062b20();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c962a0; end: 108c962af; -[SCLensProcessingGeoDataProvidingAdapter _lsaHourlyForecastFromLensProcessingType:] */

void FUN_108c962a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_110ac0278);
  return;
}



/* Entry: 108c962b0; end: 108c963d3;  */

void FUN_108c962b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126db658;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf34540(param_2);
  func_0x00010c0df740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf9fa60(param_2);
  func_0x00010c0df740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c09e980(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bffd400(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c963d4; end: 108c96417; -[SCLensProcessingGeoDataProvidingAdapter .cxx_destruct] */

void FUN_108c963d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c96418; end: 108c964b3; -[SCLensProcessingLocationProvidingAdapter initWithLocationProvider:dirtyFrameProvider:] */

undefined1 *
FUN_108c96418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c964b4; end: 108c96673; -[SCLensProcessingLocationProvidingAdapter startLocationUpdates:] */

void FUN_108c964b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f510ef1;
  func_0x000107c31820(&UNK_10f510ef1);
  puVar2 = PTR_PTR_1126db660;
  _objc_alloc(PTR_PTR_1126db660);
  uVar3 = param_4;
  func_0x00010c069960(param_4);
  func_0x00010bf86f00(param_4);
  uVar5 = param_1;
  func_0x00010bf6e9c0(param_4);
  func_0x00010c01e960((double)(int)uVar3,param_1,uVar5,puVar2);
  func_0x00010c24f240(*(undefined8 *)(param_2 + 8));
  _objc_copyWeak(auStack_58,param_2 + 0x10);
  puVar4 = auStack_58;
  _objc_loadWeakRetained(puVar4);
  func_0x00010c0bb400();
  _objc_release(puVar4);
  func_0x00010bf86d40(*(undefined8 *)(param_2 + 0x18));
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c09f820();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108c96674; end: 108c9669f;  */

void FUN_108c96674(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0bb400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c966a0; end: 108c96717; -[SCLensProcessingLocationProvidingAdapter stopLocationUpdates] */

void FUN_108c966a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c31820(&UNK_10f510f10);
  func_0x00010c256180(*(undefined8 *)(param_1 + 8));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c96718; end: 108c9678b; -[SCLensProcessingLocationProvidingAdapter location] */

void FUN_108c96718(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_10f510f2e;
  func_0x000107c31820(&UNK_10f510f2e);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c09ea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c9678c; end: 108c967c3; -[SCLensProcessingLocationProvidingAdapter .cxx_destruct] */

void FUN_108c9678c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c967c4; end: 108c96c1b; -[SCLensProcessingLocationDataPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c967c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_70;
  
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127796fc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar18;
  func_0x00010bf39900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar18);
  if (lRam000000011372e3d0 != -1) {
    func_0x000107c27d9c(0x11372e3d0,&PTR___NSConcreteGlobalBlock_110ac02d8);
  }
  if ((bRam000000011372e3c8 & 1) == 0) {
    puStack_70 = PTR_PTR_1126db668;
    _objc_alloc();
    lVar18 = param_1;
    func_0x000108c96c50(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar18;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar19;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027f60();
    _objc_release(lVar3);
    _objc_release(lVar19);
    _objc_release(lVar1);
    _objc_release(lVar18);
  }
  else {
    puStack_70 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126db670;
  _objc_alloc();
  lVar18 = param_1;
  func_0x000108c96c74();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x000108c96c74();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar19;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000108c96c98();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a2da0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000108c96c98();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a2d80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127796f0;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar15;
  func_0x00010c0ec340();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000108c96c50();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127796dc;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar16;
  func_0x00010c08fe60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127796f8;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar20;
  func_0x00010c298140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026ea0();
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127796d8);
  *(undefined **)(param_1 + _DAT_1127796d8) = puVar4;
  _objc_release(uVar17);
  _objc_release(lVar14);
  _objc_release(lVar20);
  _objc_release(lVar13);
  _objc_release(lVar16);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar1);
  _objc_release(lVar18);
  lVar19 = (long)_DAT_1127796dc;
  lVar18 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar18);
  lVar1 = lVar18;
  func_0x00010c09ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(lVar18);
  lVar18 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar18);
  lVar1 = lVar18;
  func_0x00010bfc10c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(lVar18);
  param_1 = param_1 + lVar19;
  _objc_loadWeakRetained(param_1);
  lVar18 = param_1;
  func_0x00010bf43540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(puStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108c96c1c; end: 108c96cbb;  */

void FUN_108c96c1c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_2,param_2,&PTR____CFConstantStringClassReference_110ef0a18,0xffffffff,0)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 108c96cbc; end: 108c96db7; -[SCLensProcessingLocationDataPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c96cbc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127796fc);
  _objc_destroyWeak(param_1 + _DAT_1127796f8);
  _objc_destroyWeak(param_1 + _DAT_1127796f4);
  _objc_destroyWeak(param_1 + _DAT_1127796f0);
  _objc_destroyWeak(param_1 + _DAT_1127796ec);
  _objc_destroyWeak(param_1 + _DAT_1127796e8);
  _objc_destroyWeak(param_1 + _DAT_1127796dc);
  _objc_destroyWeak(param_1 + _DAT_1127796e4);
  _objc_destroyWeak(param_1 + _DAT_1127796e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127796d8,0);
  return;
}



/* Entry: 108c96db8; end: 108c96e5b; -[SCLensCorePersistentStoreV2 initWithPreferences:performer:] */

undefined1 *
FUN_108c96db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe020;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c96e5c; end: 108c96e63; -[SCLensCorePersistentStoreV2 persistedDataForLensId:] */

void FUN_108c96e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09b870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_loadLensPersistentStoreWithEffec_112604828);
  return;
}



/* Entry: 108c96e64; end: 108c96edf; -[SCLensCorePersistentStoreV2 lensComponent:loadPersistentStoreForLensWithId:] */

void FUN_108c96e64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c09b860(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dad40(param_3,param_2,uVar1,param_4,0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c96ee0; end: 108c96f97; -[SCLensCorePersistentStoreV2 lensComponent:lensId:savePersistentStore:] */

void FUN_108c96ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108c96f98;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108c96f98; end: 108c96fab;  */

void FUN_108c96f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_saveLensPersistentStoreWithEffec_112630428,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108c96fac; end: 108c96fe7; -[SCLensCorePersistentStoreV2 .cxx_destruct] */

void FUN_108c96fac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c96fe8; end: 108c9704f; -[SCLensCoreSessionPersistentStoreV2 init] */

undefined1 * FUN_108c96fe8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}


