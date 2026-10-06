/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c9bac4; end: 108c9bb3b;  */

void FUN_108c9bac4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c096180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108c9bb3c; end: 108c9bb6b;  */

void FUN_108c9bb3c(void)

{
  _objc_alloc(PTR_PTR_1126db778);
  func_0x00010c04ea00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9bb6c; end: 108c9bc07;  */

void FUN_108c9bb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126db780;
  _objc_alloc(PTR_PTR_1126db780);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c097cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c097c60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0356a0(puVar3,param_2,uVar1,uVar2,uVar4,uVar5,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c9bc08; end: 108c9bd6f; -[SCLensProcessingProxyEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9bc08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779894,0);
  _objc_storeStrong(param_1 + _DAT_112779890,0);
  _objc_storeStrong(param_1 + _DAT_11277988c,0);
  _objc_destroyWeak(param_1 + _DAT_112779858);
  _objc_destroyWeak(param_1 + _DAT_112779850);
  _objc_destroyWeak(param_1 + _DAT_11277984c);
  _objc_destroyWeak(param_1 + _DAT_112779848);
  _objc_destroyWeak(param_1 + _DAT_112779888);
  _objc_destroyWeak(param_1 + _DAT_112779844);
  _objc_destroyWeak(param_1 + _DAT_112779868);
  _objc_destroyWeak(param_1 + _DAT_112779884);
  _objc_destroyWeak(param_1 + _DAT_112779880);
  _objc_destroyWeak(param_1 + _DAT_112779878);
  _objc_destroyWeak(param_1 + _DAT_112779874);
  _objc_destroyWeak(param_1 + _DAT_112779870);
  _objc_destroyWeak(param_1 + _DAT_112779860);
  _objc_destroyWeak(param_1 + _DAT_11277985c);
  _objc_destroyWeak(param_1 + _DAT_112779854);
  _objc_destroyWeak(param_1 + _DAT_112779834);
  _objc_destroyWeak(param_1 + _DAT_112779838);
  _objc_destroyWeak(param_1 + _DAT_112779864);
  _objc_destroyWeak(param_1 + _DAT_112779830);
  _objc_destroyWeak(param_1 + _DAT_11277983c);
  _objc_destroyWeak(param_1 + _DAT_11277986c);
  _objc_destroyWeak(param_1 + _DAT_11277987c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779840,0);
  return;
}



/* Entry: 108c9bd70; end: 108c9be5f;  */

void FUN_108c9bd70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126db788;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf9e620(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c011420(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c9be60; end: 108c9bf17;  */

void FUN_108c9be60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126db798;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf44420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c278d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0f98a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c054f20(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c9bf18; end: 108c9bf5f;  */

void FUN_108c9bf18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9bf60; end: 108c9bf67;  */

void FUN_108c9bf60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_effectInfoProvider_1125c0d40);
  return;
}



/* Entry: 108c9bf68; end: 108c9bf97;  */

void FUN_108c9bf68(void)

{
  _objc_alloc(PTR_PTR_1126db7a0);
  func_0x00010c00ef60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9bf98; end: 108c9bf9f;  */

void FUN_108c9bf98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_effectAnalyticsProvider_1125c0ce8);
  return;
}



/* Entry: 108c9bfa0; end: 108c9bfa7; -[SCLensProcessingComponentsFacade externalStreamProvider] */

undefined8 FUN_108c9bfa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108c9bfa8; end: 108c9bfaf; -[SCLensProcessingComponentsFacade lensProcessingCore] */

undefined8 FUN_108c9bfa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108c9bfb0; end: 108c9c03f; -[SCLensProcessingComponentsFacade .cxx_destruct] */

void FUN_108c9bfb0(long param_1)

{
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



/* Entry: 108c9c040; end: 108c9c477; -[SCLensProcessingFacade initWithComponentManager:effectInfoProvider:processingTracker:configuration:applicationConfiguration:settings:performer:enableAudioProcessing:useDeviceMotionComponent:] */

undefined8 *
FUN_108c9c040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,uint param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fe070;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    func_0x00010c1c0320(PTR_PTR_1126db560);
    puVar3 = PTR_PTR_1126db7a8;
    func_0x00010bf549a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57500();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126db578;
    _objc_alloc();
    puVar6 = PTR_PTR_1126db7b0;
    _objc_opt_new(PTR_PTR_1126db7b0);
    func_0x00010c023460();
    _objc_release(puVar6);
    func_0x00010c193d80(puVar5);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(puVar5);
    uVar2 = puVar1[3];
    puVar1[3] = puVar5;
    _objc_release(uVar2);
    if ((param_10 & 1) == 0) {
      puVar6 = PTR_PTR_1126db7b8;
      _objc_opt_new();
      uVar2 = puVar1[4];
      puVar1[4] = puVar6;
    }
    else {
      puVar6 = PTR_PTR_1126db590;
      _objc_alloc();
      uVar2 = param_3;
      func_0x00010bf0f7e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c091900(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf0f6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff53e0();
      uVar7 = puVar1[4];
      puVar1[4] = puVar6;
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_10._1_1_;
    puVar6 = PTR_PTR_1126db598;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c29ad60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0610c0();
    uVar8 = puVar1[2];
    puVar1[2] = puVar6;
    _objc_release(uVar8);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126db7c0;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf024e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0ccc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2cc0();
    uVar9 = puVar1[7];
    puVar1[7] = puVar6;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c097c00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c260400();
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c0cf2e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2603c0();
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c9c478; end: 108c9c47f;  */

void FUN_108c9c478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensComponent_112602050);
  return;
}



/* Entry: 108c9c480; end: 108c9c597; -[SCLensProcessingFacade dealloc] */

void FUN_108c9c480(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  _CACurrentMediaTime();
  func_0x00010c2a5e60(uVar3);
  if (*(char *)(param_1 + 8) == '\x01') {
    lVar1 = param_1;
    func_0x00010bf44420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf70b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189680();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bf44420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108c9c598;
  puStack_40 = &UNK_110849810;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  func_0x00010c06a240(lVar1);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  puStack_60 = PTR_PTR_1126fe070;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108c9c598; end: 108c9c5bb;  */

void FUN_108c9c598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010bf748d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_didDestroyLensCoreWithTimestamp__1125babd8);
  return;
}



/* Entry: 108c9c5bc; end: 108c9c5c3; -[SCLensProcessingFacade processor] */

undefined8 FUN_108c9c5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c9c5c4; end: 108c9c5cb; -[SCLensProcessingFacade applicator] */

undefined8 FUN_108c9c5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108c9c5cc; end: 108c9c5d3; -[SCLensProcessingFacade audioProcessor] */

undefined8 FUN_108c9c5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c9c5d4; end: 108c9c5db; -[SCLensProcessingFacade performer] */

undefined8 FUN_108c9c5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c9c5dc; end: 108c9c5e3; -[SCLensProcessingFacade componentManager] */

undefined8 FUN_108c9c5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108c9c5e4; end: 108c9c5eb; -[SCLensProcessingFacade effectAnalyticsProvider] */

undefined8 FUN_108c9c5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c9c5ec; end: 108c9c5f3; -[SCLensProcessingFacade tracker] */

undefined8 FUN_108c9c5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108c9c5f4; end: 108c9c5fb; -[SCLensProcessingFacade effectInfoProvider] */

undefined8 FUN_108c9c5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108c9c5fc; end: 108c9c603; -[SCLensProcessingFacade lensRemoteAssetsProvider] */

undefined8 FUN_108c9c5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108c9c604; end: 108c9c633; -[SCLensProcessingFacade setLensRemoteAssetsProvider:] */

void FUN_108c9c604(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108c9c634; end: 108c9c6b7; -[SCLensProcessingFacade .cxx_destruct] */

void FUN_108c9c634(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108c9c6b8; end: 108c9c727; -[SCLensProcessingFactoryImpl sharedPersistentStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9c6b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127798f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fa440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108c9c728; end: 108c9c75b;  */

void FUN_108c9c728(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf07ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c9c75c; end: 108c9cf17; -[SCLensProcessingFactoryImpl createLensProcessingCoreWithSettings:performer:usecase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9c75c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar18 = (long)_DAT_112779924;
  _os_unfair_lock_lock(param_1 + lVar18);
  if (param_5 == 6) {
    lVar20 = (long)_DAT_112779938;
    lVar2 = *(long *)(param_1 + lVar20);
    func_0x00010bf07ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar2;
    func_0x00010bf5e060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar21;
    func_0x00010bf529e0();
    _objc_release(lVar21);
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar20);
      *(undefined8 *)(param_1 + lVar20) = 0;
      _objc_release(uVar4);
    }
    lVar21 = *(long *)(param_1 + lVar20);
    _objc_retain(lVar21);
    if (lVar21 != 0) goto LAB_108c9ce4c;
    piVar19 = (int *)&DAT_1127798fc;
  }
  else {
    piVar19 = (int *)&DAT_1127798f8;
    lVar21 = *(long *)(param_1 + _DAT_112779934);
    _objc_retain(lVar21);
    if (lVar21 != 0) goto LAB_108c9ce4c;
  }
  uVar4 = *(undefined8 *)(param_1 + *piVar19);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &UNK_10f5113f7;
  func_0x000107c31820();
  lVar21 = param_1 + _DAT_112779908;
  _objc_loadWeakRetained();
  lVar3 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  puVar6 = PTR_PTR_1126db7c8;
  _objc_alloc();
  lVar21 = param_1 + _DAT_11277990c;
  _objc_loadWeakRetained(lVar21);
  func_0x00010bffe1e0();
  _objc_release(lVar21);
  puVar7 = PTR_PTR_1126db7d0;
  _objc_alloc();
  puVar8 = PTR_PTR_1126c3450;
  func_0x00010c098380(PTR_PTR_1126c3450);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c3458;
  func_0x00010c2918a0(PTR_PTR_1126c3458);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0749c0(lVar3);
  func_0x00010c03fa60((float)*(double *)(param_1 + _DAT_112779918));
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (param_5 == 6) {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112779910);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + _DAT_112779904);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c2929a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  func_0x00010beade60(param_1);
  uVar12 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be62da0();
  _objc_release(uVar12);
  puVar9 = PTR_PTR_1126db7d8;
  _objc_alloc();
  uVar12 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034da0();
  _objc_release(uVar12);
  puVar11 = PTR_PTR_1126db7e0;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127798f4);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001660();
  _objc_release(uVar12);
  puVar13 = PTR_PTR_1126db7e8;
  _objc_alloc();
  func_0x00010bff47e0();
  puVar14 = PTR_PTR_1126db7f0;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112779900);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar15;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017da0();
  _objc_release(uVar12);
  _objc_release(uVar15);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108c9cf18;
  uStack_88 = 0x108c9cf28;
  uStack_80 = 0;
  _objc_initWeak(auStack_b0,param_1);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_108c9cf30;
  puStack_108 = &UNK_110ac0aa8;
  _objc_copyWeak(auStack_c0,auStack_b0);
  _objc_retain(puVar14);
  puStack_100 = puVar14;
  _objc_retain(puVar11);
  puStack_f8 = puVar11;
  uStack_b8 = param_5 == 6;
  _objc_retain(uVar4);
  uStack_f0 = uVar4;
  _objc_retain(puVar7);
  puStack_e8 = puVar7;
  _objc_retain(puVar13);
  puStack_e0 = puVar13;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  _objc_retain(param_4);
  uStack_d0 = param_4;
  _objc_retain(uVar10);
  ppuVar16 = &puStack_120;
  uStack_c8 = uVar10;
  _objc_retainBlock();
  puVar8 = PTR_PTR_1126db568;
  _objc_retain();
  puVar17 = PTR_PTR_1126db570;
  func_0x00010bf44440(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c0a4000(uVar10);
    puVar17 = PTR_PTR_1126db800;
    _objc_alloc();
    uVar12 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0115a0();
    uVar15 = puStack_a0[5];
    puStack_a0[5] = puVar17;
    _objc_release(uVar15);
    _objc_release(uVar12);
  }
  uVar12 = puStack_a0[5];
  lVar21 = 0x50;
  if (param_5 != 6) {
    lVar21 = 0x4c;
  }
  iVar1 = *(int *)(&DAT_1127798e8 + lVar21);
  _objc_retain(uVar12);
  uVar15 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = uVar12;
  _objc_release(uVar15);
  lVar21 = puStack_a0[5];
  _objc_retain(lVar21);
  _objc_release(puVar8);
  _objc_release(ppuVar16);
  _objc_release(ppuVar16);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_release(uStack_f0);
  _objc_release(puStack_f8);
  _objc_release(puStack_100);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar3);
  func_0x000107c31828(puVar5);
  _objc_release(uVar4);
LAB_108c9ce4c:
  _os_unfair_lock_unlock(param_1 + lVar18);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar21);
  return;
}



/* Entry: 108c9cf18; end: 108c9cf2f;  */

void FUN_108c9cf18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108c9cf30; end: 108c9d283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9cf30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar5 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    _CACurrentMediaTime();
    func_0x00010c2a5d60(uVar12);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf54fa0(uVar6,param_2,*(undefined1 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126db5a0;
    _objc_alloc();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0005c0(puVar13,param_2,uVar6,uVar12,uVar14,uVar15,uVar10,uVar2,uVar7,0x101);
    _objc_release(uVar7);
    puVar8 = puVar13;
    func_0x00010bf44420(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c091900();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0fa440(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(puVar9,param_2,uVar12);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    uVar10 = *(undefined8 *)(lVar5 + _DAT_1127798f0);
    puVar8 = puVar13;
    func_0x00010bf07ce0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58340(uVar10,param_2,puVar8,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126db7f8;
    _objc_alloc(PTR_PTR_1126db7f8);
    func_0x00010c03df60();
    puVar9 = puVar13;
    func_0x00010bf44420(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c129ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar11);
    _objc_release(puVar9);
    func_0x00010c1bc9e0(puVar13,param_2,puVar8);
    uVar15 = *(undefined8 *)(param_1 + 0x58);
    puVar9 = puVar13;
    func_0x00010bf07ce0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = *(byte *)(param_1 + 0x68);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beabd60(lVar5,param_2,uVar15,puVar9,(bVar3 ^ 0xff) & 1,uVar12);
    _objc_release(uVar12);
    _objc_release(puVar9);
    lVar1 = 0x50;
    if (*(char *)(param_1 + 0x68) == '\0') {
      lVar1 = 0x4c;
    }
    iVar4 = *(int *)(&DAT_1127798e8 + lVar1);
    _objc_retain(puVar13);
    uVar12 = *(undefined8 *)(lVar5 + iVar4);
    *(undefined **)(lVar5 + iVar4) = puVar13;
    _objc_release(uVar12);
    puVar9 = puVar13;
    func_0x00010bf8cd00(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar13;
    func_0x00010bf07ce0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beaa820(lVar5,param_2,puVar9,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar9);
    puVar9 = puVar13;
    func_0x00010c115b00(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb0ba0(lVar5,param_2,puVar9);
    _objc_release(puVar9);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    _CACurrentMediaTime();
    func_0x00010bf743e0(uVar12);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108c9d284; end: 108c9d2c7;  */

void FUN_108c9d284(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108c9d2c8; end: 108c9d957; -[SCLensProcessingFactoryImpl createPlainLensProcessingCoreWithSettings:performer:usecase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9d2c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f511416;
  func_0x000107c31820();
  lVar2 = param_1 + _DAT_112779908;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126db7c8;
  _objc_alloc();
  lVar19 = (long)_DAT_11277990c;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bffe1e0(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126db7d0;
  _objc_alloc();
  puVar6 = PTR_PTR_1126c3450;
  func_0x00010c098380(PTR_PTR_1126c3450);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c3458;
  func_0x00010c2918a0(PTR_PTR_1126c3458);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0749c0(lVar3);
  func_0x00010c03fa60((float)*(double *)(param_1 + _DAT_112779918),puVar5,param_2,puVar6,puVar7,
                      puVar4,lVar2,0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112779904);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf56f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010beade60(param_1,param_2,uVar9,param_5);
  uVar8 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be62da0(param_1,param_2,uVar8);
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126db7d8;
  _objc_alloc();
  uVar8 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034da0(puVar6,param_2,uVar8,uVar9,lVar2,1,1);
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126db7e0;
  _objc_alloc();
  func_0x00010c001660();
  puVar10 = PTR_PTR_1126db7e8;
  _objc_alloc();
  func_0x00010bff47e0();
  puVar11 = PTR_PTR_1126db7f0;
  _objc_alloc(PTR_PTR_1126db7f0);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112779920);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112779900);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010be4a8e0(param_1,param_2,param_5);
  func_0x00010c017da0(puVar11,param_2,uVar18,uVar12,uVar8,lVar17,0);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _CACurrentMediaTime();
  func_0x00010c2a5d60(puVar11);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127798f8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 7) {
    lVar19 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar17 = lVar19;
    func_0x00010bf1f440();
    _objc_release(lVar19);
  }
  else {
    lVar17 = 0;
  }
  puVar13 = PTR_PTR_1126db5a0;
  _objc_alloc(PTR_PTR_1126db5a0);
  puVar14 = puVar7;
  func_0x00010bf57960(puVar7,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0005c0(puVar13,param_2,puVar14,uVar8,puVar11,puVar5,puVar10,param_3,uVar12,
                      param_5 == 7);
  _objc_release(uVar12);
  _objc_release(puVar14);
  puVar14 = puVar13;
  func_0x00010bf44420(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010c0fa440(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar15,param_2,uVar18);
  _objc_release(uVar18);
  _objc_release(uVar12);
  _objc_release(puVar15);
  _objc_release(puVar14);
  uVar18 = *(undefined8 *)(param_1 + _DAT_1127798f0);
  puVar14 = puVar13;
  func_0x00010bf07ce0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58340(uVar18,param_2,puVar14,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126db7f8;
  _objc_alloc(PTR_PTR_1126db7f8);
  func_0x00010c03df60();
  puVar15 = puVar13;
  func_0x00010bf44420(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c129ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(puVar16);
  _objc_release(puVar15);
  func_0x00010c1bc9e0(puVar13,param_2,puVar14);
  puVar15 = puVar13;
  func_0x00010bf07ce0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beabd60(param_1,param_2,uVar9,puVar15,0,uVar12);
  _objc_release(uVar12);
  _objc_release(puVar15);
  puVar15 = puVar13;
  func_0x00010bf8cd00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf07ce0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beaa820(param_1,param_2,puVar15,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _CACurrentMediaTime();
  func_0x00010bf743e0(puVar11);
  _objc_release(puVar14);
  _objc_release(uVar18);
  _objc_release(uVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108c9d958; end: 108c9dfc3; -[SCLensProcessingFactoryImpl createTranscodingProcessingCoreWithSettings:performer:usecase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9d958(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f511436;
  func_0x000107c31820();
  lVar2 = param_1 + _DAT_112779908;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126db7c8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11277990c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bffe1e0(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126db7d0;
  _objc_alloc();
  puVar6 = PTR_PTR_1126c3450;
  func_0x00010c098380(PTR_PTR_1126c3450);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c3458;
  func_0x00010c2918a0(PTR_PTR_1126c3458);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0749c0(lVar3);
  func_0x00010c03fa60((float)*(double *)(param_1 + _DAT_112779918),puVar5,param_2,puVar6,puVar7,
                      puVar4,lVar2,0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112779904);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf56f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010beade60(param_1,param_2,uVar9,param_5);
  uVar8 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be62da0(param_1,param_2,uVar8);
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126db7d8;
  _objc_alloc();
  uVar8 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034da0(puVar6,param_2,uVar8,uVar9,lVar2,1,1);
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126db7e0;
  _objc_alloc();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112779914);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11277992c);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112779930);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127798f4);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001660(puVar7,param_2,puVar5,uVar16,uVar17,uVar18,uVar8,puVar6);
  _objc_release(uVar8);
  puVar10 = PTR_PTR_1126db7e8;
  _objc_alloc();
  func_0x00010bff47e0();
  puVar11 = PTR_PTR_1126db7f0;
  _objc_alloc(PTR_PTR_1126db7f0);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112779920);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112779900);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017da0(puVar11,param_2,uVar17,uVar16,uVar8,2,0);
  _objc_release(uVar8);
  _objc_release(uVar16);
  _CACurrentMediaTime();
  func_0x00010c2a5d60(puVar11);
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127798f8);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126db5a0;
  _objc_alloc(PTR_PTR_1126db5a0);
  puVar13 = puVar7;
  func_0x00010bf598c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0005c0(puVar12,param_2,puVar13,uVar17,puVar11,puVar5,puVar10,param_3,uVar8,1);
  _objc_release(uVar8);
  _objc_release(puVar13);
  puVar13 = puVar12;
  func_0x00010bf44420(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar17;
  func_0x00010c0fa440(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar14,param_2,uVar16);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(puVar14);
  _objc_release(puVar13);
  uVar16 = *(undefined8 *)(param_1 + _DAT_1127798f0);
  puVar13 = puVar12;
  func_0x00010bf07ce0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58340(uVar16,param_2,puVar13,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126db7f8;
  _objc_alloc();
  func_0x00010c03df60();
  puVar14 = puVar12;
  func_0x00010bf44420(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c129ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(puVar15);
  _objc_release(puVar14);
  func_0x00010c1bc9e0(puVar12,param_2,puVar13);
  puVar14 = puVar12;
  func_0x00010bf07ce0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beabd60(param_1,param_2,uVar9,puVar14,0,uVar8);
  _objc_release(uVar8);
  _objc_release(puVar14);
  puVar14 = puVar12;
  func_0x00010bf8cd00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf07ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beaa820(param_1,param_2,puVar14,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _CACurrentMediaTime();
  func_0x00010bf743e0(puVar11);
  _objc_release(puVar13);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108c9dfc4; end: 108c9e03f; -[SCLensProcessingFactoryImpl _newCancelationControllerWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108c9dfc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127798e8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db808;
  _objc_alloc(PTR_PTR_1126db808);
  func_0x00010c0254e0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 108c9e040; end: 108c9e04f; -[SCLensProcessingFactoryImpl _lensCoreUseCaseFromPlainUsecase:] */

undefined8 FUN_108c9e040(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_3 == 7) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 108c9e050; end: 108c9e21f; -[SCLensProcessingFactoryImpl _setupCrashLogger:withApplicator:mergeWebLensesIds:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9e050(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar5 = param_4;
  func_0x00010c2a7120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c2a7120(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010bf07dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010bf07dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar5);
    _objc_release(lVar5);
  }
  puVar3 = PTR_PTR_1126ae6b8;
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c0cab40(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_5 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_1127798ec);
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010be5fb40(param_1,param_2,puVar4,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_1;
    }
  }
  func_0x00010c2288e0(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c9e220; end: 108c9e26f;  */

void FUN_108c9e220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf8d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9e270; end: 108c9e277;  */

void FUN_108c9e270(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 108c9e278; end: 108c9e36f; -[SCLensProcessingFactoryImpl _mergeWebLensIdsInto:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9e278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127798ec);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef0b80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  uVar5 = param_3;
  func_0x00010c2519e0(param_3,param_2,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c2519e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf41860(uVar5,param_2,uVar3,&PTR___NSConcreteGlobalBlock_110ac0b38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108c9e370; end: 108c9e377;  */

void FUN_108c9e370(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_arrayByAddingObjectsFromArray__1125a0188);
  return;
}



/* Entry: 108c9e378; end: 108c9e3db; -[SCLensProcessingFactoryImpl _setupLogger:forUsecase:] */

void FUN_108c9e378(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_4 - 1;
  if (uVar1 < 7) {
    uVar2 = *(undefined8 *)(&UNK_10df9f510 + uVar1 * 8);
    func_0x00010c1eab40(param_3,param_2,*(undefined8 *)(&UNK_10df9f4d8 + uVar1 * 8));
    func_0x00010c1e3de0(param_3,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c9e3dc; end: 108c9e773; -[SCLensProcessingFactoryImpl _setupAnalyticsEventsLogger:applicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9e3dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + _DAT_11277991c));
  uVar2 = param_3;
  func_0x00010bf02720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf07dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108c9e774;
  puStack_98 = &UNK_110ac0b88;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(uVar2);
  uVar4 = uVar3;
  uStack_90 = uVar2;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf5b0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108c9e9f0;
  puStack_c0 = &UNK_110ac0bd8;
  _objc_copyWeak(auStack_b8,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf73440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_108c9eaa0;
  puStack_e8 = &UNK_110ac0c08;
  _objc_copyWeak(auStack_e0,auStack_80);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c1176e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_108,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c9e774; end: 108c9e90b;  */

void FUN_108c9e774(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = (undefined **)(param_1 + 0x28);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar5 = ppuVar4;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar3 = ppuVar5;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar4;
    func_0x00010c243400();
    puVar6 = *(undefined **)(param_1 + 0x20);
    _objc_copyWeak(auStack_60,param_1 + 0x28);
    _objc_retain(ppuVar3);
    ppuStack_58 = ppuVar5;
    func_0x00010bf87460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_60);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c9e90c; end: 108c9e9eb;  */

void FUN_108c9e90c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf8ccc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c068a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0a4420(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9e9ec; end: 108c9e9ef;  */

void FUN_108c9e9ec(void)

{
  return;
}



/* Entry: 108c9e9f0; end: 108c9ea9f;  */

void FUN_108c9e9f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf8cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c068a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0a4220(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9eaa0; end: 108c9eba3;  */

void FUN_108c9eaa0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4c700(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c095a40(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9eba4; end: 108c9ecf3; -[SCLensProcessingFactoryImpl _setupTrackingEventsWithProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9eba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127798f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf092c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 108c9ecf4; end: 108c9ed33;  */

void FUN_108c9ecf4(long param_1,undefined8 param_2)

{
  func_0x00010bf1f3c0(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c200c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9ed34; end: 108c9ee8f; -[SCLensProcessingFactoryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9ed34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127798ec,0);
  _objc_storeStrong(param_1 + _DAT_1127798e8,0);
  _objc_storeStrong(param_1 + _DAT_112779938,0);
  _objc_storeStrong(param_1 + _DAT_112779934,0);
  _objc_storeStrong(param_1 + _DAT_1127798f0,0);
  _objc_storeStrong(param_1 + _DAT_112779928,0);
  _objc_storeStrong(param_1 + _DAT_11277991c,0);
  _objc_storeStrong(param_1 + _DAT_112779920,0);
  _objc_storeStrong(param_1 + _DAT_112779914,0);
  _objc_storeStrong(param_1 + _DAT_112779904,0);
  _objc_destroyWeak(param_1 + _DAT_11277990c);
  _objc_destroyWeak(param_1 + _DAT_112779908);
  _objc_storeStrong(param_1 + _DAT_112779900,0);
  _objc_storeStrong(param_1 + _DAT_112779910,0);
  _objc_storeStrong(param_1 + _DAT_1127798fc,0);
  _objc_storeStrong(param_1 + _DAT_1127798f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127798f4,0);
  return;
}



/* Entry: 108c9ee90; end: 108c9eed3; -[SCLensProcessingOffscreenFactory createTranscodingProcessorFacadeWithPerformer:frameDimensionObservable:usecase:] */

void FUN_108c9ee90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  if ((param_5 & 0xfffffffffffffffb) == 0) {
    func_0x00010beceac0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdea920(param_1,param_2,param_5,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9eed4; end: 108c9efeb; -[SCLensProcessingOffscreenFactory _createAggregatorForUseCaseIfNecessary:frameDimensionObservable:performer:] */

void FUN_108c9eed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = param_3;
  func_0x000107c2a978(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c296f60(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010beceac0(param_1,param_2,param_5,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(*(undefined8 *)(param_1 + 0x20),param_2,lVar2,uVar1);
    func_0x00010c220220(*(undefined8 *)(param_1 + 0x28),param_2,param_5,uVar1);
    lVar3 = param_1;
    func_0x00010beb75a0(param_1,param_2,param_3);
    if ((int)lVar3 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,uVar1);
    }
  }
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108c9efec; end: 108c9f1b3; -[SCLensProcessingOffscreenFactory _transcodingProcessorFacadeWithPerformer:frameDimensionObservable:usecase:] */

void FUN_108c9efec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126db6b0;
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cb80(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82a80(param_1);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010bf59ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126db5a0;
  _objc_opt_class(PTR_PTR_1126db5a0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar1 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9f1b4; end: 108c9f1db;  */

void FUN_108c9f1b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9f1dc; end: 108c9f41b; -[SCLensProcessingOffscreenFactory _handleAppDidBackground] */

void FUN_108c9f1dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c079020();
  _objc_release(uVar1);
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf51e00();
  uVar3 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_1 + 0x38);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_100,0x10);
  if (lVar4 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar1 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        if (((int)uVar8 == 0) ||
           (uVar5 = uVar3, func_0x00010bf4b900(uVar3,param_2,uVar1), (uVar5 & 1) == 0)) {
          lVar6 = lVar2;
          func_0x00010c0e00e0(lVar2,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            lVar7 = lVar6;
            func_0x00010c0f98a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar7 != 0) {
              lVar7 = lVar6;
              func_0x00010c0f98a0(lVar6);
              _objc_retainAutoreleasedReturnValue();
              puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_160 = 0xc2000000;
              pcStack_158 = FUN_108c9f41c;
              puStack_150 = &UNK_110842e18;
              _objc_retain(lVar6);
              lStack_148 = lVar6;
              func_0x00010c0f7fc0(lVar7,param_2,&puStack_168);
              _objc_release(lVar7);
              _objc_release(lStack_148);
            }
          }
          _objc_release(lVar6);
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(0x38);
  __Unwind_Resume();
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010bf07ce0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a820();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010bf44420(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 108c9f41c; end: 108c9f477;  */

void FUN_108c9f41c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf07ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a820();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf44420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c9f478; end: 108c9f493; -[SCLensProcessingOffscreenFactory _processingFromOffscreenUseCase:] */

undefined8 FUN_108c9f478(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 3;
  if (param_3 != 4) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108c9f494; end: 108c9f49f; -[SCLensProcessingOffscreenFactory _shouldWhitelistUseCaseFromCleanup:] */

bool FUN_108c9f494(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 2;
}



/* Entry: 108c9f4a0; end: 108c9f4ff; -[SCLensProcessingOffscreenFactory .cxx_destruct] */

void FUN_108c9f4a0(long param_1)

{
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



/* Entry: 108c9f500; end: 108c9f5ef; -[SCLensProcessingRemoteAssetsFactoryImpl createRemoteAssetsProviderWithApplicator:performer:] */

void FUN_108c9f500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126db810;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c023800();
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010bf7dd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110ac0c98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126db818;
  _objc_alloc(PTR_PTR_1126db818);
  func_0x00010bff4720();
  func_0x00010c18b5e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c9f5f0; end: 108c9f63f;  */

void FUN_108c9f5f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf8d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9f640; end: 108c9f647;  */

void FUN_108c9f640(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 108c9f648; end: 108c9f69b; -[SCLensProcessingRemoteAssetsFactoryImpl .cxx_destruct] */

void FUN_108c9f648(long param_1)

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



/* Entry: 108c9f69c; end: 108c9f89b; +[SCLens studioLensMetadataFromContentPath:] */

void FUN_108c9f69c(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  if ((int)puVar4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_4;
    func_0x00010c25ce00(param_4,param_3,&PTR____CFConstantStringClassReference_110ef0a78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64a80(puVar1,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 == (undefined *)0x0) {
      _objc_opt_class(param_2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110ef0ab8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_50 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&uStack_58,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar3,param_3,param_2,4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(param_2);
      puVar4 = (undefined *)0x0;
    }
    else {
      puStack_60 = (undefined *)0x0;
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,puVar1,0,
                          &puStack_60);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStack_60;
      _objc_retain(puStack_60);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) &&
     (___stack_chk_fail(), puVar4 = param_4, param_4 != (undefined *)0x0)) {
    puVar1 = param_4;
    func_0x00010c080040();
    if ((int)puVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar1 = param_4;
      func_0x00010bf4cf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_4;
      _objc_opt_class();
      func_0x00010c25dec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        func_0x00010bf9c720(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_4;
        func_0x00010bf64e40(0xc0f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
      }
      else {
        func_0x00010bf885a0(puVar2);
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c052380(param_1 / 1000.0);
      }
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c9f89c; end: 108c9f9b3; -[SCLens extraLensPushedDate] */

void FUN_108c9f89c(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = param_2;
  if (param_2 != (undefined *)0x0) {
    func_0x00010c080040();
    if ((int)puVar4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar1 = param_2;
      func_0x00010bf4cf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      _objc_opt_class();
      func_0x00010c25dec0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        func_0x00010bf9c720(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_2;
        func_0x00010bf64e40(0xc0f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
      }
      else {
        func_0x00010bf885a0(puVar3);
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c052380(param_1 / 1000.0);
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c9f9b4; end: 108c9fa27; -[SCLensEffectInfoProvider initWithLensContentInfoProvider:] */

undefined1 * FUN_108c9f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe090;
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



/* Entry: 108c9fa28; end: 108c9faab; -[SCLensEffectInfoProvider contentArchiveSizeFor:] */

undefined8 FUN_108c9fa28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bf4bce0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 108c9faac; end: 108c9fb0f; -[SCLensEffectInfoProvider pushedDateFor:] */

void FUN_108c9faac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c080040();
  uVar2 = param_3;
  if ((uVar1 & 1) == 0) {
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9e920(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c9fb10; end: 108c9fb1b; -[SCLensEffectInfoProvider .cxx_destruct] */

void FUN_108c9fb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c9fb1c; end: 108c9fe1f; -[SCLensInfoControllerAdapter initWithLensContentInfoProvider:lensApplicator:lensReadyTracker:lensFPSTracker:containerView:processingPerformer:lensPerformerProvider:lensCarouselLayoutProvider:studioLensLogger:cameraUIScopeViewContainer:] */

undefined8 *
FUN_108c9fb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126fe098;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[3];
    puVar1[3] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c9fe20; end: 108c9ff13;  */

void FUN_108c9fe20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_PTR_1126db820;
  _objc_alloc(PTR_PTR_1126db820);
  func_0x00010c023500();
  puVar6 = PTR_PTR_1126db828;
  _objc_alloc(PTR_PTR_1126db828);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  lVar7 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain();
  lVar8 = lVar7;
  func_0x00010bec59c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ba0(puVar6,param_2,puVar5,uVar1,uVar3,uVar9,0,lVar7,uVar2,uVar4,lVar8);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c9ff14; end: 108c9ff5f; -[SCLensInfoControllerAdapter dealloc] */

void FUN_108c9ff14(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  puStack_28 = PTR_PTR_1126fe098;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108c9ff60; end: 108ca0283; -[SCLensInfoControllerAdapter activate] */

void FUN_108c9ff60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar11);
  _objc_initWeak(auStack_90,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2a7120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108ca0284;
  puStack_a0 = &UNK_110916a88;
  _objc_copyWeak(auStack_98,auStack_90);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae6b8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf7dd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  uStack_88 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf9fc40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar6 = puVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar10);
  puVar7 = puVar6;
  func_0x00010c25ff60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar11);
  puVar8 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar8);
  _objc_retain(puVar10);
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained(puVar8);
  puVar9 = puVar10;
  func_0x00010bf8d080(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x00010bdc4c60(puVar8);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 108ca0284; end: 108ca02f3;  */

void FUN_108ca0284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf8d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdc4c60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca02f4; end: 108ca031f;  */

void FUN_108ca02f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf8340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ca0320; end: 108ca034b; -[SCLensInfoControllerAdapter deactivate] */

void FUN_108ca0320(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdf81f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivate_11255ba18);
  return;
}



/* Entry: 108ca034c; end: 108ca03db; -[SCLensInfoControllerAdapter _activateFeatureIfNeededWIthLensesToBeApplied:] */

void FUN_108ca034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010bf3a660(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_1;
    func_0x00010beb6140(param_1,param_2,param_3);
    if ((int)lVar1 != 0) {
      func_0x00010bef9980(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef6e0();
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ca03dc; end: 108ca0463; -[SCLensInfoControllerAdapter _deactivateFeatureIfNeeded] */

void FUN_108ca03dc(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) ||
     (uVar3 = param_1, func_0x00010beb6140(param_1,param_2,lVar2), (uVar3 & 1) == 0)) {
    func_0x00010bdf81e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108ca0464; end: 108ca04c3; -[SCLensInfoControllerAdapter _deactivate] */

void FUN_108ca0464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010bf3a660(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65b20();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 108ca04c4; end: 108ca0507; -[SCLensInfoControllerAdapter _shouldShowLensInfoFeatureForLenses:] */

undefined8 FUN_108ca04c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf04920(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ac0d08);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108ca0508; end: 108ca050f;  */

void FUN_108ca0508(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2344d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shouldShowStudioDebugUI_11266ab58);
  return;
}



/* Entry: 108ca0510; end: 108ca0587; -[SCLensInfoControllerAdapter _studioLensLogsObservable] */

void FUN_108ca0510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d5a0(0x3fe0000000000000,uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ca0588; end: 108ca05d3; -[SCLensInfoControllerAdapter studioLensLogger:didUpdateLogs:] */

void FUN_108ca0588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0b8620(param_4,param_2,&PTR___NSConcreteGlobalBlock_110ac0d48,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ca05d4; end: 108ca066b;  */

void FUN_108ca05d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126db830;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2709c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0528e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca066c; end: 108ca079f; -[SCLensInfoControllerAdapter uiEdgeInsets] */

double FUN_108ca066c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar1 = *(ulong *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfb68e0(uVar2);
  _CGRectGetHeight();
  uVar1 = uVar2;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar3 = uVar2;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb68e0();
    _CGRectIsEmpty();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar2;
      func_0x00010bf2b240(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      _objc_release(uVar1);
    }
  }
  func_0x00010bfb68e0(uVar2);
  _CGRectGetHeight();
  _objc_release(uVar2);
  return param_1 + 52.0;
}



/* Entry: 108ca07a0; end: 108ca07e7; -[SCLensInfoControllerAdapter containerView] */

void FUN_108ca07a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ca07e8; end: 108ca086b; -[SCLensInfoControllerAdapter .cxx_destruct] */

void FUN_108ca07e8(long param_1)

{
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



/* Entry: 108ca086c; end: 108ca086f; -[SCProfileEngineRuntimeReport beginRegressionMonitoring] */

void FUN_108ca086c(void)

{
  return;
}



/* Entry: 108ca0870; end: 108ca0877; -[SCProfileEngineRuntimeReport endRegressionMonitoring] */

undefined8 FUN_108ca0870(void)

{
  return 0;
}



/* Entry: 108ca0878; end: 108ca0937; -[SCLensEffectWarmupController initWithEffectComponent:effectInfoProvider:] */

undefined1 *
FUN_108ca0878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe0a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ca0938; end: 108ca0abb; -[SCLensEffectWarmupController warmupEffects:] */

void FUN_108ca0938(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_108ca0abc;
    uStack_50 = 0x108ca0acc;
    uStack_48 = 0;
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c0b8600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c180580(uVar1);
      _objc_release(lVar2);
    }
    uVar3 = puStack_68[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ca0abc; end: 108ca0ad3;  */

void FUN_108ca0abc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ca0ad4; end: 108ca0b47;  */

void FUN_108ca0ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ca0b48; end: 108ca0b7f;  */

void FUN_108ca0b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ca0b80; end: 108ca0bb7; -[SCLensEffectWarmupController clearResources] */

void FUN_108ca0b80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ca0bb8; end: 108ca0bbf; -[SCLensEffectWarmupController warmupEffectsObservable] */

undefined8 FUN_108ca0bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ca0bc0; end: 108ca0c07; -[SCLensEffectWarmupController .cxx_destruct] */

void FUN_108ca0bc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


