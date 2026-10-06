/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091ed8e8; end: 1091ed8ef; -[SCUserFeatureLaunchServices uberAvatarScopeLauncher] */

undefined8 FUN_1091ed8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 1091ed8f0; end: 1091ed8f7; -[SCUserFeatureLaunchServices spectaclesBoomboxScopeLauncher] */

undefined8 FUN_1091ed8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 1091ed8f8; end: 1091ed8ff; -[SCUserFeatureLaunchServices myProfileScopeLauncher] */

undefined8 FUN_1091ed8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 1091ed900; end: 1091ed907; -[SCUserFeatureLaunchServices groupProfileScopeLauncher] */

undefined8 FUN_1091ed900(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 1091ed908; end: 1091ed90f; -[SCUserFeatureLaunchServices friendActionSheetScopeLauncher] */

undefined8 FUN_1091ed908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 1091ed910; end: 1091ed917; -[SCUserFeatureLaunchServices groupActionSheetScopeLauncher] */

undefined8 FUN_1091ed910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 1091ed918; end: 1091ed91f; -[SCUserFeatureLaunchServices lensVideoEditingLauncher] */

undefined8 FUN_1091ed918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 1091ed920; end: 1091ed927; -[SCUserFeatureLaunchServices reportAdScopeLauncher] */

undefined8 FUN_1091ed920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 1091ed928; end: 1091ed92f; -[SCUserFeatureLaunchServices adInfoScopeLauncher] */

undefined8 FUN_1091ed928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 1091ed930; end: 1091ed937; -[SCUserFeatureLaunchServices hideAdScopeLauncher] */

undefined8 FUN_1091ed930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 1091ed938; end: 1091ed93f; -[SCUserFeatureLaunchServices businessProfilesScopeLauncher] */

undefined8 FUN_1091ed938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 1091ed940; end: 1091ed947; -[SCUserFeatureLaunchServices deeplinkSendToScopeLauncher] */

undefined8 FUN_1091ed940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 1091ed948; end: 1091ed977; -[SCUserFeatureLaunchServices setDeeplinkSendToScopeLauncher:] */

void FUN_1091ed948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091ed978; end: 1091ed97f; -[SCUserFeatureLaunchServices operaSessionScopeLauncher] */

undefined8 FUN_1091ed978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 1091ed980; end: 1091ed9af; -[SCUserFeatureLaunchServices setOperaSessionScopeLauncher:] */

void FUN_1091ed980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091ed9b0; end: 1091ed9b7; -[SCUserFeatureLaunchServices imageToVideoWriterScopeLauncher] */

undefined8 FUN_1091ed9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 1091ed9b8; end: 1091ed9e7; -[SCUserFeatureLaunchServices setImageToVideoWriterScopeLauncher:] */

void FUN_1091ed9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091ed9e8; end: 1091ed9ef; -[SCUserFeatureLaunchServices imageToVideoWriterScopeServices] */

undefined8 FUN_1091ed9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 1091ed9f0; end: 1091ed9f7; -[SCUserFeatureLaunchServices deleteStorySnapScopeServices] */

undefined8 FUN_1091ed9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 1091ed9f8; end: 1091ed9ff; -[SCUserFeatureLaunchServices adOperaSessionScopeLauncher] */

undefined8 FUN_1091ed9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 1091eda00; end: 1091eda07; -[SCUserFeatureLaunchServices spotlightSubmissionScopeLauncher] */

undefined8 FUN_1091eda00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 1091eda08; end: 1091eda0f; -[SCUserFeatureLaunchServices spotlightSubmissionScopeServices] */

undefined8 FUN_1091eda08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 1091eda10; end: 1091eda17; -[SCUserFeatureLaunchServices mapSearchScopeLauncher] */

undefined8 FUN_1091eda10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 1091eda18; end: 1091eda1f; -[SCUserFeatureLaunchServices adApplePromptScopeServices] */

undefined8 FUN_1091eda18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 1091eda20; end: 1091edd5b; -[SCUserFeatureLaunchServices .cxx_destruct] */

void FUN_1091eda20(long param_1)

{
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 1091edd5c; end: 1091ede2f; -[SCUserFeatureLauncher launchFeatureWithScope:owner:] */

void FUN_1091edd5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf94c20(param_1);
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf9d620();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126dde00;
  _objc_opt_new(PTR_PTR_1126dde00);
  func_0x00010c24f420();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x10,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1091ede30; end: 1091ede77; -[SCUserFeatureLauncher isLaunched] */

bool FUN_1091ede30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1091ede78; end: 1091edeb7; -[SCUserFeatureLauncher scope] */

void FUN_1091ede78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091edeb8; end: 1091edebf; -[SCUserFeatureLauncher endLaunchedFeature] */

void FUN_1091edeb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_endLaunchedFeature__1125c2cb8,0);
  return;
}



/* Entry: 1091edec0; end: 1091edf8f; -[SCUserFeatureLauncher endLaunchedFeature:] */

void FUN_1091edec0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c256260();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c12e1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (param_3 != 0) {
      func_0x00010c2a4ae0(lVar2,param_2,param_3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091edf90; end: 1091edfc3; -[SCUserFeatureLauncher detectedDeallocationOfObjectAssociatedWithScope:] */

void FUN_1091edf90(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091edfc4; end: 1091edfeb; -[SCUserFeatureLauncher .cxx_destruct] */

void FUN_1091edfc4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091edfec; end: 1091ee0d7; -[SCUserFeatureMultiLauncher launchFeatureWithScope:owner:] */

void FUN_1091edfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dde00;
  _objc_retain(param_4);
  _objc_opt_new();
  func_0x00010c24f420();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1091ee0d8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x000107c27da4(uVar2,&puStack_68);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091ee0d8; end: 1091ee0eb;  */

void FUN_1091ee0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_setObject_forKey__112651b80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1091ee0ec; end: 1091ee1fb; -[SCUserFeatureMultiLauncher endLaunchedFeatureWithScope:] */

void FUN_1091ee0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1091ee1fc;
  uStack_40 = 0x1091ee20c;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1091ee214;
  puStack_80 = &UNK_11084fa08;
  lStack_78 = param_1;
  puStack_58 = puStack_68;
  _objc_retain(param_3);
  uStack_70 = param_3;
  func_0x000107c27da4(uVar1,&puStack_98);
  func_0x00010c256260(puStack_58[5]);
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_70);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1091ee1fc; end: 1091ee213;  */

void FUN_1091ee1fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091ee214; end: 1091ee263;  */

void FUN_1091ee214(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0dff20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091ee264; end: 1091ee283; -[SCUserFeatureMultiLauncher detectedDeallocationOfObjectAssociatedWithScope:] */

void FUN_1091ee264(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1091ee284; end: 1091ee2bf; -[SCUserFeatureMultiLauncher .cxx_destruct] */

void FUN_1091ee284(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ee2c0; end: 1091ee367; -[SCUserFeatureOptionalLauncher launchFeatureWithScope:owner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ee2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + _DAT_1127835c8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c071800();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puStack_48 = PTR_PTR_112700ee8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_launchFeatureWithScope_owner__112600800,param_3,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091ee368; end: 1091ee3a7; -[SCUserFeatureOptionalLauncher isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1091ee368(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127835c8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c071800();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1091ee3a8; end: 1091ee3b7; -[SCUserFeatureOptionalLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ee3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127835c8);
  return;
}



/* Entry: 1091ee3b8; end: 1091ee443; -[SCUserFeatureOptionalMultiLauncher launchFeatureWithScope:owner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ee3b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127835cc);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puStack_38 = PTR_PTR_112700ef0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_launchFeatureWithScope_owner__112600800,param_3,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091ee444; end: 1091ee453; -[SCUserFeatureOptionalMultiLauncher isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ee444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127835cc),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 1091ee454; end: 1091ee467; -[SCUserFeatureOptionalMultiLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ee454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127835cc,0);
  return;
}



/* Entry: 1091ee468; end: 1091ee47b; -[SCSendToPreviewConfiguration initWithInitialText:viewConfiguration:] */

void FUN_1091ee468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x405e000000000000,param_1,PTR_s_initWithInitialText_previewHeigh_1125e5158,param_3,0,
             param_4);
  return;
}



/* Entry: 1091ee47c; end: 1091ee53b; -[SCSendToPreviewConfiguration initWithInitialText:previewHeight:useUpdatedBackgroundColor:viewConfiguration:] */

undefined1 *
FUN_1091ee47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700ef8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ee53c; end: 1091ee543; -[SCSendToPreviewConfiguration initialText] */

undefined8 FUN_1091ee53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ee544; end: 1091ee54b; -[SCSendToPreviewConfiguration previewHeight] */

undefined8 FUN_1091ee544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091ee54c; end: 1091ee553; -[SCSendToPreviewConfiguration useUpdatedBackgroundColor] */

undefined1 FUN_1091ee54c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091ee554; end: 1091ee55b; -[SCSendToPreviewConfiguration viewConfiguration] */

undefined8 FUN_1091ee554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091ee55c; end: 1091ee58b; -[SCSendToPreviewConfiguration .cxx_destruct] */

void FUN_1091ee55c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ee58c; end: 1091ee62f; -[SCSendToPreviewDisplayConfiguration initWithViewController:viewProvider:] */

undefined1 *
FUN_1091ee58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700f00;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ee630; end: 1091ee653; -[SCSendToPreviewDisplayConfiguration copyWithZone:] */

undefined8 FUN_1091ee630(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091ee654; end: 1091ee65b; -[SCSendToPreviewDisplayConfiguration viewController] */

undefined8 FUN_1091ee654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091ee65c; end: 1091ee663; -[SCSendToPreviewDisplayConfiguration viewProvider] */

undefined8 FUN_1091ee65c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ee664; end: 1091ee693; -[SCSendToPreviewDisplayConfiguration .cxx_destruct] */

void FUN_1091ee664(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ee694; end: 1091ee6f3; -[SCSendToPreviewInsetsOverride initWithInsets:] */

void FUN_1091ee694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700f08;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 1091ee6f4; end: 1091ee717; -[SCSendToPreviewInsetsOverride copyWithZone:] */

undefined8 FUN_1091ee6f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091ee718; end: 1091ee7eb; -[SCSendToPreviewInsetsOverride hash] */

ulong * FUN_1091ee718(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ushort uVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar2 = &uStack_38;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar2;
      _objc_opt_class(puVar2);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = NEON_uminv(CONCAT26(-(ushort)((double)puVar2[4] == (double)param_3[4]),
                                    CONCAT24(-(ushort)((double)puVar2[3] == (double)param_3[3]),
                                             CONCAT22(-(ushort)((double)puVar2[2] ==
                                                               (double)param_3[2]),
                                                      -(ushort)((double)puVar2[1] ==
                                                               (double)param_3[1])))),2);
        uVar6 = (uint)uVar7;
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)(ulong)(uVar6 & 1);
}



/* Entry: 1091ee7ec; end: 1091ee88b; -[SCSendToPreviewInsetsOverride isEqual:] */

ushort FUN_1091ee7ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x20) ==
                                             *(double *)(param_3 + 0x20)),
                                    CONCAT24(-(ushort)(*(double *)(param_1 + 0x18) ==
                                                      *(double *)(param_3 + 0x18)),
                                             CONCAT22(-(ushort)(*(double *)(param_1 + 0x10) ==
                                                               *(double *)(param_3 + 0x10)),
                                                      -(ushort)(*(double *)(param_1 + 8) ==
                                                               *(double *)(param_3 + 8))))),2);
      }
    }
  }
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 1091ee88c; end: 1091ee897; -[SCSendToPreviewInsetsOverride insets] */

undefined8 FUN_1091ee88c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091ee898; end: 1091ee903; +[SCSendToPreviewViewConfiguration fullFixedHeightAndWidthWithDisplayConfig:] */

void FUN_1091ee898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091ee904; end: 1091ee9ab; +[SCSendToPreviewViewConfiguration fullFixedWidthWithDisplayConfig:aspectRatio:insetsOverride:] */

void FUN_1091ee904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091ee9ac; end: 1091eea43; +[SCSendToPreviewViewConfiguration fullHeightAndWidthWithDisplayConfig:valdiContext:] */

void FUN_1091ee9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091eea44; end: 1091eea8f; +[SCSendToPreviewViewConfiguration hidden] */

void FUN_1091eea44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091eea90; end: 1091eeaf3; +[SCSendToPreviewViewConfiguration horizontalWithHorizontalViewConfigurations:] */

void FUN_1091eea90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091eeaf4; end: 1091eeb3f; +[SCSendToPreviewViewConfiguration textOnly] */

void FUN_1091eeaf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091eeb40; end: 1091eebbb; +[SCSendToPreviewViewConfiguration verticalWithDisplayConfig:aspectRatio:] */

void FUN_1091eeb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b07f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091eebbc; end: 1091eebdf; -[SCSendToPreviewViewConfiguration copyWithZone:] */

undefined8 FUN_1091eebbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091eebe0; end: 1091eecd7; -[SCSendToPreviewViewConfiguration hash] */

void FUN_1091eebe0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_60 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_48 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_a0 = 0x15;
  pcStack_88 = FUN_1091eecd8;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_a8 = PTR_PTR_112700f10;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091eecd8; end: 1091eed1b; -[SCSendToPreviewViewConfiguration internalInit] */

void FUN_1091eecd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112700f10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091eed1c; end: 1091eeeb3; -[SCSendToPreviewViewConfiguration isEqual:] */

long FUN_1091eed1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091eee8c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091eee98;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
        dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (((((bVar1) &&
              ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
           ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x50);
          if (lVar4 != *(long *)(param_3 + 0x50)) {
            func_0x00010c071ae0();
            goto LAB_1091eee98;
          }
          goto LAB_1091eee8c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_1091eee98:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1091eeeb4; end: 1091ef057; -[SCSendToPreviewViewConfiguration matchHorizontal:vertical:fullFixedHeightAndWidth:fullFixedWidth:fullHeightAndWidth:hidden:textOnly:] */

void FUN_1091eeeb4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 8);
  if (2 < lVar2) {
    if (lVar2 < 5) {
      if (lVar2 == 3) {
        if (param_6 != 0) {
          (**(code **)(param_6 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),param_6,*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x40));
        }
      }
      else if ((lVar2 == 4) && (param_7 != 0)) {
        (**(code **)(param_7 + 0x10))
                  (param_7,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
      }
    }
    else {
      if (lVar2 == 5) {
        if (param_8 == 0) goto LAB_1091ef00c;
        pcVar3 = *(code **)(param_8 + 0x10);
        lVar2 = param_8;
      }
      else {
        if ((lVar2 != 6) || (param_9 == 0)) goto LAB_1091ef00c;
        pcVar3 = *(code **)(param_9 + 0x10);
        lVar2 = param_9;
      }
      (*pcVar3)(lVar2);
    }
    goto LAB_1091ef00c;
  }
  if (lVar2 == 0) {
    if (param_3 == 0) goto LAB_1091ef00c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x20),param_4,*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_1091ef00c;
    }
    if ((lVar2 != 2) || (param_5 == 0)) goto LAB_1091ef00c;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_1091ef00c:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091ef058; end: 1091ef0c3; -[SCSendToPreviewViewConfiguration .cxx_destruct] */

void FUN_1091ef058(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ef0c4; end: 1091ef247; -[SCSendToPreviewHorizontalViewConfiguration initWithDisplayConfig:aspectRatio:title:titleLabelOverride:subtitle:insetsOverride:accessoryViewConfiguration:respectAutolayoutHeight:] */

undefined1 *
FUN_1091ef0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112700f18;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ef248; end: 1091ef26b; -[SCSendToPreviewHorizontalViewConfiguration copyWithZone:] */

undefined8 FUN_1091ef248(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091ef26c; end: 1091ef337; -[SCSendToPreviewHorizontalViewConfiguration hash] */

undefined8 * FUN_1091ef26c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_68;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1091ef45c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091ef468;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && ((((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))
              && ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            )) {
        puVar8 = (undefined8 *)puVar4[8];
        if (puVar8 != (undefined8 *)param_3[8]) {
          func_0x00010c071ae0();
          goto LAB_1091ef468;
        }
        goto LAB_1091ef45c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1091ef468:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1091ef338; end: 1091ef483; -[SCSendToPreviewHorizontalViewConfiguration isEqual:] */

long FUN_1091ef338(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091ef45c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091ef468;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_1091ef468;
        }
        goto LAB_1091ef45c;
      }
    }
    lVar4 = 0;
  }
LAB_1091ef468:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1091ef484; end: 1091ef48b; -[SCSendToPreviewHorizontalViewConfiguration displayConfig] */

undefined8 FUN_1091ef484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091ef48c; end: 1091ef493; -[SCSendToPreviewHorizontalViewConfiguration aspectRatio] */

undefined8 FUN_1091ef48c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091ef494; end: 1091ef49b; -[SCSendToPreviewHorizontalViewConfiguration title] */

undefined8 FUN_1091ef494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091ef49c; end: 1091ef4a3; -[SCSendToPreviewHorizontalViewConfiguration titleLabelOverride] */

undefined8 FUN_1091ef49c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091ef4a4; end: 1091ef4ab; -[SCSendToPreviewHorizontalViewConfiguration subtitle] */

undefined8 FUN_1091ef4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091ef4ac; end: 1091ef4b3; -[SCSendToPreviewHorizontalViewConfiguration insetsOverride] */

undefined8 FUN_1091ef4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091ef4b4; end: 1091ef4bb; -[SCSendToPreviewHorizontalViewConfiguration accessoryViewConfiguration] */

undefined8 FUN_1091ef4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091ef4bc; end: 1091ef4c3; -[SCSendToPreviewHorizontalViewConfiguration respectAutolayoutHeight] */

undefined1 FUN_1091ef4bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091ef4c4; end: 1091ef523; -[SCSendToPreviewHorizontalViewConfiguration .cxx_destruct] */

void FUN_1091ef4c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ef524; end: 1091ef58f; +[SCSendToPreviewAccessoryViewConfiguration toggleWithIdentifier:initialValue:] */

void FUN_1091ef524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dde08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091ef590; end: 1091ef5b3; -[SCSendToPreviewAccessoryViewConfiguration copyWithZone:] */

undefined8 FUN_1091ef590(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091ef5b4; end: 1091ef623; -[SCSendToPreviewAccessoryViewConfiguration hash] */

void FUN_1091ef5b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112700f20;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ef624; end: 1091ef667; -[SCSendToPreviewAccessoryViewConfiguration internalInit] */

void FUN_1091ef624(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112700f20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ef668; end: 1091ef717; -[SCSendToPreviewAccessoryViewConfiguration isEqual:] */

long FUN_1091ef668(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091ef6fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_1091ef6fc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1091ef6fc;
    }
  }
  lVar3 = 1;
LAB_1091ef6fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091ef718; end: 1091ef73f; -[SCSendToPreviewAccessoryViewConfiguration matchToggle:] */

void FUN_1091ef718(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001091ef738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 1091ef740; end: 1091ef78b; -[SCSendToPreviewAccessoryViewConfiguration .cxx_destruct] */

void FUN_1091ef740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091ef78c; end: 1091ef9d7; -[SCReplyConfiguration toReplyParameters] */

void FUN_1091ef78c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_238 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1091ef9d8;
  uStack_30 = 0x1091ef9e8;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1091ef9f0;
  puStack_68 = &UNK_110ae0cf8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1091efa34;
  puStack_98 = &UNK_110ae0d28;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1091efab0;
  puStack_c8 = &UNK_110ae0d58;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1091efb2c;
  puStack_f8 = &UNK_110ae0d88;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1091efc4c;
  puStack_128 = &UNK_110ae0db8;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1091efcc8;
  puStack_158 = &UNK_110ae0de8;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1091efe90;
  puStack_188 = &UNK_110ae0e18;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x1091eff18;
  puStack_1b8 = &UNK_110ae0e48;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_1091eff94;
  puStack_1e8 = &UNK_110ae0e78;
  puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_1091effd8;
  puStack_218 = &UNK_110ae0ea8;
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  uStack_250 = 0x1091f0054;
  puStack_248 = &UNK_110ae0ed8;
  uStack_240 = param_1;
  uStack_210 = param_1;
  puStack_208 = puStack_238;
  uStack_1e0 = param_1;
  puStack_1d8 = puStack_238;
  uStack_1b0 = param_1;
  puStack_1a8 = puStack_238;
  uStack_180 = param_1;
  puStack_178 = puStack_238;
  uStack_150 = param_1;
  puStack_148 = puStack_238;
  uStack_120 = param_1;
  puStack_118 = puStack_238;
  uStack_f0 = param_1;
  puStack_e8 = puStack_238;
  uStack_c0 = param_1;
  puStack_b8 = puStack_238;
  uStack_90 = param_1;
  puStack_88 = puStack_238;
  uStack_60 = param_1;
  puStack_58 = puStack_238;
  puStack_48 = puStack_238;
  func_0x00010c0bcaa0(param_1,param_2,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110,&puStack_140,
                      &puStack_170,&puStack_1a0,&puStack_1d0,&puStack_200,&puStack_230,&puStack_260)
  ;
  func_0x00010c1eafc0(puStack_48[5]);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091ef9d8; end: 1091ef9ef;  */

void FUN_1091ef9d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091ef9f0; end: 1091efa33;  */

void FUN_1091ef9f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be8f120(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091efa34; end: 1091efcc7;  */

void FUN_1091efa34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010be8f120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  func_0x00010bde5740(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091efcc8; end: 1091efe8f;  */

void FUN_1091efcc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be8f120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  func_0x00010c230d60(param_3);
  func_0x00010c200780(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  func_0x00010c1413e0();
  func_0x00010c1ee5a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  uVar3 = param_3;
  func_0x00010c281320(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21bc40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(uVar3);
  func_0x00010bde57a0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_7);
  func_0x00010bde5780(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
  func_0x00010bde5740(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_6);
  func_0x00010c1a21e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(param_4);
  uVar3 = param_8;
  func_0x00010bf51e00(param_8);
  _objc_release(param_8);
  func_0x00010c1bb360(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


