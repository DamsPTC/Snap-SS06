/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105864504; end: 10586464f; -[SCNGSMEPlayerFactoryImplementation initWithPlayerProvider:blizzardLogger:audioSessionServices:cameraConfig:circumstanceEngine:commandProvider:] */

undefined1 *
FUN_105864504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eaa38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105864650; end: 10586465f; -[SCNGSMEPlayerFactoryImplementation playerWithPlayerModel:modelCanChange:playbackContext:] */

void FUN_105864650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_playerWithPlayerModel_modelCanCh_11261de78);
  return;
}



/* Entry: 105864660; end: 10586486f; -[SCNGSMEPlayerFactoryImplementation interactivePlayerWithPlayerModel:loggingMetadata:] */

void FUN_105864660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x38,0);
  puVar2 = PTR_PTR_1126bf630;
  _objc_alloc(PTR_PTR_1126bf630);
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c05a9c0(puVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126bf638;
  func_0x00010c100d00();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440();
  if ((iVar1 == 0) || ((int)puVar3 == 0)) {
    puVar3 = PTR_PTR_1126bf640;
    _objc_alloc(PTR_PTR_1126bf640);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c15fac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be63320();
    func_0x00010c0371c0(puVar3);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  else {
    puVar3 = PTR_PTR_1126bf638;
    _objc_alloc(PTR_PTR_1126bf638);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c15fac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be63320();
    func_0x00010c037200(puVar3);
    _objc_release(lVar5);
    _objc_release(uVar4);
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c17ed40(puVar3);
    _objc_release(lVar5);
    _objc_storeWeak(param_1 + 0x38,puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105864870; end: 10586489f; -[SCNGSMEPlayerFactoryImplementation _newPreparePerformer] */

void FUN_105864870(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
                    /* WARNING: Could not recover jumptable at 0x00010c021530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1058648a0; end: 1058648b7; -[SCNGSMEPlayerFactoryImplementation _enableImmutableImagePlayer] */

void FUN_1058648a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e08e58,0,0);
  return;
}



/* Entry: 1058648b8; end: 105864b03; -[SCNGSMEPlayerFactoryImplementation playerWithPlayerModel:modelCanChange:playbackContext:loggingMetadata:firstFrameImage:keepLastFrameWhenStop:] */

void FUN_1058648b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_storeWeak(param_1 + 0x38,0);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105864b04;
  uStack_70 = 0x105864b14;
  uStack_68 = 0;
  puVar1 = PTR_PTR_1126bf630;
  _objc_alloc();
  uVar4 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a9c0();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_7);
  func_0x00010c2775c0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = puStack_88[5];
  _objc_retain(uVar4);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105864b04; end: 105864b1b;  */

void FUN_105864b04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105864b1c; end: 105864cab;  */

void FUN_105864b1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puVar4 = PTR_PTR_1126bf648;
    _objc_alloc();
    func_0x00010c0371a0();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    goto LAB_105864c88;
  }
  iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010be08c00();
  if (iVar3 == 0) {
LAB_105864bfc:
    puVar4 = PTR_PTR_1126bf658;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c15fac0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(lVar5 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined1 *)(param_1 + 0x49);
    func_0x00010be63320();
    func_0x00010c0371e0(puVar4,param_2,uVar6,uVar9,uVar8,uVar1,uVar10,uVar11,uVar2,lVar5);
  }
  else {
    puVar4 = PTR_PTR_1126bf650;
    func_0x00010c100d00(PTR_PTR_1126bf650,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((int)puVar4 == 0) goto LAB_105864bfc;
    puVar4 = PTR_PTR_1126bf650;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c15fac0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(lVar5 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010be63320();
    func_0x00010c037200(puVar4,param_2,uVar6,uVar9,uVar8,uVar1,uVar10,uVar11,lVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(lVar5);
LAB_105864c88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105864cac; end: 105864d37; -[SCNGSMEPlayerFactoryImplementation playerViewWithFrame:playerModelCanChange:] */

void FUN_105864cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  
  if (param_7 == 0) {
    puVar1 = PTR_PTR_1126bf660;
    _objc_opt_new(PTR_PTR_1126bf660);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  }
  else {
    puVar1 = PTR_PTR_1126bf5e0;
    _objc_alloc(PTR_PTR_1126bf5e0);
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105864d38; end: 105864d63; -[SCNGSMEPlayerFactoryImplementation markCurrentFrameAsDirty] */

void FUN_105864d38(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0bb400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105864d64; end: 105864da7; -[SCNGSMEPlayerFactoryImplementation setShouldRenderContinuously:isExportMode:] */

void FUN_105864d64(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c200d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105864da8; end: 105864e0b; -[SCNGSMEPlayerFactoryImplementation .cxx_destruct] */

void FUN_105864da8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105864e0c; end: 105864eb3; -[SCNGSMESnapDocResolverMediaAssetsReleaser initWithPlaybackAssets:playbackAssetRepository:] */

undefined1 *
FUN_105864e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaa40;
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
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105864eb4; end: 105864ef7; -[SCNGSMESnapDocResolverMediaAssetsReleaser dealloc] */

void FUN_105864eb4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c128400();
  puStack_28 = PTR_PTR_1126eaa40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105864ef8; end: 105865057; -[SCNGSMESnapDocResolverMediaAssetsReleaser releaseAllMedia] */

void FUN_105864ef8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c128420();
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  lVar2 = param_1 + 0x1c;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x1c);
  __Unwind_Resume(lVar2);
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 105865058; end: 105865087; -[SCNGSMESnapDocResolverMediaAssetsReleaser .cxx_destruct] */

void FUN_105865058(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105865088; end: 105865383; -[SCNGSMESnapDocResolver initWithSnapDocManager:asyncPerformer:overlayFormatter:userSession:memoriesTrackingImageProcessCommandScopeExposer:voiceoverMediaLoader:timelineModeConfig:objcMusicMediaLoader:snapDocEditorServices:snapDocConverter:snapRendererSnapDocConverter:circumstanceEngine:playbackAssetRepository:] */

undefined8 *
FUN_105865088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

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
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126eaa48;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf668;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 105865384; end: 105865fcf; -[SCNGSMESnapDocResolver parseFrom:] */

void FUN_105865384(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  bool bVar17;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  code *pcStack_5c0;
  undefined *puStack_5b8;
  long lStack_5b0;
  ulong uStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  code *pcStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf51e00();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar4 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc0000000;
  pcStack_118 = FUN_105865fd0;
  puStack_110 = &UNK_1108b89b0;
  puStack_108 = puVar3;
  func_0x00010c297260();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  lStack_168 = 0;
  uStack_170 = 0;
  uVar14 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = uVar5;
  func_0x00010bf52a60();
  bVar17 = false;
  if (uVar14 != 0) {
    lVar16 = *plStack_160;
    do {
      uVar13 = 0;
      do {
        if (*plStack_160 != lVar16) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(undefined8 *)(lStack_168 + uVar13 * 8);
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010c0cc820();
        _objc_release(uVar7);
        _objc_release(uVar6);
        bVar17 = (bool)((int)uVar9 == 6 | bVar17);
        uVar13 = uVar13 + 1;
      } while (uVar14 != uVar13);
      uVar14 = uVar5;
      func_0x00010bf52a60();
    } while (uVar14 != 0);
  }
  _objc_release(uVar5);
  uVar14 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf04920();
  _objc_release(uVar5);
  _objc_release(uVar14);
  uVar14 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bf30e80();
  _objc_release(uVar14);
  uVar14 = param_3;
  func_0x00010bfd6880();
  if ((int)uVar14 == 0) {
    uVar14 = 0;
  }
  else {
    uVar8 = param_3;
    func_0x00010bf8c3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bfdc300();
    _objc_release(uVar8);
  }
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (((bVar17 || (uVar13 & 1) != 0) || ((int)uVar5 == 2)) || ((uVar14 & 1) != 0)) {
    uVar14 = param_3;
    func_0x00010bf8c3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bfdc300();
    _objc_release(uVar14);
    if ((int)uVar5 == 0) {
      lVar16 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (lVar16 == 0) {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99260(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(puVar2);
        _objc_release(puVar3);
        _objc_release(param_1);
        _objc_retain(puVar4);
      }
      else {
        puVar3 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17b60();
        _objc_release(puVar3);
        uVar9 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010bf9f4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010bf8cb40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befb7e0();
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941e0();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17b60();
        _objc_release(puVar3);
        puVar10 = PTR_PTR_1126b0018;
        _objc_alloc(PTR_PTR_1126b0018);
        func_0x00010c047840();
        puVar3 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941e0();
        _objc_release(puVar3);
        puStack_1c8 = &uStack_1d0;
        uStack_1d0 = 0;
        uStack_1c0 = 0x3032000000;
        pcStack_1b8 = FUN_1058661e8;
        uStack_1b0 = 0x1058661f8;
        uStack_1a8 = 0;
        puStack_1f8 = &uStack_200;
        uStack_200 = 0;
        uStack_1f0 = 0x3032000000;
        pcStack_1e8 = FUN_1058661e8;
        uStack_1e0 = 0x1058661f8;
        uStack_1d8 = 0;
        puStack_228 = &uStack_230;
        uStack_230 = 0;
        uStack_220 = 0x3032000000;
        pcStack_218 = FUN_1058661e8;
        uStack_210 = 0x1058661f8;
        uStack_208 = 0;
        puStack_258 = &uStack_260;
        uStack_260 = 0;
        uStack_250 = 0x3032000000;
        pcStack_248 = FUN_1058661e8;
        uStack_240 = 0x1058661f8;
        uStack_238 = 0;
        puStack_288 = &uStack_290;
        uStack_290 = 0;
        uStack_280 = 0x3032000000;
        pcStack_278 = FUN_1058661e8;
        uStack_270 = 0x1058661f8;
        uStack_268 = 0;
        uStack_2c0 = 0;
        uStack_2b0 = 0x3032000000;
        pcStack_2a8 = FUN_1058661e8;
        uStack_2a0 = 0x1058661f8;
        uStack_298 = 0;
        puStack_2e8 = &uStack_2f0;
        uStack_2f0 = 0;
        uStack_2e0 = 0x3032000000;
        pcStack_2d8 = FUN_1058661e8;
        uStack_2d0 = 0x1058661f8;
        uStack_2c8 = 0;
        puStack_318 = &uStack_320;
        uStack_320 = 0;
        uStack_310 = 0x3032000000;
        pcStack_308 = FUN_1058661e8;
        uStack_300 = 0x1058661f8;
        uStack_2f8 = 0;
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_2b8 = &uStack_2c0;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puStack_348 = &uStack_350;
        uStack_350 = 0;
        uStack_340 = 0x3032000000;
        pcStack_338 = FUN_1058661e8;
        uStack_330 = 0x1058661f8;
        uStack_328 = 0;
        puStack_378 = &uStack_380;
        uStack_380 = 0;
        uStack_370 = 0x3032000000;
        pcStack_368 = FUN_1058661e8;
        uStack_360 = 0x1058661f8;
        uStack_358 = 0;
        puStack_3a8 = &uStack_3b0;
        uStack_3b0 = 0;
        uStack_3a0 = 0x3032000000;
        pcStack_398 = FUN_1058661e8;
        uStack_390 = 0x1058661f8;
        uStack_388 = 0;
        puVar12 = puVar11;
        _dispatch_group_create();
        _dispatch_group_enter();
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3d8 = 0xc2000000;
        pcStack_3d0 = FUN_105866200;
        puStack_3c8 = &UNK_11088cc20;
        puStack_3b8 = &uStack_2c0;
        _objc_retain(puVar12);
        puStack_3c0 = puVar12;
        func_0x00010c0efa60(param_1);
        _dispatch_group_enter(puVar12);
        puStack_410 = puVar3;
        uStack_408 = 0xc2000000;
        uStack_400 = 0x10586625c;
        puStack_3f8 = &UNK_1108b8a20;
        puStack_3e8 = &uStack_2f0;
        _objc_retain(puVar12);
        puStack_3f0 = puVar12;
        func_0x00010c246500(param_1);
        _dispatch_group_enter(puVar12);
        puStack_478 = puVar3;
        uStack_470 = 0xc2000000;
        pcStack_468 = FUN_1058662b8;
        puStack_460 = &UNK_1108b8a50;
        puStack_450 = &uStack_1d0;
        puStack_448 = &uStack_200;
        puStack_440 = &uStack_230;
        puStack_438 = &uStack_350;
        puStack_430 = &uStack_380;
        puStack_428 = &uStack_3b0;
        puStack_420 = &uStack_260;
        puStack_418 = &uStack_290;
        _objc_retain(puVar12);
        puStack_458 = puVar12;
        func_0x00010c158440(param_1);
        _dispatch_group_enter(puVar12);
        uStack_4a8 = 0;
        uStack_498 = 0x3032000000;
        pcStack_490 = FUN_1058661e8;
        uStack_488 = 0x1058661f8;
        uStack_480 = 0;
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        puStack_4a0 = &uStack_4a8;
        _objc_retain(uVar15);
        puStack_500 = puVar3;
        uStack_4f8 = 0xc2000000;
        pcStack_4f0 = FUN_1058665e4;
        puStack_4e8 = &UNK_1108b8ae0;
        puStack_4c0 = &uStack_4a8;
        _objc_retain(puVar12);
        puStack_4e0 = puVar12;
        lStack_4d8 = param_1;
        _objc_retain(puVar11);
        puStack_4b0 = &uStack_320;
        puStack_4d0 = puVar11;
        puStack_4b8 = &uStack_290;
        _objc_retain(uVar15);
        uStack_4c8 = uVar15;
        func_0x00010bfc0ea0(param_1);
        _dispatch_group_enter(puVar12);
        puVar1 = PTR_PTR_1126bf688;
        puStack_530 = puVar3;
        uStack_528 = 0xc2000000;
        uStack_520 = 0x105866ecc;
        puStack_518 = &UNK_1108b8b10;
        _objc_retain(puVar11);
        puStack_510 = puVar11;
        _objc_retain(puVar12);
        puStack_508 = puVar12;
        func_0x00010c0fdde0(puVar1);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puStack_5d0 = puVar3;
        uStack_5c8 = 0xc2000000;
        pcStack_5c0 = FUN_105866efc;
        puStack_5b8 = &UNK_1108b8bd0;
        puStack_590 = &uStack_1d0;
        lStack_5b0 = param_1;
        _objc_retain(param_3);
        puStack_588 = &uStack_350;
        puStack_580 = &uStack_2f0;
        puStack_578 = &uStack_4a8;
        puStack_570 = &uStack_3b0;
        puStack_568 = &uStack_230;
        puStack_560 = &uStack_260;
        puStack_558 = &uStack_290;
        puStack_550 = &uStack_320;
        uStack_5a8 = param_3;
        _objc_retain(puVar11);
        puStack_548 = &uStack_2c0;
        puStack_540 = &uStack_380;
        puStack_538 = &uStack_200;
        puStack_5a0 = puVar11;
        _objc_retain(puVar2);
        puStack_598 = puVar2;
        func_0x00010bcbe628(puVar12,uVar6,&puStack_5d0);
        _objc_retain(puVar4);
        _objc_release(puStack_598);
        _objc_release(puStack_5a0);
        _objc_release(uStack_5a8);
        _objc_release(puStack_508);
        _objc_release(puStack_510);
        _objc_release(uStack_4c8);
        _objc_release(puStack_4d0);
        _objc_release(puStack_4e0);
        _objc_release(uVar15);
        __Block_object_dispose(&uStack_4a8,8);
        _objc_release(uStack_480);
        _objc_release(puStack_458);
        _objc_release(puStack_3f0);
        _objc_release(puStack_3c0);
        _objc_release(puVar12);
        __Block_object_dispose(&uStack_3b0,8);
        _objc_release(uStack_388);
        __Block_object_dispose(&uStack_380,8);
        _objc_release(uStack_358);
        __Block_object_dispose(&uStack_350,8);
        _objc_release(uStack_328);
        _objc_release(puVar11);
        __Block_object_dispose(&uStack_320,8);
        _objc_release(uStack_2f8);
        __Block_object_dispose(&uStack_2f0,8);
        _objc_release(uStack_2c8);
        __Block_object_dispose(&uStack_2c0,8);
        _objc_release(uStack_298);
        __Block_object_dispose(&uStack_290,8);
        _objc_release(uStack_268);
        __Block_object_dispose(&uStack_260,8);
        _objc_release(uStack_238);
        __Block_object_dispose(&uStack_230,8);
        _objc_release(uStack_208);
        __Block_object_dispose(&uStack_200,8);
        _objc_release(uStack_1d8);
        __Block_object_dispose(&uStack_1d0,8);
        _objc_release(uStack_1a8);
        _objc_release(puVar10);
        _objc_release(uVar9);
        _objc_release(uVar7);
      }
      _objc_release(lVar16);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0830c0(PTR_PTR_1126bf670);
      uVar7 = uVar9;
      func_0x00010bf50f80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      uStack_190 = 0x1058660ac;
      puStack_188 = &UNK_1108b89f0;
      _objc_retain(puVar2);
      puStack_180 = puVar2;
      lStack_178 = param_1;
      func_0x00010c297260(uVar7);
      _objc_retain(puVar4);
      _objc_release(puStack_180);
      _objc_release(uVar7);
    }
  }
  else {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar2);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_retain(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_320,8);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_2c0,8);
    __Block_object_dispose(&uStack_290,8);
    __Block_object_dispose(&uStack_260,8);
    __Block_object_dispose(&uStack_230,8);
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1d0,8);
    __Unwind_Resume();
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105865fd0; end: 10586600f;  */

void FUN_105865fd0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105866010; end: 1058661e7;  */

bool FUN_105866010(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf4e080(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar4 != 0;
}



/* Entry: 1058661e8; end: 1058661ff;  */

void FUN_1058661e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105866200; end: 1058662b7;  */

void FUN_105866200(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058662b8; end: 1058664bf;  */

void FUN_1058662b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_10 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_2;
    _objc_release(uVar1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_3;
    _objc_release(uVar1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_4;
    _objc_release(uVar1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_5;
    _objc_release(uVar1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_7;
    _objc_release(uVar1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_8;
    _objc_release(uVar1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_9;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_6 != 0) {
      lVar4 = param_6;
      func_0x00010bf101a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0dc0();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      uVar1 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar2;
      _objc_release(uVar1);
      _objc_release(lVar4);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058664c0; end: 1058665e3;  */

void FUN_1058664c0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 1058665e4; end: 105866a33;  */

void FUN_1058665e4(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_2 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar6;
  _objc_release(uVar4);
  lVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    _dispatch_group_enter(*(undefined8 *)(param_2 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105866a34;
    puStack_90 = &UNK_1108b8a80;
    _objc_retain(param_4);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    lStack_88 = param_4;
    _objc_retain(uVar7);
    uStack_68 = *(undefined8 *)(param_2 + 0x50);
    param_1 = *(double *)(param_2 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uStack_80 = uVar7;
    dStack_70 = param_1;
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    uStack_78 = uVar8;
    _objc_opt_class(uVar7);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135ea0(uVar4);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  lVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) &&
     (lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28), _objc_release(),
     lVar6 == 0)) {
    _dispatch_group_enter(*(undefined8 *)(param_2 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x105866c60;
    puStack_d8 = &UNK_1108b8ab0;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar7);
    uStack_d0 = uVar7;
    _objc_retain(param_4);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    lStack_c8 = param_4;
    _objc_retain(uVar7);
    uStack_b0 = *(undefined8 *)(param_2 + 0x50);
    param_1 = *(double *)(param_2 + 0x48);
    uStack_c0 = uVar7;
    dStack_b8 = param_1;
    func_0x00010c136fa0(uVar1);
    _objc_release(lVar6);
    _objc_release(uVar1);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uVar4);
  }
  lVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 != 0) &&
     (lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28), _objc_release(),
     lVar6 == 0)) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    lVar6 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0082a0();
    _objc_release(lVar6);
    lVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar9 = *(long *)(*(long *)(param_2 + 0x50) + 8);
      _objc_retain(puVar2);
      lVar5 = *(long *)(lVar9 + 0x28);
      *(undefined **)(lVar9 + 0x28) = puVar2;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      puVar3 = PTR_PTR_1126bf680;
      _objc_alloc(PTR_PTR_1126bf680);
      lVar5 = lVar6;
      func_0x00010bf101a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0dc0();
      uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010b744494((float)param_1,puVar3,puVar2,&uStack_110,0);
      func_0x00010befa120(uVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x20));
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105866a34; end: 105866e5f;  */

void FUN_105866a34(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    lVar8 = param_3;
    func_0x00010bf0ef80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0082a0();
    _objc_release(lVar8);
    if (param_3 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_70,param_3);
    }
    puVar3 = puVar2;
    func_0x000107fb6770(puVar2,&uStack_70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_2 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      if (*(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28) == 0) {
        lVar8 = *(long *)(*(long *)(param_2 + 0x40) + 8);
        _objc_retain(puVar3);
        puVar6 = *(undefined **)(lVar8 + 0x28);
        *(undefined **)(lVar8 + 0x28) = puVar3;
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        puVar6 = PTR_PTR_1126bf680;
        _objc_alloc(PTR_PTR_1126bf680);
        uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        func_0x00010b744494(0x3f800000);
        func_0x00010befa120(uVar7);
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      puVar5 = PTR_PTR_1126bf680;
      _objc_alloc(PTR_PTR_1126bf680);
      puVar6 = puVar4;
      func_0x00010bf101a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0dc0();
      uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010b744494((float)param_1,puVar5,puVar3,&uStack_70,0);
      func_0x00010befa120(uVar7);
      _objc_release(puVar5);
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x30));
  _objc_release(param_3);
  return;
}



/* Entry: 105866e60; end: 105866efb;  */

void FUN_105866e60(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 105866efc; end: 1058673d7;  */

void FUN_105866efc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1;
  _dispatch_group_create();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1058661e8;
  uStack_88 = 0x1058661f8;
  uStack_80 = 0;
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010bf1f440();
  if (iVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar8 = puStack_a0[5];
    puStack_a0[5] = puVar5;
    _objc_release(uVar8);
  }
  uVar12 = 0;
  while( true ) {
    uVar6 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf529e0();
    lVar14 = *(long *)(param_1 + 0x20);
    if (uVar6 <= uVar12) break;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x000107ff7f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107ff9530(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c241700(lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(puVar5);
    func_0x00010befa120(puVar3);
    uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = 0;
    func_0x000107ff8530(uVar11,uVar9,&uStack_b0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uStack_b0;
    _objc_retain(uStack_b0);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(puVar5);
    _dispatch_group_enter(lVar2);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x000107ff7f70();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41e40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(puVar5);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1058673d8;
    puStack_d0 = &UNK_1108b8b40;
    _objc_retain(puVar4);
    puStack_c8 = puVar4;
    uStack_b8 = uVar12;
    _objc_retain(lVar2);
    lStack_c0 = lVar2;
    func_0x00010c297260(uVar13);
    _objc_release(lStack_c0);
    _objc_release(puStack_c8);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(lVar14);
    uVar12 = uVar12 + 1;
  }
  uVar8 = *(undefined8 *)(lVar14 + 0x10);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_10586745c;
  puStack_170 = &UNK_1108b8ba0;
  puStack_140 = &uStack_a8;
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_130 = *(undefined8 *)(param_1 + 0x68);
  uStack_128 = *(undefined8 *)(param_1 + 0x70);
  uStack_118 = *(undefined8 *)(param_1 + 0x80);
  uStack_120 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lStack_168 = lVar14;
  _objc_retain(uVar9);
  uStack_160 = uVar9;
  _objc_retain(puVar3);
  auVar15 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x48),*(undefined1 (*) [16])(param_1 + 0x48),8
                     ,1);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_108 = auVar15._8_8_;
  uStack_110 = auVar15._0_8_;
  puStack_158 = puVar3;
  _objc_retain(puVar4);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  puStack_150 = puVar4;
  _objc_retain(uVar9);
  uStack_148 = uVar9;
  func_0x00010bcbe628(lVar2,uVar8,&puStack_188);
  _objc_release(uStack_148);
  _objc_release(puStack_150);
  _objc_release(puStack_158);
  _objc_release(uStack_160);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1058673d8; end: 10586745b;  */

void FUN_1058673d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10586745c; end: 1058675c3;  */

void FUN_10586745c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar3);
  func_0x00010c243fa0(uVar1,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar3,
                      *(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1058675c4;
  puStack_70 = &UNK_1108b8b70;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  func_0x00010c297260(uVar1,param_2,&puStack_88,0);
  _objc_release(uStack_60);
  _objc_release(uVar1);
  return;
}



/* Entry: 1058675c4; end: 10586769f;  */

void FUN_1058675c4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x68) == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126bf690;
      _objc_alloc(PTR_PTR_1126bf690);
      func_0x00010c036c20();
    }
    puVar1 = PTR_PTR_1126bf678;
    _objc_alloc(PTR_PTR_1126bf678);
    func_0x00010af1f598();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058676a0; end: 105867a1b;  */

void FUN_1058676a0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  return;
}



/* Entry: 105867a1c; end: 105867afb; -[SCNGSMESnapDocResolver overlayImageFromSnapDocParser:completion:] */

void FUN_105867a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105867afc;
  puStack_60 = &UNK_1108b8c00;
  uStack_58 = param_1;
  uStack_50 = param_4;
  puStack_48 = puVar2;
  _objc_retain(param_4);
  func_0x00010c13e8c0(param_3,param_2,&puStack_78);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 105867afc; end: 105867c1b;  */

void FUN_105867afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010b7f5374(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ef880();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c1511c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar4);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105867c1c; end: 105867d2f; -[SCNGSMESnapDocResolver _playbackAbsoluteSpeedFromEdits:] */

undefined8 FUN_105867c1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f3035de;
  func_0x0001000ba800(&UNK_10f3035de);
  lVar2 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c249da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar5 = 0x3ff0000000000000;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e08f98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e08f98,param_2,lVar3);
    if (ppuVar4 == (undefined **)0x0) {
      uVar5 = 0x4000000000000000;
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e08fb8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e08fb8,param_2,lVar3);
      if (ppuVar4 == (undefined **)0x0) {
        uVar5 = 0x4010000000000000;
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e08fd8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e08fd8,param_2,lVar3);
        uVar5 = 0x3fe0000000000000;
        if (ppuVar4 != (undefined **)0x0) {
          uVar5 = 0x3ff0000000000000;
        }
      }
    }
  }
  _objc_release(lVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105867d30; end: 105867e53; -[SCNGSMESnapDocResolver sojuEditsFromSnapDocParser:snapDocEditor:completion:] */

void FUN_105867d30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f303620;
  func_0x0001000ba800(&UNK_10f303620);
  lVar2 = param_3;
  func_0x00010c13e8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126bcdd8;
    _objc_alloc(PTR_PTR_1126bcdd8);
    func_0x00010c0206e0();
  }
  (**(code **)(param_5 + 0x10))(param_5,puVar3);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(0);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105867e54; end: 105868257; -[SCNGSMESnapDocResolver genericAssetsFromSnapDocParser:queue:completion:] */

void FUN_105867e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release();
  _dispatch_group_create();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1058661e8;
  uStack_88 = 0x1058661f8;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1058661e8;
  uStack_b8 = 0x1058661f8;
  uStack_b0 = 0;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105868258;
  puStack_f8 = &UNK_1108b8c30;
  _objc_retain(puVar2);
  puStack_f0 = puVar2;
  puStack_e8 = &uStack_a8;
  puStack_e0 = &uStack_d8;
  func_0x00010c13e8a0(param_3);
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1058661e8;
  uStack_120 = 0x1058661f8;
  uStack_118 = 0;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1058661e8;
  uStack_150 = 0x1058661f8;
  uStack_148 = 0;
  puStack_168 = &uStack_170;
  puStack_138 = &uStack_140;
  _dispatch_group_enter(puVar2);
  puStack_1a8 = puVar1;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x1058682e8;
  puStack_190 = &UNK_1108b8c30;
  _objc_retain(puVar2);
  puStack_188 = puVar2;
  puStack_180 = &uStack_140;
  puStack_178 = &uStack_170;
  func_0x00010c13e8a0(param_3);
  uStack_1d8 = 0;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_1058661e8;
  uStack_1b8 = 0x1058661f8;
  uStack_1b0 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  pcStack_1f0 = FUN_1058661e8;
  uStack_1e8 = 0x1058661f8;
  uStack_1e0 = 0;
  puStack_200 = &uStack_208;
  puStack_1d0 = &uStack_1d8;
  _dispatch_group_enter(puVar2);
  puStack_240 = puVar1;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_105868378;
  puStack_228 = &UNK_1108b8c30;
  _objc_retain(puVar2);
  puStack_220 = puVar2;
  puStack_218 = &uStack_1d8;
  puStack_210 = &uStack_208;
  func_0x00010c13e8a0(param_3);
  uStack_270 = 0;
  uStack_260 = 0x3032000000;
  pcStack_258 = FUN_1058661e8;
  uStack_250 = 0x1058661f8;
  uStack_248 = 0;
  puStack_268 = &uStack_270;
  _dispatch_group_enter(puVar2);
  puStack_2a0 = puVar1;
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_105868454;
  puStack_288 = &UNK_1108b8c60;
  _objc_retain(puVar2);
  puStack_280 = puVar2;
  puStack_278 = &uStack_270;
  func_0x00010c13e8a0(param_3);
  puStack_308 = puVar1;
  uStack_300 = 0xc2000000;
  pcStack_2f8 = FUN_1058684a4;
  puStack_2f0 = &UNK_1108b8c90;
  puStack_2e0 = &uStack_a8;
  puStack_2d8 = &uStack_140;
  puStack_2c8 = &uStack_1d8;
  puStack_2c0 = &uStack_d8;
  puStack_2b8 = &uStack_170;
  puStack_2b0 = &uStack_208;
  puStack_2d0 = &uStack_270;
  puStack_2a8 = puVar3;
  _objc_retain(param_5);
  uStack_2e8 = param_5;
  func_0x00010bcbe628(puVar2,param_4,&puStack_308);
  _objc_release(uStack_2e8);
  _objc_release(puStack_280);
  __Block_object_dispose(&uStack_270,8);
  _objc_release(uStack_248);
  _objc_release(puStack_220);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(uStack_1e0);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(uStack_1b0);
  _objc_release(puStack_188);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(puStack_f0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105868258; end: 105868377;  */

void FUN_105868258(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_2 != 0 || param_5 != 0) {
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105868378; end: 105868453;  */

void FUN_105868378(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_2 != 0 || param_5 != 0) || (uVar1 = param_3, func_0x00010c27dd80(), (int)uVar1 == 3)) {
    lVar3 = param_2;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar3;
    _objc_release(uVar1);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105868454; end: 1058684a3;  */

void FUN_105868454(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0 || param_5 != 0) {
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058684a4; end: 10586861b;  */

void FUN_1058684a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar3);
  lVar5 = *(long *)(param_1 + 0x20);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10586861c; end: 10586872b;  */

void FUN_10586861c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 10586872c; end: 1058688a3; -[SCNGSMESnapDocResolver segmentMetadataFromSnapDocParser:completion:] */

void FUN_10586872c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = param_3;
  func_0x00010c13ef00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  puStack_60 = puVar2;
  _objc_retain(uVar3);
  func_0x00010c13ec80(param_3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058688a4; end: 105869123;  */

void FUN_1058688a4(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (param_5 != (undefined *)0x0)) {
    puStack_e0 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0);
    puStack_d8 = param_5;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      param_5 = (undefined *)0x0;
    }
    else {
      puVar10 = (undefined *)0x0;
      uStack_b8 = *(undefined8 *)PTR__kUTTypeMPEG4_11034b1e8;
      do {
        puVar11 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c0c6c20();
        if ((int)puVar12 == 2) {
          puVar13 = puVar11;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar13;
          func_0x00010c08fa60();
          if (puVar12 != (undefined *)0x0) {
            puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x00010c14d040();
            _objc_retainAutoreleasedReturnValue();
            if (puVar12 == (undefined *)0x0) {
              FUN_10586bb60(*(undefined8 *)(lVar1 + 0x70),
                            &PTR____CFConstantStringClassReference_110e09038,1);
              goto LAB_105868be0;
            }
            puVar14 = PTR_PTR_1126bf698;
            func_0x00010bfe94a0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105868be4;
          }
          FUN_10586bb60(*(undefined8 *)(lVar1 + 0x70),
                        &PTR____CFConstantStringClassReference_110e09058,1);
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar12 = param_4;
          func_0x00010bf529e0();
          puVar13 = param_3;
          func_0x00010bf529e0();
          if (puVar12 == puVar13) {
            puVar12 = param_4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = *(undefined **)(lVar1 + 0x68);
            if ((puVar13 == (undefined *)0x0) || (puVar12 == (undefined *)0x0)) goto LAB_105868b4c;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar13;
            func_0x00010011df08();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010bf549c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(puVar13);
            if (puVar14 == (undefined *)0x0) {
              _objc_release(0);
              puVar13 = (undefined *)0x0;
              puVar14 = (undefined *)0x0;
              goto LAB_105868be4;
            }
            func_0x00010befa120(puStack_c8);
            puVar13 = puVar14;
            func_0x00010c0d5720();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar12 = (undefined *)0x0;
LAB_105868b4c:
            puVar14 = puVar11;
            func_0x00010c0c3fe0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            _objc_alloc();
            func_0x00010c0082a0();
          }
          _objc_release(puVar14);
          if (puVar13 == (undefined *)0x0) {
LAB_105868be0:
            puVar14 = (undefined *)0x0;
          }
          else {
            puVar14 = PTR_PTR_1126bf698;
            func_0x00010bf0b9a0();
            _objc_retainAutoreleasedReturnValue();
          }
LAB_105868be4:
          _objc_release(puVar12);
        }
        _objc_release(puVar13);
        puVar12 = puVar11;
        func_0x00010bf16120(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa140(puVar5);
        _objc_release(puVar12);
        param_5 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (puVar14 == (undefined *)0x0) {
          uVar8 = *(undefined8 *)(param_2 + 0x20);
          _objc_opt_class(uVar8);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(uVar8);
          _objc_release(puVar11);
          goto LAB_105868f9c;
        }
        func_0x00010befa120(puVar2);
        func_0x00010c1582c0(puVar11);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (param_1 != 0.0) {
          func_0x00010c1582c0(puVar11);
        }
        func_0x00010c0df760(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar18);
        _objc_release(puVar12);
        puVar13 = puVar11;
        func_0x00010c2464e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        if (puVar13 != (undefined *)0x0) {
          puVar13 = puVar11;
          func_0x00010c2464e0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          if (puVar12 != (undefined *)0x0) {
            puVar13 = PTR_PTR_1126bcdd8;
            _objc_alloc();
            func_0x00010c0206e0();
            if (puVar13 != (undefined *)0x0) {
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_c0);
              _objc_release(puVar15);
              _objc_release(puVar13);
            }
          }
          _objc_release(puVar12);
        }
        puVar12 = puVar11;
        func_0x00010c0ef960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 != (undefined *)0x0) {
          lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c0ef960(puVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar6;
          func_0x00010c0ef880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          lVar7 = lVar17;
          func_0x00010c1511c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) {
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar12);
          }
          _objc_release(lVar7);
          _objc_release(lVar17);
          _objc_release(lVar6);
        }
        puVar12 = puVar11;
        func_0x00010bfc0e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = puVar11;
          func_0x00010bfc0e60(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(puVar13);
          _objc_release(puVar12);
        }
        _objc_release(puVar14);
        _objc_release(puVar11);
        puVar10 = puVar10 + 1;
        puVar11 = param_3;
        func_0x00010bf529e0();
      } while (puVar10 < puVar11);
      param_5 = (undefined *)0x0;
    }
LAB_105868f9c:
    puVar10 = puVar5;
    func_0x00010bf529e0();
    if (puVar10 != (undefined *)0x0) {
      func_0x00010bf529e0(puVar5);
      func_0x00010bf529e0(param_3);
    }
    puVar10 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar10);
    lVar17 = *(long *)(param_2 + 0x30);
    if (param_5 == (undefined *)0x0) {
      puVar9 = PTR_PTR_1126bf688;
      func_0x00010bf160a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = *(undefined **)(param_2 + 0x28);
      puStack_d8 = (undefined *)0x0;
      puVar10 = puStack_c8;
      puVar11 = puVar18;
      puVar12 = puStack_c0;
      puVar13 = puVar9;
      puVar14 = puVar3;
      puVar15 = puVar4;
      (**(code **)(lVar17 + 0x10))(lVar17,puVar2);
      _objc_release(puVar9);
    }
    else {
      puStack_e0 = (undefined *)0x0;
      puVar10 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      (**(code **)(lVar17 + 0x10))(lVar17,0);
      puStack_d8 = param_5;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_c0);
    _objc_release(puVar18);
    _objc_release(puStack_c8);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(puVar15);
  _objc_retain(puStack_e0);
  _objc_retain(puStack_d8);
  _objc_retain(uStack_d0);
  _objc_retain(puStack_c8);
  _objc_retain(puStack_c0);
  _objc_retain(uStack_b8);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar2);
  puVar2 = puVar10;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar10;
    func_0x00010bf529e0();
    puVar18 = puStack_e0;
    func_0x00010bf529e0();
    if (puVar2 == puVar18) {
      puVar2 = puStack_d8;
      func_0x00010bf0efa0(puStack_d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0c4580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new();
      _objc_retain(puVar14);
      _objc_retain(puStack_e0);
      _objc_retain(puStack_c8);
      _objc_retain(puStack_c0);
      _objc_retain(uStack_b8);
      _objc_retain(puVar13);
      _objc_retain(puVar15);
      _objc_retain(puVar2);
      func_0x00010c297260(param_3);
      puVar18 = puVar2;
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(uStack_b8);
      _objc_release(puStack_c0);
      _objc_release(puStack_c8);
      _objc_release(puStack_e0);
      _objc_release(puVar14);
      _objc_release(puVar2);
      _objc_release(puVar2);
      _objc_release(param_3);
      goto LAB_1058693cc;
    }
  }
  puVar18 = (undefined *)0x0;
LAB_1058693cc:
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(puStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_release(puStack_e0);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 105869124; end: 10586944f; -[SCNGSMESnapDocResolver snapWithSegmentMedias:mediaMsDurations:segmentTimeRanges:baseAudioVolumeProportion:audioOverride:audioMixTracks:snapInfos:globalOverlayEdits:localOverlayEdits:globalOverlayImage:localOverlayImages:localEditsCommands:] */

void FUN_105869124(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf17b60();
  _objc_release(puVar8);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf529e0();
    lVar3 = param_9;
    func_0x00010bf529e0();
    if (lVar2 == lVar3) {
      uVar4 = param_10;
      func_0x00010bf0efa0(param_10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      uVar6 = param_1;
      func_0x00010c0c4580(param_1,param_2,param_3,param_4,param_5,param_10,param_11,(uint)uVar5 ^ 1)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105869450;
      puStack_c0 = &UNK_1108b8cf0;
      puStack_b8 = puVar7;
      _objc_retain(param_7);
      uStack_b0 = param_7;
      uStack_a8 = param_1;
      _objc_retain(param_9);
      lStack_a0 = param_9;
      _objc_retain(param_12);
      uStack_98 = param_12;
      _objc_retain(param_13);
      uStack_90 = param_13;
      _objc_retain(param_14);
      uStack_88 = param_14;
      _objc_retain(param_6);
      uStack_80 = param_6;
      _objc_retain(param_8);
      uStack_78 = param_8;
      puStack_70 = puVar1;
      _objc_retain(puVar7);
      func_0x00010c297260(uVar6,param_2,&puStack_d8,0);
      puVar8 = puVar7;
      func_0x00010bfbc3e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_release(lStack_a0);
      _objc_release(uStack_b0);
      _objc_release(puStack_b8);
      _objc_release(puVar7);
      _objc_release(uVar6);
      goto LAB_1058693cc;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1058693cc:
  _objc_release(param_14);
  _objc_release(param_13);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105869450; end: 105869557;  */

void FUN_105869450(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_2;
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010911d038(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c243f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000109121874();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar4);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_2 = lVar1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105869558; end: 105869823; -[SCNGSMESnapDocResolver mediaCompositionForAssetsSequence:mediaMsDurations:segmentTimeRanges:globalOverlayEdits:localOverlayEdits:audioEnabled:] */

void FUN_105869558(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_8;
      func_0x00010c0e00e0(param_8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000107ff7f70();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be74bc0(param_2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      if (param_1 <= 0.0) {
        param_1 = 1.0;
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
      uVar7 = uVar7 + 1;
      uVar5 = param_4;
      func_0x00010bf529e0();
    } while (uVar7 < uVar5);
  }
  func_0x00010bf0c320(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c297260(param_2);
  puVar6 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105869824; end: 1058698ef;  */

void FUN_105869824(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0c4560(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_2,
                      *(undefined1 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf43d60(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058698f0; end: 105869b1b; -[SCNGSMESnapDocResolver asyncloadVideoAndAudioTracksForSegmentMedias:] */

void FUN_1058698f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105869b1c;
  puStack_88 = &UNK_1108b8d50;
  _objc_retain();
  puStack_80 = puVar1;
  func_0x00010c0b8600(param_3,param_2,&puStack_a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar6;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105869b74;
      puStack_c0 = &UNK_1108b8da0;
      uStack_a8 = uVar7;
      _objc_retain(puVar1);
      puStack_b8 = puVar1;
      _objc_retain(puVar2);
      puStack_b0 = puVar2;
      func_0x00010c0bc940(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108b8d80,&puStack_d8,
                          &PTR___NSConcreteGlobalBlock_1108b8dd0);
      _objc_release(uVar3);
      _objc_release(puStack_b0);
      _objc_release(puStack_b8);
      uVar7 = uVar7 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar3);
  }
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar6;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x105869e64;
  puStack_f0 = &UNK_1108599d8;
  puStack_e8 = puVar4;
  puStack_e0 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  func_0x00010c297260(puVar5,param_2,&puStack_108,0);
  _objc_release(puVar5);
  puVar6 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105869b1c; end: 105869b6f;  */

undefined8 FUN_105869b1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 105869b70; end: 105869b73;  */

void FUN_105869b70(void)

{
  return;
}



/* Entry: 105869b74; end: 105869d03;  */

void FUN_105869b74(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    _objc_retain(puVar1);
    func_0x00010c09c640(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = puVar1;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2533c0(uVar7);
  _objc_retain(0);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c279200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c279200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c089820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c089820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x28));
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x30));
  _objc_release(0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105869d04; end: 105869e5f;  */

void FUN_105869d04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f30383e);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  func_0x00010c2533c0(uVar6,param_2,puVar1,&uStack_58);
  uVar6 = uStack_58;
  _objc_retain(uStack_58);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279200(uVar2,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279200(uVar3,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c089820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,*(undefined8 *)(param_1 + 0x38)
                     );
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30),param_2,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105869e60; end: 105869e6f;  */

void FUN_105869e60(void)

{
  return;
}



/* Entry: 105869e70; end: 10586a977; -[SCNGSMESnapDocResolver mediaCompositionForAssets:mediaMsDurations:segmentTimeRanges:playbackSpeeds:videoAndAudioTracks:audioEnabled:] */

void FUN_105869e70(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,long param_6,undefined **param_7,undefined **param_8,
                  int param_9)

{
  double *pdVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double *pdVar10;
  double dVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  double *pdVar14;
  undefined **ppuVar15;
  float fVar16;
  double dVar17;
  undefined *puStack_2f0;
  undefined *puStack_2e0;
  undefined4 uStack_29c;
  double dStack_298;
  double dStack_290;
  double *pdStack_288;
  undefined8 uStack_280;
  double dStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double dStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double dStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  double *pdStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  double *pdStack_1c8;
  double dStack_1c0;
  double *pdStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  double *pdStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_158;
  double *pdStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double *pdStack_138;
  undefined8 uStack_130;
  double dStack_120;
  double *pdStack_118;
  undefined8 uStack_110;
  double adStack_100 [10];
  double *pdStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  pdVar1 = (double *)&UNK_10f303845;
  func_0x0001000ba800();
  ppuVar12 = param_4;
  func_0x00010bf529e0();
  ppuVar15 = param_7;
  func_0x00010bf529e0();
  ppuVar13 = param_8;
  pdVar10 = pdVar1;
  if (ppuVar12 == ppuVar15) {
    ppuVar12 = param_4;
    func_0x00010bf529e0();
    ppuVar15 = param_5;
    func_0x00010bf529e0();
    if (ppuVar12 == ppuVar15) {
      ppuVar12 = param_4;
      func_0x00010bf529e0();
      ppuVar15 = param_8;
      func_0x00010bf529e0();
      if (ppuVar12 == ppuVar15) {
        ppuVar12 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        puStack_2e0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puStack_2f0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = (undefined **)0x0;
        dStack_298 = *(double *)PTR__kCMTimeZero_110348670;
        uStack_29c = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0xc);
        uStack_98 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0x14);
        do {
          fVar16 = SUB84(param_1,0);
          ppuVar2 = param_4;
          func_0x00010bf529e0();
          if (ppuVar2 <= ppuVar15) {
            puVar9 = puStack_2e0;
            func_0x00010bf529e0();
            if (puVar9 != (undefined *)0x0) {
              ppuVar12 = (undefined **)PTR_PTR_1126bf6a8;
              _objc_alloc(PTR_PTR_1126bf6a8);
              puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010b742360(ppuVar12,1,1,puVar9,puStack_2e0);
              _objc_release(puVar9);
              if ((param_9 == 0) ||
                 (puVar9 = puStack_2f0, func_0x00010bf529e0(), puVar9 == (undefined *)0x0)) {
                ppuVar13 = (undefined **)0x0;
              }
              else {
                ppuVar13 = (undefined **)PTR_PTR_1126bf6a8;
                _objc_alloc();
                puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010b742360(ppuVar13,0,2,puVar9,puStack_2f0);
                _objc_release(puVar9);
              }
              pdVar10 = (double *)PTR_PTR_1126bf6b0;
              _objc_alloc();
              puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010b742210(pdVar10,puVar9);
              _objc_release(puVar9);
              if (pdVar10 == (double *)0x0) goto LAB_10586a8d0;
              dVar17 = pdVar10[1];
              while( true ) {
                _objc_retain(dVar17);
                dVar11 = dVar17;
                func_0x00010bf529e0();
                _objc_release(dVar17);
                if (dVar11 == 0.0) {
                  pdVar14 = (double *)0x0;
                }
                else {
                  _objc_retain(pdVar10);
                  pdVar14 = pdVar10;
                }
                _objc_release(pdVar10);
                _objc_release(ppuVar13);
                _objc_release(ppuVar12);
LAB_10586a8b8:
                _objc_release(puStack_2f0);
                _objc_release(puStack_2e0);
LAB_10586a6c4:
                func_0x0001000e2a84(pdVar1);
                _objc_release(param_8);
                _objc_release(param_7);
                _objc_release(param_6);
                _objc_release(param_5);
                _objc_release(param_4);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) break;
                ___stack_chk_fail();
LAB_10586a8d0:
                dVar17 = 0.0;
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pdVar14);
              return;
            }
            pdVar14 = (double *)0x0;
            goto LAB_10586a8b8;
          }
          lVar3 = param_6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c27c940();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            fVar16 = 0.0;
            adStack_100[9] = 0.0;
            adStack_100[8] = 0.0;
            uStack_a8 = 0;
            pdStack_b0 = (double *)0x0;
            adStack_100[7] = 0.0;
            adStack_100[6] = 0.0;
          }
          else {
            func_0x00010bdc1120(adStack_100 + 6,lVar4);
          }
          _objc_release(lVar4);
          lVar4 = lVar3;
          func_0x00010bf4d860();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            fVar16 = 0.0;
            adStack_100[3] = 0.0;
            adStack_100[2] = 0.0;
            adStack_100[5] = 0.0;
            adStack_100[4] = 0.0;
            adStack_100[1] = 0.0;
            adStack_100[0] = 0.0;
          }
          else {
            func_0x00010bdc1120(adStack_100,lVar4);
          }
          _objc_release(lVar4);
          ppuVar12 = param_7;
          func_0x00010c0dfd40(param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          _objc_release(ppuVar12);
          pdStack_118 = pdStack_b0;
          dStack_120 = adStack_100[9];
          uStack_110 = uStack_a8;
          ppuVar2 = param_5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar2;
          func_0x00010c067ec0();
          _CMTimeMake(&dStack_140,(long)(int)ppuVar12,1000);
          if (((ulong)pdStack_138 & 0x100000000) == 0) {
LAB_10586a12c:
            pdStack_138 = pdStack_118;
            dStack_140 = dStack_120;
            uStack_130 = uStack_110;
          }
          else {
            pdStack_188 = pdStack_118;
            dStack_190 = dStack_120;
            uStack_180 = uStack_110;
            pdStack_1b8 = pdStack_138;
            dStack_1c0 = dStack_140;
            uStack_1b0 = uStack_130;
            pdVar10 = &dStack_190;
            _CMTimeCompare(pdVar10,&dStack_1c0);
            if ((int)pdVar10 < 0) goto LAB_10586a12c;
          }
          dVar17 = (double)fVar16;
          pdStack_188 = pdStack_138;
          dStack_190 = dStack_140;
          uStack_180 = uStack_130;
          _CMTimeMultiplyByFloat64(&dStack_158,1.0 / dVar17,&dStack_190);
          pdStack_138 = pdStack_150;
          dStack_140 = dStack_158;
          uStack_130 = uStack_148;
          dStack_190 = 0.0;
          uStack_180 = 0x3032000000;
          pcStack_178 = FUN_1058661e8;
          uStack_170 = 0x1058661f8;
          uStack_168 = 0;
          pdVar10 = &dStack_1c0;
          dStack_1c0 = 0.0;
          uStack_1b0 = 0x3032000000;
          pcStack_1a8 = FUN_1058661e8;
          uStack_1a0 = 0x1058661f8;
          uStack_198 = 0;
          ppuVar12 = param_4;
          pdStack_1b8 = pdVar10;
          pdStack_188 = &dStack_190;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_10586a97c;
          puStack_1d0 = &UNK_11084e6b0;
          puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_208 = 0xc2000000;
          uStack_200 = 0x10586a9b4;
          puStack_1f8 = &UNK_11084d758;
          pdStack_1f0 = pdVar10;
          pdStack_1c8 = &dStack_190;
          func_0x00010c0bc940();
          ppuVar5 = param_8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar5;
          func_0x00010bfb0d80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010c154b60();
          _objc_retainAutoreleasedReturnValue();
          if (pdStack_1b8[5] == 0.0) {
            uStack_248 = SUB84(adStack_100[7],0);
            uStack_244 = (undefined4)((ulong)adStack_100[7] >> 0x20);
            dStack_250 = adStack_100[6];
            uStack_240 = SUB84(adStack_100[8],0);
            uStack_23c = (undefined4)((ulong)adStack_100[8] >> 0x20);
            uStack_268 = SUB84(adStack_100[1],0);
            uStack_264 = (undefined4)((ulong)adStack_100[1] >> 0x20);
            dStack_270 = adStack_100[0];
            uStack_260 = SUB84(adStack_100[2],0);
            uStack_25c = (undefined4)((ulong)adStack_100[2] >> 0x20);
            param_1 = adStack_100[0];
            _CMTimeSubtract(&dStack_230,&dStack_250,&dStack_270);
          }
          else {
            uStack_228 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            param_1 = *(double *)PTR__kCMTimeZero_110348670;
            uStack_220 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            dStack_230 = param_1;
          }
          if (ppuVar13 == (undefined **)0x0) {
            if (pdStack_1b8[5] != 0.0) {
              puVar9 = PTR_PTR_1126bf6a0;
              _objc_alloc(PTR_PTR_1126bf6a0);
              uStack_248 = (undefined4)uStack_228;
              uStack_244 = (undefined4)((ulong)uStack_228 >> 0x20);
              dStack_250 = dStack_230;
              uStack_240 = (undefined4)uStack_220;
              uStack_23c = (undefined4)((ulong)uStack_220 >> 0x20);
              pdVar10 = (double *)PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297200();
              _objc_retainAutoreleasedReturnValue();
              uStack_248 = SUB84(pdStack_138,0);
              uStack_244 = (undefined4)((ulong)pdStack_138 >> 0x20);
              dStack_250 = dStack_140;
              uStack_240 = (undefined4)uStack_130;
              uStack_23c = (undefined4)((ulong)uStack_130 >> 0x20);
              puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
              _objc_retainAutoreleasedReturnValue();
              dStack_250 = dStack_298;
              uStack_248 = uStack_29c;
              uStack_244 = (undefined4)uStack_a0;
              uStack_240 = (undefined4)((ulong)uStack_a0 >> 0x20);
              uStack_23c = uStack_98;
              puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
              _objc_retainAutoreleasedReturnValue();
              param_1 = dVar17;
              func_0x00010b7425e0(puVar9,ppuVar12,2,pdVar10,puVar7,puVar8,0,0,0);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(pdVar10);
              func_0x00010befa120(puStack_2e0);
              _objc_release(puVar9);
            }
            if ((param_9 != 0) && (ppuVar6 != (undefined **)0x0)) goto LAB_10586a4e4;
            if (pdStack_1b8[5] != 0.0) goto LAB_10586a5e8;
          }
          else {
            puVar9 = PTR_PTR_1126bf6a0;
            _objc_alloc(PTR_PTR_1126bf6a0);
            uStack_248 = (undefined4)uStack_228;
            uStack_244 = (undefined4)((ulong)uStack_228 >> 0x20);
            dStack_250 = dStack_230;
            uStack_240 = (undefined4)uStack_220;
            uStack_23c = (undefined4)((ulong)uStack_220 >> 0x20);
            pdVar10 = (double *)PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200();
            _objc_retainAutoreleasedReturnValue();
            uStack_248 = SUB84(pdStack_138,0);
            uStack_244 = (undefined4)((ulong)pdStack_138 >> 0x20);
            dStack_250 = dStack_140;
            uStack_240 = (undefined4)uStack_130;
            uStack_23c = (undefined4)((ulong)uStack_130 >> 0x20);
            puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            dStack_250 = dStack_298;
            uStack_248 = uStack_29c;
            uStack_244 = (undefined4)uStack_a0;
            uStack_240 = (undefined4)((ulong)uStack_a0 >> 0x20);
            uStack_23c = uStack_98;
            puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010b7425e0(dVar17,puVar9,ppuVar12,3,pdVar10,puVar7,puVar8,0,0,0);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(pdVar10);
            func_0x00010befa120(puStack_2e0);
            _objc_release(puVar9);
            if ((param_9 != 0) && (ppuVar6 != (undefined **)0x0)) {
LAB_10586a4e4:
              puVar9 = PTR_PTR_1126bf6a0;
              _objc_alloc(PTR_PTR_1126bf6a0);
              uStack_248 = (undefined4)uStack_228;
              uStack_244 = (undefined4)((ulong)uStack_228 >> 0x20);
              dStack_250 = dStack_230;
              uStack_240 = (undefined4)uStack_220;
              uStack_23c = (undefined4)((ulong)uStack_220 >> 0x20);
              pdVar10 = (double *)PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297200();
              _objc_retainAutoreleasedReturnValue();
              uStack_248 = SUB84(pdStack_138,0);
              uStack_244 = (undefined4)((ulong)pdStack_138 >> 0x20);
              dStack_250 = dStack_140;
              uStack_240 = (undefined4)uStack_130;
              uStack_23c = (undefined4)((ulong)uStack_130 >> 0x20);
              puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
              _objc_retainAutoreleasedReturnValue();
              dStack_250 = dStack_298;
              uStack_248 = uStack_29c;
              uStack_244 = (undefined4)uStack_a0;
              uStack_240 = (undefined4)((ulong)uStack_a0 >> 0x20);
              uStack_23c = uStack_98;
              puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010b7425e0(dVar17,puVar9,ppuVar12,0,pdVar10,puVar7,puVar8,0,0,0);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(pdVar10);
              func_0x00010befa120(puStack_2f0);
              _objc_release(puVar9);
            }
LAB_10586a5e8:
            dStack_270 = dStack_298;
            uStack_268 = uStack_29c;
            uStack_264 = (undefined4)uStack_a0;
            uStack_260 = (undefined4)((ulong)uStack_a0 >> 0x20);
            uStack_25c = uStack_98;
            pdStack_288 = pdStack_138;
            dStack_290 = dStack_140;
            uStack_280 = uStack_130;
            param_1 = dStack_140;
            _CMTimeAdd(&dStack_250,&dStack_270,&dStack_290);
            dStack_298 = dStack_250;
            uStack_29c = uStack_248;
            uStack_a0 = CONCAT44(uStack_240,uStack_244);
            uStack_98 = uStack_23c;
          }
          _objc_release(ppuVar6);
          _objc_release(ppuVar13);
          _objc_release(ppuVar5);
          _objc_release(ppuVar12);
          __Block_object_dispose(&dStack_1c0,8);
          _objc_release(uStack_198);
          __Block_object_dispose(&dStack_190,8);
          _objc_release(uStack_168);
          _objc_release(ppuVar2);
          _objc_release(lVar3);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while( true );
      }
    }
  }
  pdVar14 = (double *)0x0;
  goto LAB_10586a6c4;
}



/* Entry: 10586a978; end: 10586a97b;  */

void FUN_10586a978(void)

{
  return;
}



/* Entry: 10586a97c; end: 10586a9eb;  */

void FUN_10586a97c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10586a9ec; end: 10586af0b; -[SCNGSMESnapDocResolver snapWithMediaComposition:snapInfos:globalOverlayImage:localOverlayImages:localEditsCommands:] */

void FUN_10586a9ec(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = &UNK_10f303879;
  func_0x0001000ba800();
  lVar2 = param_3;
  func_0x00010911c750(param_3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar15 = 0;
  if (lVar2 == 0) goto LAB_10586ae20;
LAB_10586aaa8:
  uVar10 = *(ulong *)(lVar2 + 0x20);
  do {
    _objc_retain(uVar10);
    uVar4 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    if (uVar4 <= uVar15) {
      puVar9 = PTR_PTR_1126bf6c0;
      _objc_alloc(PTR_PTR_1126bf6c0);
      func_0x00010b743b10();
      _objc_release(puVar3);
      _objc_release(lVar2);
      func_0x0001000e2a84(puVar1);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    if (lVar2 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(lVar2 + 0x20);
    }
    _objc_retain(lVar11);
    lVar5 = lVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(uVar16);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bfe84e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(puVar14);
    if (lVar11 != 0) {
      func_0x00010befa120(puVar9);
    }
    puVar14 = puVar9;
    func_0x00010bf529e0();
    if (puVar14 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      if (lVar5 == 0) goto LAB_10586ac18;
LAB_10586abf0:
      lVar12 = *(long *)(lVar5 + 0x28);
      _objc_retain(lVar12);
      if (lVar12 == 0) {
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_d0,lVar12);
      }
      lVar13 = *(long *)(lVar5 + 0x20);
      _objc_retain(lVar13);
      if (lVar13 == 0) goto LAB_10586ac60;
      func_0x00010bdc1140(&uStack_100,lVar13);
    }
    else {
      puVar14 = puVar9;
      func_0x00010bf51e00();
      if (lVar5 != 0) goto LAB_10586abf0;
LAB_10586ac18:
      _objc_retain(0);
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      _objc_retain(0);
      lVar12 = 0;
LAB_10586ac60:
      lVar13 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
    }
    _CMTimeRangeMake(&uStack_98,&uStack_d0,&uStack_100);
    _objc_release(lVar13);
    _objc_release(lVar12);
    if (puVar14 != (undefined *)0x0) {
      uVar18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar16 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar21 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar19 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar17 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      lVar12 = param_4;
      uStack_d0 = uVar16;
      uStack_c8 = uVar18;
      uStack_c0 = uVar20;
      uStack_b8 = uVar21;
      uStack_b0 = uVar17;
      uStack_a8 = uVar19;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar13 != 0) {
        lVar13 = lVar12;
        func_0x00010bf5c9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar13;
        func_0x00010c130740();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          func_0x00010bf27a60(&uStack_100,lVar6);
        }
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        uStack_b8 = uStack_e8;
        uStack_c0 = uStack_f0;
        uStack_a8 = uStack_d8;
        uStack_b0 = uStack_e0;
        _objc_release(lVar6);
        _objc_release(lVar13);
      }
      puVar7 = PTR_PTR_1126bf6b8;
      _objc_alloc(PTR_PTR_1126bf6b8);
      uStack_f8 = uStack_90;
      uStack_100 = uStack_98;
      uStack_e8 = uStack_80;
      uStack_f0 = uStack_88;
      uStack_d8 = uStack_70;
      uStack_e0 = uStack_78;
      puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uStack_c8;
      uStack_100 = uStack_d0;
      uStack_e8 = uStack_b8;
      uStack_f0 = uStack_c0;
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      uStack_130 = uVar16;
      uStack_128 = uVar18;
      uStack_120 = uVar20;
      uStack_118 = uVar21;
      uStack_110 = uVar17;
      uStack_108 = uVar19;
      func_0x00010b7432f8(puVar7,puVar8,&uStack_100,&uStack_130,2,puVar14,0,0,0);
      _objc_release(puVar8);
      func_0x00010befa120(puVar3);
      _objc_release(puVar7);
      _objc_release(lVar12);
    }
    _objc_release(puVar14);
    _objc_release(lVar11);
    _objc_release(puVar9);
    _objc_release(lVar5);
    uVar15 = uVar15 + 1;
    if (lVar2 != 0) goto LAB_10586aaa8;
LAB_10586ae20:
    uVar10 = 0;
  } while( true );
}



/* Entry: 10586af0c; end: 10586b0b7; -[SCNGSMESnapDocResolver imageProcessCommandForGlobalOverlayImage:] */

void FUN_10586af0c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  _objc_retain(param_5);
  puVar1 = &UNK_10f3038ac;
  func_0x0001000ba800(&UNK_10f3038ac);
  if (param_5 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b2700;
    _objc_alloc();
    func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0);
    puVar3 = PTR_PTR_1126b2708;
    _objc_alloc();
    param_2 = 0x3ff0000000000000;
    func_0x00010c01ce60(0x3ff0000000000000,0x3ff0000000000000);
    puVar9 = PTR_PTR_1126b26f0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.0;
    puVar7 = puVar4;
    param_6 = puVar5;
    func_0x00010c01d120();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    func_0x0001000e2a84(0);
    __Unwind_Resume(param_5);
    _objc_retain(puVar7);
    _objc_retain(param_6);
    puVar1 = &UNK_10f3038ef;
    func_0x0001000ba800(&UNK_10f3038ef);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar9 = puVar7;
    func_0x00010c270d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23fb40();
    func_0x00010bf651a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x000107ff9770(param_1,param_2,puVar7,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108020980(puVar7);
    if (param_1 < 0.0) {
      func_0x0001080207d4(puVar7);
    }
    puVar9 = PTR_PTR_1126bf6c8;
    dVar10 = param_1;
    _objc_alloc(PTR_PTR_1126bf6c8);
    puVar5 = puVar3;
    func_0x00010c0d4f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107ff9530(puVar7);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0472e0(dVar10,param_2,puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x0001000e2a84(puVar1);
    _objc_release(param_6);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10586b0b8; end: 10586b2c3; -[SCNGSMESnapDocResolver snapInfoFromSnapDoc:overlayEdits:maxMediaAreaSize:] */

void FUN_10586b0b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f3038ef;
  func_0x0001000ba800(&UNK_10f3038ef);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar2 = param_5;
  func_0x00010c270d80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23fb40();
  func_0x00010bf651a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x000107ff9770(param_1,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108020980(param_5);
  if (param_1 < 0.0) {
    func_0x0001080207d4(param_5);
  }
  puVar5 = PTR_PTR_1126bf6c8;
  dVar8 = param_1;
  _objc_alloc(PTR_PTR_1126bf6c8);
  puVar6 = puVar4;
  func_0x00010c0d4f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ff9530(param_5);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0472e0(dVar8,param_2,puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10586b2c4; end: 10586b4ef; -[SCNGSMESnapDocResolver commandsForOverlayEdits:snapInfo:cameoStickerData:ctItemimageCache:] */

void FUN_10586b2c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x00010c2433e0(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_7 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126bf6d0;
  _objc_alloc(PTR_PTR_1126bf6d0);
  _objc_retain(puVar1);
  func_0x00010c0328a0(param_1,param_2,puVar2);
  _objc_release(param_8);
  _objc_release(param_5);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf9d620();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_6 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10586b4f0; end: 10586b55b;  */

void FUN_10586b4f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10586b55c; end: 10586b5ab; -[SCNGSMESnapDocResolver didFinishWithScope:] */

void FUN_10586b55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10586b5ac; end: 10586b6a3; -[SCNGSMESnapDocResolver .cxx_destruct] */

void FUN_10586b5ac(long param_1)

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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10586b6a4; end: 10586ba2b; -[SCNGSMESnapDocResolverServiceProvider _ngsmeSnapDocResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586b6a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  lVar1 = param_1 + _DAT_11272ae90;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272ae94;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bf6e0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272ae98;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272aea0;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar21 = 0;
    lVar15 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(param_1 + _DAT_11272aec0);
    _objc_retain(uVar21);
    lVar15 = param_1 + _DAT_11272aea4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar15;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11272aea8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c270180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11272aeac;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar17;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
    lVar18 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272aeb0;
    _objc_loadWeakRetained();
    lVar18 = param_1 + _DAT_11272aeb4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar18;
  func_0x00010bf51700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11272aebc;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar19;
  func_0x00010bf51720();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272ae9c;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047760(puVar5,param_2,lVar3,lVar4,lVar2,lVar6,uVar21,lVar7,lVar9,lVar10,lVar20,lVar11
                      ,lVar12,lVar13,0);
  _objc_release(uVar21);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar20);
  _objc_release(lVar10);
  _objc_release(lVar17);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(0);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10586ba2c; end: 10586baeb; -[SCNGSMESnapDocResolverServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586ba2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272aec0,0);
  _objc_destroyWeak(param_1 + _DAT_11272aebc);
  _objc_destroyWeak(param_1 + _DAT_11272aeb8);
  _objc_destroyWeak(param_1 + _DAT_11272aeb4);
  _objc_destroyWeak(param_1 + _DAT_11272aeb0);
  _objc_destroyWeak(param_1 + _DAT_11272aeac);
  _objc_destroyWeak(param_1 + _DAT_11272aea8);
  _objc_destroyWeak(param_1 + _DAT_11272aea4);
  _objc_destroyWeak(param_1 + _DAT_11272ae9c);
  _objc_destroyWeak(param_1 + _DAT_11272ae94);
  _objc_destroyWeak(param_1 + _DAT_11272ae90);
  _objc_destroyWeak(param_1 + _DAT_11272ae98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272aea0);
  return;
}



/* Entry: 10586baec; end: 10586bb5f; -[SCGrapheneSnapdocResolverMetric2 init] */

undefined1 * FUN_10586baec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eaa50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10586bb60; end: 10586bcd3;  */

undefined *
FUN_10586bb60(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f30399d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108b8e70);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar2 = &puStack_e0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_d8 = PTR_PTR_1126eaa58;
  puStack_e0 = puVar1;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_retain(puVar5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined1 **)((long)ppuVar2 + 8) = puVar5;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined **)((long)ppuVar2 + 0x10) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x18);
    *(undefined1 **)((long)ppuVar2 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x20);
    *(undefined8 *)((long)ppuVar2 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x28);
    *(undefined8 *)((long)ppuVar2 + 0x28) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (undefined *)ppuVar2;
}



/* Entry: 10586bcd4; end: 10586be37; -[SCFeatureDirectorModeImportEditsResolver initWithSnapDocEditorServices:overlayImageGenerator:overlayFormatter:snapDocConverter:] */

undefined1 *
FUN_10586bcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eaa58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10586be38; end: 10586c047; -[SCFeatureDirectorModeImportEditsResolver removeUnsupportedEditsFromSnapDoc:] */

void FUN_10586be38(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  lStack_38 = 0;
  puVar3 = param_1;
  func_0x00010be8dcc0(param_1,param_2,uVar2,&lStack_38);
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  puVar4 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_1;
      func_0x00010be6ec00(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x10586bfa4;
      puStack_50 = &UNK_1108b8ed0;
      puStack_48 = param_1;
      _objc_retain(uVar2);
      puVar4 = puVar3;
      uStack_40 = uVar2;
      func_0x00010bfb2660(puVar3,param_2,&puStack_68);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_40);
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10586c048; end: 10586c0ff; -[SCFeatureDirectorModeImportEditsResolver removeUnsupportedEditsAndOverlayFromSnapDoc:error:] */

void FUN_10586c048(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf9f4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010be8dcc0(param_1,param_2,uVar1,param_4);
  if (*param_4 == 0) {
    uVar2 = uVar1;
    func_0x00010c23fe00(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10586c100; end: 10586c457; -[SCFeatureDirectorModeImportEditsResolver containsUnsupportedEditsInOverlay:] */

bool FUN_10586c100(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = param_3;
  _objc_retain();
  func_0x00010586d684();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c27e6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  if (puVar5 != (undefined *)0x0) {
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c27e6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c12d500(puVar4,param_2,puVar6);
    puVar8 = PTR_PTR_1126bcd60;
    func_0x00010c2b1de0(PTR_PTR_1126bcd60,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bcd48;
    puVar3 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1c40(puVar5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1a2c40(puVar5,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf4b900(puVar6,param_2,puVar7);
    puVar3 = (undefined *)0x0;
    if ((int)puVar9 == 0) {
      puVar3 = puVar7;
    }
    func_0x00010c1a2c20(puVar5,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c8e0(puVar8,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  puVar4 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10586c458;
  puStack_60 = &UNK_1108b8f00;
  _objc_retain(puVar2);
  puVar5 = puVar4;
  puStack_58 = puVar2;
  func_0x00010bf04920(puVar4,param_2,&puStack_78);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    if (puVar6 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf04920();
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) != 0) goto LAB_10586c3f4;
    }
    puVar5 = puVar3;
    func_0x00010c2a08a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar5 != (undefined *)0x0;
    _objc_release();
  }
  else {
LAB_10586c3f4:
    bVar1 = true;
  }
  _objc_release(puStack_58);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  return bVar1;
}



/* Entry: 10586c458; end: 10586c4a3;  */

uint FUN_10586c458(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2735e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10586c4a4; end: 10586c51f;  */

undefined8 FUN_10586c4a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  FUN_10586d88c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfee000(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10586c520; end: 10586c647; -[SCFeatureDirectorModeImportEditsResolver containsUnsupportedEditsInSnapDoc:] */

long FUN_10586c520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0ff580(lVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1108b8f50);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(puVar2);
  if (lVar3 == 0) {
    uStack_48 = 0;
    lVar4 = param_1;
    func_0x00010be1e440(param_1,param_2,lVar1,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bf4bbc0(param_1,param_2,lVar4);
    }
    _objc_release(lVar4);
  }
  else {
    param_1 = 1;
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10586c648; end: 10586c68b;  */

bool FUN_10586c648(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 0xe;
}



/* Entry: 10586c68c; end: 10586c6df; -[SCFeatureDirectorModeImportEditsResolver _removeUnsupportedStickersIfAny:] */

void FUN_10586c68c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfaea20(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108b8f70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_3;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10586c6e0; end: 10586c75b;  */

uint FUN_10586c6e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  FUN_10586d88c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfee000(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 10586c75c; end: 10586c8cb; -[SCFeatureDirectorModeImportEditsResolver _getCurrentOverlayFromSnapDocWithEditor:error:] */

void FUN_10586c75c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar7,&PTR___NSConcreteGlobalBlock_1108b8f90);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar7);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0ff640(param_3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08eee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar5,0,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126bcdd8;
      _objc_alloc(PTR_PTR_1126bcdd8);
      func_0x00010c0206e0();
    }
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10586c8cc; end: 10586c947;  */

bool FUN_10586c8cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3 != 0;
}



/* Entry: 10586c948; end: 10586ca77; -[SCFeatureDirectorModeImportEditsResolver _removeUnsupportedEditsAndOverlayWithSnapDocEditor:error:] */

undefined8 FUN_10586c948(ulong param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010be8b720(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010be1e440(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (((uVar1 == 0) || (*param_4 != 0)) ||
     (uVar2 = param_1, func_0x00010bf4bbc0(param_1,param_2,uVar1), (int)uVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010be8dca0(param_1,param_2,param_3,uVar1,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    if ((*param_4 == 0) && (uVar2 != 0)) {
      func_0x00010bde7920(param_1,param_2,param_3,uVar2);
      if ((param_1 & 1) == 0) {
        puVar3 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6c5c0(param_3,param_2,puVar3,&PTR___NSConcreteGlobalBlock_1108b8fb0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10586ca78; end: 10586cabb;  */

bool FUN_10586ca78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 6;
}



/* Entry: 10586cabc; end: 10586cb87; -[SCFeatureDirectorModeImportEditsResolver _containsEditInEditor:overlay:] */

bool FUN_10586cabc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0ff580(param_3,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1108b8fd0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar5 = lVar4;
    func_0x00010bf529e0(lVar4);
    bVar1 = lVar5 != 0;
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10586cb88; end: 10586cc47;  */

bool FUN_10586cb88(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08eee0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    bVar1 = lVar6 == 0;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10586cc48; end: 10586cf1f; -[SCFeatureDirectorModeImportEditsResolver _removeUnsupportedCTItemsFromSnapDocWithEditor:currentOverlay:error:] */

void FUN_10586cc48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bcd60;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010bf308c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178c80(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf2fba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178460(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8dce0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bc80(puVar1,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf89ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191960(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf5c920(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c186220(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar7 = puVar3;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar4,param_2,puVar7,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = (undefined *)0x0;
  if (*param_5 == 0) {
    puVar7 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0ff580(param_3,param_2,puVar7,&PTR___NSConcreteGlobalBlock_1108b8ff0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar7);
    if (lVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      uStack_68 = 0x10586cf9c;
      puStack_60 = &UNK_1108a7508;
      _objc_retain(puVar4);
      puStack_58 = puVar4;
      func_0x00010c288840(param_3,param_2,lVar6,&puStack_78);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_release(puStack_58);
      puVar7 = puVar3;
    }
    _objc_release(lVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10586cf20; end: 10586cff7;  */

bool FUN_10586cf20(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3 != 0;
}



/* Entry: 10586cff8; end: 10586d05b; -[SCFeatureDirectorModeImportEditsResolver _removeAudioOverrideTrackIfAnyInSnapDocWithEditor:] */

void FUN_10586cff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c5c0(param_3,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1108b9010);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10586d05c; end: 10586d123;  */

undefined * FUN_10586d05c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar1 == 4) {
    puVar4 = PTR_PTR_1126bf6f0;
    func_0x00010c078300(PTR_PTR_1126bf6f0);
  }
  else if ((int)uVar1 == 1) {
    uVar1 = param_2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0b760();
    if ((int)uVar2 == 2) {
      puVar4 = (undefined *)0x1;
    }
    else {
      uVar2 = param_2;
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf0b760();
      puVar4 = (undefined *)(ulong)((int)uVar3 == 0xe);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10586d124; end: 10586d2db; -[SCFeatureDirectorModeImportEditsResolver _overlayImageFromSnapDocEditor:] */

void FUN_10586d124(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1108b9030);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010c0ff640(param_3,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c0c7240(param_3,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10586d320;
    puStack_58 = &UNK_1108b9050;
    puStack_50 = puVar6;
    uStack_48 = param_1;
    _objc_retain();
    func_0x00010c297260(lVar2,param_2,&puStack_70,0);
    puVar1 = puVar6;
    func_0x00010bfbc3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_50);
    _objc_release(puVar6);
    _objc_release(lVar2);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10586d2dc; end: 10586d31f;  */

bool FUN_10586d2dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 6;
}



/* Entry: 10586d320; end: 10586d47f;  */

void FUN_10586d320(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ef880();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    _objc_retain(0);
    lVar3 = lVar2;
    func_0x00010c1511c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_opt_class(uVar4);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    else {
      func_0x00010bf43d60(uVar6);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10586d480; end: 10586d513; -[SCFeatureDirectorModeImportEditsResolver .cxx_destruct] */

void FUN_10586d480(long param_1)

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



/* Entry: 10586d514; end: 10586d627; -[SCSnapDocImportingEditsResolverServiceProvider _editsResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586d514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126bf700;
  _objc_alloc(PTR_PTR_1126bf700);
  lVar2 = param_1 + _DAT_11272aedc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11272aee0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0efa80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272aee4;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272aee8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf51700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0476e0(puVar1,param_2,lVar2,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
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



/* Entry: 10586d628; end: 10586d6d7; -[SCSnapDocImportingEditsResolverServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586d628(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272aee8);
  _objc_destroyWeak(param_1 + _DAT_11272aee4);
  _objc_destroyWeak(param_1 + _DAT_11272aee0);
  _objc_destroyWeak(param_1 + _DAT_11272aedc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272aeec);
  return;
}



/* Entry: 10586d6d8; end: 10586d88b;  */

void FUN_10586d6d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0xffffffff9cd1bffe;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xffffffffba20951d;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x4bbb25c6;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x1fb290;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x24b0f4ce;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x14781;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x2398fe;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0xffffffffa7e14523;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c0e80;
  puRam00000001136c0e80 = puVar10;
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c0e98 != -1) {
    func_0x00010002a2fc(0x1136c0e98,&PTR___NSConcreteGlobalBlock_1108b90d0);
  }
  uVar1 = uRam00000001136c0e90;
  _objc_retain(uRam00000001136c0e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10586d88c; end: 10586d8df;  */

void FUN_10586d88c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c0e98 != -1) {
    func_0x00010002a2fc(0x1136c0e98,&PTR___NSConcreteGlobalBlock_1108b90d0);
  }
  uVar1 = uRam00000001136c0e90;
  _objc_retain(uRam00000001136c0e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10586d8e0; end: 10586d9f3;  */

void FUN_10586d8e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x464f605;
  func_0x00010b777958();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xffffffffa7e14523;
  lStack_58 = lVar2;
  func_0x00010b777958();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x258fbf;
  uStack_50 = uVar3;
  func_0x00010b777958();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x5a8d701e;
  uStack_48 = uVar4;
  func_0x00010b777958();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_58,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c0e90;
  puRam00000001136c0e90 = puVar6;
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010be6ec20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10586d9f4; end: 10586da33;  */

void FUN_10586d9f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6ec20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10586da34; end: 10586dcc7; -[SCSnapDocOverlayImageGenerationServiceProvider _overlayImageGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586da34(long param_1,undefined8 param_2)

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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  puVar1 = PTR_PTR_1126bf710;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272aef0;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11272aef4;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11272aef8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272aefc;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272af00;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11272af04;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272af08;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272af0c;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_11272af10;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf51700();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11272af14;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11272af18;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272af1c;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047700(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar14,lVar16,
                      lVar18,lVar20,lVar21);
  _objc_release(lVar21);
  _objc_release(param_1);
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
  _objc_release(lVar10);
  _objc_release(lVar9);
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



/* Entry: 10586dcc8; end: 10586dd77; -[SCSnapDocOverlayImageGenerationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586dcc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272af00);
  _objc_destroyWeak(param_1 + _DAT_11272af1c);
  _objc_destroyWeak(param_1 + _DAT_11272af18);
  _objc_destroyWeak(param_1 + _DAT_11272af10);
  _objc_destroyWeak(param_1 + _DAT_11272af08);
  _objc_destroyWeak(param_1 + _DAT_11272af04);
  _objc_destroyWeak(param_1 + _DAT_11272aefc);
  _objc_destroyWeak(param_1 + _DAT_11272aef8);
  _objc_destroyWeak(param_1 + _DAT_11272aef4);
  _objc_destroyWeak(param_1 + _DAT_11272aef0);
  _objc_destroyWeak(param_1 + _DAT_11272af0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272af14);
  return;
}


